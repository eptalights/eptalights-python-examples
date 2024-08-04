# ccc_01_basics
[Eptalights](https://eptalights.com) C Basic Examples.  

## Contents

- [01 - Working with filenames](#working-with-filenames)
- [02 - Working with functions](#working-with-functions)
- [03 - Working with callsites](#working-with-callsites)
- [04 - Working with steps/instructions](#working-with-steps)
- [05 - Working with Control Flow Graph(CFG)/Basicblocks](#working-with-cfg)
- [06 - Working with variables](#working-with-variables)
- [07 - Working with arrays](#working-with-arrays)
- [08 - Working with structs](#working-with-structs)
- [09 - Working with loops](#working-with-loops)
- [10 - Working with multi loops](#working-with-multi-loops)
- [11 - Working with switch](#working-with-switch)
- [12 - Working with global variables](#working-with-global-variables)

### Working with filenames  

Listing source file names.
```py
project = load_project_config("./eptalights.toml")
db = StorageAPI(project.database_path)

for filename in db.get_filenames():
    print(filename)

# output
"""
/example/src/01_print_pointer_value.cc
/example/src/02_pointer_arithmetic.cc
/example/src/03_scanf_to_malloc.cc
/example/src/04_scanf_to_calloc_to_forloop.cc
/example/src/05_multi_forloop.cc
"""
```

Filtering source filenames using `filter_filename`.
```py
project = load_project_config("./eptalights.toml")
db = StorageAPI(project.database_path)

for filename in db.get_filenames(filter_filename="_to_"):
    print(filename)

# output
"""
/example/src/03_scanf_to_malloc.cc
/example/src/04_scanf_to_calloc_to_forloop.cc
"""
```

### Working with functions

Listing all functions along with their corresponding source filenames in the project.
```py
for fn in db.get_functions():
    print(f"name={fn.name}, filename={fn.filename}")

# output
"""
name=main, filename=/example/src/07_array.cc
name=addNumbers, filename=/example/src/14_struct_arithmetic.cc
name=main, filename=/example/src/14_struct_arithmetic.cc
name=main, filename=/example/src/10_union.cc
"""
```

Listing functions of a specific file.
```py
for fn in db.get_functions(filter_filename="/example/src/01_print_pointer_value.cc"):
    print(f"name={fn.name}, filename={fn.filename}")

# output
"""
name=main, filename=/example/src/01_print_pointer_value.cc
"""
```

Searching functions by name.
```py
for fn in db.get_functions(filter_function_name="main"):
    print(f"name={fn.name}, filename={fn.filename}")

# output
"""
name=main, filename=/example/src/07_array.cc
name=main, filename=/example/src/14_struct_arithmetic.cc
name=main, filename=/example/src/10_union.cc
name=main, filename=/example/src/03_scanf_to_malloc.cc
name=main, filename=/example/src/16_buffer_overflow.cc
name=main, filename=/example/src/02_pointer_arithmetic.cc
name=main, filename=/example/src/09_switch.cc
name=main, filename=/example/src/12_struct_pointer.cc
name=main, filename=/example/src/06_struct.cc
name=main, filename=/example/src/11_global_union.cc
...
"""
```

Dumping function data.  

All data models/objects are Pydantic models/objects.  
Therefore dumping the informal representation or `__str__` will give you the Pydantic string representation.

```py
fid = "/example/src/01_print_pointer_value.cc:main"
fn = db.get_function(fid)
print(fn)

fid='/example/src/01_print_pointer_value.cc:main' name='main' filename='/example/src/01_print_pointer_value.cc' prev_nodes={} next_nodes={} prev_nodes_fids=[] next_nodes_fids=[] prev_nodes_non_fids=[] next_nodes_non_fids=[] source_lines={} variable_manager=VariableManagerModel(function_args=[], local_variables=['p', 'c', '68952807'], tmp_variables=['$T1', '$T6'], return_variables=['$T6'], variables={'p': VariableModel(vid='/example/src/01_print_pointer_value.cc:main:p', name='p', vartype=<VarType.LOCAL_VARIABLE: 'LOCAL_VARIABLE'>, unique_ssa_variables={'p_4': SSAVariableModel ...[redacted]...
```

All data models/objects are Pydantic models/objects.  
Therefore dumping the formal representation or `__repr__` will give you the pydantic repr representation.  
```py
fid = "/example/src/01_print_pointer_value.cc:main"
fn = db.get_function(fid)
print(repr(fn))

FunctionModel(fid='/example/src/01_print_pointer_value.cc:main', name='main', filename='/example/src/01_print_pointer_value.cc', prev_nodes={}, next_nodes={}, prev_nodes_fids=[], next_nodes_fids=[], prev_nodes_non_fids=[], next_nodes_non_fids=[], source_lines={}, variable_manager=VariableManagerModel(function_args=[], local_variables=['p', 'c', '68952807'], tmp_variables=['$T1', '$T6'], return_variables=['$T6'], variables={'p': VariableModel(vid='/example/src/01_print_pointer_value.cc:main:p', name='p', vartype=<VarType.LOCAL_VARIABLE: 'LOCAL_VARIABLE'>, unique_ssa_variables={'p_4': SSAVariableModel ...[redacted]...
```

We provide `FunctionModel.readable` for a more readable representation, similar to dumping GCC GIMPLE IR.  
```py
fid = "/example/src/01_print_pointer_value.cc:main"
fn = db.get_function(fid)
print(fn.readable())

<bb 2> :
EGimpleIRAssignModel <step_index=0, lowlevel_steps=[0], dst=c_0 src=expr_type:NO_EXPR, lhs:5 >
EGimpleIRAssignModel <step_index=1, lowlevel_steps=[1], dst=p_4 src=expr_type:NO_EXPR, lhs:&c_0 >
EGimpleIRAssignModel <step_index=2, lowlevel_steps=[2], dst=$T1_1 src=expr_type:NO_EXPR, lhs:p_4*p_4 >
EGimpleIRCallModel <step_index=3, lowlevel_steps=[3], fname=printf, dst=None fargs=[0=""%d"",  1=$T1_1]>
<bb 3> :
EGimpleIRAssignModel <step_index=4, lowlevel_steps=[4], dst=$T6_6 src=expr_type:NO_EXPR, lhs:0 >
EGimpleIRAssignModel <step_index=5, lowlevel_steps=[5], dst=c_0 src=expr_type:NO_EXPR, lhs: >
...[redacted]...
```

## Working with callsites  

```py
project = load_project_config("./eptalights.toml")
db = StorageAPI(project.database_path)

fid = "/example/src/01_print_pointer_value.cc:main"
fn = db.get_function(fid)

"""
Get all `printf` callsite names.
"""
for callsite in fn.callsite_manager.all(name="printf"):
    """
    print CallsiteModel model
    """
    print(callsite)

    """
    print step or instruction of the callsite
    """
    print(fn.steps[callsite.step_index].readable())

# output
"""
# callsite model
step_index=3 fn_name=['printf'] num_of_args=2 variables_used_as_callsite_arg=['$T1'] variables_defined_here=[] ssa_variables_used_as_callsite_arg=['$T1_1'] ssa_variables_defined_here=[]

# step/instruction of the callsite
EGimpleIRCallModel <step_index=3, lowlevel_steps=[3], fname=printf, dst=None fargs=[0=""%d"",  1=$T1_1]>
"""
```

## Working with steps

Steps are simply the instructions of the function and can be found in `fn.steps`.  
```py
for step in fn.steps:
    print(step.op, step.readable())

# output
"""
ASSIGN EGimpleIRAssignModel <step_index=0, lowlevel_steps=[0], dst=c_0 src=expr_type:NO_EXPR, lhs:5 >
ASSIGN EGimpleIRAssignModel <step_index=1, lowlevel_steps=[1], dst=p_4 src=expr_type:NO_EXPR, lhs:&c_0 >
ASSIGN EGimpleIRAssignModel <step_index=2, lowlevel_steps=[2], dst=$T1_1 src=expr_type:NO_EXPR, lhs:p_4*p_4 >
CALL EGimpleIRCallModel <step_index=3, lowlevel_steps=[3], fname=printf, dst=None fargs=[0=""%d"",  1=$T1_1]>
ASSIGN EGimpleIRAssignModel <step_index=4, lowlevel_steps=[4], dst=$T6_6 src=expr_type:NO_EXPR, lhs:0 >
ASSIGN EGimpleIRAssignModel <step_index=5, lowlevel_steps=[5], dst=c_0 src=expr_type:NO_EXPR, lhs: >
NOP EGimpleIRNopModel <step_index=6, lowlevel_steps=[6]>
RETURN EGimpleIRReturnModel <step_index=7, lowlevel_steps=[7], dst=$T6_6>
NOP EGimpleIRNopModel <step_index=8, lowlevel_steps=[8]>
ASSIGN EGimpleIRAssignModel <step_index=9, lowlevel_steps=[9], dst=c_0 src=expr_type:NO_EXPR, lhs: >
NOP EGimpleIRNopModel <step_index=10, lowlevel_steps=[10]>
"""
```

## Working with CFG  

```py
print(fn.cfg)

# output 
"""
basicblock_exit_nodes=[4, 5] basicblock_steps={2: [0, 1, 2, 3], 3: [4, 5], 4: [6, 7], 5: [8, 9, 10]} basicblock_edges={2: [5, 3], 3: [4], 4: [], 5: []}
"""

from pprint import pprint
pprint(fn.cfg.model_dump())

# output
"""
{'basicblock_edges': {2: [5, 3], 3: [4], 4: [], 5: []},
 'basicblock_exit_nodes': [4, 5],
 'basicblock_steps': {2: [0, 1, 2, 3], 3: [4, 5], 4: [6, 7], 5: [8, 9, 10]}}
"""
```

Getting the basic block index of a step/instruction.  
```py
step = fn.steps[0]
print(step.basicblock_index)

# output
"""
2
"""
```

## Working with variables  

All data models/objects are Pydantic models/objects.  
Therefore dumping the informal representation or `__str__` will give you the Pydantic string representation.  
```py
for var in fn.variable_manager.all():
    """
    print VariableModel model
    """
    print(var)

# output
"""
vid='/example/src/01_print_pointer_value.cc:main:p' name='p' vartype=<VarType.LOCAL_VARIABLE: 'LOCAL_VARIABLE'> unique_ssa_variables={'p_4': SSAVariableModel(ssa_name='p_4', ssa_version=4, variable_name='p', variable_defined_at_steps=[1], variable_used_at_steps=[2], variable_used_in_callsites=[], record_attributes_defined_at_steps={}, record_attributes_used_at_steps={}, ..[redacted]...

vid='/example/src/01_print_pointer_value.cc:main:c' name='c' vartype=<VarType.LOCAL_VARIABLE: 'LOCAL_VARIABLE'> unique_ssa_variables={'c_0': SSAVariableModel(ssa_name='c_0', ssa_version=0, variable_name='c', variable_defined_at_steps=[0], variable_used_at_steps=[1], variable_used_in_callsites=[], record_attributes_defined_at_steps={}, record_attributes_used_at_steps={}, --[redacted]...

vid='/example/src/01_print_pointer_value.cc:main:$T1' name='$T1' vartype=<VarType.TMP_VARIABLE: 'TMP_VARIABLE'> unique_ssa_variables={'$T1_1': SSAVariableModel(ssa_name='$T1_1', ssa_version=1, variable_name='$T1', variable_defined_at_steps=[2], variable_used_at_steps=[3], variable_used_in_callsites=['printf_3'], record_attributes_defined_at_steps={}, ..[redacted]...
"""
```

Getting variables used at a specific step/instruction.  
```py
callsite_step_index = 3
for var in fn.variable_manager.used_at_step(callsite_step_index):
    print(var)

# output
vid='/example/src/01_print_pointer_value.cc:main:$T1' name='$T1' vartype=<VarType.TMP_VARIABLE: 'TMP_VARIABLE'> unique_ssa_variables={'$T1_1': SSAVariableModel(ssa_name='$T1_1', ssa_version=1, variable_name='$T1', variable_defined_at_steps=[2], variable_used_at_steps=[3], variable_used_in_callsites=['printf_3'], record_attributes_defined_at_steps={}, ..[redacted]...
```

Getting variables defined at a specific step/instruction.  
```py
step_index = 2
for var in fn.variable_manager.defined_at_step(step_index):
    print(var)

# output
vid='/example/src/01_print_pointer_value.cc:main:$T1' name='$T1' vartype=<VarType.TMP_VARIABLE: 'TMP_VARIABLE'> unique_ssa_variables={'$T1_1': SSAVariableModel(ssa_name='$T1_1', ssa_version=1, variable_name='$T1', variable_defined_at_steps=[2], variable_used_at_steps=[3], variable_used_in_callsites=['printf_3'], record_attributes_defined_at_steps={}, ..[redacted]...
```

Getting variables, whether defined or used, at a specific step/instruction.  
```py
callsite_step_index = 3
for var in fn.variable_manager.used_or_defined_at_step(callsite_step_index):
    print(var)

# output
vid='/example/src/01_print_pointer_value.cc:main:$T1' name='$T1' vartype=<VarType.TMP_VARIABLE: 'TMP_VARIABLE'> unique_ssa_variables={'$T1_1': SSAVariableModel(ssa_name='$T1_1', ssa_version=1, variable_name='$T1', variable_defined_at_steps=[2], variable_used_at_steps=[3], variable_used_in_callsites=['printf_3'], record_attributes_defined_at_steps={}, ..[redacted]...
```

Getting a variable by name.  
```py
varname = "$T1"
var = fn.variable_manager.get(varname)
print(var)

# output
vid='/example/src/01_print_pointer_value.cc:main:$T1' name='$T1' vartype=<VarType.TMP_VARIABLE: 'TMP_VARIABLE'> unique_ssa_variables={'$T1_1': SSAVariableModel(ssa_name='$T1_1', ssa_version=1, variable_name='$T1', variable_defined_at_steps=[2], variable_used_at_steps=[3], variable_used_in_callsites=['printf_3'], record_attributes_defined_at_steps={}, ..[redacted]...
```

Getting all variable names.  
```py
varnames = fn.variable_manager.names
print(varnames)

# output
"""
['p', 'c', '68952807', '$T1', '$T6']
"""
```

## Working with arrays 

When we refer to complex variables, we mean arrays, structs, etc.  
All step variables are tokenized operands (`TokenizedOperandModel`), meaning that all details, including symbols and constants, are preserved in the variable.  
By examining the first step or instruction in our function, we can see that it is an `OpType.ASSIGN` or `EGimpleIRAssignModel` step, which has a `dst` property with the array value `arr_0[0]`.

```py
fid = "/example/src/07_array.cc:main"
fn = db.get_function(fid)
step1 = fn.steps[0]
print(step1.readable())

# output
"""
EGimpleIRAssignModel <step_index=0, lowlevel_steps=[0], dst=arr_0[0] src=expr_type:NO_EXPR, lhs:10 >
"""
```

Even though it is a complex variable, you can work with only the main variable name, `arr`, without needing to deal with the additional information `[0]` following the variable name.  
```py
print(step1.dst.variable_name)
print(step1.dst.ssa_name)

# output
arr
arr_0


print(step1.variables_defined_here)
print(step1.ssa_variables_defined_here)

# output
['arr']
['arr_0']
```

All `TokenizedOperandModel` variables or values have a `tokens` property that stores the list of tokens.  
```py
print(step1.dst.tokens)

# output
[TokenModel(token_type=<TokenType.IS_VARIABLE: 'IS_VARIABLE'>, is_base_variable=True, code_name='var_decl', value='arr_0', value_extended='arr', discovery_depth=1), TokenModel(token_type=<TokenType.IS_SYMBOL: 'IS_SYMBOL'>, is_base_variable=False, code_name='array_ref', value='[', value_extended=None, discovery_depth=1), TokenModel(token_type=<TokenType.IS_CONSTANT: 'IS_CONSTANT'>, is_base_variable=False, code_name='integer_cst', value='0', value_extended=None, discovery_depth=1), TokenModel(token_type=<TokenType.IS_SYMBOL: 'IS_SYMBOL'>, is_base_variable=False, code_name='array_ref', value=']', value_extended=None, discovery_depth=1)]
```

For a more readable version of the tokens.  
```py
step1.dst.pretty_print_tokens()

# output
[{'code_name': 'var_decl',
  'discovery_depth': 1,
  'is_base_variable': True,
  'token_type': <TokenType.IS_VARIABLE: 'IS_VARIABLE'>,
  'value': 'arr_0',
  'value_extended': 'arr'},
 {'code_name': 'array_ref',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_SYMBOL: 'IS_SYMBOL'>,
  'value': '[',
  'value_extended': None},
 {'code_name': 'integer_cst',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_CONSTANT: 'IS_CONSTANT'>,
  'value': '0',
  'value_extended': None},
 {'code_name': 'array_ref',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_SYMBOL: 'IS_SYMBOL'>,
  'value': ']',
  'value_extended': None}]
  
```

Although you can manually work with `TokenizedOperandModel` by iterating through the tokens with a `for .. in ..` loop, we provide helper functions to simplify working with complex variables or values.  
Using the example step above, you can iterate through all array index tokens using `array_index_tokens_iter`, which allows you to avoid dealing with array symbols or multi-array tokens.  
```py
print(step1.dst.readable())

# output
arr_0[0]


for arr_idx_token in step1.dst.array_index_tokens_iter():
    print(arr_idx_token)

# output
token_type=<TokenType.IS_CONSTANT: 'IS_CONSTANT'> is_base_variable=False code_name='integer_cst' value='0' value_extended=None discovery_depth=1
```

Alternatively, you can iterate through all array index token values using `array_index_token_values_iter`.  
```py
for arr_idx_token_value in step1.dst.array_index_token_values_iter():
    print(arr_idx_token_value)

# output
0
```

If you know the number of array indices and want to retrieve a specific array index.  
```py
arr_idx_token = step1.dst.array_index_token_at_index(0)
print(arr_idx_token)

# output
token_type=<TokenType.IS_CONSTANT: 'IS_CONSTANT'> is_base_variable=False code_name='integer_cst' value='0' value_extended=None discovery_depth=1
```

Not all array index values are `IS_CONSTANT`. An array index token can also be a variable name.  
When looping through all `ASSIGN` steps, we find that step index `17` with SSA variable name `arr2_0` has another variable name `i_5` as the array index. 

```py
for step in fn.steps:
    if step.op == models.OpType.ASSIGN:
        if step.dst.get_total_array_index_tokens() > 0:
            print(step.step_index, step.dst.readable())

# output
0 arr_0[0]
1 arr_0[1]
2 arr_0[2]
3 arr_0[3]
4 arr_0[4]
5 arr1_0[0]
6 arr1_0[1]
7 arr1_0[2]
8 arr1_0[3]
9 arr1_0[4]
10 arr2_0[0]
17 arr2_0[i_5]
```

Further introspection into step index `17`.  
```py
step17 = fn.steps[17]
print(step17.readable())

# output
EGimpleIRAssignModel <step_index=17, lowlevel_steps=[17], dst=arr2_0[i_5] src=expr_type:NO_EXPR, lhs:$T4_4 >


print(step17.dst.variable_name)
print(step17.dst.ssa_name)

# output
arr2
arr2_0


print(step17.variables_defined_here)
print(step17.ssa_variables_defined_here)

# output
['arr2']
['arr2_0']


arr_idx_token = step17.dst.array_index_token_at_index(0)
print(arr_idx_token)

# output
token_type=<TokenType.IS_VARIABLE: 'IS_VARIABLE'> is_base_variable=False code_name='ssa_name' value='i_5' value_extended='i' discovery_depth=1


arr_idx_token = step17.dst.array_index_token_at_index(0)
print(arr_idx_token.value)

# output
i_5


arr_idx_token = step17.dst.array_index_token_at_index(0)
print(arr_idx_token.value_extended)

# output
i
```

We can also determine if a variable is used within an array variable, similar to how variable `i` is used as an array index within the `arr2` variable.  
```py
array_step_index = 17
varname = 'i'
ssa_varname = 'i_5'

var = fn.variable_manager.get(varname)
ssa_var = var.unique_ssa_variables.get(ssa_varname)

print(ssa_var.variable_used_at_steps)
print(array_step_index in ssa_var.variable_used_at_steps)

# output
[12, 13, 17, 18]
True


for step_index, array_ssa_varname in ssa_var.used_inside_other_tokenized_operand_tokens_at_step.items():
    print(
        f"{varname} is used at step_index={step_index} inside array ssa_variable - {array_ssa_varname}"
    )

# output
i is used at step_index=17 inside array ssa_variable - ['arr2_0']
```

From the above code example, we can see that using `ssa_var.variable_used_at_steps` provides all the steps where `i_5` is used but does not specifically indicate if it is used within an array variable.  
To find steps where `i_5` is used inside an array variable, and to obtain the names of those array variables, use `ssa_var.used_inside_other_tokenized_operand_tokens_at_step`.


## Working with structs

Working with structs follows the same patterns as dealing with arrays. Using the `ASSIGN` example below.  
We can see that the address (`&`) of the struct array `emp_0` with array index `i_5` and struct attribute `Name_0` is being assigned to the SSA variable `$T1_1`.

```py
fid = "/example/src/06_struct.cc:main"
fn = db.get_function(fid)

step3 = fn.steps[3]
print(step3.readable())

# output
EGimpleIRAssignModel <step_index=3, lowlevel_steps=[3], dst=$T1_1 src=expr_type:NO_EXPR, lhs:&emp_0[i_5].Name_0 >
```

Even though `&emp_0[i_5].Name_0` is complex, with the address sign and additional variables and attributes, viewing the variable name or the variable used in that step displays only the highest-level name, which simplifies usage unless you need to delve deeper.  
Additionally, we can see that the variable name `i` appears in the step's `variables_used_here` because it is used as an array index within `emp_0`, even though it is not directly used in the step.  
```py
print(step3.src.lhs.variable_name)

# output
emp


print(step3.variables_used_here)

# output
['i', 'emp']


print(step3.ssa_variables_used_here)

# output
['i_5', 'emp_0']
```


We can view all the tokens of the `emp_0` variable in a pretty format.  
```py
step3.src.lhs.pretty_print_tokens()

[{'code_name': 'addr_expr',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_SYMBOL: 'IS_SYMBOL'>,
  'value': '&',
  'value_extended': None},
 {'code_name': 'var_decl',
  'discovery_depth': 1,
  'is_base_variable': True,
  'token_type': <TokenType.IS_VARIABLE: 'IS_VARIABLE'>,
  'value': 'emp_0',
  'value_extended': 'emp'},
 {'code_name': 'array_ref',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_SYMBOL: 'IS_SYMBOL'>,
  'value': '[',
  'value_extended': None},
 {'code_name': 'ssa_name',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_VARIABLE: 'IS_VARIABLE'>,
  'value': 'i_5',
  'value_extended': 'i'},
 {'code_name': 'array_ref',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_SYMBOL: 'IS_SYMBOL'>,
  'value': ']',
  'value_extended': None},
 {'code_name': 'component_ref',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_SYMBOL: 'IS_SYMBOL'>,
  'value': '.',
  'value_extended': None},
 {'code_name': 'field_decl',
  'discovery_depth': 1,
  'is_base_variable': False,
  'token_type': <TokenType.IS_ATTRIBUTE: 'IS_ATTRIBUTE'>,
  'value': 'Name_0',
  'value_extended': 'Name'}]
```

To access the struct attributes of `emp_0`, you can use a Python `for` loop to iterate over the tokens and isolate attributes by checking if the `token_type` is `models.TokenType.IS_ATTRIBUTE`.  
```py
for token in step3.src.lhs.tokens:
    if token.token_type == models.TokenType.IS_ATTRIBUTE:
        print(f"ssa_varname={token.value}, varname={token.value_extended}")

# output
ssa_varname=Name_0, varname=Name
```

Sometimes, structs can have nested attributes like `emp[10].attr.history.name`, and using a `for` loop would require keeping track of accessed attributes.  
We offer a more straightforward approach for handling struct attributes using `record_attributes_defined_at_steps` and `record_attributes_used_at_steps`.  
These properties allow you to see where record attributes are defined and used, regardless of how they are accessed, whether through `.` or `->`. They provide information about the step and the attributes accessed.

```py
varname = step3.src.lhs.variable_name
ssa_varname = step3.src.lhs.ssa_name

ssa_variable = fn.variable_manager.get(varname).unique_ssa_variables.get(ssa_varname)

print(ssa_variable.record_attributes_defined_at_steps)
print(ssa_variable.record_attributes_used_at_steps)

# output
{2: ['#employeeID'], 7: ['#WeekAttendence']}
{3: ['#Name'], 13: ['#Name'], 14: ['#employeeID'], 19: ['#WeekAttendence']}
```

Since we are only interested in step index `3`, we can retrieve the specific step.  
```py
step3 = fn.steps[3]

varname = step3.src.lhs.variable_name
ssa_varname = step3.src.lhs.ssa_name

ssa_variable = fn.variable_manager.get(varname).unique_ssa_variables.get(ssa_varname)
print(ssa_variable.record_attributes_used_at_steps.get(step3.step_index))

# output
['#Name']
```

In the case of multiple record attributes being used, such as in the example `emp[10].attr.history->name`, the result will be `['#attr#history#name']`, regardless of whether the symbol (`.`, `->`) is used.  
```py
print(ssa_variable.record_attributes_used_at_steps.get(step.step_index))

# output
['#attr#history#name']
```

## Working with loops
Coming soon …

## Working with multi loops
Coming soon …

## Working with switch
Coming soon …

## Working with global variables
Coming soon ...

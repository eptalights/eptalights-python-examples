# cpp_01_basics
[Eptalights](https://eptalights.com) Sophia C++ Basic Examples.  

Remember, this example repository is already configured with its database, so it should be straightforward to use after cloning or downloading the repo.  

### Directory Structure

All C source code can be found [here](src/).  
All C GIMPLE IR JSON data extracted with Eptalights Sophia's [sophia-extractor-cxx](https://github.com/eptalights/sophia-extractor-cxx) can be found [here](sophia_extract_output_gimple/).  
Sophia's decompiled Pseudo-C code for all functions is provided [here](__sophia_decompiled_code/).  
Additionally, Eptalights Sophia offers a sample database (`sophia_ir.db`) and a configuration file (`sophia_ir.toml`), both available this current directory, to help you try these examples locally.  

### Setting up Examples Locally  

```sh
# clone example repo
git clone git@github.com:eptalights/sophia-python-examples.git
cd path/to/sophia-python-examples

# setup python environment 
python -m venv evnv
. venv/bin/activate

# install sophia-python library
pip install git+https://github.com/eptalights/sophia-python.git

# change directory to C++ examples
cd cpp_basics_01

# from this point you can either create a python test file in the directory or enter python REPL
```

### Testing our local setup.

```python
import eptalights_sophia
api = eptalights_sophia.API("./sophia_ir.toml")

for fn in api.search_functions():
    print(fn.name)

# output
"""
_GLOBAL__sub_I_main
base::base
__static_initialization_and_destruction_0
derived::derived
main
base::~base
_GLOBAL__sub_I_main
__static_initialization_and_destruction_0
main
_GLOBAL__sub_I_main
__static_initialization_and_destruction_0
main
_GLOBAL__sub_I_main
__static_initialization_and_destruction_0
main
_GLOBAL__sub_I_main
__static_initialization_and_destruction_0
main
_GLOBAL__sub_I_main
"""
```

## Documentation

For detailed documentation, please visit [Eptalights Documentation](https://eptalights-sophia.readthedocs.io/en/latest/).

You can also check out this [blog post](https://eptalights.com/blog/01-introduction-to-eptalights-technology/) for an introduction to Eptalights Technology.

Visit Eptalights's Website [here][https://eptalights.com].
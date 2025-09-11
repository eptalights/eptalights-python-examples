# java_basics_01
[Eptalights](https://eptalights.com) JAVA Basic Examples. 

Remember, this example repository is already configured with its database, so it should be straightforward to use after cloning or downloading the repo.  

### Directory Structure

All JAVA source code can be found [here](src/).  
All JAVA extracted JIMPLE JSON data extracted with Eptalights [eptalights-code-extractor-java](https://github.com/eptalights/eptalights-code-extractor-java) can be found [here](eptalights_code_extract_output_java/).  
All Eptalights decompiled pseudo-C code for all functions is provided [here](__eptalights_code_decompiled/).  
Additionally, Eptalights offers a sample database (`eptalights_code.db`) and a configuration file (`eptalights_code.toml`), both available this current directory, to help you try these examples locally.

### Setting up Examples Locally  

```sh
# clone example repo
git clone git@github.com:eptalights/eptalights-code-python-examples.git
cd path/to/eptalights-code-python-examples

# setup python environment 
python -m venv evnv
. venv/bin/activate

# install eptalights-code-python library
pip install git+https://github.com/eptalights/eptalights-code-python.git

# change directory to JAVA examples
cd java_basics_01

# from this point you can either create a python test file in the directory or enter python REPL
```

### Testing our local setup.

```python
import eptalights_code
api = eptalights_code.LocalAPI("./eptalights_code.toml")

for fn in api.search_functions():
    print(fn.name)

# output
"""
main
<init>
<init>
main
<init>
main
main
<init>
bheap
printarray
Sort
main
<init>
heapify
main
<init>
main
<init>
reverse
...
"""
```

## Documentation

For detailed documentation, please visit [Eptalights Documentation](https://eptalights-code.readthedocs.io/en/latest/).

You can also check out this [blog post](https://eptalights.com/blog/01-introduction-to-eptalights-technology/) for an introduction to Eptalights Technology.

Visit Eptalights's Website [here][https://eptalights.com].

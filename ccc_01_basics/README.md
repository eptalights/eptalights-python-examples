# ccc_01_basics
[Eptalights](https://eptalights.com) C Basic Examples.  

### Directory Structure

All C source code can be found [here][src/].  
The GIMPLE IR dump from the GCC compiler is available [here][gimple_readable/], or you can manually generate it using:

```bash
gcc -fdump-tree-gimple src/[source_filename].cc  
```

All C extracted GIMPLE IR data can be found [here][gimple_extractor_output/].  
Eptalights's decompiled pseudo-C code for all functions is provided [here][__eptalights_decompiled_code/].  
Additionally, Eptalights offers a sample database (`eptalights.db`) and a configuration file (`eptalights.toml`), both available this current directory, to help you try these examples locally.

### Setting up Examples Locally  

```sh
# clone example repo
git clone git@github.com:eptalights/eptalights-python-examples.git
cd path/to/eptalights-python-examples

# setup python environment 
python -m venv evnv
. venv/bin/activate

# install eptalights-python library
pip install eptalights-python
# or 
pip install git+https://github.com/eptalights/eptalights-python.git

# change directory to C examples
cd ccc_01_basics

# from this point you can either create a python test file in the directory or enter python REPL
```

### Testing our local setup.

```python
import eptalights
api = eptalights.API("./eptalights.toml")

for fn in api.search_functions():
    print(fn.name)

# output
"""
main
main
main
addNumbers
addNumbers
main
main
main
main
"""
```

## Documentation

For detailed documentation, please visit [Eptalights Documentation](https://eptalights-python.readthedocs.io/en/latest/).

You can also check out this [blog post](https://eptalights.com/blog/01-introduction-to-eptalights-technology/) for an introduction to Eptalights Technology.

Visit Eptalights's Website [here][https://eptalights.com].

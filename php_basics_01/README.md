# php_basics_01
[Eptalights](https://eptalights.com) PHP Basic Examples.  

Remember, this example repository is already configured with its database, so it should be straightforward to use after cloning or downloading the repo.  

### Directory Structure

All PHP source code can be found [here](src/).  
All PHP extracted PHP Bytecode JSON data can be found [here](php_bytecode_extractor_output/).  
Eptalights's decompiled pseudo-C code for all functions is provided [here](__eptalights_decompiled_code/).  
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
pip install git+https://github.com/eptalights/eptalights-python.git

# change directory to PHP examples
cd php_basics_01

# from this point you can either create a python test file in the directory or enter python REPL
```

### Testing our local setup.

```python
import eptalights
api = eptalights.LocalAPI("./eptalights.toml")

for fn in api.search_functions():
    print(fn.name)

# output
"""
main
sayHello
sayHello
main
myfunction
main
client_send
parseHelloFields
data
setDebugLevel
mail
getDebugLevel
getVerp
quit
recipient
connected
getDebugOutput
...
"""
```

## Documentation

For detailed documentation, please visit [Eptalights Documentation](https://eptalights-python.readthedocs.io/en/latest/).

You can also check out this [blog post](https://eptalights.com/blog/01-introduction-to-eptalights-technology/) for an introduction to Eptalights Technology.

Visit Eptalights's Website [here][https://eptalights.com].

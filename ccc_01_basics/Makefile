GCCDIR = { put here the value of your ${GCCDIR} }

CXXFLAGS =  -fplugin=/gimple_extractor.so 
CXXFLAGS += -fplugin-arg-gimple_extractor-data_format=msgpack
CXXFLAGS += -fplugin-arg-gimple_extractor-source_path=/example/src
CXXFLAGS += -fplugin-arg-gimple_extractor-output_path=/example/gimple_extractor_output

CCC = gcc
SRCDIR = src
BINDIR = bin
SRCS = $(wildcard $(SRCDIR)/*.cc)
OBJS = $(patsubst $(SRCDIR)/%.cc,$(BINDIR)/%.o,$(SRCS))

# top level goal: build our plugin as a shared library
all: $(OBJS)

$(BINDIR)/%.o: $(SRCDIR)/%.cc
	@mkdir -p $(BINDIR)
	$(CCC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BINDIR)

extract:
	docker run --rm -it --entrypoint /example/build_examples.sh -v ${PWD}/:/example -v ${GIMPLE_EXTRACTOR_PATH}:/gimple_extractor.so gcc:${DOCKER_GCC_VERSION}

shell:
	docker run --rm -it --entrypoint /bin/bash -v ${PWD}/:/example -v ${GIMPLE_EXTRACTOR_PATH}:/gimple_extractor.so gcc:${DOCKER_GCC_VERSION}

.PHONY: all clean check

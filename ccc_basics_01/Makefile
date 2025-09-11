GCCDIR = { put here the value of your ${GCCDIR} }

CXXFLAGS =  -fplugin=/eptalights_code_extractor_cxx.so 
CXXFLAGS += -fplugin-arg-eptalights_code_extractor_cxx-data_format=json
CXXFLAGS += -fplugin-arg-eptalights_code_extractor_cxx-source_path=/example/src
CXXFLAGS += -fplugin-arg-eptalights_code_extractor_cxx-output_path=/example/eptalights_code_extract_output_cxx

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
	docker run --rm -it --entrypoint /example/build_examples.sh -v ${PWD}/:/example -v ${GIMPLE_EXTRACTOR_SHARED_LIB_PATH}:/eptalights_code_extractor_cxx.so gcc:${DOCKER_GCC_VERSION}

shell:
	docker run --rm -it --entrypoint /bin/bash -v ${PWD}/:/example -v ${GIMPLE_EXTRACTOR_SHARED_LIB_PATH}:/eptalights_code_extractor_cxx.so gcc:${DOCKER_GCC_VERSION}

.PHONY: all clean check

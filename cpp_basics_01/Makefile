GCCDIR = { put here the value of your ${GCCDIR} }

CXXFLAGS =  -fplugin=/sophia_extractor_gimple.so 
CXXFLAGS += -fplugin-arg-sophia_extractor_gimple-data_format=json
CXXFLAGS += -fplugin-arg-sophia_extractor_gimple-source_path=/example/src
CXXFLAGS += -fplugin-arg-sophia_extractor_gimple-output_path=/example/sophia_extract_output_gimple

CCC = g++
SRCDIR = src
BINDIR = bin
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(BINDIR)/%.o,$(SRCS))

# top level goal: build our plugin as a shared library
all: $(OBJS)

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BINDIR)
	$(CCC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BINDIR)

extract:
	docker run --rm -it --entrypoint /example/build_examples.sh -v ${PWD}/:/example -v ${GIMPLE_EXTRACTOR_PATH}:/sophia_extractor_gimple.so gcc:${DOCKER_GCC_VERSION}

shell:
	docker run --rm -it --entrypoint /bin/bash -v ${PWD}/:/example -v ${GIMPLE_EXTRACTOR_PATH}:/sophia_extractor_gimple.so gcc:${DOCKER_GCC_VERSION}

.PHONY: all clean check

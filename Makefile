##############################################################
#               CMake Project Wrapper Makefile               #
############################################################## 

SHELL       := /bin/bash
RM          := /bin/rm -rf
CMAKE_NINJA := cmake -GNinja ../

all: ./build/build.ninja
	@-  ninja -C build

./build/build.ninja:
	@- (cd build >/dev/null 2>&1 && ${CMAKE_NINJA})

distclean:
	@- (cd build >/dev/null 2>&1 && ${CMAKE_NINJA} >/dev/null 2>&1)
	@- make clean || true
	@- $(RM) ./build/*
	@- $(RM) ./docs/*
	@- $(RM) ./bin/*
	@- $(RM) ./lib/*


# If it's something else, pass the command on.
ifeq ($(findstring distclean,$(MAKECMDGOALS)),)

    $(MAKECMDGOALS): ./build/build.ninja
	@ ninja -C build $(MAKECMDGOALS)

endif

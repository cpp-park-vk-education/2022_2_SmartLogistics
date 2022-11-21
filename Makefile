SCRIPTS=./scripts
INCLUDE=./include
SOURCES=./src
BINARIES=./build
COMPILER=g++
COMPILER_FLAGS=-Wall -Werror -o2 -I $(INCLUDE)
ARCHIVER=ar

all: format check build_lib cleanup

format:
	bash $(SCRIPTS)/format.sh

check:
	bash $(SCRIPTS)/check.sh

build_lib:
	#$(COMPILER) $(COMPILER_FLAGS) -c $(SOURCES)/app.cpp -o $(BINARIES)/app.o
	cd build && cmake ../CMakeLists.txt && cmake --build .

cleanup:
	rm -r $(BINARIES)/CMakeFiles

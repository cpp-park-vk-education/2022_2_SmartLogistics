SCRIPTS=./scripts
INCLUDE=./include
SOURCES=./src
BINARIES=./build
LIBRARIES=./lib
TEST=./test
COMPILER=g++
COMPILER_FLAGS=-Wall -Werror -o2 -I $(INCLUDE) -L $(LIBRARIES)
ARCHIVER=ar

all: format check build_lib make_report cleanup

format:
	bash $(SCRIPTS)/format.sh

check:
	bash $(SCRIPTS)/check.sh

build_lib:
	$(COMPILER) $(COMPILER_FLAGS) -c $(SOURCES)/logic.cpp -o $(BINARIES)/logic.o
	$(ARCHIVER) -crv $(LIBRARIES)/logic.a $(BINARIES)/logic.o
	cd build && cmake ../CMakeLists.txt && cmake --build .


make_report:
	#lcov -t $(TEST)/Test -o $(TEST)/coverage_report.info -c -d $(TEST)
	#genhtml -o $(TEST)/coverage_report $(TEST)/coverage_report.info

cleanup:
	rm -r $(BINARIES)/CMakeFiles
	rm -r $(TEST)/CMakeFiles

SCRIPTS=./scripts
INCLUDE=./include
SOURCES=./src
BINARIES=./build
LIBRARIES=./lib
TEST=./test
COMPILER=g++
COMPILER_FLAGS=-Wall -Werror -o2 -I $(INCLUDE) -L $(LIBRARIES)
ARCHIVER=ar

all: format check build_lib build_test run_test make_report cleanup

format:
	bash $(SCRIPTS)/format.sh

check:
	bash $(SCRIPTS)/check.sh

build_lib:
	#$(COMPILER) $(COMPILER_FLAGS) -c $(SOURCES)/dbhelper.cpp -o $(BINARIES)/dbhelper.o
	#$(ARCHIVER) -crv $(LIBRARIES)/dbhelper.a $(BINARIES)/dbhelper.o
	cd build && cmake ../CMakeLists.txt && cmake --build .

build_test:
	#$(COMPILER) $(COMPILER_FLAGS) -c $(SOURCES)/dbhelper.cpp -o $(BINARIES)/dbhelper.o -coverage -lpthread -lgcov
	#$(COMPILER) $(COMPILER_FLAGS) -c $(TEST)/main.cpp -o $(BINARIES)/main.o -lgtest -lpthread
	#$(COMPILER) $(COMPILER_FLAGS) $(BINARIES)/main.o $(BINARIES)/dbhelper.o -o $(TEST)/Test -lgtest -lpthread -coverage -lgcov
	cd test && cmake ./CMakeLists.txt && cmake --build .
	cp ./build/lib* ./lib

run_test:
	valgrind $(TEST)/Test

make_report:
	lcov -t $(TEST)/Test -o $(TEST)/coverage_report.info -c -d $(TEST)
	genhtml -o $(TEST)/coverage_report $(TEST)/coverage_report.info

cleanup:
	rm -r $(BINARIES)/CMakeFiles
	rm -r $(TEST)/CMakeFiles

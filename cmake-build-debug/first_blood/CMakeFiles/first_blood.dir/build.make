# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/70/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/blair/projects/rambo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/blair/projects/rambo/cmake-build-debug

# Include any dependencies generated for this target.
include first_blood/CMakeFiles/first_blood.dir/depend.make

# Include the progress variables for this target.
include first_blood/CMakeFiles/first_blood.dir/progress.make

# Include the compile flags for this target's objects.
include first_blood/CMakeFiles/first_blood.dir/flags.make

first_blood/CMakeFiles/first_blood.dir/source/main.cpp.o: first_blood/CMakeFiles/first_blood.dir/flags.make
first_blood/CMakeFiles/first_blood.dir/source/main.cpp.o: ../first_blood/source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blair/projects/rambo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object first_blood/CMakeFiles/first_blood.dir/source/main.cpp.o"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first_blood.dir/source/main.cpp.o -c /home/blair/projects/rambo/first_blood/source/main.cpp

first_blood/CMakeFiles/first_blood.dir/source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first_blood.dir/source/main.cpp.i"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blair/projects/rambo/first_blood/source/main.cpp > CMakeFiles/first_blood.dir/source/main.cpp.i

first_blood/CMakeFiles/first_blood.dir/source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first_blood.dir/source/main.cpp.s"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blair/projects/rambo/first_blood/source/main.cpp -o CMakeFiles/first_blood.dir/source/main.cpp.s

first_blood/CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.o: first_blood/CMakeFiles/first_blood.dir/flags.make
first_blood/CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.o: ../first_blood/source/additional_algorithm_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blair/projects/rambo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object first_blood/CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.o"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.o -c /home/blair/projects/rambo/first_blood/source/additional_algorithm_tests.cpp

first_blood/CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.i"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blair/projects/rambo/first_blood/source/additional_algorithm_tests.cpp > CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.i

first_blood/CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.s"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blair/projects/rambo/first_blood/source/additional_algorithm_tests.cpp -o CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.s

first_blood/CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.o: first_blood/CMakeFiles/first_blood.dir/flags.make
first_blood/CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.o: ../first_blood/source/typelist_algorithm_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blair/projects/rambo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object first_blood/CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.o"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.o -c /home/blair/projects/rambo/first_blood/source/typelist_algorithm_tests.cpp

first_blood/CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.i"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blair/projects/rambo/first_blood/source/typelist_algorithm_tests.cpp > CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.i

first_blood/CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.s"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blair/projects/rambo/first_blood/source/typelist_algorithm_tests.cpp -o CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.s

first_blood/CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.o: first_blood/CMakeFiles/first_blood.dir/flags.make
first_blood/CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.o: ../first_blood/source/tuple_algorithm_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blair/projects/rambo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object first_blood/CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.o"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.o -c /home/blair/projects/rambo/first_blood/source/tuple_algorithm_tests.cpp

first_blood/CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.i"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blair/projects/rambo/first_blood/source/tuple_algorithm_tests.cpp > CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.i

first_blood/CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.s"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blair/projects/rambo/first_blood/source/tuple_algorithm_tests.cpp -o CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.s

# Object files for target first_blood
first_blood_OBJECTS = \
"CMakeFiles/first_blood.dir/source/main.cpp.o" \
"CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.o" \
"CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.o" \
"CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.o"

# External object files for target first_blood
first_blood_EXTERNAL_OBJECTS =

first_blood/first_blood: first_blood/CMakeFiles/first_blood.dir/source/main.cpp.o
first_blood/first_blood: first_blood/CMakeFiles/first_blood.dir/source/additional_algorithm_tests.cpp.o
first_blood/first_blood: first_blood/CMakeFiles/first_blood.dir/source/typelist_algorithm_tests.cpp.o
first_blood/first_blood: first_blood/CMakeFiles/first_blood.dir/source/tuple_algorithm_tests.cpp.o
first_blood/first_blood: first_blood/CMakeFiles/first_blood.dir/build.make
first_blood/first_blood: first_blood/CMakeFiles/first_blood.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/blair/projects/rambo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable first_blood"
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/first_blood.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
first_blood/CMakeFiles/first_blood.dir/build: first_blood/first_blood

.PHONY : first_blood/CMakeFiles/first_blood.dir/build

first_blood/CMakeFiles/first_blood.dir/clean:
	cd /home/blair/projects/rambo/cmake-build-debug/first_blood && $(CMAKE_COMMAND) -P CMakeFiles/first_blood.dir/cmake_clean.cmake
.PHONY : first_blood/CMakeFiles/first_blood.dir/clean

first_blood/CMakeFiles/first_blood.dir/depend:
	cd /home/blair/projects/rambo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blair/projects/rambo /home/blair/projects/rambo/first_blood /home/blair/projects/rambo/cmake-build-debug /home/blair/projects/rambo/cmake-build-debug/first_blood /home/blair/projects/rambo/cmake-build-debug/first_blood/CMakeFiles/first_blood.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : first_blood/CMakeFiles/first_blood.dir/depend


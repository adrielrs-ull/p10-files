# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usuario/practicas/p10-string-array-vector/max_min_prom

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/practicas/p10-string-array-vector/max_min_prom/build

# Include any dependencies generated for this target.
include CMakeFiles/max_min_prom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/max_min_prom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/max_min_prom.dir/flags.make

CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.o: CMakeFiles/max_min_prom.dir/flags.make
CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.o: ../src/max_min_prom.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/p10-string-array-vector/max_min_prom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.o -c /home/usuario/practicas/p10-string-array-vector/max_min_prom/src/max_min_prom.cc

CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/p10-string-array-vector/max_min_prom/src/max_min_prom.cc > CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.i

CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/p10-string-array-vector/max_min_prom/src/max_min_prom.cc -o CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.s

# Object files for target max_min_prom
max_min_prom_OBJECTS = \
"CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.o"

# External object files for target max_min_prom
max_min_prom_EXTERNAL_OBJECTS =

max_min_prom: CMakeFiles/max_min_prom.dir/src/max_min_prom.cc.o
max_min_prom: CMakeFiles/max_min_prom.dir/build.make
max_min_prom: CMakeFiles/max_min_prom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/practicas/p10-string-array-vector/max_min_prom/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable max_min_prom"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/max_min_prom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/max_min_prom.dir/build: max_min_prom

.PHONY : CMakeFiles/max_min_prom.dir/build

CMakeFiles/max_min_prom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/max_min_prom.dir/cmake_clean.cmake
.PHONY : CMakeFiles/max_min_prom.dir/clean

CMakeFiles/max_min_prom.dir/depend:
	cd /home/usuario/practicas/p10-string-array-vector/max_min_prom/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/practicas/p10-string-array-vector/max_min_prom /home/usuario/practicas/p10-string-array-vector/max_min_prom /home/usuario/practicas/p10-string-array-vector/max_min_prom/build /home/usuario/practicas/p10-string-array-vector/max_min_prom/build /home/usuario/practicas/p10-string-array-vector/max_min_prom/build/CMakeFiles/max_min_prom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/max_min_prom.dir/depend


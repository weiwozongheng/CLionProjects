# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\export\workspace\CLionProjects\cppproject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\export\workspace\CLionProjects\cppproject\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cppproject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cppproject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppproject.dir/flags.make

CMakeFiles/cppproject.dir/main.cpp.obj: CMakeFiles/cppproject.dir/flags.make
CMakeFiles/cppproject.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\export\workspace\CLionProjects\cppproject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppproject.dir/main.cpp.obj"
	D:\export\env\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cppproject.dir\main.cpp.obj -c D:\export\workspace\CLionProjects\cppproject\main.cpp

CMakeFiles/cppproject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppproject.dir/main.cpp.i"
	D:\export\env\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\export\workspace\CLionProjects\cppproject\main.cpp > CMakeFiles\cppproject.dir\main.cpp.i

CMakeFiles/cppproject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppproject.dir/main.cpp.s"
	D:\export\env\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\export\workspace\CLionProjects\cppproject\main.cpp -o CMakeFiles\cppproject.dir\main.cpp.s

# Object files for target cppproject
cppproject_OBJECTS = \
"CMakeFiles/cppproject.dir/main.cpp.obj"

# External object files for target cppproject
cppproject_EXTERNAL_OBJECTS =

cppproject.exe: CMakeFiles/cppproject.dir/main.cpp.obj
cppproject.exe: CMakeFiles/cppproject.dir/build.make
cppproject.exe: CMakeFiles/cppproject.dir/linklibs.rsp
cppproject.exe: CMakeFiles/cppproject.dir/objects1.rsp
cppproject.exe: CMakeFiles/cppproject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\export\workspace\CLionProjects\cppproject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cppproject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cppproject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cppproject.dir/build: cppproject.exe

.PHONY : CMakeFiles/cppproject.dir/build

CMakeFiles/cppproject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cppproject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cppproject.dir/clean

CMakeFiles/cppproject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\export\workspace\CLionProjects\cppproject D:\export\workspace\CLionProjects\cppproject D:\export\workspace\CLionProjects\cppproject\cmake-build-debug D:\export\workspace\CLionProjects\cppproject\cmake-build-debug D:\export\workspace\CLionProjects\cppproject\cmake-build-debug\CMakeFiles\cppproject.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cppproject.dir/depend


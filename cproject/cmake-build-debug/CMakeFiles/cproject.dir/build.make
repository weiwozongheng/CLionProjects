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
CMAKE_SOURCE_DIR = D:\export\workspace\CLionProjects\cproject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\export\workspace\CLionProjects\cproject\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cproject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cproject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cproject.dir/flags.make

CMakeFiles/cproject.dir/main.c.obj: CMakeFiles/cproject.dir/flags.make
CMakeFiles/cproject.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\export\workspace\CLionProjects\cproject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cproject.dir/main.c.obj"
	D:\export\env\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cproject.dir\main.c.obj   -c D:\export\workspace\CLionProjects\cproject\main.c

CMakeFiles/cproject.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cproject.dir/main.c.i"
	D:\export\env\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\export\workspace\CLionProjects\cproject\main.c > CMakeFiles\cproject.dir\main.c.i

CMakeFiles/cproject.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cproject.dir/main.c.s"
	D:\export\env\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\export\workspace\CLionProjects\cproject\main.c -o CMakeFiles\cproject.dir\main.c.s

# Object files for target cproject
cproject_OBJECTS = \
"CMakeFiles/cproject.dir/main.c.obj"

# External object files for target cproject
cproject_EXTERNAL_OBJECTS =

cproject.exe: CMakeFiles/cproject.dir/main.c.obj
cproject.exe: CMakeFiles/cproject.dir/build.make
cproject.exe: CMakeFiles/cproject.dir/linklibs.rsp
cproject.exe: CMakeFiles/cproject.dir/objects1.rsp
cproject.exe: CMakeFiles/cproject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\export\workspace\CLionProjects\cproject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cproject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cproject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cproject.dir/build: cproject.exe

.PHONY : CMakeFiles/cproject.dir/build

CMakeFiles/cproject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cproject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cproject.dir/clean

CMakeFiles/cproject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\export\workspace\CLionProjects\cproject D:\export\workspace\CLionProjects\cproject D:\export\workspace\CLionProjects\cproject\cmake-build-debug D:\export\workspace\CLionProjects\cproject\cmake-build-debug D:\export\workspace\CLionProjects\cproject\cmake-build-debug\CMakeFiles\cproject.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cproject.dir/depend


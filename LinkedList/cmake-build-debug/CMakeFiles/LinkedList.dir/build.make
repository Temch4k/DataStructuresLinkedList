# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files (x86)\CLion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CLion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\angry\CLionProjects\LinkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\angry\CLionProjects\LinkedList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkedList.dir/flags.make

CMakeFiles/LinkedList.dir/main.cpp.obj: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\angry\CLionProjects\LinkedList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinkedList.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LinkedList.dir\main.cpp.obj -c C:\Users\angry\CLionProjects\LinkedList\main.cpp

CMakeFiles/LinkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkedList.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\angry\CLionProjects\LinkedList\main.cpp > CMakeFiles\LinkedList.dir\main.cpp.i

CMakeFiles/LinkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkedList.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\angry\CLionProjects\LinkedList\main.cpp -o CMakeFiles\LinkedList.dir\main.cpp.s

CMakeFiles/LinkedList.dir/LinkedList.cpp.obj: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/LinkedList.cpp.obj: ../LinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\angry\CLionProjects\LinkedList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LinkedList.dir/LinkedList.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LinkedList.dir\LinkedList.cpp.obj -c C:\Users\angry\CLionProjects\LinkedList\LinkedList.cpp

CMakeFiles/LinkedList.dir/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkedList.dir/LinkedList.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\angry\CLionProjects\LinkedList\LinkedList.cpp > CMakeFiles\LinkedList.dir\LinkedList.cpp.i

CMakeFiles/LinkedList.dir/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkedList.dir/LinkedList.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\angry\CLionProjects\LinkedList\LinkedList.cpp -o CMakeFiles\LinkedList.dir\LinkedList.cpp.s

# Object files for target LinkedList
LinkedList_OBJECTS = \
"CMakeFiles/LinkedList.dir/main.cpp.obj" \
"CMakeFiles/LinkedList.dir/LinkedList.cpp.obj"

# External object files for target LinkedList
LinkedList_EXTERNAL_OBJECTS =

LinkedList.exe: CMakeFiles/LinkedList.dir/main.cpp.obj
LinkedList.exe: CMakeFiles/LinkedList.dir/LinkedList.cpp.obj
LinkedList.exe: CMakeFiles/LinkedList.dir/build.make
LinkedList.exe: CMakeFiles/LinkedList.dir/linklibs.rsp
LinkedList.exe: CMakeFiles/LinkedList.dir/objects1.rsp
LinkedList.exe: CMakeFiles/LinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\angry\CLionProjects\LinkedList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LinkedList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LinkedList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkedList.dir/build: LinkedList.exe

.PHONY : CMakeFiles/LinkedList.dir/build

CMakeFiles/LinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LinkedList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LinkedList.dir/clean

CMakeFiles/LinkedList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\angry\CLionProjects\LinkedList C:\Users\angry\CLionProjects\LinkedList C:\Users\angry\CLionProjects\LinkedList\cmake-build-debug C:\Users\angry\CLionProjects\LinkedList\cmake-build-debug C:\Users\angry\CLionProjects\LinkedList\cmake-build-debug\CMakeFiles\LinkedList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkedList.dir/depend


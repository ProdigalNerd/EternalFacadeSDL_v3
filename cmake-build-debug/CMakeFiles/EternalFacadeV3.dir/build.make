# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/EternalFacadeV3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EternalFacadeV3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EternalFacadeV3.dir/flags.make

CMakeFiles/EternalFacadeV3.dir/main.cpp.o: CMakeFiles/EternalFacadeV3.dir/flags.make
CMakeFiles/EternalFacadeV3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EternalFacadeV3.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EternalFacadeV3.dir/main.cpp.o -c "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/main.cpp"

CMakeFiles/EternalFacadeV3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EternalFacadeV3.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/main.cpp" > CMakeFiles/EternalFacadeV3.dir/main.cpp.i

CMakeFiles/EternalFacadeV3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EternalFacadeV3.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/main.cpp" -o CMakeFiles/EternalFacadeV3.dir/main.cpp.s

CMakeFiles/EternalFacadeV3.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/EternalFacadeV3.dir/main.cpp.o.requires

CMakeFiles/EternalFacadeV3.dir/main.cpp.o.provides: CMakeFiles/EternalFacadeV3.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/EternalFacadeV3.dir/build.make CMakeFiles/EternalFacadeV3.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/EternalFacadeV3.dir/main.cpp.o.provides

CMakeFiles/EternalFacadeV3.dir/main.cpp.o.provides.build: CMakeFiles/EternalFacadeV3.dir/main.cpp.o


# Object files for target EternalFacadeV3
EternalFacadeV3_OBJECTS = \
"CMakeFiles/EternalFacadeV3.dir/main.cpp.o"

# External object files for target EternalFacadeV3
EternalFacadeV3_EXTERNAL_OBJECTS =

EternalFacadeV3: CMakeFiles/EternalFacadeV3.dir/main.cpp.o
EternalFacadeV3: CMakeFiles/EternalFacadeV3.dir/build.make
EternalFacadeV3: CMakeFiles/EternalFacadeV3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EternalFacadeV3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EternalFacadeV3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EternalFacadeV3.dir/build: EternalFacadeV3

.PHONY : CMakeFiles/EternalFacadeV3.dir/build

CMakeFiles/EternalFacadeV3.dir/requires: CMakeFiles/EternalFacadeV3.dir/main.cpp.o.requires

.PHONY : CMakeFiles/EternalFacadeV3.dir/requires

CMakeFiles/EternalFacadeV3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EternalFacadeV3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EternalFacadeV3.dir/clean

CMakeFiles/EternalFacadeV3.dir/depend:
	cd "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3" "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3" "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/cmake-build-debug" "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/cmake-build-debug" "/Users/tylerwilson/Documents/C++ Games/EternalFacadeV3/cmake-build-debug/CMakeFiles/EternalFacadeV3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/EternalFacadeV3.dir/depend


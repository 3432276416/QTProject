# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Software\cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\Software\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build

# Include any dependencies generated for this target.
include CMakeFiles/bluetooth_debugger.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bluetooth_debugger.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bluetooth_debugger.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bluetooth_debugger.dir/flags.make

bluetooth_debugger_autogen/timestamp: D:/Software/QT/6.5.3/mingw_64/./bin/moc.exe
bluetooth_debugger_autogen/timestamp: D:/Software/QT/6.5.3/mingw_64/./bin/uic.exe
bluetooth_debugger_autogen/timestamp: CMakeFiles/bluetooth_debugger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target bluetooth_debugger"
	D:\Software\cmake\bin\cmake.exe -E cmake_autogen E:/GitStore/QTProject/aeb3f-main/aeb3f-main/bluetooth_debugger/build/CMakeFiles/bluetooth_debugger_autogen.dir/AutogenInfo.json Debug
	D:\Software\cmake\bin\cmake.exe -E touch E:/GitStore/QTProject/aeb3f-main/aeb3f-main/bluetooth_debugger/build/bluetooth_debugger_autogen/timestamp

CMakeFiles/bluetooth_debugger.dir/codegen:
.PHONY : CMakeFiles/bluetooth_debugger.dir/codegen

CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.obj: CMakeFiles/bluetooth_debugger.dir/flags.make
CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.obj: CMakeFiles/bluetooth_debugger.dir/includes_CXX.rsp
CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.obj: bluetooth_debugger_autogen/mocs_compilation.cpp
CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.obj: CMakeFiles/bluetooth_debugger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.obj"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\bluetooth_debugger.dir\bluetooth_debugger_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\bluetooth_debugger.dir\bluetooth_debugger_autogen\mocs_compilation.cpp.obj -c E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\bluetooth_debugger_autogen\mocs_compilation.cpp

CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.i"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\bluetooth_debugger_autogen\mocs_compilation.cpp > CMakeFiles\bluetooth_debugger.dir\bluetooth_debugger_autogen\mocs_compilation.cpp.i

CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.s"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\bluetooth_debugger_autogen\mocs_compilation.cpp -o CMakeFiles\bluetooth_debugger.dir\bluetooth_debugger_autogen\mocs_compilation.cpp.s

CMakeFiles/bluetooth_debugger.dir/main.cpp.obj: CMakeFiles/bluetooth_debugger.dir/flags.make
CMakeFiles/bluetooth_debugger.dir/main.cpp.obj: CMakeFiles/bluetooth_debugger.dir/includes_CXX.rsp
CMakeFiles/bluetooth_debugger.dir/main.cpp.obj: E:/GitStore/QTProject/aeb3f-main/aeb3f-main/bluetooth_debugger/main.cpp
CMakeFiles/bluetooth_debugger.dir/main.cpp.obj: CMakeFiles/bluetooth_debugger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/bluetooth_debugger.dir/main.cpp.obj"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bluetooth_debugger.dir/main.cpp.obj -MF CMakeFiles\bluetooth_debugger.dir\main.cpp.obj.d -o CMakeFiles\bluetooth_debugger.dir\main.cpp.obj -c E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\main.cpp

CMakeFiles/bluetooth_debugger.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bluetooth_debugger.dir/main.cpp.i"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\main.cpp > CMakeFiles\bluetooth_debugger.dir\main.cpp.i

CMakeFiles/bluetooth_debugger.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bluetooth_debugger.dir/main.cpp.s"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\main.cpp -o CMakeFiles\bluetooth_debugger.dir\main.cpp.s

CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.obj: CMakeFiles/bluetooth_debugger.dir/flags.make
CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.obj: CMakeFiles/bluetooth_debugger.dir/includes_CXX.rsp
CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.obj: E:/GitStore/QTProject/aeb3f-main/aeb3f-main/bluetooth_debugger/bluetoothdebugger.cpp
CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.obj: CMakeFiles/bluetooth_debugger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.obj"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.obj -MF CMakeFiles\bluetooth_debugger.dir\bluetoothdebugger.cpp.obj.d -o CMakeFiles\bluetooth_debugger.dir\bluetoothdebugger.cpp.obj -c E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothdebugger.cpp

CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.i"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothdebugger.cpp > CMakeFiles\bluetooth_debugger.dir\bluetoothdebugger.cpp.i

CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.s"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothdebugger.cpp -o CMakeFiles\bluetooth_debugger.dir\bluetoothdebugger.cpp.s

CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.obj: CMakeFiles/bluetooth_debugger.dir/flags.make
CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.obj: CMakeFiles/bluetooth_debugger.dir/includes_CXX.rsp
CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.obj: E:/GitStore/QTProject/aeb3f-main/aeb3f-main/bluetooth_debugger/bluetoothconnect.cpp
CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.obj: CMakeFiles/bluetooth_debugger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.obj"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.obj -MF CMakeFiles\bluetooth_debugger.dir\bluetoothconnect.cpp.obj.d -o CMakeFiles\bluetooth_debugger.dir\bluetoothconnect.cpp.obj -c E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothconnect.cpp

CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.i"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothconnect.cpp > CMakeFiles\bluetooth_debugger.dir\bluetoothconnect.cpp.i

CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.s"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothconnect.cpp -o CMakeFiles\bluetooth_debugger.dir\bluetoothconnect.cpp.s

CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.obj: CMakeFiles/bluetooth_debugger.dir/flags.make
CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.obj: CMakeFiles/bluetooth_debugger.dir/includes_CXX.rsp
CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.obj: E:/GitStore/QTProject/aeb3f-main/aeb3f-main/bluetooth_debugger/bluetoothdevicecell.cpp
CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.obj: CMakeFiles/bluetooth_debugger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.obj"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.obj -MF CMakeFiles\bluetooth_debugger.dir\bluetoothdevicecell.cpp.obj.d -o CMakeFiles\bluetooth_debugger.dir\bluetoothdevicecell.cpp.obj -c E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothdevicecell.cpp

CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.i"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothdevicecell.cpp > CMakeFiles\bluetooth_debugger.dir\bluetoothdevicecell.cpp.i

CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.s"
	D:\Software\QT\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\bluetoothdevicecell.cpp -o CMakeFiles\bluetooth_debugger.dir\bluetoothdevicecell.cpp.s

# Object files for target bluetooth_debugger
bluetooth_debugger_OBJECTS = \
"CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/bluetooth_debugger.dir/main.cpp.obj" \
"CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.obj" \
"CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.obj" \
"CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.obj"

# External object files for target bluetooth_debugger
bluetooth_debugger_EXTERNAL_OBJECTS =

bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/bluetooth_debugger_autogen/mocs_compilation.cpp.obj
bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/main.cpp.obj
bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/bluetoothdebugger.cpp.obj
bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/bluetoothconnect.cpp.obj
bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/bluetoothdevicecell.cpp.obj
bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/build.make
bluetooth_debugger.exe: D:/Software/QT/6.5.3/mingw_64/lib/libQt6Widgets.a
bluetooth_debugger.exe: D:/Software/QT/6.5.3/mingw_64/lib/libQt6Bluetooth.a
bluetooth_debugger.exe: D:/Software/QT/6.5.3/mingw_64/lib/libQt6Gui.a
bluetooth_debugger.exe: D:/Software/QT/6.5.3/mingw_64/lib/libQt6Network.a
bluetooth_debugger.exe: D:/Software/QT/6.5.3/mingw_64/lib/libQt6Core.a
bluetooth_debugger.exe: D:/Software/QT/6.5.3/mingw_64/lib/libQt6EntryPoint.a
bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/linkLibs.rsp
bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/objects1.rsp
bluetooth_debugger.exe: CMakeFiles/bluetooth_debugger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable bluetooth_debugger.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bluetooth_debugger.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bluetooth_debugger.dir/build: bluetooth_debugger.exe
.PHONY : CMakeFiles/bluetooth_debugger.dir/build

CMakeFiles/bluetooth_debugger.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bluetooth_debugger.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bluetooth_debugger.dir/clean

CMakeFiles/bluetooth_debugger.dir/depend: bluetooth_debugger_autogen/timestamp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build E:\GitStore\QTProject\aeb3f-main\aeb3f-main\bluetooth_debugger\build\CMakeFiles\bluetooth_debugger.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/bluetooth_debugger.dir/depend


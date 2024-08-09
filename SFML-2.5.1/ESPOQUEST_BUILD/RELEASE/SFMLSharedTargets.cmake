# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.8)
   message(FATAL_ERROR "CMake >= 2.8.0 required")
endif()
if(CMAKE_VERSION VERSION_LESS "2.8.3")
   message(FATAL_ERROR "CMake >= 2.8.3 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.8.3...3.25)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_cmake_targets_defined "")
set(_cmake_targets_not_defined "")
set(_cmake_expected_targets "")
foreach(_cmake_expected_target IN ITEMS sfml-system sfml-main sfml-window OpenGL sfml-network sfml-graphics Freetype OpenAL Vorbis FLAC sfml-audio)
  list(APPEND _cmake_expected_targets "${_cmake_expected_target}")
  if(TARGET "${_cmake_expected_target}")
    list(APPEND _cmake_targets_defined "${_cmake_expected_target}")
  else()
    list(APPEND _cmake_targets_not_defined "${_cmake_expected_target}")
  endif()
endforeach()
unset(_cmake_expected_target)
if(_cmake_targets_defined STREQUAL _cmake_expected_targets)
  unset(_cmake_targets_defined)
  unset(_cmake_targets_not_defined)
  unset(_cmake_expected_targets)
  unset(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT _cmake_targets_defined STREQUAL "")
  string(REPLACE ";" ", " _cmake_targets_defined_text "${_cmake_targets_defined}")
  string(REPLACE ";" ", " _cmake_targets_not_defined_text "${_cmake_targets_not_defined}")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_cmake_targets_defined_text}\nTargets not yet defined: ${_cmake_targets_not_defined_text}\n")
endif()
unset(_cmake_targets_defined)
unset(_cmake_targets_not_defined)
unset(_cmake_expected_targets)


# Create imported target sfml-system
add_library(sfml-system SHARED IMPORTED)

set_target_properties(sfml-system PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/include"
)

# Create imported target sfml-main
add_library(sfml-main STATIC IMPORTED)

set_target_properties(sfml-main PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/include"
)

# Create imported target sfml-window
add_library(sfml-window SHARED IMPORTED)

set_target_properties(sfml-window PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/include"
  INTERFACE_LINK_LIBRARIES "sfml-system"
)

# Create imported target OpenGL
add_library(OpenGL INTERFACE IMPORTED)

set_target_properties(OpenGL PROPERTIES
  INTERFACE_LINK_LIBRARIES "opengl32;glu32"
)

# Create imported target sfml-network
add_library(sfml-network SHARED IMPORTED)

set_target_properties(sfml-network PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/include"
  INTERFACE_LINK_LIBRARIES "sfml-system"
)

# Create imported target sfml-graphics
add_library(sfml-graphics SHARED IMPORTED)

set_target_properties(sfml-graphics PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/include"
  INTERFACE_LINK_LIBRARIES "sfml-window"
)

# Create imported target Freetype
add_library(Freetype INTERFACE IMPORTED)

set_target_properties(Freetype PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/headers/freetype2"
  INTERFACE_LINK_LIBRARIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/libs-mingw/x64/libfreetype.a"
)

# Create imported target OpenAL
add_library(OpenAL INTERFACE IMPORTED)

set_target_properties(OpenAL PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/headers/AL"
  INTERFACE_LINK_LIBRARIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/libs-mingw/x64/libopenal32.a"
)

# Create imported target Vorbis
add_library(Vorbis INTERFACE IMPORTED)

set_target_properties(Vorbis PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "OV_EXCLUDE_STATIC_CALLBACKS"
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/headers;C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/headers"
  INTERFACE_LINK_LIBRARIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/libs-mingw/x64/libvorbisenc.a;C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/libs-mingw/x64/libvorbisfile.a;C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/libs-mingw/x64/libvorbis.a;C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/libs-mingw/x64/libogg.a"
)

# Create imported target FLAC
add_library(FLAC INTERFACE IMPORTED)

set_target_properties(FLAC PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "FLAC__NO_DLL"
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/headers"
  INTERFACE_LINK_LIBRARIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/extlibs/libs-mingw/x64/libFLAC.a"
)

# Create imported target sfml-audio
add_library(sfml-audio SHARED IMPORTED)

set_target_properties(sfml-audio PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/include"
  INTERFACE_LINK_LIBRARIES "sfml-system"
)

# Import target "sfml-system" for configuration "Release"
set_property(TARGET sfml-system APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-system PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/libsfml-system.a"
  IMPORTED_LOCATION_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/sfml-system-2.dll"
  )

# Import target "sfml-main" for configuration "Release"
set_property(TARGET sfml-main APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-main PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/libsfml-main.a"
  )

# Import target "sfml-window" for configuration "Release"
set_property(TARGET sfml-window APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-window PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/libsfml-window.a"
  IMPORTED_LOCATION_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/sfml-window-2.dll"
  )

# Import target "sfml-network" for configuration "Release"
set_property(TARGET sfml-network APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-network PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/libsfml-network.a"
  IMPORTED_LOCATION_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/sfml-network-2.dll"
  )

# Import target "sfml-graphics" for configuration "Release"
set_property(TARGET sfml-graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-graphics PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/libsfml-graphics.a"
  IMPORTED_LOCATION_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/sfml-graphics-2.dll"
  )

# Import target "sfml-audio" for configuration "Release"
set_property(TARGET sfml-audio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(sfml-audio PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/libsfml-audio.a"
  IMPORTED_LOCATION_RELEASE "C:/Users/Student/Desktop/Quiz_game_project/SFML-2.5.1/ESPOQUEST_BUILD/RELEASE/lib/sfml-audio-2.dll"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)

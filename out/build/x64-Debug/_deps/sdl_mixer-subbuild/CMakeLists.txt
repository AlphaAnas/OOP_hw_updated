# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.26.4-msvc4)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(sdl_mixer-populate NONE)


# Pass through things we've already detected in the main project to avoid
# paying the cost of redetecting them again in ExternalProject_Add()
set(GIT_EXECUTABLE [==[C:/Program Files/Git/cmd/git.exe]==])
set(GIT_VERSION_STRING [==[2.39.0.windows.2]==])
set_property(GLOBAL PROPERTY _CMAKE_FindGit_GIT_EXECUTABLE_VERSION
  [==[C:/Program Files/Git/cmd/git.exe;2.39.0.windows.2]==]
)


include(ExternalProject)
ExternalProject_Add(sdl_mixer-populate
                     "UPDATE_DISCONNECTED" "False" "FETCHCONTENT_UPDATES_DISCONNECTED" "ON" "GIT_REPOSITORY" "https://github.com/libsdl-org/SDL_mixer.git" "GIT_TAG" "release-2.6.3" "GIT_PROGRESS" "ON"
                    SOURCE_DIR          "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_mixer-src"
                    BINARY_DIR          "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_mixer-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)



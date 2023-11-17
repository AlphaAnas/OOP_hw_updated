# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-src"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-build"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-subbuild/sdl-populate-prefix"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-subbuild/sdl-populate-prefix/tmp"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-subbuild/sdl-populate-prefix/src/sdl-populate-stamp"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-subbuild/sdl-populate-prefix/src"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-subbuild/sdl-populate-prefix/src/sdl-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-subbuild/sdl-populate-prefix/src/sdl-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl-subbuild/sdl-populate-prefix/src/sdl-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()

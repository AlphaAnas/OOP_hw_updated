# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-src"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-build"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-subbuild/sdl_image-populate-prefix"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-subbuild/sdl_image-populate-prefix/tmp"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-subbuild/sdl_image-populate-prefix/src/sdl_image-populate-stamp"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-subbuild/sdl_image-populate-prefix/src"
  "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-subbuild/sdl_image-populate-prefix/src/sdl_image-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-subbuild/sdl_image-populate-prefix/src/sdl_image-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Third Semester files/OOP/hw_04_OOP/CS224-HW4-Fall2023/out/build/x64-Debug/_deps/sdl_image-subbuild/sdl_image-populate-prefix/src/sdl_image-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()

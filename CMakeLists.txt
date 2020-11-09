cmake_minimum_required (VERSION 3.18)

project (libtcod_cpp_tutorial CXX)  # Setup a C++ only project.

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)  # Intregate with Conan.

conan_basic_setup(TARGETS)

set(LINK_LIBTCOD CONAN_PKG::libtcod)

# Required to handle RPATH's on MacOS.
if (APPLE)
    set(CMAKE_INSTALL_RPATH "@executable_path")
else()
    set(CMAKE_INSTALL_RPATH "$ORIGIN")
endif()
set(CMAKE_BUILD_WITH_INSTALL_RPATH ON)

# Configure the tutorial executable.
add_executable(tutorial src/main.cpp)
target_link_libraries(tutorial ${LINK_LIBTCOD})  # Link with libtcod and SDL
target_compile_features(tutorial PUBLIC cxx_std_17)  # Require C++17

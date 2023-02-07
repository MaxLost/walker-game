# CMakeList.txt : CMake project for WalkerGame, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("WalkerGame")

add_subdirectory ("entities")

add_library (drawer STATIC "Drawer.cpp")

# Add source to this project's executable.
add_executable (WalkerGame "WalkerGame.cpp")

target_link_libraries (drawer entities)
target_link_libraries (WalkerGame drawer)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET WalkerGame PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

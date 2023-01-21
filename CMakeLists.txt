cmake_minimum_required(VERSION 3.23)

project(pendulo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Boost REQUIRED COMPONENTS system filesystem iostreams)
add_executable(pendulo "main.cpp" "gnuplot-iostream.h")
target_link_libraries(pendulo PRIVATE Boost::system Boost::filesystem Boost::iostreams)

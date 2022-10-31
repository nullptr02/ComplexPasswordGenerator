cmake_minimum_required(VERSION 3.23)
project(ComplexPasswordGenerator)

set(CMAKE_CXX_STANDARD 14)

add_executable(ComplexPasswordGenerator src/main.cpp library/exceptions.h library/password.h library/random.h library/password.cpp library/random.cpp src/mainwindow.cpp src/mainwindow.h)

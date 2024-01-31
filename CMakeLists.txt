cmake_minimum_required(VERSION 3.27)

if (NOT DEFINED CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
endif()

set(CMAKE_CXX_EXTENSIONS OFF)

project("stock_alert_calculator_project" VERSION 0.1)

add_subdirectory("stock_alert_calculator")

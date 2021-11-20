cmake_minimum_required(VERSION 3.1)

project(Person)
add_library(Person SHARED src/Storage.c src/DataBase.c)
add_executable(Person.test tests/CheckAllTable.Test.cpp tests/CheckSearchingInTable.Test.cpp tests/CheckAdding.Test.cpp)
target_link_libraries(Person.test Person gtest gtest_main pthread)

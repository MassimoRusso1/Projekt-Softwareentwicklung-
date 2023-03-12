# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(master VERSION 1.0 LANGUAGES C)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

#add libary
add_library(master developer.c developer_group.c)

#add executable
add_executable(master_exec main.c)

#link executable to libary
target_link_libraries(master_exec PRIVATE master)

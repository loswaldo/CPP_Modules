cmake_minimum_required(VERSION 3.19)
project(CPP00)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP00.ex00
        cpp00/ex00/megaphone.cpp
        )
include_directories(cpp00/ex01/)
add_executable(CPP00.ex01
        cpp00/ex01/main.cpp
        cpp00/ex01/getters.cpp
        cpp00/ex01/setters.cpp
        cpp00/ex01/constructors.cpp
        )
include_directories(cpp01/ex00)
add_executable(CPP01.ex00
        cpp01/ex00/main.cpp
        cpp01/ex00/Zombie.cpp
        cpp01/ex00/randomChump.cpp
        cpp01/ex00/newZombie.cpp
        )

include_directories(cpp01/ex01)
add_executable(CPP01.ex01
        cpp01/ex01/main.cpp
        cpp01/ex01/Zombie.cpp
        cpp01/ex01/ZombieHorde.cpp
        )

include_directories(cpp01/ex02)
add_executable(CPP01.ex02
        cpp01/ex02/main.cpp
        )

include_directories(cpp01/ex03)
add_executable(CPP01.ex03
        cpp01/ex03/main.cpp
        cpp01/ex03/Weapon.cpp
        #        cpp01/ex03/Weapon.h
        cpp01/ex03/HumanB.cpp
        cpp01/ex03/HumanA.cpp
        #        cpp01/ex03/HumanB.h
        )
include_directories(cpp01/ex04)
add_executable(CPP01.ex04

        cpp01/ex04/main.cpp)

include_directories(cpp01/ex05)
add_executable(CPP01.ex05
        cpp01/ex05/Karen.cpp
        cpp01/ex05/Karen.h
        cpp01/ex05/main.cpp)
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

include_directories(cpp01/ex06)
add_executable(CPP01.ex06
        cpp01/ex06/Karen.cpp
        cpp01/ex06/Karen.h
        cpp01/ex06/main.cpp)

include_directories(cpp02/ex00)
add_executable(CPP02.ex00
        cpp02/ex00/main.cpp
        cpp02/ex00/Fixed.cpp
        cpp02/ex00/Fixed.h
        )

include_directories(cpp02/ex01)
add_executable(CPP02.ex01
        cpp02/ex01/main.cpp
        cpp02/ex01/Fixed.cpp
        cpp02/ex01/Fixed.h
        )

include_directories(cpp02/ex02)
add_executable(CPP02.ex02
        cpp02/ex02/main.cpp
        cpp02/ex02/Fixed.cpp
        cpp02/ex02/Fixed.h
        )

include_directories(cpp03/ex00)
add_executable(CPP03.ex00
        cpp03/ex00/main.cpp
        cpp03/ex00/ClapTrap.cpp
        cpp03/ex00/ClapTrap.h
        )

include_directories(cpp03/ex01)
add_executable(CPP03.ex01
        cpp03/ex01/ClapTrap.cpp
        cpp03/ex01/ClapTrap.h
        cpp03/ex01/main.cpp
        cpp03/ex01/ScavTrap.cpp cpp03/ex01/ScavTrap.h)

#include_directories(cpp03/ex02)
#add_executable(CPP03.ex02
#        cpp03/ex02/main.cpp)

#include_directories(cpp03/ex03)
#add_executable(CPP03.ex03
#        cpp03/ex03/main.cpp)
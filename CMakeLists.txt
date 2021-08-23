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
        cpp03/ex01/ScavTrap.cpp
        cpp03/ex01/ScavTrap.h
        )

include_directories(cpp03/ex02)
add_executable(CPP03.ex02
        cpp03/ex02/ClapTrap.cpp
        cpp03/ex02/ClapTrap.h
        cpp03/ex02/ScavTrap.cpp
        cpp03/ex02/ScavTrap.h
        cpp03/ex02/main.cpp
        cpp03/ex02/FragTrap.cpp
        cpp03/ex02/FragTrap.h)

include_directories(cpp03/ex03)
add_executable(CPP03.ex03
        cpp03/ex03/ClapTrap.cpp
        cpp03/ex03/ClapTrap.h
        cpp03/ex03/ScavTrap.cpp
        cpp03/ex03/ScavTrap.h
        cpp03/ex03/main.cpp
        cpp03/ex03/FragTrap.cpp
        cpp03/ex03/FragTrap.h
        cpp03/ex03/DiamondTrap.cpp
        cpp03/ex03/DiamondTrap.h)

include_directories(cpp04/ex00)
add_executable(CPP04.ex00
        cpp04/ex00/main.cpp
        cpp04/ex00/Animal.cpp
        cpp04/ex00/Animal.h
        cpp04/ex00/Dog.cpp
        cpp04/ex00/Dog.h
        cpp04/ex00/Cat.cpp
        cpp04/ex00/Cat.h
        cpp04/ex00/WrongAnimal.cpp
        cpp04/ex00/WrongAnimal.h
        cpp04/ex00/WrongCat.cpp
        cpp04/ex00/WrongCat.h
        )

include_directories(cpp04/ex01)
add_executable(CPP04.ex01
        cpp04/ex01/main.cpp
        cpp04/ex01/Animal.cpp
        cpp04/ex01/Animal.h
        cpp04/ex01/Dog.cpp
        cpp04/ex01/Dog.h
        cpp04/ex01/Cat.cpp
        cpp04/ex01/Cat.h
        cpp04/ex01/Brain.cpp
        cpp04/ex01/Brain.h)

include_directories(cpp04/ex02)
add_executable(CPP04.ex02
        cpp04/ex02/main.cpp
        cpp04/ex02/Animal.cpp
        cpp04/ex02/Animal.h
        cpp04/ex02/Dog.cpp
        cpp04/ex02/Dog.h
        cpp04/ex02/Cat.cpp
        cpp04/ex02/Cat.h
        cpp04/ex02/Brain.cpp
        cpp04/ex02/Brain.h)

include_directories(cpp04/ex03)
add_executable(CPP04.ex03
        cpp04/ex03/main.cpp
        cpp04/ex03/main.cpp
        cpp04/ex03/AMateria.cpp
        cpp04/ex03/AMateria.h
        cpp04/ex03/ICharacter.h
        cpp04/ex03/IMateriaSource.cpp
        cpp04/ex03/IMateriaSource.h
        cpp04/ex03/MateriaSource.cpp
        cpp04/ex03/MateriaSource.h
        cpp04/ex03/Ice.cpp
        cpp04/ex03/Ice.h
        cpp04/ex03/Cure.cpp
        cpp04/ex03/Cure.h
        cpp04/ex03/Character.cpp
        cpp04/ex03/Character.h
        )

include_directories(cpp05/ex00)
add_executable(CPP05.ex00
        cpp05/ex00/main.cpp
        cpp05/ex00/Bureaucrat.cpp
        cpp05/ex00/Bureaucrat.h
        )

include_directories(cpp05/ex01)
add_executable(CPP05.ex01
        cpp05/ex01/main.cpp
        cpp05/ex01/Bureaucrat.cpp
        cpp05/ex01/Bureaucrat.h
        cpp05/ex01/Form.cpp
        cpp05/ex01/Form.cpp
        cpp05/ex01/Form.h
        )

include_directories(cpp05/ex02)
add_executable(CPP05.ex02
        cpp05/ex02/main.cpp
        cpp05/ex02/Bureaucrat.cpp
        cpp05/ex02/Bureaucrat.h
        cpp05/ex02/Form.cpp
        cpp05/ex02/Form.cpp
        cpp05/ex02/Form.h
        cpp05/ex02/ShrubberyCreationForm.cpp
        cpp05/ex02/ShrubberyCreationForm.h
        cpp05/ex02/RobotomyRequestForm.cpp
        cpp05/ex02/RobotomyRequestForm.h
        cpp05/ex02/PresidentialPardonForm.cpp
        cpp05/ex02/PresidentialPardonForm.h
        )


include_directories(cpp05/ex03)
add_executable(CPP05.ex03
        cpp05/ex03/main.cpp
        cpp05/ex03/Bureaucrat.cpp
        cpp05/ex03/Bureaucrat.h
        cpp05/ex03/Form.cpp
        cpp05/ex03/Form.cpp
        cpp05/ex03/Form.h
        cpp05/ex03/ShrubberyCreationForm.cpp
        cpp05/ex03/ShrubberyCreationForm.h
        cpp05/ex03/RobotomyRequestForm.cpp
        cpp05/ex03/RobotomyRequestForm.h
        cpp05/ex03/PresidentialPardonForm.cpp
        cpp05/ex03/PresidentialPardonForm.h
        cpp05/ex03/Intern.cpp cpp05/ex03/Intern.h
        )

include_directories(cpp06/ex00)
add_executable(CPP06.ex00
        cpp06/ex00/main.cpp
        cpp06/ex00/Convert.cpp
        cpp06/ex00/Convert.h
        )

include_directories(cpp06/ex01)
add_executable(CPP06.ex01
        cpp06/ex01/main.cpp
        cpp06/ex01/Data.h
        )

include_directories(cpp06/ex02)
add_executable(CPP06.ex02
        cpp06/ex02/main.cpp
        cpp06/ex02/Base.h
        cpp06/ex02/A.h
        cpp06/ex02/B.h
        cpp06/ex02/C.h
        )

include_directories(cpp07/ex00)
add_executable(CPP07.ex00
        cpp07/ex00/main.cpp cpp07/ex00/whatever.h)






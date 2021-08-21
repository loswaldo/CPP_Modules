//
// Created by shaurmyashka on 8/21/21.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137), target(target){

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "           .        +          .      .          .\n"
				 "     .            _        .                    .\n"
				 "  ,              /;-._,-.____        ,-----.__\n"
				 " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
				 "  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
				 "                      ,    `./  \\:. `.   )==-'  .\n"
				 "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
				 ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
				 "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
				 "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
				 "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
				 "              \\:  `  X` _| _,\\/'   .-'\n"
				 ".               \":._:`\\____  /:'  /      .           .\n"
				 "                    \\::.  :\\/:'  /              +\n"
				 "   .                 `.:.  /:'  }      .\n"
				 "           .           ):_(:;   \\           .\n"
				 "                      /:. _/ ,  |\n"
				 "                   . (|::.     ,`                  .\n"
				 "     .                |::.    {\\\n"
				 "                      |::.\\  \\ `.\n"
				 "                      |:::(\\    |\n"
				 "              O       |:::/{ }  |                  (o\n"
				 "               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
				 "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
				 "dew   ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~\n"
				 "more trees: https://ascii.co.uk/art/tree\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm)
: Form("ShrubberyCreationForm", 145, 137), target(shrubberyCreationForm.target){

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm) {
	if (this != &shrubberyCreationForm)
	{
		this->target = shrubberyCreationForm.target;
	}
	return *this;
}

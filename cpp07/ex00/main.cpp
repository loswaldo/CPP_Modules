//
// Created by shaurmyashka on 8/23/21.
//

#include <iostream>
#include "whatever.h"

int main ()
{

	int a = 9;
	int b = 4;

	char ca = 'x';
	char cb = 'y';

	double da = 42.0;
	double db = 25.6;

	std::cout << "max is: \t" << max(a, b) << std::endl;
	std::cout << "max is: \t" << max(ca, cb) << std::endl;
	std::cout << "max is: \t" << max(da, db) << std::endl;

	std::cout << "min is: \t" << min (a, b) << std::endl;
	std::cout << "min is: \t" << min (ca, cb) << std::endl;
	std::cout << "min is: \t" << min (da, db) << std::endl;

	std::cout << "before swap: a = " << a << " b = " << b << std::endl;
	swap(a, b);
	std::cout << "after swap: a = " << a << " b = " << b << std::endl;
	swap(a, b);
	std::cout << "after double swap: a = " << a << " b = " << b << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;


	std::cout << "before swap: a = " << ca << " b = " << cb << std::endl;
	swap(ca, cb);
	std::cout << "after swap: a = " << ca << " b = " << cb << std::endl;
	swap(ca, cb);
	std::cout << "after double swap: a = " << ca << " b = " << cb << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "before swap: a = " << da << " b = " << db << std::endl;
	swap(da, db);
	std::cout << "after swap: a = " << da << " b = " << db << std::endl;
	swap(da, db);
	std::cout << "after double swap: a = " << da << " b = " << db << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

}

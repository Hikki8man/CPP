# include <time.h>
# include <iostream>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"


Base * generate(void) {

	srand(time(NULL));
	int random = rand() % 3;
	
	switch (random) {
		case 0: return new A();
		case 1: return new B();
		case 2 : return new C();
		default : return NULL;
	}
}

void identify(Base *p) {

	Base *tmp;

	tmp = dynamic_cast<A*>(p);
	if (tmp) {
		std::cout << "A" << std::endl;
		return ;
	}

	tmp = dynamic_cast<B*>(p);
	if (tmp) {
		std::cout << "B" << std::endl;
		return ;
	}

	tmp = dynamic_cast<C*>(p);
	if (tmp) {
		std::cout << "C" << std::endl;
		return ;
	}	
}

void identify(Base& p) {

	try
	{
		Base &r = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(r);
		return ;
	}
	catch(const std::exception& e){}
	
	try
	{
		Base &r = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(r);
		return ;
	}
	catch(const std::exception& e){}

	try
	{
		Base &r = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(r);
		return ;
	}
	catch(const std::exception& e){}
}




int main(void)
{

	Base *base = generate();

	std::cout << "Genrerated class: " << std::endl;
	identify(base);
	identify(*base);

	A a;
	B b;
	C c;

	std::cout << "------------------------------" << std::endl;
	std::cout << "Class A: " << std::endl;
	identify(&a);
	identify(a);

	std::cout << "------------------------------" << std::endl;
	std::cout << "Class B: " << std::endl;
	identify(&b);
	identify(b);

	std::cout << "------------------------------" << std::endl;
	std::cout << "Class C: " << std::endl;
	identify(&c);
	identify(c);

	delete base;

	return 0;
}
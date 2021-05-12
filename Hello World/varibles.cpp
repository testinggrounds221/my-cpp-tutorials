#include <iostream>

int main(){
	int i; // This can store -2b to 2b values ***4bytes***
	unsigned int ui; // This can store positive values upto 4b ***4bytes***

	char c; // ***1byte***
	short s; // ***2bytes***
	long long ll; // ***8bytes***

	float ft_var = 0.99f;// ***4bytes***
	double db_var = 0.98;// ***8bytes***
	const char* sz = "The Size of ";
	const char* is_str = " is ";
	std::cout << sz << typeid(i).name() << is_str << sizeof(i) << " bytes \n";
	std::cout << sz << typeid(ui).name() << is_str << sizeof(ui) << "bytes \n";
	std::cout << sz << typeid(c).name() << is_str << sizeof(c) << " bytes \n";
	std::cout << sz << typeid(s).name() << is_str << sizeof(s) << " bytes \n";
	std::cout << sz << typeid(ll).name() << is_str << sizeof(ll) << " bytes \n";
	std::cout << sz << typeid(ft_var).name() << is_str << sizeof(ft_var) << " bytes \n";
	std::cout << sz << typeid(db_var).name() << is_str << sizeof(db_var) << " bytes \n";
	std::cout << sz << typeid(is_str).name() << is_str << sizeof(is_str) << " bytes \n";
}
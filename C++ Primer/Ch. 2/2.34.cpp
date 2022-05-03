#include <iostream>

int main(){
	int i = 0, &r = i;
	std::cout << i << " " << &r << std::endl; 
	auto a = r;
	std::cout << a << std::endl;
	const int ci = i, &cr = ci;
	std::cout << ci << " " << &cr << std::endl;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	std::cout << b << " " << c << " " << d << " " << e << std::endl;
	const auto f = ci;
	auto &g = ci;
//	auto &h = 42;
	const auto &j = 42;
	std::cout << f << " " << &g << " " << &j << std::endl;
	auto k = ci, &l = i;
	auto &m = ci, *p = &ci;
	auto /*&n = i,*/ *p2 = &ci;
	std::cout << k << " " << &l << " " << &m << " " << *p << " " << *p2 << std::endl;
	return 0;
}


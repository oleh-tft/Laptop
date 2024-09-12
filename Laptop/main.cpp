#include<iostream>
#include"Laptop.h"
using namespace std;

int main()
{
	Laptop obj1("HP", 300.9, "AMD Ryzen 7000 ser,", 500.9);
	obj1.Output();

	Laptop obj3("Lenovo", 400, "Intel i7-4700,", 300, "ATRIA", 50, "ASUS AS1000", 180, "Intel Arc A770M", 480);
	obj3.Output();
}
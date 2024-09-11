#include "Laptop.h"
#include<iostream>
using namespace std;

Laptop::Laptop(const char* n, double pr, const char* mcpu, double prcpu):cpu(mcpu,prcpu)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = pr;

	ram = new Ram("Samsung", 200);
	ssd = new SSD("Kingston 1TB", 200);
	gpu = new GPU("Nvidia 4090", 1300);
}

Laptop::Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mram, double pram, const char* mssd, double pssd, const char* mgpu, double pgpu) :
	cpu(mcpu, prcpu), ram(mram, pram), ssd(mssd, pssd), gpu(mgpu, pgpu)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = pr;
}

double Laptop::GetPrice()
{
	return price + cpu.GetPrice() + ram->GetPrice() + ssd->GetPrice() + gpu->GetPrice();
}

void Laptop::Output()
{
	cout << "Model: " << name << endl
		 << "Cpu: " << cpu.GetModel() << endl
		 << "Ram: " << ram->GetModel() << endl
		 << "SSD: " << ssd->GetModel() << endl
		 << "GPU: " << gpu->GetModel() << endl
		 << "Laptop price = " << GetPrice() << " $\n";
}

Laptop::~Laptop()
{
	delete[] name;
	delete ram;
	delete ssd;
	delete gpu;
}

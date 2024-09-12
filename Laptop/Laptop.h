#pragma once
#include "Cpu.h"
#include "Ram.h"
#include "SSD.h"
#include "GPU.h"

class Laptop
{
	char* name;
	double price;
	Cpu cpu; // Объект другого класса без конструктора по умолчанию!
	Ram* ram;
	SSD* ssd;
	GPU* gpu;
	/* добавляем остальные компоненты для ноутбука - указатели на объекты, для которых память выдел. в конструкторе класса Laptop 
	*/
public:
	Laptop(const char* n, double pr, const char* mcpu, double prcpu);
	Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mram, double pram, const char* mssd, double pssd, const char* mgpu, double pgpu);
	double GetPrice();
	void Output();
	~Laptop();
};


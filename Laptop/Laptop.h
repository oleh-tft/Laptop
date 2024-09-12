#pragma once
#include "Cpu.h"
#include "Ram.h"
#include "SSD.h"
#include "GPU.h"

class Laptop
{
	char* name;
	double price;
	Cpu cpu; // ������ ������� ������ ��� ������������ �� ���������!
	Ram* ram;
	SSD* ssd;
	GPU* gpu;
	/* ��������� ��������� ���������� ��� �������� - ��������� �� �������, ��� ������� ������ �����. � ������������ ������ Laptop 
	*/
public:
	Laptop(const char* n, double pr, const char* mcpu, double prcpu);
	Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mram, double pram, const char* mssd, double pssd, const char* mgpu, double pgpu);
	double GetPrice();
	void Output();
	~Laptop();
};


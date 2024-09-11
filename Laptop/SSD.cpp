#include "SSD.h"
#include<iostream>
using namespace std;

SSD::SSD()
{
	model = nullptr;
	price = 0.0;
}

SSD::SSD(const char* m, double pr)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	price = pr;
}

const char* SSD::GetModel()
{
	return model;
}

double SSD::GetPrice()
{
	return price;
}

void SSD::SetPrice(double pr)
{
	price = pr;
}

SSD::~SSD()
{
	delete[] model;
}

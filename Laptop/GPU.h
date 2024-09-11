#pragma once
class GPU
{
	char* model;
	double price;
public:
	GPU();
	GPU(const char* m, double pr);
	const char* GetModel();
	double GetPrice();
	void SetPrice(double pr);
	~GPU();
};
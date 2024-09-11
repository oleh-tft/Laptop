#pragma once
class SSD
{
	char* model;
	double price;
public:
	SSD();
	SSD(const char* m, double pr);
	const char* GetModel();
	double GetPrice();
	void SetPrice(double pr);
	~SSD();
};
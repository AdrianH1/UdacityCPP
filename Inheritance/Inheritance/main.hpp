#include <iostream>
#include <string>

class Flower
{
private:
	std::string bloomTime;
public:
	Flower();
	void setBloomTime(std::string bloomIn);
	std::string getBloomTime();
};

Flower::Flower()
{
	bloomTime = "no bloomtime set";
}

void Flower::setBloomTime(std::string bloomIn)
{
	bloomTime = bloomIn;
}

std::string Flower::getBloomTime()
{
	return bloomTime;
}

class Rose : public Flower
{
private:
	std::string fragrance;
public:
	Rose();
	void setFragrance(std::string fragranceIn);
	std::string getFragrance();
};

Rose::Rose()
{
	fragrance = "no fragranece set";
}

void Rose::setFragrance(std::string fragranceIn)
{
	fragrance = fragranceIn;
}

std::string Rose::getFragrance()
{
	return fragrance;
}
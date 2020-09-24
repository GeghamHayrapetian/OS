
#include <iostream>
#include <math.h>
class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &from_other);
	const Complex operator= (const Complex & other);
	Complex operator+ (Complex &other);
	Complex operator* (Complex &other);
	Complex operator- (Complex &other);
	bool operator< (Complex &other);
	double getReal() const
	{
		return real;
	}
	double getImaginary() const
	{
		return imaginary;
	}
	double abs()
	{
		return sqrt(real*real + imaginary * imaginary);
	}


};
std::ostream& operator<< (std::ostream &out, const Complex & complex);



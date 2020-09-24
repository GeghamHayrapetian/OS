#include "Complex.h"



Complex::Complex() : real(0), imaginary(0)
{
};
Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary)
{
};
Complex::Complex(const Complex &from_other)
{

	real = from_other.real;
	imaginary = from_other.imaginary;
};
const Complex Complex::operator=(const Complex & other)
{
	real = other.real;
	imaginary = other.imaginary;
	return *this;

};
Complex Complex::operator+ (Complex &other) {
	return Complex(real + other.real, imaginary + other.imaginary);
};
bool Complex::operator< (Complex &other) {
	if (abs() < other.abs())
		return true;
	else
	{
		return false;
	}
}

Complex Complex::operator* (Complex &other) {
	return Complex(real*other.real - imaginary * other.imaginary, real*other.imaginary + imaginary * other.real);
};

Complex Complex::operator- (Complex &other) {
	return Complex(real - other.real, imaginary - other.imaginary);
};
std::ostream& operator<< (std::ostream &out,const Complex & complex) {
	out << "(" << complex.getReal() << " , " << complex.getImaginary() << ")";

	return out;
};
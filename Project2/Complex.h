#pragma once
#include <iostream>
#include "functionForComplex.h"

class Complex
{
private:
	double real;
	double imag;
public:
	Complex(){}
	Complex(double gainedReal, double gainedImag)
	{
		real = gainedReal;
		imag = gainedImag;
	}
	double getReal() { return real; }
	double getImag() { return imag; }
	void setReal(double value) { real = value; }
	void setImag(double value) { imag = value; }
	static std::string deleteGap(std::string complex);
	friend std::ostream& operator<<(std::ostream& os, const Complex& complex)
	{
		std::cout << "(";
		if (complex.real != 0)
			std::cout << complex.real;
		if (complex.imag != 0)
		{
			if(complex.imag > 0)
				std::cout << "+";
			if (complex.imag != 1)
				std::cout << complex.imag;
			std::cout << "i";
		}
		std::cout << ")";
		return os;
	}
	friend Complex operator+(const Complex& left, const Complex& right)
	{
		double real = left.real + right.real;
		double imag = left.imag + right.imag;

		return Complex(real, imag);
	}
	friend Complex operator-(const Complex& left, const Complex& right)
	{
		double real = left.real - right.real;
		double imag = left.imag - right.imag;

		return Complex(real, imag);
	}
	friend Complex operator*(const Complex& left, const Complex& right)
	{
		double real = (left.real * right.real) - (left.imag * right.imag);
		double imag = left.real * right.imag + left.imag * right.real;

		return Complex(real, imag);
	}
	friend std::istream &operator>>(std::istream& is, Complex& complex);
};


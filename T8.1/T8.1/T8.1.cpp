#include <iostream>

#include <string>

using namespace std;

template <class T>

class ComplexNumber {
	T rel, img;
public:
	ComplexNumber(T real , T imaginary )
	{
		this->rel = real;
		this->img = imaginary;
	}
	T module1(ComplexNumber C) 
	{
		double value1;
		value1 = sqrt(C.rel * C.rel + C.img * C.img);
		return value1;
	}

	T module2(ComplexNumber C1)
	{
		double value2;
		value2 = sqrt(C1.rel * C1.rel + C1.img * C1.img);
		return value2;
	}
	
	T getMin() {
		T result;
		result = this->value1 < this->value2 ? this->value1 : this->value2;
		return result;
	}
	
	T getMin(T value1, T value2) {
		T result;
		result = value1 < value2 ? value1 : value2;
		return result;
	}
};
int main() {
	
	
ComplexNumber <int> C(4, 5);
	
ComplexNumber <int> C1(7, 9);

	double valueA, valueB;
	int minimum;
	
	valueA =  C.module1(C);
	cout << "Mod for 1st complex number:" << " "<< valueA;
	cout << endl;
	
	valueB = C1.module2(C1);
	cout << "Mod for 2nd complex number:" << " " << valueB;
	cout << endl;

	ComplexNumber <double> min(valueA, valueB);
	minimum = min.getMin(valueA, valueB);
	cout << "Minimum module:" << " " << minimum;
	
	return 0;
}
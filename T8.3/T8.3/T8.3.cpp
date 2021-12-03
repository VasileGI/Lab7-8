#include <iostream>

#include <string>

#include <list>

#include <vector>

using namespace std;

 class Average
 {
 public:
	 template<typename T>
	 double average(T list)
	 {
		 double sum = 0;
		 for (double iterator = 0; iterator <= list.nr(); iterator++)
		 {
			 sum = sum + list[iterator].getAge();
		 }
	 }
 };

class Person 
{
	
public:
	int age;
	Person() {}

	Person(int age) 
	{
		this->age = age;
	}
	int getAge() {
		return this->age;
	}
};
class Car 
{
private:
	int age;
public:
	Car(int age)
	{
		this->age = age;
	}
	Car() {}
	int getAge() {
		return this->age;
	}
};
int main() 
{
	vector<Person>personList;
	vector<Car>carList;

	Person pers1(13), pers2(36), pers3(45),pers4(23);
	personList.push_back(pers1);
	personList.push_back(pers2);
	personList.push_back(pers3);
	personList.push_back(pers4);


	Car car1(22), car2(55), car3(64), car4(93);
	carList.push_back(car1);
	carList.push_back(car2);
	carList.push_back(car3);
	carList.push_back(car4);

	cout << Average::average(personList);
	cout << endl;

	cout << Average::average(carList);
	cout << endl;
	
	return 0;
}
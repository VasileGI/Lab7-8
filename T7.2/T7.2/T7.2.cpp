#include<iostream>

#include<vector>

using namespace std;

class Group 
{
	class Stud 
	{
	public:

		string fullname;
		int age;
		float avg;
		Stud() :fullname(""), age(0), avg(0) { };
		Stud(string fn, int age, float avg) : fullname(fn), age(age), avg(avg) {};
	};
	vector<Stud> studentList;
public:

	void displayStudentList()
	{
		cout << "{";

		for (auto it : studentList)
		{
			cout << "{";
			cout << "fullName: " << it.fullname << ", ";
			cout << "age: " << it.age << ", ";
			cout << "avg: " << it.avg;
			cout << "}, ";
		}

		cout << "}";
	}
	void addStudent(string fn, int age, int avg) {
		Stud s(fn, age, avg);
		studentList.push_back(s);
	}
};


int main()
{
	auto g = new Group();
	g->addStudent("Ioan", 12, 12);
	g->addStudent("Huan", 12, 12);
	g->displayStudentList();
}
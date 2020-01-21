//============================================================================
// Name        : Student.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student
{
	static int count;
	int roll;
	int age;
	string div;
	string name;
	string clas;
	string dob;
	string blood;
	string addr;
	string ph;
	string lic;
public:
	Student();
	Student(int,int,string,string,string,string,string,string,string,string);
	Student(Student &s);
	void getData();
	void putData();
	~Student()
	{
		count--;
		cout<<"OBJECT DESTROYED"<<endl;
	}
	static int getCount()
	{
		return count;
	}
	friend class Student_Per;

};
int Student::count=0;
Student::Student()
{
	roll=0;
	age=0;
	name,ph,clas,dob,blood,addr,lic="";
	count++;
}
Student::Student(int age,int roll,string ph,string div,string name,string c,string dob,string b,string ad,string l)
{
	this->age=age;
	this->roll=roll;
	this->ph=ph;
	this->name=name;
	clas=c;
	this->div=div;
	this->dob=dob;
	blood=b;
	addr=ad;
	lic=l;
	count++;
}
Student::Student(Student &s)
{
	roll=s.roll;
	age=s.age;
	ph=s.ph;
	name=s.name;
	clas=s.clas;
	div=s.div;
	dob=s.dob;
    blood=s.blood;
    addr=s.addr;
    lic=s.lic;
    count++;
}

void Student::getData()
{
	        cout<<"Enter Name - "<<endl;
	        cin>>name;
			cout<<"Enter Age - "<<endl;
			cin>>age;
			cout<<"Enter Roll Number - "<<endl;
			cin>>roll;
			cout<<"Enter Phone number - "<<endl;
			cin>>ph;
			cout<<"Enter Class - "<<endl;
			cin>>clas;
			cout<<"Enter Div - "<<endl;
			cin>>div;
			cout<<"Enter Date of Birth - "<<endl;
			cin>>dob;
			cout<<"Enter Blood group - "<<endl;
			cin>>blood;
			cout<<"Enter Address - "<<endl;
			cin>>addr;
			cout<<"Enter License Number "<<endl;
			cin>>lic;
}

void Student::putData()
{
	cout<<"Name - "<<name<<endl;
			cout<<"Age - "<<age<<endl;
			cout<<"Roll Number - "<<roll<<endl;
			cout<<"Phone number - "<<ph<<endl;
			cout<<"Class - "<<clas<<endl;
			cout<<"Div - "<<div<<endl;
			cout<<"Date of Birth - "<<dob<<endl;
			cout<<"Blood group - "<<blood<<endl;
			cout<<"Address - "<<addr<<endl;
			cout<<"License Number "<<lic<<endl;
	    cout<<"Count is "<<count-1<<endl;;
}


 class Student_Per
{
	Student s3;
public:
	void display(Student s3)
	{
		cout<<"Name - "<<s3.name<<endl;
		cout<<"Age - "<<s3.age<<endl;
		cout<<"Roll Number - "<<s3.roll<<endl;
		cout<<"Phone number - "<<s3.ph<<endl;
		cout<<"Class - "<<s3.clas<<endl;
		cout<<"Div - "<<s3.div<<endl;
		cout<<"Date of Birth - "<<s3.dob<<endl;
		cout<<"Blood group - "<<s3.blood<<endl;
		cout<<"Address - "<<s3.addr<<endl;
		cout<<"License Number "<<s3.lic<<endl;
    cout<<"Count is "<<s3.count-1<<endl;;
	}
};

int main()
{
	int n;
	cout<<"Enter number of students"<<endl;
	cin>>n;
	Student *e[n];
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Details of Student "<<(i+1)<<" :-"<<endl;
		cout<<""<<endl;
		e[i]=new Student();
		e[i]->getData();
		cout<<""<<endl;

	}
	cout<<"Displaying data of Students........"<<endl;
	cout<<""<<endl;
	for(i=0;i<n;i++)
		{
		cout<<"Details of Student "<<(i+1)<<" are :-"<<endl;
		cout<<""<<endl;
		e[i]->putData();
		cout<<""<<endl;
		}

	/*
	Student_Per obj;
	Student o1;
    Student o2(19,1,"9796345617","h","ABC","SE","08/06/2000","A+ve","PICT Pune","A123B9423J23");
    Student o3(o2);
    obj.display(o2);
    */
}


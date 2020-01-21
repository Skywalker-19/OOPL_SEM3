//============================================================================
// Name        : Exception.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
#include <iostream>
#include <exception>
using namespace std;

class Data
{
	int age;
	float income;
	string city;
	string vehicle;
public:
	class Error{
	public:
		Error(){}
		Error(int age)
	       {cout<<"Invalid age"<<endl; }

		Error(float income)
			{cout<<"Insufficient Income"<<endl;}
	};
	Data();
	void getData();
	void display();
};
Data::Data()
{
	age=0;
	income=0;
	city="";
	vehicle="";
}
	void Data::getData()
	{
		cout<<"Enter age"<<endl;
		cin>>age;
		if(age<18||age>55)throw Error(age);
		cout<<"Enter income"<<endl;
		cin>>income;
		if(income<50000 || income>100000)throw Error(income);
		cout<<"Enter city"<<endl;
		cin>>city;
		if(!(city=="Mumbai"||city=="Pune"||city=="Chennai"||city=="Bangalore"))
        throw Error();
		cout<<"Enter vehicle"<<endl;
		cin>>vehicle;
		if(vehicle!="4-Wheeler")throw Error();
		/*if(age<18||age>55)throw Error(age);
		if(!(city=="Mumbai"||city=="Pune"||city=="Chennai"||city=="Bangalore"))
        throw Error();
		if(income<50000 || income>100000)throw Error(income);
		if(vehicle!="4-Wheeler")throw Error();*/
	}
	void Data::display()
	{
		cout<<"Age is :- "<<age<<endl;
		cout<<"Income is :- "<<income<<endl;
		cout<<"City is :- "<<city<<endl;
		cout<<"Vehicle is :- "<<vehicle<<endl;
	}
	int main()
	{
		int i=0;
		Data ob;
		try
		{
			ob.getData();

		}
		catch(Data :: Error e)
		{
			i=1;
			cout<<"Criteria didn't match"<<endl;
		}
		if(i==0)
		ob.display();
	   return 0;
	}




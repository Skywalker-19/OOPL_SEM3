//============================================================================
// Name        : PersonRecord.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
	string name;
	string ph;
	string dob;

	Person(){
		name="";
		ph="";
		dob="";
	}
	void getData();
	void showData();
};

void Person::getData()
{
	cout<<"Enter name of person "<<endl;
		cin>>name;
		cout<<"Enter phone number of person "<<endl;
			cin>>ph;
	    cout<<"Enter Date Of Birth of person "<<endl;
			cin>>dob;
}
void Person::showData()
{
	cout<<"Name - "<<name<<endl;
	cout<<"Phone Number - "<<ph<<endl;
	cout<<"Date of Birth -"<<dob<<endl;
}

bool comp(const Person &ob,const Person &ob1)
{
	return ob.name<ob1.name;
}

int main()
{
	int n;
cout<<"**********PERSON DATABASE*************"<<endl;
cout<<""<<endl;
cout<<"Enter number of people"<<endl;
cin>>n;
Person q[n];
for(int i=0;i<n;i++)
	q[i].getData();

Person p[n]=q;
  int g = sizeof(p)/sizeof(p[0]);
  cout<<"Sorting Data....."<<endl;
    sort(p, p+g,comp);
    for (int i = 0; i < n; ++i)
    { p[i].showData(); cout<<""<<endl;}

    string na;
    cout<<"Enter the name to be searched"<<endl;
    cin>>na;
    string nam[n];
    for(int i=0;i<n;i++)
    {nam[i]=p[i].name;}
    if(binary_search(nam,nam+n,na))
    {cout<<"Found"<<endl;}
    else
    {cout<<"Not Found"<<endl;}
	return 0;
}

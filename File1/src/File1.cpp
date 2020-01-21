//============================================================================
// Name        : File1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fstream>
#include<bits/stdc++.h>
using namespace std;

class Student
{
	int age;
	char name[50];
public:
	void get()
	{
		cin>>age>>name;
	}
	void put()
	{
		cout<<age<<" "<<name;
	}

};
int main()
{
Student s;
fstream f;
f.open("Binary.txt",ios::binary|ios::in|ios::out|ios::app);
s.get();
f.write((char *)&s,sizeof(s));
f<<'\n';
f.read((char *)&s,sizeof(s));
s.put();
}

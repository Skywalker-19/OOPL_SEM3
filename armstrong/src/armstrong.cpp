//============================================================================
// Name        : armstrong.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,s,r,t,c,g;
	cout << "Enter a number" << endl; // prints !!!Hello World!!!
	cin>>n;
	t=n;
	g=n;
	for(;g!=0;)
	{
		g=g/10;
		c++;
	}
	for(;n!=0;)
	{
		r=n%10;
		s+=pow(r,c);
		n=n/10;
	}
	if(t==s)
	{
		cout<<"Armstrong number!"<<endl;
	}
	else
	{
		cout<<"Not Armstrong number!"<<endl;
	}
	return 0;

}

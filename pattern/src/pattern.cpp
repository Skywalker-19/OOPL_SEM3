//============================================================================
// Name        : pattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int i,j,k,n;
	cout<<"No. of stars required in first row"<<endl;
	cin>>n;
	cout<<" ";
	for(i=n;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			cout<<"* ";
		}
		cout<<" "<<endl;
		for(k=0;k<=(n+1-i);k++)
		{
			cout<<" ";
		}

	}
}

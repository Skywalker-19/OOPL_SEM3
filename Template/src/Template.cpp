//============================================================================
// Name        : Template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class T>
T large(T a,T b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main() {
	int x,y=0;
	cin>>x>>y;
	cout<<large(x,y)<<endl;
	float p,q=0;
	cin>>p>>q;
	cout<<large(p,q)<<endl;
	//cout<<large(x,p)<<endl;
	return 0;
}

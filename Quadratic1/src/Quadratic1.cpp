//============================================================================
// Name        : Quadratic1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
class Quadratic{
	float a,b,c;
	public:
	Quadratic(){a=0;b=0;c=0;}
	Quadratic operator +(Quadratic &q);
	friend ostream & operator <<(ostream & out,Quadratic &q);
	friend istream & operator >>(istream & in,Quadratic &q);
	float eval(float);
	float positiveRoot();
	float negativeRoot();
	int check();
    int menu();
};

float Quadratic::positiveRoot()
{
	float d=b*b-4*a*c;
	return (((-1)*b+sqrt(d))/(2*a));
}

float Quadratic::negativeRoot()
{
	float d=b*b-4*a*c;
	return (((-1)*b-sqrt(d))/(2*a));
}

int Quadratic::check()
{
	float d=b*b-4*a*c;
	if(d>=0)
		return 1;
	else
		return 0;
}

Quadratic Quadratic::operator +(Quadratic &q1)
{
	Quadratic q;
	q.a=a+q1.a;
	q.b=b+q1.b;
	q.c=c+q1.c;
	return q;
}

float Quadratic::eval(float x)
{
	return(a*x*x+b*x+c);
}


ostream & operator <<(ostream & out,Quadratic &q)
{
	if(q.b<0&&q.c<0)
		out<<"\tSum ="<<q.a<<"x^2 - "<<(-1)*q.b<<"x - "<<(-1)*q.c;
	else if(q.b<0&&q.c>=0)
		out<<"\tSum ="<<q.a<<"x^2 - "<<(-1)*q.b<<"x + "<<q.c;
	else if(q.b>=0&&q.c<0)
		out<<"\tSum ="<<q.a<<"x^2 + "<<q.b<<"x - "<<(-1)*q.c;
	else
		out<<"\tSum ="<<q.a<<"x^2 + "<<q.b<<"x + "<<q.c;
	return out;
}


istream & operator >>(istream & in,Quadratic &q)
{
	char x;
	in>>q.a>>x>>x>>x>>q.b>>x>>q.c;
	return in;
}

int main()
{
	Quadratic q,q1,q2;
	char c;
	char ch;
	float x;
	int f;
	cout<<"Enter Quadratic Equation: ";
		cin>>q1;
for(;;)
{
	cout<<"..........QUADRATIC MENU.........."<<endl;
	cout<<"Enter 1 Perform Addition"<<endl;
	cout<<"Enter 2 to Evaluate of value of x"<<endl;
	cout<<"Enter 3 to Evaluate roots"<<endl;
	cin >> c;
	switch(c)
	{f=0;
	case '1':
		cout<<"Enter Second Quadratic Equation: ";
		cin>>q2;
		q=q1+q2;
		cout<<q<<endl;
		break;
	case '2':
		cout<<"Enter the Value of x: ";
		cin>>x;
		cout<<"q("<<x<<")= "<<q1.eval(x)<<endl;
		break;
	case '3':
		if (q1.check())
			cout<<"Roots Are: "<<q1.positiveRoot()<<" and "<<q1.negativeRoot()<<endl;
		else
			cout<<"No Real Roots Exists"<<endl;
		break;
	default: cout<<"Enter valid choice" <<endl; f=1;
	}
    if(f==1)
    {
    	continue;
    }
    cout<<"Do you want to continue enter y/n"<<endl;
    cin>> ch;
    if(ch=='n')
    {break;}
    else
    {
    	continue;
    }
}
	return 0;
}

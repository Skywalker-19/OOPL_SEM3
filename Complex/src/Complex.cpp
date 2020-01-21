//============================================================================
// Name        : Complex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex
{

	float real,imag;
public:
	void getData();
	Complex operator+(Complex &s1);
	Complex operator-(Complex &s1);
	Complex operator*(Complex &s1);
	Complex operator/(Complex &s1);
	void display();
	int check();

};

void Complex::getData()
{
	cout<<"Enter real part"<<endl;
	cin>>real;
	cout<<"Enter imaginary part"<<endl;
	cin>>imag;
}

Complex Complex::operator+(Complex &s1)
{
	Complex s3;
	s3.real=real+s1.real;
	s3.imag=imag+s1.imag;
	return s3;
}

Complex Complex::operator-(Complex &s1)
{
	Complex s3;
	s3.real=real-s1.real;
	s3.imag=imag-s1.imag;
	return s3;
}

Complex Complex::operator*(Complex &s1)
{
	Complex s3;
	s3.real=(real*s1.real)-(imag*s1.imag);
	s3.imag=(real*s1.imag)+(imag*s1.real);
	return s3;
}

Complex Complex::operator/(Complex &s1)
{
	Complex s3;
	int d=0;
	for(; ;)
	{
	if(s1.real==0 && s1.imag==0)
	{
		cout<<"DENOMINATOR IS ZERO!! HENCE DIVISION NOT POSSIBLE!"<<endl;
		cout<<"Do you want to divide by another complex number?(0 for no/1 for yes)"<<endl;
		cin>>d;
		if(d==1){s1.getData();}
		else{ return s3; break;}
	}
	else{break;}
	}
	d=(s1.real*s1.real)+(s1.imag*s1.imag);
	cout<<d<<endl;
	s3.real=((real*s1.real)+(imag*s1.imag))/d;
	s3.imag=((-1*real*s1.imag)+(imag*s1.real))/d;
	return s3;
}

void Complex::display()
{
	cout<<"Real Part is "<<real<<endl;
	cout<<"Imaginary Part is "<<imag<<endl;
}

int Complex::check()
{
	if(real==0 && imag==0)
	{
		return 0;
	}
	else
	{return 1;}
}

int main()
{
	Complex s1,s2,s3;

	cout<<"Enter the 1st complex number"<<endl;
	s1.getData();
	cout<<"Enter the 2nd complex number"<<endl;
	s2.getData();
	int c,f;
	char ch;
	for(;;)
	{
		f=0;
        cout << "   MENU " <<endl;
		cout << "Enter 1 for addition" <<endl;
		cout << "Enter 2 for subtraction" <<endl;
		cout << "Enter 3 for multiplication" <<endl;
		cout << "Enter 4 for division" <<endl;
		cin >> c;
		int d=0;
		switch(c)
		{
		case 1:  s3=s1+s2;
		         s3.display();
		        break;
		case 2:  s3=s1-s2;
                 s3.display();
		        break;
		case 3:  s3=s1*s2;
                 s3.display();
		        break;
		case 4: s3=s1/s2;
		        d=s3.check();
		        if(d==1)
                {s3.display();}
		        break;
		default:  f=1;
		          cout<<"Enter valid choice" <<endl;
		}
		if(f==1)
		{continue;}
		cout<<"Do you want to perform other operation? Enter y/n"<<endl;
		cin>> ch;
		if(ch=='n')
		  {
			cout<<"OFF";
			break;}
		else
		 {continue;}
	}

}

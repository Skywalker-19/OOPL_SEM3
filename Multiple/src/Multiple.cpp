//============================================================================
// Name        : Multiple.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Personal
{
	string name;
	int age;
	string addr;
	string blood;
	string ph;
	string dob;
public :
	Personal()
    {
		name,addr,blood,ph="";
		age=0;
    }
	void getData()
	{
		cout<<"Enter Name - "<<endl;
	     cin>>name;
	    cout<<"Enter Age - "<<endl;
		cin>>age;
		cout<<"Enter Date of Birth - "<<endl;
		cin>>dob;
		cout<<"Enter Blood group - "<<endl;
		cin>>blood;
		cout<<"Enter Phone number - "<<endl;
		cin>>ph;
		cout<<"Enter Address - "<<endl;
	    cin>>addr;
	}
	void putData()
	{
		            cout<<"Name - "<<name<<endl;
					cout<<"Age - "<<age<<endl;
					cout<<"Date of Birth - "<<dob<<endl;
					cout<<"Blood group - "<<blood<<endl;
					cout<<"Phone number - "<<ph<<endl;
					cout<<"Address - "<<addr<<endl;

	}
	   ~Personal()
		{
			cout<<"OBJECT DESTROYED"<<endl;
		}

};

class Prof
{
	string quali;
	int npj;
	string jobexpi;
public:
	Prof()
	    {
			jobexpi,quali="";
			npj=0;
	    }
		void getData()
		{
			cout<<"Enter Qualification - "<<endl;
		     cin>>quali;
		    cout<<"Enter No. of Previous Jobs - "<<endl;
			cin>>npj;
			cout<<"Enter Job Experience - "<<endl;
			cin>>jobexpi;

		}
		void putData()
		{
			            cout<<"Qualification - "<<endl;
			            cout<<quali<<endl;
						cout<<"No. of previous jobs - "<<endl;
								cout<<npj<<endl;
						cout<<"Job Experience - "<<endl;
								cout<<jobexpi<<endl;
        }
		   ~Prof()
			{
				cout<<"OBJECT DESTROYED"<<endl;
			}


};

class Acad
{
	string br1;
	float hsc;
	string br2;
	float ssc;
	float gre;
	string ugclg;
	float ugp;
	string pgclg;
	float pgp;
public:
	Acad()
		    {
				br1,br2,ugclg,pgclg="";
				hsc,ssc,gre,ugp,pgp=0;
		    }
			void getData()
			{
				cout<<"State 10th Board - "<<endl;
			     cin>>br1;
			    cout<<"Enter Marks/Percentage of 10th - "<<endl;
				cin>>hsc;
				cout<<"State 12th Board - "<<endl;
				cin>>br2;
			   cout<<"Enter Marks/Percentage of 12th - "<<endl;
				cin>>ssc;
				cout<<"State Under Graduate College - "<<endl;
				cin>>ugclg;
				cout<<"Enter Pointer in Under Graduate - "<<endl;
				cin>>ugp;
				cout<<"State Post Graduate College - "<<endl;
				cin>>pgclg;
				cout<<"Enter Pointer in POst Graduate - "<<endl;
				cin>>ugp;

			}
			void putData()
			{
				cout<<"10th Board - "<<br1<<endl;
							     cin>>br1;
							    cout<<"Marks/Percentage of 10th - "<<hsc<<endl;
								cout<<"State 12th Board - "<<br2<<endl;
							   cout<<"Enter Marks/Percentage of 12th - "<<ssc<<endl;
								cout<<"State Under Graduate College - "<<ugclg<<endl;
								cout<<"Enter Pointer in Under Graduate - "<<ugp<<endl;
								cout<<"State Post Graduate College - "<<pgclg<<endl;
								cout<<"Enter Pointer in POst Graduate - "<<ugp<<endl;

	        }
			   ~Acad()
				{
					cout<<"OBJECT DESTROYED"<<endl;
				}
};

class emp:public Personal,public Prof,public Acad
{
public:
	emp()
     {
		cout<<"In Employee Constructor "<<endl;
     }
	void getData()
	{
		cout<<"Enter Personal Details"<<endl;
		cout<<""<<endl;
		Personal::getData();
		cout<<"Enter Professional Details"<<endl;
				cout<<""<<endl;
		Prof::getData();
		cout<<"Enter Academic Details"<<endl;
				cout<<""<<endl;
		Acad::getData();
	}

	void putData()
	{
		        cout<<"Personal Details are:-"<<endl;
				cout<<""<<endl;
				Personal::putData();
				cout<<"Professional Details are:-"<<endl;
						cout<<""<<endl;
				Prof::putData();
				cout<<"Academic Details are:-"<<endl;
						cout<<""<<endl;
				Acad::putData();
	}
	~emp()
	{
		cout<<"OBJECT DESTROYED"<<endl;
	}


};
int main()
{
	emp obj;
	obj.getData();
	obj.putData();
	return 0;
}

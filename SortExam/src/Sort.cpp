//============================================================================
// Name        : Sort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>

class Sort
{
	T a[];
	T size;
public:
T selSort(T a[],T size)
{
	int i,j,index;
	T temp;
	for(i=0;i<size-1;i++)
	{
		index=i;
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[index])
			{
				temp=a[j];
		        a[j]=a[index];
		        a[index]=temp;
		        //index=j;
			}
	    }
	}
}

//template<class T>
T bSearch(T a[],T size,T n)
{
	int f=0;
	int low=0;
	int high=size-1;
	int mid=0;
	while(low<high)
	{
		mid=(low+high)/2;
		if(a[mid]<n)
		{
			low=mid+1;
		}
		else if(a[mid]>n)
		{
			high=mid-1;
		}
		else if(a[mid]==n)
		{
			f=1;
			cout<<"Number Found"<<endl;
			break;
		}
	}
	     if(f==0)
			{
				cout<<"Number not found"<<endl;
			}
}
};

int main()
{
	int c;
	for( ; ;)
    {
	cout<<"1.Integer Array"<<endl;
	cout<<"2.Float Array"<<endl;
	cin>>c;
	cout<<"Enter the number of elements"<<endl;
	int n;
	cin>>n;
	if (c==2)
	{
	float arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Element at position "<<i+1<<endl;
		cin>>arr[i];
	}
    float f=n;
    Sort<float>ob;
    ob.selSort(arr,f);
	cout<<"Sorted Elements"<<endl;

		for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<endl;
			}
		float g;
	cout<<"Enter the number to be searched "<<endl;
	cin>>g;
	ob.bSearch(arr,f,g);

	}
	else
	{
		int arr[n];
			for(int i=0;i<n;i++)
			{
				cout<<"Enter Element at position "<<i+1<<endl;
				cin>>arr[i];
			}
			Sort<int>ob;
			ob.selSort(arr,n);;

			cout<<"Sorted Elements"<<endl;

				for(int i=0;i<n;i++)
					{
						cout<<arr[i]<<endl;
					}
				int g;
					cout<<"Enter the number to be searched "<<endl;
					cin>>g;
					ob.bSearch(arr,n,g);

	}
	cout<<"Do you want to continue?(1 for Yes/0 for No)"<<endl;
	cin>>c;
	if(c==1){continue;}
	else
	{break;}
	}

	return 0;
}


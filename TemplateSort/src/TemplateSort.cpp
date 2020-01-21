//============================================================================
// Name        : TemplateSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class T>

T exchangeSort(T a[],T size)
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
				index=j;
			}
		}
		        temp=a[index];
		        a[index]=a[i];
		        a[i]=temp;
	}
}
template<class T>
T binarySearch(T a[],T size,T n)
{
	int f=0;
	int low=0;
	int high=size-1;
	int mid=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		cout<<mid<<endl;
		if(a[mid]<n)
		{
			low=mid+1;
		}
		else if(a[mid]>n)
		{
			cout<<"HI"<<endl;
			high=mid-1;
		}
		else if(a[mid]==n)
		{
			f=1;
			cout<<"Number Found"<<endl;
			break;
		}
		cout<<high<<"   "<<low<<endl;
	}
	     if(f==0)
			{
				cout<<"Number not found"<<endl;
			}
}
int main()
{
	int c;
	for( ; ;)
    {
	cout<<"Enter 1 for Integer/2 for Float Array"<<endl;
	cin>>c;
	cout<<"Enter the number of elements"<<endl;
	int n;
	cin>>n;
	if (c==2)
	{
	float arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Element "<<i+1<<endl;
		cin>>arr[i];
	}
    float f=n;
	exchangeSort(arr,f);

	cout<<"Sorted Elements"<<endl;

		for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<endl;
			}
			f=n;
		float g;
		cout<<"Enter Number to be found"<<endl;
		cin>>g;
		binarySearch(arr,f,g);

	}
	else
	{
		int arr[n];
			for(int i=0;i<n;i++)
			{
				cout<<"Enter Element "<<i+1<<endl;
				cin>>arr[i];
			}
			exchangeSort(arr,n);

			cout<<"Sorted Elements"<<endl;

				for(int i=0;i<n;i++)
					{
						cout<<arr[i]<<endl;
					}
				cout<<"Enter Number to be found"<<endl;
						cin>>c;
						binarySearch(arr,n,c);
	}
	cout<<"Do you want to continue?(1 for Yes/0 for No)"<<endl;
	cin>>c;
	if(c==1){continue;}
	else
	{break;}
	}


	return 0;
}

/* OUTPUT:-
 *
 * Enter 1 for Integer/2 for Float Array
1
Enter the number of elements
3
Enter Element 1
1
Enter Element 2
4
Enter Element 3
2
Sorted Elements
1
2
4
Enter Number to be found
8
Number not found
Do you want to continue?(1 for Yes/0 for No)
1
Enter 1 for Integer/2 for Float Array
2
Enter the number of elements
3
Enter Element 1
1
Enter Element 2
5
Enter Element 3
2
Sorted Elements
1
2
5
Enter Number to be found
2
Number Found
Do you want to continue?(1 for Yes/0 for No)
0
 *
 */

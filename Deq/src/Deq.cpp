//============================================================================
// Name        : Deq.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
#include <deque>

using namespace std;

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    deque <int> gquiz;
 int n,ch;
                                         for(;;)
    					    					{
    					    					   cout<<"**********DEQueue Operations********"<<endl;
    					    				       cout<<"Enter 1 to enter number in queue from FRONT "<<endl;
    					    				       cout<<"Enter 2 to enter number in queue from BEHIND "<<endl;
    					    				       cout<<"Enter 3 to remove number in queue from FRONT "<<endl;
    					    				       cout<<"Enter 4 to remove number in queue from BEHIND "<<endl;
    					    				       cout<<"Enter 5 to find size of queue"<<endl;
    					    				       cout<<"Enter 6 to find front of queue"<<endl;
    					    				       cout<<"Enter 7 to find back of queue"<<endl;
    					    				       cout<<"Enter 8 to display element at certain position "<<endl;
    					    				       cout<<"Enter 9 to display the queue"<<endl;
    					    				       cin>>ch;
    					    				       switch(ch)
    					    				       {
    					    				    				   case 1:
    					    				    					       int n;
    					    				    					       cout<<"Enter the number to be put in the queue"<<endl;
    					    				    				           cin>>n;
    					    				    				           gquiz.push_front(n);
    					    				    				           break;
    					    				    				   case 2:
    					    				    					   cout<<"Enter the number to be put in the queue"<<endl;
    					    				    					   cin>>n;
    					    				    					   gquiz.push_back(n);
    					    				    					        break;

    					    				    				   case 3: gquiz.pop_front();
    					    				    				           showdq(gquiz);
    					    				    				           break;

    					    				    				   case 4:gquiz.pop_back();
    					    				    				           showdq(gquiz);
    					    				    				             break;

    					    				    				   case 5:
    					    				    					        cout << "\nSize is : " << gquiz.size()<<endl;;
    					    				    					        break;
    					    				    				   case 6:
    					    				    					   cout << "\nTop is : " << gquiz.front()<<endl;;
    					    				    					   break;
    					    				    				   case 7:
    					    				    					   cout<<"\nBack is : "<< gquiz.back()<<endl;
    					    				    					   break;

    					    				    				   case 8:
    					    				    					   cout<<"Enter the position "<<endl;
    					    				    					   cin>>n;
    					    				    					   gquiz.at(n);
    					    				    					   break;

    					    				    				   case 9:
    					    				    					   cout << "The queue is : ";
    					    				    					   showdq(gquiz);
    					    				    					   cout<<""<<endl;
    					    				    					        break;
    					    				    				   default:
    					    				    					      cout<<"Please enter from the above menu!"<<endl;

    					    				       }
    					    				       cout<<"Do you want to continue?(Enter 1 for yes/0 for no)"<<endl;
    					    				          cin>> ch;
    					    				          if(ch==0)
    					    				          {break;}
    					    				          else
    					    				          {
    					    				          	continue;
    					    				          }
    					                        }
                                         return 0;
}

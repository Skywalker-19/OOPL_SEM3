//============================================================================
// Name        : StackQue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void showstack(stack <int> s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}

void showqueue(queue <int> g)
{
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main ()
{
    stack <int> s;
    queue<int> s1;
   int ch,c=0;

   for( ; ; )
   {
    cout<<"Choose the structure you want."<<endl;
    cout<<"1.Stacks"<<endl;
    cout<<"2.Queues"<<endl;
    cin>>c;
    switch(c)
    {
    				case 1:
    					for(;;)
    					{
    					   cout<<"**********Stack Operations********"<<endl;
    				       cout<<"Enter 1 to enter number in stack"<<endl;
    				       cout<<"Enter 2 to remove number in stack"<<endl;
    				       cout<<"Enter 3 to find size of stack"<<endl;
    				       cout<<"Enter 4 to find top of stack"<<endl;
    				       cout<<"Enter 5 to display the stack"<<endl;
    				       cin>>ch;
    				       switch(ch)
    				       {
    				    				   case 1:
    				    					       int n;
    				    					       cout<<"Enter the number to be put in the stack"<<endl;
    				    				           cin>>n;
    				    				           s.push(n);
    				    				           break;
    				    				   case 2:
    				    					        s.pop();
    				    					        break;
    				    				   case 3:
    				    					        cout << "\nSize is : " << s.size()<<endl;;
    				    					        break;
    				    				   case 4:
    				    					   cout << "\nTop is : " << s.top()<<endl;;
    				    					   break;
    				    				   case 5:
    				    					   cout << "The stack is : ";
    				    					   showstack(s);
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
    					break;

    return 0;
    break;
    				case 2:

    					                    for(;;)
    					    					{
    					    					   cout<<"**********Queue Operations********"<<endl;
    					    				       cout<<"Enter 1 to enter number in queue"<<endl;
    					    				       cout<<"Enter 2 to remove number in queue"<<endl;
    					    				       cout<<"Enter 3 to find size of queue"<<endl;
    					    				       cout<<"Enter 4 to find front of queue"<<endl;
    					    				       cout<<"Enter 5 to find back of queue"<<endl;
    					    				       cout<<"Enter 6 to display the queue"<<endl;
    					    				       cin>>ch;
    					    				       switch(ch)
    					    				       {
    					    				    				   case 1:
    					    				    					       int n;
    					    				    					       cout<<"Enter the number to be put in the queue"<<endl;
    					    				    				           cin>>n;
    					    				    				           s1.push(n);
    					    				    				           break;
    					    				    				   case 2:
    					    				    					        s1.pop();
    					    				    					        break;
    					    				    				   case 3:
    					    				    					        cout << "\nSize is : " << s1.size()<<endl;;
    					    				    					        break;
    					    				    				   case 4:
    					    				    					   cout << "\nFront is : " << s1.front()<<endl;;
    					    				    					   break;
    					    				    				   case 5:
    					    				    					   cout<<"\nBack is : "<< s1.back()<<endl;
    					    				    					   break;
    					    				    				   case 6:
    					    				    					   cout << "The queue is : ";
    					    				    					   showqueue(s1);
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
    					    					break;


    					    return 0;
    					    break;
    				default:
    					cout<<"Please enter from the given menu!"<<endl;
    		}
    cout<<"Do you want to choose any other structure?(Enter 1 for yes/0 for no)"<<endl;
        				          cin>> ch;
        				          if(ch==0)
        				          {break;}
        				          else
        				          {
        				          	continue;
        				          }

}
}



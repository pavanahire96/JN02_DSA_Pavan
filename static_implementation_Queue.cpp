/******************************************************************************

Program to Demonstrate Static Implementatuion of Stack

*******************************************************************************/

#include <iostream>
#define size 10

using namespace std;

class queue
{
    int data[size];
    int rear,front;
    
    public:
    queue()
    {
        front=rear=-1;
    }
    void insert(int element)
    {
        if(isFull()==1)
            cout<< "\n queue is Full";
        else
            data[++rear]=element;
            if(front==-1)
               front=0;
    }


    int remove()
    {
        if(isEmpty()==1)
            return -1;
        else 
            return data[front++];
    }
    int isEmpty()
    {
        if(rear==front==-1 || front>rear)
           return 1;
     
    }
    int isFull()
    {
      if(rear==size-1)
           return 1;
      else
           return 0;
    }
    int peek()
    {
        if(isEmpty()==1)
            return -1;
        else 
          return data[front];
    }
};


int main()
{
    cout<<"\nStatic Implementation Of QUEUE";
    queue q;
    q.insert(10);
    q.insert(20);
    q.insert(20);
    cout<<"\n Queue is empty?"<<q.isEmpty();
    
    cout<<"\n Queue Is full? "<<q.isFull();
    cout<<"\n Element is top position"<<q.peek();
    cout<<"\n Element Removed From queue"<<q.remove();
    cout<<"\n Element Removed From Queue"<<q.remove();
    
    return 0;
}

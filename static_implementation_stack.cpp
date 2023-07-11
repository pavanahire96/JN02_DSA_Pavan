/******************************************************************************

Program to Demonstrate Static Implementatuion of Stack

*******************************************************************************/

#include <iostream>
#define size 10

using namespace std;

class stack 
{
    int data[size];
    int top;
    
    public:
    stack()
    {
        top=-1;
    }
    void push(int element)
    {
        if(isFull()==1)
            cout<< "\n Stack is Full";
        else
            data[++top]=element;
    }
    int pop()
    {
        if(isEmpty()==1)
            return -1;
        else 
            return data[top--];
    }
    int isEmpty()
    {
        if(top=-1)
           return 1;
        else
           return 0;
    }
    int isFull()
    {
      if(top==size-1)
           return 1;
      else
           return 0;
    }
    int peek()
    {
        if(isEmpty()==1)
            return -1;
        else 
          return data[top];
    }
};


int main()
{
    cout<<"\nStatic Implementation Of Stack";
    stack st;
    st.push(10);
    st.push(20);
    cout<<"\n Stack is empty?"<<st.isEmpty();
    
    cout<<"\n Stack Is full? "<<st.isFull();
    cout<<"\n Element is top position"<<st.peek();
    cout<<"\n Element Removed From stack"<<st.pop();
    cout<<"\n Element Removed From stack"<<st.pop();
    
    return 0;
}

//Implementation of character stack

#include <iostream>
using namespace std;

#define SIZE 10


class stack { 
  char stackData[SIZE];        
  int topOfStack;             
public:
  stack() { topOfStack = 0; }
  void push(char ch)
  {
    if(topOfStack==SIZE) {
      cout << "Stack is full\n";
      return;
    }
    stackData[topOfStack] = ch;
    topOfStack++;
  }

  char pop()
  {
    if(topOfStack==0) {
      cout << "Stack is empty\n";
      return 0;                // return null on empty stack 
    }
    topOfStack--;
    return stackData[topOfStack];
  }
};

int main()
{
  stack stackObject1, stackObject2; 
  int i;

  stackObject1.push('a');
  stackObject2.push('x');
  stackObject1.push('b');
  stackObject2.push('y');
  stackObject1.push('c');
  stackObject2.push('z');

  for(i = 0; i <3; i++) 
     cout << "Pop stackObject1: " << stackObject1.pop() << endl;
  for(i = 0; i <3; i++) 
     cout << "Pop stackObject2: " << stackObject2.pop() << endl;

  return 0;
}


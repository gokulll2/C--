#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    //properties
    int *arr;
    int top;
    int size;
    //Behaviour
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void Push(int x)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=x;
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"Stack Overflow";
        }   
    }
    int peak()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;        
        }
        else{
            return false;        }
    }
}
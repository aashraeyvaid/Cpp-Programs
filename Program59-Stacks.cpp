#include<iostream>
using namespace std;
#define n 100
class Stack
{
    private:
    int top;
    int *arr;
    public:
    Stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow!!"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top]=x;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow!!"<<endl;
            return;
        }
        else
        {
            top--;
        }
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No element in stack!!"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top==-1;
    }
};
int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout<<stack.Top()<<endl;
    stack.pop();
    cout<<stack.Top()<<endl;
    stack.pop();
    stack.pop();
    stack.pop();
    cout<<stack.isEmpty()<<endl;
}
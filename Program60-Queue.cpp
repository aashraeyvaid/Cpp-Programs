#include<iostream>
using namespace std;
#define n 100
class Queue
{
    private:
    int front=-1;
    int back=0;
    int *arr=new int[n];
    public:
    void enqueue(int x)
    {
        if(back==n)
        {
            cout<<"Queue overflow!!"<<endl;
            return;
        }
        arr[back]=x;
        back++;
    }
    void dequeue()
    {
        if(front==back-1)
        {
            cout<<"Queue underflow!!"<<endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if(front==back-1)
        {
            cout<<"Queue is empty!!"<<endl;
            return -1;
        }
        return arr[front+1];
    }
    bool isEmpty()
    {
        return (front==back-1);
    }
};
int main()
{
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    cout<<queue.peek()<<endl;
    queue.dequeue();
    cout<<queue.peek()<<endl;
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    cout<<queue.isEmpty()<<endl;
    queue.peek();
}
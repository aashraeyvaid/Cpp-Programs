#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex operator+(complex c2)
    {
        complex temp;
        temp.real=real+c2.real;
        temp.img=img+c2.img;
        return temp;
    }
    void show()
    {
        cout<<real<<" + i"<<img;
    }
};
int main()
{
    complex c1(2,3);
    complex c2(4,5);
    complex c3=c1+c2;
    c3.show();
}
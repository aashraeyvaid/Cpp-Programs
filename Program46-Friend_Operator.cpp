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
    friend complex operator+(complex c1,complex c2);
    void show()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};
complex operator+(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    complex c1(2,3),c2(4,5),c3;
    c3=c1+c2;
    c3.show();
}
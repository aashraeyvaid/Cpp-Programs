#include<iostream>
using namespace std;
template <class T>
class arithmatic
{
    private:
    T a;
    T b;
    public:
    arithmatic(T a,T b);
    T add();
    T sub();
};
template <class T>
arithmatic<T>::arithmatic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template <class T>
T arithmatic<T>::add()
{
    T c;
    c=a+b;
    return c;
}
template <class T>
T arithmatic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}
int main()
{
    arithmatic<int> ar1(2,5);
    cout<<ar1.add()<<endl;
    arithmatic<float> ar2(2.4,6.7);
    cout<<ar2.sub()<<endl;
}
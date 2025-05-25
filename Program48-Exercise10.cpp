#include<iostream>
using namespace std;
int lcm(int x,int y)
{
    int a[62]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293};
    int lcm=1;
    for(int i=0;i<62;i++)
    {
        while(x%a[i]==0 || y%a[i]==0)
        {
            if(x%a[i]==0)
            {
                x=x/a[i];
            }
            if(y%a[i]==0)
            {
                y=y/a[i];
            }
            lcm*=a[i];
        }
    }
    return lcm;
}
class rational
{
    private:
    int p;
    int q;
    public:
    rational(int x=0,int y=1)
    {
        p=x;
        if(y==0)
        cout<<"Denominator cannot be zero!"<<endl;
        else
        q=y;
    }
    friend rational operator+(rational r1,rational r2);
    friend ostream& operator<<(ostream &o,rational &r);
};
rational operator+(rational r1,rational r2)
{
    rational temp;
    temp.q=lcm(r1.q,r2.q);
    temp.p=(r1.p*(temp.q/r1.q))+(r2.p*(temp.q/r2.q));
    return temp;
}
ostream& operator<<(ostream &o,rational &r)
{
    o<<r.p<<"/"<<r.q;
    return o;
}
int main()
{
    rational r1(2,3),r2(3,5),r3;
    r3=r1+r2;
    cout<<r3;
}
#include<iostream>
using namespace std;
class room
{
    public:
    int length;
    int breadth;
    int height;
    void calculateArea()
    {
        cout<<length*breadth<<endl;
    }
    void calculateVolume()
    {
        cout<<length*breadth*height<<endl;
    }
};
int main()
{
    room r1;
    r1.length=20;
    r1.breadth=15;
    r1.height=25;
    r1.calculateArea();
    r1.calculateVolume();
    return 0;
}
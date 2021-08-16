#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
       int length;
       int breadth;
    public:
       Rectangle(int l, int b)
       {
           length = l;
           breadth = b;
       }
       int area()
       {
           return length * breadth;
       }
       int perimeter()
       {
           return 2*(length + breadth);
       }
       void setlength(int l)
       {
           length = l;
       }
       void setbreadth(int b)
       {
           breadth = b;
       }
       int getlength()
       {
           return length;
       }
       int getbreadth()
       {
           return breadth;
       }
       ~Rectangle()
       {
           cout << "Destructor" << endl;
       }
};
int main()
{
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    r.setlength(20);
    r.setbreadth(10);
    r.getlength();
    r.getbreadth();
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
}
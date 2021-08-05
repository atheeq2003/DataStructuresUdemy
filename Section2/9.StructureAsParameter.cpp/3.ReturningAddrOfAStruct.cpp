#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;
    p -> length = 15;
    p -> breadth = 7;
    return p;

}
int main() 
{
    struct Rectangle *ptr = fun();
    cout << ptr -> length << endl << ptr -> breadth << endl;
}
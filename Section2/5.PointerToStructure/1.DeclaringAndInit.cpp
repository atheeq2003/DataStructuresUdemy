#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r = {15,10};
    cout << r.length << endl;
    cout << r.breadth << endl;
    struct Rectangle *p = &r;
    cout << p -> length << endl;
    cout << p -> breadth << endl;
}
#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int area(Rectangle r){
    return r.length * r.breadth;
}
int perimeter(Rectangle r){
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}
int main()
{
    Rectangle r = {0,0};
    cin >> r.length >> r.breadth;
    int a, peri;
    a = area(r);
    peri = perimeter(r);
    cout << a << endl << peri << endl;
}
#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
void intialize(struct Rectangle *r, int l, int b){
    r -> length = l;
    r -> breadth = b;
}
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
    int l,b;
    cin >> l >> b;
    intialize(&r, l, b);
    int a, peri;
    a = area(r);
    peri = perimeter(r);
    cout << a << endl << peri << endl;
}
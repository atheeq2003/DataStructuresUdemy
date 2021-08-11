#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;

void intialize(int l, int b){
    length = l;
    breadth = b;
}
int area(){
    return length * breadth;
}
int perimeter(){
    int p;
    p = 2 * (length + breadth);
    return p;
}
};
int main()
{
    Rectangle r;
    int l,b;
    cin >> l >> b;
    r.intialize(l, b);
    int a, peri;
    a = r.area();
    peri = r.perimeter();
    cout << a << endl << peri << endl;
}
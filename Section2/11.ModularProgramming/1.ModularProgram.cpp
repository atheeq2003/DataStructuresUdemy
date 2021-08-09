#include<bits/stdc++.h>
using namespace std;
int area(int length, int breadth){
    return length * breadth;
}
int perimeter(int length, int breadth){
    int p;
    p = 2 * (length + breadth);
    return p;
}
int main()
{
    int length = 0, breadth = 0;
    cin >> length >> breadth;
    int a, peri;
    a = area(length, breadth);
    peri = perimeter(length, breadth);
    cout << a << endl << peri << endl;
}
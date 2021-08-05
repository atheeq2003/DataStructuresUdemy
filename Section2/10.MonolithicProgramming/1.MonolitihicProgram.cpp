#include<bits/stdc++.h>
using namespace std;
int main()
{
    int length = 0, breadth = 0;
    cin >> length >> breadth;
    int area, peri;
    area = length * breadth;
    peri = 2*(length + breadth);
    cout << area << endl << peri << endl;
}
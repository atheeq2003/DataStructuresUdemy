#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1={10,15};
    r1.length = 12;
    r1.breadth = 10;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
}
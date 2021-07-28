#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int &p = a;
    int b = 30;      // p is not referenced to b it is still referenced to a
    p = b;           // But b value is assigned to a. The value of a is changed
    cout << a << endl << p << endl;
}                     
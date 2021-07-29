#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int &r = a;
    int b = 30;      // p is not referenced to b it is still referenced to a
    r = b;           // But b value is assigned to a. The value of a is changed
    cout << a << endl << r << endl;
}                     
#include<bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 5, b = 10, c;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
}
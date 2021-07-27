#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={2,4,6,8,10};
    int *p1;
    p1 = &a[3];
    cout << *p1 << endl;
    int *p2;
    p2 = a;
    for(int i = 0; i < 5; i++){
        cout << p2[i];
    }


}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    p[0] = 2; p[1] = 4; p[2] = 6; p[3] = 8; p[4] = 10;
    for(int i = 0; i < 4; i++){
        cout << p[i];
        delete [] p;
    }
}
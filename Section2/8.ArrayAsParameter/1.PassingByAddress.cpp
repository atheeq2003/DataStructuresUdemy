#include<bits/stdc++.h>
using namespace std;
void fun(int A[],int n){
    for(int i=0; i < n; i++){
        cout << A[i] << endl;
    }
    A[0] = 20;
}
int main()
{
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A, n);
    for(int x:A){
        cout << x << " ";
    }
}
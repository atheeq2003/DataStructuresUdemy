//Definition, Declaration and size of a Structure 
#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1={5,4};
    printf("%ld\n",sizeof(r1));
    cout << sizeof(r1) << endl;
}


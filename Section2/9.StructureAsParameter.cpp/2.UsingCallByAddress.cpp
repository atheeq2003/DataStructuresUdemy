#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
void fun(struct Rectangle *prect){
    prect->length = 15;
    cout << prect->length << endl << prect->breadth << endl;
}
int main()
{
    struct Rectangle r = {10, 5};
    fun(&r);
    cout << r.length << endl << r.breadth << endl;

}
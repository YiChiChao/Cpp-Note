#include<iostream>
using namespace std;
int main(){
    int a = 7;
    int *b = &a;
    int &c = a;
    cout << "a = " << a << endl;
    cout << "b = " << *b << endl;
    cout << "c = " << c << endl;
    *b = 8;
    cout << "After changing b,\n";
    cout << "a = " << a << endl;
    cout << "b = " << *b << endl;
    cout << "c = " << c << endl;
    c = 17;
    cout << "After changing c,\n";
    cout << "a = " << a << endl;
    cout << "b = " << *b << endl;
    cout << "c = " << c << endl;

}
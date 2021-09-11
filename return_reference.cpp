#include<iostream>
using namespace std;
int &max(int &i, int & j){
    return (i > j) ? i : j;
} 
int main(){
    int x = 5;
    int y = 9;
    max(x, y) = 1;
    cout << x << ", " << y << endl;
}


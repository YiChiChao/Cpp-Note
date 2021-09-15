#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<bool> vec {false, false};
    for(auto x : vec) {
        x = true; // all elements be true.
        cout << &x << endl;
    }
}
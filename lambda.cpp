#include<iostream>
#include<iomanip>//setw()
#include<algorithm>//for_each()
#include<vector>//push_back()
using namespace std;

int main(){
    vector<int> v;
    for (int i = 1; i < 10;++i)
        v.push_back(i * 5);
    for(auto i:v)
        cout << setw(5) << i;
    cout << endl;

    for_each(v.begin(), v.end(),[](int n){
        if (n % 2 == 0){
            cout << n << " is even " << endl;
        }
    });

    for(const auto y : v)cout << setw(5) << setfill('#') << y;
    cout << endl;
    for(auto & y : v) y = y + 1;
    for(const auto & y : v)cout << setw(5) << setfill('#') << y;
    cout << endl;
}
//question: what is the difference between auto y and const auto & y?
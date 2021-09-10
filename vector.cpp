#include<iostream>
#include<vector>
using namespace std;
void swap_by_reference(int & i, int & j){//when the function add &, the function can be as the pointer type
    int tmp = i;
    i = j;
    j = tmp;
}

void swap_by_pointer(int *i, int*j){
    int tmp = *i;
    *i = *j;
    *j = tmp;
} 




int main(){
    vector<int> v {1, 2, 3, 4, 5};//v = {} is optional
    //to take out the int from the vector v
    //same as int i; i < len; ++i in C
    //auto means it can detemine the type 
    for(auto i : v){
        cout << i << ",";
    }
    cout << "\n";
    auto x = 5;
    auto y = 7;
    swap_by_pointer(&x, &y);
    cout << x << ", " << y << endl;
    swap_by_reference(x, y);
    cout << x << ", " << y << endl;
}
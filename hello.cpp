#include <iostream>
#include <string>
using namespace std;//to omit the std :: cout in the typing
int main(){
    string name, str;//same as char name[50] in C
    cout << "Enter you name:";
    cin >> name;
    str = "Hello, " + name + "!\n";//use string like int in C
    cout << str;
    cout << "Hello World!!\n" << "Your name has " << name.size() << " characters." << endl;
    //endl has the same function as "\n"
    //'<<' can successively send the output to cout
}
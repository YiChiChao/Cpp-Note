# C++和C的差異



---
### NameSpace(命名空間)
是一個識別碼的可見範圍。

>(維基舉例)就像一間公司中，某個員工Kitty的識別碼是217，而在另一間公司中也有一個人(可能是Teresa)的識別碼是217。但是因為他們是不同公司，即使識別碼相同，所代表的意思也不同，並不會導致薪水發錯或是叫錯人的問題。

如以下的code，這裡的`cout`和`cin`的namespace是屬於`standard library`，為了不要造成命名重複的誤會，所以原本的打法應該是
```cpp=
#include <iostream>
int main(){
    int a;
    std::cin >> a;//standard library中的cin
    std::cout << "Hello World!!\n";//standard library中的cout
}
```
而省略的寫法，就是在一開始就在一開始就指定namespace，之後用到此命名空間的東西，就不用再寫出來
```cpp=
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    cout << "Hello World!!\n";
}
```
---
### String
>在使用之前，要記得`#include<string>`

和C不同的是，在C++中可以直接用`+`來連接字串
```cpp=
#include <iostream>
#include <string>
using namespace std;
int main(){
    string name = "Teresa", str;
    str = "Hello, " + name + "!\n";//use string like int in C
    cout << str;
}
```
```cpp=
//OUTPUT
Hello, Teresa!
```
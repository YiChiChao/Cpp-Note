#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int gcd(int a, int b){
    if(a >= b){
        if(b == 0) return a;
        else gcd(b, a%b);
    }
    else{
        if (a == 0)return b;
        else gcd(a, b%a);
    }
}

class complex{
    double re, im;//stored in private in default
public:

    complex(){
        re = 0;
        im = 0;
    }
    double real() const{
        return re;
    }
    void real(double d){//the function name can be the same as long as the input parameters are different
        re = d;
    }
    double imag() const{
        return im;
    }


};

class rational{
    int num; //numerator
    int den; //denominator
    double decimal;

public:
    rational(int n, int d):num{n}, den{d}, decimal{(double)n/(double)d} { }


    double decim() const{
        return decimal;
    }
    
    int numer(){
        return num;
    }

    int denom(){
        return den;
    }

    rational& operator+=(rational y){
        num = num * y.denom() + y.numer() * den;
        den *= y.denom();
        decimal = (double)num / (double)den;
        int g = gcd(num, den);
        if(g != 1){
            num /= g;
            den /= g;
        }
        return *this;
    }
};

int main(){
    rational x{2,5}, y{1,3};
    x += y;
    cout <<"The rational number is " << x.numer() << " / " << x.denom() << endl;
    cout <<"The decimal number is " << x.decim() << endl;


}

/*OUTPUT
The rational number is 11 / 15
The decimal number is 0.733333
*/
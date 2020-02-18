#include <iostream>

using namespace std;

int main()
{
    int a=5, b=10, c=15;
    //宣告整數型態的變數a、b、c，並且分別設定變數的初始值
    a+=8;
    cout << a << endl;
    a-=b;
    cout << a << endl; 
    c*=(b+2);
    cout << c <<endl;
    c%=7;
    cout << c <<endl;

    return 0;
}

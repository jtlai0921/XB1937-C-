#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int *ptr;

    ptr = &num1;//ptr指向num1的位址  
    cout<<"num1="<<num1<<" *ptr="<<*ptr<<" ptr="<<ptr<<" &num1="<<&num1<<endl;
    ptr = &num2;//ptr指向num2的位址 
    cout<<"num2="<<num2<<" *ptr="<<*ptr<<" ptr="<<ptr<<" &num2="<<&num2<<endl;

    return 0;
}

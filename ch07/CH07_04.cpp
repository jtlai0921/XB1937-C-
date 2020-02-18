#include <iostream>

using namespace std;

int main()
{
    int input;
    int *ptr;
 
    ptr = &input;  //初始指標變數 
    cout<<"請輸入一個整數：";
    cin>>input;
    *ptr = *ptr * *ptr * *ptr;  //進行立方運算，並將結果存回 
    cout<<"*ptr="<<*ptr<<" input="<<input<<endl;
 
    return 0;
}

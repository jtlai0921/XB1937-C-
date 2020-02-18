#include <iostream>

using namespace std;

int* get_pointer_value();  //示範如何傳回指標值 
 
int main()
{
    int *ptr;
    ptr = get_pointer_value();
    cout<<"ptr="<<ptr<<endl;
     
    return 0;
}
 
//讓使用者輸入整數 
// 傳回指標值       
int* get_pointer_value()
{
    int *x;
    int input;
    x = &input;
    cout<<"請輸入一個整數：" ;
    cin>>input;
    cout<<"x="<<x<<endl;
    return x;
}

#include <iostream>  

using namespace std;

void Increase_ByVal(int);  
void Increase_ByRef(int&);  

int main()  
{  
    int index =2;  
    cout << "遞增前主程式裡的 index 值：" << index << endl;  
    Increase_ByVal(index); 
    cout << "傳值呼叫－遞增後主程式裡的 index 值：" << index << endl; 
    Increase_ByRef(index);  
    cout << "傳參考呼叫－遞增後主程式裡的 index 值：" << index << endl; 
  
    return 0; 
}  
void Increase_ByVal(int index) 
{  
    index++;   
}  
void Increase_ByRef(int& index)  
{  
    index++;  
}

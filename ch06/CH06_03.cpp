#include <iostream>

using namespace std;
		
int main()
{
    float f_abs(float);//函數f_abs()的原型宣告 
    float cubic_abs(float o1);//函數cubic_abs()的原型宣告 
    float f1;
   
    cout<<"請輸入一實數:";		//輸入整數 
    cin>>f1;
    cout<<"f_abs("<<f1<<")="<<f_abs(f1)<<endl;//印出絕對值 
    cout<<"cubic_abs("<<f1<<")="<<cubic_abs(f1)<<endl; 
   
    return 0;
}
 
float cubic_abs(float o1)
{  
    float f_abs(float);
    return f_abs(o1*o1*o1);
}

float f_abs(float o)	//自訂函數f_abs()傳回絕對值 
{
    if (o<0)
        return -1*o;
    else
        return o;
}

#include <iostream>

using namespace std;
	
inline int add(int a,int b) {return a+b;} 
		
int main() 
{
    int num1 = 0 ,num2=0;
    cout << "輸入數值 1：";
    cin >> num1;
    cout << "輸入數值 2：";
    cin >> num2;
    cout << "數值 1+數值 2 =" << add(num1,num2) << endl;
 
    return 0;
}

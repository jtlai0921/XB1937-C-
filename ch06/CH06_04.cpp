#include <iostream>  
  
 
using namespace std;
  
int gcd(int,int);  //肚㊣ㄧ计 
 
int main()  
{  
    int Num1,Num2,lcd_Num,gcd_Num;  
    cout << "叫块ㄢ计" << endl;  
    cout << "计 1"; 
    cin >> Num1; 
    cout << "计 2";  
    cin >> Num2;  
    gcd_Num=gcd(Num1,Num2);  
    lcd_Num=Num1 * Num2 / gcd_Num;  
    cout << Num1 << " の " << Num2 << " 程そ计" << gcd_Num << endl; 
    cout << Num1 << " の " << Num2 << " 程そ计" << lcd_Num << endl;  
   
    return 0;
}  
int gcd(int Num1, int Num2)  
{ 
    int Temp;  
    while (Num2 != 0) 
    {  
        Temp=Num1 % Num2; 
        Num1 = Num2;  
        Num2 = Temp;  //劣锣埃猭 
    }  
    return (Num1);  
}

#include <iostream>


using namespace std;
 
int main()
{
    //宣告變數
    int a = 12;  
    int b = 38;  //測試位元運算子
    
    cout << "NOT運算：~a = " << (~a) <<endl;
    cout << "AND運算：a & b = " << (a & b) <<endl;
    cout << "OR運算：a | b = " << (a | b) <<endl;
    cout << "XOR運算：a ^ b = " << (a ^ b) <<endl;
    cout << "左移運算：a << 2 = " << (a << 2) <<endl;
    cout << "右移運算：a >> 2 = " << (a >> 2) <<endl;
    
    return 0;
} 

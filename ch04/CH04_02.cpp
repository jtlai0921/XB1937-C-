#include <iostream>


using namespace std;
 
int main()
{
    float Money;     // 定義整數變數 Money
    cout << "請輸入消費的金額:";
    cin >> Money;
    if (Money < 1200)   // if 條件敘述
    Money*=1.1;// 消費未滿 1200，加收服務費1成
    cout << "需繳付的實際金額是 " << Money << " 元";
    cout << endl;    // 換行
    
    return 0;
} 

#include <iostream>


using namespace std;

int main()
{
    //宣告變數
    int a, b, c;
    float d;      
    //輸入三個數
    cout << "請輸入三個數a, b, c:";
    cin >> a >> b >> c;
    d = (a*a+b*b)*c / (float)(a*b*c); //運算式 
    cout << "計算結果=" << d << '\n';
  
  
    return 0;
}

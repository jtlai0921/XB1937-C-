#include <iostream>

using namespace std;

#define MAX(a, b) (a>b?a:b)   // #define 指令定義巨集 MAX(a, b)

int main()
{
    int x, y;    // 定義整數變數 x, y
    cout << "輸入第一個數值:";
    cin >> x;                      // 取得變數 x 的值
    cout << "輸入第二個數值:";
    cin >> y;                      // 取得變數 y 的值
    cout << "兩數中的較大值是:" << MAX(x, y) << endl;    // MAX(x, y) 取出較大值
     
    return 0;
}

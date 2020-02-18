#include <iostream>

#define PI 3.14159       // 定義識別字 PI

using namespace std;

int main()
{
    float r;          // 定義 float 型態變數 r
    cout << "輸入圓面積半徑:";
    cin >> r;              // 讀取半徑的值
    cout << "圓面積=" << PI*r*r;  // 輸出結果
    cout << endl;

    return 0;
}

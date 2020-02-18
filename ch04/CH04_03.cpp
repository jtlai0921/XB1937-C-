#include <iostream>


using namespace std;

int main()
{
    int Score;  // 定義整數變數 Score，儲存學生成績
    cout << "輸入學生的分數:";
    cin >> Score;
    if ( Score >= 60 )      // if 條件敘述
        cout << "得到 " << Score << " 分，還不錯唷...";
    else
        cout << "不太理想喔...，只考了 " << Score << " 分";
    cout << endl;      // 換行
     
    return 0;
}

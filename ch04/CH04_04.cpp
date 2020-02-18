#include <iostream>


using namespace std;

int main()
{
    int Select;       // 定義整數變數 Select，儲存餐點項目
    cout << "目前提供的選擇如下"<<endl;  
    cout << " 0.查詢其他相關的點心資料"<<endl;
    cout << " 1.吉事漢堡" <<endl;
    cout << " 2.咖哩珍豬飽" <<endl;
    cout << " 3.六塊麥克雞"<<endl;
    cout<<"請點選您要的項目:"; 
    cin >> Select;      // 輸入餐點的項目
    cout <<endl;
    if ( Select == 0 )  // 選擇第0項?
        cout << "請稍等... 正在查詢其他相關的點心資料";
    else if ( Select == 1 )      // 是否選擇第1項?
        cout << "這個項目的單價:"<< 45;
    else if ( Select == 2 )	 // 是否選擇第2項?
        cout << "這個項目的單價:"<< 55;
    else if ( Select == 3 )	  // 是否選擇第3項?
        cout << "這個項目的單價:"<< 65;
    else                // 輸入錯誤的處理
        cout << "您可能輸入錯誤.... 請重新輸入";
    cout << endl;           // 換行*/
    
    return 0;
}

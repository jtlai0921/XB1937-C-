#include <iostream>

using namespace std;

class car 
{
    public: //基礎類別中的成員函式宣告為public 
    void go()   // car類別的成員函數go()
    {
        cout << endl<< "car : 出發"<< endl;
    }
    void stop() // car類別的成員函數stop()
    {
        cout << endl<< "car : 停止"<< endl << endl;
    }
};

class freighter: public car{}; // 衍生類別將其存取設定字元宣告為public

int main()
{
    freighter ft;
    ft.go(); // ft是freighter類別的一個物件,因為繼承關係,所以可以使用go()與stop()函數
    ft.stop();
 
    return 0;
}

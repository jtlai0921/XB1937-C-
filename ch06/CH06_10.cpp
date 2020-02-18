#include <iostream>  
 
 
using namespace std;
 
int Get_Area(int Width, int Height);   // 計算矩形面積  
int Get_Area(int Up, int Bottom, int Height);   // 計算梯形面積  
double Get_Area(int r);  // 計算圓面積  
 
int main()  
{  
    int Width, Height, Up, Bottom, r; // Width:長 Heidht:寬  
    // Up:上底 Bottom:下底  
    // r:圓半徑  
    cout << "請輸入矩形的長及寬(單位：公分)：";  
    cin >> Width >> Height;  
    cout << "矩形面積為： " << Get_Area(Width, Height)<< " 平方公分" << endl;  
    cout << endl;  
    cout << "請輸入梯形的上底、下底及高度(單位：公分)：";  
    cin >> Up >> Bottom >> Height;  
    cout << "梯形面積為：" << Get_Area(Up, Bottom, Height)<< " 平方公分" << endl;  
    cout << endl;  
    cout << "請輸入圓半徑(單位：公分)：";  
    cin >> r;  
    cout << "圓面積為：" << Get_Area(r)<< " 平方公分" << endl; 
  
    return 0;
}  
 
int Get_Area(int Width, int Height)  
{  return Width * Height;  }      // 傳回矩形面積   
int Get_Area(int Up, int Bottom, int Height) 
{  return (Up+Bottom) * Height / 2 ;  }  // 傳回梯形面積  
double Get_Area(int r)  
{  return r*r*3.14; }

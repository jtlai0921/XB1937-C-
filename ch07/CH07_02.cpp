#include <iostream>

using namespace std;

int main()
{
    int num1 = 100;
    int *address1;

    address1 = &num1;
    cout<<"num1的儲存值      ："<<num1<<endl;
    cout<<"num1的記憶體位址  ："<<&num1<<endl;//利用&運算子取出位址
    cout<<"address的儲存值   ："<<address1<<endl;
    cout<<"address記憶體位址 ："<<&address1<<endl;//輸出指標變數的位址  
    
    return 0;
}

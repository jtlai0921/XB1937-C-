//break絤策
#include <iostream>

using namespace std;

int main()
{
    //﹚竡俱计皚厩ネΘ罿 
    int Student_Score[10]={ 58, 61, 77, 89, 48, 67, 92, 44, 47, 56};
     
    for (int count=0; count < 10; count++) // for 癹伴
    {
        if(Student_Score[count] >= 60) // 耞Θ罿琌の
            continue; // continue 
        cout << count+1 << "腹厩ネだ计ぃの!" << "だ计:" << Student_Score[count];
        cout << endl;                   // 传︽
    }
 
    return 0;
}

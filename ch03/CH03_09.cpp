#include <iostream>

using namespace std;

int main()
{
    int num,hundred,fifty,ten;
    cout<<"�п�J�N�I�����B:"; 
    cin>>num;
    hundred=num/100;
    fifty=(num-hundred*100)/50;
    ten=(num-hundred*100-fifty*50)/10;
    cout<<"�ʤ��r��"<<hundred<<"�i ���Q���r��"<<fifty<<"�i �Q���r��"<<ten<<"�i"<<endl; 
      
    return 0; 
}

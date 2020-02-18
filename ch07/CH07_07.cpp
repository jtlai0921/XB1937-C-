#include <iostream>

using namespace std;

int main()
{     
    int num=100,*ptr1,**ptr2;
    ptr1=&num;// ptr1指向num的位址 
    ptr2=&ptr1;// ptr2指向ptr1的位址 

    cout<<"num="<<num<<" &num="<<&num<<" ptr1="<<ptr1<<" *ptr1="<<*ptr1<<endl;
    cout<<"&ptr1="<<&ptr1<<" ptr2="<<ptr2<<" *ptr2="<<*ptr2<<" **ptr2="<<**ptr2<<endl;
         
    return 0;
}

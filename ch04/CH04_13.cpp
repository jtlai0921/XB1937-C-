#include <iostream>
using namespace std;

bool is_prime(int n)
{
    for (int i = 2; i < n; ++i) 
	{
        if (n % i == 0) 
		{ //�p�G�㰣,i�On���]��,�^�� false
            return false;
        }
    }
    return true;
}
int main()
{
	int n;
	cout<<"�п�J�@�Ӥj�󵥩�2���Ʀr: "; 
	cin>>n;
	cout<<endl;
	if(n==2)
	{ 
	    cout<<n<<"�O���";
	    return 0;
	} 
	if(is_prime(n))
	    cout<<n<<"�O���";
	else
	    cout<<n<<"���O���";

    return 0;	
}

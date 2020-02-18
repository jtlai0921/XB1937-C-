#include <iostream> 
 
using namespace std;

int main() 
{  
    int i=0;
    char str1[20] = "我喜歡 C 語言!";
    char *str2 = "我也熱愛 Java!";

    while(*(str1+i) != '\0')
	{
		cout << *(str1+i);
		i++;
	}
	cout << endl;
    while(*str2 != '\0')	
    {
		cout << *str2;
		str2++;
	}
   
    cout<<endl;
    
    return 0;
}

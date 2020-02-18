#include <iostream>

#include <cstring>
using namespace std;

class Baseball
{
    private:
        char player[20];  //ゴ阑﹎   
        int fires;        //ゴ阑Ω计
        int safes;        //ゴ计
    public:
        void showplayer();
        //篶ㄧ计 
        Baseball();          
};
	
//ノ篶ㄧ计﹚戈Θ﹍
Baseball::Baseball()
{
    strcpy(player,"朝风");
    fires=68;
    safes=20;
};
void Baseball::showplayer(void)          
{
    cout<<"================================"<<endl;
    cout<<"ゴ阑"<<player<<endl;
    cout<<"ゴ阑Ω计"<<fires<<endl;
    cout<<"ゴΩ计"<<safes<<endl;
}

int main()
{
    Baseball b;    //篶笆﹚﹍
    b.showplayer();
	  
    return 0;
}

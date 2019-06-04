#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,y;
    for(int x=1;x<=5;x++){
        y=1;
        while(y<=5){
            if(y==x)
                break;
            else
                cout<<setw(4)<<x*y;
                y++;
        }
    cout<<endl;
    }
    return 0;
}

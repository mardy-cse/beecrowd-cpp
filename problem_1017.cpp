#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int hour, speed;
    cin>>hour>>speed;
    cout<<fixed<<setprecision(3);
    cout<<(hour*speed)/12.0<<endl;
return 0;
}

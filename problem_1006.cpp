#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double a,b,c,temp,result;
cin>>a>>b>>c;
temp = (a*2)+(b*3)+(c*5);
result = temp/10;
cout<< fixed<<setprecision(1);
cout<<"MEDIA = "<<result<<endl;
return 0;
}

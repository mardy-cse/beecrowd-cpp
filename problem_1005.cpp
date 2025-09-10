#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double a,b,temp,result;
cin>>a>>b;
temp = (a*3.5)+(b*7.5);
result = temp/(3.5+7.5);
cout<< fixed << setprecision(5);
cout<<"MEDIA = "<<result<<endl;

return 0;
}

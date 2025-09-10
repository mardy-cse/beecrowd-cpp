#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double r,pi = 3.14159;
cout<<fixed<<setprecision(3);
cin>>r;
double formula = (4.0/3.0)*pi*(r*r*r);
cout<<"VOLUME = "<<formula<<endl;
return 0;
}

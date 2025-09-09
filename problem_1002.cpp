#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double pi =  3.14159;
double input;
cin>>input;
double result = pi*(input*input);
cout<<fixed<<setprecision(4);
cout<<"A="<<result<<endl;
return 0;
}

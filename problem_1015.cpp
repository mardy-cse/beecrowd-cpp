#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x1,x2,y1,y2;
    cout<<fixed<<setprecision(4);
    cin>>x1>>y1>>x2>>y2;

    double temp1 = (x2-x1)*(x2-x1);
    double temp2 = (y2-y1)*(y2-y1);


    cout<<sqrt(temp1+temp2)<<endl;
    return 0;
}

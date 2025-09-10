#include <iostream>
#include <iomanip>
using namespace std;
int main(){
cout<<fixed<<setprecision(3);
double a,b,c, a_ans, b_ans, c_ans,d_ans,e_ans;
cin>>a>>b>>c;
a_ans = 0.5*a*c;
b_ans = 3.14159*(c*c);
c_ans = (a+b)/2*c;
d_ans = b*b;
e_ans = a*b;
cout<<"TRIANGULO: "<<a_ans<<endl;
cout<<"CIRCULO: "<<b_ans<<endl;
cout<<"TRAPEZIO: "<<c_ans<<endl;
cout<<"QUADRADO: "<<d_ans<<endl;
cout<<"RETANGULO: "<<e_ans<<endl;
return 0;
}


/*
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.
*/

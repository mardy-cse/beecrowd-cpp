#include <iostream>
#include <iomanip>
using namespace std;
int main(){
cout<<fixed<<setprecision(2);
int code_of_first_product, unit_of_first_product, code_of_second_product, unit_of_second_product;
double price_of_first_product,price_of_second_product,result;

cin>>code_of_first_product>>unit_of_first_product>>price_of_first_product;
cin>>code_of_second_product>>unit_of_second_product>>price_of_second_product;

result = (unit_of_first_product*price_of_first_product)+(unit_of_second_product*price_of_second_product);
cout<<"VALOR A PAGAR: R$ "<<result<<endl;

return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int emp_number, work_hour;
    double hourly_salary, salary;

    cin>> emp_number >> work_hour >>hourly_salary;
    cout<<"NUMBER = "<<emp_number<<endl;
    salary = work_hour*hourly_salary;
    cout <<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<salary<<endl;
    return 0;
}

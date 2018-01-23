#include<iostream>
#include<stdexcept>
#include<iomanip>
#include "employee3.h"
using namespace std;
BasePlusComissionEmployee::BasePlusComissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate, double salary)
:ComissionEmployee(first,last,ssn,sales,rate)
    {
        setBaseSalary(salary);
    }
void BasePlusComissionEmployee::setBaseSalary(double salary){
    if(salary>=0.0){
        baseSalary=salary;
    }
    else{
        throw invalid_argument("Salary must be >=0.0");
    }
}

double BasePlusComissionEmployee::getBaseSalary()const{
    return baseSalary;
}
double BasePlusComissionEmployee::earnings()const{
    return baseSalary + (comissionRate * grossSales);
}

void BasePlusComissionEmployee::print()const{
    cout<<"base-salaried ";
    ComissionEmployee::print();
    cout<<"\nbase salary: "<<getBaseSalary();
}

int main(){
    BasePlusComissionEmployee employee("Bob","Lewis","333-33-333",5000,.04,300);
    cout<<fixed<<setprecision(2);
    cout<<"Employee information obtained by get functions: \n";
    cout<<"\nFirst Name is: "<<employee.getFirstName();
    cout<<"\nLast Names is: "<<employee.getLastName();
    cout<<"\nSocial security number is: "<<employee.getSocialSecurityNumber();
    cout<<"\nGross sales is: "<<employee.getGrossSales();
    cout<<"\nComission rate is: "<<employee.getComissionRate()<<endl;
    cout<<"\nBase Salary is: "<<employee.getBaseSalary()<<endl;
    employee.setBaseSalary(1000);
    cout<<"\nUpdate employee information output by print function: \n"<< endl;
    employee.print();
    cout<<"\n\nEmployee's earnings: $"<<employee.earnings()<<endl;
}

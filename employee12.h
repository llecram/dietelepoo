#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>
using namespace std;
class ComissionEmployee{
public:
    ComissionEmployee(const string&,const string&,const string&, double=0.0,double=0.0);
    void setFirstName(const string &);
    string getFirstName()const;
    void setLastName(const string &);
    string getLastName()const;
    void setSecoialSecurityNumber(const string &);
    string getSocialSecurityNumber()const;
    void setGrossSales(double);
    double getGrossSales()const;
    void setComissionRate(double);
    double getComissionRate()const;
    double earnings()const;
    void print()const;
protected:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double comissionRate;
};
#endif // EMPLOYEE_H_INCLUDED

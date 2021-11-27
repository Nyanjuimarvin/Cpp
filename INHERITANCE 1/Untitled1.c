#ifndef COMMISSION_H//
#define COMMISSION_H//




class CommisionEmployee
{
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossEarnings;
    double commissionRate;

public:
    CommisionEmployee(const std::string &,const std::string &,const std::string &,double=0.0,double=0.0);//

    void setFirstName(const std::string &);
    std::string getFirstName()const;

    void setLastName(const std::string &);
    std::string getLastName()const;

    void setSocialSecurityNumber(const std::string &);
    std::string getsocialSecurityNumber()const;

    void setGrossEarnings(double);
    getGrossSales()const;

    void setCommissionRate(double);
    getCommissionRate()const;

    double earnings()const;//
    void print()const;//
};

#endif//

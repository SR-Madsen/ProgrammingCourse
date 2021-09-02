//SEBASTIAN RUD MADSEN | SEMAD17@STUDENT.SDU.DK

#ifndef LOAN_H
#define LOAN_H
#include <string>
#include <iostream>

class Loan
{
public:
    Loan();
    Loan(double debt, int years, int paymentsPerYear, double interestRate);

    //Years
    int getYears() const;
    void setYears(int years);

    //Payments per year
    int getNoPaymentsPerYear() const;
    void setPaymentsPerYear(int paymentsPerYear);

    //Debt
    double getDebt() const;
    void setDebt(double debt);

    //Interest rate
    double getInterestRate() const;
    void setInterestRate(double rate);

    //Calculates total interest of a loan for all years
    double totalInterest() const;

    //Calculates total repayment of a loan including interest
    double totalPayment() const;

    //Calculates total net interest after tax refund
    double totalInterestTaxDeducted(double taxDeductionRate) const;

    //Output periodical payments with unpaid balance, paid interest,
    //and repayment of each payment to stream object ost
    void outputPeriodicalPayments(std::ostream& ost) const;

private:
    double _debt, _interestRate;
    int _years, _paymentsPerYear;

};

#endif // LOAN_H

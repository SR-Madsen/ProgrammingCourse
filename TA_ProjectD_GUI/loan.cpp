//SEBASTIAN RUD MADSEN | SEMAD17@STUDENT.SDU.DK

#include "loan.h"
#include <cmath>

Loan::Loan()
{
}

Loan::Loan(double debt, int years, int paymentsPerYear, double interestRate)
{
    if(debt>0 && years>0 && paymentsPerYear>0 && interestRate>0)
    {
    _debt=debt;
    _years=years;
    _paymentsPerYear=paymentsPerYear;
    _interestRate=interestRate;
    }
}

//Years
int Loan::getYears() const
{
    return _years;
}

void Loan::setYears(int years)
{
    if(years>0)
    {
    _years=years;
    }
}

//Payments per year
int Loan::getNoPaymentsPerYear() const
{
    return _paymentsPerYear;
}

void Loan::setPaymentsPerYear(int paymentsPerYear)
{
    if(paymentsPerYear>0)
    {
    _paymentsPerYear=paymentsPerYear;
    }
}

//Debt
double Loan::getDebt() const
{
    return _debt;
}

void Loan::setDebt(double debt)
{
    if(debt>0)
    {
    _debt=debt;
    }
}

//Interest rate
double Loan::getInterestRate() const
{
    return _interestRate;
}

void Loan::setInterestRate(double rate)
{
    if(rate>0)
    {
    _interestRate=rate;
    }
}

//Calculates total interest of a loan for all years
double Loan::totalInterest() const
{
    return (totalPayment()*_paymentsPerYear*_years)-_debt;
}

//Calculates total repayment of a loan including interest per term
double Loan::totalPayment() const
{
    return _debt*((_interestRate/_paymentsPerYear/100.0)/(1-pow(1+(_interestRate/_paymentsPerYear/100.0), -(_paymentsPerYear*_years))));
}

//Calculates total net interest after tax refund
double Loan::totalInterestTaxDeducted(double taxDeductionRate) const
{
    return ((totalPayment()*_paymentsPerYear*_years)-_debt)-taxDeductionRate/100.0*((totalPayment()*_paymentsPerYear*_years)-_debt);
}

//Output periodical payments with unpaid balance, paid interest,
//and repayment of each payment to stream object ost
void Loan::outputPeriodicalPayments(std::ostream &ost) const
{
    ost.setf(std::ios::fixed);
    ost.setf(std::ios::showpoint);
    ost.precision(2);

    ost.width(15);
    ost << "Terminnummer";
    ost.width(10);
    ost << " | ";

    ost.width(17);
    ost << "Restgæld";
    ost.width(14);
    ost << " | ";

    ost.width(18);
    ost << "Renteudgift";
    ost.width(12);
    ost << " | ";

    ost.width(22);
    ost << "Nettoafdrag på gæld" << std::endl;

    double remainingDebt=_debt;
    for(int n=1; n<=_years*_paymentsPerYear; n++)
    {
        double previousDebt=remainingDebt;
        remainingDebt=remainingDebt*(1+(_interestRate/_paymentsPerYear/100.0))-totalPayment();

        ost.width(10);
        ost << n; //Terminnummer
        ost.width(15);
        ost << " | ";

        ost.width(16);
        ost << remainingDebt; //Restgæld
        ost.width(14);
        ost << " | ";

        ost.width(16);
        ost << previousDebt*(1+(_interestRate/_paymentsPerYear/100.0))-previousDebt; //Renteudgift = forrentet værdi minus forrige værdi
        ost.width(14);
        ost << " | ";

        ost.width(12);
        ost << totalPayment()-(previousDebt*(1+(_interestRate/_paymentsPerYear/100.0))-previousDebt) << std::endl; //Nettoafdrag på gæld
        // = betaling per termin minus renteudgift per termin
    }
    ost << "_________________________________________________________________________________________________" << std::endl;
    ost << "Udgifter i alt:";
    ost.width(48);
    ost << " ";
    ost << totalInterest();
    ost.width(14);
    ost << " | ";
    ost.width(12);
    ost << _debt;
}

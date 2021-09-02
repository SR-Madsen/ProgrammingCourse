//SEBASTIAN RUD MADSEN | SEMAD17@STUDENT.SDU.DK

#include <string>
#include <qstring>
#include <fstream>
#include "loanwindow.h"
#include "ui_loanwindow.h"

LoanWindow::LoanWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoanWindow)
{
    ui->setupUi(this);
    ui->YearsLine->setPlaceholderText("Years of payback");
    ui->RateLine->setPlaceholderText("Interest rate");
    ui->PaymentsLine->setPlaceholderText("Payments per year");
    ui->LoanLine->setPlaceholderText("Total initial loan");
    ui->TaxDeductLine->setPlaceholderText("Tax deduction rate");
    ui->TotalPaidShower->setPlaceholderText("Press calculate to get result");
    ui->ResultTermShower->setPlaceholderText("Press calculate to get result");
    ui->TotalInterestShower->setPlaceholderText("Press calculate to get result");
    ui->TotalInterestNoTShower->setPlaceholderText("Press calculate to get result");
    ui->FileLine->setPlaceholderText("Choose output file name");

    ui->LoanShower->setText("0");
    ui->YearsShower->setText("0");
    ui->PaymentsShower->setText("0");
    ui->RateShower->setText("0");
    ui->TaxDeductShower->setText("0");
    FirstLoan.setDebt(0);
    FirstLoan.setInterestRate(0);
    FirstLoan.setPaymentsPerYear(0);
    FirstLoan.setYears(0);
    _taxDeduct=0;

}

LoanWindow::~LoanWindow()
{
    delete ui;
}

void LoanWindow::on_YearsPush_pressed()
{
    ui->YearsShower->setText(ui->YearsLine->text());
    _years=std::stoi((ui->YearsLine->text()).toStdString());
    ui->YearsLine->clear();
}

void LoanWindow::on_LoanPush_pressed()
{
    ui->LoanShower->setText(ui->LoanLine->text());
    _debt=std::stod((ui->LoanLine->text()).toStdString());
    ui->LoanLine->clear();
}

void LoanWindow::on_PaymentsPush_pressed()
{
    ui->PaymentsShower->setText(ui->PaymentsLine->text());
    _paymentsPerYear=std::stoi((ui->PaymentsLine->text()).toStdString());
    ui->PaymentsLine->clear();
}

void LoanWindow::on_RatePush_pressed()
{
    ui->RateShower->setText(ui->RateLine->text());
    _interestRate=std::stod((ui->RateLine->text()).toStdString());
    ui->RateLine->clear();
}

void LoanWindow::on_TaxDeductPush_pressed()
{
    ui->TaxDeductShower->setText(ui->TaxDeductLine->text());
    _taxDeduct=std::stod((ui->TaxDeductLine->text()).toStdString());
    ui->TaxDeductLine->clear();
}

void LoanWindow::on_LoanLine_returnPressed()
{
    ui->LoanShower->setText(ui->LoanLine->text());
    _debt=std::stod((ui->LoanLine->text()).toStdString());
    ui->LoanLine->clear();
}

void LoanWindow::on_YearsLine_returnPressed()
{
    ui->YearsShower->setText(ui->YearsLine->text());
    _years=std::stoi((ui->YearsLine->text()).toStdString());
    ui->YearsLine->clear();
}

void LoanWindow::on_PaymentsLine_returnPressed()
{
    ui->PaymentsShower->setText(ui->PaymentsLine->text());
    _paymentsPerYear=std::stoi((ui->PaymentsLine->text()).toStdString());
    ui->PaymentsLine->clear();
}

void LoanWindow::on_RateLine_returnPressed()
{
    ui->RateShower->setText(ui->RateLine->text());
    _interestRate=std::stod((ui->RateLine->text()).toStdString());
    ui->RateLine->clear();
}

void LoanWindow::on_TaxDeductLine_returnPressed()
{
    ui->TaxDeductShower->setText(ui->TaxDeductLine->text());
    _taxDeduct=std::stod((ui->TaxDeductLine->text()).toStdString());
    ui->TaxDeductLine->clear();
}

void LoanWindow::on_CalcPush_pressed()
{
    FirstLoan.setDebt(_debt);
    FirstLoan.setYears(_years);
    FirstLoan.setPaymentsPerYear(_paymentsPerYear);
    FirstLoan.setInterestRate(_interestRate);

    ui->ResultTermShower->setText(QString::number(FirstLoan.totalPayment()));
    ui->TotalPaidShower->setText(QString::number(FirstLoan.totalPayment()*FirstLoan.getNoPaymentsPerYear()*FirstLoan.getYears()));

    double _totalInterest=FirstLoan.totalInterest();
    ui->TotalInterestShower->setText(QString::number(_totalInterest));

    double _interestAfterDeduction=FirstLoan.totalInterestTaxDeducted(_taxDeduct);
    ui->TotalInterestNoTShower->setText(QString::number(_interestAfterDeduction));
}

void LoanWindow::on_ResetPush_pressed()
{
    ui->LoanLine->clear();
    ui->PaymentsLine->clear();
    ui->YearsLine->clear();
    ui->RateLine->clear();
    ui->PaymentsShower->clear();
    ui->LoanShower->clear();
    ui->YearsShower->clear();
    ui->RateShower->clear();
    ui->TaxDeductShower->clear();
    ui->TotalPaidShower->clear();
    ui->ResultTermShower->clear();
    ui->TotalInterestNoTShower->clear();
    ui->TotalInterestShower->clear();
    ui->FileLine->clear();
    ui->OutputPush->setText("Output to file");
}

void LoanWindow::on_OutputPush_pressed()
{
    std::string filename;

    ui->OutputPush->setText("Output to file probably succesful");

    filename=((ui->FileLine->text()).toStdString())+".txt";
    ui->FileLine->clear();

    FirstLoan.setDebt(_debt);
    FirstLoan.setYears(_years);
    FirstLoan.setPaymentsPerYear(_paymentsPerYear);
    FirstLoan.setInterestRate(_interestRate);

    std::ofstream outstream(filename);

    FirstLoan.outputPeriodicalPayments(outstream);

    outstream.close();
}

void LoanWindow::on_FileLine_returnPressed()
{
    std::string filename;

    ui->OutputPush->setText("Output to file probably succesful");

    filename=((ui->FileLine->text()).toStdString())+".txt";
    ui->FileLine->clear();

    FirstLoan.setDebt(_debt);
    FirstLoan.setYears(_years);
    FirstLoan.setPaymentsPerYear(_paymentsPerYear);
    FirstLoan.setInterestRate(_interestRate);

    std::ofstream outstream(filename);

    FirstLoan.outputPeriodicalPayments(outstream);

    outstream.close();
}

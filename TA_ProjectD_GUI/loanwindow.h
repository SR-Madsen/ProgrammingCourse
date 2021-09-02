//SEBASTIAN RUD MADSEN | SEMAD17@STUDENT.SDU.DK

#ifndef LOANWINDOW_H
#define LOANWINDOW_H

#include <QMainWindow>
#include "loan.h"

namespace Ui {
class LoanWindow;
}

class LoanWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoanWindow(QWidget *parent = 0);
    ~LoanWindow();

private slots:
    void on_YearsPush_pressed();

    void on_LoanPush_pressed();

    void on_PaymentsPush_pressed();

    void on_RatePush_pressed();

    void on_LoanLine_returnPressed();

    void on_YearsLine_returnPressed();

    void on_PaymentsLine_returnPressed();

    void on_RateLine_returnPressed();

    void on_CalcPush_pressed();

    void on_TaxDeductPush_pressed();

    void on_TaxDeductLine_returnPressed();

    void on_ResetPush_pressed();

    void on_OutputPush_pressed();

    void on_FileLine_returnPressed();

private:
    Ui::LoanWindow *ui;
    int _years, _paymentsPerYear;
    double _interestRate, _debt, _taxDeduct;
    Loan FirstLoan;

};

#endif // LOANWINDOW_H

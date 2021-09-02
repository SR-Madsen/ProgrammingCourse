/********************************************************************************
** Form generated from reading UI file 'loanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANWINDOW_H
#define UI_LOANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoanWindow
{
public:
    QWidget *centralWidget;
    QPushButton *YearsPush;
    QLineEdit *YearsLine;
    QLabel *YearsLabel;
    QLabel *PaymentsLabel;
    QLabel *LoanLabel;
    QLabel *RateLabel;
    QLineEdit *PaymentsLine;
    QLineEdit *LoanLine;
    QLineEdit *RateLine;
    QPushButton *PaymentsPush;
    QPushButton *RatePush;
    QPushButton *LoanPush;
    QTextBrowser *LoanShower;
    QTextBrowser *YearsShower;
    QTextBrowser *PaymentsShower;
    QTextBrowser *RateShower;
    QPushButton *CalcPush;
    QTextBrowser *ResultTermShower;
    QLabel *ResultTermLabel;
    QLabel *TotalInterestLabel;
    QTextBrowser *TotalInterestShower;
    QLabel *TotalPaidLabel;
    QTextBrowser *TotalPaidShower;
    QLineEdit *TaxDeductLine;
    QPushButton *TaxDeductPush;
    QLabel *TaxDecuctLabel;
    QTextBrowser *TaxDeductShower;
    QLabel *TotalInterestNoTLabel;
    QTextBrowser *TotalInterestNoTShower;
    QPushButton *ResetPush;
    QPushButton *OutputPush;
    QLineEdit *FileLine;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuLoan_Calculations;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoanWindow)
    {
        if (LoanWindow->objectName().isEmpty())
            LoanWindow->setObjectName(QStringLiteral("LoanWindow"));
        LoanWindow->resize(389, 665);
        centralWidget = new QWidget(LoanWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        YearsPush = new QPushButton(centralWidget);
        YearsPush->setObjectName(QStringLiteral("YearsPush"));
        YearsPush->setGeometry(QRect(280, 50, 75, 23));
        YearsLine = new QLineEdit(centralWidget);
        YearsLine->setObjectName(QStringLiteral("YearsLine"));
        YearsLine->setGeometry(QRect(10, 50, 241, 20));
        YearsLabel = new QLabel(centralWidget);
        YearsLabel->setObjectName(QStringLiteral("YearsLabel"));
        YearsLabel->setGeometry(QRect(10, 250, 131, 20));
        PaymentsLabel = new QLabel(centralWidget);
        PaymentsLabel->setObjectName(QStringLiteral("PaymentsLabel"));
        PaymentsLabel->setGeometry(QRect(10, 280, 151, 21));
        LoanLabel = new QLabel(centralWidget);
        LoanLabel->setObjectName(QStringLiteral("LoanLabel"));
        LoanLabel->setGeometry(QRect(10, 220, 111, 21));
        RateLabel = new QLabel(centralWidget);
        RateLabel->setObjectName(QStringLiteral("RateLabel"));
        RateLabel->setGeometry(QRect(10, 310, 111, 21));
        PaymentsLine = new QLineEdit(centralWidget);
        PaymentsLine->setObjectName(QStringLiteral("PaymentsLine"));
        PaymentsLine->setGeometry(QRect(10, 90, 241, 20));
        LoanLine = new QLineEdit(centralWidget);
        LoanLine->setObjectName(QStringLiteral("LoanLine"));
        LoanLine->setGeometry(QRect(12, 11, 241, 20));
        LoanLine->setEchoMode(QLineEdit::Normal);
        RateLine = new QLineEdit(centralWidget);
        RateLine->setObjectName(QStringLiteral("RateLine"));
        RateLine->setGeometry(QRect(10, 130, 241, 20));
        PaymentsPush = new QPushButton(centralWidget);
        PaymentsPush->setObjectName(QStringLiteral("PaymentsPush"));
        PaymentsPush->setGeometry(QRect(280, 90, 75, 23));
        RatePush = new QPushButton(centralWidget);
        RatePush->setObjectName(QStringLiteral("RatePush"));
        RatePush->setGeometry(QRect(280, 130, 75, 23));
        LoanPush = new QPushButton(centralWidget);
        LoanPush->setObjectName(QStringLiteral("LoanPush"));
        LoanPush->setGeometry(QRect(280, 10, 75, 23));
        LoanShower = new QTextBrowser(centralWidget);
        LoanShower->setObjectName(QStringLiteral("LoanShower"));
        LoanShower->setGeometry(QRect(170, 220, 211, 21));
        LoanShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        LoanShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YearsShower = new QTextBrowser(centralWidget);
        YearsShower->setObjectName(QStringLiteral("YearsShower"));
        YearsShower->setGeometry(QRect(170, 250, 211, 21));
        YearsShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YearsShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        PaymentsShower = new QTextBrowser(centralWidget);
        PaymentsShower->setObjectName(QStringLiteral("PaymentsShower"));
        PaymentsShower->setGeometry(QRect(170, 280, 211, 21));
        PaymentsShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        PaymentsShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        RateShower = new QTextBrowser(centralWidget);
        RateShower->setObjectName(QStringLiteral("RateShower"));
        RateShower->setGeometry(QRect(170, 310, 211, 21));
        RateShower->setAutoFillBackground(false);
        RateShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        RateShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        CalcPush = new QPushButton(centralWidget);
        CalcPush->setObjectName(QStringLiteral("CalcPush"));
        CalcPush->setGeometry(QRect(10, 380, 371, 23));
        ResultTermShower = new QTextBrowser(centralWidget);
        ResultTermShower->setObjectName(QStringLiteral("ResultTermShower"));
        ResultTermShower->setGeometry(QRect(170, 460, 211, 21));
        ResultTermShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ResultTermShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ResultTermLabel = new QLabel(centralWidget);
        ResultTermLabel->setObjectName(QStringLiteral("ResultTermLabel"));
        ResultTermLabel->setGeometry(QRect(10, 460, 151, 16));
        TotalInterestLabel = new QLabel(centralWidget);
        TotalInterestLabel->setObjectName(QStringLiteral("TotalInterestLabel"));
        TotalInterestLabel->setGeometry(QRect(10, 490, 151, 16));
        TotalInterestShower = new QTextBrowser(centralWidget);
        TotalInterestShower->setObjectName(QStringLiteral("TotalInterestShower"));
        TotalInterestShower->setGeometry(QRect(170, 490, 211, 21));
        TotalInterestShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TotalInterestShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TotalPaidLabel = new QLabel(centralWidget);
        TotalPaidLabel->setObjectName(QStringLiteral("TotalPaidLabel"));
        TotalPaidLabel->setGeometry(QRect(10, 430, 151, 16));
        TotalPaidShower = new QTextBrowser(centralWidget);
        TotalPaidShower->setObjectName(QStringLiteral("TotalPaidShower"));
        TotalPaidShower->setGeometry(QRect(170, 430, 211, 21));
        TotalPaidShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TotalPaidShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TaxDeductLine = new QLineEdit(centralWidget);
        TaxDeductLine->setObjectName(QStringLiteral("TaxDeductLine"));
        TaxDeductLine->setGeometry(QRect(10, 170, 241, 20));
        TaxDeductPush = new QPushButton(centralWidget);
        TaxDeductPush->setObjectName(QStringLiteral("TaxDeductPush"));
        TaxDeductPush->setGeometry(QRect(280, 170, 75, 23));
        TaxDecuctLabel = new QLabel(centralWidget);
        TaxDecuctLabel->setObjectName(QStringLiteral("TaxDecuctLabel"));
        TaxDecuctLabel->setGeometry(QRect(10, 340, 151, 16));
        TaxDeductShower = new QTextBrowser(centralWidget);
        TaxDeductShower->setObjectName(QStringLiteral("TaxDeductShower"));
        TaxDeductShower->setGeometry(QRect(170, 340, 211, 21));
        TaxDeductShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TaxDeductShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TotalInterestNoTLabel = new QLabel(centralWidget);
        TotalInterestNoTLabel->setObjectName(QStringLiteral("TotalInterestNoTLabel"));
        TotalInterestNoTLabel->setGeometry(QRect(10, 520, 151, 16));
        TotalInterestNoTShower = new QTextBrowser(centralWidget);
        TotalInterestNoTShower->setObjectName(QStringLiteral("TotalInterestNoTShower"));
        TotalInterestNoTShower->setGeometry(QRect(170, 520, 211, 21));
        TotalInterestNoTShower->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TotalInterestNoTShower->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ResetPush = new QPushButton(centralWidget);
        ResetPush->setObjectName(QStringLiteral("ResetPush"));
        ResetPush->setGeometry(QRect(200, 590, 181, 23));
        OutputPush = new QPushButton(centralWidget);
        OutputPush->setObjectName(QStringLiteral("OutputPush"));
        OutputPush->setGeometry(QRect(10, 590, 181, 23));
        FileLine = new QLineEdit(centralWidget);
        FileLine->setObjectName(QStringLiteral("FileLine"));
        FileLine->setGeometry(QRect(10, 560, 181, 20));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(200, 550, 171, 31));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        LoanWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LoanWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 389, 21));
        menuLoan_Calculations = new QMenu(menuBar);
        menuLoan_Calculations->setObjectName(QStringLiteral("menuLoan_Calculations"));
        LoanWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoanWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LoanWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LoanWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LoanWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(LoanLine, YearsLine);
        QWidget::setTabOrder(YearsLine, PaymentsLine);
        QWidget::setTabOrder(PaymentsLine, RateLine);
        QWidget::setTabOrder(RateLine, TaxDeductLine);
        QWidget::setTabOrder(TaxDeductLine, LoanPush);
        QWidget::setTabOrder(LoanPush, YearsPush);
        QWidget::setTabOrder(YearsPush, PaymentsPush);
        QWidget::setTabOrder(PaymentsPush, RatePush);
        QWidget::setTabOrder(RatePush, TaxDeductPush);
        QWidget::setTabOrder(TaxDeductPush, LoanShower);
        QWidget::setTabOrder(LoanShower, YearsShower);
        QWidget::setTabOrder(YearsShower, PaymentsShower);
        QWidget::setTabOrder(PaymentsShower, RateShower);
        QWidget::setTabOrder(RateShower, TaxDeductShower);
        QWidget::setTabOrder(TaxDeductShower, CalcPush);
        QWidget::setTabOrder(CalcPush, TotalPaidShower);
        QWidget::setTabOrder(TotalPaidShower, ResultTermShower);
        QWidget::setTabOrder(ResultTermShower, TotalInterestShower);

        menuBar->addAction(menuLoan_Calculations->menuAction());

        retranslateUi(LoanWindow);

        QMetaObject::connectSlotsByName(LoanWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoanWindow)
    {
        LoanWindow->setWindowTitle(QApplication::translate("LoanWindow", "LoanWindow", nullptr));
        YearsPush->setText(QApplication::translate("LoanWindow", "Apply", nullptr));
        YearsLabel->setText(QApplication::translate("LoanWindow", "Current amount of years:", nullptr));
        PaymentsLabel->setText(QApplication::translate("LoanWindow", "Current payments per year:", nullptr));
        LoanLabel->setText(QApplication::translate("LoanWindow", "Current initial loan:", nullptr));
        RateLabel->setText(QApplication::translate("LoanWindow", "Current interest rate:", nullptr));
        PaymentsPush->setText(QApplication::translate("LoanWindow", "Apply", nullptr));
        RatePush->setText(QApplication::translate("LoanWindow", "Apply", nullptr));
        LoanPush->setText(QApplication::translate("LoanWindow", "Apply", nullptr));
        CalcPush->setText(QApplication::translate("LoanWindow", "Calculate payment", nullptr));
        ResultTermLabel->setText(QApplication::translate("LoanWindow", "Payment each term:", nullptr));
        TotalInterestLabel->setText(QApplication::translate("LoanWindow", "Total interest:", nullptr));
        TotalPaidLabel->setText(QApplication::translate("LoanWindow", "Total payment:", nullptr));
        TaxDeductPush->setText(QApplication::translate("LoanWindow", "Apply", nullptr));
        TaxDecuctLabel->setText(QApplication::translate("LoanWindow", "Current tax deduction rate:", nullptr));
        TotalInterestNoTLabel->setText(QApplication::translate("LoanWindow", "Total interest (tax reduced):", nullptr));
        ResetPush->setText(QApplication::translate("LoanWindow", "Reset", nullptr));
        OutputPush->setText(QApplication::translate("LoanWindow", "Output to file", nullptr));
        textBrowser->setHtml(QApplication::translate("LoanWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SEBASTIAN RUD MADSEN</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SEMAD17@STUDENT.SDU.DK</p></body></html>", nullptr));
        menuLoan_Calculations->setTitle(QApplication::translate("LoanWindow", "Loan Calculations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoanWindow: public Ui_LoanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANWINDOW_H

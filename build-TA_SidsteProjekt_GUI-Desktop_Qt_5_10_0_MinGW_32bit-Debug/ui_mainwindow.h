/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *studentText;
    QPushButton *exitButton;
    QRadioButton *matrixvectorRadio;
    QRadioButton *matrixmatrixRadio;
    QLabel *calcLabel;
    QLabel *matrixLabel;
    QLabel *vectorLabel;
    QLabel *secmatrixLabel;
    QLabel *firstmatrixLabel;
    QSpinBox *firstmatRowSpin;
    QSpinBox *firstmatColsSpin;
    QSpinBox *secmatRowsSpin;
    QSpinBox *secmatColsSpin;
    QLabel *firstmatRows;
    QLabel *firstmatCols;
    QLabel *secmatRows;
    QLabel *secmatCols;
    QPushButton *firstmatButton;
    QTextBrowser *textBrowser_2;
    QMenuBar *menuBar;
    QMenu *menuStandard;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1018, 666);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        studentText = new QTextBrowser(centralWidget);
        studentText->setObjectName(QStringLiteral("studentText"));
        studentText->setGeometry(QRect(850, 10, 161, 41));
        studentText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        studentText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(730, 10, 101, 41));
        matrixvectorRadio = new QRadioButton(centralWidget);
        matrixvectorRadio->setObjectName(QStringLiteral("matrixvectorRadio"));
        matrixvectorRadio->setGeometry(QRect(10, 40, 141, 17));
        matrixmatrixRadio = new QRadioButton(centralWidget);
        matrixmatrixRadio->setObjectName(QStringLiteral("matrixmatrixRadio"));
        matrixmatrixRadio->setGeometry(QRect(10, 70, 131, 17));
        calcLabel = new QLabel(centralWidget);
        calcLabel->setObjectName(QStringLiteral("calcLabel"));
        calcLabel->setGeometry(QRect(10, 10, 181, 16));
        matrixLabel = new QLabel(centralWidget);
        matrixLabel->setObjectName(QStringLiteral("matrixLabel"));
        matrixLabel->setGeometry(QRect(210, 10, 161, 16));
        vectorLabel = new QLabel(centralWidget);
        vectorLabel->setObjectName(QStringLiteral("vectorLabel"));
        vectorLabel->setGeometry(QRect(420, 10, 141, 16));
        secmatrixLabel = new QLabel(centralWidget);
        secmatrixLabel->setObjectName(QStringLiteral("secmatrixLabel"));
        secmatrixLabel->setGeometry(QRect(420, 10, 201, 16));
        firstmatrixLabel = new QLabel(centralWidget);
        firstmatrixLabel->setObjectName(QStringLiteral("firstmatrixLabel"));
        firstmatrixLabel->setGeometry(QRect(210, 10, 191, 16));
        firstmatRowSpin = new QSpinBox(centralWidget);
        firstmatRowSpin->setObjectName(QStringLiteral("firstmatRowSpin"));
        firstmatRowSpin->setGeometry(QRect(340, 40, 42, 22));
        firstmatRowSpin->setMaximum(9);
        firstmatColsSpin = new QSpinBox(centralWidget);
        firstmatColsSpin->setObjectName(QStringLiteral("firstmatColsSpin"));
        firstmatColsSpin->setGeometry(QRect(340, 70, 42, 22));
        firstmatColsSpin->setMaximum(9);
        secmatRowsSpin = new QSpinBox(centralWidget);
        secmatRowsSpin->setObjectName(QStringLiteral("secmatRowsSpin"));
        secmatRowsSpin->setGeometry(QRect(480, 40, 42, 22));
        secmatRowsSpin->setMaximum(9);
        secmatColsSpin = new QSpinBox(centralWidget);
        secmatColsSpin->setObjectName(QStringLiteral("secmatColsSpin"));
        secmatColsSpin->setGeometry(QRect(480, 70, 42, 22));
        secmatColsSpin->setMaximum(9);
        firstmatRows = new QLabel(centralWidget);
        firstmatRows->setObjectName(QStringLiteral("firstmatRows"));
        firstmatRows->setGeometry(QRect(270, 40, 47, 21));
        firstmatCols = new QLabel(centralWidget);
        firstmatCols->setObjectName(QStringLiteral("firstmatCols"));
        firstmatCols->setGeometry(QRect(270, 70, 47, 21));
        secmatRows = new QLabel(centralWidget);
        secmatRows->setObjectName(QStringLiteral("secmatRows"));
        secmatRows->setGeometry(QRect(420, 40, 47, 21));
        secmatCols = new QLabel(centralWidget);
        secmatCols->setObjectName(QStringLiteral("secmatCols"));
        secmatCols->setGeometry(QRect(420, 70, 47, 21));
        firstmatButton = new QPushButton(centralWidget);
        firstmatButton->setObjectName(QStringLiteral("firstmatButton"));
        firstmatButton->setGeometry(QRect(530, 50, 71, 31));
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(90, 250, 841, 231));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1018, 21));
        menuStandard = new QMenu(menuBar);
        menuStandard->setObjectName(QStringLiteral("menuStandard"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(matrixvectorRadio, matrixmatrixRadio);
        QWidget::setTabOrder(matrixmatrixRadio, firstmatRowSpin);
        QWidget::setTabOrder(firstmatRowSpin, firstmatColsSpin);
        QWidget::setTabOrder(firstmatColsSpin, firstmatButton);
        QWidget::setTabOrder(firstmatButton, secmatRowsSpin);
        QWidget::setTabOrder(secmatRowsSpin, secmatColsSpin);
        QWidget::setTabOrder(secmatColsSpin, exitButton);
        QWidget::setTabOrder(exitButton, studentText);

        menuBar->addAction(menuStandard->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        studentText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SEBASTIAN RUD MADSEN</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SEMAD17@STUDENT.SDU.DK</p></body></html>", nullptr));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        matrixvectorRadio->setText(QApplication::translate("MainWindow", "Matrix-vector product", nullptr));
        matrixmatrixRadio->setText(QApplication::translate("MainWindow", "Matrix-matrix product", nullptr));
        calcLabel->setText(QApplication::translate("MainWindow", "Choose the product to calculate:", nullptr));
        matrixLabel->setText(QApplication::translate("MainWindow", "Matrix dimensions (max of 9x9):", nullptr));
        vectorLabel->setText(QApplication::translate("MainWindow", "Vector dimension (max of 9):", nullptr));
        secmatrixLabel->setText(QApplication::translate("MainWindow", "Second matrix dimensions (max of 9x9):", nullptr));
        firstmatrixLabel->setText(QApplication::translate("MainWindow", "First matrix dimensions (max of 9x9):", nullptr));
        firstmatRows->setText(QApplication::translate("MainWindow", "Rows:", nullptr));
        firstmatCols->setText(QApplication::translate("MainWindow", "Columns:", nullptr));
        secmatRows->setText(QApplication::translate("MainWindow", "Rows:", nullptr));
        secmatCols->setText(QApplication::translate("MainWindow", "Columns:", nullptr));
        firstmatButton->setText(QApplication::translate("MainWindow", "Proceed", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Resultaterne af udregningerne er godt nok ikke korrekte, men det ser flot ud.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Hvis programmet crasher tilf\303\246ldigt, kender jeg ikke noget til det.</span></p>\n"
"<p style=\"-qt"
                        "-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Man kan godt indtaste doubles i en matrix, men det bliver lavet om til integer.</span></p></body></html>", nullptr));
        menuStandard->setTitle(QApplication::translate("MainWindow", "Standard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

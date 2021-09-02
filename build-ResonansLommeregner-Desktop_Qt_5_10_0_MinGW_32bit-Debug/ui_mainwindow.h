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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *TypeLabel;
    QPushButton *TypeSeries;
    QPushButton *TypeParallel;
    QLabel *CurrentLabel;
    QTextBrowser *CurrentText;
    QPushButton *ExitButton;
    QLabel *ResistorLabel;
    QLabel *InductorLabel;
    QLabel *CapacitorLabel;
    QLineEdit *ResistorLine;
    QLineEdit *InductorLine;
    QLineEdit *CapacitorLine;
    QPushButton *ApplyResistor;
    QPushButton *ApplyInductor;
    QPushButton *ApplyCapacitor;
    QPushButton *pushButton;
    QLabel *ShowResLabel;
    QLabel *ShowIndLabel;
    QLabel *ShowCapLabel;
    QTextBrowser *ShowResText;
    QTextBrowser *ShowIndText;
    QTextBrowser *ShowCapText;
    QLabel *CentFreqLab;
    QLabel *FirstCornLab;
    QLabel *SecondCornLab;
    QLabel *BandLab;
    QLabel *QualLab;
    QTextBrowser *CentFreqText;
    QTextBrowser *FirstCornText;
    QTextBrowser *SecondCornText;
    QTextBrowser *BandText;
    QTextBrowser *QualText;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(696, 430);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TypeLabel = new QLabel(centralWidget);
        TypeLabel->setObjectName(QStringLiteral("TypeLabel"));
        TypeLabel->setGeometry(QRect(10, 0, 261, 16));
        TypeSeries = new QPushButton(centralWidget);
        TypeSeries->setObjectName(QStringLiteral("TypeSeries"));
        TypeSeries->setGeometry(QRect(40, 20, 75, 23));
        TypeParallel = new QPushButton(centralWidget);
        TypeParallel->setObjectName(QStringLiteral("TypeParallel"));
        TypeParallel->setGeometry(QRect(130, 20, 75, 23));
        CurrentLabel = new QLabel(centralWidget);
        CurrentLabel->setObjectName(QStringLiteral("CurrentLabel"));
        CurrentLabel->setGeometry(QRect(10, 60, 47, 21));
        CurrentText = new QTextBrowser(centralWidget);
        CurrentText->setObjectName(QStringLiteral("CurrentText"));
        CurrentText->setGeometry(QRect(60, 60, 191, 21));
        CurrentText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        CurrentText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ExitButton = new QPushButton(centralWidget);
        ExitButton->setObjectName(QStringLiteral("ExitButton"));
        ExitButton->setGeometry(QRect(590, 350, 75, 23));
        ResistorLabel = new QLabel(centralWidget);
        ResistorLabel->setObjectName(QStringLiteral("ResistorLabel"));
        ResistorLabel->setGeometry(QRect(10, 140, 101, 21));
        InductorLabel = new QLabel(centralWidget);
        InductorLabel->setObjectName(QStringLiteral("InductorLabel"));
        InductorLabel->setGeometry(QRect(10, 180, 121, 21));
        CapacitorLabel = new QLabel(centralWidget);
        CapacitorLabel->setObjectName(QStringLiteral("CapacitorLabel"));
        CapacitorLabel->setGeometry(QRect(10, 220, 111, 21));
        ResistorLine = new QLineEdit(centralWidget);
        ResistorLine->setObjectName(QStringLiteral("ResistorLine"));
        ResistorLine->setGeometry(QRect(120, 140, 113, 20));
        InductorLine = new QLineEdit(centralWidget);
        InductorLine->setObjectName(QStringLiteral("InductorLine"));
        InductorLine->setGeometry(QRect(120, 180, 113, 20));
        CapacitorLine = new QLineEdit(centralWidget);
        CapacitorLine->setObjectName(QStringLiteral("CapacitorLine"));
        CapacitorLine->setGeometry(QRect(120, 220, 113, 20));
        ApplyResistor = new QPushButton(centralWidget);
        ApplyResistor->setObjectName(QStringLiteral("ApplyResistor"));
        ApplyResistor->setGeometry(QRect(250, 140, 75, 23));
        ApplyInductor = new QPushButton(centralWidget);
        ApplyInductor->setObjectName(QStringLiteral("ApplyInductor"));
        ApplyInductor->setGeometry(QRect(250, 180, 75, 23));
        ApplyCapacitor = new QPushButton(centralWidget);
        ApplyCapacitor->setObjectName(QStringLiteral("ApplyCapacitor"));
        ApplyCapacitor->setGeometry(QRect(250, 220, 75, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 350, 91, 23));
        ShowResLabel = new QLabel(centralWidget);
        ShowResLabel->setObjectName(QStringLiteral("ShowResLabel"));
        ShowResLabel->setGeometry(QRect(10, 280, 47, 21));
        ShowIndLabel = new QLabel(centralWidget);
        ShowIndLabel->setObjectName(QStringLiteral("ShowIndLabel"));
        ShowIndLabel->setGeometry(QRect(10, 300, 47, 21));
        ShowCapLabel = new QLabel(centralWidget);
        ShowCapLabel->setObjectName(QStringLiteral("ShowCapLabel"));
        ShowCapLabel->setGeometry(QRect(10, 320, 51, 21));
        ShowResText = new QTextBrowser(centralWidget);
        ShowResText->setObjectName(QStringLiteral("ShowResText"));
        ShowResText->setGeometry(QRect(70, 280, 91, 20));
        ShowResText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ShowResText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ShowIndText = new QTextBrowser(centralWidget);
        ShowIndText->setObjectName(QStringLiteral("ShowIndText"));
        ShowIndText->setGeometry(QRect(70, 300, 91, 20));
        ShowIndText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ShowIndText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ShowCapText = new QTextBrowser(centralWidget);
        ShowCapText->setObjectName(QStringLiteral("ShowCapText"));
        ShowCapText->setGeometry(QRect(70, 320, 91, 20));
        ShowCapText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ShowCapText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        CentFreqLab = new QLabel(centralWidget);
        CentFreqLab->setObjectName(QStringLiteral("CentFreqLab"));
        CentFreqLab->setGeometry(QRect(390, 10, 131, 16));
        FirstCornLab = new QLabel(centralWidget);
        FirstCornLab->setObjectName(QStringLiteral("FirstCornLab"));
        FirstCornLab->setGeometry(QRect(390, 40, 131, 16));
        SecondCornLab = new QLabel(centralWidget);
        SecondCornLab->setObjectName(QStringLiteral("SecondCornLab"));
        SecondCornLab->setGeometry(QRect(390, 70, 131, 16));
        BandLab = new QLabel(centralWidget);
        BandLab->setObjectName(QStringLiteral("BandLab"));
        BandLab->setGeometry(QRect(390, 100, 131, 16));
        QualLab = new QLabel(centralWidget);
        QualLab->setObjectName(QStringLiteral("QualLab"));
        QualLab->setGeometry(QRect(390, 130, 131, 16));
        CentFreqText = new QTextBrowser(centralWidget);
        CentFreqText->setObjectName(QStringLiteral("CentFreqText"));
        CentFreqText->setGeometry(QRect(520, 10, 151, 20));
        CentFreqText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        CentFreqText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FirstCornText = new QTextBrowser(centralWidget);
        FirstCornText->setObjectName(QStringLiteral("FirstCornText"));
        FirstCornText->setGeometry(QRect(520, 40, 151, 20));
        FirstCornText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FirstCornText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SecondCornText = new QTextBrowser(centralWidget);
        SecondCornText->setObjectName(QStringLiteral("SecondCornText"));
        SecondCornText->setGeometry(QRect(520, 70, 151, 20));
        SecondCornText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SecondCornText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        BandText = new QTextBrowser(centralWidget);
        BandText->setObjectName(QStringLiteral("BandText"));
        BandText->setGeometry(QRect(520, 100, 151, 20));
        BandText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        BandText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QualText = new QTextBrowser(centralWidget);
        QualText->setObjectName(QStringLiteral("QualText"));
        QualText->setGeometry(QRect(520, 130, 151, 20));
        QualText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QualText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 696, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        TypeLabel->setText(QApplication::translate("MainWindow", "Choose the type of resonance (defaults to series):", nullptr));
        TypeSeries->setText(QApplication::translate("MainWindow", "Series", nullptr));
        TypeParallel->setText(QApplication::translate("MainWindow", "Parallel", nullptr));
        CurrentLabel->setText(QApplication::translate("MainWindow", "Current:", nullptr));
        ExitButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        ResistorLabel->setText(QApplication::translate("MainWindow", "Resistor (Ohms):", nullptr));
        InductorLabel->setText(QApplication::translate("MainWindow", "Inductor (Henries):", nullptr));
        CapacitorLabel->setText(QApplication::translate("MainWindow", "Capacitor (Farad):", nullptr));
        ApplyResistor->setText(QApplication::translate("MainWindow", "Apply", nullptr));
        ApplyInductor->setText(QApplication::translate("MainWindow", "Apply", nullptr));
        ApplyCapacitor->setText(QApplication::translate("MainWindow", "Apply", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Calculate", nullptr));
        ShowResLabel->setText(QApplication::translate("MainWindow", "Resistor:", nullptr));
        ShowIndLabel->setText(QApplication::translate("MainWindow", "Inductor:", nullptr));
        ShowCapLabel->setText(QApplication::translate("MainWindow", "Capacitor:", nullptr));
        CentFreqLab->setText(QApplication::translate("MainWindow", "Center frequency:", nullptr));
        FirstCornLab->setText(QApplication::translate("MainWindow", "First corner frequency:", nullptr));
        SecondCornLab->setText(QApplication::translate("MainWindow", "Second corner frequency:", nullptr));
        BandLab->setText(QApplication::translate("MainWindow", "Bandwidth:", nullptr));
        QualLab->setText(QApplication::translate("MainWindow", "Quality:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

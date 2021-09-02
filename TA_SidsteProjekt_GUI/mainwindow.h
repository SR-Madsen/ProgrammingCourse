#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBoxLayout>
#include <QLineEdit>
#include "ui_mainwindow.h"
#include "vector.h"
#include "matrix.h"
#include <iostream>
#include <QCoreApplication>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_exitButton_clicked();

    void on_matrixvectorRadio_clicked();

    void on_matrixmatrixRadio_clicked();

    void on_firstmatButton_clicked();

    void on_lineButton_clicked();

    void on_Calculate_clicked();

    void show_result();

    void on_closeButton_clicked();

private:
    Ui::MainWindow *ui;
    QGridLayout *layout = new QGridLayout;
    QLineEdit *lineEdits;
    QWidget *lineEditWindow = new QWidget;
    QPushButton *lineButton;
    QLabel *lineLabel;
    int MatrixMatrix, fvRows, fmCols, fmRows, smCols, smRows;
    Vector<int> firstVector, resVector;
    Matrix<int> firstMatrix, secondMatrix, resMatrix;
    QTextBrowser *resultShower;
};

#endif // MAINWINDOW_H

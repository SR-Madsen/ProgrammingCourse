#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "resonancecalc.h"

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
    void on_TypeSeries_clicked();

    void on_TypeParallel_clicked();

    void on_ExitButton_clicked();

    void on_ResistorLine_returnPressed();

    void on_InductorLine_returnPressed();

    void on_CapacitorLine_returnPressed();

    void on_ApplyResistor_clicked();

    void on_ApplyInductor_clicked();

    void on_ApplyCapacitor_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ResonanceCalc Res;
};

#endif // MAINWINDOW_H

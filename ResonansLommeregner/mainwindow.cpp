#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Res.setResType('S');
    ui->CurrentText->setText("Series");
    ui->ResistorLine->setPlaceholderText("Enter value");
    ui->InductorLine->setPlaceholderText("Enter value");
    ui->CapacitorLine->setPlaceholderText("Enter value");
    ui->ShowResText->setText("0");
    ui->ShowIndText->setText("0");
    ui->ShowCapText->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExitButton_clicked()
{
    this->close();
}

void MainWindow::on_TypeSeries_clicked()
{
    Res.setResType('S');
    ui->CurrentText->setText("Series");
}

void MainWindow::on_TypeParallel_clicked()
{
    Res.setResType('P');
    ui->CurrentText->setText("Parallel");
}

void MainWindow::on_ResistorLine_returnPressed()
{
    Res.setResistor((ui->ResistorLine->text()).toDouble());
    ui->ShowResText->setText(ui->ResistorLine->text());
    ui->ResistorLine->clear();
}

void MainWindow::on_InductorLine_returnPressed()
{
    Res.setInductor((ui->InductorLine->text()).toDouble());
    ui->ShowIndText->setText(ui->InductorLine->text());
    ui->InductorLine->clear();
}

void MainWindow::on_CapacitorLine_returnPressed()
{
    Res.setCapacitor((ui->CapacitorLine->text()).toDouble());
    ui->ShowCapText->setText(ui->CapacitorLine->text());
    ui->CapacitorLine->clear();
}

void MainWindow::on_ApplyResistor_clicked()
{
    Res.setResistor((ui->ResistorLine->text()).toDouble());
    ui->ShowResText->setText(ui->ResistorLine->text());
    ui->ResistorLine->clear();
}

void MainWindow::on_ApplyInductor_clicked()
{
    Res.setInductor((ui->InductorLine->text()).toDouble());
    ui->ShowIndText->setText(ui->InductorLine->text());
    ui->InductorLine->clear();
}

void MainWindow::on_ApplyCapacitor_clicked()
{
    Res.setCapacitor((ui->CapacitorLine->text()).toDouble());
    ui->ShowCapText->setText(ui->CapacitorLine->text());
    ui->CapacitorLine->clear();
}

void MainWindow::on_pushButton_clicked()
{
    double CentFreq = Res.getCenterFreq();
    double CornFreq1 = Res.getCornerFreq1();
    double CornFreq2 = Res.getCornerFreq2();
    double Quality = Res.getQuality();
    double Bandwidth = Res.getBandwidth();

    ui->CentFreqText->setText(QString::number(CentFreq));
    ui->FirstCornText->setText(QString::number(CornFreq1));
    ui->SecondCornText->setText(QString::number(CornFreq2));
    ui->BandText->setText(QString::number(Bandwidth));
    ui->QualText->setText(QString::number(Quality));
}

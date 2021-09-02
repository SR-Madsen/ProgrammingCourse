//SEBASTIAN RUD MADSEN, SEMAD17@STUDENT.SDU.DK

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->matrixLabel->setVisible(false);
    ui->vectorLabel->setVisible(false);
    ui->firstmatrixLabel->setVisible(false);
    ui->firstmatButton->setVisible(false);
    ui->firstmatCols->setVisible(false);
    ui->firstmatRows->setVisible(false);
    ui->secmatrixLabel->setVisible(false);
    ui->secmatCols->setVisible(false);
    ui->secmatRows->setVisible(false);
    ui->firstmatColsSpin->setVisible(false);
    ui->firstmatRowSpin->setVisible(false);
    ui->secmatColsSpin->setVisible(false);
    ui->secmatRowsSpin->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete layout;
    delete lineEditWindow;
    delete []lineEdits;
    delete lineButton;
    delete lineLabel;
    delete []resultShower;
}


void MainWindow::on_exitButton_clicked()
{
    this->close();
}

void MainWindow::on_matrixvectorRadio_clicked()
{
    MatrixMatrix=0;
    ui->matrixLabel->setVisible(true);
    ui->vectorLabel->setVisible(true);
    ui->firstmatrixLabel->setVisible(false);
    ui->secmatrixLabel->setVisible(false);
    ui->firstmatCols->setVisible(true);
    ui->firstmatColsSpin->setVisible(true);
    ui->firstmatRows->setVisible(true);
    ui->firstmatRowSpin->setVisible(true);
    ui->secmatRows->setVisible(true);
    ui->secmatRowsSpin->setVisible(true);
    ui->secmatCols->setVisible(false);
    ui->secmatColsSpin->setVisible(false);
    ui->firstmatButton->setVisible(true);
}

void MainWindow::on_matrixmatrixRadio_clicked()
{
    MatrixMatrix=1;
    ui->matrixLabel->setVisible(false);
    ui->vectorLabel->setVisible(false);
    ui->firstmatrixLabel->setVisible(true);
    ui->secmatrixLabel->setVisible(true);
    ui->firstmatCols->setVisible(true);
    ui->firstmatColsSpin->setVisible(true);
    ui->firstmatRows->setVisible(true);
    ui->firstmatRowSpin->setVisible(true);
    ui->firstmatButton->setVisible(true);
    ui->secmatCols->setVisible(true);
    ui->secmatColsSpin->setVisible(true);
    ui->secmatRows->setVisible(true);
    ui->secmatRowsSpin->setVisible(true);
}

void MainWindow::on_firstmatButton_clicked()
{
    fmCols=std::stoi((ui->firstmatColsSpin->text()).toStdString());
    fmRows=std::stoi((ui->firstmatRowSpin->text()).toStdString());
    firstMatrix.setCols(fmCols);
    firstMatrix.setRows(fmRows);

    ui->firstmatColsSpin->setValue(0);
    ui->firstmatRowSpin->setValue(0);

    //Create dynamic pop-up window, with LineEdits in which to input matrix elements
    if (MatrixMatrix)
    {
        lineLabel = new QLabel(tr("First matrix inputs:"));
    }
    else
    {
        lineLabel = new QLabel(tr("Matrix inputs:"));
    }

    layout->addWidget(lineLabel,0,0);

    lineEdits = new QLineEdit[fmRows*fmCols];

    for (int n=0; n<fmRows; n++)
    {
        for (int i=0; i<fmCols; i++)
        {
            layout->addWidget(&lineEdits[n*fmCols+i],n+1,i,1,1);
        }
    }

    lineButton = new QPushButton(tr("Next"));
    layout->addWidget(lineButton,fmCols+1,fmRows-1);
    connect(lineButton, SIGNAL(clicked()), this, SLOT(on_lineButton_clicked()));

    lineEditWindow->setLayout(layout);
    lineEditWindow->show();
}

void MainWindow::on_lineButton_clicked()
{
    for (int n=0; n<fmRows; n++)
    {
        for (int i=0; i<fmCols; i++)
        {
            firstMatrix(n,i)=std::stoi((lineEdits[n*fmCols+i].text()).toStdString());
        }
    }

    //Close pop-up window and take care of memory leaks, when the "OK" button is clicked
    lineEditWindow->close();

    delete lineButton;
    delete lineLabel;
    delete []lineEdits;

    if (MatrixMatrix)
    {
        smCols=std::stoi((ui->secmatColsSpin->text()).toStdString());
        smRows=std::stoi((ui->secmatRowsSpin->text()).toStdString());
        secondMatrix.setCols(smCols);
        secondMatrix.setRows(smRows);

        ui->secmatColsSpin->setValue(0);
        ui->secmatRowsSpin->setValue(0);

        //Same as for first matrix
        lineLabel = new QLabel(tr("Second matrix inputs:"));
        layout->addWidget(lineLabel,0,0);

        lineEdits = new QLineEdit[smRows*smCols];

        for (int n=0; n<smRows; n++)
        {
            for (int i=0; i<smCols; i++)
            {
                layout->addWidget(&lineEdits[n*smCols+i],n+1,i,1,1);
            }
        }

        lineButton = new QPushButton(tr("Calculate"));
        layout->addWidget(lineButton,smCols+1,smRows-1);
        connect(lineButton, SIGNAL(clicked()), this, SLOT(on_Calculate_clicked()));

        lineEditWindow->setLayout(layout);
        lineEditWindow->show();
    }

    else
    {
        fvRows=std::stoi((ui->secmatRowsSpin->text()).toStdString());

        //Programmet crasher 80% af gangene, hvis man ikke bestemmer firstVectors størrelse på følgende måde.
        //Jeg kunne ikke finde ud af hvorfor. Compileren opførte sig underligt og gav fejl nogle gange, men andre gad den ikke.
        Vector<int> standIn(fvRows);
        firstVector=standIn;

        ui->secmatRowsSpin->setValue(0);

        lineLabel = new QLabel(tr("Vector inputs:"));
        layout->addWidget(lineLabel,0,0);

        lineEdits = new QLineEdit[fvRows];

        for (int n=0; n<fvRows; n++)
        {
            layout->addWidget(&lineEdits[n],n+1,1,1,1);
        }

        lineButton = new QPushButton(tr("Calculate"));
        layout->addWidget(lineButton,fvRows+1,2);
        connect(lineButton, SIGNAL(clicked()), this, SLOT(on_Calculate_clicked()));

        lineEditWindow->setLayout(layout);
        lineEditWindow->show();
    }
}

void MainWindow::on_Calculate_clicked()
{
    if (MatrixMatrix)
    {
        for (int n=0; n<smRows; n++)
        {
            for (int i=0; i<smCols; i++)
            {
                secondMatrix(n,i)=std::stoi((lineEdits[n*smCols+i].text()).toStdString());
            }
        }
        resMatrix=(firstMatrix*secondMatrix);
    }
    else
    {
        for (int n=0; n<fvRows; n++)
        {
            firstVector(n)=std::stoi((lineEdits[n].text()).toStdString());
        }
        resVector=(firstMatrix*firstVector);
    }

    lineEditWindow->close();

    delete lineButton;
    delete lineLabel;
    delete []lineEdits;

    show_result();
}

void MainWindow::show_result()
{
    if (MatrixMatrix)
    {
        lineLabel = new QLabel(tr("Resulting matrix:"));
        layout->addWidget(lineLabel,0,0);

        resultShower = new QTextBrowser[resMatrix.getCols()*resMatrix.getRows()];

        for (int n=0; n<resMatrix.getRows(); n++)
        {
            for (int i=0; i<resMatrix.getCols(); i++)
            {
                resultShower[n*resMatrix.getCols()+i].setText(QString::number(resMatrix(n,i)));
                resultShower[n*resMatrix.getCols()+i].setMaximumHeight(30);
                resultShower[n*resMatrix.getCols()+i].setMaximumWidth(100);
                layout->addWidget(&resultShower[n*resMatrix.getCols()+i],n+1,i,1,1);
            }
        }

        lineButton = new QPushButton(tr("Close"));
        layout->addWidget(lineButton,fmCols+1,fmRows-1);
        connect(lineButton, SIGNAL(clicked()), this, SLOT(on_closeButton_clicked()));

        lineEditWindow->setLayout(layout);
        lineEditWindow->show();
    }

    else
    {
        lineLabel = new QLabel(tr("Resulting vector:"));
        layout->addWidget(lineLabel,0,0);

        resultShower = new QTextBrowser[resVector.getSize()];

        for (int n=0; n<resVector.getSize(); n++)
        {
            resultShower[n].setText(QString::number(resVector(n)));
            resultShower[n].setMaximumHeight(30);
            resultShower[n].setMaximumWidth(100);
            layout->addWidget(&resultShower[n],n+1,1,1,1);
        }

        lineButton = new QPushButton(tr("Close"));
        layout->addWidget(lineButton,fmCols+1,fmRows-1);
        connect(lineButton, SIGNAL(clicked()), this, SLOT(on_closeButton_clicked()));

        lineEditWindow->setLayout(layout);
        lineEditWindow->show();
    }
}

void MainWindow::on_closeButton_clicked()
{
    lineEditWindow->close();
    delete lineButton;
    delete lineLabel;
    delete []resultShower;
}

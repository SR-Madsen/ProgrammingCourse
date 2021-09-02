//SEBASTIAN RUD MADSEN | SEMAD17@STUDENT.SDU.DK

//KOMMENTARER:
//Jeg ville gerne lave et tjek på det input, man har i GUI'en, for at sørge for, at det er gyldigt (altså enten integer eller double).
//Lige nu crasher specielle tegn, f.eks. !  / og endda bare mellemrum, programmet, da der ikke er noget tjek, og samtidig kan bogstaver bruges som input.
//Dette sker på grund af det trin, hvor jeg bruger "stoi" og "stod".
//Bare lav nogle pæne input, så programmet ikke crasher.

#include "loanwindow.h"
#include "loan.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoanWindow w;
    w.show();

    return a.exec();
}

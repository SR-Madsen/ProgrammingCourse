#ifndef RESONANCECALC_H
#define RESONANCECALC_H

#include<cmath>

class ResonanceCalc
{
public:
    ResonanceCalc();
    ResonanceCalc(char ResType);
    ResonanceCalc(char ResType, double L, double C, double R);

    void setValues(double L, double C, double R);
    void setInductor(double L);
    void setCapacitor(double C);
    void setResistor(double R);
    void setResType(char ResType);

    double getCenterFreq();
    double getCornerFreq1();
    double getCornerFreq2();
    double getBandwidth();
    double getQuality();

private:
    char _ResType;
    double _L, _C, _R;
    double _centerfreq, _cornerfreq1, _cornerfreq2, _bandwidth, _quality;
};

#endif // RESONANCECALC_H

#include "resonancecalc.h"

ResonanceCalc::ResonanceCalc()
{
}

ResonanceCalc::ResonanceCalc(char ResType)
{
    if (ResType == 'S' || ResType == 's' || ResType == 'P' || ResType == 'p')
    {
        _ResType = ResType;
    }
}

ResonanceCalc::ResonanceCalc(char ResType, double L, double C, double R)
{
    if (ResType == 'S' || ResType == 's' || ResType == 'P' || ResType == 'p')
    {
        _ResType = ResType;
    }
    _L = L;
    _C = C;
    _R = R;
}

void ResonanceCalc::setValues(double L, double C, double R)
{
    _L = L;
    _C = C;
    _R = R;
}

void ResonanceCalc::setInductor(double L)
{
    _L = L;
}

void ResonanceCalc::setCapacitor(double C)
{
    _C = C;
}

void ResonanceCalc::setResistor(double R)
{
    _R = R;
}

void ResonanceCalc::setResType(char ResType)
{
    if (ResType == 'S' || ResType == 's' || ResType == 'P' || ResType == 'p')
    {
        _ResType = ResType;
    }
}

double ResonanceCalc::getCenterFreq()
{
    _centerfreq = 1/(sqrt(_L*_C));
    return _centerfreq;
}

double ResonanceCalc::getCornerFreq1()
{
    if (_ResType == 'S' || _ResType == 's')
    {
        _cornerfreq1 = -_R/(2*_L) + sqrt(pow(_R/(2*_L),2) + 1/(_L*_C));
    }
    else if (_ResType == 'P' || _ResType == 'p')
    {
        _cornerfreq1 = -1/(2*_R*_C)+sqrt(pow(1/(2*_R*_C),2)+1/(_L*_C));
    }
    return _cornerfreq1;
}

double ResonanceCalc::getCornerFreq2()
{
    if (_ResType == 'S' || _ResType == 's')
    {
        _cornerfreq2 = _R/(2*_L) + sqrt(pow(_R/(2*_L),2) + 1/(_L*_C));
    }
    else if (_ResType == 'P' || _ResType == 'p')
    {
        _cornerfreq2 = 1/(2*_R*_C)+sqrt(pow(1/(2*_R*_C),2)+1/(_L*_C));
    }
    return _cornerfreq2;
}

double ResonanceCalc::getBandwidth()
{
    _bandwidth = _centerfreq/_quality;
    return _bandwidth;
}

double ResonanceCalc::getQuality()
{
    if (_ResType == 'S' || _ResType == 's')
    {
        _quality = _centerfreq*_L/_R;
    }
    else if (_ResType == 'P' || _ResType =='p')
    {
        _quality = _centerfreq*_R*_C;
    }
    return _quality;
}

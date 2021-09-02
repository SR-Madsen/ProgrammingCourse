#include <iostream>

using namespace std;

//Exercise 1 - Program
void Babylonian()
{
    int i;
    double n, r, guess;

    cout << "This program will use the Babylonian algorithm to compute the square root of a number." << endl;
    cout << "Choose a number: ";
    cin >> n;
    guess = n/2;
    for (i=1; i<=100; i++)
    {
        r = n/guess;
        guess = (guess + r)/2;
    }
    cout << "The approximate square root of " << n << " is: " << guess << "." << endl;
}


//Exercise 2 - Program
void Treadmill()
{
    int speedInt, pacesecond;
    double speed, paceminute;
    cout << "This program is designed to calculate a pace in minutes per kilometer when given an input in kilometers per hour." << endl;
    cout << "Start off by inputting your speed in kilometers per hour: ";
    cin >> speed;

    paceminute = 60.0/speed;
    speedInt=static_cast<int>(paceminute);
    pacesecond = 60*(paceminute-speedInt);

    cout << "Your pace is: " << speedInt << " minutes and " << pacesecond << " seconds per kilometer." << endl;
}


//Exercise 3 - Program
void Horoscopes()
{
    int month, day;
    string endoftheline;

    cout << "This program will find your sign and output your horoscope." << endl;
    cout << "Start off by inputting your birth month: ";
    cin >> month;
    cout << "Now input your birthdate within that month: ";
    cin >> day;

    if (month==1)
    {
        if (day<20)
        {
            cout << "Your sign is the Capricorn. You'll have good fortune or something.";
        }
            else
            {
                cout << "Your sign is the Aquarius. You're born in the winter, bad luck.";
            }

    }
    else if (month==2)
    {
        if (day<19)
        {
            cout << "Your sign is the Aquarius. You're born in the winter, bad luck.";
        }
            else
            {
                cout << "Your sign is the Pisces. Only a third of Pisces' are born in February.";
            }

    }
    else if (month==3)
    {
        if (day<21)
        {
            cout << "Your sign is the Pices. Two thirds of Pisces' are born in March.";
        }
            else
            {
                cout << "Your sign is Aries. I can't keep making stuff up though.";
            }

    }
    else if (month==4)
    {
        if (day<20)
        {
            cout << "Your sign is the Aries. And I cannot keep making stuff up.";
        }
            else
            {
                cout << "Your sign is the Taurus. That sounds kinda scary, doesn't it?";
            }

    }
    else if (month==5)
    {
        if (day<21)
        {
            cout << "Your sign is the Taurus. Sounds kinda scary, dunnit?";
        }
            else
            {
                cout << "Your sign is the Gemini. That sounds cool I think.";
            }

    }
    else if (month==6)
    {
        if (day<22)
        {
            cout << "Your sign is the Gemini. That sounds cool I think.";
        }
            else
            {
                cout << "Your sign is Cancer. The good kind though, it's mine too.";
            }

    }
    else if (month==7)
    {
        if (day<23)
        {
            cout << "Your sign is Cancer. The good kind though, it's mine too.";
        }
            else
            {
                cout << "Your sign is the Leo. I don't know much about it, but it sounds good.";
            }

    }
    else if (month==8)
    {
        if (day<23)
        {
            cout << "Your sign is the Leo. I don't know much about it, but it sounds good.";
        }
            else
            {
                cout << "Your sign is the Virgo. You seriously can't make this stuff up.";
            }

    }
    else if (month==9)
    {
        if (day<23)
        {
            cout << "Your sign is the Virgo. You seriously can't make this stuff up.";
        }
            else
            {
                cout << "Your sign is the Libra. Like the books or what? I don't know.";
            }

    }
    else if (month==10)
    {
        if (day<23)
        {
            cout << "Your sign is the Libra. Like the books or what? I don't know.";
        }
            else
            {
                cout << "Your sign is the Scorpio. Don't sting me bro.";
            }

    }
    else if (month==11)
    {
        if (day<22)
        {
            cout << "Your sign is the Scorpio. Don't sting me bro.";
        }
            else
            {
                cout << "Your sign is the Sagittarius. It's alright if you can't spell it, me neither.";
            }

    }
    else if (month==12)
    {
        if (day<22)
        {
            cout << "Your sign is the Sagittarius. It's alright if you can't spell it, me neither.";
        }
            else
            {
                cout << "Your sign is the Capricorn. You'll have good fortune or something.";
            }

    }
    else
    {
        cout << "That is not a valid date. If it is then I'm sorry, I thought I was soul-stoned.";
    }
    cout << endl;

    cout << "Do you want to start over or end the program (type \"Restart\" or \"End\")?" << endl;
    cin >> endoftheline;
    if ((endoftheline=="Restart") || (endoftheline=="restart"))
    {
        Horoscopes();
    }
}


//Exercise 4 - Program
void Primes()
{
 int checkFlag;
 double n, i, checkVal;

 cout << "When the program runs, prime numbers will be shown below:" << endl;
 for (n=3; n<=100; n++)
 {
    checkFlag=1;
    for (i=2; i<n; i++)
    {
        checkVal=n/i;
        if (checkVal==(static_cast<int>(checkVal)))
        {
            checkFlag=0;
            break;
        }
    }
    if (checkFlag==1)
        cout << n << " is a prime number." << endl;
 }
}


//Exercise 5 - Program
void Density()
{
    int mass, volume;
    double density, waterdensity;

    cout << "This program will calculate whether a given object will sink or float." << endl;
    cout << "Start by typing the mass of the object in kilos: ";
    cin >> mass;
    cout << "Now type the volume of the object in cubic meters: ";
    cin >> volume;

    density=mass*volume;
    waterdensity=1260;

    cout << "The density of the object is " << density << " kilos per cubic meter." << endl;

    if (density>waterdensity)
    {
        cout << "Your object will sink." << endl;
    }
    else
    {
        cout << "Your object will float." << endl;
    }
}


int main()
{
    int x;

    cout << "Which program do you want to run?" << endl;
    cout << "Press 1 for Babylonian Algorithm." << endl;
    cout << "Press 2 for Treadmill/Pace calculation." << endl;
    cout << "Press 3 for Horoscopes program." << endl;
    cout << "Press 4 for Prime Numbers program." << endl;
    cout << "Press 5 for Density program." << endl;
    cout << "Input a number: ";

    cin >> x;

    switch (x)
    {
        case 1:
         Babylonian();
         break;

        case 2:
         Treadmill();
         break;

        case 3:
         Horoscopes();
         break;

        case 4:
         Primes();
         break;

        case 5:
         Density();
         break;

        default:
            cout << "Not a valid number.";
    }

    return 0;
}

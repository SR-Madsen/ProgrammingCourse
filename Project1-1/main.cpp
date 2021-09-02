#include <iostream>

using namespace std;

int main()
{
    int input1, input2, output_sum, output_product;

    cout << "This program will calculate the sum and product of two natural numbers of your choice." << endl;
    cout << "Type the first number and press enter: ";
    cin >> input1;
    cout << "Type the second number and press enter: ";
    cin >> input2;

    output_product = input1*input2;
    output_sum = input1+input2;

    cout << "The sum of your numbers is: " << output_sum << endl;
    cout << "The product of your numbers is: " << output_product << endl;

    return 0;
}

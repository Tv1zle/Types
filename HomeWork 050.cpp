
#include <iostream>

int main()
{
    double FirstNumber;
    std::cout << "First number = ";
    std::cin >> FirstNumber;


    double SecondNumber;
    std::cout << "Second number = ";
    std::cin >> SecondNumber;


    int SumOfIntegers = FirstNumber + SecondNumber;
    float SumOfFractions = FirstNumber + SecondNumber - SumOfIntegers;

    std::cout << "Sum of integers = " << SumOfIntegers << "\n";
    std::cout << "Sum of fractions = " << SumOfFractions * 100 << " or " << SumOfFractions << "\n";
}

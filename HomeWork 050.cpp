
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

//Task 2

#include <iostream>

int main()
{
    double Distance;
    std::cout << "Distance to airport (KM) = ";
    std::cin >> Distance;


    double Time;
    std::cout << "Time to get to airport (MIN) = ";
    std::cin >> Time;


    std::cout << "You must go at speed = " << Distance / Time << " (KM/H)";
}

//Task 3

#include <iostream>

int main()
{
    double TimeInSeconds;
    std::cout << "Time elapsed since the beginning of the working day (SEC) = ";
    std::cin >> TimeInSeconds;


    double AllTimeForOneDay = 8 * 60 * 60; //Так мы узнаем время всего рабочего дня в секундах.


    if (TimeInSeconds >= AllTimeForOneDay) {
        std::cout << "Go home, stalker.";
    }
    else {
        std::cout << "You have left = " << (AllTimeForOneDay - TimeInSeconds) / 60 / 60 << "\n";
    }
}

//Task 4

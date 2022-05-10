
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

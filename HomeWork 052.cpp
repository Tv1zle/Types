
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

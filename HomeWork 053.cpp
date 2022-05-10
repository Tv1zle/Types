

#include <iostream>

int main()
{
    double LaptopCost;
    std::cout << "Laptop cost = ";
    std::cin >> LaptopCost;


    double LaptopQuantity;
    std::cout << "Laptop quantity = ";
    std::cin >> LaptopQuantity;


    double LaptopPercentOfDiscount;
    std::cout << "Laptop percent of discount = ";
    std::cin >> LaptopPercentOfDiscount;


    std::cout << "Total amount = " << LaptopCost * LaptopQuantity / 100 * LaptopPercentOfDiscount - 0.01;
}

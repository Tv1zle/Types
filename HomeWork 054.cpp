
#include <iostream>

int main()
{
    double SizeFilm;
    std::cout << "Size of film (GB) = ";
    std::cin >> SizeFilm;


    double SpeedOfInternet;
    std::cout << "Speed of internet connection (B/S) = ";
    std::cin >> SpeedOfInternet;


    SizeFilm = SizeFilm * 1024 * 8;
    SizeFilm /= SpeedOfInternet;


    int Hours = SizeFilm / 3600;
    int Minutes = SizeFilm / 60 - Hours * 60;
    int Seconds = SizeFilm - Minutes * 60 - Hours * 3600;


    std::cout << "Movie download for " << Hours << " hours " << Minutes << " minutes " << Seconds << " seconds.";

}

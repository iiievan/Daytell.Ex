#include "class_time.h"


int main()
{
    Time t;

	std::cout << "The result after initialization (current time): \n"
              << " Hour: " << t.get_hour() << std::endl
              << " Minute: " << t.get_minute() << std::endl
              << " Second: " << t.get_second() << std::endl;

    t.set_time(17, 34,25);

	std::cout << "The result of setting all the correct values: \n"
              << " Hour: " << t.get_hour() << std::endl
              << " Minute: " << t.get_minute() << std::endl
              << " Second: " << t.get_second() << std::endl;

	std::cout << "The result of trying to set the wrong values : \n"
              << " Hour: " << t.get_hour() << std::endl
              << " Minute: " << t.get_minute() << std::endl
              << " Second: " << t.get_second() << std::endl;

    return 0; // exit the application
}

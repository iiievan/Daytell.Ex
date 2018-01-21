#include "class_time.h"


int main()
{
	Time t;
    bool time_renew = false;

    std::cout << "The result after initialization (current time): \n"
		      << "  Hour: " << t.get_hour() << std::endl
		      << "Minute: " << t.get_minute() << std::endl
		      << "Second: " << t.get_second() << std::endl;
		      
    while (true)
    {
        t.set_actual_time();        

        if (t.tick())
        {
            std::cout << "Current time: ";

            t.print_standart(); 

            std::cout << "\n";
        }
    }

	return 0; // exit the application
}

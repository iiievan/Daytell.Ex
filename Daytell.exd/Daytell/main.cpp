#include "class_time.h"


int main()
{
	const Time t(19, 33, 52);   // константный объект

    t.set_hour(20);
    t.set_minute(12);
    t.set_second(39);    

	return 0; // exit the application
}

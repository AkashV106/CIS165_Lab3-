#include <iostream>

int main()
{
    const int MINUTES_PER_HOUR = 60;
    int level_one_minutes = 78;
    int level_two_minutes = 144;
    int level_one_hours;
    int level_one_remaining;
    int level_two_hours;
    int level_two_remaining;
    int difference_minutes;
    int difference_hours;
    int difference_remaining;

    // integer division gives whole hours, % gives the leftover minutes
    level_one_hours = level_one_minutes / MINUTES_PER_HOUR;
    level_one_remaining = level_one_minutes % MINUTES_PER_HOUR;
    level_two_hours = level_two_minutes / MINUTES_PER_HOUR;
    level_two_remaining = level_two_minutes % MINUTES_PER_HOUR;

    // subtract first, then convert the difference
    difference_minutes = level_two_minutes - level_one_minutes;
    difference_hours = difference_minutes / MINUTES_PER_HOUR;
    difference_remaining = difference_minutes % MINUTES_PER_HOUR;

    std::cout << "Level 1 time: " << level_one_hours << " hours " << level_one_remaining << " minutes\n";
    std::cout << "Level 2 time: " << level_two_hours << " hours " << level_two_remaining << " minutes\n";
    std::cout << "Level 2 took " << difference_hours << " hours " << difference_remaining << " minutes longer than Level 1\n";

    return 0;
}

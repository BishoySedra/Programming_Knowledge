#include <iostream>
#include <iomanip>
#include "math.h"

using namespace std;

void weeksAndDays(int hours)
{
    double days = (double)hours / 24;
    double weeks = (double)days / 7;

    cout << fixed << setprecision(2) << weeks << " Weeks\n"
         << days << " Days\n";
}

int daysToSeconds(int days)
{
    return days * 24 * 60 * 60;
}

int hoursToSeconds(int hours)
{
    return hours * 60 * 60;
}

int minutesToSeconds(int minutes)
{
    return minutes * 60;
}

void secondsToDaysHoursMinutesSeconds(int totalSeconds)
{
    int secondsPerDay = 24 * 60 * 60;
    int secondsPerHour = 60 * 60;
    int secondsPerMinute = 60;

    int days = floor(totalSeconds / secondsPerDay);

    int rem = totalSeconds % secondsPerDay;

    int hours = floor(rem / secondsPerHour);

    rem %= secondsPerHour;

    int minutes = floor(rem / secondsPerMinute);

    rem %= secondsPerMinute;

    int seconds = rem;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds << "\n";
}

void taskDurationInSeconds(int days, int hours, int minutes, int seconds)
{
    int duration = daysToSeconds(days) + hoursToSeconds(hours) + minutesToSeconds(minutes) + seconds;
    cout << duration << " Seconds\n";
}



int main()
{
    secondsToDaysHoursMinutesSeconds(193535);
    // taskDurationInSeconds(2, 5, 45, 35);
    // weeksAndDays(365);
    system("pause>0");
    return 0;
}
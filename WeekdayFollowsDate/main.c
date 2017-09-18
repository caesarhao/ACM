#include <stdio.h>

#define MONTH_NUM (12)

#define DAYS_IN_WEEK (7)

int daysOfMonths[MONTH_NUM] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main()

{

    int startday = 1;

    int month = 1;

    int dayw = 1;

    int daym = 1;

    int matches = 0;

    int match = 0;

    for (startday = 1; startday <= DAYS_IN_WEEK; startday++)

    {

        matches = 0;

        match = 0;

        dayw = startday;

        for (month = 1; month <= MONTH_NUM; month++)

        {

            for (daym = 1; daym <= daysOfMonths[month-1]; daym++)

            {

                if (dayw == daym%10)

                {

                    match++;

                    if (DAYS_IN_WEEK == match){

                        matches++;

                        match = 0;

                    }
                }
                else
                {
                    match = 0;
                }
                dayw++;
                if (dayw > DAYS_IN_WEEK)
                    dayw = 1;
            }
        }
        printf("Start with %d has %d matches\n", startday, matches);
    }
    
    return 0;
}

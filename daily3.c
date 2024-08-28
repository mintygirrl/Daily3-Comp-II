#include <stdio.h>

/***********************************************************
Author: Fallon Weiss
Date: 1/24/24
Effort: 3 hours.
Purpose: To set up and check a bit notation, placing 1's in
the given spots.
***********************************************************/


void set_flag(int* pFlag_holder, int flag_position);
int check_flag(int flag_holder, int flag_position);

int main (int argc, char* argv[])
{
    int flag_holder = 0;
    int i;

    set_flag(&flag_holder, 3);
    set_flag(&flag_holder, 16);
    set_flag(&flag_holder, 31);

    for(i=31; i>=0; i--)
    {
        printf("%d", check_flag(flag_holder, i));
        if(i%4 == 0)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

void set_flag(int* pFlag_holder, int flag_position)
{
    int compare = 1 << flag_position;
    *pFlag_holder = *pFlag_holder | compare;
}


int check_flag(int flag_holder, int flag_position)
{
    int versus = flag_holder >> flag_position;
    int compare = 1 & versus;
    return compare;
}

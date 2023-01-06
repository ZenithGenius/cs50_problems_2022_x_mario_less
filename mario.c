#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    //only accept input in the range 1 to 8
    do
    {
        height = get_int("Enter the height : ");
    }
    while ((height < 1) || (height > 8));

    //Print the blocks
    for (int i = 1 ; i <= height ; i++)
    {
        //print spaces
        for (int j = i + 1 ; j <= height ; j++)
        {
            printf(" ");
        }
        //print hashes
        for (int j = 0 ; j < i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
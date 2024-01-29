/**
 ******************************************************************************
 * @file           : Application.c
 * @author         : ola ahmed
 * @brief          : Contains the functionality of my application
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */

/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    unsigned char x = 1;
    unsigned char y;
    x|=(1<<7);
    printf("set bit number 7= %i \n",x);
    x&=~(1<<7);
    printf("clear bit number 7=  %i \n",x);
    x^=(1<<7);
    printf("toggle bit number 7=  %i \n",x);
    y=(x&(1<<7)>>7);
    printf("bit number 7=  %i \n",y);
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      29jan2024           second task a
*/

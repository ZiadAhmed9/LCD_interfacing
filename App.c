 /******************************************************************************
 *
 * Module: App
 *
 * File Name: App.c
 *
 * Description: application layer code
 *
 * Author: Ziad Ahmed
 *
 *******************************************************************************/

#include "LCD.h"



int main(void)
{
	LCD_init(); /* initialize LCD */
	LCD_display_String_Row_Column(0,2,"My LCD Driver");
	LCD_display_String_Row_Column(1,3,"Embedded SW");
	_delay_ms(4000); /* wait four seconds */

	LCD_Clear(); /* clear the LCD display */
	LCD_displayString("Ziad Ahmed");


    while(1)
    {
		/* Note: we write the code before while(1) because we want to execute it only once */
    }

}

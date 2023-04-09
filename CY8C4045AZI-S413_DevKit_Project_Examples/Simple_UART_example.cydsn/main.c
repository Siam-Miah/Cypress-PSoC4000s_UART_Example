/* ========================================================================
 * Target device:    CY8C4045AZI-S413     
 * Development kit:  Cypress CY8CKIT-145-40XX PSOC 4000S pioneer kit
 * 
 * Author :          Siam Miah
 * Email contact:    siam_miah@hotmail.co.uk
 * Created On :      09/04/2023 
 * Last Modified:    09/04/2023
 * 
 * ------------------------------------------------------------------------
 * Description:      Simple serial-UART exercise to print "Hello World" 
 *            
 * Author Comments:
 * ========================================================================*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_Start(); //Enable UART component 

    for(;;)
    {
        /* Place your application code here. */
        UART_UartPutString("Hello World\n"); //print over serial-UART
        CyDelay(1000);                        
    }
}

/* [] END OF FILE */

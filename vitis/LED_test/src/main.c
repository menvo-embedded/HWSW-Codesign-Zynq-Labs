#include "xparameters.h"
#include "xgpio.h"
#include "xstatus.h"
#include "xil_printf.h"
#include "sleep.h"

#define GPIO_DEVICE_ID XPAR_AXI_GPIO_0_DEVICE_ID
#define LED_CHANNEL 1

int main()
{
    XGpio Gpio;
    int Status;

    xil_printf("Start LED test\r\n");

    Status = XGpio_Initialize(&Gpio, GPIO_DEVICE_ID);

    if (Status != XST_SUCCESS)
    {
        xil_printf("GPIO initialization failed\r\n");
        return XST_FAILURE;
    }

    // 0 = output, 1 = input
    XGpio_SetDataDirection(&Gpio, LED_CHANNEL, 0x00);

    while (1)
    {
        XGpio_DiscreteWrite(&Gpio, LED_CHANNEL, 0xAA);
        sleep(1);

        XGpio_DiscreteWrite(&Gpio, LED_CHANNEL, 0x55);
        sleep(1);
    }

    return 0;
}

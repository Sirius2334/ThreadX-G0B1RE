#include "mainTask.h"
#include "RTT_LOG.h"
#include "rgb.h"
#include "tim.h"

VOID mainTask(ULONG id)
{
    (void)id;
    // TIM1->CCR2 = 40;
    // HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);

    // WS_WriteAll_RGB(18, 0, 0);
    WS281x_SetPixelRGB(0, 18, 0, 0);
    WS_Load();
    tx_thread_sleep(1000);
    // WS_WriteAll_RGB(0, 18, 0);
    WS281x_SetPixelRGB(0, 0, 18, 0);
    WS_Load();
    tx_thread_sleep(1000);
    // WS_WriteAll_RGB(0, 0, 18);
    WS281x_SetPixelRGB(0, 0, 0, 18);
    WS_Load();
    tx_thread_sleep(1000);
    WS_CloseAll();

    while (1)
    {
        // SEGGER_RTT_printf(0, "pi = %f\n", pi);

        tx_thread_sleep(1000);
    }
}

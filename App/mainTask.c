#include "mainTask.h"
#include "RTT_LOG.h"

VOID mainTask(ULONG id)
{
    (void)id;

    // float pi = 3.14f;
    // float pi = 3.14159265358979f;
    float pi = 3.12595f;

    // RTT_LOG_INFO("hello, %.3f", 1.2);
    // RTT_LOG_ERROR("hello, %.3f", 1.2);
    // RTT_LOG_WARN("hello, %.3f", 1.2);
    // RTT_LOG_DEBUG("hello, %.2f", 1.2);

    // RTT_LOG_INFO("   %2d        %5d      %5d       %5d      %s\r\n",
    //              mainTaskHandle.tx_thread_priority,
    //              mainTaskHandle.tx_thread_stack_size,
    //              (int)mainTaskHandle.tx_thread_stack_end - (int)mainTaskHandle.tx_thread_stack_ptr,
    //              (int)mainTaskHandle.tx_thread_stack_end - (int)mainTaskHandle.tx_thread_stack_highest_ptr,
    //              mainTaskHandle.tx_thread_name);

    SEGGER_RTT_printf(0, "pi = %.2f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.3f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.4f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.5f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.6f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.7f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.8f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.9f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.10f\r\n", pi);
    SEGGER_RTT_printf(0, "pi = %.11f\r\n", pi);

    SEGGER_RTT_printf(0, "-pi = %f\r\n", -pi);
    SEGGER_RTT_printf(0, "-pi = %03.5f\r\n", -pi);
    SEGGER_RTT_printf(0, "-pi = %3.5lf\r\n", -pi);

    while (1)
    {

        tx_thread_sleep(1000);
    }
}

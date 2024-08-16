#include "mainTask.h"
#include "RTT_LOG.h"

VOID mainTask(ULONG id)
{
    (void)id;

    float data_float = 1234.12595f;
    double data_double = 1234.12595f;

    float short_pi = 3.14f;
    float pi = 3.1415926535f;

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

    SEGGER_RTT_printf(0, "data_float = %.0f\n", data_float);
    SEGGER_RTT_printf(0, "data_float = %.1f\n", data_float);
    SEGGER_RTT_printf(0, "data_float = %.2f\n", data_float);
    SEGGER_RTT_printf(0, "data_float = %.3f\n", data_float);
    SEGGER_RTT_printf(0, "data_float = %.4f\n", data_float);
    SEGGER_RTT_printf(0, "data_float = %.5f\n", data_float);
    SEGGER_RTT_printf(0, "data_float = %.6f\n", data_float);
    SEGGER_RTT_printf(0, "data_float = %.7f\n", data_float);
    SEGGER_RTT_printf(0, "-data_float = %f\n", -data_float);
    SEGGER_RTT_printf(0, "-data_float = %03.5f\n", -data_float);
    SEGGER_RTT_printf(0, "-data_float = %6.5lf\n", -data_float);

    SEGGER_RTT_printf(0, "data_double = %.0lf\n", data_double);
    SEGGER_RTT_printf(0, "data_double = %.1lf\n", data_double);
    SEGGER_RTT_printf(0, "data_double = %.2lf\n", data_double);
    SEGGER_RTT_printf(0, "data_double = %.3lf\n", data_double);
    SEGGER_RTT_printf(0, "data_double = %.4lf\n", data_double);
    SEGGER_RTT_printf(0, "data_double = %.5lf\n", data_double);
    SEGGER_RTT_printf(0, "data_double = %.6lf\n", data_double);
    SEGGER_RTT_printf(0, "data_double = %.7lf\n", data_double);
    SEGGER_RTT_printf(0, "-data_double = %lf\n", -data_double);
    SEGGER_RTT_printf(0, "-data_double = %03.5lf\n", -data_double);
    SEGGER_RTT_printf(0, "-data_double = %6.5lf\n", -data_double);

    SEGGER_RTT_printf(0, "pi = %f\n", short_pi);
    SEGGER_RTT_printf(0, "pi = %f\n", pi);

    while (1)
    {
        SEGGER_RTT_printf(0, "pi = %f\n", pi);

        tx_thread_sleep(1000);
    }
}

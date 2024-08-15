#include "mainTask.h"
#include "RTT_LOG.h"

VOID mainTask(ULONG id)
{
    (void)id;

    // RTT_LOG_INFO("hello, %.3f", 1.2);
    // RTT_LOG_ERROR("hello, %.3f", 1.2);
    RTT_LOG_WARN("hello, %.3f", 1.2);
    RTT_LOG_DEBUG("hello, %.2f", 1.2);

    RTT_LOG_INFO("   %2d        %5d      %5d       %5d      %s\r\n",
                 mainTaskHandle.tx_thread_priority,
                 mainTaskHandle.tx_thread_stack_size,
                 (int)mainTaskHandle.tx_thread_stack_end - (int)mainTaskHandle.tx_thread_stack_ptr,
                 (int)mainTaskHandle.tx_thread_stack_end - (int)mainTaskHandle.tx_thread_stack_highest_ptr,
                 mainTaskHandle.tx_thread_name);
    while (1)
    {

        tx_thread_sleep(1000);
    }
}

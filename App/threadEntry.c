#include "threadEntry.h"

#include "RTT_LOG.h"

TX_THREAD mainTaskHandle;

VOID stackOverflowHandler(TX_THREAD *thread_ptr)
{
    RTT_LOG_ERROR("Stack of \"%s\" over flow.", thread_ptr->tx_thread_name);
}

UINT thread_init(VOID *memory_ptr)
{
    UINT ret = TX_SUCCESS;
    TX_BYTE_POOL *byte_pool = (TX_BYTE_POOL *)memory_ptr;

    /* Allocate the stack for main Task  */
    CHAR *TaskStack;
    if (tx_byte_allocate(byte_pool,
                         (VOID **)&TaskStack,
                         mainTask_STACK_SIZE,
                         TX_NO_WAIT) != TX_SUCCESS)
    {
        return TX_POOL_ERROR;
    }

    /* Create main Task.  */
    if (tx_thread_create(&mainTaskHandle,     // 任务指针
                         "mainTask",          // 任务名称
                         mainTask,            // 任务入口函数
                         0,                   // 任务入口参数
                         TaskStack,           // 任务栈的起始地址
                         mainTask_STACK_SIZE, // 内存区域大小 K
                         20,                  // 优先级20 (0~TX_MAX_PRIORITES-1)0  表示最高优先级
                         20,                  // 禁用抢占的最高优先级
                         TX_NO_TIME_SLICE,    // 时间切片值范围为 1 ~ 0xFFFF(TX_NO_TIME_SLICE = 0)
                         TX_AUTO_START        // 线程自动启动
                         ) != TX_SUCCESS)
    {
        return TX_THREAD_ERROR;
    }

    tx_thread_stack_error_notify(stackOverflowHandler);

    return ret;
}
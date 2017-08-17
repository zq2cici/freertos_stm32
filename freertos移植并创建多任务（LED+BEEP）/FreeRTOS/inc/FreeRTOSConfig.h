/*
    FreeRTOS V9.0.0 - Copyright (C) 2016 Real Time Engineers Ltd.
    All rights reserved

    VISIT http://www.FreeRTOS.org TO ENSURE YOU ARE USING THE LATEST VERSION.

    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation >>>> AND MODIFIED BY <<<< the FreeRTOS exception.

    ***************************************************************************
    >>!   NOTE: The modification to the GPL is included to allow you to     !<<
    >>!   distribute a combined work that includes FreeRTOS without being   !<<
    >>!   obliged to provide the source code for proprietary components     !<<
    >>!   outside of the FreeRTOS kernel.                                   !<<
    ***************************************************************************

    FreeRTOS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE.  Full license text is available on the following
    link: http://www.freertos.org/a00114.html

    ***************************************************************************
     *                                                                       *
     *    FreeRTOS provides completely free yet professionally developed,    *
     *    robust, strictly quality controlled, supported, and cross          *
     *    platform software that is more than just the market leader, it     *
     *    is the industry's de facto standard.                               *
     *                                                                       *
     *    Help yourself get started quickly while simultaneously helping     *
     *    to support the FreeRTOS project by purchasing a FreeRTOS           *
     *    tutorial book, reference manual, or both:                          *
     *    http://www.FreeRTOS.org/Documentation                              *
     *                                                                       *
    ***************************************************************************

    http://www.FreeRTOS.org/FAQHelp.html - Having a problem?  Start by reading
    the FAQ page "My application does not run, what could be wrong?".  Have you
    defined configASSERT()?

    http://www.FreeRTOS.org/support - In return for receiving this top quality
    embedded software for free we request you assist our global community by
    participating in the support forum.

    http://www.FreeRTOS.org/training - Investing in training allows your team to
    be as productive as possible as early as possible.  Now you can receive
    FreeRTOS training directly from Richard Barry, CEO of Real Time Engineers
    Ltd, and the world's leading authority on the world's leading RTOS.

    http://www.FreeRTOS.org/plus - A selection of FreeRTOS ecosystem products,
    including FreeRTOS+Trace - an indispensable productivity tool, a DOS
    compatible FAT file system, and our tiny thread aware UDP/IP stack.

    http://www.FreeRTOS.org/labs - Where new FreeRTOS products go to incubate.
    Come and try FreeRTOS+TCP, our new open source TCP/IP stack for FreeRTOS.

    http://www.OpenRTOS.com - Real Time Engineers ltd. license FreeRTOS to High
    Integrity Systems ltd. to sell under the OpenRTOS brand.  Low cost OpenRTOS
    licenses offer ticketed support, indemnification and commercial middleware.

    http://www.SafeRTOS.com - High Integrity Systems also provide a safety
    engineered and independently SIL3 certified version for use in safety and
    mission critical applications that require provable dependability.

    1 tab == 4 spaces!
*/

/*
 *=================================== ����ע�� =======================================
 *
 * ���ߣ����� Fire
 * ��̳��www.firebbs.cn
 * �Ա���www.fire-stm32.taobao.com
 * 
 * FreeRTOSConfig.h���ͷ�ļ���������FreeRTOS�Ĺ��ܣ����ǲ���ȫ�棬ʣ�µ��������ܿ���
 * ��FreeRTOS.h���ͷ�ļ����ã�����ʹ�ܻ����ź�����ʹ�ܵݹ��ź�����ʹ���¼���־����Щ
 * �ں˶���Ĺ���ʱ������FreeRTOS.h���ͷ�ļ��������õġ����ǣ�Ϊ�˷������ã����ǿ���
 * ͳһ��FreeRTOSConfig.h���ã�����Ҫ�õ�ʲô���ܾͰѶ�Ӧ�ĺ���FreeRTOSConfig.h��ʹ�ܡ�
 *====================================================================================
 */

#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *
 * See http://www.freertos.org/a00110.html.
 *----------------------------------------------------------*/


#define configCPU_CLOCK_HZ			( ( unsigned long ) 180000000 )	/* ϵͳʱ�ӣ���λΪHZ */
#define configTICK_RATE_HZ			( ( TickType_t ) 1000 )         /* SysTick�ж����ڣ���λΪHZ��1000HZ��1ms�ж�һ�� */

/*================================================================================================================================================================
 ********************************************************************* FreeRTOS�������ÿ�ʼ **********************************************************************
 * 
 * ��Щ�궼������FreeRTOS.h���ͷ�ļ����濪�����������ͷ�ļ�����ĺ�ǳ��࣬���������鷳��Ϊ�˷��㣬���ǿ���ͳһ��FreeRTOSConfig.h���ͷ�ļ��������á�
 * Ŀǰֻ�����˳��õ����ã�ʣ�µ��������ܵ���Ҫ�õ�ʱ�������ü��ɡ�
 *
 *===============================================================================================================================================================*/
#define configUSE_PREEMPTION		1                               /* ʹ����ռʽ���ȣ������ú���ʽ���ȣ�Ĭ�����Ƕ�������ռʽ */
#define configUSE_IDLE_HOOK			0                               /* ���������Ӻ������������Ϊ1��������Ӻ�����Ҫ�û��Լ���д */
#define configUSE_TICK_HOOK			0                               /* ʱ�������Ӻ������������Ϊ1��������Ӻ�����Ҫ�û��Լ���д*/

#define configMAX_PRIORITIES		( 5 )                           /* ������ʹ��������ȼ�����������Խ�����ȼ�Խ�ߣ���ΧΪ��0~configMAX_PRIORITIES-1
                                                                   ��͵�0��ϵͳ�������������ÿ����������ȼ�������ͬ */
#define configMINIMAL_STACK_SIZE	( ( unsigned short ) 128 )
#define configTOTAL_HEAP_SIZE		( ( size_t ) ( 75 * 1024 ) )    /* �ѿռ��С���ں��ڴ������ֶ���ʱ��Ҫ�õ�����λΪ�ֽ� */
#define configMAX_TASK_NAME_LEN		( 16 )                        /* �������Ƶĳ��ȣ����ַ����ĳ��� */
#define configUSE_TRACE_FACILITY	0
#define configUSE_16_BIT_TICKS		0                             /* SysTick Counter�Ŀ�ȣ�0��ʾ32bit��1��ʾ16bit��STM32�õ���32bit */
#define configIDLE_SHOULD_YIELD		1                             /* �������л�ǿ��ʹ�ܣ�����ǰ����ִ�����֮����ʣ���ʱ��Ƭ������ǿ���Լ�����
                                                                   ʣ���ʱ��Ƭ��Ȼ��ִ���������л�ȥִ������������*/


/* 
 * ����ʽ�������� 
 * ����ʽ������Ϊ���ܵͣ���Դ�ٵĴ�������Ƶģ��ǳ��ǳ����õ�����STM32���ָ����ܣ���Դ��Ĵ��������ǲ���ʹ�õġ�
 * ����ʽ������FreeRTOS-V9.0.0�汾֮�󲻻ᱻɾ��������Ҳ������£�������ô���š�
 */
#define configUSE_CO_ROUTINES 		0
#define configMAX_CO_ROUTINE_PRIORITIES ( 2 )

/* �ݹ黥���ź������� */
#define configUSE_RECURSIVE_MUTEXES 0

/* �����ź������� */
#define configUSE_MUTEXES 0

/* �����ź������� */
#define configUSE_COUNTING_SEMAPHORES 0

/* �����ʱ������ */
#define configUSE_TIMERS				1
#define configTIMER_TASK_PRIORITY		( 2 )
#define configTIMER_QUEUE_LENGTH		10
#define configTIMER_TASK_STACK_DEPTH	( configMINIMAL_STACK_SIZE * 2 )

/* ����֪ͨ����
 * �������ź�����������Ϣ ������������е�����
 * ������Ŀ��ƿ�TCB������һ��32bit�ı�����������Ϣ
 */
#define configUSE_TASK_NOTIFICATIONS 1

/* ����ں˶������� */
#define configUSE_QUEUE_SETS 0

/*
 * 1��ʹ�ܺ���
 * 0��ʧ�ܺ���
 */
#define INCLUDE_vTaskPrioritySet		      1
#define INCLUDE_uxTaskPriorityGet		      1
#define INCLUDE_vTaskDelete				        1
#define INCLUDE_vTaskCleanUpResources	    1
#define INCLUDE_vTaskSuspend			        1
#define INCLUDE_vTaskDelayUntil			      1
#define INCLUDE_vTaskDelay				        1  /* vTaskDelay Ϊ������ʱ���������ã���λΪms */

/*================================================================================================================================================================
 ********************************************************************* FreeRTOS�������ý��� **********************************************************************
 *===============================================================================================================================================================*/
 
 
/*======================================== STM32ʹ���˶���bit��������ȼ� ========================================*/
/*
 * Cortex-M�ں�ʹ��8bit���������ȼ�������STM32ֻʹ���˸�4bit����ֵԽС�����ȼ�Խ�ߡ�
 * �����Ĵ�������д��ֵ���õ�ʱ���ǰ���8bit��д�ģ���������д��ʱ����Ҫ����ת������ʽΪ��
 * ((priority << (8 - __NVIC_PRIO_BITS)) & 0xff)�����е�priority�����������õ����������ȼ�
 */
#ifdef __NVIC_PRIO_BITS  /* __NVIC_PRIO_BITS �Ѿ���stm32f4xx.h���涨��Ϊ4 */
	#define configPRIO_BITS       		__NVIC_PRIO_BITS
#else
	#define configPRIO_BITS       		4
#endif

/*============================================== SysTick�ж����ȼ����� ============================================*/
/*
 * �����Ĵ�������д��ֵ���õ�ʱ���ǰ���8bit��д�ģ���������д��ʱ����Ҫ����ת������ʽΪ��
 * ((priority << (8 - __NVIC_PRIO_BITS)) & 0xff)�����е�priority�����������õ����������ȼ������������ʽ֮��õ�����
 * ���������꣺configKERNEL_INTERRUPT_PRIORITY
 * SysTick�����ȼ�����һ������Ϊ��ͣ���0xf �������������ϵͳ��ʵʱ��Ӧ���������������ⲿ�жϿ��Լ�ʱ�ĵõ���Ӧ��
 */
#define configLIBRARY_LOWEST_INTERRUPT_PRIORITY			0xf
#define configKERNEL_INTERRUPT_PRIORITY 		( configLIBRARY_LOWEST_INTERRUPT_PRIORITY << (8 - configPRIO_BITS) )

/*===========================================�����ε��ж����ȼ�����====================================================*/
/*
 * ��������STM32������Ĵ���basepri�Ĵ�����ֵ�����������жϣ�������basepriֵ�����ȼ����жϽ���ȫ�����Ρ�basepriֻ��4bit��Ч��
 * Ĭ��ֻΪ0����ȫ���ж϶�û�б����Ρ�configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY����Ϊ��5����˼�����ж����ȼ�����5���ж϶������Ρ�
 * �������úõ����ȼ�д���Ĵ�����ʱ���ǰ���8bit��д�ģ���������д��ʱ����Ҫ����ת������ʽΪ��
 * ((priority << (8 - __NVIC_PRIO_BITS)) & 0xff)�����е�priority�����������õ����������ȼ������������ʽ֮��õ��������������꣺
 * configMAX_SYSCALL_INTERRUPT_PRIORITY
 *
 * ��FreeRTOS�У����ж���ͨ������basepri�Ĵ�����ʵ�ֵģ��ص����ж������õ�basepri��ֵ������С��basepriֵ��
 * �ж�FreeRTOS�ǹز����ģ��������ĺô��ǿ���ϵͳ����߿�����Ϊ�Ŀ�����Щ�ǳ���Ҫ���жϲ��ܱ��رգ��ڽ�Ҫ�Ĺ�ͷ���뱻��Ӧ��
 * ����UCOS�У����ж���ͨ������PRIMASK��ʵ�ֵģ�PRIMASK��һ����1�Ķ�����λ��д1����ܳ���NMI��Ӳ fault�������жϡ���UCOS�ر�
 * �ж�֮�󣬼�ʹ������ϵͳ����Ƶķǳ��������ж����˶�����������Ӧ����Ӵ����ж��ӳٵ�ʱ�䣬������������صĳ��ϣ��Ǻ������ͦ���ء�
 * ���UCOS�Ĺ��жϵ���ƣ�FreeRTOS��������Ե����Ի��ܶࡣ
 *
 */
#define configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY	5
#define configMAX_SYSCALL_INTERRUPT_PRIORITY 	( configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY << (8 - configPRIO_BITS) )

/*
 * �������ã�һ����Ե�ʱ���ã�������ʱ����
 */
#define configASSERT( x ) if( ( x ) == 0 ) { taskDISABLE_INTERRUPTS(); for( ;; ); }	
	

/*=================================== SVC��PendSV �� SysTick �жϷ����������� ========================================*/
/*
 * ����ֲFreeRTOS��ʱ����Ҫ�õ�STM32�������жϣ��ֱ���SVC,PendSV��SysTick���������ж���������
 * ��������ֱַ��ǣ�SVC_Handler��PendSV_Handler��SysTick_Handler���������ļ�:startup_stm32f10x_hd.s�У�
 * 
 * ����port.c����д���������жϵķ����������Ƹ���������������Ʋ�һ����Ϊ���ж���Ӧ֮������ȷ��ִ��port.c
 * ����д�õ��жϷ�������������Ҫͳһ��������жϷ����������֡�
 *
 * Ϊ��ʵ�����Ŀ�ģ����������ַ�����
 * 1���������ļ��������������������ָĳɸ�port.c������жϷ�������һ����
 * 2����port.c������жϷ��������ĳɸ������ļ�������ж����������������һ����
 *
 * ����Ϊ�˱��������ļ��������ԣ�����ͳһ�޸�port.c������жϺ���������������������궨�弴�ɡ�
 * �������stm32f10x_it.c������ʵ�����������жϷ������Ķ���Ļ�����ôΪ�˱����port.c������ظ����壬Ӧ��
 * ��stm32f4xx_it.c�����ע�͵���
 */
#define vPortSVCHandler SVC_Handler
#define xPortPendSVHandler PendSV_Handler
#define xPortSysTickHandler SysTick_Handler

#endif /* FREERTOS_CONFIG_H */


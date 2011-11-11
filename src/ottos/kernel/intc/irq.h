/*
 * InterruptHandler.h
 *
 *  Created on: 07.11.2011
 *      Author: Thomas
 */

#ifndef INTERRUPTHANDLER_H_
#define INTERRUPTHANDLER_H_

#include <ottos/const.h>

// flag to check if the interrupt is called the first time
extern int irq_started;

#pragma INTERRUPT(handle_irq, IRQ)
EXTERN void irq_handle();

#pragma INTERRUPT(handle_swi, SWI)
EXTERN void irq_handle_swi(unsigned r0, unsigned r1, unsigned r2, unsigned r3);

#endif /* INTERRUPTHANDLER_H_ */

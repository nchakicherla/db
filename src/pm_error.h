#ifndef PM_ERROR_H
#define PM_ERROR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "pm_memory.h"
#include "pm_string.h"

typedef struct PM_Maybe_Return {
	int32_t code;
	void* data;
} *pm_maybeR;

typedef struct PM_Message {
	int32_t code;
	char* msg;
	char* fn;
} *pm_msgR;

pm_maybeR
pm_new_maybe(int32_t code, void* data);

void
pm_free_maybe(pm_maybeR *pm_maybeRR);

pm_msgR
pm_new_msg(int32_t code, char* msg, const char* fn);

void
pm_free_msg(pm_msgR *pm_msgRR);

#endif // PM_ERROR_H
 /* 
  * UAE - The Un*x Amiga Emulator
  * 
  * Miscellaneous machine dependent support functions and definitions
  *
  * Copyright 1996 Bernd Schmidt
  */

#include "sysconfig.h"
#include "sysdeps.h"

#include "config.h"
#include "options.h"
#include "m68k.h"

struct flag_struct regflags;

int fast_memcmp(const void *foo, const void *bar, int len)
{
	return memcmp(foo, bar, len);
}

int memcmpy(void *foo, const void *bar, int len)
{
        // From https://github.com/sasq64/droidsound/blob/master/jni/UADEPlugin/uade/machdep/support.c
        int differs = memcmp(foo, bar, len);
        memcpy(foo, bar, len);
        return differs;
}

void machdep_init (void)
{
}

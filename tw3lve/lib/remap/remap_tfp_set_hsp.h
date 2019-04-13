//
//  remap_tfp_set_hsp.h
//  tw3lve
//
//  Created by Tanay Findley on 4/9/19.
//  Copyright © 2019 Tanay Findley. All rights reserved.
//

#ifndef remap_tfp_set_hsp_h
#define remap_tfp_set_hsp_h


#define __FILENAME__ (__builtin_strrchr(__FILE__, '/') ? __builtin_strrchr(__FILE__, '/') + 1 : __FILE__)
#define _assert(test, message, fatal) do \
if (!(test)) { \
int saved_errno = errno; \
LOGME("__assert(%d:%s)@%s:%u[%s]", saved_errno, #test, __FILENAME__, __LINE__, __FUNCTION__); \
} \
while (false)

#include <stdio.h>

extern int F_OFFS;
void remap_tfp0_set_hsp4(mach_port_t *port);
uint64_t get_address_of_port(pid_t pid, mach_port_t port);
uint64_t get_proc_struct_for_pid(pid_t pid);

#endif /* remap_tfp_set_hsp_h */

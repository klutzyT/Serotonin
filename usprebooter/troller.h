//
//  troller.h
//  usprebooter
//
//  Created by LL on 29/11/23.
//
#include <stdbool.h>
#include <Foundation/Foundation.h>
#ifndef troller_h
#define troller_h
xpc_connection_t
xpc_connection_create_mach_service_compat(const char *name, dispatch_queue_t targetq, uint64_t flags)
asm("_xpc_connection_create_mach_service");
int userspaceReboot(void);
int go(bool isBeta, NSString* argument);
int get_boot_manifest_hash(char hash[97]);
char* return_boot_manifest_hash_main(void);
#endif /* troller_h */

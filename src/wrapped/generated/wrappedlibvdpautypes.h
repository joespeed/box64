/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.18) *
 *******************************************************************/
#ifndef __wrappedlibvdpauTYPES_H_
#define __wrappedlibvdpauTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFpipp_t)(void*, int32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(vdp_device_create_x11, iFpipp_t)

#endif // __wrappedlibvdpauTYPES_H_

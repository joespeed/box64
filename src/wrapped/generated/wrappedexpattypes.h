/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.1.14) *
 *******************************************************************/
#ifndef __wrappedexpatTYPES_H_
#define __wrappedexpatTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpp_t)(void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(XML_SetCharacterDataHandler, vFpp_t) \
	GO(XML_SetElementHandler, vFppp_t)

#endif // __wrappedexpatTYPES_H_
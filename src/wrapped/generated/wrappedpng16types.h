/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.1.14) *
 *******************************************************************/
#ifndef __wrappedpng16TYPES_H_
#define __wrappedpng16TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpp_t)(void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef void* (*pFpppp_t)(void*, void*, void*, void*);
typedef void (*vFppppp_t)(void*, void*, void*, void*, void*);
typedef void* (*pFppppppp_t)(void*, void*, void*, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(png_set_read_user_transform_fn, vFpp_t) \
	GO(png_set_read_fn, vFppp_t) \
	GO(png_set_error_fn, vFpppp_t) \
	GO(png_set_write_fn, vFpppp_t) \
	GO(png_create_read_struct, pFpppp_t) \
	GO(png_set_progressive_read_fn, vFppppp_t) \
	GO(png_create_read_struct_2, pFppppppp_t) \
	GO(png_create_write_struct_2, pFppppppp_t)

#endif // __wrappedpng16TYPES_H_
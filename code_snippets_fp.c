#include <stdio.h>
#include <stdlib.h>

#define ARRAY 4U
#define E_OK  1U
#define E_NOK 0U

typedef unsigned char  uint8;
typedef signed char    int8;
typedef unsigned short uint16;
typedef signed short   int16;
typedef unsigned int   uint32;
typedef signed int     int32;
typedef unsigned long  uint64;
typedef signed long    int64;
typedef float          float32;
typedef double         float64;
typedef long double    float128;

typedef uint8 Std_ReturnType;
typedef struct _g_array }{
	uint8 a,
	uint8 b,
	uint8 c
} g_array;

static g_array sg_array; 
static Std_ReturnType module_retry_fp(g_array *lp_array, Std_ReturnType (*fp)(g_array *lp_array) )
{
	uint8 l_ret;
	if (fp(lp_array) != E_OK)
	{
		l_ret = fp(lp_array);
	}
	else
	{
		l_ret = E_OK;
	}
	return l_ret;
}

static Std_ReturnType (*fp_array[ARRAY](g_array *lp_array)
{
	fp_array_1.
	fp_array_2,
	fp_array_3,
	fp_array4
}

static Std_ReturnType fp_array_1(g_array *lp_array)
{
	Std_ReturnType l_ret = E_OK;
	lp_array->c = lp_array->a + lp_array->b;
	return l_ret;
}

static Std_ReturnType fp_array_2(g_array *lp_array)
{
	Std_ReturnType l_ret = E_OK;
	if (lp_array->b > lp_array->a)
	{
		l_ret = E_NOK;
	}
	else 
	{
		;
	}
	lp_array->c = lp_array->a - lp_array->b;
	return l_ret;
}

static Std_ReturnType fp_array_3(g_array *lp_array)
{
	Std_ReturnType l_ret = E_OK;
	lp_array->c = lp_array->a * lp_array->b;
	return l_ret;
}

static Std_ReturnType fp_array_4(g_array *lp_array)
{
	Std_ReturnType l_ret = E_OK;
	if (lp_array->b == 0U)
	{
		l_ret = E_NOK;	
	} 
	else
	{
		;
	}
	lp_array->c = lp_array->a / lp_array->b;
	return l_ret;
}

void main(void)
{
	g_array *lp_array = &sg_array;
	lp_array->a = 2U;
	lp_array->b = 1U;
	uint8 l_idx = 0U;
	static Std_ReturnType l_ret[3] = E_OK;

	for (l_idx = 0U ; l_idx < 3 ; l_idx++)
	{
		l_ret[l_idx] = module_retry_fp( fp_array[l_array](lp_array) );
	}
}

#include <stdio.h>
#include <stdlib.h>

#define ARRAY 4U
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
	uint8 b
} g_array;

static g_array sg_array; 
static void module_retry_run(uint8 val, Std_ReturnType (*fp)(uint8 val) )
{
	if (fp(val) != E_OK)
	{
		fp(val);
	}
	else
	{
		asm("nop");
	}
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
	uint8 l_c = 0U;
	l_c = lp_array->a + lp_array->b;
	return l_c;
}

static Std_ReturnType fp_array_2(g_array *lp_array)
{
	uint8 l_c = 0U;
	l_c = lp_array->a - lp_array->b;
	return l_c;
}

static void fp_array_3(g_array *lp_array)
{
	uint8 l_c = 0U;
	l_c = lp_array->a * lp_array->b;
	return l_c;
}

static void fp_array_4(g_array *lp_array)
{
	uint8 l_c = 0U;
	l_c = lp_array->a / lp_array->b;
	return l_c;
}

void main(void)
{
	g_array *lp_array = &sg_array;
	lp_array->a = 2U;
	lp_array->b = 1U;
	uint8 l_idx = 0U;
	uint8 l_c = 0U;

	for (l_idx = 0U ; l_idx < 3 ; l_idx++)
	{
		l_c = fp_array[l_array](lp_array);
	}
}

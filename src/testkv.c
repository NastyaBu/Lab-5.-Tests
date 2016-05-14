#include <math.h>
#include "testkv.h"

float testkv(float a, float b, float c, float *k1, float *k2)

{
    if ((a == 0) || ((a == 0) && (b == 0)) || ((a == 0) && (b == 0) && (c == 0)))
    		return INVALID_ARGUMENTS;
    		
    float d;
    d = b * b - 4 * a * c;

    if (d == 0)
    {
        *k1 = -b / (2 * a);
        return FOUND_1_ROOT;
	}
      
    if (d > 0)
    {
    	*k1 = (-b + sqrt(d)) / (2 * a);
        *k2 = (-b - sqrt(d)) / (2 * a);   	
    	return FOUND_2_ROOT;
    }
    
    return ROOT_NOT_FOUND;
}
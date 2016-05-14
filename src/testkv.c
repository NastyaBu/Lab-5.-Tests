#include "testkv.h"

int testkv()
    float a = 0.0, b = 0.0, c = 0.0;
    float d = 0.0;
    float k1 = 0.0;
    float k2 = 0.0;
{
    if ((a == 0) || ((a == 0)) || ((a == 0) && (b == 0) && (c == 0)))
    		return INVALID_ARGUMENTS;
    		
    d = b * b - 4 * a * c;

    if (d == 0)
    {
        k1 = -b / (2 * a);
        return FOUND_1_ROOT;
	}
    
    if (d < 0)
    {
        return ROOT_NOT_FOUND;
    }

    if (d > 0)
    {
    	k1 = (-b + sqrt(d)) / (2 * a);
        k2 = (-b - sqrt(d)) / (2 * a);   	
    		return FOUND_2_ROOT;
    }

    return 0;
}

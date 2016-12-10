/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int hi = n-1, lo = 0, mid;
    
    // checking for negative needle
    
    if (value<0)
    {
        return false;
    }
    
    // implementing binary
    
    while (lo <= hi)
    {
        mid = (hi +lo)/2;
        if (value > values[mid])
        {
            lo = mid+1;
        }
        else if (value < values[mid])
        {
            hi = mid-1;
        }
        else
        {
            return true;
        }
    }
    return false;
}
/**
 * Sorts array of n values.
 */

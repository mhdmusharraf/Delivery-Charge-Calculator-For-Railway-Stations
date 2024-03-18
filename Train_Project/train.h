#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

int DistanceRange(int d, int size, int* arr)
{
    for (int i = 0; i < size; i++)
    {
        if (d <= arr[i])
        {
            d = arr[i];
            break;
        }
    }
    return d;
}




int WeightRange(int w, int size, int* arr)
{
    for (int j = 0; j < size; j++)
    {
        if (w <= arr[j])
        {
            w = arr[j];
            break;
        }
    }
    
    return w;
}

float Calculate_Charge(int a, double b, int c, float d)
{
    return ((a * b * c) / d);
}

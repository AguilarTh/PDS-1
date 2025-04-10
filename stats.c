#include <math.h>

float cauchy(float x)
{
    float PI= 3.141592, y;
    y= ( 1 / ( PI * ( 1 + x * x)));
    
    return (y);
}

float gumbel (float x, float u, float b)
{
   float z, y;
   z= ( x - u ) / b;
   y= ( 1 / b ) * exp(-(z + exp (-z)));
   
   return y;
}

float laplace(float x, float u, float b)
{
    float y;
    y= ( 1.0 / ( 2.0*b )) * exp( -(fabs( x-u )) / b );  // lembrar de colocar o ( ) antes da divisão do 1/2
    
    return y;
}
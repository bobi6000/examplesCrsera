#include <stdio.h>
#define MNOZ(x) x*x
#define WART 36

// define PLATFORM1 to use 
// or define in option -D<MACRO>  my example: gcc -DPLATFORM2 -o main.out main.c
// end comment define below
#define PLATFORM1   

int main (void){
int x=0U,y=0U,z=0U;



#if defined ( PLATFORM1 ) && !defined ( PLATFORM2)
x=WART;
#elif defined ( PLATFORM2 ) && !defined( PLATFORM1 )
x=5*WART;
#else
  #error "Plaese specify one platfrom target"
#endif

y=5;
z=MNOZ(y);
printf("===========\nWynik=%d\n=========\n",x+z);
 return 0;
}

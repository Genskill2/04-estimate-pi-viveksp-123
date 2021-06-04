#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float mc_pi(int n){
  float x,y;
  int i=0,circle=0;
  float z;
  int square=0;
  
  float pi;
  
  while (i<n-1){
   
   x=frandom();
   y=frandom();
   z=x*x+y*y;
  
   
   if(z<=1){
     circle+=1;
     square+=1;
     }
   else{
     square+=1;
   
   i++;
     
   }
   
   }
 
 pi=(float)4*circle/square;
 return pi;
   
    
  
  
}
  



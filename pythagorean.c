
#include<stdio.h>
#include<cs50.h>

int main(void){
    int side1,side2,side3,a,b,c;
    
    side1=get_int("side 1 ");
    side2=get_int("side 2 ");
    side3=get_int("side 3 ");
    
    if(side1>side2 && side1>side3){
      
      a=side1;
      b=side2;
      c=side3;
      
    }else if(side2>side1 && side2>side3){
      
      a=side2;
      b=side1;
      c=side3;
      
      }else if(side3>side1 && side3>side2){
      
      a=side3;
      b=side1;
      c=side2;
      
      }
    a= (a*a);
    b= (b*b) + (c*c);
    if(a==b){
        
        printf("Yes\n");
    
    }else{
    
    	printf("No\n");
     
     	}	
}
 
      
      

      
     
      
      
     
      
    
    

        
      
    
    
    
    	
     
     		


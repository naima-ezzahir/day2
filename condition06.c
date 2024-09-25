#include <stdio.h>
#include <math.h>

int main(){

 int a;
 printf (" donner un nomber : ");
 scanf("%d",&a);
 if (0<a){

   printf (" %d  positive",a);

 } else if (a<0){
     printf ("%d negative",a);
     }else{
      printf ("%dest null",a);

     }

return 0;

}

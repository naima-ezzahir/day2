#include <math.h>

int main(){

 int a,b,c;
 float d,x,x1,x2;
 printf("entrer entrer la valeur de a :  ");
 scanf("%d",&a);
  printf("entrer entrer la valeur de b :  ");
 scanf("%d",&b);
 printf("entrer entrer la valeur de c :  ");
 scanf("%d",&c);
 d=(b*b)-(4*a*c);
 printf ( "la valeur de delta est%.2f",d);

 if(d==0){
        x =(-b)/2*a;
 printf(" il y a un solution unique x= %.2f",x);

    }else if(0<d) {
        x1 =-b-sqrt(d)/2*a;
        x2 =-b+sqrt(d)/2*a;
    printf(" il y a deux solution  x1= %.2f et x2= %.2f",x1,x2);
    }else {
    printf(" il n apas de solution");


    }




    return 0;
}


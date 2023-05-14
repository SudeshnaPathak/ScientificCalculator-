#include <stdio.h>
#include <math.h>

  int n ,c ,d,e; 
  float a , b ;
  int factorial(int g)
  {  
      int f = 1;
      for(int i = 1 ; i<=g ; i++)
      { 
        f = f*i;
      }
      return f;
  }
  int permutation(int h , int k)
  {
      int l =factorial(h)/factorial(h-k);
      return l;
  }
  int combination(int m , int p)
  {
      int q =factorial(m)/(factorial(p)*factorial(m-p));
      return q;
  }
  void main()
  {
  while(1)
  {
    printf("SCIENTIFIC CALCULATOR \n");
    printf("1 ADDITION \n");
    printf("2 SUBTRACTION \n");
    printf("3 MULTIPLICATION \n");
    printf("4 QUOTIENT \n");
    printf("5 REMAINDER \n");
    printf("6 ABSOLUTE VALUE \n");
    printf("7 SQUARE ROOT \n");
    printf("8 SQUARE \n");
    printf("9 CUBE \n");
    printf("10 CUBE ROOT \n");
    printf("11 Nth POWER \n");
    printf("12 Nth ROOT \n");
    printf("13 RECIPROCAL \n");
    printf("14 NATURAL LOGARITHM \n");
    printf("15 LOGARITHM (base 10) \n"); 
    printf("16 EXPONENTIATION \n");
    printf("17 POWER(base 10) \n");
    printf("18 COSINE \n");
    printf("19 SINE \n");
    printf("20 TANGENT \n");
    printf("21 HYPERBOLIC SINE \n");
    printf("22 HYPERBOLIC COSINE \n");
    printf("23 HYPERBOLIC TANGENT \n");
    printf("24 SINE INVERSE \n");
    printf("25 COSINE INVERSE \n");
    printf("26 TANGENT INVERSE \n");
    printf("27 PERMUTATION \n");
    printf("28 COMBINATION \n");
    printf("29 FACTORIAL \n");
    printf("30 ROUND OFF \n");
    printf("0 EXIT!!! \n");
    printf("Enter the number correspoding to the operation to be performed \n");
    scanf("%d" , &n);

    if(n==0)
    {
        printf("THANK YOU");
        break;
    }
    
    switch (n)
    {
      case 1:printf(" Enter 2 nos:");
             scanf("%f %f" , &a , &b);
             printf("%f + %f = %f \n" , a , b , a+b);
             break;
      case 2:printf(" Enter 2 nos:");
             scanf("%f %f" , &a , &b);
             printf("%f - %f = %f \n" , a , b , a-b);
             break;
      case 3:printf(" Enter 2 nos:");
             scanf("%f %f" , &a , &b);
             printf("%f * %f = %f \n" , a , b , a*b);
             break;
      case 4:printf(" Enter 2 nos:");
             scanf("%f %f" , &a , &b);
             printf("%f / %f = %f \n" , a , b , a/b);
             break;
      case 5:printf(" Enter 2 nos:");
             scanf("%f %f" , &a , &b);
             printf("%f / %f = %f \n" , a , b ,fmod(a , b));
             break;
      case 6:printf("Enter the value:");
             scanf("%f" , &a);
             printf("|%f|= %f \n" ,a, fabs(a));
             break;
      case 7:printf("Enter the no :");
             scanf("%f" , &a);
             printf("Square root of %f is %f \n" , a ,sqrt(a));
             break;
      case 8:printf("Enter the no:");
             scanf("%f" , &a);
             printf("Square of %f is %f \n" , a , a*a);
             break;
      case 9:printf("Enter the no:");
             scanf("%f" , &a);
             printf("Cube of %f is %f \n" , a , a*a*a);
             break;
      case 10:printf("Enter the no:");
             scanf("%f" , &a);
             printf("Cube root of %f is %f \n" , a ,cbrt(a));
             break;
      case 11:printf("Enter the no. & the power :");
             scanf("%f %d" , &a ,&c);
             printf("%f to the power %d = %f \n" , a , c , pow(a , c));
             break;
      case 12:printf("Enter the no. & the nth root :");
             scanf("%f %d" , &a ,&c);
             b = 1/(float)c;
             printf("%dth root of %f = %f \n" , c , a , pow(a , b));
             break;
      case 13:printf("Enter the no:");
             scanf("%f" , &a);
             printf("reciprocal of %f is %f \n" , a ,pow(a , -1));
             break;
      case 14:printf("Enter the no:");
             scanf("%f" , &a );
             printf("Natural Logarithm of %f = %f \n" , a , log(a));
             break;
      case 15:printf("Enter the no:");
             scanf("%f" , &a );
             printf("Logarithm of(base 10) of  %f = %f \n" , a , log10(a));
             break;
      case 16:printf("Enter the power to be raised:");
              scanf("%f" , &a);
              printf("The Exponential value of %f = %f \n" , a , exp(a));
              break;
      case 17:printf("Enter the power to be raised:");
              scanf("%f" , &a);
              printf("10 to the power %f = %f \n" , a , pow(10 ,a));
              break;
      case 18:printf("Enter the angle measure in degrees whose cosine is to be found :");
              scanf("%f" , &a);
              b = a * 3.14/180;
              printf("Cos(%0.2f) = %f \n",a,cos(b));
              break;
      case 19:printf("Enter the angle measure in degrees whose sine is to be found :");
              scanf("%f" , &a);
              b = a * 3.14/180;
              printf("Sin(%0.2f) = %f \n",a,sin(b));
              break;
      case 20:printf("Enter the angle measure in degrees whose tangent is to be found :");
              scanf("%f" , &a);
              b = a * 3.14/180;
              printf("Tan(%0.2f) = %f \n",a,tan(b));
              break;
      case 21:printf("Enter the value whose hyperbolic sine is to be found :");
              scanf("%f" , &a);
              printf("The hyperbolic sine of %f is %0.2f degrees \n",a , sinh(a));
              break;
      case 22:printf("Enter the value whose hyperbolic Cosine is to be found :");
              scanf("%f" , &a);
              printf("The hyperbolic Coine of %f is %0.2f degrees \n",a , cosh(a));
              break;
      case 23:printf("Enter the value whose hyperbolic tangent is to be found :");
              scanf("%f" , &a);
              printf("The hyperbolic tangent of %f is %0.2f degrees \n",a , tanh(a));
              break;
      case 24:printf("Enter the value whose sine inverse is to be found :");
              scanf("%f" , &a);
              b = 180/3.14;
              printf("Sin inverse of %f is %0.2f degrees \n",a,asin   (a)*b);
              break;
      case 25:printf("Enter the value whose cosine inverse is to be found :");
              scanf("%f" , &a);
              b = 180/3.14;
              printf("Cosine inverse of %f is %0.2f degrees \n",a    ,acos(a)*b);
              break;
      case 26:printf("Enter the value whose tangent inverse is to be found :");
              scanf("%f" , &a);
              b = 180/3.14;
              printf("Tangent inverse of %f is %0.2f degrees \n",a    ,atan(a)*b);
              break;
      case 27:printf("Enter n & r  respectively in nPr:");
              scanf("%d %d" , &d , &e);
              printf("Permutation = %d \n", permutation(d,e));
              break;
      case 28:printf("Enter n & r respectively in nCr:");
              scanf("%d %d" , &d , &e);
              printf("Combination = %d \n", combination(d,e));
              break;
      case 29:printf("Enter the no whose factorial is to be found:"          );
              scanf("%d" , &c);
              printf("Factorial of %d = %d \n" , c , factorial(c));
              break;
      case 30:printf("Enter the no to be rounded off:");
              scanf("%f" , &a);
              printf("%0.0f \n" , ceil(a));
              break;
      default:printf(" INCORRECT CHOICE ENTERED");
              break;
    }       
  }          
}             
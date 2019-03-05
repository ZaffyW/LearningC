//gives ingredients total after a list of ingredients + weight + price
 #include <stdio.h>
 int main (void)


 {
     int array [10];
     int ingredients;
     double price [10];
     double weight [10];
     double sum;
     double total =0;

     scanf("%d", &ingredients);

     int i;
     for (i =0; i < ingredients; i++)
     {
     scanf("%lf", &price [i]);
     scanf("%lf", &weight[i]);
     sum = price [i] * weight [i];
     total = total + sum;

      }
    printf("total: %.6lf", total);
 return 0;


 }

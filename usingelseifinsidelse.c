//first else bracket opens for the rest else if statements//
#include <stdio.h>
int main (void)
{
	int height;
	int leafs;

  printf("What's the height (in meters) ?\n");
  scanf("%d", &height);

  printf("How many leafs?\n");
  scanf("%d", &leafs);

  if ((height <= 5) && (leafs >= 8))
  {
  	printf("It's a Tinuviel\n");
  }

  else
{
	if ((height <= 8 && leafs <= 5))
	{
		printf("It's a Falarion\n");
	}
else
{
	if ((height >= 10) && ( leafs >= 10))
	{
		printf("Calalel");
	}


else
 {
 	if ((height >= 12 && leafs <= 7 ))
 	{
 		printf("It's a Dorthonion\n");
 	}
else
	{
		printf("it's uncertain");
	}
 }

}
}


return 0;
}












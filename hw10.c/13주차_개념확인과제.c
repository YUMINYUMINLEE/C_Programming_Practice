#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct city
{
	char Name;
	char Country;
	int  Population;
} City;

int main(void)
{
	City arr[3];
	for (int i = 0; i < 3; i++) {
		printf("input three cities: \n");
		printf("Name>");
		scanf("%s", &arr[i].Name); printf("\n");
		printf("Country>");
		scanf("%s", &arr[i].Country); printf("\n");
		printf("Population>");
		scanf("%d", &arr[i].Population); printf("\n");
	}
	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++) {
		
		printf("%d. %s in %s with a population of %d people\n",i+1,&arr[i].Name,&arr[i].Country,&arr[i].Population);
	}
	return 0;
}
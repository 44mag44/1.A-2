/*
	Докажите, что разность  ab - ba кратна 9 
*/
#include <stdio.h>

#define TEN 10

// func - ab()
int ab(int a, int b)
{
	int lvalue=(8*(a*TEN))-b; // a=3 - (8 * (3 * 10)) - b
	return lvalue;
}
// func - ba()
int ba(int b, int a)
{
	int rvalue=(8*b*TEN)-a; // a=7 - (8 * (7 * 10)) - a
	return rvalue;
}

int main()
{
	int a=0, b=0; // enter
	int lvalue=0, rvalue=0; // save	
	int ans=0; // answer

	// enter a
	printf("a = ");
	if(!(scanf("%d", &a)))
		perror("scanf() =(");
	// enter b
	printf("b = ");
	if(!(scanf("%d", &b)))
		perror("scanf() =(");		

	// algo
	if((a>=0 && a<10) && (b>=0 && b<10))
	{
		//ab
		lvalue=ab(a, b);
		printf("ab = %d\n", lvalue);
		//ba		
		rvalue=ba(b, a);
		printf("ba = %d\n", rvalue);
		//answer
		ans=(lvalue-rvalue)/9;
		printf("answer = %d\n", ans);
	}
	else perror("сonditions not met");

	return 0;
}

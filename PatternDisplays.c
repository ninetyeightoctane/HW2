#include <stdio.h>

int main(){

	printf ("\n____________________________________________");
	printf ("\n Pattern A \t\t\tPattern B");
	printf ("\n____________________________________________");

	for (int i=0; i<10; i++){
		for (int j=0; j<=i; j++)
			printf ("+");
		if ((i==9) || (i==8) || (i==7))
			printf("\t\t\t");
		else
			printf("\t\t\t\t");
		for (int j=10; j>i; i--)
			printf("+");
	}
}

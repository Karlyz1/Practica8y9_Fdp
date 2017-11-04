#include <stdio.h>
int main (){
	int c1;
	int r1;
	int c2;
	int r2;
	int cr;
	int cc;
	int acu;
	int con;
	cr=0;
	cc=0;
	printf("Dame el numero de columnas de la matriz 1\n");
	scanf("%i",&c1);
	printf("Dame el numero de renglones de la matriz 1\n");
	scanf("%i",&r1);
	int m1[r1][c1];
	while(cc<c1){
		while(cr<r1){
			printf("\n");
			printf("Introduce [%i][%i] de la matriz 1\n",cr+1,cc+1);
			scanf("%i",&m1[cr][cc]);
			cr=cr+1;
		}
		cr=0;
	        cc=cc+1;
	}
	printf("\n");
	printf("La primera matriz es:\n");
	printf("\n");
	cr=0;
	cc=0;
	while(cr<r1){
		while(cc<c1){
			printf("%i ",m1[cr][cc]);
			cc=cc+1;
		}
		cc=0;
	        cr=cr+1;
	        printf("\n");
	}
		cr=0;
	cc=0;
	printf("\n");
	printf("Introduce el numero de columnas de la matriz 2\n");
	scanf("%i",&c2);
	printf("Introduce el numero de renglones de la matriz 2\n");
	scanf("%i",&r2);
	int m2[r2][c2];
	while(cc<c2){
		while(cr<r2){
			printf("\n");
			printf("Introduce [%i][%i] de la matriz 2\n",cr+1,cc+1);
			scanf("%i",&m2[cr][cc]);
			cr=cr+1;
		}
		cr=0;
	        cc=cc+1;
	}
	printf("\n");
	printf("La segunda matriz es:\n");
	printf("\n");
	cr=0;
	cc=0;
	while(cr<r2){
		while(cc<c2){
			printf(" %i ",m2[cr][cc]);
			cc=cc+1;
		}
		cc=0;
	        cr=cr+1;
	        printf("\n");
	}
	int m3[100][100];
	if(c1==r2){
		for(cr=0;cr<r1;cr++)
			for(cc=0;cc<c1;cc++)
			{
				for(acu=0,con=0;con<c2;con++)
					acu=acu+m1[cr][con]*m2[con][cc];
					m3[cr][cc]=acu;
			}
				printf("\n");
				printf("El resultado de la multiplicacion es:\n");
				printf("\n");
				
		cr=0;
	cc=0;
	while(cr<r1){
		while(cc<c2){
			printf("  %i  ",m3[cr][cc]);
			cc=cc+1;
		}
		cc=0;
	        cr=cr+1;
	        printf("\n");
   }
}
    else {
    	printf("La multiplicacion no se puede efectuar");
	}
	return 0;
}

/*#include <stdio.h>
int main (){
	int c1;
	int r1;
	int c2;
	int r2;
	int cr;
	int cc;
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
	printf("La primera matriz es:\n");
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
			printf(m2[cr][cc])
			cc=cc+1;
		}
		cc=0;
	        cr=cr+1;
	        printf("\n");
	}
	int m3[100][100]
	if(c1==r2){
		for(cr=0;cr<r1;cr++)
			for(cc=0;cc<c1;cc++)
				printf("\n");
				printf("El resultado de la multiplicacion es:\n");
	while(cr<r1){
		while(cc<c2){
			printf("  %i  ",m3[cr][cc]);
			cc=cc+1;
		}
	}
	return 0;
}*/
//En el programa hacen falta varios ";"//


/*#include <stdio.h>
int main (){
	int c1;
	int r1;
	int c2;
	int r2;
	int cr;
	int cc;
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
	printf("La segunda matriz es:\n");
	cr=0;
	cc=0;
	while(cr<r2){
		while(cc<c2){
			printf(m2[cr][cc]);
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
			
			
				printf("El resultado de la multiplicacion es:\n");
		cr=0;
	cc=0;
	while(cr<r1){
		while(cc<c2){
			printf("  %i  ",m3[cr][cc]);
			cc=cc+1;
		}
        cc=0;
   }
}

	}
	return 0;
}*/

//se agrego en la linea 173 y en la 155, "cc=0;"//


/*#include <stdio.h>
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
	printf("La segunda matriz es:\n");
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
			
			
				printf("El resultado de la multiplicacion es:\n");
		cr=0;
	cc=0;
	while(cr<r1){
		while(cc<c2){
			printf("  %i  ",m3[cr][cc]);
			cc=cc+1;
		}
        cc=0;
           cr=cr+1;
   }
}

	}
	return 0;
}*/

/*se agrgo e la linea 267 un "cr=cr+1" para indicar que si cc es igual a 0, cr aumentaria 1.
Tambien se agrego el tipo de dato "%i" en la linea 263 
Se declararon las variables "acu" para acumulador y "con" como otro contador */


/*#include <stdio.h>
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
	printf("La segunda matriz es:\n");
	cr=0;
	cc=0;
	while(cr<r2){
		while(cc<c2){
			printf(" %i ",m2[cr][cc]);
			cc=cc+1;
		}
		cc=0;
	        cr=cr+1;
	}
	int m3[100][100];
	if(c1==r2){
		for(cr=0;cr<r1;cr++)
			for(cc=0;cc<c1;cc++)
			{
				for(acu=0,con=0;con<c2;con++)
				    acu=acu+m1[cr][con]*m2[con][cc];	
			}
				printf("El resultado de la multiplicacion es:\n");
		cr=0;
	cc=0;
	while(cr<r1){
		while(cc<c2){
			printf("  %i  ",m3[cr][cc]);
			cc=cc+1;
		}
        cc=0;
           cr=cr+1;
   }
}

	}
	return 0;
}*/

/* se agregaron nuevas llaves en la linea 354, 
para introducir un for para indicar un ciclo donde el "con" aumentaria si el "con" es menor que c2, 
primero se declaro que el con y el acu eran igual a 0,
tambien se escribio que el acu seria igual a la multiplicacion de la m2 con la m1 + acu. */


#include <stdio.h>
/*int main (){
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
	printf("La segunda matriz es:\n");
	cr=0;
	cc=0;
	while(cr<r2){
		while(cc<c2){
			printf(" %i ",m2[cr][cc]);
			cc=cc+1;
		}
		cc=0;
	        cr=cr+1;
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
				printf("El resultado de la multiplicacion es:\n");
		cr=0;
	cc=0;
	while(cr<r1){
		while(cc<c2){
			printf("  %i  ",m3[cr][cc]);
			cc=cc+1;
		}
        cc=0;
           cr=cr+1;
   }
}
    else {
    	printf ("la multiplicacion no se puede efectuar");
	}
	return 0;
}*/

/* para que se ejecutara el programa se agrego en la linea 458 que el acu es iagual a la m3[cr][cc],
tambien se agrego un else para que se ejecuten las instrucciones si se cumplen y sino indicar que la multiplicacion no se puede realizar*/

/* Por ultimo se agregaran saltos de linea "printf("\n");" para dar espacios */


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

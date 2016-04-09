#include <stdio.h>
#include <math.h>

double pi (void);

int main (void) {

	printf ("Valor de PI: %f\n", pi () );
}	

double pi (void) {

	double valor_pi = 0, funcao;
	int n;

	for (n = 0; n < 10000000; n++){


			funcao = 4 * pow(-1, n) / (2 * n + 1);
			valor_pi = funcao + valor_pi;

	}
		return valor_pi;
}

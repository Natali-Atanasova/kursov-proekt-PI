#include <stdio.h>
#include <stdlib.h>
#define N 100	 
	int main() {
	int A[N][N], C[N*N], n, k, l, c_size = 0, temp,v,i,j;
	 
	printf("Da se sustavi programa za obrtabotka na dvumerniq masiv A[N,N], kudeto dannite sa celi chisla v intervala [-100;100]. Programata da izvurshi slednite deistviq\n otpechatvane na uslovieto na zadachata; \n otpechatvane na imenata na avtora na programata;\n vuvezdane na vhodnite danni;\n otpechatvane na vhodnite danni\n da se obrazuva ednomeren masiv C, elementite na koito sa elementite ot masiva\n polucheniqt masiv da se sortira po golemina\n otpechatvane na poluchenite rezultati sled obrabotkata");
	 
	
	printf("\nNatali Jhoro Atanasova\n");
	 
	printf("Razmer na masiva ");
	scanf("%d", &n);
	 	
	printf("Vyvejdane na elementi ot masiva A[%d,%d]:\n", n, n);
	for ( i = 0; i < n; i++)
     {
	for ( j = 0; j < n; j++)
     {
	do{
	printf("A[%d][%d] = ",i,j);
	scanf("%d", &v);
	}while(v<-100||v>100);
	A[i][j]=v;
	}
	}
	 
	printf("Elementite na A[%d,%d] ??:\n", n, n);
	for ( i = 0; i < n; i++) {
	for ( j = 0; j < n; j++) {	
            printf("%d ", A[i][j]);
	}
	printf("\n");
	}
	 	printf("Vavedete K ");
	scanf("%d", &k);
	printf("Vavedete L ");
	scanf("%d", &l);
	 
	
	for ( i = 0; i < n; i++) {
	for ( j = 0; j < n; j++) {
	if (A[i][j] >= k && A[i][j] <= l) {
	C[c_size] = A[i][j];
	c_size++;
	}
	}
	}
	 
	
	for ( i = 0; i < c_size - 1; i++) {
	for ( j = i + 1; j < c_size; j++) {
	if (C[i] > C[j]) {
	temp = C[i];
	C[i] = C[j];
	C[j] = temp;
	}
}
	}
		 
	printf("\n");
	for ( i = 0; i < c_size; i++) {
	printf("%d ", C[i]);
	}
	printf("\n");
	 
	system("pause");
	return 0;
	
    	}




#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area(triangle t){
    double p = (t.a+t.b+t.c)/2.0;
    return sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
}

void sort_by_area(triangle* tr, int n) {
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(area(tr[j]) < area(tr[i])){
                triangle temp = tr[i];
                tr[i]=tr[j];
                tr[j]=temp;
            }
        }
    }
}

int main()
{
	printf("\n\t     Ucgenleri Alan Boyutlarina Gore Kucukten Buyuge Siralama\n");
	int n;
	begin:printf("\nKac Ucgen Olusturmak Istediginizi Belirtin: ");
	scanf("%d", &n);
	triangle *tr =(triangle*) malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		printf("\n%d. Ucgenin Sirayla A, B ve C Kenarlarini Giriniz: ",i + 1);
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("\n%d :) %d %d %d\n",i + 1, tr[i].a, tr[i].b, tr[i].c);
	}
	printf("\nProgrami Kapatmak Icin 0, Yeniden Baslatmak Icin Herhangi Bir Tusa Basiniz: ");
    scanf("%d", &n);
    switch(n){
    	case 0:
    		exit(0);
    	default:
    		goto begin;
	}
	return 0;
}

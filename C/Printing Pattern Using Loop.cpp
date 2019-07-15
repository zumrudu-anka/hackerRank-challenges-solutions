#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    int n;
    printf("\n\t   Merkezi 1 ve Son Kenari Girilen Sayi Olan Desen Olusturma\n");
    begin:printf("\nLutfen Desenin Son Kenarini Belirleyecek Sayiyi Giriniz: ");
    scanf("%d", &n);
    printf("\n\n");
    for(int i = 0; i < n; i++){
        for(int j = n; j > n - i - 1; j--){
            printf("%d ", j);
            if(j == 1){
                for(int k = 1; k < n; k++){
                    printf("%d ", k+ 1);
                }
                printf("\n");
                goto etiket;
            }
        }
        for (int j = 0;j < ((n - i - 1) * 2) - 1; j++){
            printf("%d ",(n - i));
        }
        for (int j = (n - i);j < n + 1; j++){
            printf("%d ",(j));
        }
        printf("\n");
    }
    etiket:for(int i = n - 2; i >= 0; i--){
        for(int j = n; j > n - i - 1; j--){
            printf("%d ", j);
        }
        for(int j = 0; j < ((n - i - 1) * 2) - 1; j++){
            printf("%d ",(n - i));
        }
        for(int j = n - i; j < n + 1; j++){
            printf("%d ", j);
        }
        printf("\n");
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



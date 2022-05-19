#include <stdio.h>
#include <stdlib.h>

int main() {
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int o, p, q, r, n, t, u, jumlah = 0;
  printf("        PROGRAM PERKALIAN MATRIKS        \n");
  printf("         BY FENTI AGIL SAKINAH        \n");
  printf("==========================================\n\n");
  
  printf("Masukkan jumlah baris matriks pertama:");
  scanf("%d",&r);
  printf("Masukkan jumlah kolom matriks pertama:");
  scanf("%d",&n);
  printf("\n\n");
  printf("Masukkan jumlah baris matriks kedua:");
  scanf("%d",&t);
  printf("Masukkan jumlah kolom matriks kedua:");
  scanf("%d",&u);
  printf("\n\n");
  
  if(n!= t){
    printf("Matriks tidak dapat dikalikan satu sama lain.\n");
  } else {
    printf("Masukkan elemen matriks pertama: \n");
    for(o = 0; o < r; o++){
      for(p = 0; p < n; p++){
        scanf("%d", &matriks1[o][p]);
      }
    }
    printf("\n\n");
    printf("Masukkan elemen matriks kedua: \n");
    for(o = 0; o < t; o++){
      for(p = 0; p < u; p++){
        scanf("%d", &matriks2[o][p]);
      }
    }
    printf("\n\n");
    for(o = 0; o < r; o++){
      for(p = 0; p < u; p++){
        for(q = 0; q < t; q++){
          jumlah = jumlah + matriks1[o][q] * matriks2[q][p];
        }
        hasil[o][p] = jumlah;
        jumlah = 0;
      }
    }
    printf("\n\n");
    printf("Hasil perkalian matriks: \n");
    for(o = 0; o < r; o++){
      for(p = 0; p < n; p++){
        printf("%d\t", hasil[o][p]);
      }
      printf("\n");
    }
    printf("\n\n");
  }
  printf("TERIMAKASIH");
  return 0;
}


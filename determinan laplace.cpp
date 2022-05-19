#include <stdio.h>
#include <stdlib.h>

int main(){

 int pilihan;
  printf("      PROGRAM DETERMINAN MATRIKS         \n");
  printf("            METODE LAPLACE        \n");
  printf("         BY FENTI AGIL SAKINAH        \n");
  printf("==========================================\n\n");
 printf("1. Matriks 3x3\n");
 printf("2. Matriks 4x4\n");
 printf("\n\n");
 printf("Pilihan anda :");

 scanf("%d",&pilihan);
 printf("==================\n");


 if (pilihan==1)

 {
 	int a,b,c,d,e,f,g,h,i;
  printf("Determinan matriks dengan metode laplace kolom\n\n");
  printf("Masukan Elemen Matriks\n\n");

  printf("Elemen Matriks Baris 1 Kolom 1:");

  scanf("%d",&a);

  printf("Elemen Matriks Baris 1 Kolom 2:");

  scanf("%d",&b);

  printf("Elemen Matriks Baris 1 Kolom 3:");

  scanf("%d",&c);

  printf("Elemen Matriks Baris 2 Kolom 1:");

  scanf("%d",&d);

  printf("Elemen Matriks Baris 2 Kolom 2:");

  scanf("%d",&e);

  printf("Elemen Matriks Baris 2 Kolom 3:");

  scanf("%d",&f);


  printf("Elemen Matriks Baris 3 Kolom 1:");

  scanf("%d",&g);
  
  printf("Elemen Matriks Baris 3 Kolom 2:");

  scanf("%d",&h);
  
  printf("Elemen Matriks Baris 3 Kolom 3:");

  scanf("%d",&i);

  printf("\n\n");
  printf("Determinan Matriks 3x3 :"); 
  printf(" ",&a); printf(" ",&b); printf(" ",&c); 
  printf(" ",&d); printf(" ",&e); printf(" ",&f); 
  printf(" ",&g); printf(" ",&h); printf(" ",&i); 
  
  int determinan_matriksx =a*(e*i-h*f)-d*(b*i-h*c)+g*(b*f-e*c);  // determinan = (a*C11)+(d*C21)+(g*C31)
  printf("%d\t",determinan_matriksx);
     
}

else if (pilihan==2)
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	
  printf("Determinan matriks dengan metode laplace baris\n\n");
  printf("Masukan Elemen Matriks\n\n");

  printf("Elemen Matriks Baris 1 Kolom 1:");

  scanf("%d",&a);

  printf("Elemen Matriks Baris 1 Kolom 2:");

  scanf("%d",&b);

  printf("Elemen Matriks Baris 1 Kolom 3:");

  scanf("%d",&c);
  
  printf("Elemen Matriks Baris 1 Kolom 4:");
  
  scanf("%d",&d);

  printf("Elemen Matriks Baris 2 Kolom 1:");

  scanf("%d",&e);

  printf("Elemen Matriks Baris 2 Kolom 2:");

  scanf("%d",&f);

  printf("Elemen Matriks Baris 2 Kolom 3:");

  scanf("%d",&g);

  printf("Elemen Matriks Baris 2 Kolom 4:");
  
  scanf("%d",&h);
  
  printf("Elemen Matriks Baris 3 Kolom 1:");

  scanf("%d",&i);
  
  printf("Elemen Matriks Baris 3 Kolom 2:");

  scanf("%d",&j);
  
  printf("Elemen Matriks Baris 3 Kolom 3:");

  scanf("%d",&k);
  
  printf("Elemen Matriks Baris 3 Kolom 4:");
  
  scanf("%d",&l);
  
  printf("Elemen Matriks Baris 4 Kolom 1:");
  
  scanf("%d",&m);
  
  printf("Elemen Matriks Baris 4 Kolom 2:");
  
  scanf("%d",&n);
  
  printf("Elemen Matriks Baris 4 Kolom 3:");
  
  scanf("%d",&o);
  
  printf("Elemen Matriks Baris 4 Kolom 4:");
  
  scanf("%d",&p);

  printf("\n\n");	
  printf("Determinan Matriks 4x4:"); 
  printf(" ",&a); printf(" ",&b); printf(" ",&c); printf(" ",&d); 
  printf(" ",&e); printf(" ",&f); printf(" ",&g); printf(" ",&h); 
  printf(" ",&i); printf(" ",&j); printf(" ",&k); printf(" ",&l); 
  printf(" ",&m); printf(" ",&n); printf(" ",&o); printf(" ",&p); 
  
  
  int m11=a*(f*(k*p-l*o)-g*(j*p-l*m)+h*(j*o-k*n));
  int m12=b*(e*(k*p-l*o)-g*(i*p-l*m)+h*(i*o-k*m));
  int m13=c*(e*(j*p-l*n)-f*(i*p-l*m)+h*(i*n-j*m));
  int m14=d*(e*(j*o-k*n)-f*(i*o-k*m)+g*(i*n-j*m));
  int determinan_matriksx=(m11-m12+m13-m14);
  printf("%d\t",determinan_matriksx);
}
 
}

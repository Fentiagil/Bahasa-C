#include <stdio.h>
#include <stdlib.h>

int main(){

 int pilihan;
  printf("      PROGRAM DETERMINAN MATRIKS         \n");
  printf("             METODE SARRUS                \n");
  printf("Mata Kuliah Aljabar Linier dan Matriks D  \n");
  printf("         BY FENTI AGIL SAKINAH        \n");
  printf("              20081010161            \n");
  printf("==========================================\n\n");
 printf("1. Matriks 2x2\n");
 printf("2. Matriks 3x3\n");
 printf("3. Matriks 4x4\n");
 printf("\n\n");
 printf("Pilihan anda :");

 scanf("%d",&pilihan);
 printf("==================\n");


 if (pilihan==1)

 {

  int a,b,c,d;

  printf("Masukan Elemen Matriks 2x2\n\n");

  printf("Elemen Matrik Baris 1 Kolom 1:");

  scanf("%d",&a);

  printf("Elemen Matrik Baris 1 Kolom 2:");

  scanf("%d",&b);

  printf("Elemen Matrik Baris 2 Kolom 1:");

  scanf("%d",&c);

  printf("Elemen Matrik Baris 2 Kolom 2:");

  scanf("%d",&d);
  printf("\n===============================\n");

  printf("Determinan Matriks 2x2 :");
  printf("",&a); printf("",&b);
  printf("",&c); printf("",&d); 
  

  int determinan_matriksx =(a*d)-(b*c);
  printf("%d\t",determinan_matriksx);


 }

 else if (pilihan==2)

 {

  int a,b,c,d,e,f,g,h,i;

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
  
  
  int determinan_matriksx =(a*e*i+b*f*g+c*d*h)-(c*e*g+b*d*i+a*f*h);
  printf("%d\t",determinan_matriksx);

 }

 else if (pilihan==3)
{
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

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
  
  
  
  int determinan_matriksx =(a*f*k*p+b*g*l*m+c*h*l*n)-(d*g*j*m+a*h*k*n+b*e*l*o);
  printf("%d\t",determinan_matriksx);
 }

}



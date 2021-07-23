// program frekuensi dimana
// dimana menghitung frekuensi huruf dalam 1 kata,kalimat, ataupun paragraf

#include <stdio.h>
#include <string.h>

//deklarasi fungsi untuk menjalankan program frekuensi
char teks[100];
int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z = 0;

//deklarasi variabel meminta user memasukan
void mintaMasukan(){
 printf("Masukkan Teks:");
 scanf("%s",teks);
 
}

//deklarasi syarat frekuensi
void hitungFrekuensi(){
 for (int cacah=0; cacah<strlen(teks); cacah++){
  switch (teks[cacah]) {
        case 65: A++;
                break;
  case 66: B++;
                break;
  case 67: C++;
                break;
  case 68: D++;
    break;
  case 69: E++;
    break;
  case 70: F++;
    break;
  case 71: G++;
    break;
  case 72: H++;
    break;
  case 73: I++;
    break;
  case 74: J++;
    break;
  case 75: K++;
    break;
  case 76: L++;
    break;
  case 77: M++;
    break;
  case 78: N++;
    break;
  case 79: O++;
    break;
  case 80: P++;
    break;
  case 81: Q++;
    break;
  case 82: R++;
    break;
  case 83: S++;
    break;
  case 84: T++;
    break;
  case 85: U++;
    break;
  case 86: V++;
    break;
  case 87: W++;
    break;
  case 88: X++;
    break;
  case 89: Y++;
    break;
  case 90: Z++;
    break;
  case 97: A++;
    break;
  case 98: B++;
    break;
  case 99: C++;
    break;
  case 100: D++;
    break;
  case 101: E++;
    break;
  case 102: F++;
    break;
  case 103: G++;
    break;
  case 104: H++;
    break;
  case 105: I++;
    break;
  case 106: J++;
    break;
  case 107: K++;
    break;
  case 108: L++;
    break;
  case 109: M++;
    break;
  case 110: N++;
    break;
  case 111: O++;
    break;
  case 112: P++;
    break;
  case 113: Q++;
    break;
  case 114: R++;
    break;
  case 115: S++;
    break;
  case 116: T++;
    break;
  case 117: U++;
    break;
  case 118: V++;
    break;
  case 119: W++;
    break;
  case 120: X++;
    break;
  case 121: Y++;
    break;
  case 122: Z++;
    break;
        default: printf(" ");
    }
 }  
}
  

//menampilkan frekuensi atau banyaknya huruf yang keluar
void tampilkanFrekuensi() {
 printf("\nFrekuensi :\n");
    printf("A= %d\n",A);         printf("G= %d\n",G);        printf("L= %d\n",L);    printf("R= %d\n",R);  printf("X= %d\n",X);
 printf("B= %d\n",B);         printf("H= %d\n",H);        printf("M= %d\n",M);  printf("S= %d\n",S);  printf("Y= %d\n",Y);
 printf("C= %d\n",C);         printf("I= %d\n",I);        printf("N= %d\n",N);  printf("T= %d\n",T);  printf("Z= %d\n",Z);
 printf("D= %d\n",D);         printf("J= %d\n",J);        printf("O= %d\n",O);   printf("U= %d\n",U);
 printf("E= %d\n",E);         printf("K= %d\n",K);        printf("P= %d\n",P);  printf("V= %d\n",V);
 printf("F= %d\n",F);         printf("L= %d\n",L);        printf("Q= %d\n",Q);  printf("W= %d\n",W);
 
}

//deklarasi fungsi utama 
void main(){
 mintaMasukan();
 hitungFrekuensi();
 tampilkanFrekuensi();
 }
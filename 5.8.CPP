#include <iostream.h>
#include <conio.h>
#include <stdio.h>
char nama[20], kelas [8], abs[10];
void main (){
int data[5];
int i, total, rata, tmp;
clrscr();
cout<<"Aplikasi Nilai Hitung Rata-Rata"<<endl;
cout<<"========================================="<<endl;
cout<<"Masukkan Nama :"; cin>>nama;
cout<<"========================================="<<endl;
cout<<"Masukkan Nilai Ulangan Mahasiswa"<<endl;
total=0;
	for (i=0; i<5; i++)
   {cout<<"Masukkan Nilai Ke-"<<(i+1)<<" : "; cin >>data[i];
   total = total + data[i];}
   cout<<endl;
   cout<<"================================================"<<endl;
   cout<<"Mahasiswa Dengan "<<nama<<"Punya Nilai Sebagai Berikut :\n"<<endl;
   rata = total / 5 ;
   cout<<"Total : "<<total<<endl;
   cout<<"Rata - Rata : "<<rata<<endl;
   getch(); }

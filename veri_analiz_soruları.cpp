#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
  
int main()
{
  setlocale(LC_ALL,"Turkish");
  srand(time(NULL)); 
//0-100 arasý random 500 sayý.	
 int  sayilar[500];
 
 for(int i=0;i<500;i++){
  sayilar[i]=rand()%(100-0+1)+0;
  cout<<setw(3)<<sayilar[i]<<endl;
} cout<<endl;
//25-35 arasý random 500 sayý.
  int sayilar_2[500];
    for(int i=0;i<500;i++){
    	sayilar_2[i]=rand()%(35-25+1)+25;
    	cout<<setw(3)<<sayilar_2[i]<<endl;
	}  cout<<endl;
///ortalamasý 20 ile 30 arasýnda olan 10 ve 35 arasýnda 500 tane rastgele sayý üretip yazdýrma 
	
	 int sayilar_3[500];
	 float toplam=0;
	 for(int i=0;i<500;i++){
	 	sayilar_3[i]=rand()%(35-10+1)+10;
	 	cout<<setw(3)<<sayilar_3[i];
	 	toplam+=sayilar_3[i];
	 }
      cout<<endl;
      cout<<"ortamasý: "<<toplam/500<<endl;
//Ürettiðimiz tam sayýlarýn ortalamasýný,en küçük ve en büyük deðerlerini, verilerin frekanslarýný, tek ve çift olma durumunu ortalamadan küçük olanlarýn ve olmayanlarýn bulup ekrana yazdýran program.
	 int sayilar[500];
	 int tek[500],cift[500];
	 int ort_b[500],ort_k[500];
	 int adet[101]={0};
     int top=0;
     int kucuk=100;
     int buyuk=0;
     int cift_s=0,tek_s=0,ort_bs=0,ort_ks=0;
       for(int i=0;i<500;i++){
          sayilar[i]=rand()%(100-0+1)+0;
          top+=sayilar[i];
          
          if (sayilar[i] < kucuk) 
		    kucuk = sayilar[i];
          if (sayilar[i] > buyuk) 
		    buyuk = sayilar[i];
		  
		  adet[sayilar[i]]++;
		  
		  if(sayilar[i]%2==0){
		    
           cift[cift_s]=sayilar[i];
           cift_s++;}
          else {
		   tek[tek_s]=sayilar[i];
		   tek_s++;}
		 
		  if(sayilar[i]<top/500){
		 ort_k[ort_ks]=sayilar[i];
		 ort_ks++;
} 
		  else if(sayilar[i]>top/500) {
		ort_b[ort_bs]=sayilar[i];
		ort_bs++;   
}       
}       
        
	cout<<"Aritmetik ortalama: "<<top/500<<endl;
   
    cout << "En Kucuk Sayi: " << kucuk << endl;
    cout << "En Buyuk Sayi: " << buyuk << endl;
	
	cout<<"Verilerin Adetleri: "<<" ";
	for(int i=0;i<=100;i++){
      if(adet[i]!=0)	
	  cout<<i<<" sayýsýndan "<<adet[i]<<" tane var.\n";
}
	cout<<endl;
	
	cout<<"Çift sayýlar: "<<" ";
	for(int i=0;i<cift_s;i++)
	  cout<<cift[i]<<" ";
	cout<<endl;
	cout<<"Tek sayýlar: "<<" ";
	for(int i=0;i<tek_s;i++)
	   cout<<tek[i]<<" ";
	cout<<endl;   
	
	cout<<"Ortalamadan büyük olanlar: "<<" ";
	 for(int i=0;i<ort_bs;i++){
	     if(ort_b[i]!=0)
	    cout<<ort_b[i]<<" "; }
    cout<<endl;
    cout<<"Ortalamadan küçük olanlar: "<<" ";
      for(int i=0;i<ort_ks;i++){
	     if(ort_k[i]!=0)
	    cout<<ort_k[i]<<" ";  }
	cout<<endl;
	
//0-100 arasýnda random 500 tane float veri üretimi 
	
   float sayi[500];
 
   for(int i=0;i<500;i++){
   	sayi[i]=(float)(rand()%(100-0+1)+0)+((float)rand()/RAND_MAX);
   	cout<<sayi[i]<<endl;
   }
  
//0-1 arasýnda ekrana random 500 tane float veri yazdýran program.
   float  sayi[500];
   
   for(int i=0;i<500;i++){
   	sayi[i]=((float)rand()/(float)RAND_MAX)+;
   	cout<<sayi[i]<<endl;
   }	    

  
  
  
  
  
  
  
  
  
  
  
  
  system("pause");
 return 0;	
}

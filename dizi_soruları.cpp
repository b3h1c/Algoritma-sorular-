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
  
//Bir i�letmenin son 5 y�ll�k her aya ait ciro miktarlar� (100-5000 aras�nda) veri olarak bulunmaktad�r. Bu veriler �zerinde a�a��daki hesaplamalar� yapt�ran program� yaz�n;

  int ciro[5][12];
  float ortciro[5]={0};
  
    cout << "Son 5 yila ait ciro verileri:"<<endl;
    for (int yil = 0; yil < 5; yil++) {
        cout << yil + 1 << ". Yil:"<<endl;
        for (int ay = 0; ay < 12; ay++) {
            ciro[yil][ay] = rand() % (5000-100+1)+100;  
            cout << ay + 1 << "Ay " << ": " << ciro[yil][ay] << " ";
            ortciro[yil] += ciro[yil][ay]; 
        }
       
        cout << "\nYillik Ortalama: " << ortciro[yil] << endl;
    }

    int secilenYil;
    cout << "Hesaplama yapmak istediginiz yili seciniz (1-5): ";
    cin >> secilenYil;
    secilenYil--; 

    if (secilenYil >= 0 && secilenYil < 5) {
        cout << "\n" << secilenYil + 1 << ". yilin ortalamasindan buyuk olan aylar:"<<endl;
        for (int ay = 0; ay < 12; ay++) {
            if (ciro[secilenYil][ay] > ortciro[secilenYil]) {
                cout << ay+1 << "Ay " << ": " << ciro[secilenYil][ay] << endl;
            }
        }

       
        cout << "\n" << secilenYil + 1 << ". yilin ceyrek ortalamalari:"<<endl;
        for (int ceyrek = 0; ceyrek < 4; ceyrek++) {
            float ceyrekOrtalama = 0;
            for (int ay = ceyrek * 3; ay < (ceyrek + 1) * 3; ay++) {
                ceyrekOrtalama += ciro[secilenYil][ay];
            }
            ceyrekOrtalama /= 3;  
            cout << ceyrek + 1 << ". Ceyrek Ortalama: " << ceyrekOrtalama << endl;
        }
    } else {
        cout << "Gecersiz yil secimi!"<<endl;
    }

//3X3 boyutlar�ndaki klavyeden elemanlar� girilen A ve B matrisleri aras�nda C=A+B, C=AxB ve detA hesaplay�p sonu�lar� anla��l�r bir g�rsellikte ekrana yazan program� yaz�n.
  
   int A[3][3];
   int B[3][3];
   int C[3][3];
   int detA;  
   cout<<"A matrisinin elemanlar�n� girin: "<<endl;
    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		cout<<"A["<<i+1<<"]["<<j+1<<"]: ";
			cin>>A[i][j]; 
		}
	}
    cout<<"B matrisinin elemanlar�n� girin: "<<endl;
    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		cout<<"B["<<i+1<<"]["<<j+1<<"]: ";
			cin>>A[i][j]; 
		}
	}
    cout<<"Matrislerin toplam�="<<endl;
     for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
           C[i][j]=A[i][j]+B[i][j];
           cout<<setw(5)<<C[i][j];
       }
      cout<<endl;
}
    cout<<"Matrislerin �arp�m�="<<endl;
     for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
            C[i][j]=0;
            for(int k=0;k<3;k++){
              C[i][j]+=A[i][j]*B[i][j];	
			}
           cout<<setw(6)<<C[i][j];
      }
     cout<<endl;
	 }
   detA=A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
   cout<<"A matrisinin determinant�= "<<detA<<endl;
  
  
  
  
  
  
  
  
  
  
    
  system("pause");
 return 0;	
}

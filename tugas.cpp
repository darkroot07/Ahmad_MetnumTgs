#include <stdio.h>
#include <conio.h>
#include <windows.h>

 // fungsi tambah
 int tambah ( int a, int b ){
        int hasil;
        hasil = a + b;
            return hasil;
            }
  // fungsi kurang
 int kurang ( int a, int b ){
        int hasil;
        hasil = a - b;
            return hasil;
            }
  // fungsi kali
 int kali ( int a, int b  ){
        int hasil;
        hasil = a * b;
            return hasil;
            }
  // fungsi bagi
 int bagi ( int a, int b ){
        int hasil;
        hasil = a / b;
            return hasil;
            } 					 
 // fungsi pangkat           
 int pangkat ( int a, int b ){
        int i , hasil;
        hasil=1;
        for (i=1; i<=b;i++){
            hasil = hasil * a;
            }
            return hasil;
            } 
  // fungsi menghitung 2x^2 - 4x+1
  int f(int x){
	return (2*x*x)-(4*x)+1;
}
        
 main(){
	
	int a,b,milih,x;
	menu :
    printf("\n\t\t Pilih menu yang tersedia dibawah ini");
	printf("\n\t\t     -------------------------------");
	printf("\n\t\t\t 1. Operasi penambahan");
	printf("\n\t\t\t 2. Operasi pengurangan");
	printf("\n\t\t\t 3. Operasi perkalian");
	printf("\n\t\t\t 4. Operasi pembagian");
	printf("\n\t\t\t 5. Operasi pangkat");
	printf("\n\t\t\t 6. Operasi hitung f(X)");
	printf("\n\t\t\t 7. Exit");
	printf("\n\t\t       -------------------------- ");
	printf("\n\t\t          --------------------    ");
	printf("\n\t\t            ----------------      ");
	printf("\n\t\t              ------------        ");
	printf("\n\t\t\t Masukan Pilihan Anda : ");
 	scanf("%d",&milih);  
 	switch (milih)
 	{  
    case 1:    
				printf("\n inputkan bilangan pertama : ");
				scanf("%d",&a);
				printf("\n inputkan bilingan kedua : ");
				scanf("%d",&b);  
           		printf("\n Hasil penjumlahannya adalah : %d\n",tambah(a,b));
           		printf("\n													   ");
           		goto menu;
           		break;
      			
	case 2:    
				printf("\n inputkan bilangan pertama : ");
				scanf("%d",&a);
				printf("\n inputkan bilingan kedua : ");
				scanf("%d",&b);  
           		printf("\n Hasil penguranganya adalah : %d\n",kurang(a,b));
           		printf("\n													  ");
				goto menu; 
            	break;
	case 3:    
				printf("\n inputkan bilangan pertama : ");
				scanf("%d",&a);
				printf("\n inputkan bilingan kedua : ");
				scanf("%d",&b); 
           		printf("\n Hasil perkaliannya adalah : %d\n",kali(a,b));
           		printf("\n												   ");
				goto menu;  
            	break;
	case 4:    
				printf("\n inputkan bilangan pertama : ");
				scanf("%d",&a);
				printf("\n inputkan bilingan kedua : ");
				scanf("%d",&b);   
           		printf("\n Hasil pembagianya adalah : %d\n",bagi(a,b));
           		printf("\n												  ");
				goto menu;  
            	break;        
	case 5:    
				printf("\n Masukan bilangan : ");
				scanf("%d",&a);
				printf("\n Masukan pangkat : ");
				scanf("%d",&b);  
           		printf("\n Hasil pangkatnya adalah : %d\n",pangkat(a,b));
           		printf("\n													");
				goto menu;  
            	break;
    case 6:    
				printf("\n Masukan x : ");
				scanf("%d",&x);
           		printf("\n nilai f(x) adalah : %d\n",f(x));
				printf("\n		                        ");  
            	goto menu;
				break;
            
	case 7: 	printf("\n Terimakasih");
				return 0;
				            
    default:    printf("\nInputan Tidak Tersedia");
}
 getch();
      return 0;
}

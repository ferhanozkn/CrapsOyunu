#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int zarAt(){
	return	( rand() % 6+1 );
}

void sonuchesapla(){
    
	int zar1, zar2;
	int zartoplam=0;
	int zartoplamyeni=0;
   
    srand ( time (NULL));
   
    zar1=zarAt();   
    zar2=zarAt();
	zartoplam=zar1+zar2;
	
	printf("Ilktoplam: %d + %d = %d\n\n", zar1, zar2, zartoplam);
	

	if(zartoplam==7 || zartoplam==11){
		printf("Kazandiniz :) \n");
		return;
	}
	else if(zartoplam==2 || zartoplam==3 || zartoplam==12){
		printf("Kaybettiniz :( \n");
		return;
	}
	else{
	    while(zartoplamyeni!=7){
	        zar1=zarAt();   
            zar2=zarAt();
            zartoplamyeni=zar1+zar2;
	
	        printf("Aratoplam: %d + %d = %d\n", zar1, zar2, zartoplamyeni);
	        
	        if(zartoplamyeni==zartoplam)
            {
                printf("Kazandiniz :) \n");
                return;
            }
	    }
	    printf("Kaybettiniz :( \n");
	}
	
}

int main()
{
   sonuchesapla();
   
   return 0; 
} 

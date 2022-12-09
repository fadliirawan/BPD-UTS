# include <stdio.h>
# include <conio.h>
int main(void){
	char NIM[10];
	int nilai;
	printf("input NIM : ");
	gets(NIM);
	printf("input NIM : ");
	NIM[10]=getche();
	printf("\nMasukan nilai : ", &nilai);
	scanf("%d", &nilai);
	
	if(NIM[10] %2==0){
		printf("\nNIM bilangan genap ", NIM[10]);
	}
	else{
		printf("\nbukan bilangan genap", NIM[10]);
	}
	
    switch (NIM[10] % 2 != 0){
    	case 1 : printf("\nNIM bilangan ganjil", NIM[10]) ; break;
    	default : printf("\nbukan bilangan ganjil", NIM[10]); break;
	}
	
	if (nilai >= 76 && nilai <=100){
		printf("\nGrade A");
	}
    else if (nilai >= 66 && nilai <= 75){
    	printf("\nGrade B");
	}
	else if (nilai >= 51 && nilai <=65){
		printf("\nGrade C");
	}
	else{
		printf("\ngrade D");
	}
}

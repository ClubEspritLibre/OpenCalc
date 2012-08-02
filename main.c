#include<stdio.h>
float division(int a, int b){
	return a/b;
}

int sum (int a,int b){
        return a+b;
}
int substraction(int a, int b){
	return a-b;
}

float product(int a, int b){
	return a*b;
}

int main(int argc, char **argv){

float a,b,res ;
int choice  ;
printf (" \n Welcome to OpenCalc \n "); 
printf (" \n choose an fonctions \n 1:addition ,2:soutraction, 3:product"); 
scanf ("%d",choice);

switch (choice) {

case  1 :
	printf(" \n addition \n");
	res=somme(a,b);	
	printf("\n resultat : %f \n",res); 
	break;

case 2 :

	printf(" \n soustraction \n");
	res=soustraction(a,b);	
	printf("\n resultat : %f \n",res);
	break;

case 3 :
	printf(" \n product \n");
        res=product(a,b);  
        printf("\n resultat : %f \n",res);
       
	break;

default: 

	printf("please enter a correct choice"); 




	return 0 ;
}
}

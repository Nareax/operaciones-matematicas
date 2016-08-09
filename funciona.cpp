#include <iostream>
#include <stdio.h>

int main(int argc, char** argv) {
	int a,b,c,d,e,f,g=0,h=0,i=0,j=0,k=0,r=0,cont=1,numero=0, numeroi=0, numerof=0, mayor=0, menor=0, mayor1=0, menor1=0;
	
	do{
		r=0;
		 do{
			printf("\nporfavor introdusca el numero para probar la constante de keppler ");
			scanf(" %d", &a);
			if(a<1000){
				printf("\nporfavor introdusca un numero mayor a 1000");
			}
			if(a>10000){
				printf("\nla constate de keppler solo se puede probar con numeros de 4 cifras");
			}
		}while(a<1000 || a>10000);
		
		do{
				
				do{
		e=a;
		b=e%10;
		e=e/10;
		c=e%10;
		e=e/10;
		d=e%10;
		f=e/10;
		printf("\n %d", b);
		printf("\n %d", c);
		printf("\n %d", d);
		printf("\n %d", f);
		
		if(b==c && b==d && b==f && c==d && c==f && d==f){
			printf("\nel numero es repedigits, lo lamento no se puede usar este numero \npara la demostracion de keppler");
		}
		}while(b==c && b==d && b==f && c==d && c==f && d==f);
	
			mayor=b;
			
				if(c>mayor ){
				mayor=c;
			}
				if(d>mayor ){
				mayor=d;
			}
				if(f>mayor ){
				mayor=f;
			}
			menor=b;
			
				if(c<menor ){
				menor=c;
			}
				if(d<menor ){
				menor=d;
			}
				if(f<menor ){
				menor=f;
			}
		printf("\nel numero mayor es  %d y el numero menor es %d", mayor, menor);
		
	    mayor1=menor;
	    
	    if(b>mayor1 && b<mayor){
	    	mayor1=b;
		}
		if(c>mayor1 && c<mayor){
	    	mayor1=c;
		}
		if(d>mayor1 && d<mayor){
	    	mayor1=d;
		}
		if(f>mayor1 && f<mayor){
	    	mayor1=f;
		}
		
		if(b<mayor1 && b>menor){
			menor1=b;
		}
		if(c<mayor1 && c>menor){
			menor1=c;
		}
		if(d<mayor1 && d>menor){
			menor1=d;
		}
		if(f<mayor1 && f>menor){
			menor1=f;
		}
		
		printf("\nel numero mayor entre el mayor y el menor es %d y el numero menor entre el mayor y el menor es %d", mayor1, menor1);
		numero=numero*10+mayor;
		numero=numero*10+mayor1;
		numero=numero*10+menor1;
		numero=numero*10+menor;
		numeroi=numeroi*10+menor;
		numeroi=numeroi*10+menor1;
		numeroi=numeroi*10+mayor1;
		numeroi=numeroi*10+mayor;
	
		printf("\nel numero de mayor a menor es : %d", numero);
		printf("\nel numero de menor a mayor es : %d", numeroi);
		
		numerof=numero-numeroi;
		printf("\nel numero resultante de la resta de los anteriores es %d", numerof);
		
		cont++;
		printf("\nesta es la vuelta %d", cont);
		
		if(numerof==6174){
			printf("\nes un numero de kepple");
		}
		
		a=numerof;
		numero=0;
		numeroi=0;
		b=0;
		c=0;
		d=0;
		f=0;
		mayor=0;
		menor=0;
		mayor1=0;
		menor1=0;
		
		}while(numerof!=6174 || cont==7);
		
		if(numerof!=6174){
			printf("\nel numero no es kepple");
		}
			
    printf("\ndesea continuar probando numeros, si(1) no(2)");
    scanf(" %d", &r);
	}while(r=1);
	return 0;
}

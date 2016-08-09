#include <iostream>
#include <stdio.h>

int main(int argc, char** argv) {
	int as,be=0, to, te, la, pos=0, par=0, impar=0, neg=0, medio=0, numero=0, numerof, mayor=-99999, menor=99999;
	float porcentaje;
	
	/*cilos*/
	
	/*for(as=0;as<20;as++){
		be=be+(as-1)*(as-1);
	}
	printf("\n sumatoria=%d", be);*/
	
	/*hallar la cantidad de positivos, pares, impares, porcentajes de numeros negativos, cantidad de numeros entre{-30 y 90} promedio, numero mayor, numero menor*/
	
	printf("\nporfavor introdusca el numero de conjutos de numeros que desee");
	scanf("%d", &to);
	
	for(te=0; te<to; te++){
		la=0;
		printf("numero: ");
		scanf("%d", &la);
		if(la>0){
			pos++;
		}
		if(la%2==0){
			par++;
		}
		if(!(la%2==0)){
		  impar++;
		}
		if(la<0){
			neg++;
		}
		if(la>=-30 && la<=30){
			medio++;
		}
		numero=numero+la;
		
		if(la>mayor){
			mayor=la;
		}
		if(la<menor){
			menor=la;
		}
		
	
	}
	porcentaje= (neg*100)/to;
	numerof=numero/to;
	
	printf("\nla cantidad de numeros positivos son: %d", pos);
	printf("\nla cantidad de numeros pares son: %d", par);
	printf("\nla cantidad de numeros impares son: %d", impar);
	printf("\nla cantidad de numeros negativos son: %d", neg);
	printf("\nel porcentaje de numeros negativos es: %f", porcentaje);
	printf("\nla cantidad numeros entre -30 y 30 son: %d ", medio);
	printf("\nel promedio de numeros es: %d", numerof);
	printf("\nel numero mayor es: %d", mayor);
	printf("\nel numero menor es: %d", menor);
	
	
	
	return 0;
}

#include <stdio.h>

int main()
{
    // Variáveis
    long unsigned primeiraParteIP;
    long unsigned segundaParteIP;
    long unsigned terceiraParteIP;
    long unsigned quartaParteIP;

    long unsigned calculoPrimeiraParte;
    long unsigned calculoSegundaParte;
    long unsigned calculoTerceiraParte;
    long unsigned calculoQuartaParte;


    // Solicitando e guardando informações
	printf("Informe a primeira parte do IP: ");
    scanf("%lu", &primeiraParteIP);

	printf("Informe a segunda parte do IP: ");
    scanf("%lu", &segundaParteIP);

	printf("Informe a terceira parte do IP: ");
    scanf("%lu", &terceiraParteIP);

	printf("Informe a quarta parte do IP: ");
    scanf("%lu", &quartaParteIP);


    // Condicionais
    if(primeiraParteIP <= 255){
        calculoPrimeiraParte = primeiraParteIP * 256 * 256 * 256;
    } else {
        printf("Endereço IP incorreto. Insira o número de 0 à 255\n");
    }

    if(segundaParteIP <= 255){
        calculoSegundaParte =  segundaParteIP * 256 * 256;
    } else {
        printf("Endereço IP incorreto. Insira o número de 0 à 255\n");
    }
    
    if(terceiraParteIP <= 255) {
        calculoTerceiraParte = terceiraParteIP * 256;
    } else {
        printf("Endereço IP incorreto. Insira o número de 0 à 255\n");
    }

    if(quartaParteIP <= 255){
        calculoQuartaParte = quartaParteIP * 1;
    } else {
        printf("Endereço IP incorreto. Insira o número de 0 à 255\n");
    }

    // Printando o resultado 
    printf("O endereço IP legível por humano é: %lu.%lu.%lu.%lu\n", primeiraParteIP, segundaParteIP, terceiraParteIP, quartaParteIP);
    printf("O endereço IP legível por humano é: %lu\n", calculoPrimeiraParte + calculoSegundaParte + calculoTerceiraParte + calculoQuartaParte);
	return 0;
}
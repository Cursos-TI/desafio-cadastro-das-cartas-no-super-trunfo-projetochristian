#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    char estado1;                  // ESTADO A.
    char codigo1[20];              // CÓDIGO DA CARTA.
    char cidade1[20];               // CIDADE BELÉM.
    int populacao1;                // POPULAÇÃO. 
    float area1;                   // ÁREA.
    float pib1;                    // PIB.
    int pontosturisticos1;          // PONTOS TURISTICOS. 


    estado1 ='A';
    codigo1[20] = "A1";
    cidade1[20] ="belem";
    populacao1 = 8600000;
    area1 = 1245000000;
    pib1 = 262000;
    pontosturisticos1 = 3;




    printf("Carta 1:\n");                        //IMPRIMIR CARTA
    printf("Estado: %c\n", estado1);               //IMPRIMIR ESTADO 

    printf("Código: %c\n\n\n", codigo1);                


    






    return 0;
}

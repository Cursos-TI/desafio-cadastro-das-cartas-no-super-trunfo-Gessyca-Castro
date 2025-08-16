#include <stdio.h>

int main() {
    
    //CARTA 1
    
    char Estado1[3];                           // letra referente ao estado da carta.
    char Codigo1[4];                           // codigo da carta - limitado a 3 caracteres.
    char Nome1[50];                            // nome da cidade.
    int Populacao1, Pontos1;                   // numero de habitantes e numero de pontos turisticos na cidade.
    float Area1;                               // area geografica da cidade.
    float PIB1;                                // produto interno bruto.
    float densidade1;                          // densidade populacional da cidade.
    float percapta1;                           // PIB per capta da cidade.
    float resultado1;


    printf("\n Preencha os campos abaixo com os dados da cidade escolhida na CARTA 1 e CARTA 2:\n"); 
    printf("\n Carta 1: \n");

    printf("Estado: ");                        // Utilizar uma letra de A a H para identificar o estado 
    scanf("%2s", &Estado1);                    
        
    printf("Codigo da carta(ex: B03): ");      // Inserir a letra do estado seguida de um numero de 01 a 04.  
    scanf("%3s", &Codigo1);

    printf("Nome da cidade: ");
    scanf("%49s", &Nome1);

    printf("População: ");                      // Acrescentar o numero de habitantes da cidade.
    scanf("%d", &Populacao1);     

    printf("Area: ");                           // Area da cidade em quilometros quadrados.
    scanf("%f", &Area1);

    printf("PIB: ");                            // Produto interno bruto da cidade.
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: ");    // Inserir a quantidade de pontos turisticos da cidade.
    scanf("%d", &Pontos1);
    
    percapta1 = PIB1 / Populacao1;              // PIB dividido pela população nos dará o valor do PIB per capta.
    densidade1 = Populacao1 / Area1;            // o valor declarado na população será divido pela area para descobrir a densidade.
 
    //CARTA 2

    char Estado2 [3];                            // letra referente ao estado da carta 
    char Codigo2 [4];                            // codigo da carta - limitado a 3 caracteres.
    char Nome2 [50];                             // nome da cidade.
    int Populacao2, Pontos2;                     // numero de habitantes e numero de pontos turisticos na cidade.
    float Area2;                                 // area geografica da cidade.
    float PIB2;                                  // produto interno bruto.
    float densidade2;                            // densidade populacional da cidade.
    float percapta2;                             // PIB per capta da cidade.

    printf("\n Carta 2: \n");
    
    printf("Estado: ");                          // Utilizar uma letra de A a H para identificar o estado.
    scanf("%2s", &Estado2);                      
        
    printf("Codigo da carta(ex: B03): ");        // Inserir a letra do estado seguida de um numero de 01 a 04.  
    scanf("%3s", &Codigo2); 

    printf("Nome da cidade: ");
    scanf("%49s", &Nome2);

    printf("População: ");                       // Acrescentar o numero de habitantes da cidade.
    scanf("%d", &Populacao2);     

    printf("Area: ");                            // Area da cidade em quilometros quadrados.
    scanf("%f", &Area2);

    printf("PIB: ");                             // Produto interno bruto da cidade.
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: ");     // Inserir a quantidade de pontos turisticos da cidade.
    scanf("%d", &Pontos2);
    
    percapta2 = PIB2 / Populacao2;               // PIB dividido pela população nos dará o valor do PIB per capta.
    densidade2 = Populacao2 / Area2;             // o valor declarado na população será divido pela area para descobrir a densidade.


    printf("\n Abaixo o resultado apresentado:");

    //Resultado dos dados preenchidos anteriormente CARTA 1:
    printf("\n Carta 1: \n");
    printf("- Estado: %s\n", Estado1);
    printf("- Codigo da carta: %s\n", Codigo1);
    printf("- Nome da cidade: %s\n- População: %d\n", Nome1, Populacao1);
    printf("- Area: %.2f km² \n- PIB: %.2f milhões \n", Area1, PIB1);
    printf("- Numero de pontos turisticos: %d\n", Pontos1);  
    printf("- Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("- PIB per capta: %.2f reais \n", percapta1);

    
    //Resultado dos dados preenchidos anteriormente CARTA 2:
    printf("\n Carta 2: \n");
    printf("- Estado: %s\n", Estado2);
    printf("- Codigo da carta: %s\n", Codigo2);
    printf("- Nome da cidade: %s\n- População: %d\n", Nome2, Populacao2);
    printf("- Area: %.2f km² \n- PIB: %.2f milhões \n", Area2, PIB2);
    printf("- Numero de pontos turisticos: %d\n", Pontos2);
    printf("- Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("- PIB per capta: %.2f reais \n", percapta2);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>// biblioteca para fazer o dado funcionar
#include <string.h>// biblioteca para fazer string varpável

// Parâmetro para rolar os dados de 20 lados
void AtD20(int *dadosmatriz, int qntdados) {
    for (int i = 0; i < qntdados; i++) {
        dadosmatriz[i] = (rand() % 20) + 1;
    }
}

// Parâmetro para selecionar o dado para o atributo
int atribuirAtributo(int numerodoDado, int *dadosatb, int *dadosUtilizados) {
    if (dadosUtilizados[numerodoDado - 1]) {
        printf("\nEsse dado já foi vinculado a outro atributo.\n");
        return -1;
    }
    dadosUtilizados[numerodoDado - 1] = 1;// Marcar o dado como utilizado
    return dadosatb[numerodoDado - 1];
}

void inicio();

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    char nome[30];
    int For, Des, Const, Int, Sab, Car, aux = 0;// Cada atributo
    int dados[6] = {0};// Dados dos atributos
    int dadosUtilizados[6] = {0};// Dados utilizados para cada atributo
    int rerolagens = 3, classe;// Número de rerolagens permitidas e Variável para atribuir a classe
    char reRolar, nomeAtributo[30], nomeClasse[30], atributoClasse[30];

    inicio();

    printf("\n\n");
    
    // Atribuir nome a ficha
    printf("Qual nome do seu personagem?\n");
    scanf(" %[^\n]", nome);
    
    printf("\nVamos selecionar a classe do seu personagem.\n");
    printf("(Classe || Atributo principal)\n");
    printf("\n1- Guerreiro || Força\n2- Ladino || Destreza\n3- Curandeiro || Constituição\n4- Mago || Inteligência\n5- Bardo || Carisma\n6- Druida || Sabedoria\n\n");
    scanf("%d", &classe);
    
    switch(classe)
    {
        case 1:
            strcpy(nomeClasse, "Guerreiro");
            strcpy(atributoClasse, "Força");
            break;
        case 2:
            strcpy(nomeClasse, "Ladino");
            strcpy(atributoClasse, "Destreza");
            break;
        case 3:
            strcpy(nomeClasse, "Curandeiro");
            strcpy(atributoClasse, "Constituição");
            break;
        case 4:
            strcpy(nomeClasse, "Mago");
            strcpy(atributoClasse, "Inteligência");
            break;
        case 5:
            strcpy(nomeClasse, "Bardo");
            strcpy(atributoClasse, "Carisma");
            break;
        case 6:
            strcpy(nomeClasse, "Druida");
            strcpy(atributoClasse, "Sabedoria");
            break;
    }
    
    printf("\nClasse selecionada: %s\n", nomeClasse);
    printf("Atributo preferível: %s\n", atributoClasse);

    printf("\nVamos rolar seus atributos agora!\n");
    // Loop para cada rolagem de dados de atributos
    while (rerolagens >= 0) {
        AtD20(dados, 6);
        
        printf("O resultado dos seus atributos foram:\n");
        for (int j = 0; j < 6; j++) {
            printf("Dado %d: %d\n", j + 1, dados[j]);
        }
        
        printf("Deseja rerolar? Você tem %d rerolagens restantes (digite S ou N): ", rerolagens);
        scanf(" %c", &reRolar);
    
        if (reRolar == 'S' || reRolar == 's') {
            rerolagens--;
        } else {
            break;
        }
    }
    // Usei esse Clear aqui para poluir menos a tela 
    system("cls || clear");

    printf("\nVamos agora atribuir os valores\n");
    printf("Temos esses dados:\n\n");
    printf("|D1 = [%.2d] | D2 = [%.2d] | D3 = [%.2d] |\n", dados[0], dados[1], dados[2]);
    printf("|D4 = [%.2d] | D5 = [%.2d] | D6 = [%.2d] |\n", dados[3], dados[4], dados[5]);
    
    printf("\nOs atributos são:\n");
    printf(" Força\n Destreza\n Constituição\n Inteligência\n Carisma\n Sabedoria\n");

    // Nomes dos atributos
    printf("\nSabendo que os atributos vão seguir nessa ordem acima e que sua classe (%s) prioriza (%s)\nEscolha:\n", nomeClasse, atributoClasse);
    for (int i = 0; i <= 5; i++) {
        switch (i) {
            case 0:
                strcpy(nomeAtributo, "FORÇA");
                break;
            case 1:
                strcpy(nomeAtributo, "DESTREZA");
                break;
            case 2:
                strcpy(nomeAtributo, "CONSTITUIÇÃO");
                break;
            case 3:
                strcpy(nomeAtributo, "INTELIGÊNCIA");
                break;
            case 4:
                strcpy(nomeAtributo, "CARISMA");
                break;
            case 5:
                strcpy(nomeAtributo, "SABEDORIA");
                break;
        }

        printf("\nPara o atributo %s, qual número do dado você deseja vincular: ", nomeAtributo);
        scanf("%d", &aux);

         // Chamando a função para vincular e exibir o atributo
        int atributo = atribuirAtributo(aux, dados, dadosUtilizados);
        if (atributo != -1) {
            printf("\nSeu atributo %s é %d\n", nomeAtributo, atributo);

            // Atribuir o valor do atributo à variável correspondente
            switch (i) {
                case 0: 
                    For = atributo;
                    break;
                case 1:
                    Des = atributo;
                    break;
                case 2:
                    Const = atributo;
                    break;
                case 3:
                    Int = atributo;
                    break;
                case 4:
                    Car = atributo;
                    break;
                case 5:
                    Sab = atributo;
                    break;
            }
        }
        else
        {
            printf("Por favor, escolha outro!\n");
            i--;    
        }
    }

    system("cls || clear");
   
    // Imprimir cada atributo e seu valor vinculado
    printf("\nAtributos do personagem %s:\n", nome);
    printf("\nClasse: %s\n\n", nomeClasse);
    printf("Força: %d\n", For);
    printf("Destreza: %d\n", Des);
    printf("Constituição: %d\n", Const);
    printf("Inteligência: %d\n", Int);
    printf("Carisma: %d\n", Car);
    printf("Sabedoria: %d\n", Sab);

    return 0;
}

void inicio()
{
    setlocale(LC_ALL, "");
    char respostaInicio, tutorialAtributo;
    
    printf("Bem vindo(a) ao Gera Fischar!");
    printf("\nAqui vamos te ajudar a montar a ficha para o seu personagem de RPG!\nDeseja ver um tutorial de como RPG's funcionam?(S/N)");
    scanf("%c", &respostaInicio);
    
    while(1)
    {
        if(respostaInicio == 'S' || respostaInicio == 's')
        {
        //Tutorial
        printf("\nNa sua ficha de RPG você terá o nome, a classe e os atributos do personagem.\n");
        printf("\nClasse é o que definirá o seu papel no jogo.\n(Determina as habilidades, aptidões e estilo de jogo do personagem.)");
        printf("\nCada classe tem habilidades e limitações específicas, então escolha com atenção, pois isso influenciará como o personagem se desenvolverá");
    
            //As Classes
            printf("\n\nAs classes são:\n");
               //Guerreiro
                printf("\nGuerreiro:\n Focados no combate corpo a corpo, eles são mestres no uso de armas e armaduras pesadas, e sua principal ");
                printf("função é proteger o grupo\ne enfrentar os inimigos diretamente.");
                printf("\n Os guerreiros são conhecidos por sua resistência e capacidade de infligir dano físico significativo aos oponentes.");
                printf("\n Eles são ideais para jogadores que preferem um estilo de jogo direto e focado em combate.\n\n");
                
                //Ladino
                printf("Ladino:\n Especialistas em furtividade, astúcia e habilidades sociais.\n Eles são mestres em movimento silencioso, ");
                printf("arrombamento de fechaduras, furtos e emboscadas.\n Além disso, possuem grande habilidade em detectar armadilhas e desarmá-las.");
                printf("\n Os ladinos são frequentemente usados para explorar, sabotar ou se infiltrar em áreas inimigas, bem como para desvendar mistérios e segredos.\n\n");
                
                
                //Curandeiro
                printf("Curandeiro:\n Também conhecidos como clérigos ou sacerdotes, os curandeiros são especialistas em magia de cura e apoio.");
                printf("\n Eles têm o poder de curar ferimentos, remover doenças e restaurar energia vital aos aliados.");
                printf("\n Além disso, os curandeiros podem possuir habilidades para proteger o grupo contra efeitos negativos, banir mortos-vivos e até ");
                printf("mesmo invocar\npoderes divinos para derrotar inimigos.\n Eles desempenham um papel crucial na manutenção da saúde e na sobrevivência do grupo.\n\n");
                
                
                //Mago
                printf("Mago:\n Usuários de magia arcana, estudiosos do oculto e manipuladores das energias místicas do universo.");
                printf("\n Eles lançam feitiços poderosos que podem causar dano devastador, controlar as mentes dos inimigos,");
                printf(" alterar a realidade e até mesmo\ninvocar criaturas mágicas para auxiliá-los.");
                printf("\n Os magos são especialistas em conhecimento arcano e são mais limitados em combate físico, mas compensam isso com sua vasta gama de habilidades mágicas.\n\n");
                
                //Bardo
                printf("Bardo:\n Artistas versáteis e contadores de histórias talentosos.");
                printf("\n Eles possuem habilidades musicais, poéticas e teatrais que os permitem encantar, inspirar e manipular as emoções dos outros.");
                printf("\n Além disso, os bardos são capazes de utilizar magias arcanas e habilidades de combate para apoiar o grupo de diversas maneiras,\n");
                printf("seja através de cura, buffs, debuffs ou até mesmo ataques diretos.\n Sua versatilidade os torna valiosos tanto em combate quanto em situações sociais e de exploração.\n\n");
                
                //Druida
                printf("Druida:\n Guardiões da natureza e praticantes de magia druídica.");
                printf("\n Eles têm uma forte conexão com os elementos naturais, podendo invocar a fúria dos elementos, transformar-se em animais e manipular a flora e fauna ao seu redor.");
                printf("\n Os druidas são especialistas em cura natural, bem como em controlar ou convocar criaturas da natureza para lutar ao seu lado.");
                printf("\n Sua ligação com a natureza os torna defensores do equilíbrio e protetores das terras selvagens.\n\n");
            
                printf("Deseja continuar para o tutorial de atributos?(S/N)");
                scanf(" %c", &tutorialAtributo);
                
                while(1)
                {
                
                    if(tutorialAtributo == 'S' || tutorialAtributo == 's')
                        {
                            system("cls || clear");
                            
                            //Atributos
                            printf("Atributos são valores numéricos que representam as habilidades e as capacidades do personagem.");
                            printf("\nValores esses que servem como base para determinar a eficácia do personagem em diversas habilidades e ações.\n");
                            printf("Sendo levados em consideração, em uma jogada, os atributos básicos, da ficha do personagem, somados com o dado lançado no momento.\n\n");
                            printf("Os atributos são:\n\n");
                                //Força
                                printf("Força:\n A força é um atributo que representa a capacidade física do personagem.");
                                printf("\n Significando que o personagem é mais capaz em atividades que exigem força física, como combate corpo a corpo,\n");
                                printf("levantamento de objetos pesados e resistência a efeitos que demandam vigor físico, como ser empurrado ou derrubado.\n\n");
                                
                                //Destreza
                                printf("Destreza:\n A destreza está relacionada à agilidade, coordenação e reflexos do personagem.");
                                printf("\n Resultando em maior precisão em ataques à distância, capacidade de esquiva a ataques inimigos, ");
                                printf("habilidades furtivas e capacidade de realizar acrobacias ou manobras de evasão.\n\n");
                                
                                //Constituição
                                printf("Constituição:\n A constituição ou vigor representa a saúde e a resistência do personagem.");
                                printf("\n Significando que o personagem pode suportar mais dano, resistir a efeitos adversos, como veneno ou doenças, e manter sua resistência física por mais tempo.\n\n");
                                
                                //Inteligência
                                printf("Inteligência:\n A inteligência representa a capacidade mental, conhecimento e habilidades mágicas do personagem.");
                                printf("\n Resultando em maior eficácia em habilidades mágicas, capacidade de resolver problemas complexos, conhecimento em áreas acadêmicas e aptidão para\n identificar e utilizar artefatos mágicos.\n\n");
                                
                                
                                //Carisma
                                printf("Carisma:\n O carisma mede a presença, confiança e habilidades sociais do personagem.");
                                printf("\n Uma alta pontuação de carisma pode influenciar a capacidade do personagem de persuadir outros, liderar grupos, negociar com NPCs e influenciar\n as interações sociais de maneira geral.\n\n");
                                
                                //Sabedoria
                                printf("Sabedoria:\n A sabedoria reflete a percepção, intuição e experiência do personagem.");
                                printf("\n Resultando em maior resistência a efeitos mentais, como encantamentos ou ilusões, capacidade de perceber ameaças e armadilhas ocultas\n e sabedoria prática em situações do dia a dia.\n\n");
                            
                            break;
                        }
                
                        else if(tutorialAtributo == 'N' || tutorialAtributo == 'n')
                        break;
                        
                        else
                        {
                            printf("\nResposta inválida!\nResponda com \'S\' ou \'s\' para \"Sim\" e \'N\' ou \'n\' para \"Não\"");
                            scanf(" %c", &tutorialAtributo);
                        }
                }
        }
        
        else if(respostaInicio == 'N' || respostaInicio == 'n')
        break;
        
        else
        {
            printf("\nResposta inválida!\nResponda com \'S\' ou \'s\' para \"Sim\" e \'N\' ou \'n\' para \"Não\"");
            scanf(" %c", &respostaInicio);
        }
        break;
    }
}
    

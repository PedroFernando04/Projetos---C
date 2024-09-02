#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>// biblioteca para fazer o dado funcionar
#include <string.h>// biblioteca para fazer string variável


int modificadores (int valor){
	 if (valor == 1) {
        return -3;
    } else if (valor >= 2 && valor <= 4) {
        return -2;
    } else if (valor >= 5 && valor <= 7) {
        return -1;
    } else if (valor >= 8 && valor <= 11) {
        return 0;
    }  else if (valor >= 12 && valor <= 14) {
        return 1;
	} else if (valor >= 15 && valor <= 17) {
        return 2;
	}else {
		return 3;
    }
}

// Parâmetro para rolar os dados de 20 lados
void AtD20(int *dadosmatriz, int qntdados) {
    for (int i = 0; i < qntdados; i++) {
        dadosmatriz[i] = (rand() % 20) + 1;
    }
}

// Parâmetro para selecionar o dado para o atributo
int atribuirAtributo(int numerodoDado, int *dadosatb, int *dadosUtilizados) {
    if (dadosUtilizados[numerodoDado - 1]) {

        return -1;
    }
    dadosUtilizados[numerodoDado - 1] = 1;// Marcar o dado como utilizado
    return dadosatb[numerodoDado - 1];
}

void inicio();
void tutorial_classe();
void tutorial_atributo();
void tutorial_gera();
int pv();


int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    char nome[30];
    int vida = 0, dadovida = 0;
    int For = 0, Des = 0, Const = 0, Int = 0, Sab = 0, Car = 0, aux = 0;// Cada atributo
    int dados[6] = {0};// Dados dos atributos
    int dadosUtilizados[6] = {0};// Dados utilizados para cada atributo
    int rerolagens = 3, classe;// Número de rerolagens permitidas e Variável para atribuir a classe
    char reRolar, nomeAtributo[30], nomeClasse[30], atributoClasse[30];

    inicio();

    // Atribuir nome a ficha
    printf("Qual nome do seu personagem?\n");
    scanf(" %[^\n]", nome);
    
    //Limpar o tutorial e manter o nome
    system("cls || clear");
    printf("Nome: %s", nome);
    
    //Escolha de classe
    printf("\n\nVamos selecionar a classe do seu personagem.\n");
    printf("(Classe || Atributo principal)\n");
	printf("\n1- Guerreiro || Força");
	printf("\n2- Ladino    || Destreza");
	printf("\n3- Curandeiro|| Constituição");
	printf("\n4- Mago      || Inteligência");
	printf("\n5- Bardo     || Carisma");
	printf("\n6- Druida    || Sabedoria");

	printf("\n\n");
 
 	printf("Qual numero da classe que voce deseja? ");
    scanf("%d", &classe);
    system("cls || clear");
    
    //Atribuição de classe e atributo favorito
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
    
    printf("Classe selecionada: %s\n", nomeClasse);
    printf("Atributo preferível: %s\n", atributoClasse);

    printf("\nVamos rolar seus atributos agora!\n");
    // Loop para cada rolagem de dados de atributos
    while (rerolagens >= 0) {
        AtD20(dados, 6);
        
        printf("O resultado dos seus atributos foram:\n");
        for (int j = 0; j < 6; j++) {
            printf("Dado %d: %.2d\n", j + 1, dados[j]);
        }
        
        printf("Deseja rerolar? Você tem %d rerolagens restantes (digite S ou N): ", rerolagens);
        scanf(" %c", &reRolar);
    
        if (reRolar == 'S' || reRolar == 's') {
            rerolagens--;
            system("cls || clear");
            printf("Classe selecionada: %s\n", nomeClasse);
			printf("Atributo preferível: %s\n", atributoClasse);
			printf("\n");
            
        } else {
            break;
        }
    }
    // Usei esse Clear aqui para poluir menos a tela 
    system("cls || clear");

    printf("Vamos agora atribuir os valores\n");
    printf("Temos esses dados:\n\n");
    printf("|D1 = [%.2d] | D2 = [%.2d] | D3 = [%.2d] |\n", dados[0], dados[1], dados[2]);
    printf("|D4 = [%.2d] | D5 = [%.2d] | D6 = [%.2d] |\n", dados[3], dados[4], dados[5]);
    
   	printf("\nOs atributos são:\n");
	printf("Força:        %d\n", For);
	printf("Destreza:     %d\n", Des);
	printf("Constituição: %d\n", Const);
	printf("Inteligência: %d\n", Int);
	printf("Carisma:      %d\n", Car);
	printf("Sabedoria:    %d\n", Sab);	 

    // Nomes dos atributos
    printf("\nSua classe (%s) prioriza (%s)\n", nomeClasse, atributoClasse);
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
        
        //Atribuição dos dados
        printf("\nPara o atributo %s, qual número do dado você deseja vincular: ", nomeAtributo);
        scanf("%d", &aux);
        
        while(aux > 6 || aux < 1)
        {
            system("cls || clear");
            printf("Número inválido!\n");
            printf("Digite o valor de um dos dados.\n");
            
            printf("\nVamos agora atribuir os valores\n");
            printf("Temos esses dados:\n\n");
            printf("|D1 = [%.2d] | D2 = [%.2d] | D3 = [%.2d] |\n", dados[0], dados[1], dados[2]);
            printf("|D4 = [%.2d] | D5 = [%.2d] | D6 = [%.2d] |\n", dados[3], dados[4], dados[5]);
            
           	printf("\nOs atributos são:\n");
        	printf("Força:        %d\n", For);
        	printf("Destreza:     %d\n", Des);
        	printf("Constituição: %d\n", Const);
        	printf("Inteligência: %d\n", Int);
        	printf("Carisma:      %d\n", Car);
        	printf("Sabedoria:    %d\n", Sab);
        	
    	    printf("\nSua classe (%s) prioriza (%s)\nEscolha:\n", nomeClasse, atributoClasse);
        	printf("\nPara o atributo %s, qual número do dado você deseja vincular: ", nomeAtributo);
            scanf("%d", &aux);
        }

         // Chamando a função para vincular e exibir o atributo
        int atributo = atribuirAtributo(aux, dados, dadosUtilizados);
        if (atributo != -1) {
		system("cls || clear");
		printf("Seu atributo %s é %d\n", nomeAtributo, atributo);
		printf("Temos esses dados:\n\n");
		printf("|D1 = [%.2d] | D2 = [%.2d] | D3 = [%.2d] |\n", dados[0], dados[1], dados[2]);
		printf("|D4 = [%.2d] | D5 = [%.2d] | D6 = [%.2d] |\n", dados[3], dados[4], dados[5]);
		printf("\n");
        
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
            system("cls || clear");
            
            printf("\nEsse dado já foi vinculado a outro atributo.\n");
	        printf("Por favor, escolha outro!\n\n");
            
            printf("\nVamos agora atribuir os valores\n");
            printf("Temos esses dados:\n\n");
            printf("|D1 = [%.2d] | D2 = [%.2d] | D3 = [%.2d] |\n", dados[0], dados[1], dados[2]);
            printf("|D4 = [%.2d] | D5 = [%.2d] | D6 = [%.2d] |\n", dados[3], dados[4], dados[5]);
            printf("\n");
            
            i--;     
        }
	printf("Força:        %d\n", For);
	printf("Destreza:     %d\n", Des);
	printf("Constituição: %d\n", Const);
	printf("Inteligência: %d\n", Int);
	printf("Carisma:      %d\n", Car);
	printf("Sabedoria:    %d\n", Sab);	 
	printf("\nSua classe (%s) prioriza (%s)\nEscolha:\n", nomeClasse, atributoClasse);
    }
       
    vida = pv(classe,Const);
    pv(classe,Const);

    //Limpar atribuições para ficar só a ficha no final 
    system("cls || clear");

    
    // Imprimir cada atributo e seu valor vinculado

    printf("Atributos do personagem: \n\n");
    printf("Nome: %s\n", nome);
    printf("Classe: %s\n\n", nomeClasse);
    printf("PV: %.2d \n" , vida);
    printf("Força:        %.2d (Modificador: %.1d)\n", For, modificadores(For));
    printf("Destreza:     %.2d (Modificador: %.1d)\n", Des, modificadores(Des));
    printf("Constituição: %.2d (Modificador: %.1d)\n", Const, modificadores(Const));
    printf("Inteligência: %.2d (Modificador: %.1d)\n", Int, modificadores(Int));
    printf("Carisma:      %.2d (Modificador: %.1d)\n", Car, modificadores(Car));
    printf("Sabedoria:    %.2d (Modificador: %.1d)\n", Sab, modificadores(Sab));

    return 0;
}


int pv(int classe, int Const) // Calcula os pontos de vida iniciais (vida da classe + const)
{
    system("cls || clear");
    
    
    int vida = 0, dadovida = 0;
    int dvariavel; //d6, d8 ou d10
    char enter;
    
    printf("Agora vamos calcular a vida do personagem\n");
    printf("(A vida é definida por um dado de vida + Constituição do personagem)\n\n");
    printf("O dado de vida é definido pela classe do personagem, sendo: \n\n");
    printf("Guerreiro  |  d10\n");
    printf("Ladino     |  d8\n");
    printf("Curandeiro |  d8\n");
    printf("Mago       |  d6\n");
    printf("Bardo      |  d8\n");
    printf("Druida     |  d8\n");


    if(classe == 1 )
    {
        dadovida = (rand() % 10);
        dvariavel = 10;
    }

    else if(classe == 4)
    {
        dadovida = (rand() % 6);
        dvariavel = 6;
    }

    else if(classe > 1 && classe < 7)
    {
        dadovida = (rand() % 8);
        dvariavel = 8;
    }
    
    vida = dadovida + Const;
   
    printf("\n\nBaseado na classe de seu personagem, você tem direito a um dado de %d lados\n\n", dvariavel); 

       
    printf("Sua rolagem de d%d resultou em %d\n" , dvariavel, dadovida);
    
    printf("%d (d%d pra vida) + %d (Constituição)\n\n" ,dadovida, dvariavel, Const );
    printf("Logo o PV do personagem é de: %d\n", vida);

    //Afirma que o usuario leu e pode continuar
    printf("\n\nPressione [enter] para continuar\n");
    
    // Comando para só prosseguir após qualquer confirmaçao do usuario
    scanf("%c", &enter); 

    return vida;
}


//Função para dar boas vindas e iniciar os tutoriais
void inicio()
{
    setlocale(LC_ALL, "");
    int tutorial;
    char nomeProjeto[25] = {"Gera Fischar"};
    
    //Apresentação
    system("cls || clear");  
    printf("Bem vindo(a) ao %s!\n", nomeProjeto);
    printf("Aqui vamos te ajudar a montar a ficha para o seu personagem de RPG!\n");
    printf("\nNa sua ficha de RPG você irá escolher o nome, a classe e os atributos do seu personagem.\n");
    
   do
    {
        printf("Deseja ver algum tutorial?\n");
        printf("\n1 - Tutorial de classes\n2 - Tutorial de atributos\n3 - Tutorial do %s\n4 - Nenhum tutorial\n\n", nomeProjeto);
        scanf("%d", &tutorial);
        
        switch(tutorial)
        {
        case 1:
        tutorial_classe();
        break;
        
        case 2:
        tutorial_atributo();
        break;
        
        case 3:
        tutorial_gera();
        break;
        
        case 4:
        break;
        
        default:
        system("cls || clear");
        printf("Dígito inválido!\nEscolha um dos valores listados\n\n");
        printf("Qual tutorial deseja ver?\n");
        printf("\n1 - Classes\n2 - Atributos\n3 - %s\n4 - Nenhum tutorial\n", nomeProjeto);
        scanf("%d", &tutorial);
        
        }   
        
    }
    while(tutorial != 4);
    system("cls || clear");
    
}

//Texto explicando as classes
void tutorial_classe()
{
    char respostaInicio, tutorialAtributo, tutorialProjeto, nomeProjeto[25] = {"Gera Fischar"};
    setlocale(LC_ALL, "");

    system("cls || clear");

    //Tutorial
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
                 
}

//Texto explicando os atributos
void tutorial_atributo()
{

    setlocale(LC_ALL, "");
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
        
        printf("\n\n");
        
}

//Texto esxplicando como utilizar o Gera
void tutorial_gera()
{
    char nomeProjeto[25] = {"Gera Fischar"};
    setlocale(LC_ALL, "");
    system("cls || clear");
            
        printf("\nNo %s você vai, primeiramente, escolher o nome do seu personagem.\n(Basta Colocar o nome que desejar, simples ou composto, e teclar 'Enter' para registrá-lo)\n\n", nomeProjeto);
        printf("Após isso será escolhida a classe(em caso de dúvida, consultar o tutorial de classes), teclando o número equivalente à classe desejada.\n\n");
        printf("Em seguida será a sessão dos dados. Nela serão sorteados 6 valores que você deverá atribui-los aos seus atributos de personagem.");
        printf("\nAssim que os dados forem sorteados você poderá escolher se deseja um novo sorteio ou seguir com os dados atuais(Terá 3 oportunidades para fazer isso)\n\n");
        printf("Após selecionar os dados, como dito anteriormente, você deverá atribuir seus valores aos atributos de persongaem (em caso de dúvida, consultar o tutorial de atributos).");
        printf("\nUm atributo por vez, você irá teclar o número referente ao dado desejado\n(Ex: Caso deseje atribuir o D1 = 20, você irá teclar apenas o número 1), lembrado que cada dado pode ser selecionado apenas uma vez.\n\n");
        printf("Por fim você verá a sua ficha completa, com Nome, Classe e todos os atributos.\n\n");
        printf("Agora que já está por dentro, pode seguir em frente e criar sua ficha!\n");
        printf("\n\n");
            
}

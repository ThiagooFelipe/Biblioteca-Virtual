#include<stdio.h>
#include<locale.h>
#include<string.h>

struct tp_contato
{
	char nome[40];
	int numero;
	char email[40];
};

struct livros_a
{
	int num;
	int disponivel;
};

 int main(){
 	


struct tp_contato contato;

struct livros_a locacao[50];	

	setlocale(LC_ALL,"Portuguese");
	int escolha, op, alug, lt, i, esc, conf;
	char nome[20] [50];
	
	i = 0;
	
    strcpy (nome[1], "Orgulho e Preconceito - Jane Austen");
    locacao[1].num=1;
    locacao[1].disponivel=1;
    
    strcpy (nome[2], "Dom Quixote de la Mancha - Miguel de Cervantes");
    locacao[2].num=2;
    locacao[2].disponivel=1;
    
    strcpy (nome[3], "O Pequeno Príncipe - Antoine de Saint-Exupéry");
    locacao[3].num=3;
    locacao[3].disponivel=1;
    
    strcpy (nome[4], "Dom Casmurro - Machado de Assis");
    locacao[4].num=4;
    locacao[4].disponivel=1;
    
	strcpy (nome[5], "O Bandolim do Capitão Corelli - Louis");
    locacao[5].num=5;
    locacao[5].disponivel=1;
	
	strcpy (nome[6], "O Conde de Monte Cristo - Alexandre Dumas");
    locacao[6].num=6;
    locacao[6].disponivel=1;
    
	strcpy (nome[7], "Um Estudo em Vermelho - Arthur Conan Doyle");
    locacao[7].num=7;
	locacao[7].disponivel=1;
	
	strcpy (nome[8], "O Processo - Franz Kafka");
    locacao[8].num=8;
    locacao[8].disponivel=1;
    
	strcpy (nome[9], "Cem Anos de Solidão - Gabriel García Márquez");
    locacao[9].num=9;
    locacao[9].disponivel=1;
    
	strcpy (nome[10], "O Coração das Trevas - Joseph Conrad");
	locacao[10].num=10;
	locacao[10].disponivel=1;
    
	strcpy (nome[11], "Eu, Robô - Isaac Asimov");
    locacao[11].num=11;
    locacao[11].disponivel=1;
	
	strcpy (nome[12], "O Senhor dos Anéis - J. R. R. Tolkien");
    locacao[12].num=12;
    locacao[12].disponivel=1;

	strcpy (nome[13], "Guerra e Paz - Leo Tolstói");
    locacao[13].num=13;
    locacao[13].disponivel=1;
	
	strcpy (nome[14], "Grande Sertão: Veredas - João Guimarães Rosa");
    locacao[14].num=14;
    locacao[14].disponivel=1;
    
    lt = 14;
		
     				 
	//LOOP 
	for(;;){
	//opções 
	if (op == 1){
		printf("\nDISPONIBILIDADE  |  LIVROS: \n\n" );
		for(i =0; i <= lt+1; i++){
				
				if (locacao[i].num == i && locacao[i].disponivel==1) {
					printf("DISPONIVEL\t |%i - %s\n", locacao[i].num, nome[i]);	
				}
				else if (locacao[i].num == i && locacao[i].disponivel!=1) {
					printf("INDISPONIVEL\t |%i - %s\n", locacao[i].num, nome[i]);	
				}
			}  
		printf("\nDeseja levar algum?\n[1]SIM ou [2]NÃO\n");
		scanf("%i", &alug);
	}	
	
	else if(op == 2){
		printf("Valor incorreto, favor digite um valor valido.");
		getch();
		system("cls");
	}
	
	if (op != 1){
		
	//ENTRADA   
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSeja bem vindo a nossa Biblioteca virtual\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("Qual opção deseja? Digite o valor correspondente a sua escolha.\n[1]Livros para alugar.\n[2]Devolver livro alugado.\n[3]Doar algum livro.\n[4]Sair\n");
		scanf("%i",&escolha);
		system("cls");
	}
	if(escolha!= 1&&escolha!=2&&escolha!=3&&escolha!=4&&escolha!=424){
	op = 2;
	}
	else if(escolha==1){ // Livros disponiveis 
		op = 1;		
	    if(alug==1){ // Alugando
	    op = 0;
		alug=0;	
		printf("\n-------------------------------------------------------------\nSeu nome....: ");
		scanf(" %[^\n]s", &contato.nome);
			
		printf("\nSeu número....: ");
		scanf("%d", &contato.numero);
			
		printf("\nSeu email....: ");
		scanf(" %[^\n]s", &contato.email);
			     
		printf("\nDigite o número correspondente ao livro que deseja alugar: \n");
		scanf("%d", &i);
		printf("-------------------------------------------------------------");
		system("cls");
		
		if(i >lt || i <= 0){ // valores invalidos
			op = 2;
		}
		
		else if(locacao[i].disponivel==0){
			printf("Este livro está indisponivel no momento.");
			getch();
			system("cls");
		}
		else if(i>0 && i<=lt){
		printf("\nPronto, %s, comprovante de locação do livro ' %s ' vai ser enviado apos confirmação para o seguinte email: %s, basta mostrar na biblioteca e então começar a ler!\n", contato.nome, nome[i], contato.email);
		printf("Deseja confirmar? [1]SIM | [2]NÃO\n");
		scanf("%i", &conf);
		if(conf==2)
		{
		system("pause");
		system("cls");
		}
		else if(conf==1){
		locacao[i].disponivel--	;
		printf("\nParabéns! Ler é voar por caminhos infinitos, fique a vontade para continuar adquirindo livros.\n");
		system("pause");
		system("cls");
		}	
	  }
		
	 }
		if(alug==2){
			printf("Que pena que não achou algo de seu interesse... mas pode voltar quando quiser!\n");
			op=0;
			alug=0;
			system("pause");
			system("cls");
		}
	}
	else if(escolha==2){
		op=0;
		alug=0; 
		printf("---------------------------------------\nQual o número do livro que você alugou: ");
		scanf("%d", &i);
		
		if(locacao[i].disponivel==0){
		locacao[i].disponivel++;
		printf("---------------------------------------\nObrigado! Devolução concluida fique a \nvontade para alugar novos livros.\n---------------------------------------\n");
		system("pause");
		system("cls");	
		}
		
		else if(locacao[i].disponivel>0){
		printf("---------------------------------------\nOPS! Aparentemente este livro já esta em nosso sistema, certifique-se que digitou o n° correto do livro. Obrigado!\n---------------------------------------\n");
		system("pause");
		system("cls");	
		}
		
	}
	else if(escolha==3){

		op=0;
		alug=0;
		printf("-----------------------------------------\nDigite o nome do livro que deseja \ndoar - nome do autor....: \n");
		scanf(" %[^\n]s", &nome[lt+1]);
	
		locacao[lt+1].num=lt+1;
		locacao[lt+1].disponivel=+1;
		lt++;
		printf("Agradecemos pelo apoio, livro doado com \nsucesso.\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nA leitura é uma porta aberta para um mundo \nde descobertas sem fim. \n \t\t\t-Sandro Costa\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");	
		system("pause");
		system("cls");
	
	}
	
		
	else if(escolha==4){
		break;
	}
}

		
}




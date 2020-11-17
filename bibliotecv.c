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
};

 int main(){
 	


struct tp_contato contato;

struct livros_a locacao[50];	

	setlocale(LC_ALL,"Portuguese");
	int escolha, op, alug, lt, i, esc, conf;
	char nome[20] [50];
	
	i = 0;
	
    strcpy (nome[1], "Orgulho e Preconceito - Jane Austen");
    locacao[1].num=i+1;
    
    strcpy (nome[2], "Dom Quixote de la Mancha - Miguel de Cervantes");
    locacao[2].num=2;
    
    strcpy (nome[3], "O Pequeno Príncipe - Antoine de Saint-Exupéry");
    locacao[3].num=3;
    
    strcpy (nome[4], "Dom Casmurro - Machado de Assis");
    locacao[4].num=4;
    
	strcpy (nome[5], "O Bandolim do Capitão Corelli - Louis de Bernières");
    locacao[5].num=5;
    
	strcpy (nome[6], "O Conde de Monte Cristo - Alexandre Dumas");
    locacao[6].num=6;
    
	strcpy (nome[7], "Um Estudo em Vermelho - Arthur Conan Doyle");
    locacao[7].num=7;
	
	strcpy (nome[8], "O Processo - Franz Kafka");
    locacao[8].num=8;
    
	strcpy (nome[9], "Cem Anos de Solidão - Gabriel García Márquez");
    locacao[9].num=9;
    
	strcpy (nome[10], "O Coração das Trevas - Joseph Conrad");
	locacao[10].num=10;
	
    strcpy (nome[11], "Eu, Robô - Isaac Asimov");
    locacao[11].num=11;
    
	strcpy (nome[12], "O Senhor dos Anéis - J. R. R. Tolkien");
    locacao[12].num=12;
    
	strcpy (nome[13], "Guerra e Paz - Leo Tolstói");
    locacao[13].num=13;
    
	strcpy (nome[14], "Grande Sertão: Veredas - João Guimarães Rosa");
    locacao[14].num=14;
    
    lt = 14;
		
     				 
	//LOOP 
	for(;;){
	//opções 
	if (op == 1){
		printf("\n\nLIVROS DISPONIVEIS: \n" );
		for(i =0; i <= lt+1; i++){
				
				if (locacao[i].num == 1) {
					printf("%i - %s", locacao[i].num, nome[i]);
				}
			}  
		printf("\nDeseja levar algum?\n[1]SIM ou [2]NÃO\n");
		scanf("%i", &alug);
		getch();
	}	
	
	else if(op == 2){
		printf("Valor incorreto, favor digite um valor valido.");
		getch();
		system("cls");
	}
	
	else if(op == 5){
		
	}
	
	if (op != 1){
		
	//ENTRADA   
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSeja bem vindo a nossa Biblioteca virtual\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("Qual opção deseja? Digite o valor correspondente a sua escolha.\n[1]Livros disponiveis para alugar.\n[2]Devolver livro alugado.\n[3]Doar algum livro.\n[4]Sair\n");
		scanf("%i",&escolha);
	}
	if(escolha==1){
		op = 1;
		
	    if(alug==1){
	    op = 0;
		alug=0;	
		printf("\nSeu nome....: ");
		scanf(" %[^\n]s", &contato.nome);
			
		printf("\nSeu número....: ");
		scanf("%d", &contato.numero);
			
		printf("\nSeu email....: ");
		scanf(" %[^\n]s", &contato.email);
			
		printf("\nDigite o número correspondente ao livro que deseja alugar: ");
		scanf("%d", &i);
			
		
		printf("\nPronto, %s, comprovante de locação do livro %d vai enviado para o seguinte email: %s, basta mostrar no biblioteca e então começar a ler!\n", contato.nome, locacao[i].num, contato.email);
		printf("Deseja confirmar? [1]SIM | [2]NÃO");
		scanf("%i", &conf);
		if(conf==2){
		system("pause");
		system("cls");
		}
		else if(conf==1){
			
		}
	
	}
	}

	else if(escolha!= 1&&escolha!=2&&escolha!=3&&escolha!=4&&escolha!=424){
		op = 2;
	}	
	
	else if(escolha==4){
		break;
	}
	
	
		
	}
}



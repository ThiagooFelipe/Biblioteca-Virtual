#include<stdio.h>
#include<locale.h>
#include<string.h>

struct tp_contato
{
	char nome[40];
	int numero;
	char email[40];
};

 int main(){
 	


struct tp_contato contato;
	

	setlocale(LC_ALL,"Portuguese");
	int escolha, op, alug, le;
	char nome[20] [50];
	
	
    strcpy (nome[1], "Orgulho e Preconceito - Jane Austen");
    strcpy (nome[2], "Dom Quixote de la Mancha - Miguel de Cervantes");
    strcpy (nome[3], "O Pequeno Pr�ncipe - Antoine de Saint-Exup�ry");
    strcpy (nome[4], "Dom Casmurro - Machado de Assis");
    strcpy (nome[5], "O Bandolim do Capit�o Corelli - Louis de Berni�res");
    strcpy (nome[6], "O Conde de Monte Cristo - Alexandre Dumas");
    strcpy (nome[7], "Um Estudo em Vermelho - Arthur Conan Doyle");
    strcpy (nome[8], "O Processo - Franz Kafka");
    strcpy (nome[9], "Cem Anos de Solid�o - Gabriel Garc�a M�rquez");
    strcpy (nome[10], "O Cora��o das Trevas - Joseph Conrad");
    strcpy (nome[11], "Eu, Rob� - Isaac Asimov");
    strcpy (nome[12], "O Senhor dos An�is - J. R. R. Tolkien");
    strcpy (nome[13], "Guerra e Paz - Leo Tolst�i");
    strcpy (nome[14], "Grande Sert�o: Veredas - Jo�o Guimar�es Rosa");
    

		
     				 
	//LOOP 
	for(;;){
	//op��es 
	if (op == 1){
		printf("\n\nLIVROS DISPONIVEIS: \n1- %s \n2- %s \n3- %s\n4- %s \n5- %s \n6- %s \n7- %s \n8- %s \n9- %s \n10- %s \n11- %s \n12- %s \n13- %s \n14- %s", nome[1], nome[2], nome[3], nome[4], nome[5], nome[6], nome[7], nome[8], nome[9], nome[10], nome[11], nome[12], nome[13], nome[14] );
		printf("\nDeseja levar algum?\n[1]SIM ou [2]N�O\n");
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
		printf("Qual op��o deseja? Digite o valor correspondente a sua escolha.\n[1]Livros disponiveis para alugar.\n[2]Devolver livro alugado.\n[3]Doar algum livro.\n[4]Sair\n");
		scanf("%i",&escolha);
	}
	if(escolha==1){
		op = 1;
		
	    if(alug==1){
	    op = 0;
		alug=0;	
		printf("\nSeu nome....: ");
		scanf(" %[^\n]s", &contato.nome);
			
		printf("\nSeu n�mero....: ");
		scanf("%d", &contato.numero);
			
		printf("\nSeu email....: ");
		scanf(" %[^\n]s", &contato.email);
			
		printf("\nDigite o n�mero correspondente ao livro que deseja alugar: ");
		scanf("%d", &le);	
		
		printf("\nPronto, %s seu comprovante foi enviado para o seguinte email: %s, basta mostrar no biblioteca e ent�o come�ar a ler!\n", contato.nome, contato.email);
		system("pause");
		system("cls");
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



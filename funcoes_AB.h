struct no 
{
	int fb;
	float conteudo;
	struct no *esq;
	struct no *dir;
};
typedef struct no arv;

int altura(arv* no);

//Criar uma arvore vazia
arv* cria_arv_vazia()
{
	return NULL;
}

//Demonstra no vazio -> proximo item
int arv_vazia(arv* a){
	return a==NULL;
}

//Cria a arvore colocar conteudo
arv* cria_arv(float item, arv* e, arv* d)
{
	arv* p = (arv *)malloc(sizeof(arv));
	p->conteudo=item;
	p->fb = altura(d) - altura(e);
	p->esq=e;
	p->dir=d;
	return p;
}

//Ordena a arvore
arv* busca_no(arv* a, float x)
{
 if (a==NULL)
      return NULL;
 else if (a->conteudo > x)
      return  busca_no(a->esq,x);
 else if (a->conteudo < x)
      return  busca_no(a->dir,x);
 else return a;
}

//Andar criando pela arvore
int altura(arv* no)
{  
if (no == NULL)
	{
	return 0; 
	}    
 int hesq = altura(no->esq);  
 int hdir = altura(no->dir);  
 return hesq > hdir ? hesq + 1 : hdir + 1; 
 }
 


//Inserir valores na arvore
arv* insere (arv* a, float x)
{
    if (a==NULL)
	{
     a=(arv*)malloc(sizeof(arv));
     a->conteudo=x;
     a->esq = NULL;
     a->dir = NULL;
    } else if (x < a->conteudo)
	    a->esq = insere(a->esq,x);
	    else a->dir = insere(a->dir,x);
    return a;
}

//
int possui(arv* a, float item){
	if (arv_vazia(a))
		return 0;
	else
	return a->conteudo == item || possui(a->esq,item)  || possui(a->dir,item);
}

//Arvore PRE ORDENADA
void imprime (arv* a)
{
   if (!arv_vazia(a))
  {
	printf (" %.2f ||",a->conteudo);
	imprime (a->esq);
	imprime (a->dir);
	}
}
//Criado por Henrique Mei - 826213

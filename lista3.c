*Questão 1-*

#include <stdio.h>
int main()
{
	int i, n;
	printf("Digite até que número você quer imprimir desde o número 1: \n");
	scanf("%d", &n);
	printf("\n");
	for (i = 0; i <= n; i++)
	{
		printf("%d\n", i);
	}
}

*Questão 2-*

#include <stdio.h>
int main()
{
	int n, i=0, soma=0;
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		soma+=i;
	}
	printf("%d\n", soma);
}

*Questão 3-*

#include <stdio.h>
 
int main()
{
  int a=0, b=1, auxiliar, i, n;
  scanf("%d", &n);
  printf("%d ", b);
  for(i=0; i<n; i++)
  {
    auxiliar=a+b;
    a=b;
    b=auxiliar;
    printf("%d ", auxiliar);
  }
}

*Questão 4-*

#include <stdio.h>
int main()
{
  int n, maior=0, menor=9999999, i=1;
  printf("Digite 20 números para saber qual foi o maior e o menor número:\n");
  for ( ; i <= 20; i++)
  {
    scanf("%d", &n);
      if(menor>n)
      {
        menor=n;
      }
      if(maior<n)
      {
        maior=n;
      }
  }
  printf("O menor valor é: %d e o maior valor é: %d", menor, maior);
  return 0;
}

*Questão 5-*

#include <stdio.h>
int main()
{
	float i, n;
	printf("Digite 1 para visualizar a tabela de conversão de polegadas para centimetros:\n\n");
	scanf("%f", &n);
	for (i = 1; i <= 20; i++)
	{
		printf("%.0f Polegada(s) equivale(m) a: %.2f centimetros\n", i, (i*2.54));
	}
	return 0;
}

*Questão 6-*

#include <stdio.h>
int main()
{
	float maior, menor, soma=0;
	int i=0;
	printf("Digite um número pequeno para ser o limite inferior\n");
	scanf("%f", &menor);
	printf("Digite um número maior que o anterior para ser o limite superior\n");
	scanf("%f", &maior);
	for (i = menor; i <= maior; i++)
	{
		if(i%2 == 0)
		{
			soma+=i;
		}	
	}
	printf("%.2f\n", soma);
}

*Questão 7-*

#include <stdio.h>
int main()
{
	float candidato1=0, candidato2=0, candidato3=0, candidato4=0, nulo=0, branco=0, i=1, total=0;
	for ( ; i != 0;	)
	{
		scanf("%f", &i);
		if(i==1)
		{
			candidato1+=1;
		}
		if(i==2)
		{
			candidato2+=1;
		}
		if(i==3)
		{
			candidato3+=1;
		}
		if(i==4)
		{
			candidato4+=1;
		}
		if(i==5)
		{
			nulo+=1;
		}
		if(i==6)
		{
			branco+=1;
		}
		if(i!=0)
		{
			total+=1;
		}
		
	}
	printf("Percentual do Candidato1: %.2f\n", (candidato1/total));
	printf("Percentual do Candidato2: %.2f\n", (candidato2/total));
	printf("Percentual do Candidato3: %.2f\n", (candidato3/total));
	printf("Percentual do Candidato4: %.2f\n", (candidato4/total));
	printf("Percentual dos Votos Nulos: %.2f\n", (nulo/total));
	printf("Percentual dos Votos em Branco: %.2f\n", (branco/total));
    return 0; 
}

*Questão 8-*

#include <stdio.h>
int main()
{
 printf("Para o programa funcionar digite 1\n");
 float anacleto=150, felisberto=110, i, anos;
 scanf("%f", &i);
 if(i>-9999)
 {
 while(felisberto<anacleto)
 {
 	felisberto+=3;
 	anacleto+=2;
 	anos+=1;
 }
 }
 printf("%.0f\n", anos);
  return 0;
}

*Questão 9-*

#include <stdio.h>
int main()
{
    int i, n, aux=0;
    printf("Digite o número que você deseja saber se é primo: \n");
    scanf("%d", &n);
    for (i=2; i<=n; i++)
    {
      if(n%i==0)
      {
        if(i!=n)
        {
          aux+=1;
        }
      }
    }
    if(aux>0)
    {
      printf("Não é primo");
    }
    else
    {
      printf("É primo");
    }
    return 0;
}

*Questão 10-*

#include <stdio.h>
int main()
{
	float dividendo, divisor, quociente=1, resto=0;
	printf("Digite o dividendo: \n");
	scanf("%f", &dividendo);
	printf("Digite o divisor: \n");
	scanf("%f", &divisor);
	resto=dividendo-(quociente*divisor);
	while(resto>=divisor)
	{
		quociente=quociente+1;
		resto=dividendo-(quociente*divisor);
		printf("%f\n", resto);
	}
	printf("Quociente: %.0f\n", quociente);
	return 0;
}

*Questão 11.1-*

#include <stdio.h>
int main()
{
    float soma=0, i=1, contador=0;
    while(i!=0)
    {
        scanf("%f", &i);
        soma+=i;
        contador+=1;
    }
    printf("A média é: %.2f", (soma/contador));
    return 0;
}

*Questão 11.2-*

#include <stdio.h>

int main()
{
	int base, expoente, i, resposta=1;
	printf("Digite a base: \n");
	scanf("%d", &base);
	printf("Digite o expoente: \n");
	scanf("%d", &expoente);
	for (i=1; i<=expoente; i++)
	{
		if(expoente==1)
		{
			resposta=base;
		}
		else
		{
			resposta=resposta*base;
		}
	}
	printf("Resposta: %d\n", resposta);
	return 0;
}

*Questão 12-*

#include <stdio.h>
int main()
{
  float i;
  printf("Digite 1 para o programa iniciar: \n");
  scanf("%f", &i);
  if(i=1)
  {
    for(i=50; i<=150; i++)
    {
      printf("%.0f°C = %.2f°F\n",i, (i-32)*(0.55555555555));
    }
  }
  return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


      float cindex(float L, float S, float palavras)
    {

        float mL = (L/palavras)*100;
        float mS = (S/palavras)*100;

        float index = ((0.0588 * mL) - (0.296 * mS) - 15.8);

        return index;
    }


    int main()
    {
        char s[1000]; 
		printf("Texto: ");
		gets(s);
		
        int n = strlen(s);

        int espacos=0;
        int sentencas=0;
        int symbol=0;

        for(int a = 0 ; a < n; a++)
        {
            if(s[a] == ' '){

                espacos = espacos + 1;
            }
			
			/*Aqui saberemos onde come�a e termina um periodo: o uso do ponto final, ponto de exclama��o e interroga��o, caracteriza o fim de um periodo.*/
			
            else if(s[a] == '.' || s[a] == '!' || s[a] == '?' ) 
            {

                sentencas = sentencas + 1;
            }
            /* essa fun��o(isalpha) pretende captar apenas o que n�o for texto: virgulas, ponto e virgulas, parenteses, aspas e etc.
			e ent�o guardar-los em uma vari�vel, para depois subtrair-los do total de letras; pois, at� ent�o, est�o sendo 
			contabilizados*/
            
            else if(isalpha(s[a]) == 0 ) 
            {

                symbol = symbol + 1;

            }

        }


        // quantas letras h�? 
        int letras = (n - (espacos + sentencas + symbol));

        /* quantas palavras h�? o n�mero de palavras em um texto, sempre ser� o n�mero de espa�os em branco + 1; considerando que um texto n�o ter� mais
        de um espa�o digitado*/
        int palavras = (espacos + 1);

        float res = cindex(letras, sentencas, palavras);
        int ress = (int) round(res);


        if(res < 1)
        {
            printf("Nivel 1: ensino fundamental\n");
        }
        else if(res > 16)
        {
            printf("Nivel 16+: medio/universitario\n");
        }
        else
        {
            printf("%d Nivel: ensino fundamental\n", ress);
        }
    }


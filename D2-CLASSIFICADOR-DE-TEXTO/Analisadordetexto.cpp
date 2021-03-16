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
			
			/*Aqui saberemos onde começa e termina um periodo: o uso do ponto final, ponto de exclamação e interrogação, caracteriza o fim de um periodo.*/
			
            else if(s[a] == '.' || s[a] == '!' || s[a] == '?' ) 
            {

                sentencas = sentencas + 1;
            }
            /* essa função(isalpha) pretende captar apenas o que não for texto: virgulas, ponto e virgulas, parenteses, aspas e etc.
			e então guardar-los em uma variável, para depois subtrair-los do total de letras; pois, até então, estão sendo 
			contabilizados*/
            
            else if(isalpha(s[a]) == 0 ) 
            {

                symbol = symbol + 1;

            }

        }


        // quantas letras há? 
        int letras = (n - (espacos + sentencas + symbol));

        /* quantas palavras há? o número de palavras em um texto, sempre será o número de espaços em branco + 1; considerando que um texto não terá mais
        de um espaço digitado*/
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


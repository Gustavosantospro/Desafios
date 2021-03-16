# Desafios e atividades do curso CS50 Havard.
Repositório onde postarei desafios propostos por mim mesmo ou por outras pessoas. 

D1: Construir, usando linguagem C, a escadaria do clássico jogo Mario Brothers.

Regras: a escadaria, como na imagem disponibilizada, não pode ser maior do que 8 andares; se, como input, for dado um valor acima de 8 inteiros, o programa deve solicitar novamente a altura ao usuário; o mesmo acontece ser for digitado valor negativo.

========================================================================================

D2: Construir um Classificador de texto.

Temos que concordar que nem todo texto é apropriado, em nível de dificuldade, para ser lido por todas as pessoas: obviamente, não se espera que um aluno do ensino fundamental seja capaz de compreender, textos sobre temas e assuntos de ensino superior; da mesma forma como não se dará a uma criança que está aprendendo a ler, um livro com periodos longos e pontuação com significados que ela ainda não esteja familiarizada.
Para tanto, é preciso uma ferramenta capaz de classificar, em níveis, se um texto é difícil ou fácil de ser lido, a depender, obviamente, do nosso proprósito.
 
 Para classificar um texto em níveis de leitura, é necessário considerar o número de periodos(!, ?, .), palavras, letras e pontuação("parenteses, virgulas, ponto e virgula, dois pontos e etc), tudo que pode influenciar no nível de texto que se pretende ler. Nesse algorítmo, foi usada a fórmula do Coleman-Liau, "the Coleman-Liau".


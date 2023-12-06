#include <time.h>

/*
 * Variáveis:
 *
 * clock_t: variável que tem por finalidade armazenar valores relacionados a pulsos de clock do processador, como o que é fornecido pela função clock().
 * time_t: variável que armazena os valores relacionados a data e hora em uma única variável e, portanto, existem funções específicas para operar com essa variável, como mktime(), ctime(), entre outras que recebem time_t como parâmetro e/ou retornam valores do tipo time_t.
 * size_t: variável utilizada para retornar a quantidade de espaço que uma determinada variável e/ou tipo ocupa na memória.
 * struct tm: estrutura de dados que armazena valores referentes a data e hora, assim, contendo nove (9) variáveis declaradas dentro deste struct para tal.
 *
 * Macros:
 *
 * CLOCKS_PER_SEC: macro responsável por armazenar a quantidade de pulsos por segundo do processador da máquina na qual o programa está sendo executado.
 * NULL: ponteiro do tipo NULL, utilizado para indicar que um ponteiro não aponta para posição de memória alguma.
 *
 * Funcoes
 *
 * time_t time(time_t *t) -> Retorna o tempo atual em segundos desde a Época (01/01/1970 00:00:00 UTC)
 * clock_t clock(void) -> Retorna o número de ciclos de clock decorridos desde o início do programa
 * struct tm *localtime(const time_t *time) -> Converte o tempo representado por time em uma estrutura tm local
 * struct tm *gmtime(const time_t *time) -> Converte o tempo representado por time em uma estrutura tm UTC
 * char *asctime(const struct tm *timeptr) -> Converte a estrutura tm apontada por timeptr em uma string no formato "Dia Mês DD HH:MM:SS AAAA\n\0"
 * char *ctime(const time_t *time) -> Converte o tempo representado por time em uma string no formato "Ddd Mmm DD HH:MM:SS AAAA\n\0"
 * double difftime(time_t end, time_t beginning) -> Retorna a diferença em segundos entre end e beginning
 * size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr) -> Formata a data e hora de acordo com o formato especificado em format e armazena o resultado em str
 */

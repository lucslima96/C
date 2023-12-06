#include <string.h>

/* Funções de Manipulação de Strings
 *
 * strlen(str) -> Retorna o comprimento da string str (número de caracteres)
 * strcpy(dest, src) -> Copia a string src para dest (incluindo o caractere nulo de terminação)
 * strncpy(dest, src, n) -> Copia no máximo n caracteres de src para dest
 * strcat(dest, src) -> Concatena a string src a dest
 * strncat(dest, src, n) -> Concatena no máximo n caracteres de src a dest
 * strcmp(str1, str2) -> Compara as strings str1 e str2
 * strncmp(str1, str2, n) -> Compara no máximo n caracteres de str1 e str2
 * strchr(str, c) -> Retorna um ponteiro para a primeira ocorrência do caractere c em str, ou NULL se não encontrado
 * strrchr(str, c) -> Retorna um ponteiro para a última ocorrência do caractere c em str, ou NULL se não encontrado
 * strstr(str1, str2) -> Retorna um ponteiro para a primeira ocorrência da string str2 em str1, ou NULL se não encontrado
 * strtok(str, delim) -> Divide a string str em tokens usando os caracteres em delim como delimitadores
 *
 * Funções de Busca e Preenchimento de Memória
 *
 * memchr(ptr, value, n) -> Procura os primeiros n bytes da área de memória apontada por ptr para o valor value
 * memcmp(ptr1, ptr2, n) -> Compara os primeiros n bytes de memória apontados por ptr1 e ptr2
 * memset(ptr, value, n) -> Preenche os primeiros n bytes da área de memória apontada por ptr com o valor value
 *
 * Exemplo de Uso:
 *
 * char str1[20] = "Hello";
 * char str2[20] = "World";
 *
 * printf("Comprimento de str1: %lu\n", strlen(str1));
 * strcat(str1, str2);
 * printf("Concatenada: %s\n", str1);
 * printf("Comparação: %d\n", strcmp(str1, "HelloWorld"));
 *
 * Nota: Certifique-se de incluir #include <stdio.h> no início do seu código para usar printf.

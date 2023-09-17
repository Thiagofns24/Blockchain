#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main (){
    int i, ii, mediana = 0;
    char aux[20], vetor[20][20] = {

"maca", "banana", "pera", "uva", "laranja", "abacaxi", "limão", "manga", "abacate", "kiwi", "cereja", "morango", "pêssego", "goiaba", "melancia", "framboesa", "amora", "caqui", "figo", "papaya"

};;
        for (i = 0; i < 20; i++){
              for (ii = i; ii < 20; ii++){
                    if (strcmp(vetor[i], vetor[ii]) >  0){
                          strcpy (aux, vetor[i]);
                          strcpy (vetor[i], vetor[ii]);
                          strcpy (vetor[ii], aux); }}}

    system ("title NOME EM ORDEM CRESCENTE THIAGO");
    printf("vetor em ordem:\n\n");
    
    for (i = 0; i < 20; i++){
          printf("%s\n",vetor[i]); }
                    printf("teste:%d", vetor[i]);

          mediana = 10 + 11/2;
          printf("mediana:%d", mediana);
    return  0; }


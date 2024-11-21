#include <stdio.h>
int main(int argc, char **argv){ //argc te dice cuantos elementos hay en la cadena
    for (int i=1;i<argc;i++){
    printf("hola mundo %s\n", argv[i]); //el primer argumento siempre es que nombre del programa
    }
    return 0;
}
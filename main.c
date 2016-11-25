#include <stdio.h>
#define N 11

int longitud(char cadena[]);
void convertirMayus(char cadena[]);
void concatenar(char origen[], char destino[]);
void intercambiar(char cad1[], char cad2[], int longitud);
void rotarDerecha(char cadena[], int veces, int longitud);

int main() {
    printf("hola mundo\n");
    return 0;
}

int longitud(char cadena[]){

}

void convertirMayus(char cadena[]){
    int i, distancia;
    distancia = 'a' - 'A';
    i = 0;

    while(cadena[i]){
        if(cadena[i] >= 'a' && cadena[i] <= 'z'){
            cadena[i] = cadena[i] - distancia;
        }else{
            cadena[i] = cadena[i];
        }
}
}

void concatenar(char origen[], char destino[]){
    int longOrigen, longDestino, i;
    longOrigen = longitud(origen);
    longDestino = longitud(destino);

    for(i = 0; i <= longOrigen; i++){
       destino[longDestino + i] = origen [i];
    }
}

void intercambiar(char cad1[], char cad2[], int longitud){
    char aux;
    int i;

    for(i = 0; i < longitud; i++){
        aux = cad2[i];
        cad1[i] = cad2[i];
        cad2[i] = aux;
    }
    cad1[i] = '\0';
    cad2[i] = '\0';
}

void rotarDerecha(char cadena[], int veces, int longitud){
    int i, j, k;
    char aux;

    for(j = 1; j <= veces; j++){
        for(k = 0; k < N; k++){
            printf("%c", cadena[k]);
        }
        printf("\n");
        aux = cadena[longitud - 1];
        for (i = longitud - 1; i > 0; ++i) {
            cadena[j] = cadena[j - 1];
        }
        cadena[0] = aux;
    }
}
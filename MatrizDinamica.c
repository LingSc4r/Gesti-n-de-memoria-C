#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 100 //Defino el tamaño del arreglo

int main(){
    int m, n;
    printf("Ingresa el numero de filas y columnas: ");
    scanf("%d %d", &m, &n);

    //creamos una matriz dinamica
    int **matrix = (int **)malloc(m * sizeof(int *));
    for(int i = 0; i < m; i++){
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    //Inicializamos y mostramos la matriz
            for(int i = 0; i < m; i++){   //recorremos fila i
                for(int j = 0; j < n; j++){ //recorremos fila j
                    matrix[i][j] = i + j; //Ejemplo de inicializacion
                    printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    //Ahora liberamos la memoria
    for(int i = 0; i < m; i++){
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

int main() {
    // Definir un arreglo para almacenar 10 notas
    int notas[10];
    int min, max;

    // Solicitar al usuario que ingrese 10 notas
    printf("Ingrese 10 notas:\n");
    for(int i = 0; i < 10; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    // Inicializar min y max con el primer valor del arreglo
    min = notas[0];
    max = notas[0];

    // Encontrar la nota más baja y la más alta
    for(int i = 1; i < 10; i++) {
        if(notas[i] < min) {
            min = notas[i];
        }
        if(notas[i] > max) {
            max = notas[i];
        }
    }

    // Imprimir los resultados
    printf("La nota más baja es: %d\n", min);
    printf("La nota más alta es: %d\n", max);

    return 0;
}


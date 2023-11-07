#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
#include "funciones.h"

int main(void){
    int opc = 0;
    int r = 0;
    printf("Que requiere hacer: \n");
    printf("1. Registrar un paciente: \n");
    printf("2. visualizar el reporte de la condicion: \n");
    printf("3. nombre y telefono de los pacientes con gravedad maxima: \n");
    printf("4. porcentaje de pacientes hombres y mujeres: \n");
    printf("5. condiciones separadas por hombre y mujer: \n");
    scanf("%d", &opc);

    if(opc == 1){
        r = r + 1;
        struct pacientes pacientes;
        struct domicilio domicilio;
        registro(pacientes, domicilio);
    }
    else if(opc == 2){
        struct pacientes pacientes;
        char paciente[20];
        int grav;
        printf("Ingrese el nombre del paciente: \n");
        scanf("%s", paciente);
        for(int i = 0; i < r; i++){
            if(strcmp(paciente,pacientes.nombre) == 0){
                printf("%s con gravedad %d", paciente, pacientes.condicion);
            }
            else{
                printf("ese paciente no esta registrado");
            }
        }
    }

    return 0;
}
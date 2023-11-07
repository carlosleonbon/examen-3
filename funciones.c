#include <stdio.h>
#include "estructuras.h"


void registro(struct pacientes pacientes,struct domicilio domicilio){
    printf("Ingrese su nombre: ");
    scanf("%s", pacientes.nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", pacientes.apellido);
    printf("Ingrese su edad: ");
    scanf("%d", &pacientes.edad);
    printf("Ingrese su sexo: ");
    scanf("%s", pacientes.sexo);
    printf("Ingrese su condicion: ");
    scanf("%d", &pacientes.condicion);
    printf("Ingrese su calle: ");
    scanf("%s", pacientes.domicilio.calle);
    printf("Ingrese su numero de calle: ");
    scanf("%d", &pacientes.domicilio.numero);
    printf("Ingrese su colonia: ");
    scanf("%s", pacientes.domicilio.colonia);
    printf("Ingrese su codigo postal: ");
    scanf("%d", &pacientes.domicilio.CP);
    printf("Ingrese su ciudad: ");
    scanf("%s", pacientes.domicilio.ciudad);
    printf("Ingrese su telefono: ");
    scanf("%d", &pacientes.telefono);

}

   // for(int i = 0, int j = 0, int k = 0; i < 4, k < 8, j < 10; i++, j+= 2, k += 3){
    //    printf("%d %d %d",i,j,k);
   // }
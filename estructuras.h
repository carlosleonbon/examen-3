#pragma once

struct domicilio{
    char calle[30];
    int numero;
    char colonia[30];
    int CP;
    char ciudad[20];
    int telefono;
};

struct pacientes{
    char nombre[20];
    char apellido[20];
    int edad;
    char sexo[20];
    int condicion;
    struct domicilio domicilio;
    int telefono;
};


#include <stdio.h>//Funciones basicas de entrada salida
#include <locale.h>//Para presentar caracteres en espa�ol
#include <windows.h>//Para usar la funcion Sleep
#include "Preguntas.h"//Incluir el dato de tipo Pregunta
/***

Archivo fuente para el manejo de preguntas

***/

int manejoOpciones(char id[25],char idCuestionario[10],char idPregunta[10]); //Prototipo funcion manejo de preguntas

int manejoPreguntas(char id[25],char idCuestionario[10])
{
    //Variable para el control del menu de preguntas
    int opcionPreguntas;

    //Ciclo do...while para repetir el menu hasta que se selecciona 9 para salir al menu de cuestionario
    do{
        printf("---------------------------------------------------------------\n");
        printf("Sistema de evaluaciones ISI - UCA - Manejo de preguntas\n");
        printf("%s %s\n","Cuestionario actual: ", idCuestionario);
        printf("%s %s\n","Usuario actual: ", id);
        printf("---------------------------------------------------------------\n");
        printf("1. Agregar pregunta\n");
        printf("2. Modificar pregunta\n");
        printf("3. Gestionar opciones de un pregunta\n");
        printf("4. Desactivar pregunta\n");
        printf("5. Listar preguntas de este cuestionario\n");
        printf("9. Regresar a men� cuestionarios\n");

        printf("-------------------------------------------------------\n");
        printf("Su selecci�n-->");
        scanf("%d",&opcionPreguntas);
        system("cls");

        switch(opcionPreguntas){
        case 1:
            //Agrega un pregunta nueva en el cuestionario
            break;
        case 2:
            //Modifica los datos de la pregunta

            break;
        case 3:
            //Llama a la funcion para gestionar las opciones de una pregunta
            manejoOpciones(id,"0001","00001");
            break;
        case 4:
            //Desactiva un pregunta
            break;
        case 5:
            //Presenta una lista de todos los preguntas en este cuestionario
            break;
        case 9:
            printf("Regresando a la pantalla de cuestionarios...\n");
            Sleep(1000);
            system("cls");
            break;
        default:
            printf("Opci�n seleccionada es inv�lida!!!\n");
            Sleep(1000);
            system("cls");
            break;
        }

    }while(opcionPreguntas!=9);
    return 0;
}
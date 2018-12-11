#include <stdio.h>//Funciones basicas de entrada salida
#include <locale.h>//Para presentar caracteres en espa�ol
#include <windows.h>//Para usar la funcion Sleep
/***

Archivo fuente para el manejo de cuestionarios

***/

int agregarCuestionario(); //Prototipo de funcion para crear cuestionarios
int activarCuestionario(); //Prototipo de funcion para activar Cuestionarios
int desactivarCuestionario(); //Prototipo de funcion para desactivar Cuestionarios
int modificarCuestionario(); //Prototipo de funcion para modificar Cuestionarios
int listarCuestionario(); //Prototipo de funcion para listar cuestionariosactivarCuestionario
int manejoPreguntas(char id[25],char idCuestionario[10]); //Prototipo funcion manejo de preguntas

int manejoCuestionarios(char id[25])
{
    //Variable para el control del menu de cuestionarios
    int opcionCuestionarios;

    //Ciclo do...while para repetir el menu hasta que se selecciona 9 para salir al menu principal
    do{
        printf("---------------------------------------------------------------\n");
        printf("Sistema de evaluaciones ISI - UCA - Manejo de cuestionarios\n");
        printf("%s %s\n","Usuario actual: ", id);
        printf("---------------------------------------------------------------\n");
        printf("[1] Listar cuestionarios\n");
        printf("[2] Agregar cuestionario\n");
        printf("[3] Activar cuestionario\n");
        printf("[4] Desactivar cuestionario\n");
        printf("[5] Modificar cuestionario\n");
        printf("[6] Gestionar preguntas de un cuestionario\n");
        printf("[9] Regresar a men� principal\n");

        printf("-------------------------------------------------------\n");
        printf("Su selecci�n-->");
        scanf("%d",&opcionCuestionarios);
        system("cls");

        switch(opcionCuestionarios){
        case 1:
            //Presenta una lista de todos los cuestionarios
            listarCuestionario();
            break;
        case 2:
            //Agrega un cuestionario nuevo en el sistema
            agregarCuestionario();
            break;
        case 3:
            //Activar un cuestionario
            activarCuestionario();
            break;
        case 4:
            //Desactivar un cuestionario
            desactivarCuestionario();
            break;
        case 5:
            //Modificar un cuestionario
            modificarCuestionario();
            break;
        case 6:
            //Llama a la funcion para gestionar las preguntas de un cuestionario
            manejoPreguntas(id,"0001");
            break;
        case 9:
            printf("Regresando a la pantalla principal...\n");
            Sleep(1000);
            system("cls");
            break;
        default:
            printf("Opci�n seleccionada es inv�lida!!!\n");
            Sleep(1000);
            system("cls");
            break;
        }

    }while(opcionCuestionarios!=9);
    return 0;
}
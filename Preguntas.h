/******

Estructura pregunta para almacenar datos de las preguntas en los cuestionarios



******/
#ifndef PREGUNTAS_H_INCLUDED
#define PREGUNTAS_H_INCLUDED
struct Pregunta
{
    char idCuestionario[10];
    char idPregunta[10];
    char texto[100];
    int cantOpciones;//Cantidad de opciones en esta pregunta
    int puntos; //Puntos que vale esta pregunta
    char idUsuario[25];
} ;


#endif // PREGUNTAS_H_INCLUDED

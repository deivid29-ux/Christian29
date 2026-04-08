# include <stdio.h>

 int main()
 {
     int calificacion1;
     int calificacion2;
     int calificacion3;
    int resultado;

     printf("calificacion de la 1 materia; \n");
     scanf("%i", &calificacion1);

     printf("calificacion de la 2 materia: \n");
     scanf("%i", &calificacion2);

     printf("calificacion de la 3 materia: \n");
     scanf("%i", &calificacion3);

    resultado=calificacion1 + calificacion2 + calificacion3;
    printf("el promedio del estudiante es:  %i\n",resultado);

   if(resultado >= 7){
        printf("Aprobado Felicitasiones..\n");
   }
   else{
        printf("Reprobado lo sentimos..\n");
   }
     return 0;
 }

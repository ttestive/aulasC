#include <stdio.h>
#include <stdlib.h>

int main () {
     float nota1, nota2, nota3, media;
     char turno;
    
    printf("digite o turno:   ");
    scanf("%c", &turno);

    printf("calculo de notas\n\n");
    printf("insira a nota\n");

   

    printf("nota1\n", &nota1);
    scanf("%f", &nota1);

    printf("nota2\n", &nota2);
    scanf("%f", &nota2);
    
    printf("nota3\n\n", &nota3);
    scanf("%f", &nota3);

  

    media = (nota1+nota2+nota3)/3;
    printf("MEDIA: %.2f \n", media);
    printf("turno do aluno : %c \n\n", turno);
    
    if (turno == 'N')
    {
        printf("noturno\n\n");
    }
    else if (turno == 'M')
    {
       printf("matutino\n\n");
    }
    else {
        printf("nao existe\n\n");
    }
      
    
    if (media > 7 && media <8)
    {
        media ++;
        printf("voce foi muito bem, nota: %.2f", media);
    }
    else if (media < 7 && media > 6)
    {
        printf("Recuperacao, nota: %.2f", media);

    }
     if (media > 8)
    {
        media = 10;
      printf("voce tirou 10");
    }
    else{
        printf("voce reprovou");
    }
  
    



return 0;
}
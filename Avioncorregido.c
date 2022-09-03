#include <stdio.h>
#include <stdlib.h>
int main()
{

    int avion[3][10];
    int a, i, j, b,x,devolucion,acumuladorde1,acumuladorde2,acumuladorde3,comprapasajeE,comprapasajeP,comprapasajeT;
    float turista,total, economico, primera,recaudacion,recaudacion1,recaudacion2,totaleconomico,totalprimera,totalturista,descuentoprimera2,descuentoturista,descuentoprimera,pasaje1,pasaje2,pasaje3,totalpasaje1,totalpasaje2,totalpasaje3;
    x=0;
    total=(totaleconomico+totalprimera+totalturista);
    devolucion=0;
    comprapasajeE=0;
    comprapasajeT=0;
    comprapasajeP=0;
    descuentoprimera= primera*0.50;
    acumuladorde1=0;
    acumuladorde2=0;
    acumuladorde3=0;
    turista=6000;
    economico=3500;
    primera=8000;
    recaudacion=0;
    recaudacion1=0;
    recaudacion2=0;
    totaleconomico=0;
    totalprimera=0;
    totalturista=0;
    b =0;
    a=0;
    i=0;
    j=0;
     for ( i=0; i<3; i++ )
         {   for(j=0; j<10; j++)
             {   avion[i][j]=0;
            }
	    }
    do{
        printf("\n BIENVENIDOS A AEROLINEAS OASIS ");
		printf("\n1 - Comprar Asientos primera clase");
		printf("\n2 - Comprar Asientos turista");
		printf("\n3 - Comprar Asientos economico");
		printf("\n4 - Estado Actual del Avion");
		printf("\n5 - Informe de Cuenta del Avión (Recaudacion)");
        printf("\n6 - Devolucion de Pasaje (se devuelve el 100 del dinero)");
        printf("\n7 - Salir \n");
	    scanf("%d",&a);

    switch (a){
    case 1:
            b=0;
            comprapasajeP=0;
            printf("USTED HA SELLECIONADO PRIMERA CLASE \n");
            printf("POR UN MONTO DE $ 8000 \n");
                  if (acumuladorde3==10){
                    printf("\nNO HAY LUGAR DISPONIBLE EN PRIMERA CLASE");
                }
            for(i=0; i<1; i++){
                for (j=0; j<10; j++){
                  if ((avion[i][j]==0) &&(b==0)){
                printf("\nSE LE HA ASIGNADO EL ASIENTO: %d",j+1 );
                    avion[i][j]=1;
                    b=1;
                    comprapasajeP=comprapasajeP+1;
                    pasaje1=primera;
                    totalpasaje1=pasaje1+totalpasaje1;
                  }
                }
            }
        break;
    case 2:
        b=0;
        comprapasajeT=0;
        acumuladorde2=0;
        acumuladorde3=0;
        printf("USTED HA SELLECIONADO CLASE TURISTA \n");
            printf("POR UN MONTO DE $ 6000 \n");

           for (i=1;i<2;i++){ //RECORRIDO DE CLASE TURISTA
                for(j=0;j<10;j++){
                    if(avion[i][j]==1){
                             acumuladorde2=acumuladorde2 +1;
                            }
                        }
                    }
                if ((acumuladorde2==10)&&(acumuladorde3<10)){
                  for(i=0; i<1; i++){ //matriz del 25%primeraclase
                for (j=0; j<10; j++){
                 if ((avion[i][j]==0) &&(b==0)){
                printf("\nSE LE HA ASIGNADO EL ASIENTO EN PRIMERA CLASE: %d",j+1 );
                descuentoprimera2=primera*0.25;
                 pasaje1=primera-descuentoprimera2;
                  printf("\nCON UN DESCUENTO DEL 25 PORCIENTO A $ %f", pasaje1); //ARREGLAR VALORES DESCUENTO
                    avion[i][j]=1;
                    b=1;
                    pasaje1=primera-descuentoprimera2;
                    totalpasaje1=pasaje1+totalpasaje1;
                  }
                }
            }
                }
                      if (acumuladorde2==10){
                    printf("\nNO HAY LUGAR DISPONIBLE EN CLASE TURISTA");
                }
          for(i=1; i<2; i++){
                for (j=0; j<10; j++){
                 if ((avion[i][j]==0) &&(b==0)){
                printf("\nSE LE HA ASIGNADO EL ASIENTO: %d",j+1 );
                    avion[i][j]=1;
                    b=1;
                    comprapasajeT=comprapasajeT+1;
                    pasaje2=turista;
                    totalpasaje2=pasaje2+totalpasaje2;
                                      }
                }
            }

        break;
    case 3:
        b=0;
        printf("USTED HA SELLECIONADO CLASE ECONOMICA \n");
            printf("POR UN MONTO DE $ 3500 \n");
        comprapasajeE=0;
        acumuladorde1=0;
        acumuladorde2=0;
        acumuladorde3=0;
            for (i=2;i<3;i++){ // RECORRIDO DE LUGARES CLASE ECONOMICA
                for(j=0;j<10;j++){
                    if(avion[i][j]==1){
                             acumuladorde1=acumuladorde1 +1;

                            }
                        }
                    }
                    if (acumuladorde1==10){
                    printf("NO HAY LUGAR DISPONIBLE EN CLASE ECONOMICA");
                }

                  for (i=1;i<2;i++){ //RECORRIDO DE CLASE TURISTA
                for(j=0;j<10;j++){
                    if(avion[i][j]==1){
                             acumuladorde2=acumuladorde2 +1;
                            }
                        }
                    }
                      if (acumuladorde2==10){
                    printf("\nNO HAY LUGAR DISPONIBLE EN CLASE TURISTA");
                }
            if ((acumuladorde2<10)&&(acumuladorde1==10)){ //chequeo escases de asientos turista%20
                  for(i=1; i<2; i++){ //matriz del 20% turista
                for (j=0; j<10; j++){
                 if ((avion[i][j]==0) &&(b==0)){
                printf("\nSE LE HA ASIGNADO EL ASIENTO EN TURISTA: %d",j+1 );
                descuentoturista=turista*0.20;
                pasaje2=turista-descuentoturista;
                  printf("\nCON UN DESCUENTO DEL 20 PORCIENTO A $ %f", pasaje2);
                    avion[i][j]=1;
                    b=1;
                    pasaje2=turista-descuentoturista;
                    totalpasaje2=pasaje2+totalpasaje2;
                  }
                }
            }
                }
                    for (i=0;i<1;i++){ //RECORRIDO DE CLASE PRIMERA
                for(j=0;j<10;j++){
                    if(avion[i][j]==1){
                             acumuladorde3=acumuladorde3 +1;
                            }
                        }
                    }
                if ((acumuladorde1==10)&&(acumuladorde2==10)){ //chequeo escases de asientos primera clase%50
                  for(i=0; i<1; i++){ //matriz del 50%primeraclase
                for (j=0; j<10; j++){
                 if ((avion[i][j]==0) &&(b==0)){
                printf("\nSE LE HA ASIGNADO EL ASIENTO EN PRIMERA CLASE: %d",j+1 );
                descuentoprimera=primera*0.50;
                pasaje1=primera-descuentoprimera;
                  printf("\nCON UN DESCUENTO DEL 50 PORCIENTO A $ %f", pasaje1); //ARREGLAR VALORES DESCUENTO
                    avion[i][j]=1;
                    b=1;
                    pasaje1=primera-descuentoprimera;
                    totalpasaje1=pasaje1+totalpasaje1;
                  }
                }
            }
                }
            for(i=2; i<3; i++){
                for (j=0; j<10; j++){
                      if ((avion[i][j]==0) &&(b==0)){
                printf("\nSE LE HA ASIGNADO EL ASIENTO: %d",j+1 );
                    avion[i][j]=1;
                    b=1;
                    comprapasajeE=comprapasajeE+1;
                    pasaje3=economico;
                    totalpasaje3=economico+totalpasaje3;
                  }
                }
            }
        break;
    case 4:
        for (i=0;i<3;i++)
    {
        for (j=0;j<10;j++)
        {
            avion[i][j];
            a++; // le suma automaticamente 1 a la variable
        }
    }

    printf ("los valores de la matriz son:  \n ");
    for (i=0;i<3;i++)
    {
        if(i==0){
        printf("\n Fila: PRIMERA CLASE\n");
        }
            if (i==1){
                       printf("\n Fila: CLASE TURISTA\n");}
                if (i==2){
                        printf("\n Fila: CLASE ECONOMICA\n");
                }
        for (j=0;j<10;j++)
        {
            if(avion[i][j]==1){
            printf( " X \t" );
            }
            else{
                printf( " O \t" );
            }
        }
    }

        break;
    case 5:
        b=0;
        for(i=0;i<1;i++){
            for(j=0;j<10;j++){
                if (avion[i][j]==1){
                    recaudacion=totalpasaje1;
                    b=1;
                }
            }
        }
        totalpasaje1=totalpasaje1;// el error est en que si no he vendido nada aun multiplico con 0 controlar con IF
        for(i=1;i<2;i++){
            for(j=0;j<10;j++){
                if (avion[i][j]==1){
                    recaudacion1= totalpasaje2;
                    b=1;
                }
            }
        }
        totalpasaje2=totalpasaje2;
        for(i=2;i<3;i++){
            for(j=0;j<10;j++){
                if (avion[i][j]==1){
                    recaudacion2= totalpasaje3;
                    b=1;
                }
            }
        }
        totalpasaje3=totalpasaje3;
        total=(recaudacion1+recaudacion2+recaudacion);
        printf("EL TOTAL RECAUDADO ES: %f \n", total); // CADA VEZ ELEGIMOS OPCION 5 SE SUMA DE MAS CONTROLAR
        total=0;
        recaudacion1=0;
        recaudacion2=0;
        recaudacion=0;
        break;
    case 6:
        printf("\nPORFAVOR SELECCIONE SU FILA A DEVOLVER-(1)PRIMERACLASE-(2)TURISTA-(3)ECONOMICA: ");
        scanf("%d",&devolucion);
        switch (devolucion){
        case 1:
         b=0;
            //DECOLUCION PRIMERA CLASE CONTROLADORES
                for (j=9; j>=0; j--){
                      if ((avion[0][j]==1) &&(comprapasajeP>=1)&&(b==0)){
                printf("\nSE LE DEVOLVERA EL VALOR DEL PASAJE POR:$ %.2f",primera);
                    avion[0][j]=0;
                    b=1;
                     totalpasaje1 = totalpasaje1 - primera;
                  }
                }
                break;
        case 2:
             b=0;
      for (j=9; j>=0; j--)
                    {
                        if ((avion[1][j]==1) &&(b==0))
                        {
                            printf("\nSE LE DEVOLVERA EL VALOR DEL PASAJE POR:$ %.2f", pasaje2);
                           // printf("avion: %d", avion[1][j], j); PABLO :)
                            avion[1][j]=0;
                            b=1;
                            totalpasaje2 = totalpasaje2 - pasaje2;
                            comprapasajeT = comprapasajeT-1;
                        }
                    }
            break;
        case 3:
            b=0;
             //DECOLUCION ECONOMICO CONTROLADORES
                for (j=9; j>=  0; j--){
                      if ((avion[2][j]==1) &&(b==0)){ //las demas filas*/
                printf("\nSE LE DEOLVERA EL VALOR DEL PASAJE POR:$ %.2f",economico ); // chequear llenado de asientos
                    avion[i][j]=0;
                    b=1;
                     totalpasaje3 = totalpasaje3 - economico;
                  }
                }
            break;
        }
        break;
    case 7:
        printf("saliendo del sistema");
        break;
        default: ; }
        printf("\n");
        system("pause");
        system("cls");
    }
    while(a!=7);
    return 0;
}

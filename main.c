#include <stdio.h>

//protipos
void rellena_de_ceros (int, int *);
void imprime_de_ceros (int, int *);
void imprime_apuntador (int, int *);
void busca_ceros (int, int *);






int main(void) {
  int ejemplo [30];
  int otro_vector [20];

  /* pasa la dirección del vector "ejemplo" */
  printf("Rellena con 0\n");
  rellena_de_ceros ( 30, ejemplo );
  printf("Imprime...\n");
  imprime_de_ceros(30, ejemplo);
  printf("Imprime dirección del apuntador\n");
  imprime_apuntador(30, ejemplo);
  printf("Imprime posicion de Ceros\n");
  busca_ceros(30, ejemplo);
  printf("\nOtro formato");

  /* rellena los elems. del 15 al 19 */
  rellena_de_ceros ( 5, otro_vector+15 );
  printf("Imprime...\n");
  imprime_de_ceros(5, otro_vector+15);
  printf("Imprime dirección del apuntador\n");
  imprime_apuntador(5, otro_vector+15);
  printf("Imprime posicion de Ceros\n");
  busca_ceros(5, otro_vector+15);
  


  
  return 0;

}
//método que rellena el arreglo con ceros
void rellena_de_ceros ( int n_elem, int* vector )
{
  int i;
  for ( i=0; i<n_elem; i++ )
	*(vector++) = 0;	   /* operador de post-incremento */
}
//método que imprime el arreglo
void imprime_de_ceros (int n_elem, int* vector){
  int i;
  for (i=0; i<n_elem; i++){
    printf("%d\n",vector[i]);
  }
   
}
//método que imprime la dirección de memoria
void imprime_apuntador (int n_elem, int* vector){
  int i;
  for (i = 0; i < n_elem; i++){
    printf("%p\n",(vector+i));
  }
}
//método que busca valores igual a cero e imprime su posición
void busca_ceros (int n_elem, int* vector){
  int i;
  for (i = 0; i < n_elem; i++){
    if(vector[i] == 0){
      printf("%d\n",i);
    }
  }
}
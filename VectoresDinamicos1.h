//Vectores dinamicos 

#ifndef VECTOR_DINAMICO_H_INCLUDED
#define VECTOR_DINAMICO_H_INCLUDED
//Cambia el nombre de la estructura
typedef struct vector vector_t;

// Crea el vector 
vector_t* vector_crear (size_t tam_inicial);

// Agerga un elemento en un indice del vector
bool vector_agregar (vector_t* vector,size_t indice,void* elemento);

//Devuelve el elemento con el indice
void* vector_obtener (vector_t* vector, size_t indice);

//Devuelve el tamaño del vector
size_t vector_obtener_tam (vector_t* vector);

//Redimensiona el vector
bool vector_redimensionar (vector_t* vector, size_t nuevo_tam);

//Libera la memoria
void vector_destruir (vector_t* vector);

#endif

# FISI2029-201920
Laboratorio Métodos Computacionales - Segundo Semestre 2019
[![Binder](http://mybinder.org/badge_logo.svg)](http://beta.mybinder.org/v2/gh/ComputoCienciasUniandes/FISI2029-201920/master)

### Ejercicio 1
LA función imprime el valor de las posiciones en que guarda los datos en la memoria.

### Ejercicio 2
El ejercicio no correra debido a que no se puede colocar como constante el valor de referencia de a, al cambiarle el valor ahora, el programa no podra hacerlo debido a que se le dio la categoría de constante y no se puede cambiar. Por esta razón no corre.

### Ejercicio 3
Función recursiva para el numero de Fibonacci con un for.

### Ejercicio 4
Para el ejercicio 4 se crearon dos funciones que retornan el valor más grande entre dos valores iniciados en el main. La diferencia radica en el tipo de la función siendo int la primera y double la segunda, por lo tanto cada una recibe el tipo de parametros indicados. Al inicio las funciones tienen diferentes nombres para los calculos, pero al colocarles el mismo nombre y evaluarlas en numeros con el tipo correspondiente, las funciones entienden que se hace referencia a ellas debido al tipo de datos que se le esta ingresando, por ello al ingresar a la funcion getMax() valores enteros, recurrira a la funcion del tipo int.

### Ejercicio 5
La función muestra como al crear una variable constante universal, al correr el código ésta cambia por el valor asignado y que no puede ser cambiado en el camino por haberle dado el tipo de constante. La función retorna el valor de pi, al agregarle el tipo cientifico y el comando de presicion de iostream se returna el número Pi con la precision decimal que se desea.

### Ejercicio 6
Al correr el .cpp de la forma normal, compilado y luego ejecutar, se genera el error de "Segmentation fault (core dumped)" y esto es debido a que se sobrepasa la memoría que se le asigna al ejecutar. Sin embargo, al multiplicar el ejecutable por 1000 se le da el valor que necesita el main para correr. Sin embargo, si se le da un valor muy alto el código vuelve a crashear debido a que no con el modo de Heap no cuenta con tanta memoria para almacenar los datos. Con un valor de 1 millon ya crashea con el metodo Heap.

### Ejercicio 7
Mientras que en el ejercicio 6.2 o 7 al hacerlo del modo Stack, la memoria que puede almacenar es mucho mayor, alcance a multiplicar por 10 millones y no crasheo. 

Ejercicio 4 *
a. Implementar en C++ el datatype String, que represente cadenas de caracteres de
largo variable. Debe ser posible obtener un String tanto a partir de una cadena de
caracteres (char *) como a partir de otro String.
b. Agregar la sobrecarga de los siguientes operadores:
− Asignación.
− Concatenación (operador +).
− Comparación. 
− Acceso a un caracter del String (operador []).
c. Agregar la sobrecarga de los operadores de inserción y extracción de flujo.
(d) Agregar las siguientes operaciones:
− largo, que retorna la cantidad de caracteres de la cadena.
− substring, que retorna el substring que se encuentra entre dos posiciones dadas
de la cadena (incluyendo los caracteres en dichas posiciones).
(e) Agregar constructores y destructor según considere necesario.
(f) Agregar manejo de excepciones de forma que:
− Al intentar acceder a una posición del String inválida se lance la excepción
“std::out_of_range”.
− Al recibir un parámetro inválido en una operación se lance la excepción
“std::invalid_argument”.
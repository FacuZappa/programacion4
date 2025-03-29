Ejercicio 6 *
Considerar definidas las clases A, B y C, las asociaciones R1 entre las clases A y B, y R2 entre las clases B y C. Sean los objetos a, b y c, de clases A, B y C respectivamente. ¿Es posible que existan los siguientes links?
(a) Un link entre a y b
    Sí, porque la asociación R1 es entre clases A y B.
(b) Un link entre b y c
    Sí, porque la asociación R2 es entre clases B y C.
(c) Un link entre a y c
    No, porque no hay una asociación directa entre A y C.
    (Salvo que exista una relación indirecta a través de B, pero eso no es un link directo entre A y C).
(d) Dos links entre b y c
    
    Depende:

    * Si la asociación R2 es de multiplicidad que lo permita (por ejemplo, de tipo "muchos a muchos", o "uno a muchos"), sí, podría haber múltiples links entre el mismo objeto b y distintos objetos c o incluso más de un link si está permitido.

    * Si la asociación es de "uno a uno", no.

    Pero si interpretamos “dos links entre el mismo par de objetos b y c” (es decir, dos relaciones paralelas entre el mismo b y el mismo c), en un modelo bien definido no tendría sentido tener dos links idénticos. Solo tendría sentido si la asociación es calificada o tiene atributos distintos (por ejemplo, dos relaciones distintas con diferente significado).
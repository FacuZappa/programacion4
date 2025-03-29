Ejercicio 7 *
Considerar definidas las clases A, B, C, D y E, que cumplen B <: A, C <: A, D <: B y E <: D.
(a) Indicar:
    i. Clase base directa de B

    ri. A 

    ii. Clase base directa de E

    rii. D

    iii. Subclases indirectas de A

    riii. D y E

    iv. Subclases directas de B

    riv. D

(b) Definir la propiedad subsumption y explicar informalmente su significado.

    Subsumption (subsumción) en el contexto de la programación orientada a objetos se refiere a la relación entre tipos o clases donde una clase o tipo es más general que otro, es decir, un objeto de una clase "subsumida" puede ser tratado como un objeto de la clase "subsumidora". En este caso, significa que un objeto de una subclase puede ser tratado como un objeto de su superclase.

    Por ejemplo:

    B <: A significa que cualquier objeto de B puede ser tratado como un objeto de A, pero no necesariamente al revés.

    E <: D significa que un objeto de E puede ser tratado como un objeto de D, pero no necesariamente al revés.

(c) Considerando las propiedades de cada clase (atributos, asociaciones, operaciones):
¿Qué propiedades tiene la clase A?, ¿Qué propiedades tiene la clase E? 

    Propiedades de la clase A:
    La clase A es la base de B y C, por lo tanto, A tendría las propiedades que estas clases comparten (si las definimos más adelante en el contexto del problema). Sin embargo, el ejercicio no menciona atributos, asociaciones u operaciones específicas para las clases. En base a la información dada, A tendría las propiedades comunes de B, C, D y E (siempre que no se especifiquen más propiedades en el contexto).

    Propiedades de la clase E:
    E es la subclase más alejada de A, ya que hereda indirectamente a través de D y B. Las propiedades de E incluirán las de D, las de B, y las de A, ya que la herencia es acumulativa. Además, E puede tener sus propias propiedades adicionales (atributos, asociaciones y operaciones) definidas específicamente para ella.

    En resumen:

    A tiene propiedades comunes entre B, C, D, y E.

    E tiene todas las propiedades heredadas de D, B, y A, más cualquier propiedad que se haya definido específicamente en E.
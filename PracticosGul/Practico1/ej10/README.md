Ejercicio 10 *
(a) Identificar clases, atributos, operaciones y métodos en la siguiente descripción del
diseño de una parte de un sistema de gestión de personal.
Se considera una empresa que mantiene información de sus empleados.
De cada empleado se almacena su nombre y se cuenta con una operación
para obtener el mismo. Los empleados de la empresa pueden ser comunes, de los cuales se conoce su sueldo, o jornaleros, de los cuales se conoce la
cantidad de horas que trabajó y el valor de la hora. Todos los meses, al
realizarse la liquidación de los sueldos, la empresa calcula el monto total
por concepto de sueldos, en base al sueldo fijo para empleados comunes y
como la cantidad de horas por el valor de la hora para empleados
jornaleros.
(b) ¿Existe alguna clase abstracta en su solución? ¿En qué situaciones debemos definir a
una clase como abstracta?
(c) Dar una descripción (pseudocódigo) de la operación getTotal() mediante la cual la
empresa calcula el monto total de la liquidación de todos sus empleados. Tener en
cuenta que en un futuro pueden incorporarse nuevos tipos de empleados, y que la
repercusión en la implementación existente debe ser mínima (en particular sobre las
operaciones ya implementadas en clases existentes).
(d) Definir el concepto de polimorfismo e identificar su aplicación en el modelo realizado
en la parte (b). ¿Qué beneficios le aportó el polimorfismo y cuál otra propiedad le fue
de utilidad?
(e) Implementar en C++ el modelo anterior incluyendo la funcionalidad de obtener el
total de sueldos.
(f) Realizar un procedimiento main() que permita, mediante un menú, ingresar una lista
de empleados y que calcule el total de sueldos a pagar a los empleados de la empresa. 

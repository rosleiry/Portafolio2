cmake_minimum_required(VERSION 3.14)

project(Portafolio2 C)

set(CMAKE_C_STANDARD 99)

include_directories(includes)

add_executable(Ejercicio1 Punto1/main.c Punto1/Ejercicio1.c Punto1/Ejercicio1.h)
add_executable(Min1 Punto1/minunit.c Punto1/Ejercicio1.c Punto1/Ejercicio1.h)

add_executable(Ejercicio2 Punto2/main.c Punto2/Ejercicio2.c Punto2/Ejercicio2.h )
add_executable(Min2 Punto2/minunit.c Punto2/Ejercicio2.c Punto2/Ejercicio2.h)

add_executable(Ejercicio5 Punto5/main.c Punto5/Ejercicio5.c Punto5/Ejercicio5.h)

add_executable(Ejercicio6 Punto6/main.c Punto6/Ejercicio6.c Punto6/Ejercicio6.h)
add_executable(Min6 Punto6/minunit6.c Punto6/Ejercicio6.c Punto6/Ejercicio6.h)

add_executable(Ejercicio7 Punto7/main.c Punto7/Ejercicio7.c Punto7/Ejercicio7.h)
add_executable(Min7 Punto7/minunit7.c Punto7/Ejercicio7.c Punto7/Ejercicio7.h)

add_executable(Ejercicio8 Punto8/main.c Punto8/Ejercicio8.c Punto8/Ejercicio8.h)
add_executable(Min8 Punto8/minunit.c Punto8/Ejercicio8.c Punto8/Ejercicio8.h)

add_executable(Ejercicio10 Punto10/main.c Punto10/Ejercicio6.c Punto10/Ejercicio10.h)
add_executable(Min10 Punto10/minunit.c Punto10/Ejercicio10.c Punto10/Ejercicio10.h)



add_executable(minunit Includes/minunit.h)
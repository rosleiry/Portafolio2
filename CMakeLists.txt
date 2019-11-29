cmake_minimum_required(VERSION 3.14)

project(Portafolio2 C)

set(CMAKE_C_STANDARD 99)

include_directories(includes)

add_executable(Ejercicio1 Punto1/Ejercicio1.c Punto1/Ejercicio1.h)
add_executable(Min1 Punto1/minunit.c Punto1/Ejercicio1.c Punto1/Ejercicio1.h)
add_executable(minunit Includes/minunit.h)
add_executable(Ejercicio5 Punto5/main.c Punto5/Ejercicio5.c Punto5/Ejercicio5.h)
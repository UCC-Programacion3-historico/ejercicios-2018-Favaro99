cmake_minimum_required(VERSION 2.8)
project(Programacion3)

set(CMAKE_CXX_STANDARD 14)

# Habilito Coverage
SET(COVERAGE OFF CACHE BOOL "Coverage")
if (COVERAGE)
target_compile_options(tests PRIVATE --coverage)
target_link_libraries(tests PRIVATE --coverage)
endif()

# Agrego todos los test.
add_subdirectory(test)
add_subdirectory(U00_Repaso)
add_subdirectory(U01_Recursividad)
add_subdirectory(U02_Listas)
add_subdirectory(U03_Pilas)
add_subdirectory(U04_Colas)
add_subdirectory(U05_Hash)
add_subdirectory(U06_Arbol)
add_subdirectory(U07_Grafos)
add_subdirectory(U08_Ordenamiento)
add_subdirectory(U09_Busqueda)

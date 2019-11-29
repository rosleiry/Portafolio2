//
// Created by Administrator on 27/11/19.
//

#include "minunit.h"

#include "Ejercicio1.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test1) {
    char *string="HOLA.COMO ESTAS";
    const char signos = '.';
    mu_assert_int_eq("COMO ESTAS", eliminar(string,signos));
}
MU_TEST(test2) {
    char *string="HOLA:COMO ESTAS";
    const char signos = ':';
    mu_assert_int_eq("COMO ESTAS", eliminar(string,signos));
}
MU_TEST(test3) {
    char *string="HOLA;COMO ESTAS";
    const char signos = ';';
    mu_assert_int_eq("COMO ESTAS", eliminar(string,signos));
}


MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test1);
    MU_RUN_TEST(test2);
    MU_RUN_TEST(test3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}
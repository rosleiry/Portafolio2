//
// Created by Administrator on 9/12/19.
//


MU_TEST(test1) {
        char contrasena[]="contrasena";
        mu_assert_int_eq(1, verificar(contrasena[]);
}
MU_TEST(test2) {
        char contrasena[]="clave";
        mu_assert_int_eq(1, verificar(contrasena[]);
}
MU_TEST(test3) {
        char contrasena[]="password";
        mu_assert_int_eq(1, verificar(contrasena[]);
}
MU_TEST(test3) {
        char contrasena[]="con";
        mu_assert_int_eq(1, verificar(contrasena[]);
}
MU_TEST(test3) {
        char contrasena[]="Ejercicio#7";
        mu_assert_int_eq(0, verificar(contrasena[]);
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
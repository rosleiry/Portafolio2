//
// Created by Administrator on 9/12/19.
//

MU_TEST(test1) {

        mu_assert_int_eq("COMO ESTAS", eliminar_string(string));
}
MU_TEST(test2) {
        char *string="HOLA:COMO ESTAS";
        mu_assert_int_eq("COMO ESTAS", eliminar_string(string));
}
MU_TEST(test3) {
        char *string="HOLA;COMO ESTAS";
        mu_assert_int_eq("COMO ESTAS", eliminar_string(string));
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
//
// Created by Administrator on 27/11/19.
//

#include "Ejercicio1.h"

char * eliminar_string(char *string) {

    for (int i = 0; *string != '\0' ; i++) {
        if (*string == ':' || *string == ';' || *string == '.' || *string=='!' || *string=='.' || *string=='?'){
            return string + 1;
        }
        string ++;
    }
}
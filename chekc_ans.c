#include <stdio.h>
#define MATRIX_SIZE 8

u_int8_t ans[MATRIX_SIZE + 1] = "ULSMJJNX";

u_int8_t check_ans(u_int8_t *ciphertext, u_int8_t *ans){
    u_int8_t ret = 1;
        for(u_int8_t i = 0 ; i < MATRIX_SIZE; ++i){
        if(ciphertext[i] != ans[i]){
            ret  = 0;
            break;
        }
    }
    return ret;
}
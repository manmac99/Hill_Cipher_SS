// main.c

#include <stdio.h>
#include <stdint.h>
#include "hill_cipher_encrypt.c"
#include "chekc_ans.c"

int main() {
    u_int8_t plaintext[MATRIX_SIZE + 1], ciphertext[MATRIX_SIZE + 1];
    u_int8_t ans[MATRIX_SIZE + 1] = "QROGTPHF";

    printf("암호화할 평문을 입력하세요 (길이는 %d로): ", MATRIX_SIZE);
    scanf("%8s", plaintext);

    hill_cipher_encrypt(plaintext, ciphertext);

    printf("암호문: %s\n", ciphertext);

    if(check_ans(ciphertext, ans)) {
        printf("비밀번호는 같습니다.\n");
    } else {
        printf("비밀번호는 틀립니다.\n");
    }

    return 0;
}



.

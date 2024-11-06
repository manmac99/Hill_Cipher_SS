// hill_cipher_encrypt.c


#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MOD 26
#define MATRIX_SIZE 8

//temp key(나중에는 ramdom 라이브러리를 사용해서 생성하기)
u_int8_t key[MATRIX_SIZE][MATRIX_SIZE] = {
    {3, 3, 1, 2, 4, 0, 1, 5},
    {2, 5, 3, 1, 0, 4, 2, 3},
    {1, 2, 3, 4, 5, 6, 7, 8},
    {8, 7, 6, 5, 4, 3, 2, 1},
    {4, 0, 3, 5, 2, 1, 6, 7},
    {5, 1, 4, 0, 3, 2, 7, 6},
    {6, 2, 5, 1, 0, 3, 8, 7},
    {7, 3, 6, 2, 1, 0, 4, 8}
};

void hill_cipher_encrypt(u_int8_t *plaintext, u_int8_t *ciphertext) {
    u_int8_t length = strlen((char*)plaintext);
    if (length % MATRIX_SIZE != 0) {
        printf("Input Size must be %d.\n", MATRIX_SIZE);
        return;
    }

    for (u_int8_t i = 0; i < length; i += MATRIX_SIZE) {
        u_int8_t block[MATRIX_SIZE];
        for (u_int8_t j = 0; j < MATRIX_SIZE; ++j) {
            block[j] = toupper(plaintext[i + j]) - 'A';
        }

        u_int8_t encrypted_block[MATRIX_SIZE] = {0};

        for (u_int8_t row = 0; row < MATRIX_SIZE; ++row) {
            for (u_int8_t col = 0; col < MATRIX_SIZE; ++col) {
                encrypted_block[row] += key[row][col] * block[col];
            }
            encrypted_block[row] %= MOD;
        }

        for (u_int8_t j = 0; j < MATRIX_SIZE; ++j) {
            ciphertext[i + j] = encrypted_block[j] + 'A';
        }
    }
    ciphertext[length] = '\0';
}

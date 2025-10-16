#include <stdio.h>

int main() {
    short a = 10;                           // short: so nguyen nho, thuong 2 byte, pham vi khoang -32,768 den 32,767
    int b = 1000;                           // int: so nguyen thong thuong, thuong 4 byte, dung cho phep tinh thong thuong
    long c = 100000;                       // long: so nguyen lon hon int, thuong 4 hoac 8 byte tuy he thong
    long long d = 10000000000;              // long long: so nguyen rat lon, thuong 8 byte, dung khi can luu gia tri lon hon long
    unsigned short e = 65000;               // unsigned short: so nguyen duong nho, 2 byte, pham vi 0 den 65535
    unsigned int f = 4000000000;            // unsigned int: so nguyen duong, 4 byte, pham vi 0 den 4294967295
    unsigned long g = 3000000000;           // unsigned long: so nguyen duong lon, 4 hoac 8 byte tuy he thong
    unsigned long long h = 100000000000;    // unsigned long long: so nguyen duong rat lon, 8 byte, dung cho gia tri rat lon
    char i = 'A';                           // char: ky tu don, 1 byte, luu ma ASCII cua ky tu


    return 0;
}

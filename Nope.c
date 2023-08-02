#include "unlock.h"

void crack_address(int *code_to_crack, unsigned char *byte_ptr)
{
    code    omg;

    for (int i = sizeof(code_to_crack) - 3; i >= 0; i--) {
        omg = (char)byte_ptr[i] == 1 ? -32 : (char)byte_ptr[i];
        printf("%c", omg + 96);
    }
    printf("\n");
}

int main(void)
{
    vault        tool[] = 
    {
        61, 
        (int)strtol("6D", NULL, 16), 
        65, 
        (int)strtol("6C", NULL, 16), 
        69, 
        65
    };
    code            *code_to_crack = (code *)0x010d050c0905;
    unsigned char   *byte_ptr = (unsigned char *)&code_to_crack;

    crack_address(code_to_crack, byte_ptr);
    (void)tool;
}

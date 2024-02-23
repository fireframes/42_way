#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int main(void)
{
    // Test case 1: Copy "Hello" to an empty destination string
    const char *src1 = "Hello";
    char dest1[10] = "";
    size_t result1 = ft_strlcpy(dest1, src1, sizeof(dest1));
    assert(strcmp(dest1, "Hello") == 0);
    assert(result1 == 5);
    printf("Test case 1: dest = %s, result = %zu\n", dest1, result1);

    // Test case 2: Copy "Hello" to a destination string with size 3
    const char *src2 = "Hello";
    char dest2[3] = "";
    size_t result2 = ft_strlcpy(dest2, src2, sizeof(dest2));
    assert(strcmp(dest2, "He") == 0);
    assert(result2 == 5);
    printf("Test case 2: dest = %s, result = %zu\n", dest2, result2);

    // Test case 3: Copy an empty string to a destination string
    const char *src3 = "";
    char dest3[10] = "Hello";
    size_t result3 = ft_strlcpy(dest3, src3, sizeof(dest3));
    assert(strcmp(dest3, "") == 0);
    assert(result3 == 0);
    printf("Test case 3: dest = %s, result = %zu\n", dest3, result3);

    // Test case 4: Copy "Hello" to a destination string with size 0
    const char *src4 = "Hello";
    char dest4[0] = "";
    size_t result4 = ft_strlcpy(dest4, src4, sizeof(dest4));
    assert(result4 == 5);
    printf("Test case 4: result = %zu\n", result4);

    return 0;
}
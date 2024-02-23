#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int main(void)
{
	// Test case 1: Copy "Hello" to a destination string with size 5
	const char *src1 = "Hello";
	char dest1[5] = "Hi";
	size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
	// assert(strcmp(dest1, "HiHe") == 0);
	// assert(result1 == 7);
	printf("Test case 1: dest = %s, result = %zu\n", dest1, result1);

	// Test case 2: Copy "Hello" to a destination string with size 7
	const char *src2 = "Hello";
	char dest2[7] = "Hi";
	size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
	// assert(strcmp(dest2, "HiHello") == 0);
	// assert(result2 == 9);
	printf("Test case 2: dest = %s, result = %zu\n", dest2, result2);

	// Test case 3: Copy "Hello" to a destination string with size 3
	const char *src3 = "Hello";
	char dest3[3] = "Hi";
	size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
	// assert(strcmp(dest3, "Hi") == 0);
	// assert(result3 == 7);
	printf("Test case 3: dest = %s, result = %zu\n", dest3, result3);

	// Test case 4: Copy an empty string to an empty destination string
	const char *src4 = "";
	char dest4[10] = "";
	size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
	// assert(strcmp(dest4, "") == 0);
	// assert(result4 == 0);
	printf("Test case 4: dest = %s, result = %zu\n", dest4, result4);

	return 0;
}
#include <stdio.h>
#include <assert.h>
#include <string.h>

// Function prototype
char    *ft_strchr(const char *s, int c);

int main(void)
{
    // Test case 1: Search for 'o' in "Hello"
    const char *str1 = "Hello";
    char *result1 = ft_strchr(str1, 'o');
    assert(result1 != NULL);
    printf("Test case 1: %s\n", result1);

    // Test case 2: Search for 'z' in "Hello"
    const char *str2 = "Hello";
    char *result2 = ft_strchr(str2, 'z');
    assert(result2 == NULL);
    printf("Test case 2: %s\n", result2);

    // Test case 3: Search for '\0' in "Hello"
    const char *str3 = "Hello";
    char *result3 = ft_strchr(str3, 0);
    // assert(result3 == NULL);
    printf("Test case 3: %s\n", result3);

    char s[] = "tripouille";    
	char *result4 = strchr(s, 't' + 256);
	char *result5 = ft_strchr(s, 't' + 256);
    printf("Test case 4c: %s\n", result4);
	printf("Test case 4u: %s\n", result5);

    return 0;
}
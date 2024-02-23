// Test case 1: Allocate 5 integers
size_t nmemb1 = 5;
size_t size1 = sizeof(int);
int *ptr1 = ft_calloc(nmemb1, size1);
assert(ptr1 != NULL);
for (size_t i = 0; i < nmemb1; i++) {
    assert(ptr1[i] == 0);
}
free(ptr1);

// Test case 2: Allocate 0 elements
size_t nmemb2 = 0;
size_t size2 = sizeof(double);
double *ptr2 = ft_calloc(nmemb2, size2);
assert(ptr2 == NULL);

// Test case 3: Allocate 3 characters
size_t nmemb3 = 3;
size_t size3 = sizeof(char);
char *ptr3 = ft_calloc(nmemb3, size3);
assert(ptr3 != NULL);
for (size_t i = 0; i < nmemb3; i++) {
    assert(ptr3[i] == 0);
}
free(ptr3);

// Test case 4: Allocate UINT_MAX + 1 bytes
size_t nmemb4 = 1;
size_t size4 = UINT_MAX + 1;
void *ptr4 = ft_calloc(nmemb4, size4);
assert(ptr4 == NULL);
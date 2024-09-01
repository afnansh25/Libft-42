#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    // If the start index is greater than the length of the string, return an empty string
    if (start >= strlen(s))
        return (char *)malloc(1);

    // Adjust len if it exceeds the length of the string from start
    if (len > strlen(s) - start)
        len = strlen(s) - start;

    // Allocate memory for the substring (+1 for null terminator)
    substr = (char *)malloc(len + 1);
    if (substr == NULL)
        return NULL;

    // Copy the substring from the original string
    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        substr[i] = s[start + i];
        i++;
    }

    // Null-terminate the substring
    substr[i] = '\0';

    return substr;
}


#include <stdio.h>
int main()
{
    // Test 1: Extract substring from the middle
    char *s = "Hello, World!";
    char *substr = ft_substr(s, 7, 5);
    if (substr)
    {
        printf("Substring: %s\n", substr);  // Expected: "World"
        free(substr);
    }

    // Test 2: Extract substring starting at 0
    substr = ft_substr(s, 0, 5);
    if (substr)
    {
        printf("Substring: %s\n", substr);  // Expected: "Hello"
        free(substr);
    }

    // Test 3: Start index out of bounds
    substr = ft_substr(s, 20, 5);
    if (substr)
    {
        printf("Substring: %s\n", substr);  // Expected: ""
        free(substr);
    }

    // Test 4: Length exceeds the remaining length of the string
    substr = ft_substr(s, 7, 50);
    if (substr)
    {
        printf("Substring: %s\n", substr);  // Expected: "World!"
        free(substr);
    }

    return 0;
}
#include <stdio.h>

int my_strcmp(const char *a, const char *b) {

    int cmp = 0;
    int count = (sizeof(a)>=sizeof(b) ? sizeof(a) : sizeof(b));
    
    for (int i = 0; i < count; i++)
    {
        if (*(a + i) != *(b + i))
        {   
            cmp = *(a + i) - *(b + i);
            break;
        }
    }
    
    return cmp;

}

int main()
{
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}

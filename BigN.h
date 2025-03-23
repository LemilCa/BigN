#if !defined(BIG_N__H__)
#define BIG_N__H__

#include <stdio.h>
#include <stdlib.h>


void BigN_helloWorld(void);

#endif /* !defined(BIG_N__H__) */


#if defined(BIG_N__IMPLEMENTATION)

void BigN_helloWorld(void)
{
    printf("BigN: hello world!\n");
    return;
}

#endif /* defined(BIG_N__IMPLEMENTATION) */
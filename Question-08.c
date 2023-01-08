/* 
        Question - 08 : Explain step by step evaluation of 3 * x / y - z + k
            where x = 2 , y = 3 , z = 3 , k = 1
 */

// Solution :-



#include <stdio.h>

int main()
{
    printf("Expression : 3 * x / y - z + k\n");
    printf("Step - 1 : Put x = 2, y = 3, z = 3, k = 1\n");
    printf("--> 3 * 2 / 3 - 3 + 1\n");
    printf("Step -2 : Evaluate as per the priority order of Operator.\n");
    printf("--> 3 * 2 / 3 - 3 + 1 = 6 / 3 - 3 + 1 \n ");
    printf("--> 2 - 3 + 1 = -1 + 1 = 0\n");
    printf("Hence, The expression will evalute to give 0.");
    return 0;
}
#include "main.h"
#include <limits.h>



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    int n;



	        n = get_bit(ULONG_MAX, 5);

		    printf("%d\n", n);

		        n = get_bit(1024, 10);

			    printf("%d\n", n);

			        n = get_bit(1024, 0);

				    printf("%d\n", n);

				        return (0);

}

#include "main.h"



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

	    unsigned long int n;
		int t;


	        n = 2048;

		    t = clear_bit(&n, 20);

		        printf("%i,%lu\n", t, n);

			    n = 0;

			        clear_bit(&n, 10);

				    printf("%lu\n", n);

				        n = 98;

					    clear_bit(&n, 1);

					        printf("%lu\n", n);

						    return (0);

}

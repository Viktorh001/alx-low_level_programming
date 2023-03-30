/**


 * _putchar - writes the character c to stdout
 

 * @c: The character to print
 

 *
 

 * Return: success 1.


 * on error, -1 is returned, and erro is set apppropriately.
 

 */



int _putchar(char c)


{


	return (write(1, &c, 1));


}

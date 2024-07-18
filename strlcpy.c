/*
FUNCTION
	<<strlcpy>>

DESCRIPTION
	The <<strcpy>> function copy and concatenate strings respectively.
	take the full size of the buffer (not just the length) and guarantee 
	to NUL- terminate the result (as long as size is larger than 0,
RETURNS
	The strlcpy() function return the total length of the string they 
	tried to create.

*/
#include	<string.h>
#include	<stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (src[0] == '\0')
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size <= i)
	{
		dest[i - 1] = '\0';
	}
	return (i);
}
int main()
{
 	char	src[] = "Hello";
	char	dst[6];
	int	lg;
	
	lg = ft_strlcpy(dst, src, sizeof(dst));
	printf("Src: %s \n", src);	
	printf("Dst: %s \n", dst);	
	printf("Length: %d \n", lg);	
}

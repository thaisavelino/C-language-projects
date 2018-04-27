#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int	main()
{
	char	str[12] = "hello thais";
	printf("\nbefore: %s\n", str);
	printf("\n Preencher com $ \n");
	ft_memset(str, '$', 8);
	printf("\nafter: %s\n", str);

}
//#include <stdio.h>
//#include <string.h>
//
//int main () {
//   char str[50];
    
//    strcpy(str,"This is string.h library function");
//    puts(str);

//    memset(str,'$',7);
//    puts(str);
    
//    return(0);
//}

// ----  C program to demonstrate working of memset() ---
// #include <stdio.h>
// #include <string.h>
//  
// int main()
// {
//	char str[50] = "GeeksForGeeks is for programming geeks.";
//	printf("\nBefore ft_memset(): %s\n", str);
//  // Fill 8 characters starting from str[13] with '$'
//	memset(str + 13, '$', 8*sizeof(char));
//
//	printf("After memset():  %s", str);
//	return 0;
// }


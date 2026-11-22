*This project has been created as part of the 42 curriculum by TiBloch*

# Libft

## Description

Personal C library made for the purpose of learning C 

## Instruction

Makefile command: 
make: compil and make archive
make clean: delete objects and dependencies
make fclean: clean and delete archive
make re: fclean then make

## Ressources

Linux Programmer's Manual, Students of 42 Lyon, Stack Overflow, MYCPLUS, 

--------------

## First part

Functions that are made to have the same comportement than the original one.

| ### Function                                                    | ### Description                             |
| ------------------------------------------------------------|---------------------------------------- |
|								|					|
| #### ft_is                                                          | #### look for certain charactere value                       |
|                                                             |                                         |
| int ft_isalpha(int c)                                       | if c = alpha char return 1 else 0       |
| int ft_isalnum(int c)                                       | if c = alpha or digit char return 1 else 0 |
| int ft_isascii(int c)                                       | if c = ascii char return 1 else 0       |
| int ft_isdigit(int c)                                       | if c = digit char return 1 else 0       |
| int ft_isprint(int c)                                       | if c = printable char return 1 else 0   |
|                                                             |                                         |
| #### string                                                        | #### use and modify string                                 |
|								|					|
| char *ft_strchr(const char *str, int c)                     	    | search and return a pointer of  the first char c in str or NULL if no match |
| char *ft_strdup(const char *s)                              	    | copy string s in new malloc string and return it |
| size_t ft_strlcat(char *dst, const char *src, size_t size)  	    | concatenate size bytes of src to dst and return len of dst+src or src+size if size < len of dst |
| size_t ft_strlcpy(char *dst, const char *src, size_t size)  	    | copy size bytes of src to dst, return len of src |
| size_t ft_strlen(const char *str)                           	    | count and return size of str            |
| int ft_strncmp(const char *s1, const char s2*, size_t n)    	    | compare s1 and s2 for n bytes and return 0 for s1=s2, <0 for s1 < s2, >0 for s1 > s2 |
| char *ft_strnstr(const char *big, const char *little, size_t len) | search little in big, return pointer to first char of little in big or big if little is empty or NULL  for no match |
| char *ft_strrchr(const char *str, int c)                    	    | search and return a pointer of the last char c in str or NULL if no match |
| int ft_atoi(const char *str)                                | convert initial portion of nptr to int and return it or 0 on error |
|                                                             |                                         |
| #### mem                                                         |	#### use memory	                                    |
|                                                             |                                         |
| void *ft_memchr(const void *s, int c, size_t n)             | search first c in *s for n bytes and return a pointer to it or NULL if no match |
| int ft_memcmp(const char *s1, const char *s2, size_t n)     | compare s1 and s2 for n bytes and return 0 for s1=s2, <0 for s1 < s2, >0 for s1 > s2 |
| void *ft_memcpy(void *dst, const char *src, size_t n)       | copy n bytes from src to dst and return dst |
| void *ft_memmove(void *dst, const char *src, size_t n)      | copy n bytes from src to tmp array to dst and return dst |
| void *ft_memset(void *s, int c, size_t n)                   | fill n bytes of s with c, return area pointed by s |
| void ft_bzero(void *s, size_t n)                            | fill n bytes of s with zero             |
| void *ft_calloc(size_t nmemb, size_t size)                  | alloc mem for an array of nmemb element of size bytes, fill it with zero and return it |
|                                                             |                                         |
| #### ft_to                                                       |  #### convert charachtere                    |
|								|					|
| int ft_tolower(int c)                                       | if c = uppercase convert to lowercase, return c |
| int ft_toupper(int c)                                       | if c = lowercase convert to uppercase, return c |

-------------

## Second part

Functions that already exist in a different form or not at all

| ### Function | ### Description |
| -------- | ----------- |
|		|	|
| #### str      | #### use/modify string 		 |
|		|	|
| char *ft_itoa(int n)   | convert and return a int in array of char |
| char **ft_split(char const *s, char c) | alloc memory and return an array of string by spliting s with c for delimiter |
| void ft_striteri(char *s, void (*f)(unsigned int, char *)) | applies f to each character of s, f param are the index and the string |
| char *ft_strjoin(char const *s1, char const *s2) | alloc memory and return new concatenate string s1 + s2 |
| char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) | alloc and return new string wich is the result of application of f on each character of s, f parameters are the index and the charactere |
| char *ft_strtrim(char const *s1, char const *set) | alloc memory and return new string wich is s1 with removed character from set from the beginning and the end |
| char *ft_substr(char const *s, unsigned int start, size_t len) | alloc memory and return new string from s wich begin at start and with max length of len |
|	  |		|
| #### fd 	  | #### write to file descriptor		|
|		|	|
| void ft_putchar_fd(char c, int fd) | write c to the file fd |
| void ft_putendl_fd(char *s, int fd) | write s and a newline to the file fd |
| void ft_putnbr_fd(int n, int fd) | write n to the file fd |
| void ft_putstr_fd(char *s, int fd) | write s to the file fd |

---------

## Third part

Function that manipulate linked list

| ### Function | ### Description |
| -------- | ----------- |
|	   |		 |
| void ft_lstadd_back(t_list **lst, t_list *new) | add node new to the end of lst |
| void ft_lstadd_front(t_list **lst, t_list *new | add node new to the front of lst |
| void ft_lstclear(t_list **lst, void (*del)(void *)) | delete and free the node and successors of lst with function del |
| void ft_lstdelone(t_list *lst, void (*del)(void *)) | delete and free node lst with function del |
| void ft_lstiter(t_list *lst, void (*f)(void *)) | applies f to the content of each node of the list lst |
| t_list *ft_lstlast(t_list *lst) | return last node of the list lst |
| t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) | iterate through lst, applies f to each content, create and return new list resulting of the applications, delete and free node with del if needed |
| t_list *ft_lstnew(void *content) | alloc memory and return a new node wich point NULL and with content as content |
| unsigned int ft_lstsize(t_list *lst) | count and return the number of nodes in lst |

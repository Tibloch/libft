*This project has been created as part of the 42 curriculum by TiBloch*

# libft

### Description

This is a C library designed for C learning and to be used during the school 42 training program.

#### First part:

Fonctions that are made to have the same comportement than the original one.

| Fonction                                                    | Description                             |
| ------------------------------------------------------------|---------------------------------------- |
| is                                                          | look for char                           |
|                                                             |                                         |
| int ft_isalpha(int c)                                       | if c = alpha char return 1 else 0       |
| int ft_isalnum(int c)                                       | if c = alpha or digit char return 1 else 								 0                                       |
| int ft_isascii(int c)                                       | if c = ascii char return 1 else 0                                                                                   |
| int ft_isdigit(int c)                                       | if c = digit char return 1 else 0       |
| int ft_isprint(int c)                                       | if c = printable char return 1 else 0   |
|                                                             |                                         |
| str                                                         | string                                  |
| char *ft_strchr(const char *str, int c)                     | search and return a pointer of  the first 								 char c in str or NULL if no match       |
| char *ft_strdup(const char *s)                              | copy string s in new malloc string and 									 return it     		                 |
| size_t ft_strlcat(char *dst, const char *src, size_t size)  | concatenate size bytes of src to dst and 								 return len of dst+src or src+size if size 								  < len of dst                            |
| size_t ft_strlcpy(char *dst, const char *src, size_t size)  | copy size bytes of src to dst, return len 								 of src                                  |
| size_t ft_strlen(const char *str)                           | count and return size of str            |
| int ft_strncmp(const char *s1, const char s2*, size_t n)    | compare s1 and s2 for n bytes and return 								0 for s1=s2, <0 for s1 < s2, >0 for s1>s2|
| char *ft_strnstr(const char *big, const char *little, size_t len) | search little in big, return 									       pointer to first char of little in 									big or big if little is empty or 									 NULL  for no match                |
| char *ft_strrchr(const char *str, int c)                    | search and return a pointer of the last 								 char c in str or NULL if no match       |
|                                                                   |                                   |
| mem                                                         |		                                |
| void *ft_memchr(const void *s, int c, size_t n)             | search first c in *s for n bytes and 									 return a pointer to it or NULL if no 									  match                                   |
| int ft_memcmp(const char *s1, const char *s2, size_t n)     | compare s1 and s2 for n bytes and return 								0 for s1=s2, <0 for s1 < s2, >0 for s1>s2|
| void *ft_memcpy(void *dst, const char *src, size_t n)       | copy n bytes from src to dst and return 								 dst                                     |
| void *ft_memmove(void *dst, const char *src, size_t n)      | copy n bytes from src to tmp array to dst 								 and return dst                          |
| void *ft_memset(void *s, int c, size_t n)                   | fill n bytes of s with c, return area 									 pointed by s                            |
| void ft_bzero(void *s, size_t n)                            | fill n bytes of s with zero             |
|                                                             |                                         |
| misc                                                        |      	                                |
| int ft_tolower(int c)                                       | if c = uppercase convert to lowercase, 									 return c                                |
| int ft_toupper(int c)                                       | if c = lowercase convert to uppercase, 									 return c                                |
| int ft_atoi(const char *str)                                | convert initial portion of nptr to int 									 and return it or 0 on error             |
| void *ft_calloc(size_t nmemb, size_t size)                  | alloc mem for an array of nmemb element 								 of size bytes, fill it with zero and 									  return it                               |
|                                                             |                                         |

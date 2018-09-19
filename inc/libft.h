#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define MALLOC(p1, p2) (p1*)malloc(sizeof(p1) * p2);
# define MEMALLOC(p1, p2) (p1*)ft_memalloc(sizeof(p1) * p2);

typedef struct		s_ilst
{
	int				data;
	struct s_ilst	*next;
}					t_ilst;

typedef struct		s_list
{
	void			*content;
	unsigned int	content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_iarr
{
	int				*array;
	unsigned int	length;
	t_ilst			*head;
}					t_iarr;

void			*ft_memset(void *d, int c, unsigned int n);
void			*ft_bzero(void *d, unsigned int n);
void			*ft_memcpy(void *d, const void *s, unsigned int n);
void			*ft_memccpy(void *d, const void *s, int c, unsigned int n);
void			*ft_memmove(void *d, void *s, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);

unsigned int	ft_strlen(const char *s);
char			*ft_strdup(const char *s);
char			*ft_strcpy(char *d, const char *s);
char			*ft_strncpy(char *d, const char *s, unsigned int n);
char			*ft_strcat(char *d, const char *s);
char			*ft_strncat(const char *d, const char *s, unsigned int n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *h, const char *n);
char			*ft_strnstr(const char *h, const char *n, unsigned int l);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);

int				ft_atoi(const char *s);

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

int				ft_toupper(int c);
int				ft_tolower(int c);

void			*ft_memalloc(unsigned int n);
void			ft_memdel(void **a);

char			*ft_strnew(unsigned int n);
void			ft_strdel(char **a);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, unsigned int n);
char			*ft_strsub(char const *s, unsigned int b, unsigned int l);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);

char			*ft_itoa(int n);

void			ft_putchar(char c);
void			ft_putstr(char const *c);
void			ft_putendl(char const *c);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

int				ft_error(char const *s);

t_list			*ft_lstnew(void const *content, unsigned int content_size);
void			ft_lstdelone(t_list **a, void (*del)(void*, unsigned int));
void			ft_lstdel(t_list **a, void (*del)(void*, unsigned int));
void			ft_lstadd(t_list **a, t_list *new);
void			ft_lstiter(t_list *s, void (*f)(t_list *e));
t_list			*ft_lstmap(t_list *s, t_list* (*f)(t_list *e));

int				ft_gnl(int const fd, char **line);


/*
t_iarr			*iarr_new(int c);
t_ilst			*ilst_new(int c);
void			iarr_delete(t_iarr *s);
void			ilst_delete(t_ilst *s);
*/


#endif
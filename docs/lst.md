### List
Functions for a linked list struct with the fields `void *content` and `t_list *next`
| Name            | Prototype                                                                | Description |
| --------------- | ------------------------------------------------------------------------ | ----------- |
| ft_lstnew       | t_list	*ft_lstnew(void *content)                                        | Returns a new list node with the content field set to `content` and next set to null |
| ft_lstadd_back  | void	ft_lstadd_back(t_list **lst, t_list *new)                          | Add the node `new` to the end of list `lst` |
| ft_lstadd_front | void	ft_lstadd_front(t_list **lst, t_list *new)                         | Add the node `new` to the start of list `lst` |
| ft_lstdelone    | void	ft_lstdelone(t_list *lst, void (*del)(void *))                     | Deletes node `lst`, using function `del` to delete the content field |
| ft_lstclear     | void	ft_lstclear(t_list **lst, void (*del)(void *))                     | Deletes all nodes in list `lst`, using function `del` to delete the content field |
| ft_lstsize      | int	ft_lstsize(t_list *lst)                                              | Returns the size of the list `lst` |
| ft_lstlast      | t_list	*ft_lstlast(t_list *lst)                                         | Returns the last node of the list `lst` |
| ft_lstiter      | void	ft_lstiter(t_list *lst, void (*f)(void *))                         | Performs function `f` on each of the contents fields of list `lst` |
| ft_lstmap       | t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) | Returns a new linked list, which is a copy of list `lst` where the contents have been modified by function `f`. Function `del` is used to delete the content of the new list in case there is an error with memory allocation |

#ifndef BUILTIN_COMMANDS_H
# define BUILTIN_COMMANDS_H

int		builtins_call(char **command, char ***environ);
int		ft_setenv(char *name, const char *value, int overwrite, char ***env);
int		builtin_setenv(char **command, int overwrite, char ***env);

#endif

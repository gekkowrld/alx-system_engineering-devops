# Shell variable expansions

This is a folder containing the shell variable files.

Shell variables are useful in the linux ecosystem. They are useful if you want to manipulate the files, do some calculations or even create aliases. They can dramatically improve your efficiency in using Linux/GNU. For example you often type this command into your terminal everyday:

```bash
git add . && git commit
```

You can shorten it to become even a letter long!

```bash
alias a="git add . && git commit"
```

And now you can use `a` as a command for the shell session to imply that you want to add and commit to git.

Well then there are variables which stores values that they are given. They act like alias in a way.

Here is an example:

```bash
two=1
hundred=100
million=1000000
```

You can use it like this :point_down:

```bash
echo $((($million * $two) * $hundred))
# 200000000
```

This isn't the most ideal use case but you get the idea. The variables can also take in text.

## Files in this repository

| Project Name | Description | Commands used|
| --- | ----| :--|
| [0-alias](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/0-alias)| Focuses on reducing the length of the commands typed| `alias`|
| [1-hello_you](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/1-hello_you) | Greets the user using their username| `$USER` `echo`|
| [2-path](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/2-path)| Focuses on adding a path name to the end of path list| `PATH` `$PATH`|
| [3-paths](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/3-paths)| Focuses on finding out how many paths you have in your system| `echo` `PATH` `wc` `grep` |
| [4-global_variables](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/4-global_variables)| Focuses on listing the global environment on one's system| `printenv`|
| [5-local_variables](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/5-local_variables)| Focuses on listing the local variables in a file | `set` |
| [6-create_local_variable](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/6-create_local_variable) | Focuses on creating variables that can only be accessed where they are created | - |
| [7-create_global_variables](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/7-create_global_variable) | Focuses on creating a variable that can be used by both the parent and the children| - |
| [8-true_knowledge](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/8-true_knowledge) | Focuses on basic shell arithmetic (addition) | `echo` |
| [9-divide_and_rule](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/9-divide_and_rule) | Focuses on shell basic shell arithmetic (division) | `echo` |
| [10-love_exponent_breath](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/10-love_exponent_breath) | Focuses on shell basic shell arithmetic (exponential) | `echo` |
| [11-binary_to_decimal](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/11-binary_to_decimal) | Focuses on the conversion of binary (base 2) numbers to decimal numbers (base 10) | `echo` |
| [12-combinations](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/12-combinations) | Focuses on combining letters to form some kind of a word | `echo` `tr` `grep`|
| [13-print_float](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/13-print_float) | Converts any number into floating points | `printf` |
| [100-decimal_to_hexadecimal](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/100-decimal_to_hexadecimal) | Focuses on converting decimals (base 10) to hexadecimal (base 16) | `printf` |
| [101-rot13](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/101-rot13) | Focuses on encrypting text using the rot13 encryption | `tr`|
| [102-odd](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/102-odd) | - | `perl` |
| [103-water_and_stir](https://github.com/gekkowrld/alx-system_engineering-devops/blob/3b37c61361714d0c4ee393e576f41afac7dfeec2/0x03-shell_variables_expansions/103-water_and_stir) | - | `echo` `printf` `tr`|

# Reformat the directory for submission
mv ./srcs/*.c ./
mv ./includes/libft.h ./
rm -rf srcs includes .git
rm Makefile README.md .gitignore
mv Makefile_submit Makefile
rm reformat.sh

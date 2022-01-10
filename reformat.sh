# Reformat the directory for submission
mv ./srcs/*.c ./
mv ./includes/libft.h ./
rm -rf srcs includes
rm Makefile README.md
mv Makefile_submit Makefile
rm reformat.sh

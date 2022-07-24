##
## EPITECH PROJECT, 2022
## CMakeTests
## File description:
## Makefile
##

NAME = adp

all :
		@cmake CMakeLists.txt -B build -DCMAKE_BUILD_TYPE=Debug
		@make -C ./build --no-print-directory
		@mv build/$(NAME) .
		@mv build/libmylib.a lib/include

clean :
		@if [ -d build ]; then\
			make clean -C ./build --no-print-directory; \
		fi
		@echo "\033[0;32mCLEAN :\033[0m"
		@rm -rf lib/include/libmylib.a
		@echo "\t - lib/include/libmylib.a"

fclean:	clean
		@rm -rf build
		@echo "\t - build"

		@rm -rf ${NAME}
		@echo "\t - ${NAME}"

		@rm -rf CMakeCache.txt
		@echo "\t - CMakeCache.txt"

		@rm -rf cmake_install.cmake
		@echo "\t - cmake_install.cmake"

		@rm -rf CMakeFiles
		@echo "\t - CMakeFiles"

		@rm -rf lib/include/libmylib.a
		@echo "\t - lib/include/libmylib.a"

re: fclean all

.PHONY: all clean fclean re
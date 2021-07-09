import os

os.system("echo > main.c")

 #Creating main.c
build = open("main.c", "a")

build_content = list()

build_content.append(
"#include <stdio.h> /* O #include significa um meio de incluir library (bibliotecas) no seu projeto.\n <stdio.h> é uma biblioteca que significa standart input-output!*/ \n\n"
#
"int main(void){ /* Aqui nós iniciamos toda estrutura do nosso programa. \n int = declaramos inteiro | main = declaramos que aqui será a base mãe do nosso programa | (void) significa ausencia de retorno.*/\n\n"
#
'printf("Hello World");\n /* Aqui nós pedimos para que o sistema imprima a mensagem Hello World na tela.*/ \n\n'
#
"return 0; \n /* E aqui todo nosso programa terá o retorno de 0.*/"
#
"}"
)

build.writelines(build_content)

os.system(
    "\nmv main.c ../../;" 
    "echo 'main.c criada com sucesso! Bons estudos!\n'"
)
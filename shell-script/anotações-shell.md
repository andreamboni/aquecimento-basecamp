## Primeiro script

```shell
#!/bin/sh
# This is a comment!

echo Hello World    # This is a comment, too!
```

A primeira linha indica que esse arquivo deve ser tratado como um Bourne shell e também informa que ele será executado por ``/bin/sh``

O ``#`` é utilizado para comentários. 

O commando echo possui dois argumentos: ``Hello`` e ``World``. 

Para transformar o arquivo em executável, utilizamos o comando ``chmod 755 first.sh`` e depois inserimos o comando ``./first.sh`` para executar o script. 

## Variáveis

Para declarar usamos o sinal ``=`` para fazer a atribuição do valor. No Bourne shell não deve haver espaço antes e depois do ``=``. Quando incluímos os espaços, o shell executa o nome da variável como um comando. 

Não existe a necessidade de declarar o tipo da variável. O shell armazena o conteúdo das variáveis como string e se o shell estiver esperando um número, ele vai saber lidar com ele. 

No arquivo ``var2.sh``, foi utilizado o comando ``read`` que é do próprio Bourne Shell. Caso eu inserisse o meu nome completo na variável, o programa ainda sim funcionário, porque quando o ``read`` é utilizado, ele insere as aspas duplas em volta do input. Mas para isso funcionar, será necessário incluir as aspas duplas no output (exemplo: ``echo "Hello $MY_NAME - hope you're well."``)

Quando eu vou declarar uma variável, não há necessidade de utilizar o ``$``. O ``$`` é utilizando somente quando vou chamar a variável. 

## Wildcards

Se eu quiser listar todos os arquivos .sh do diretório que estou, basta usar ``ls *.sh`` ou ``echo *.sh``. Se eu estiver em outro diretório eu posso fazer ``ls /meudiretorio/ *.sh`` ou ``echo /meudiretorio/ *.sh``.

Para copiar tudo de um diretório para outro, basta usar ``cp /tmp/a/* /tmp/b/``. Se quiser copiar todos ``.txt``, ``cp /tmp/a/*.txt /tmp/b/``

## Testes 

O shell interpreta o símbolo ``[`` como teste. 

```shell
$ type [
[ is a shell builtin
$ which [
/usr/bin/[
$ ls -l /usr/bin/[
lrwxrwxrwx 1 root root 4 Mar 27 2000 /usr/bin/[ -> test
$ ls -l /usr/bin/test
-rwxr-xr-x 1 root root 35368 Mar 27  2000 /usr/bin/test
```

import os #importa a biblioteca os
print('#' * 60)
iphost = input('Digite o IP ou Host que você deseja testar a conexão: ')
os.system('ping -c 6 {}'.format(iphost)) #chamando o método system da biblioteca os e então usando o comando
# desse método para executar o ping
# o -c cria um contador que diz quantas vezes o ping será executado, nesse caso 6 vezes
print('#' * 60)
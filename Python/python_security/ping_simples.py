import os
print('#' * 60)
iphost = input('Digite o IP ou Host que você deseja testar a conexão: ')
os.system('ping {}'.format(iphost))
print('#' * 60)
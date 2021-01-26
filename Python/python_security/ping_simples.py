import os
print('#' * 60)
iphost = input('Digite o IP ou Host que você deseja testar a conexão: ')
os.system('ping -c 6 {}'.format(iphost))
print('#' * 60)
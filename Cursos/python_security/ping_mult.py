import os  #importa a biblioteca os
import time  #importa a biblioteca time

with open('hosts.txt') as file:  #abre hosts.txt como arquivo
    dump = file.read()  #criamos a variável dump que vai ler o arquivo hosts.txt
    dump = dump.splitlines()  #coloca o conteúdo de dump em linhas separadas

    for ip in dump:
        print('-' * 60)
        print('Verificando o IP ', ip)
        os.system('ping -c 2 {}'.format(ip))
        time.sleep(2)  #faz uma pausa\delay entre as execuções

    print('-' * 60)
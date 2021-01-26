import os
import time

with open('hosts.txt') as file:
    dump = file.read()
    dump = dump.splitlines()

    for ip in dump:
        print('-' * 60)
        print('Verificando o IP ', ip)
        os.system('ping -c 2 {}'.format(ip))
        time.sleep(2)

    print('-' * 60)
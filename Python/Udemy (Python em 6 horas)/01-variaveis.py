#variáveis

carro = 'Camaro'
carro_azul = 'Hilux'
print ("Hello World")

nome = input('Digite o seu nome: ')
print("Olá,", nome, "!")

print("Primeiro número: ")
pnum = int(input())
print("Segundo número: ")
snum = int(input())
sun = pnum + snum
print("Resultado: " + str(sun))

print("Que dia é hoje?")
date = input()
print("")

#Listas (ARRAY)
carros = ['Camaro', 'Lamborghini', 'Ferrari']
carros.append('Fusca') #Adiciona um objeto na última posição
carros.insert(0, 'Fusca') #Insere um objeto numa posição específica do array
carros.remove('Fusca') #Remove um objeto pelo nome
carros.pop(3) #Remove objeto pela posição

#LISTAS TIPO CHAVE:VALOR
pessoa = {'nome':'José', 'idade':30, 'altura':1.8, 'peso':93}
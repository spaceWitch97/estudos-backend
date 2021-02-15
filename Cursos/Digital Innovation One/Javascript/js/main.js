// DECLARAR VARIÁVEIS (não precisa dizer o timo, isso funciona dinamicamente)
var nome = 'Bruxa Espacial'
var num = 20
var num2 = 3
var num3 = '40'
var frase = "Existence IS PAIN"

//exibir um alerta na tela
var idade = num + num2
//alert(nome+" tem "+idade+ " anos")
//alert(num + num2 + num3)

//exibir texto no console
console.log("don't forget: 42")
console.log(frase)
console.log(frase.replace("PAIN", "JOY")) //"replace" modifica algo na string, trocando pelo que você colocar dps
console.log(frase.toLowerCase())
console.log(frase.toUpperCase())

//criando uma lista
var lista = ["maca", "pera", "laranja"]
console.log(lista)
//alert(lista[0])

lista.push("uva")  //esse comando adiciona algo à lista
console.log(lista)

lista.pop() // esse comando retira o ultimo item da lista
console.log(lista)

console.log("Tamanho da lista: " + lista.length + " itens")
console.log("Imprimindo itens ordem contrária: " + lista.reverse())
console.log("Imprimindo lista como string: " + lista.toString)
console.log("Imprime como string e colocando separador: " + lista.join(" | "))

//DICIONÁRIO
var fruta = {nome:"maça", cor:"vermelha"}
console.log(fruta.cor)

var frutas = [
    {nome:"maca", cor:"vermelha"}, 
    {nome:"uva", cor:"roxa"}]
    console.log(frutas)


//CONDICIONAL
/*
var age = prompt("Qual a sua idade?")
if(age>=18){
    alert("Já é de maior, uh? Pode entrar")
} else{
    alert("Você ainda é pirralhe, cai fora!")
}
*/

//REPETIÇÃO
var count = 0
while (count <= 5){
    console.log(count)
    count++
}

var i 
for(i=0; i<=5; i++){
    console.log(i)
}

//DATA
var d = new Date()  // mostra a data atual
console.log(d)
console.log("mês atual: " + (d.getMonth()+1)) //esse método começa do zero ao invés do mês 1, então é necessário acrescentar um +1
console.log("minuto atual: " + d.getMinutes() )

//FUNÇÕES
function soma(n1, n2){
    return n1 + n2
}

console.log("O resultado da função soma é " + soma(5, 10))


function validaIdade(iidade){
    if (idade >= 18){
        validar = true
    } else{
        validar = false
    }
    return validar
}

var idade = 15 //prompt("Qual a sua idade?")
if (validaIdade(idade) == false){
    console.log("MENOR DE IDADE!")
} else{
    console.log("MAIOR DE IDADE")
}


function clicou(){
    document.getElementById("thanks").innerHTML = "<b>Obrigada</b> por clicar!";
}

function redirecionar1(){
    window.open("https://github.com/spaceWitch97") //abre o link na numa nova guia
}

function redirecionar2(){
    window.location.href = "https://github.com/spaceWitch97" //abre o link na mesma guia
}

function trocar(elemento){
    //document.getElementById("mousemove").innerHTML = "Obrigada por passar o mouse!"
    elemento.innerHTML = "Obrigada por passar o mouse!"
}

function voltar(elemento){
    //document.getElementById("mousemove").innerHTML = "Passe o mouse aqui"
    elemento.innerHTML = "Passe o mouse aqui :)"
}

function load(){
    console.log("PÁGINA CARREGADA")
}

function funChange(elemento){
    console.log(elemento.value)
}

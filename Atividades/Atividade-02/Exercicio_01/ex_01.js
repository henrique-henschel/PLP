// variavel global
let x = 10;

// funcao 'f()' q imprime o valor de x
function f() {
    console.log(x);
}

// funcao 'g()' q define 'x = 20' e chama a funcao 'f()'
function g() {
    x = 20;
    f();
}

// execucao do codigo (chamar 'g()')
g();
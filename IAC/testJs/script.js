console.log

function binaryToDecimal(num) {
    var pos = arrNum.length - 1;
    var resForm = 0;
    var finRes = 0;

    var arrNum = num.split('');

    for (let index = 0; index < arrNum.length; index++) {
        resForm = (arrNum[index] * (2 ** pos));
        finRes = finRes + resForm;

    }
    return finRes;
}

function binaryToDecimal2(numero) {
    var arrNumero = numero.split('');
    var posicao = 0;
    console.log(arrNumero);
    console.log(arrNumero.length + " " + typeof(numero) + typeof(arrNumero));

    var resultFormulaNoAlgarimo = 0;
    var resultFinal = 0;

    for (i = arrNumero.length - 1; i >= 0; i--) {
        console.log("sequencia: " + arrNumero[i]);

        //pra cada numero aplicar a*b**p e guardar este resultado 
        //e incrementar sempre nesse resultado até o final do array
        console.log("posicao: " + i);
        resultFormulaNoAlgarimo = (arrNumero[i] * (2 ** posicao));
        console.log(`a*b**2=${resultFormulaNoAlgarimo}`);
        resultFinal = resultFinal + resultFormulaNoAlgarimo;
        console.log(`resultFinal= ${resultFormulaNoAlgarimo}`);
        posicao++;
    }
    return resultFinal;
}

function decimalToBinary(num) {
    var divi = num;
    var quoc = 0;
    var resu = 0;
    var rest = 0;
    var i = 0;

    while (i == 0) {
        rest = parseInt(divi) % 2;
        resu += rest.toString();
        quoc = parseInt(divi / 2);

        if (quoc < 2) {
            i++;
            resu += divi;
        }

    }

}
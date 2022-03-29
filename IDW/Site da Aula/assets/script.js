function calcImc(name, sex, w, h){
    var imc = w / (h*h);

    if(imc<18.5){
        document.getElementById('result').innerHTML = imc;
    }else if(imc >=18.5 && imc <25){
        document.getElementById('result').innerHTML = imc;
    }else if(imc >=25 && imc <30){
        document.getElementById('result').innerHTML = imc;
    }else if(imc > 30){
        document.getElementById('result').innerHTML = imc;
    }
}
function envioCom() {

    var nome = document.getElementById('nome').value;
    var email = document.getElementById('emailC').value;
    var assunto = document.getElementById('assunto').value;
    var comment = document.getElementById('comment').value;



    if (nome == "") {
        window.alert("Erro: preencha o seu nome.");
        return false;
    } else if (email == "") {
        window.alert("Erro: preencha o seu email.");
        return false;
    } else if (assunto == "") {
        window.alert("Erro: escolha o assunto.");
        return false;
    } else if (comment == "") {
        window.alert("Erro: escreva um comentario.");
        return false;
    } else return window.alert("Enviado com sucesso!");


}

function news() {

    var email = document.getElementById('emailN').value;
    if (email == "") {
        window.alert("Erro: escreva seu email.")
        return false;
    } else window.alert("Inscricao ao newsettler sucedida!");


}
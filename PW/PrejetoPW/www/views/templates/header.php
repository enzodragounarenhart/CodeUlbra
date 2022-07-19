<!doctype html>
<html lang="en">
    <head>
        <title>Title</title>
        <!-- Required meta tags -->
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

        <!-- Bootstrap CSS v5.0.2 -->
        <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css"  integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
        <!-- Bootstrap JavaScript Libraries -->
        <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.2/dist/umd/popper.min.js" integrity="sha384-IQsoLXl5PILFhosVNubq5LC7Qb9DXgDA9i+tQ8Zj3iwWAwPtgFTxbJ8NT4GN1R8p" crossorigin="anonymous"></script>
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.min.js" integrity="sha384-cVKIPhGWiC2Al4u+LWgxfKTRIcfu0JTxR+EQDz/bgldoEyl4H0zUF0QKbrJ0EcQF" crossorigin="anonymous"></script>

    </head>
    <body>  

        <header class="p-5 bg-primary text-white text-center">
            <h1>Cabecalho do Sistema MVC</h1>
            <p>Exemplo de estrutura para utilizarmos na disciplina de PW!!</p>
        </header>

        
        <section class="row">
            <nav class="col-md-3 p-3">
                <h2>Menu</h2>
                <ul class="nav flex-column">
                    <li class="nav-item">
                        <a id="home" class="nav-link" href="?controller=site&action=home">Home</a>
                    </li>
                    <li class="nav-item">
                        <a id="about" class="nav-link" href="?controller=site&action=about">Sobre</a>
                    </li>
                    <li class="nav-item">
                        <a id="product" class="nav-link" href="?controller=site&action=products">Produtos e Servicos</a>
                    </li>
                    <li class="nav-item">
                        <a id="contact" class="nav-link" href="?controller=site&action=contact">Contato</a>
                    </li>
                    <h3>Clientes</h3>
                    <li class="nav-item">
                        <a id="" class="nav-link" href="?controller=site&action=register">Cadastro</a>
                    </li>
                    <li class="nav-item">
                        <a id="" class="nav-link" href="?controller=site&action=listClients">Listar Clientes</a>
                    </li>
                </ul>
            </nav>
        </section>

    </body>
</html>
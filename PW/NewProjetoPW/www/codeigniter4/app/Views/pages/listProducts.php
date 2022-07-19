<h1>Lista de Produtos</h1>
<table class="table">
    <tr>
        <th>Codigo</th>
        <th>Nome</th>
        <th>Preco</th>
        <th>Descricao</th>
        <th>Categoria</th>
    </tr>

<?php

foreach($products as $product){
?>
    <tr>
        <td><?=$product["idProduct"]?></td>
        <td><?=$product["name"]?></td>
        <td><?=$product["price"]?></td>
        <td><?=$product["description"]?></td>
        <td><?=$product["idCategory"]?></</td>
    </tr>
<?php
}
?>
</table>
<h1>Lista de Clientes</h1>
<table class="table">
    <tr>
        <th>Codigo</th>
        <th>Nome</th>
        <th>Email</th>
        <th>Endereco</th>
        <th>Acoes</th>
    </tr>

<?php

foreach($clients as $client){
?>
    <tr>
        <td><?=$client["idClient"]?></td>
        <td><?=$client["name"]?></td>
        <td><?=$client["phone"]?></td>
        <td><?=$client["email"]?></td>
        <td><form action="<?=base_url("client/{$client['idClient']}")?>"><input class="bg-primary text-white" type="submit" value="Detalhes"></form></td>

    </tr>
<?php
}
?>
</table>
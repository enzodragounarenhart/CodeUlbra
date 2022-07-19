<h1>Lista de Clientes</h1>
<table class="table">
    <tr>
        <th>Codigo</th>
        <th>Nome</th>
        <th>Email</th>
        <th>Endereco</th>
        <th>Telefone</th>
    </tr>
</table>

<?php

foreach($arrayClients as $client){
?>
    <tr>
        <th><?$client["idclient"]?></th>
        <th><?$client["idclient"]?></th>
        <th><?$client["idclient"]?></th>
        <th><?$client["idclient"]?></th>
        <th><?$client["idclient"]?></th>
    </tr>
<?php
}
?>
</table>
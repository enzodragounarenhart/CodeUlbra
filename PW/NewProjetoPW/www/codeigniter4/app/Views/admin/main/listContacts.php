<h1>Lista de Contatos</h1>
<table class="table">
    <tr>
        <th>Codigo</th>
        <th>Nome</th>
        <th>Email</th>
        <th>Mensagem</th>
        <th>Status</th>
        <th>Descricao</th>
    </tr>

<?php

foreach($contacts as $contact){
?>
    <tr>
        <td><?=$contact["idContact"]?></td>
        <td><?=$contact["name"]?></td>
        <td><?=$contact["email"]?></td>
        <td><?=$contact["message"]?></td>
        <td><?=$contact["status"]?></</td>
        <td><?=$contact["description"]?></</td>
    </tr>
<?php
}
?>
</table>
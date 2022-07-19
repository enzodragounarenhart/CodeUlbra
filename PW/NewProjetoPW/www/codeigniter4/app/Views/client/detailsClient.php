<h1>Lista de Clientes</h1>

<table class="table">
    <tr>
        <th>Nome</th>
        <td>
            <?=$client['name']?>
        </td>
    </tr>
    <tr>
        <th>Telefone</th>
        <td>
            <?=$client['phone']?>
        </td>
    </tr>
    <tr>
        <th>Email</th>
        <td>
            <?=$client['email']?>
        </td>
    </tr>
    <tr>
        <th>Endereco</th>
        <td>
            <?=$client['address']?>
        </td>
    </tr>
</table>
<form action="<?= base_url('listClients');?>">
    <input class="bg-primary text-white" type="submit" value="Voltar">
</form>
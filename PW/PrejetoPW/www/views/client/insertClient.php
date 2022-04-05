<h1>Inserindo Cliente</h1>
<form action="?controller=client&action=insertClientAction" method="post">
    <div class="mb-3 mt-3">
        <label class="form-label">Nome</label>
        <input type="text" name="name" class="form-control">
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Email</label>
        <input type="email" name="email" class="form-control">
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Telefone</label>
        <input type="text" name="phone" class="form-control">
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Endereco</label>
        <input type="text" name="address" class="form-control">
    </div>

    <input type="btn btn-primary" type="submit" value="Enviar">
</form>
<h1>Inserindo Cliente</h1>
<form action="<?=base_url('admin/insertClientAction') ?>" method=POST enctype="multipart/form-data">

    <div class=" mb-3 mt3">
        <label class="form-label">Nome</label>
        <input type="text" name="name" class="form-control">
    </div>
    <div class=" mb-3 mt3">
        <label class="form-label">Email</label>
        <input type="text" name="email" class="form-control">
    </div>
    <div class=" mb-3 mt3">
        <label class="form-label">Telefone</label>
        <input type="text" name="phone" class="form-control">
    </div>
    <div class=" mb-3 mt3">
        <label class="form-label">Endereco</label>
        <input type="text" name="address" class="form-control">
    </div>

    <input class="btn btn-secondary" type="submit" value="Enviar">
</form>
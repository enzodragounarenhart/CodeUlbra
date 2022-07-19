<h1>Contato</h1>
<form action="<?=base_url('contact/insertMessageAction') ?>" class="col-md-6" method=POST enctype="multipart/form-data">

    <div class=" mb-3 mt3">
        <label class="form-label">Nome</label>
        <input type="text" name="name" class="form-control">
    </div>
    <div class=" mb-3 mt3">
        <label class="form-label">Email</label>
        <input type="text" name="email" class="form-control">
    </div>
    <div class=" mb-3 mt3">
        <label class="form-label">Mensagem</label>
        <textarea rows="10" cols="50" type="text" name="message" class="form-control"></textarea>
    </div>

    <input class="btn btn-primary" type="submit" value="Enviar">
</form>
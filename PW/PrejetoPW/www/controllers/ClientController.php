<?php
class ClientController{

    function __construct(){
        if (!isset($_SESSION["login"])){
            header("Location: index.php?c=m&a=l");
        }
        
        require_once("models/ClientsModel.php");
    }

    public function listClients(){
        $ClientModel = new ClientModel();
        $ClientModel -> listClient();
        $result = $ClientModel -> getConsult();

        $arrayClient = array();

        while ($line = $result->fetch_assoc()) {
            array_push($arrayClient,$line);
        }
        require_once ("views/templates/header.php");
        require_once ("views/client/ListClients");
        require_once ("views/templates/footer.php");
    }
}
?>
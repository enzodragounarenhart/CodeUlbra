<?php
class MainController{

    public function index(){
        if (!isset($_SESSION["login"])){
            header("Location: index.php?c=m&a=l");
        }
        require_once("views/templates/header.php");
        require_once("index.php");
        require_once("views/templates/footer.php");
    }

    public function login(){
        require("views/users/Login.php");
    }

    public function sessionDestroy(){
        session_destroy();
        header("Location: index.php?c=m&a=l");
    }
}
?>
<?php
class UsersController{

    public function validateLogin(){
        $login = $_POST ["login"];
        require("models/UsersModel.php");
        $User = new UserModel();
        $User -> consultUser($login);
        $result = $User -> getConsult();

        if ($line = $result->fetch_assoc()) {
            if ($line['pass'] == $_POST["pass"]) {
                $_SESSION['idUser'] = $line['idUser'];
                $_SESSION['name'] = $line['name'];
                $_SESSION['login'] = $line['login'];
                header("Location: index.php?c=m&a=i");
            }else {
                print("Senha Errada!");
            }
        }else {
            print("Usuario nao existe!");
        }
    }
}
?>
<?php

    class ClientController{

        public function insertClient()
        {
            require_once("views/templates/header.php");
            require_once("views/pages/insertClient.php");
            require_once("views/templates/footer.php");
        }

        public function insertClientAction()
        {

            $client = array(

                'name' => $_POST['name'],
                'phone' => $_POST['phone'],
                'email' => $_POST['email'],
                'address' => $_POST['address']

            );

            require_once("views/templates/header.php");
            require_once("views/pages/insertClientAction.php");
            require_once("views/templates/footer.php");
        }
    }

?>
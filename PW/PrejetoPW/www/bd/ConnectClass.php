<?php

class ConnectClass{
    
    var $conn;

    public function openConnect(){
        $serverName = 'db';
        $userName = 'root';
        $password = 'test';
        $dbName = 'pw_example';

        $this-> conn = new mysqli($serverName, $userName, $password, $dbName);

        if ($this-> conn -> connect_error) {
            die("Conexao com o Banco falhou ->" . $this-> conn -> connect_error);
        }
    }

    public function getConn(){
        return $this->conn;
    }

}


?>
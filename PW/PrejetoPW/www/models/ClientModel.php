<?php

class ClientModel{

    var $result;

    function __construct(){
        require_once("bd/ConnectCLass.php");
    }

    public function listClient(){
        $Oconn = new ConnectClass();
        $Oconn -> openConnect();
        $conn = $Oconn ->getConn();
        $sql = 'SELECT * FROM clients';
        $this -> result = $conn-> query($sql);
    }

    public function getConsult(){
        
        return $this-> result;

    }
}
?>
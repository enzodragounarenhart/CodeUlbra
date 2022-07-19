<?php

namespace App\Controllers;

use App\Models\ClientModel;

class Client extends BaseController{

    public function listClients()
    {
        $client = new ClientModel();

        $data = ['clients' => $client -> listClients()];

        echo view('templates/header');
        echo view('client/listClients', $data);
        echo view('templates/footer');
    }

    public function detailsClient($idClient)
    {
        $clientModel = new ClientModel();
        $data = [
            'voltar' => $clientModel -> listClients(),
            'client' => $clientModel -> listClients($idClient)
        ];

        echo view('admin/templates/header');
        echo view('admin/main/detailsClient', $data);
        echo view('admin/templates/footer');
    }

    public function insertMessageAction()
    {
        $clientModel = new ClientModel();
        $data = [
            'name' => $this -> request -> getVar('name'), 
            'email' => $this -> request -> getVar('email'), 
            'phone' => $this -> request -> getVar('phone'), 
            'address' => $this -> request -> getVar('address')
        ];
        
        $clientModel -> save($data);
        return redirect()->to(base_url('admin/insertClient'));
    }

}
?>
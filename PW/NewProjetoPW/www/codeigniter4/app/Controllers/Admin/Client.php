<?php

namespace App\Controllers\admin;

use CodeIgniter\Controller;
use App\Models\ClientModel;
use App\Models\ContactModel;
use CodeIgniter\HTTP\Request;

class Client extends Controller{

    /**
	 * Instance of the main Request object.
	 *
	 * @var HTTP\IncomingRequest
	 */
	protected $request;

    public function listClients()
    {
        $client = new ClientModel();

        $data = ['clients' => $client -> listClients()];

        echo view('admin/templates/header');
        echo view('admin/main/listClients', $data);
        echo view('admin/templates/footer');
    }

    public function listContacts()
    {
        $contactModel = new ContactModel();

        $data = ['contacts' => $contactModel -> listContacts()];

        echo view('admin/templates/header');
        echo view('admin/main/listContacts', $data);
        echo view('admin/templates/footer');
    }

    public function detailsClient($idClient)
    {
        $clientModel = new ClientModel();
        $data = [
            'voltar' => $clientModel -> listClients(),
            'client' => $clientModel -> listClients($idClient)
        ];

        echo view('admin/templates/header');
        echo view('admin/client/detailsClient', $data);
        echo view('admin/templates/footer');
    }
    
    public function insertClient()
    {
        echo view('admin/templates/header');
        echo view('admin/main/insertClient');
        echo view('admin/templates/footer');
    }

    public function insertClientAction()
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
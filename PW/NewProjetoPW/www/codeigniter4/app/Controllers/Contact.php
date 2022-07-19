<?php

namespace App\Controllers;

use App\Models\ContactModel;

class Contact extends BaseController{

    public function listContacts()
    {
        $contact = new ContactModel();
        $contact -> listContacts();

        $data = ['contacts' => $contact -> listContacts()];

        echo view('templates/header');
        echo view('pages/listContacts', $data);
        echo view('templates/footer');
    }

    public function insertMessageAction()
    {
        $contactModel = new ContactModel();
        $data = [
            'name' => $this -> request -> getVar('name'), 
            'email' => $this -> request -> getVar('email'), 
            'message' => $this -> request -> getVar('message')
        ];
        
        $contactModel -> insert($data);
        return redirect()->to(base_url('contact'));
    }

}
?>
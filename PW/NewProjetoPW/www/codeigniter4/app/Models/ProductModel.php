<?php

namespace App\Models;

use CodeIgniter\Model;

class ProductModel extends Model{

    protected $table = 'products';
    protected $primaryKey = 'idProduct';

    public function listProducts($idProduct = null)
    {
        if ($idProduct == null) {
            return $this -> findAll();
        }else{
            return $this -> find($idProduct);
        }
    }

}
?>
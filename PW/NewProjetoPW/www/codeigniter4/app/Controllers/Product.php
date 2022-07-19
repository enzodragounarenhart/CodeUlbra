<?php

namespace App\Controllers;

use App\Models\ProductModel;

class Product extends BaseController{

    public function listProducts()
    {
        $product = new ProductModel();
        $product -> listProducts();

        $data = ['products' => $product -> listProducts()];

        echo view('templates/header');
        echo view('pages/listProducts', $data);
        echo view('templates/footer');
    }

}
?>
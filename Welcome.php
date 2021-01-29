<?php
session_start();

if(!isset($_SESSION['loggedin']) || $_SESSION['loggedin']!=true){
    header("location: login.php");
    exit;
}


?>

<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css" integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">

    <title>iMIS!</title>
 <style>
#para{
    background-color:#343a40;
    text-align: center;
    padding:7px;
}

.row1 {
    display: -ms-flexbox;
    display: flex;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
    padding-left: 90px;
    margin-right: -15px;
    margin-left: -15px;
}


 </style>

  </head>
  <body>
    


    <?php include 'model/navbar.php'; ?>
        <?php include 'model/slider.php'?>
        <?php include 'model/sqliconn.php'; ?>
        <div class="container my-4 ">
        <h2 class="text-center">iMISS</h2>
        </div>
        <div class="row1">
            <?php 
            $sql= "SELECT * FROM `cata`";
            $result=mysqli_query($conn,$sql);
            while($row=mysqli_fetch_assoc($result)){
                $id=$row['cata_id'];
                $name=$row['cata_name'];
                $des=$row['cata_dec'];
                echo ' <div class="col-md-4 my-2">
                            <div class="card" style="width: 18rem;">
                                <img src="model/photo'.$id.'.jpg" width="200px" class="card-img-top" alt="...">
                                    <div class="card-body">
                                        <h5 class="card-title">' .$name.'</h5>
                                        <p class="card-text"> '. substr($des,0,100) .' ...</p>
                                        <a href="more.php?proid='.$id.'" class="btn btn-primary">Go somewhere</a>
                                    </div>
                            </div>
                          </div> ';

            }

        ?>
        </div>


  


    <p id="para"> <font color="white"> @copyright by hellodeepakji servers 2021 </font> </p>

    




    <!-- Optional JavaScript; choose one of the two! -->

    <!-- Option 1: jQuery and Bootstrap Bundle (includes Popper) -->
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ho+j7jyWK8fNQe+A12Hb8AhRq26LrZ/JpcUGGOn+Y7RsweNrtN/tE3MoK7ZeZDyx" crossorigin="anonymous"></script>

    <!-- Option 2: jQuery, Popper.js, and Bootstrap JS
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js" integrity="sha384-9/reFTGAW83EW2RDu2S0VKaIzap3H66lZH81PoYlFhbGU+6BZp6G7niu735Sk7lN" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.min.js" integrity="sha384-w1Q4orYjBQndcko6MimVbzY0tgp4pWB4lZ7lr30WKz0vr/aWKhXdBNmNb5D92v7s" crossorigin="anonymous"></script>
    -->
  </body>
</html>
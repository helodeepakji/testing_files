<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css"
        integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">


    <title>Welcome to iMISS!</title>
</head>



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
    padding-left: 70px;
    margin-right: -15px;
    margin-left: -15px;
        }

        .mb-3, .my-3{
    margin-bottom: 1rem!important;
    padding: 10px;
}


    </style>


<body>
     

        <?php
            include 'model/sqliconn.php';
          $id = $_GET['proid'];
          $sql = "SELECT * FROM `question` WHERE cata_id=$id"; 
          $result = mysqli_query($conn,$sql);
          while($row = mysqli_fetch_assoc($result)){
           $catname = $row['question'];
           $catdesc = $row['ques_desc'];
    }
    
    ?>

<?php
    $showAlert = false;
    $method = $_SERVER['REQUEST_METHOD'];
    if($method=='POST'){
        // Insert into thread db
        $th_title = $_POST['title'];
        $th_desc = $_POST['desc'];

        $th_title = str_replace("<", "&lt;", $th_title);
        $th_title = str_replace(">", "&gt;", $th_title); 

        $th_desc = str_replace("<", "&lt;", $th_desc);
        $th_desc = str_replace(">", "&gt;", $th_desc); 

        $sno = $_POST['sno']; 
        $sql= "INSERT INTO `question` (`question`, `ques_desc`, `user_id`, `cata_id`, `dt`) VALUES ('$ask', '$deep', '0', '$id', current_timestamp());";
        $result=mysqli_query($conn,$sql);
        $showAlert = true;
        if($showAlert){
            echo '<div class="alert alert-success alert-dismissible fade show" role="alert">
                        <strong>Success!</strong> Your thread has been added! Please wait for community to respond
                        <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                            <span aria-hidden="true">&times;</span>
                        </button>
                  </div>';
        } 
    }
    ?>





        <?php include 'model/navbar.php'; ?>
        <div class="container my-4 ">
        <?php include 'model/sqliconn.php'; ?>
        <div class="container my-4 ">
            <h2 class="text-center">iMISS</h2>
        </div>
        <div class="row">
            <?php 
            $id= $_GET['proid'];
            $sql= "SELECT * FROM `cata` WHERE cata_id = $id";
            $result=mysqli_query($conn,$sql);
            while($row=mysqli_fetch_assoc($result)){
                $catname= $row['cata_name'];
                $catdec= $row['cata_dec'];
        
            }
            ?>

    <div class="container my-4">
        <div class="jumbotron">
            <h1 class="display-4">Welcome to <?php echo $catname;?> </h1>
            <p class="lead"> <?php echo $catdec;?></p>
            <hr class="my-4">
            <p>This is a peer to peer forum. No Spam / Advertising / Self-promote in the forums is not allowed. Do not
                post copyright-infringing material. Do not post “offensive” posts, links or images. Do not cross post
                questions. Remain respectful of other members at all times.</p>
            <a class="btn btn-success btn-lg" href="#" role="button">Learn more</a>
        </div>
    </div>






        <?php 
    if(isset($_SESSION['loggedin']) && $_SESSION['loggedin']==true){ 
    echo '<div class="container">
            <h1 class="py-2">Start a Discussion</h1> 
            <form action="'. $_SERVER["REQUEST_URI"] . '" method="post">
                <div class="form-group">
                    <label for="exampleInputEmail1">Problem Title</label>
                    <input type="text" class="form-control" id="title" name="title" aria-describedby="emailHelp">
                    <small id="emailHelp" class="form-text text-muted">Keep your title as short and crisp as
                        possible</small>
                </div>
                <input type="hidden" name="sno" value="'. $_SESSION["sno"]. '">
                <div class="form-group">
                    <label for="exampleFormControlTextarea1">Ellaborate Your Concern</label>
                    <textarea class="form-control" id="desc" name="desc" rows="3"></textarea>
                </div>
                <button type="submit" class="btn btn-success">Submit</button>
            </form>
        </div>';
    }
    else{
        echo '
        <div class="container">
        <h1 class="py-2">Start a Discussion</h1> 
           <p class="lead">You are not logged in. Please login to be able to start a Discussion</p>
        </div>
        ';
    }

    ?>



    <?php

    $id = $_GET['proid'];
    $sql = "SELECT * FROM `question` WHERE cata_id=$id"; 
    $result = mysqli_query($conn, $sql);
    $noResult = true;
    while($row = mysqli_fetch_assoc($result)){
        $noResult = false;
        $id = $row['ques_id'];
        $title = $row['question'];
        $desc = $row['ques_desc']; 
        $questime = $row['dt']; 
        $user_id = $row['user_id']; 
        $sql2 = "SELECT * FROM `user` WHERE sno='$user_id'";
        $result2 = mysqli_query($conn, $sql2);
        $row2 = mysqli_fetch_assoc($result2);
        



        echo '<div class="media my-3">
            <img src="model/smallLogo.png" width="54px" class="mr-3" alt="...">
            <div class="media-body">'.
             '<h5 class="mt-0"> <a class="text-dark" href="thread.php?threadid=' . $id. '">'. $title . ' </a></h5>
                '. $desc . ' </div>'.'<div class="font-weight-bold my-0"> -----> Asked by: '. $row2['username'] . ' </div>'.
        '</div>';
    
        }
        // echo var_dump($noResult);
        if($noResult){
            echo '<div class="jumbotron jumbotron-fluid">
                    <div class="container">
                        <p class="display-4">No Threads Found</p>
                        <p class="lead"> Be the first person to ask a question</p>
                    </div>
                 </div> ';
        }
    ?>

    </div>



    <p id="para"> <font color="white"> @copyright by hellodeepakji servers 2020 </font> </p>

            <!-- Optional JavaScript; choose one of the two! -->

            <!-- Option 1: jQuery and Bootstrap Bundle (includes Popper) -->
            <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"
                integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj"
                crossorigin="anonymous">
            </script>
            <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.bundle.min.js"
                integrity="sha384-ho+j7jyWK8fNQe+A12Hb8AhRq26LrZ/JpcUGGOn+Y7RsweNrtN/tE3MoK7ZeZDyx"
                crossorigin="anonymous">
            </script>

            <!-- Option 2: jQuery, Popper.js, and Bootstrap JS
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js" integrity="sha384-9/reFTGAW83EW2RDu2S0VKaIzap3H66lZH81PoYlFhbGU+6BZp6G7niu735Sk7lN" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.min.js" integrity="sha384-w1Q4orYjBQndcko6MimVbzY0tgp4pWB4lZ7lr30WKz0vr/aWKhXdBNmNb5D92v7s" crossorigin="anonymous"></script>
    -->
</body>

</html>
<?php
include('../model/db.php');


 $error="";

if (isset($_POST['update'])) {
    if (empty($_POST['firstname']) || empty($_POST['lastname']) || empty($_POST['email']) || empty($_POST['phone']) || empty($_POST['password']) || empty($_POST['address']) || empty($_POST['gender']) || empty($_POST['atime'])) {
$error = "input given is invalid";
}
else
{
$connection = new db();
$conobj=$connection->OpenCon();


$userQuery=$connection->UpdateUser($conobj,"customer",$_SESSION["username"],$_POST['firstname'],$_POST['lastname'],$_POST['email'],$_POST['phone'],$_POST['password'],$_POST['address'],$_POST['gender'],$_POST['atime']);
if($userQuery==TRUE)
{
    echo "update successful"; 
}
else
{
    echo "could not update";    
}
$connection->CloseCon($conobj);

}
}


?>
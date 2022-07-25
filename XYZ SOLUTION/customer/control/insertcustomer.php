<?php
include('../model/db.php');
$error="";

if(isset($_POST['submit']))
{
   
    if (empty($_POST['fname']) || empty($_POST['lname']) || empty($_POST['email']) || empty($_POST['pho']) || empty($_POST['password']) || empty($_POST['add']) || empty($_POST['gender']) || empty($_POST['atime']))
    {
        $error = "Input given invalid";
    }

    else
    {
        $connection = new db();
        $conobj=$connection->OpenCon();
   
        $userQuery=$connection->Addcustomer($conobj,"customer",$_POST['fname'],$_POST['lname'],$_POST['email'],$_POST['pho'],$_POST['password'],$_POST['add'],$_POST['gender'],$_POST['atime']);
        if($userQuery==TRUE){
          
           echo "data has been uploaded";
        }
         else
         {
             echo"sorry not uploaded".$conobj->error;
         }
        
         
         
         $connection->CloseCon($conobj);
    }
}

?>
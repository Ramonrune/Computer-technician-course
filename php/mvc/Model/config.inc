<!-- Arquivo responsavel pela conex�o do banco de dados
abaixo � informado o host , o usu�rio e a senha
tamb�m � informado o banco de dados que ser� conectado -->
<?php


$conexao = mysqli_connect('localhost','root','');
if(!$conexao){
	die('N�o foi possivel conectar ...'.mysql_error());
}


mysqli_select_db($conexao,"intranet0");




?>


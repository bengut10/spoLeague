<?php
date_default_timezone_set('America/Monterrey');
require 'conf.inc.php';
?>
<html>
	<head>		
		<link rel="stylesheet" type="text/css" href="style.css"/>
		<title>
		 Standings 
		</title>  
	</head>
	<body>
		
		<nav id = "navigation" class="clearfix"> 
			<ul>	
				<li><a href="index.php">Home</a></li>
				<li><a href="standings.php">Posiciones</a></li>
				<li><a href="statistics.php">Estadisticas</a></li>
				<li><a href="#">Resultados</a></li>
				<li><a href="#">Fotos</a></li>
			</ul>
		</nav>
		
		<h1> Primera Division Torneo Invierno 2016 </h1>
		<h2> Goleo Individual Primera Division </h2> 

	<?php

	$query = "SELECT Nombre, Equipo, Goles,
	 		@curRank := @curRank + 1 AS POS
 			FROM goleo1 p, (SELECT @curRank := 0) r 
			ORDER BY Goles DESC";


	if($query_run = mysql_query($query))
	{	
		
		echo "<table>
		<tr>
			<th> POS </th>
			<th> Nombre </th>
			<th> Equipo </th>
			<th> Goles </th>
		</tr>";
	
		while($query_row = mysql_fetch_assoc($query_run))
		{
			echo "<tr>";
			echo "<td>". $query_row['POS']. "</td>";
			echo "<td>". $query_row['Nombre']. "</td>";
			echo "<td>". $query_row['Equipo']. "</td>";
			echo "<td>". $query_row['Goles']. "</td>";
		}
	
		echo "</table>";
	}

	else
	{
		echo 'Fail';
		echo mysql_error();	
	}	
	
	?>

	</body>
	
	<h2> Goleo Individual Segunda Division </h2> 

	<?php

	$query = "SELECT Nombre, Equipo, Goles,
	 		@curRank := @curRank + 1 AS POS
 			FROM goleo2 p, (SELECT @curRank := 0) r 
			ORDER BY Goles DESC";


	if($query_run = mysql_query($query))
	{	
		
		echo "<table>
		<tr>
			<th> POS </th>
			<th> Nombre </th>
			<th> Equipo </th>
			<th> Goles </th>
		</tr>";
	
		while($query_row = mysql_fetch_assoc($query_run))
		{
			echo "<tr>";
			echo "<td>". $query_row['POS']. "</td>";
			echo "<td>". $query_row['Nombre']. "</td>";
			echo "<td>". $query_row['Equipo']. "</td>";
			echo "<td>". $query_row['Goles']. "</td>";
		}
	
		echo "</table>";
	}

	else
	{
		echo 'Fail';
		echo mysql_error();	
	}	
	
	?>

	
</html>
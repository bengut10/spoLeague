<!DOCTYPE html>
<html lang="en">
<head>
    <title>Liga de Futbol Georgetown</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
    <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/js/bootstrap.min.js"></script>
</head>
<body>
	<nav class = "navbar navbar-inverse" >
		<div class = "container-fluid" style= "background-color:black" >
			<!--Logo -->
			
			<div class = "navbar-header">
				<button type = "button" class = "navbar-toggle" data-toggle= "collapse" data-target = "#mainNavBar"> 
				<span class = "icon-bar"> </span>
				<span class = "icon-bar" > </span>
				<span class = "icon-bar" > </span>
				<span class = "icon-bar" > </span>
				<span class = "icon-bar" > </span>
				</button>
				<a href = "index.html" class = "navbar-brand"> Georgetown Soccer League </a>
			</div>
			
			<!--Menu Items -->	
			<div class = "collapse navbar-collapse" id = "mainNavBar">
				<ul class = "nav navbar-nav">
					<li class = "active" ><a href = "index.html" > Home </a> </li> 
					<li><a href = "calendario.php" > Calendario </a> </li> 
					<li><a href = "resultados.php" > Resultados </a> </li> 
					<li><a href = "posiciones.php" > Posiciones </a> </li> 
					<li><a href = "stats.php" > Estadisticas </a> </li> 
				</ul>
			</div>
		</div>
	</nav>
	
	<div class = "container">
		<div class = "row">
			<div class = "col-md-12">
			<h2>Estadisticas</h2>
			<ul class="nav nav-pills">
 				<li class="active"><a data-toggle="pill" href="#home">Goles</a></li>
				<li><a data-toggle="pill" href="#menu1">Asistencias</a></li>
  				<li><a data-toggle="pill" href="#menu2">Tarjetas</a></li>
  				<li><a data-toggle="pill" href="#menu3">Juego Limpio</a></li>
			</ul>
			<div class="tab-content">
  				<div id="home" class="tab-pane fade in active">
    				<h3>Goles</h3>			
    				<?php
   					$dir = 'sqlite:/Applications/XAMPP/xamppfiles/htdocs/soccer/baseDeDatos.sqlite';
					$dbh  = new PDO($dir) or die("cannot open the database");
					$query =  "SELECT team, player, goles,
	 					@curRank = @curRank + 1 AS POS
 						FROM goleoG1 p, (SELECT @curRank = 0) r 
						ORDER BY goles DESC";
			
					if($query_run = $dbh->query($query))
					{
						echo  '<h2 class = text-center lead">Primera Division</h2>
        				<table class="table table-hover table-striped">
            			<thead>
            			<tr>
                			<th>Pos</th>
                			<th>Jugador</th>
                			<th>Equipo</th>
                			<th>Anotaciones</th>
            			</tr>
            			</thead>';
						echo '<tbody>';
        				while($query_row = $query_run->fetch(PDO::FETCH_ASSOC))
        				{		
        					echo "<tr>";
							echo "<td>". $query_row['POS']. "</td>";
							echo "<td><strong>". $query_row['player']. "</strong></td>";
							echo "<td>". $query_row['team']. "</td>";
							echo "<td>". $query_row['goles']. "</td>";	
							echo "</tr>";	
        				}
        				echo '</tbody>';
						echo '</table>';    	
					}
					else
					{
						echo 'Fail';
						print_r($dbh->errorInfo());
					}
					?>
  				</div>			
  			<div id="menu1" class="tab-pane fade">
    			<h3>Menu 1</h3>
    			<p>Some content in menu 1.</p>
  			</div>
  		
  			<div id="menu2" class="tab-pane fade">
    			<h3>Menu 2</h3>
    			<p>Some content in menu 2.</p>
  			</div>
  			
  			 <div id="menu3" class="tab-pane fade">
    			<h3>Menu 2</h3>
    			<p>Some content in menu 2.</p>
  			</div>
  			
			</div>
			
  			</div>
  		</div>
	</div>
</div>
</body>
</html>
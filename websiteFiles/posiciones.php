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
					<li><a href = "#" > Calendario </a> </li> 
					<li><a href = "#" > Resultados </a> </li> 
					<li><a href = "#" > Posiciones </a> </li> 
					<li><a href = "#" > Estadisticas </a> </li> 
				</ul>
			</div>
		</div>
	</nav>


	<div class = "container">
		<div class = "row">
			<div class = "col-md-12">
			<h2>Posiciones</h2>
			<ul class="nav nav-pills">
 				<li class="active"><a data-toggle="pill" href="#home">Primera Division</a></li>
				<li><a data-toggle="pill" href="#menu1">Segunda Division</a></li>
			</ul>
			<div class="tab-content">
  				<div id="home" class="tab-pane fade in active">
    			<?php
   				$dir = 'sqlite:/Applications/XAMPP/xamppfiles/htdocs/soccer/baseDeDatos.sqlite';
				$dbh  = new PDO($dir) or die("cannot open the database");
				$query =  "SELECT team, games, win, tied, loss, dif, pts,
	 				@curRank = @curRank + 1 AS POS
 					FROM georgetown1 p, (SELECT @curRank = 0) r 
					ORDER BY pts DESC";
			
				if($query_run = $dbh->query($query))
				{
					echo  '<h2 class = text-center lead">Primera Division</h2>
        			<table class="table table-hover table-striped">
            		<thead>
            		<tr>
                		<th>Pos</th>
                		<th>Equipo</th>
                		<th>JJ</th>
                		<th>JG</th>
                		<th>JE</th>
                		<th>JP</th>
                		<th>DIF</th>
                		<th>PTS</th>
            		</tr>
            		</thead>';
        			echo '<tbody>';
        			while($query_row = $query_run->fetch(PDO::FETCH_ASSOC))
       				{	
        				echo "<tr>";
						echo "<td>". $query_row['POS']. "</td>";
						echo "<td><strong>". $query_row['team']. "</strong></td>";
						echo "<td>". $query_row['games']. "</td>";
						echo "<td>". $query_row['win']. "</td>";
						echo "<td>". $query_row['tied']. "</td>";
						echo "<td>". $query_row['loss']. "</td>";
						echo "<td>". $query_row['dif']. "</td>";
						echo "<td>". $query_row['pts']. "</td>";		
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
    			<?php		
    			$query2 =  "SELECT team, games, win, tied, loss, dif, pts,
	 					@curRank = @curRank + 1 AS POS
 						FROM georgetown2 p, (SELECT @curRank = 0) r 
						ORDER BY pts DESC";
				if($query2_run = $dbh->query($query2))
				{
					echo  '<h2 class = text-center lead">Segunda Division</h2>
        			<table class="table table-hover table-striped">
            		<thead>
            		<tr>
                		<th>Pos</th>
                		<th>Equipo</th>
                		<th>JJ</th>
                		<th>JG</th>
                		<th>JE</th>
                		<th>JP</th>
                		<th>DIF</th>
                		<th>PTS</th>
            		</tr>
            		</thead>';
        			echo '<tbody>';
        			while($query_row = $query2_run->fetch(PDO::FETCH_ASSOC))
        			{	
        				echo "<tr>";
						echo "<td>". $query_row['POS']. "</td>";
						echo "<td><strong>". $query_row['team']. "</strong></td>";
						echo "<td>". $query_row['games']. "</td>";
						echo "<td>". $query_row['win']. "</td>";
						echo "<td>". $query_row['tied']. "</td>";
						echo "<td>". $query_row['loss']. "</td>";
						echo "<td>". $query_row['dif']. "</td>";
						echo "<td>". $query_row['pts']. "</td>";		
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
			</div>
  			</div>
  		</div>
	</div>
</div>
</body>
</html>









































<?php
date_default_timezone_set('America/Monterrey');
require 'conf.inc.php';
?>


<html>
<head>
<title>Centex Soccer League</title>
<meta http-equiv="Content-type" content="text/html; charset=utf-8" />
<link rel="stylesheet" href="style.css" type="text/css" media="all" />
</head>
<body>
<div id="doc" class="yui-t7">
  <div id="hd">
    <div id="header">
  <div class="shell"> <h1 id="logo" class="notext"><a href="#"></a></h1>
  </div>
  </div>
  <div id="bd">
    <div id="yui-main">
      <div class="yui-b">
        <div class="yui-gf">
          <div class="yui-u first">
            <div class="content">
             <div id="cssmenu">
          		<ul>
          			<li><a href='index.php'><span>Home</span></a></li>   	  
         			 <li class='active has-sub'><a href='#'><span>Posiciones</span></a>
     			<ul>
      	  			 <li><a href='standings.php'><span>Primera Division </span></a></li>			 
        			 <li ><a href='standings2.php'><span>Segunda Division </span></a> </li>
      			</ul>
  			 		</li>	
         	 		<li class= 'active has-sub'> <a href= "statistics.php"><span>Estadisticas</span></a> 
         	 	<ul>
      	  			 <li><a href='#'><span>Primera Division </span></a>
    				 </li>
        			 <li><a href='#'><span>Segunda Division </span></a> </li>
      			</ul>       	
         			<li><a href= "#"> Resultados</a> </li>
          			<li><a href="#">Fotos</a> </li>
       			 </ul>
     		 </div>
            </div>
          </div>
          <div class="yui-u">
            <div class="content">
				<img src ="images/jor1.JPEG"/>
            </div>
          </div>
        </div>
      </div>
    </div>
    <div class="yui-b">
      <div id="secondary"> 
           <?php

	$query = "SELECT Team, GP, PTS, G, E, P, DIF,
	 		@curRank := @curRank + 1 AS POS
 			FROM stand_table p, (SELECT @curRank := 0) r 
			ORDER BY pts DESC";

	if($query_run = mysql_query($query))
	{	
		
		echo "<table>
		<thead>
		<tr>
			<th> POS </th>
			<th> Equipo </th>
			<th> JJ </th>
			<th> JG </th>
			<th> JE </th>
			<th> JP </th>
			<th> DIF </th>
			<th> PTS </th>
		</tr>
		</thead>";
		echo "<tbody>";
	
		while($query_row = mysql_fetch_assoc($query_run))
		{
			echo "<tr>";
			echo "<td>". $query_row['POS']. "</td>";
			echo "<td><strong>". $query_row['Team']. "</strong></td>";
			echo "<td>". $query_row['GP']. "</td>";
			echo "<td>". $query_row['G']. "</td>";
			echo "<td>". $query_row['E']. "</td>";
			echo "<td>". $query_row['P']. "</td>";
			echo "<td>". $query_row['DIF']. "</td>";
			echo "<td>". $query_row['PTS']. "</td>";		
			echo "</tr>";	
		}
		echo "</tbody>";
		echo "</table>";
	}

	else
	{
		echo 'Fail';
		echo mysql_error();	
	}	
	
	?>
      </div>
    </div>
  </div>
  <div id="ft">
    <div id="footer">
    <img src ="images/heading.jpg"/></div>
  </div>
</div>
</body>
</html>






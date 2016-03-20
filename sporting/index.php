

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
          			<li><a href='#'><span>Home</span></a></li>   	  
         			 <li class='active has-sub'><a href='#'><span>Posiciones</span></a>
     			<ul>
      	  			 <li><a href='standings.php'><span>Primera Division </span></a>
    				 </li>
        			 <li ><a href='standings2.php'><span>Segunda Division </span></a>
        			 </li>
      			</ul>
  			 		</li>
         	 		<li class= 'active has-sub'> <a href= "statistics.php"><span>Estadisticas</span></a> 
         	 	<ul>
      	  			 <li><a href='#'><span>Primera Division </span></a>
    				 </li>
        			 <li><a href='#'><span>Segunda Division </span></a>
        			 </li>
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
      <div id="secondary">Secondary Column</div>
    </div>
  </div>
  <div id="ft">
    <div id="footer">Footer</div>
  </div>
</div>
</body>
</html>



<?php
date_default_timezone_set('America/Monterrey');
require 'conf.inc.php';
$time = time();
$actual_time = date('D M Y  h:i:s', $time);
?>
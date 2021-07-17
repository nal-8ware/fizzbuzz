<?php
$m = 100;
for($i=1; $i<=$m; $i++){
    $r = "";
    if($i%3 == 0) $r .= "Fizz";
    if($i%5 == 0) $r .= "Buzz";
    echo ($r === ""? $i: $r)."\n";
}
?>
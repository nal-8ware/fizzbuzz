const m = 100;
for (var i = 1; i <= m; i++) {
  let r = "";
  if(i % 3 == 0) r += "Fizz";
  if(i % 5 == 0) r += "Buzz";
  document.writeln((r==""? i:r)+"<br />");
}
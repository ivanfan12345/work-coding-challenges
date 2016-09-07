var fs = require('fs')
  , filename = process.argv[2];
fs.readFile(filename, 'utf8', function(err, data) {
  if (err) throw err;
  lettersNotUsed(data);
});


function lettersNotUsed(str) {
  var map = {
  a:0,b:0,c:0,d:0,e:0,f:0,g:0,h:0,i:0,j:0,k:0,l:0,m:0,n:0,o:0,p:0,q:0,r:0,s:0,t:0,u:0,v:0,w:0,x:0,y:0,z:0,total:26
  };
  var results = [];
  for (var i = 0; i < str.length; i++) {
    if (map.total===0) {
      return 'all characters used.'
    }
    if (map[str[i]]===0) {
      map[str[i]]=1;
      map.total--;
    }
  }
  for (var letter in map) {
    if (map[letter]===0) {
      results.push(letter);
    }
  }
  console.log(results)
  return results;
}
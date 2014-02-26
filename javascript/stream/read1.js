var Readable = require("stream").Readable;
var rs = new Readable();
var c = 97;

rs._read = function () {
  rs.push(String.fromCharCode(c++));
  if (c > 'z'.charCodeAt()) {
    rs.push(null);
  }
};

rs.pipe(process.stdout);

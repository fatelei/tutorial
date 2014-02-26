// a simple readable stream

var Readable = require("stream").Readable;

var rs = new Readable;

rs.push("beep ");
rs.push("boop\n");
rs.push(null); //end input and outputing data

rs.pipe(process.stdout);

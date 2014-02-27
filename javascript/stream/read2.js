var Readable = require("stream").Readable;
var rs = Readable();

var c = 97 - 1;

rs._read = function () {
	if (c >= 'z'.charCodeAt(0)) {
		return rs.push(null);
	}

	setTimeout(function () {
		rs.push(String.fromCharCode(++c));
	}, 100);
};

rs.pipe(process.stdout);

process.on("exit", function () {
	var err = new Error();
	console.log(err.stack);
	console.error("\n_read() called " + (c - 97) + " times");
});

process.stdout.on("error", process.exit);


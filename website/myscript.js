//getUserStr recieves user returns user input
function getUserStr(){
	return document.getElementById("input1").value;
}

//reverseStr reverses user input and outputs result on page
function reverseStr(userInput){
	document.write("This is what " + userInput + " looks like reversed:")
	document.write("<br>");
	document.write(userInput.split("").reverse().join(""));
	document.write("<br>");
	document.write("<br>");
}

//uniqChar finds all unique characters in input and outputs it to page
function uniqChar(userInput){
	document.write("Unique Characters: ");
	document.write(String.prototype.concat(...new Set(userInput)));
	document.write("<br>");
}

//counter takes the input and creates an array containing the number
//of times a particular character appears in the input
function counter(userInput){
	var letters = new Object;

	for(x = 0, length = userInput.length; x < length; x++) {
		var l = userInput.charAt(x)
		letters[l] = (isNaN(letters[l]) ? 1 : letters[l] + 1);
	};

	for(key in letters) {
		document.write(key + ' appears ' + letters[key]);
		if(letters[key] > 1){
			document.write(' times');
		}
		else {document.write(' time');}
		document.write("<br>");
	};
}

//strRev calls needed functions in appropriate order
function strRev(){
	var userInput = getUserStr();
	if(userInput == null){
		return document.write("No input entered. Please try again");
	}
	reverseStr(userInput);
	uniqChar(userInput);
	counter(userInput);
}
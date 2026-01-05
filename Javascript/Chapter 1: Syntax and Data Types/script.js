// There are 8 fundamental data types:
/* String - a sequence of characters enclosed within sing quotes (' ') or double quotes (" ")
    - Allows you to store and manipulate texted-based data. (names, messages, etc)

 * Number - used to represent numeric values (integers, float numbers, positive, negative, zero, compressed decimal notation and scientific notation )

 * Bigint - allows developers to work with arbitrarily larger integers without losing accuracy

 * Boolean - represents a logic value of true or false

 * Undefined

 * Null

 * Symbol - used to create unique and immutable identifiers.
    - Often used as keys n object properties to avoid naming conflicts and provide a level of privacy

 * Object - key value pairs where the keys are strings or symbols and values can be numbers, strings, functions or other objects.
*/

// Strings
let message = "Hello, World!";
let name = "Andrez De La Torre";

console.log(message, name);
// While strings values can't be changed we once created we can alter them by adding different operations to existing ones
// String Concatenation - joining two or more strings together to form a single string using operators plus (+) or concatenation assignment operator (+=)
let firstName = "Cyrstal";
let lastName = "Torres";
let fullName = firstName + " " + lastName;

let greeting = "Hello, ";

greeting += fullName;

console.log(greeting);

// String method - allow to manipulate and extract information from them
/* Commonly used:
 *length
 * toUpperCase()
 * toLowerCase()
 * charAt()
 * substring()
 * split()
 * indexOf()
*/

let sentence = "This is string method";

//Use one of the different string methods
console.log(sentence.toUpperCase());

// Strings also have special characters you can include that are difficult to type like (\n) or (\t)
let specialCharacters = "This is a stringing containing a newline:\nAnd a tab:\tEnd of string.";
console.log(specialCharacters);

// Numbers
let age = 21;
let temperature = -10.3;

// They also can be -infinity, +infinity or NaN
const number1 = 3/0;
console.log(number1);

const number2 = -3/0;
console.log(number2);

// strings can not be divided by numbers
const number3 = "abc"/3;
console.log(number3);

// We have different ways of fixing issues 
/* toFixed() controls the decimal point when displaying or formatting numbers
 * We also use methods to convert strings to numbers parseInt() and parseFloat()
*/

// BigInt
// You can use the Bigint() function or just attach the letter 'n' at the end of an integer to create a Bigint
const bigNumber = 12345567890123456789012345678901234567890n;

const convertedNumber = BigInt("98765432109876543210987654321");

// We cannot mix BigInt numbers with regular numbers and explicit conversions are required
const regularNumber = 42;


const sum = bigNumber + BigInt(regularNumber); // This is valid
console.log(sum);
const multiplication = bigNumber * BigInt(regularNumber); // Valid
console.log(multiplication);
/* const invalid = bigNumber + regularNumber; // Invalid
console.log(invalid); 
*/

// Boolean

const isTrue = true;
const isFalse = false;

const num1 = 10;
const num2 = 5;

const greaterThan = num1 > num2;
console.log(greaterThan);

const equalTo = num1 == num2;
console.log(equalTo);

const logicalAnd = greaterThan && equalTo;
console.log(logicalAnd);

const logicalOr = greaterThan || equalTo;
console.log(logicalOr);

const logicalNot = !logicalAnd;
console.log(logicalNot);

const isRaining = true;

if (isRaining) {
    console.log("Take an umbrella!");
} else {
    console.log("Enjoy the sunshine!")
}


// Object

// object is person and with three properties
const person = {
    name: "Mike",
    age: 13,
    profession: "Software Engineer"
};

// We can access properties in an object by using dot notation
console.log(person.name);
console.log(person["age"]);

// We can manipulate properties by making objects dynamic in nature
person.age = 35;
console.log(person.age);

/* We use objects because it's a versatile and powerful data structures to enable organization and manipulate of data in key-value pairs. 
 * It's also a foundation of object oriented programming in Javascript and in web development, managing state, modeling real-world entities and interacting with the DOM (Document Object Model).
*/

// Symbol

// Symbol() - a function for creating a symbol which is unique even if the descriptions are the same
const symbol1 = Symbol();
const symbol2 = Symbol();

console.log(symbol1 == symbol2);

// We can also create Symbols with optional descriptions which can be used for debugging or providing addition information but it does not affect the uniqueness of the symbol
const symbol3 = Symbol("symbolDescription");
const symbol4 = Symbol("symbolDescription");
console.log(symbol3 == symbol4);

// They also are primarily used as keys in object properties and help avoid unintentional name collisions when multiple parts of code use the same property names
const id = Symbol("id");

const user = {
    name: "Mike",
    [id]: 123
};

console.log(user[id]);
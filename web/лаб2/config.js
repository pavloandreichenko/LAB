// Task #1
alert ("Task #1");

var variant = 1;

function Cube (number) {
  return number * number * number;
}

alert (Cube(variant));

// Task #2
alert ("Task #2");

function GetDataAndToInt (word) {
  var Str = prompt("Write down "+word);
  return parseInt(Str, 10);
}

function SumDivide(first, second, third) {
  return ((first+second)/third);
}

alert(SumDivide(GetDataAndToInt("first"),GetDataAndToInt("second"),GetDataAndToInt("third")));

// Task #3,4
alert ("Task #3,4");

function DayOfWeak (DayNum) {
  switch (DayNum) {
    case 1:
    return "Monday";
      break;
    case 2:
    return "Tuesday";
      break;
    case 3:
    return "Wednesday";
      break;
    case 4:
    return "Thursday";
      break;
    case 5:
    return "Friday";
      break;
    case 6:
    return "Saturday";
      break;
    case 7:
    return "Sunday";
      break;
    default:
    return "There is no such day";
      break;
  }
}
alert (DayOfWeak((parseInt((Math.random()*7)+1),10)));

// Task #5
alert ("Task #5");

if (variant%2 == 0) {
  var factorial = 1;
  for (var i = 1; i <= variant; i++) {
    factorial *= i;
  }
  alert (factorial);
}
else {
  alert(Math.pow(variant,2));
}
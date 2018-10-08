var name="Pavlo Andreichenko";
//Завдання №1
	alert(name);
//Завдання №2
var a,b,c,d,result,r,z;
	a=1;
	b=9;
	c=a-b;
	d=7;
	result=c+d;
	alert(result);
//Завдання №3
	var variant=prompt("Ведыть номер варіанту");

	if(variant>=7){
		alert("Вірно");
	}	
	else {
		alert("Невірно");
	}

	if(a%2==0){
		r=a+7;
		alert(r);
		
	}
	else {
		r=a-3;
		alert(r);
	}
	//Завдання №4
	z=1+10;
  for (var i = 1; i<z; i++)
  alert(i*i);
		
	}
	//Завдання №5
var chisl = true;

for (var i = 2; i<z; i++) {

  for (var j = 2; j < i; j++)

    if (i%j == 0)

      chisl = false;

  if (chisl == true)

    alert(i);

  chisl = true;

}

Algoritmo NominaSalarial
	Definir horasTrabajadas Como Entero
	Definir tarifaFija Como Real
	Definir horasExtras Como Real
	Definir sueldoBruto Como Real
	Definir Impuesto Como Real
	Definir sueldoNeto Como Real
	
	// Solicitar datos
	Escribir "Ingresar horas trabajadas :"
	Leer horasTrabajadas
	Escribir "Ingrese la tarifa fija: "
	Leer tarifaFija
	
	// Calcular el sueldo bruto
	horasExtras = horasTrabajadas - 35
	sueldoBruto = horasTrabajadas * tarifaFija + horasExtras * (tarifaFija * 1.5)
	
	// Calcular el impuesto
	Si sueldoBruto < 20000 Entonces
		Impuesto = 0
	SiNo
		Impuesto = sueldoBruto * 0.2
	FinSi
	
	// Calcular el sueldo neto
	sueldoNeto = sueldoBruto - impuesto
	
	
	Escribir "El sueldo neto es: ", sueldoNeto
FinAlgoritmo

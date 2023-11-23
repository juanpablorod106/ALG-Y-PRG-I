Algoritmo Calculo_de_Facturas
	
	Definir tipoServ Como Entero
	Definir dni, total Como Real
	Escribir "Ingrese el DNI de la persona"
	Leer dni
	Escribir "Ingrese el tipo de servicio"
	Leer tipoServ
	
	SI (tipoServ = 1)
		total = 750 - (750 * 0.10)
	FinSi
	SI (tipoServ = 2)
		total = 930 - (930*0.05)
	FinSi
	SI (tipoServ = 3)
		total = 1200
	FinSi
	Escribir "El total de la factura del clientes: ", dni, "es de ", total
	
FinAlgoritmo

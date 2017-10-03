require 'watir'
browser = Watir::Browser.new

browser.goto 'http://nitrowriters.com/form/form.html'

#Escribir sobre un cuadro de texto
browser.text_field(:id => "my_text_field").set("Hola")

#Escribir sobre un text area
browser.textarea(:id => "a_text_area").set "Hola"

#Otra forma de escribir sobre un text archivoea
browser.div()

#Permite obtener un radio por su id y asignarle valor
browser.radio(:id => "familiar_rails_3").set

#Permite obtener un conjunto de checkboxes y seleccionarlos todos ( /partially matches/ )
checks = browser.checkboxes(:name => /element_14/)
checks.each do |check|
	check.set
end

#Contar el numero de elementos que tiene un <select>
puts browser.select_list(:id => "usage").options.count

#Selecciona la tercera opción de un <select>
opciones = browser.select_list(:id => "usage").options
cont = 0
opciones.each do |op|
	if (cont == 3)
		op.select
	end
	cont += 1
end


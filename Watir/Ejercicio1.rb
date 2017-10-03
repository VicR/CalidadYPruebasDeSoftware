#Víctor Rendón Suárez | A01022462
require 'watir'
browser = Watir::Browser.new :firefox

browser.goto 'http://blazedemo.com'

opciones = browser.select_list(:name => "fromPort").options
cont = 0
opciones.each do |op|
    if (cont  == 2)
      op.select
    end
    cont += 1
end

opciones = browser.select_list(:name => "toPort").options
cont = 0
opciones.each do |op|
    if (cont  == 3)
      op.select
    end
    cont += 1
end

browser.button(:class => "btn").click
sleep(1)

browser.buttons(:class => "btn").last.click
sleep(1)

browser.text_field(:id => "inputName").set("Victor Rendón")
browser.text_field(:id => "address").set("Calle 666")
browser.text_field(:id => "city").set("Ciudad de Mexico")
browser.text_field(:id => "state").set("CDMX")
browser.text_field(:id => "zipCode").set("01289")
opciones = browser.select_list(:id => "cardType").options[1].select
browser.text_field(:id => "creditCardNumber").set("235711171923")
browser.text_field(:id => "creditCardMonth").set("07")
browser.text_field(:id => "creditCardYear").set("2019")
browser.text_field(:id => "nameOnCard").set("Victor Rendon Suarez")
browser.checkbox(:id => "rememberMe").set
browser.button(:class => "btn").click
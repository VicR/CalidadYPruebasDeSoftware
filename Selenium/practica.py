#A01022462 | A01022462
from selenium import webdriver
from selenium.webdriver.common.by import By

driver = webdriver.Firefox()
driver.get("http://micampus.csf.itesm.mx/index.php/division-de-diseno-ingenieria-y-arquitectura/directorio")

#Child
print("\n-- Child Selectors --")
childs = driver.find_elements(By.CSS_SELECTOR, "table tr>td")
for child in childs:
	print(child.text)
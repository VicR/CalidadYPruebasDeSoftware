#A01022462 | A01022462
from selenium import webdriver
from selenium.webdriver.common.by import By

driver = webdriver.Firefox()
driver.get("http://nitrowriters.com/form/form.html")

txt = driver.find_element_by_id("my_text_field")
txt.send_keys("First example")


txt = driver.find_element(By.ID, "my_text_field")
txt.send_keys("First example")

descriptions = driver.find_elements(By.CLASS_NAME, "description")
for desc in descriptions:
	print(desc.text)

txt_area = driver.find_element(By.TAG_NAME, "textarea")
txt_area.send_keys("Este es el texto del text area")

link = driver.find_element(By.LINK_TEXT, "Go to SitePoint")
print(link.text)
#link.click()

inputs = driver.find_elements(By.TAG_NAME, "input")
for input in inputs:
	if input.get_attribute("type") == "text":
		input.send_keys("Same text everywhere")

#Universal
print("\n-- Universal Selector --")
options = driver.find_elements(By.CSS_SELECTOR, "* option")
for option in options:
	print(option.text)

#Grouping Type Selectors
print("\n-- Grouping Type Selectors --")
groupings = driver.find_elements(By.CSS_SELECTOR, "h1,h2,h3,p")
for grouping in groupings:
	print(grouping.text)

#Descendant
print("\n-- Descendant Selectors --")
descendants = driver.find_elements(By.CSS_SELECTOR, "form div h2")
for descendant in descendants:
	print(descendant.text)

#Child
print("\n-- Child Selectors --")
childs = driver.find_elements(By.CSS_SELECTOR, "form div")
for child in childs:
	print(child.text)

#Adjacent Sibling
print("\n-- Adjacent Sibling --")
adSibling = driver.find_element(By.CSS_SELECTOR, "h2 + *")
print(adSibling.text)

#General Sibling
print("\n-- General Sibling --")
genSiblings = driver.find_elements(By.CSS_SELECTOR, ".checkbox ~ *")
for genSibling in genSiblings:
	print(genSibling.text)

#Class Selector
print("\n-- Class Selector --")
classes = driver.find_element(By.CSS_SELECTOR, "#form_container")
print(classes.text)

#ID Selector
print("\n-- ID Selector --")
IDs = driver.find_elements(By.CSS_SELECTOR, ".description")
for aidi in IDs:
	print(aidi.text)

#Pseudo Element
print("\n-- Pseudo Element --")
pseudo = driver.find_element(By.CSS_SELECTOR, "a:link")
print(pseudo.text)
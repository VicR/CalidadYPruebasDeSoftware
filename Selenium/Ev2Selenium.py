#A01022462 | A01022462
from selenium import webdriver
from selenium.webdriver.common.by import By
i = 1

driver = webdriver.Firefox()
driver.get("https://law.stanford.edu/directory/")

names = []
classes = driver.find_elements(By.CSS_SELECTOR, ".li-title")
for cName in classes:
	if len(names) <= 10 and i != 3:
		names.append("Fake"+cName.text)
	i += 1
print("Names:")
print(names)

i = 1
emails = []
mailPage = driver.find_elements(By.CSS_SELECTOR, ".anchor")
for mText in mailPage:
	if i % 2 != 0 and i != 13 and len(emails) <= 10:
		emails.append("NOTREAL"+mText.text)
	if i == 13:
		i += 1
	else:
		i += 1
print("Emails:")
print(emails)
for x in range (0,10):
	driver.get("http://blazedemo.com/register")

	txt = driver.find_element_by_id("name")
	txt.send_keys(names[x])

	txt = driver.find_element_by_id("company")
	txt.send_keys("Not-Real Company")

	txt = driver.find_element_by_id("email")
	txt.send_keys(emails[x])

	txt = driver.find_element_by_id("password")
	txt.send_keys("s3cUreP42")
	txt = driver.find_element_by_id("password-confirm")
	txt.send_keys("s3cUreP42")

	button = driver.find_element(By.CLASS_NAME, "btn-primary")
#button.click()
'''
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
classes = driver.find_element(By.CSS_SELECTOR, ".form_group")
print(classes.text)

#ID Selector
print("\n-- ID Selector --")
IDs = driver.find_elements(By.CSS_SELECTOR, "#description")
for aidi in IDs:
	print(aidi.text)

#Pseudo Element
print("\n-- Pseudo Element --")
pseudo = driver.find_element(By.CSS_SELECTOR, "a:link")
print(pseudo.text)'''

#Víctor Rendón Suárez | A01022462
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support.ui import choose
from itertools import *
driver = webdriver.Firefox()

def shop(name, p1, p2, p3, p4, mdl, driver):

    shop = driver.find_element(By.XPATH, '//*[@id="content"]/div[1]/div/div/a[1]')
    shop.click()

    name = driver.find_element(By.XPATH, '//*[@id="input-name1"]')
    name.send_keys(name)

    id1 = driver.find_element(By.XPATH, '//*[@id="input-meta-title1"]')
    id1.send_keys(p1)

    id2 = driver.find_element(By.XPATH, '//*[@id="input-meta-description1"]')
    id2.send_keys(p2)

    id3 = driver.find_element(By.XPATH, '//*[@id="input-meta-keyword1"]')
    id3.send_keys(p3)

    id4 = driver.find_element(By.XPATH, '//*[@id="input-id1"]')
    id4.send_keys(p4)

    data = driver.find_element(By.XPATH, '//*[@id="form-prod"]/ul/li[2]/a')
    data.click();

    model = driver.find_element(By.XPATH, '//*[@id="input-model"]')
    model.send_keys(mdl)
    save = driver.find_element(By.XPATH, '//*[@id="content"]/div[1]/div/div/button')
    save.click()

def choose(search):

    driver.get("http://localhost:80")
    srch = driver.find_element(By.XPATH, '//*[@id="search"]/input')
    srch.send_keys(search)
    btn = driver.find_element(By.XPATH, '//*[@id="search"]/div/button')
    btn.click()
    buy = driver.find_element(By.XPATH, '//*[@id="content"]/div[3]/div/div/div[2]/div[2]/button[1]')
    buy.click()

def main():

    driver.get("http://localhost/admin/")
    username = driver.find_element(By.ID, "input-username")
    username.send_keys("root")

    passwd = driver.find_element(By.ID, "input-passwd")
    passwd.send_keys("a12345578")

    login = driver.find_element(By.CLASS_NAME, "btn-primary")
    login.click();

    catalog = driver.find_element(By.ID, "menu-catalog")
    catalog.click();

    prods = driver.find_element(By.XPATH, '//*[@id="collapse1"]/li[2]/a');
    prods.click();
    prod = driver.find_element(By.XPATH, '//*[@id="collapse1-1"]/li[1]/a');
    prod.click();

main();

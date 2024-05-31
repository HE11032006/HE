'''
Utilisaiton de la fonction hashlib
'''

import string
import time
import random
import hashlib

mot_de_passe = input("Quel est votre mot de passe : ")
mot_de_passe_md5 = hashlib.md5(mot_de_passe.encode("utf8")).hexdigest()
print(mot_de_passe_md5)

def hash_crack():
    trouve = False 
    mots_fr = open(r"\Users\HP\Desktop\liste.txt", "r")
    for mot in mots_fr.readlines():
        mot = mot.strip("\n").encode("utf8")
        hashmd5 = hashlib.md5(mot).hexdigest()
        if hashmd5 == mot_de_passe_md5:
            print("Mot de passe troué : " + str(mot) + "(" + hashmd5 + ")")
            trouve = True
    if not trouve:
        print("Mot de passe non trouvé :(")

début = time.time()
hash_crack()
print("Durée : " + str(time.time() - début) + " secondes.")




      












    

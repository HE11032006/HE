'''
Trouvé un mot de passe tapé par l'utilisateur
casser un mot de passe   
'''

import string
import time
import random

mot_de_passe = input("Quel est votre mot de passe : ")

def generate ():
    lettres = string.ascii_letters
    lettres_aléa = ""
    lettres_trouvé = ""

    for i in range(len(mot_de_passe)):
        while lettres_aléa != mot_de_passe[i]:
            print(lettres_trouvé + lettres_aléa)
            lettres_aléa = random.choice(lettres)
        lettres_trouvé += lettres_aléa
    print("Le bon resultat est : ")
    return lettres_trouvé

print("Mot de passe en cours ...")
début = time.time()
print(generate())
fin = time.time() - début
print("\n")
print("Mot de passe trouvé !")
print("Mot de passe trouvé en " + str(fin) + " secondes.")
print("FIN DU PROGRAMME !!!")

      












    

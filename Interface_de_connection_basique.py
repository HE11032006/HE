

print("\n")
print("Bienvenue sur le serveurs payersonbébé.com")
print("__________________________________________")

print("C'est votre premiere fois ici ? O ou N ")


i = 0
while i==0 :

    réponse = input("réponse = ")
    if réponse == "O":
        print("Choississez N pour que le code continue.")
    if réponse == "N":break
    print("\n")

print("\n")
print("Alors veuillez vous enregistrer cher futur parent :")

Login = input("Login = ")
Key = input("Key = ")

print("Enregistrement terminé !")
print("\n")
print("Veuillez vous connecter à present !")
print("Tester le cas ou les deux infos sont justes et le cas contraires aussi.")

Username = input("Login = ")
UserKey = input("Key = ")

A = "changer de vie"
B = "Allez dormir"

p = 0     
i = 3

while p==0:
    i = i - 1
    if Username == Login and UserKey == Key :
        print("Cher madame, monsieur " + A.upper() + " et " + B.upper() + ".")
        if Username == Login and UserKey == Key : break
    else: 
        print("Code invalide,réessayer !")
        print("Il vous reste " + str(i) + " tentatives.")
        if i == 0: print("Vous êtes bannis de cette plateforme, à plus !")
        if i == 0: break

    Username = input("Login = ")
    UserKey = input("Key = ")
       
print("\n")
print("FIN DU PROGRAMME !!!")








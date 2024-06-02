

try :

    Dictionnaires = { "surface" : "calculer la surface en m2" , 
                      "volume" : "calculer le volume en m3" , 
                      "exit" : "quitter le programme"}

    print("NB : Oui = O et Non = N")
    Liste = input("Voulez vous voir les commandes = ")
    if Liste == "Oui" or Liste == "O":
            while Liste == "O" or Liste == "Oui":       #afficher la liste
                 
                for i , j in Dictionnaires.items():
                    print( i + ":" + j )
                print("\n")

                print("Tapez votre demande :")
                Demande = input(">")
                print("\n")

                while Demande != "surface" and Demande != "volume" and Demande != "exit" : #la demande doit être forcement égal a l'un des commandes sino c'est une erreur 
                    print("Erreur, regarder la liste des commandes et retapez votre demande")
                    print("Tapez votre demande :")
                    Demande = input(">")
                    if Demande == "surface" or Demande == "volume" or Demande == "exit" : break    

                if Demande == "surface" :   #calcul de la surface
                    longueur = input("longueur = ")
                    largeur = input("largeur = ")
                    surface = float(longueur) * float(largeur)
                    print("Surface = " + str(surface) + " m2.")
                    print("\n")
                    
                elif Demande == "volume" :     #calcul du volume
                    longueur = input("longueur = ")
                    largeur = input("largeur = ")
                    hauteur = input("hauteur = ")
                    volume = float(longueur) * float(largeur) * float(hauteur)
                    print("Volume = " + str(volume) + " m3.")
                    print("\n")

                elif Demande == "exit" :  #quitter le programme
                    print("Fin du Programme !!!")
                    break

    else :
            print("Fin du Programme !!!") 

except (TypeError , SyntaxError) :
    print("Il y a une erreur au niveau des types et de la synthaxes, reverifier le code !")






    

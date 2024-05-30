import tkinter as tk


def dire_bonjour():
    print("Bonjour")


root = tk.Tk()
root.title("Mon titre")
root.geometry("1080x720")  # la taille fenêtre
root.minsize(480, 360)  # la taille minimale
root.config(background="#d4d4d4")  # l'arrière plan fenêtre

label = tk.Label(root, text="Mon label", font=("Arial", 35), bg="#000", fg="#fff")  # l'arrière-plan et avant-plan
label.pack(side=tk.TOP)  # la position

entry = tk.Entry(root, bd=3)  # le bord
entry.pack()

button = tk.Button(text="Cliquez moi", command=dire_bonjour)  # l'action après clic via command
button.pack()

root.mainloop()  # la boucle principale
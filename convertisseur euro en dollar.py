import tkinter

convert = lambda nombre , taux : round(nombre * taux , 2)

def Convertir():
    m = montant.get()
    msg_resultat.config( text = str(convert(m,1.12)) + " Dollards US")


app = tkinter.Tk()
app.title("Convertisseur Dollars")
app.geometry("200x80")
app.resizable(False, False)

montant = tkinter.DoubleVar()
lbl_info = tkinter.Label(app, text ="Montant en euro ?")
ent_saisie = tkinter.Entry(app, textvariable = montant)
btn = tkinter.Button(app, text = "Convertir", command = Convertir)
msg_resultat = tkinter.Message(app , width = 200)

lbl_info.grid(column = 0, row = 0)
ent_saisie.grid(column = 0, row = 1, padx = 5 )
btn.grid(column = 1, row = 1)
msg_resultat.grid(column = 0, row = 2 , columnspan = 3)

app.mainloop()
##
## PERSONAL PROJECT, 2022
## ADP-Lang
## File description:
## constructeur_projet
##
from genericpath import exists
import shutil
import os
from tkinter import N

from pip import main

affirmation = ["o", "O", "y", "Y", "yes", "Yes", "YES", "oui", "Oui", "OUI"]
negation = ["n", "N", "no", "No", "NO", "non", "Non", "NON", ""]

print("Bienvenue dans l'initialiseur de projet ADP-Lang")

nom_du_projet = input("Quel est le nom du projet ? ")
if exists(nom_du_projet):
    res = input("Le projet existe déjà, voulez-vous le remplacer ? (o/n) ")
    if res in affirmation:
        print("Suppression du dossier...")
        shutil.rmtree(nom_du_projet)
    else:
        print("Annulation")
        exit(0)

nom_du_constructeur = input("Quel est le nom du constructeur ? ")

os.mkdir(nom_du_projet)
constructeur = open(nom_du_projet + "/" + nom_du_constructeur + ".adp", "w")
constructeur.write("CAR-TYPE=ASCII\n\nVERSION=1.0\n\nFONCTION-AUTO-INCLUE = true\n\nDEPART=main.adp\n")
constructeur.close()

os.mkdir(nom_du_projet + "/fonctions")
fonction_de_base = open(nom_du_projet + "/fonctions/bonjour-monde.adp", "w")
fonction_de_base.write("version 1\n\nune fonction pour ecrire bonjour monde dans la console ainsi que le contenue de la variable i déclarée dans ../principal.adp\n\nDEPART\n\nprint(\"bonjour monde\");\nprint(i);\n")
fonction_de_base.close()

principal = open(nom_du_projet + "/principal.adp", "w")
principal.write("version 1.0\nc'est le fichier ou commence le programme\n\nDEPART\n\nvar i = 0;\nfonction(bonjour_monde);\nfonction(mon_affichage(\"bonjour monde\"));\n\nSTOP(0)\n")
principal.close()

print("Projet créé avec succès")

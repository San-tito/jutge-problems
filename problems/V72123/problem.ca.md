# Unió de llistes ordenades

En aquest problema farem servir la classe `Person`, amb la següent
declaració:

    class Person {
     public:
           Person(int id, string name); // Construeix una persona

       int id() const;    // retorna l'id
    string name() const;  // retorna el nom

        // Funcions de comparació entre persones (només fan servir l'ID)
      bool is_equal_to(const Person& other) const; 
      bool is_less_than(const Person& other) const;
    };    

Per definició, no hi ha dues persones amb nom diferent i el mateix `id`,
i les dues funcions de comparació fan servir només l'`id` per comparar.

Implementa la funció `unio_ordenada`, que uneix dues llistes de persones
en **ordre ascendent** per l'ID. La mateixa persona pot aparèixer a les
dues llistes (tot i que no hi ha repetits en cap d'elles) i la llista
final només n'ha de tenir una còpia.

    /**
     * @brief Uneix dues llistes ordenades preservant l'ordre.
     *
     * Si hi ha persones que apareixen a les dues llistes, només 
     * han d'aparèixer un cop al resultat. Per definició no hi ha
     * dues persones amb el mateix `id` i noms diferents.
     *
     * @param a Llista ordenada de persones.
     * @param b Llista ordenada de persones.
     *
     * @return Llista ordenada amb els elements d'a i b sense
     *         repetits.
     */
    list<Person> unio_ordenada(const list<Person>& a, const list<Person>& b);

## Observació

Els fitxers públics (icona del gatet) contenen:

  ------------- ----------------------------------------------------
  `main.cc`     el programa principal, amb la entrada/sortida feta
  `person.hh`   la classe `Person`, amb els mètodes esmentats
  `Makefile`    per compilar amb `make` còmodament
  `.vscode`     carpeta per compilar i debuggar amb VSCode
  ------------- ----------------------------------------------------

Cal implementar `unio_ordenada` en un **fitxer `.cc` nou**, compilar, i
finalment **enviar només el fitxer amb la funció**.

## Entrada

L'entrada són dues llistes de persones separades per una línia buida.
(De la lectura de les llistes ja se n'encarrega el programa principal.)

## Sortida

La sortida és la llista de persones resultants, una per línia i amb ID i
nom separats per un espai. (De l'escriptura de la llista resultant també
se n'encarrega el programa principal.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:37:00.493Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>

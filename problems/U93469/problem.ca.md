# Treballs d'impressió repetits

A vegades s'envien documents repetits a una cua d'impressió. Normalment
aquests enviaments repetits es fan per error, i de forma consecutiva. En
aquest problema implementarem una funció que elimini les repeticions
consecutives de treballs en una cua d'impressió.

Els treballs a imprimir els considerarem simples `string`s, i una cua
d'impressió serà, doncs, de tipus `queue<string>`. Es tracta
d'implementar la funció

    /**
    * @pre  cert
    * @post la cua de sortida és com la d'entrada, però havent
    *       eliminat les repeticions successives d'elements.
    */
    queue<string> remove_repeats(queue<string>& entrada);

que rep la cua `entrada`, i produeix una nova cua amb les repeticions
successives eliminades.

## Observació

Envieu un fitxer només amb la funció, si envieu amb el `main` dóna CE.

## Informació del problema

Autoria: PRO2

Generació: 2026-03-25T11:52:20.309Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>

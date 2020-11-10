hermano(carlos).
hermano(alberto).
hermano(luis).

dia(lunes).
dia(martes).
dia(miercoles).
dia(jueves).
dia(viernes).
dia(sabado).
dia(domingo).

frase('Hoy es el tercer dia que miento').
frase('Hola, soy alberto').
frase('Mañana será sabado').

miente(alberto,lunes).
miente(alberto,martes).
miente(alberto, miercoles).

miente(carlos,miercoles).
miente(carlos,jueves).
miente(carlos,viernes).

miente(luis,viernes).
miente(luis,sabado).
miente(luis,domingo).

%frase1(X,D).
%frase2(H,D):-.
%frase3(X,D).
%frase1(H,_)\=frase2(X,_).
%frase2(H,_)\=frase3(X,_).
%frase1(H,_)\=frase3(X,_).
%miente(H,_)\=miente(alberto,D).

%frase1(X,D).
%frase2(X,D).
%frase3(H,D).
%frase1(H,_)\=frase2(X,_).
%frase2(H,_)\=frase3(X,_).
%frase1(H,_)\=frase3(X,_).
%miente(H,_)\=miente(carlos,viernes).
%miente(H,_)\=miente(alberto,viernes).

respuesta(X,Y,Z):-dia(X),hermano(Y),frase(Z), miente(Y,X).
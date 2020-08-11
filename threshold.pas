(* WARNING!                                                                         *)
(* Please check carefully this template!                                            *)
(* To achieve full score in this problem, this template ***needs to be adjusted***. *)

const
    MAXN = 10000;
var
    N, i  : longint;
    G     : array[0..MAXN-1] of smallint;
    fr, fw: text;

begin
    assign(fr, 'input.txt');
    assign(fw, 'output.txt');
    reset(fr);
    rewrite(fw);
    readln(fr, N);
    for i:=0 to N-1 do
        read(fr, G[i]);

    (* insert your code here *)
    for i:=0 to 100 do
        write(fw, '42 ');

    close(fr);
    close(fw);
end.

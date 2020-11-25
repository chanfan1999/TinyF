program -> stmt-sequence
stmt-sequence -> statement {;statement}
statement -> while-stmt|for-stmt|dowhile-stmt|for-stmt|if-stmt|repeat-stmt|assign-stmt|read-stmt|write-stmt

while-stmt -> while (exp) stmt-sequence endwhile
dowhile-stmt -> do stmt-sequence while(exp)
for-stmt -> for identifier:=simple-exp to|downto simple-exp do stmt-sequence enddo
if-stmt -> if (exp) stmt-sequence {else stmt-sequence}
repeat-stmt -> repeat stmt-sequence until exp
assign-stmt -> identifier := exp
read-stmt -> read identifier
write-stmt -> write exp

exp -> simple-exp [comparison-op simple-exp]
comparison-op -> <|=|<>|<=
simple-exp -> term {addop term}
addop -> +|-
term -> pow{mulop pow}
pow -> factor {^ factor}
mulop -> *|/|%
factor -> (exp)|number|identifier

plus-self -> identifier += pow
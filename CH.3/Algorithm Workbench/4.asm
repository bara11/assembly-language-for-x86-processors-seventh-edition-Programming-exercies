;4. Find out if you can declare a variable of type DWORD and assign it a negative
;value. What does this tell you about the assembler’s type checking?
;try by ur self ;)

.model flat,stdcall
.data
var1 dword -127;variable 1
.code
main:
mov eax,var1

 end main
END

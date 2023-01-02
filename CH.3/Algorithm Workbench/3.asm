;3. Create a data definition for a doubleword that stored it in memory in big endian
;format


.model flat,stdcall
.data
var1 dword 1234h;variable 1
.code
main:
mov eax,var1
bswap eax
 end main
END

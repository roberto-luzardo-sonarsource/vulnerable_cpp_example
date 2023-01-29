#include<botan/cipher_mode.h>
#include <botan/pubkey.h>
#include <botan/rsa.h>
#include<botan/rng.h>

/*void non_cipher(void)
{
	Botan::Cipher_Mode::create("Blowfish/CBC/PKCS7", Botan::ENCRYPTION);      
	Botan::Cipher_Mode::create("DES/CBC/PKCS7", Botan::ENCRYPTION);         
	Botan::Cipher_Mode::create("3DES/CBC/PKCS7", Botan::ENCRYPTION);         
	Botan::Cipher_Mode::create("DESX/CBC/PKCS7", Botan::ENCRYPTION);          
	Botan::Cipher_Mode::create("CAST-128/CBC/PKCS7", Botan::ENCRYPTION);      
	Botan::Cipher_Mode::create("GOST-28147-89/CBC/PKCS7", Botan::ENCRYPTION); 
	Botan::Cipher_Mode::create("IDEA/CBC/PKCS7", Botan::ENCRYPTION);          
	Botan::Cipher_Mode::create("KASUMI/CBC/PKCS7", Botan::ENCRYPTION);        
	Botan::Cipher_Mode::create("MISTY1/CBC/PKCS7", Botan::ENCRYPTION);        
	Botan::Cipher_Mode::create("XTEA/CBC/PKCS7", Botan::ENCRYPTION);          
	Botan::Cipher_Mode::create("RC4", Botan::ENCRYPTION);

}*/

void valid_cipher(void)
{
	Botan::Cipher_Mode::create("AES-256/GCM", Botan::ENCRYPTION); 
}


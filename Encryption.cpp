
#include<botan/cipher_mode.h>
#include <botan/pubkey.h>
#include <botan/rsa.h>
#include<botan/rng.h>


/*void non_encryption(void)
{

	Botan::Cipher_Mode::create("AES-256/ECB", Botan::ENCRYPTION);       
	Botan::Cipher_Mode::create("AES-256/CBC/PKCS7", Botan::ENCRYPTION); 

	std::unique_ptr<Botan::RandomNumberGenerator> rng;
	Botan::RSA_PrivateKey rsaKey(*rng.get(), 2048);

}*/

void valid_encryption(void)
{
	// AES symmetric cipher is recommended to be used with GCM mode
	Botan::Cipher_Mode::create("AES-256/GCM", Botan::ENCRYPTION); 

	// RSA asymmetric cipher is recommended to be used with OAEP padding
	std::unique_ptr<Botan::RandomNumberGenerator> rng;
	Botan::RSA_PrivateKey rsaKey(*rng.get(), 2048);

}
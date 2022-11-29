
#include<botan/cipher_mode.h>
#include <botan/pubkey.h>
#include <botan/rsa.h>
#include<botan/rng.h>


void non_encryption(void)
{
	// Example for a symmetric cipher: AES
	Botan::Cipher_Mode::create("AES-256/ECB", Botan::ENCRYPTION);       // Noncompliant
	Botan::Cipher_Mode::create("AES-256/CBC/PKCS7", Botan::ENCRYPTION); // Noncompliant

	// Example for a asymmetric cipher: RSA
	std::unique_ptr<Botan::RandomNumberGenerator> rng;
	Botan::RSA_PrivateKey rsaKey(*rng.get(), 2048);

	Botan::PK_Encryptor_EME(rsaKey, *rng.get(), "PKCS1v15"); // Noncompliant

}

void valid_encryption(void)
{
	// AES symmetric cipher is recommended to be used with GCM mode
	Botan::Cipher_Mode::create("AES-256/GCM", Botan::ENCRYPTION);  // Compliant

	// RSA asymmetric cipher is recommended to be used with OAEP padding
	std::unique_ptr<Botan::RandomNumberGenerator> rng;
	Botan::RSA_PrivateKey rsaKey(*rng.get(), 2048);

	Botan::PK_Encryptor_EME(rsaKey, *rng.get(), "OAEP"); // Compliant
}
/*#include <iostream>
#include<xercesc/parsers/XercesDOMParser.hpp>

using namespace std;
using namespace xercesc;

const char* xmlFile = "samples/person.xml";

void non_compliant_parser(const char* xmlFile)
{
	XercesDOMParser* parser = new XercesDOMParser();

	parser->setCreateEntityReferenceNodes(false); // Noncompliant
	parser->setDisableDefaultEntityResolution(false); // Noncompliant

	parser->parse(xmlFile);
}

void compliant_parser(const char* xmlFile)
{
	XercesDOMParser* parser = new XercesDOMParser();

	parser->setCreateEntityReferenceNodes(true); // Compliant: explicitly make the parser safe to XXE vulnerability
	parser->setDisableDefaultEntityResolution(true); // Compliant

	parser->parse(xmlFile);
}

*/






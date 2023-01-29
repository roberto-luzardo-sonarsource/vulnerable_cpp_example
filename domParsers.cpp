#include <iostream>
#include<xercesc/parsers/XercesDOMParser.hpp>

using namespace std;
using namespace xercesc;

/*void non_compliant_parser(const char* xmlFile)
{
	XercesDOMParser* parser = new XercesDOMParser();

	parser->setCreateEntityReferenceNodes(false); 
	parser->setDisableDefaultEntityResolution(false); 

	parser->parse(xmlFile);
}
*/

void compliant_parser(const char* xmlFile)
{
	XercesDOMParser* parser = new XercesDOMParser();

	parser->setCreateEntityReferenceNodes(true); 
	parser->setDisableDefaultEntityResolution(true); 

	parser->parse(xmlFile);
}








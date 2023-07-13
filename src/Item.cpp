#include "Item.h"
#include "json_utils.h"
#include <picojson.h>

bool Item::from_json(const std::string & filename, picojson::object & json_obj) {


	// this is where you will implement the loader for your Item
	// obviously, the item will have the common properties in GameObject, so we do that
	// super class method first

	if (!has_field<std::string>(json_obj, "Id")) {
		std::cerr << "filename : " << filename << " does not contain an Id property (or it is not a string)" << std::endl;
		return false;
	}

	if (!has_field<std::string>(json_obj, "Name")) {
		std::cerr << "filename : " << filename << " does not contain a Name Property (or it is not a string)" << std::endl;
		return false;
	}

	if (!has_field<std::string>(json_obj, "Description")) {
		std::cerr << "filename : " << filename << " does not contain a Description property (or it is not a string)" << std::endl;
		return false;
	}

	id = json_obj["Id"].get<std::string>();
	name = json_obj["Name"].get<std::string>();
	description = json_obj["Description"].get<std::string>();

	return true;

	// but then, you will need to load the additional properties from json
	// for the instance variables (properties) that you have defined in Item.h 
	// as protected member variables
	

}


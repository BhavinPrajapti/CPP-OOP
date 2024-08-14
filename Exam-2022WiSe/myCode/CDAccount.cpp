#include "CDAccount.h"
#include "Customer.h"
using namespace std;

CDAccount::CDAccount(Customer *customer): Account(customer, Bank::CD) {
}

Poco::JSON::Object& CDAccount::setAccountType(Poco::JSON::Object &obj) const {

    obj.set("accountType","CD");

    return obj;
}

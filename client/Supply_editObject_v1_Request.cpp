/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Supply_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Supply_editObject_v1_Request::Supply_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Supply_editObject_v1_Request::Supply_editObject_v1_Request() {
    this->initializeModel();
}

Supply_editObject_v1_Request::~Supply_editObject_v1_Request() {}

void Supply_editObject_v1_Request::initializeModel() {

    m_obj_supply_isSet = false;
    m_obj_supply_isValid = false;
}

void Supply_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Supply_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_supply_isValid = ::Ezmaxapi::fromJsonValue(m_obj_supply, json[QString("objSupply")]);
    m_obj_supply_isSet = !json[QString("objSupply")].isNull() && m_obj_supply_isValid;
}

QString Supply_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Supply_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_supply.isSet()) {
        obj.insert(QString("objSupply"), ::Ezmaxapi::toJsonValue(m_obj_supply));
    }
    return obj;
}

Supply_RequestCompound Supply_editObject_v1_Request::getObjSupply() const {
    return m_obj_supply;
}
void Supply_editObject_v1_Request::setObjSupply(const Supply_RequestCompound &obj_supply) {
    m_obj_supply = obj_supply;
    m_obj_supply_isSet = true;
}

bool Supply_editObject_v1_Request::is_obj_supply_Set() const{
    return m_obj_supply_isSet;
}

bool Supply_editObject_v1_Request::is_obj_supply_Valid() const{
    return m_obj_supply_isValid;
}

bool Supply_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_supply.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Supply_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_supply_isValid && true;
}

} // namespace Ezmaxapi

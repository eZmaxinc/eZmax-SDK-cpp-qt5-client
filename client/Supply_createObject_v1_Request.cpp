/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Supply_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Supply_createObject_v1_Request::Supply_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Supply_createObject_v1_Request::Supply_createObject_v1_Request() {
    this->initializeModel();
}

Supply_createObject_v1_Request::~Supply_createObject_v1_Request() {}

void Supply_createObject_v1_Request::initializeModel() {

    m_a_obj_supply_isSet = false;
    m_a_obj_supply_isValid = false;
}

void Supply_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Supply_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_supply_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_supply, json[QString("a_objSupply")]);
    m_a_obj_supply_isSet = !json[QString("a_objSupply")].isNull() && m_a_obj_supply_isValid;
}

QString Supply_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Supply_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_supply.size() > 0) {
        obj.insert(QString("a_objSupply"), ::Ezmaxapi::toJsonValue(m_a_obj_supply));
    }
    return obj;
}

QList<Supply_RequestCompound> Supply_createObject_v1_Request::getAObjSupply() const {
    return m_a_obj_supply;
}
void Supply_createObject_v1_Request::setAObjSupply(const QList<Supply_RequestCompound> &a_obj_supply) {
    m_a_obj_supply = a_obj_supply;
    m_a_obj_supply_isSet = true;
}

bool Supply_createObject_v1_Request::is_a_obj_supply_Set() const{
    return m_a_obj_supply_isSet;
}

bool Supply_createObject_v1_Request::is_a_obj_supply_Valid() const{
    return m_a_obj_supply_isValid;
}

bool Supply_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_supply.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Supply_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_supply_isValid && true;
}

} // namespace Ezmaxapi

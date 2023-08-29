/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUsergroup_editUsergroupmemberships_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_editUsergroupmemberships_v1_Request::OAIUsergroup_editUsergroupmemberships_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_editUsergroupmemberships_v1_Request::OAIUsergroup_editUsergroupmemberships_v1_Request() {
    this->initializeModel();
}

OAIUsergroup_editUsergroupmemberships_v1_Request::~OAIUsergroup_editUsergroupmemberships_v1_Request() {}

void OAIUsergroup_editUsergroupmemberships_v1_Request::initializeModel() {

    m_a_obj_usergroupmembership_isSet = false;
    m_a_obj_usergroupmembership_isValid = false;
}

void OAIUsergroup_editUsergroupmemberships_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_editUsergroupmemberships_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroupmembership_isValid = ::OpenAPI::fromJsonValue(m_a_obj_usergroupmembership, json[QString("a_objUsergroupmembership")]);
    m_a_obj_usergroupmembership_isSet = !json[QString("a_objUsergroupmembership")].isNull() && m_a_obj_usergroupmembership_isValid;
}

QString OAIUsergroup_editUsergroupmemberships_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_editUsergroupmemberships_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_usergroupmembership.size() > 0) {
        obj.insert(QString("a_objUsergroupmembership"), ::OpenAPI::toJsonValue(m_a_obj_usergroupmembership));
    }
    return obj;
}

QList<OAIUsergroupmembership_RequestCompound> OAIUsergroup_editUsergroupmemberships_v1_Request::getAObjUsergroupmembership() const {
    return m_a_obj_usergroupmembership;
}
void OAIUsergroup_editUsergroupmemberships_v1_Request::setAObjUsergroupmembership(const QList<OAIUsergroupmembership_RequestCompound> &a_obj_usergroupmembership) {
    m_a_obj_usergroupmembership = a_obj_usergroupmembership;
    m_a_obj_usergroupmembership_isSet = true;
}

bool OAIUsergroup_editUsergroupmemberships_v1_Request::is_a_obj_usergroupmembership_Set() const{
    return m_a_obj_usergroupmembership_isSet;
}

bool OAIUsergroup_editUsergroupmemberships_v1_Request::is_a_obj_usergroupmembership_Valid() const{
    return m_a_obj_usergroupmembership_isValid;
}

bool OAIUsergroup_editUsergroupmemberships_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_usergroupmembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_editUsergroupmemberships_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroupmembership_isValid && true;
}

} // namespace OpenAPI

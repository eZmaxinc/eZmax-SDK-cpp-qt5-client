/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksend_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_createObject_v1_Request::OAIEzsignbulksend_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_createObject_v1_Request::OAIEzsignbulksend_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignbulksend_createObject_v1_Request::~OAIEzsignbulksend_createObject_v1_Request() {}

void OAIEzsignbulksend_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsignbulksend_isSet = false;
    m_a_obj_ezsignbulksend_isValid = false;
}

void OAIEzsignbulksend_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignbulksend_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignbulksend, json[QString("a_objEzsignbulksend")]);
    m_a_obj_ezsignbulksend_isSet = !json[QString("a_objEzsignbulksend")].isNull() && m_a_obj_ezsignbulksend_isValid;
}

QString OAIEzsignbulksend_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignbulksend.size() > 0) {
        obj.insert(QString("a_objEzsignbulksend"), ::OpenAPI::toJsonValue(a_obj_ezsignbulksend));
    }
    return obj;
}

QList<OAIEzsignbulksend_RequestCompound> OAIEzsignbulksend_createObject_v1_Request::getAObjEzsignbulksend() const {
    return a_obj_ezsignbulksend;
}
void OAIEzsignbulksend_createObject_v1_Request::setAObjEzsignbulksend(const QList<OAIEzsignbulksend_RequestCompound> &a_obj_ezsignbulksend) {
    this->a_obj_ezsignbulksend = a_obj_ezsignbulksend;
    this->m_a_obj_ezsignbulksend_isSet = true;
}

bool OAIEzsignbulksend_createObject_v1_Request::is_a_obj_ezsignbulksend_Set() const{
    return m_a_obj_ezsignbulksend_isSet;
}

bool OAIEzsignbulksend_createObject_v1_Request::is_a_obj_ezsignbulksend_Valid() const{
    return m_a_obj_ezsignbulksend_isValid;
}

bool OAIEzsignbulksend_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignbulksend.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignbulksend_isValid && true;
}

} // namespace OpenAPI

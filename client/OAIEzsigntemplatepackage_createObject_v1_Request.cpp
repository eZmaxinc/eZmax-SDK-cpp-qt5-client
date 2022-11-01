/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackage_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackage_createObject_v1_Request::OAIEzsigntemplatepackage_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackage_createObject_v1_Request::OAIEzsigntemplatepackage_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatepackage_createObject_v1_Request::~OAIEzsigntemplatepackage_createObject_v1_Request() {}

void OAIEzsigntemplatepackage_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplatepackage_isSet = false;
    m_a_obj_ezsigntemplatepackage_isValid = false;
}

void OAIEzsigntemplatepackage_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackage_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatepackage_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatepackage, json[QString("a_objEzsigntemplatepackage")]);
    m_a_obj_ezsigntemplatepackage_isSet = !json[QString("a_objEzsigntemplatepackage")].isNull() && m_a_obj_ezsigntemplatepackage_isValid;
}

QString OAIEzsigntemplatepackage_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackage_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplatepackage.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackage"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatepackage));
    }
    return obj;
}

QList<OAIEzsigntemplatepackage_RequestCompound> OAIEzsigntemplatepackage_createObject_v1_Request::getAObjEzsigntemplatepackage() const {
    return a_obj_ezsigntemplatepackage;
}
void OAIEzsigntemplatepackage_createObject_v1_Request::setAObjEzsigntemplatepackage(const QList<OAIEzsigntemplatepackage_RequestCompound> &a_obj_ezsigntemplatepackage) {
    this->a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;
    this->m_a_obj_ezsigntemplatepackage_isSet = true;
}

bool OAIEzsigntemplatepackage_createObject_v1_Request::is_a_obj_ezsigntemplatepackage_Set() const{
    return m_a_obj_ezsigntemplatepackage_isSet;
}

bool OAIEzsigntemplatepackage_createObject_v1_Request::is_a_obj_ezsigntemplatepackage_Valid() const{
    return m_a_obj_ezsigntemplatepackage_isValid;
}

bool OAIEzsigntemplatepackage_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplatepackage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackage_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatepackage_isValid && true;
}

} // namespace OpenAPI

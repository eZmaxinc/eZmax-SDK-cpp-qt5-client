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

#include "OAIEzsigntemplatepackagesigner_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagesigner_editObject_v1_Request::OAIEzsigntemplatepackagesigner_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagesigner_editObject_v1_Request::OAIEzsigntemplatepackagesigner_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatepackagesigner_editObject_v1_Request::~OAIEzsigntemplatepackagesigner_editObject_v1_Request() {}

void OAIEzsigntemplatepackagesigner_editObject_v1_Request::initializeModel() {

    m_obj_ezsigntemplatepackagesigner_isSet = false;
    m_obj_ezsigntemplatepackagesigner_isValid = false;
}

void OAIEzsigntemplatepackagesigner_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagesigner_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatepackagesigner_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplatepackagesigner, json[QString("objEzsigntemplatepackagesigner")]);
    m_obj_ezsigntemplatepackagesigner_isSet = !json[QString("objEzsigntemplatepackagesigner")].isNull() && m_obj_ezsigntemplatepackagesigner_isValid;
}

QString OAIEzsigntemplatepackagesigner_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagesigner_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplatepackagesigner.isSet()) {
        obj.insert(QString("objEzsigntemplatepackagesigner"), ::OpenAPI::toJsonValue(obj_ezsigntemplatepackagesigner));
    }
    return obj;
}

OAIEzsigntemplatepackagesigner_RequestCompound OAIEzsigntemplatepackagesigner_editObject_v1_Request::getObjEzsigntemplatepackagesigner() const {
    return obj_ezsigntemplatepackagesigner;
}
void OAIEzsigntemplatepackagesigner_editObject_v1_Request::setObjEzsigntemplatepackagesigner(const OAIEzsigntemplatepackagesigner_RequestCompound &obj_ezsigntemplatepackagesigner) {
    this->obj_ezsigntemplatepackagesigner = obj_ezsigntemplatepackagesigner;
    this->m_obj_ezsigntemplatepackagesigner_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_editObject_v1_Request::is_obj_ezsigntemplatepackagesigner_Set() const{
    return m_obj_ezsigntemplatepackagesigner_isSet;
}

bool OAIEzsigntemplatepackagesigner_editObject_v1_Request::is_obj_ezsigntemplatepackagesigner_Valid() const{
    return m_obj_ezsigntemplatepackagesigner_isValid;
}

bool OAIEzsigntemplatepackagesigner_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplatepackagesigner.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagesigner_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatepackagesigner_isValid && true;
}

} // namespace OpenAPI

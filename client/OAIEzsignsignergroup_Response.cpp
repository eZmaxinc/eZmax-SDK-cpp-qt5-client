/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsignergroup_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignergroup_Response::OAIEzsignsignergroup_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignergroup_Response::OAIEzsignsignergroup_Response() {
    this->initializeModel();
}

OAIEzsignsignergroup_Response::~OAIEzsignsignergroup_Response() {}

void OAIEzsignsignergroup_Response::initializeModel() {

    m_pki_ezsignsignergroup_id_isSet = false;
    m_pki_ezsignsignergroup_id_isValid = false;

    m_obj_ezsignsignergroup_description_isSet = false;
    m_obj_ezsignsignergroup_description_isValid = false;

    m_s_ezsignsignergroup_description_x_isSet = false;
    m_s_ezsignsignergroup_description_x_isValid = false;
}

void OAIEzsignsignergroup_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignergroup_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignergroup_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsignsignergroup_id, json[QString("pkiEzsignsignergroupID")]);
    m_pki_ezsignsignergroup_id_isSet = !json[QString("pkiEzsignsignergroupID")].isNull() && m_pki_ezsignsignergroup_id_isValid;

    m_obj_ezsignsignergroup_description_isValid = ::OpenAPI::fromJsonValue(m_obj_ezsignsignergroup_description, json[QString("objEzsignsignergroupDescription")]);
    m_obj_ezsignsignergroup_description_isSet = !json[QString("objEzsignsignergroupDescription")].isNull() && m_obj_ezsignsignergroup_description_isValid;

    m_s_ezsignsignergroup_description_x_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignsignergroup_description_x, json[QString("sEzsignsignergroupDescriptionX")]);
    m_s_ezsignsignergroup_description_x_isSet = !json[QString("sEzsignsignergroupDescriptionX")].isNull() && m_s_ezsignsignergroup_description_x_isValid;
}

QString OAIEzsignsignergroup_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignergroup_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignergroup_id_isSet) {
        obj.insert(QString("pkiEzsignsignergroupID"), ::OpenAPI::toJsonValue(m_pki_ezsignsignergroup_id));
    }
    if (m_obj_ezsignsignergroup_description.isSet()) {
        obj.insert(QString("objEzsignsignergroupDescription"), ::OpenAPI::toJsonValue(m_obj_ezsignsignergroup_description));
    }
    if (m_s_ezsignsignergroup_description_x_isSet) {
        obj.insert(QString("sEzsignsignergroupDescriptionX"), ::OpenAPI::toJsonValue(m_s_ezsignsignergroup_description_x));
    }
    return obj;
}

qint32 OAIEzsignsignergroup_Response::getPkiEzsignsignergroupId() const {
    return m_pki_ezsignsignergroup_id;
}
void OAIEzsignsignergroup_Response::setPkiEzsignsignergroupId(const qint32 &pki_ezsignsignergroup_id) {
    m_pki_ezsignsignergroup_id = pki_ezsignsignergroup_id;
    m_pki_ezsignsignergroup_id_isSet = true;
}

bool OAIEzsignsignergroup_Response::is_pki_ezsignsignergroup_id_Set() const{
    return m_pki_ezsignsignergroup_id_isSet;
}

bool OAIEzsignsignergroup_Response::is_pki_ezsignsignergroup_id_Valid() const{
    return m_pki_ezsignsignergroup_id_isValid;
}

OAIMultilingual_EzsignsignergroupDescription OAIEzsignsignergroup_Response::getObjEzsignsignergroupDescription() const {
    return m_obj_ezsignsignergroup_description;
}
void OAIEzsignsignergroup_Response::setObjEzsignsignergroupDescription(const OAIMultilingual_EzsignsignergroupDescription &obj_ezsignsignergroup_description) {
    m_obj_ezsignsignergroup_description = obj_ezsignsignergroup_description;
    m_obj_ezsignsignergroup_description_isSet = true;
}

bool OAIEzsignsignergroup_Response::is_obj_ezsignsignergroup_description_Set() const{
    return m_obj_ezsignsignergroup_description_isSet;
}

bool OAIEzsignsignergroup_Response::is_obj_ezsignsignergroup_description_Valid() const{
    return m_obj_ezsignsignergroup_description_isValid;
}

QString OAIEzsignsignergroup_Response::getSEzsignsignergroupDescriptionX() const {
    return m_s_ezsignsignergroup_description_x;
}
void OAIEzsignsignergroup_Response::setSEzsignsignergroupDescriptionX(const QString &s_ezsignsignergroup_description_x) {
    m_s_ezsignsignergroup_description_x = s_ezsignsignergroup_description_x;
    m_s_ezsignsignergroup_description_x_isSet = true;
}

bool OAIEzsignsignergroup_Response::is_s_ezsignsignergroup_description_x_Set() const{
    return m_s_ezsignsignergroup_description_x_isSet;
}

bool OAIEzsignsignergroup_Response::is_s_ezsignsignergroup_description_x_Valid() const{
    return m_s_ezsignsignergroup_description_x_isValid;
}

bool OAIEzsignsignergroup_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsignsignergroup_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsignergroup_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignergroup_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsignergroup_id_isValid && m_obj_ezsignsignergroup_description_isValid && true;
}

} // namespace OpenAPI

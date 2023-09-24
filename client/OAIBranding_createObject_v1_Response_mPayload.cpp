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

#include "OAIBranding_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBranding_createObject_v1_Response_mPayload::OAIBranding_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBranding_createObject_v1_Response_mPayload::OAIBranding_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIBranding_createObject_v1_Response_mPayload::~OAIBranding_createObject_v1_Response_mPayload() {}

void OAIBranding_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_branding_id_isSet = false;
    m_a_pki_branding_id_isValid = false;
}

void OAIBranding_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBranding_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_branding_id_isValid = ::OpenAPI::fromJsonValue(m_a_pki_branding_id, json[QString("a_pkiBrandingID")]);
    m_a_pki_branding_id_isSet = !json[QString("a_pkiBrandingID")].isNull() && m_a_pki_branding_id_isValid;
}

QString OAIBranding_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBranding_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_branding_id.size() > 0) {
        obj.insert(QString("a_pkiBrandingID"), ::OpenAPI::toJsonValue(m_a_pki_branding_id));
    }
    return obj;
}

QList<qint32> OAIBranding_createObject_v1_Response_mPayload::getAPkiBrandingId() const {
    return m_a_pki_branding_id;
}
void OAIBranding_createObject_v1_Response_mPayload::setAPkiBrandingId(const QList<qint32> &a_pki_branding_id) {
    m_a_pki_branding_id = a_pki_branding_id;
    m_a_pki_branding_id_isSet = true;
}

bool OAIBranding_createObject_v1_Response_mPayload::is_a_pki_branding_id_Set() const{
    return m_a_pki_branding_id_isSet;
}

bool OAIBranding_createObject_v1_Response_mPayload::is_a_pki_branding_id_Valid() const{
    return m_a_pki_branding_id_isValid;
}

bool OAIBranding_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_branding_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBranding_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_branding_id_isValid && true;
}

} // namespace OpenAPI

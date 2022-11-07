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

#include "OAIEzsigntemplatesigner_getObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::OAIEzsigntemplatesigner_getObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::OAIEzsigntemplatesigner_getObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::~OAIEzsigntemplatesigner_getObject_v1_Response_mPayload() {}

void OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::initializeModel() {

    m_pki_ezsigntemplatesigner_id_isSet = false;
    m_pki_ezsigntemplatesigner_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_s_ezsigntemplatesigner_description_isSet = false;
    m_s_ezsigntemplatesigner_description_isValid = false;
}

void OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatesigner_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatesigner_id, json[QString("pkiEzsigntemplatesignerID")]);
    m_pki_ezsigntemplatesigner_id_isSet = !json[QString("pkiEzsigntemplatesignerID")].isNull() && m_pki_ezsigntemplatesigner_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_s_ezsigntemplatesigner_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatesigner_description, json[QString("sEzsigntemplatesignerDescription")]);
    m_s_ezsigntemplatesigner_description_isSet = !json[QString("sEzsigntemplatesignerDescription")].isNull() && m_s_ezsigntemplatesigner_description_isValid;
}

QString OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatesigner_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatesignerID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatesigner_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_s_ezsigntemplatesigner_description_isSet) {
        obj.insert(QString("sEzsigntemplatesignerDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatesigner_description));
    }
    return obj;
}

qint32 OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::getPkiEzsigntemplatesignerId() const {
    return pki_ezsigntemplatesigner_id;
}
void OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::setPkiEzsigntemplatesignerId(const qint32 &pki_ezsigntemplatesigner_id) {
    this->pki_ezsigntemplatesigner_id = pki_ezsigntemplatesigner_id;
    this->m_pki_ezsigntemplatesigner_id_isSet = true;
}

bool OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::is_pki_ezsigntemplatesigner_id_Set() const{
    return m_pki_ezsigntemplatesigner_id_isSet;
}

bool OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::is_pki_ezsigntemplatesigner_id_Valid() const{
    return m_pki_ezsigntemplatesigner_id_isValid;
}

qint32 OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

QString OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::getSEzsigntemplatesignerDescription() const {
    return s_ezsigntemplatesigner_description;
}
void OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::setSEzsigntemplatesignerDescription(const QString &s_ezsigntemplatesigner_description) {
    this->s_ezsigntemplatesigner_description = s_ezsigntemplatesigner_description;
    this->m_s_ezsigntemplatesigner_description_isSet = true;
}

bool OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::is_s_ezsigntemplatesigner_description_Set() const{
    return m_s_ezsigntemplatesigner_description_isSet;
}

bool OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::is_s_ezsigntemplatesigner_description_Valid() const{
    return m_s_ezsigntemplatesigner_description_isValid;
}

bool OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatesigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesigner_getObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatesigner_id_isValid && m_fki_ezsigntemplate_id_isValid && m_s_ezsigntemplatesigner_description_isValid && true;
}

} // namespace OpenAPI

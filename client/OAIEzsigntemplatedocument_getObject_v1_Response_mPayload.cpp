/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatedocument_getObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::OAIEzsigntemplatedocument_getObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::OAIEzsigntemplatedocument_getObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::~OAIEzsigntemplatedocument_getObject_v1_Response_mPayload() {}

void OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::initializeModel() {

    m_pki_ezsigntemplatedocument_id_isSet = false;
    m_pki_ezsigntemplatedocument_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_s_ezsigntemplatedocument_name_isSet = false;
    m_s_ezsigntemplatedocument_name_isValid = false;

    m_i_ezsigntemplatedocument_pagetotal_isSet = false;
    m_i_ezsigntemplatedocument_pagetotal_isValid = false;

    m_i_ezsigntemplatedocument_signaturetotal_isSet = false;
    m_i_ezsigntemplatedocument_signaturetotal_isValid = false;
}

void OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatedocument_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatedocument_id, json[QString("pkiEzsigntemplatedocumentID")]);
    m_pki_ezsigntemplatedocument_id_isSet = !json[QString("pkiEzsigntemplatedocumentID")].isNull() && m_pki_ezsigntemplatedocument_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_s_ezsigntemplatedocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatedocument_name, json[QString("sEzsigntemplatedocumentName")]);
    m_s_ezsigntemplatedocument_name_isSet = !json[QString("sEzsigntemplatedocumentName")].isNull() && m_s_ezsigntemplatedocument_name_isValid;

    m_i_ezsigntemplatedocument_pagetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocument_pagetotal, json[QString("iEzsigntemplatedocumentPagetotal")]);
    m_i_ezsigntemplatedocument_pagetotal_isSet = !json[QString("iEzsigntemplatedocumentPagetotal")].isNull() && m_i_ezsigntemplatedocument_pagetotal_isValid;

    m_i_ezsigntemplatedocument_signaturetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocument_signaturetotal, json[QString("iEzsigntemplatedocumentSignaturetotal")]);
    m_i_ezsigntemplatedocument_signaturetotal_isSet = !json[QString("iEzsigntemplatedocumentSignaturetotal")].isNull() && m_i_ezsigntemplatedocument_signaturetotal_isValid;
}

QString OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatedocumentID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatedocument_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_s_ezsigntemplatedocument_name_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentName"), ::OpenAPI::toJsonValue(s_ezsigntemplatedocument_name));
    }
    if (m_i_ezsigntemplatedocument_pagetotal_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentPagetotal"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocument_pagetotal));
    }
    if (m_i_ezsigntemplatedocument_signaturetotal_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentSignaturetotal"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocument_signaturetotal));
    }
    return obj;
}

qint32 OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::getPkiEzsigntemplatedocumentId() const {
    return pki_ezsigntemplatedocument_id;
}
void OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::setPkiEzsigntemplatedocumentId(const qint32 &pki_ezsigntemplatedocument_id) {
    this->pki_ezsigntemplatedocument_id = pki_ezsigntemplatedocument_id;
    this->m_pki_ezsigntemplatedocument_id_isSet = true;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_pki_ezsigntemplatedocument_id_Set() const{
    return m_pki_ezsigntemplatedocument_id_isSet;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_pki_ezsigntemplatedocument_id_Valid() const{
    return m_pki_ezsigntemplatedocument_id_isValid;
}

qint32 OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

QString OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::getSEzsigntemplatedocumentName() const {
    return s_ezsigntemplatedocument_name;
}
void OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name) {
    this->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    this->m_s_ezsigntemplatedocument_name_isSet = true;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_s_ezsigntemplatedocument_name_Set() const{
    return m_s_ezsigntemplatedocument_name_isSet;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_s_ezsigntemplatedocument_name_Valid() const{
    return m_s_ezsigntemplatedocument_name_isValid;
}

qint32 OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::getIEzsigntemplatedocumentPagetotal() const {
    return i_ezsigntemplatedocument_pagetotal;
}
void OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::setIEzsigntemplatedocumentPagetotal(const qint32 &i_ezsigntemplatedocument_pagetotal) {
    this->i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    this->m_i_ezsigntemplatedocument_pagetotal_isSet = true;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_i_ezsigntemplatedocument_pagetotal_Set() const{
    return m_i_ezsigntemplatedocument_pagetotal_isSet;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_i_ezsigntemplatedocument_pagetotal_Valid() const{
    return m_i_ezsigntemplatedocument_pagetotal_isValid;
}

qint32 OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::getIEzsigntemplatedocumentSignaturetotal() const {
    return i_ezsigntemplatedocument_signaturetotal;
}
void OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::setIEzsigntemplatedocumentSignaturetotal(const qint32 &i_ezsigntemplatedocument_signaturetotal) {
    this->i_ezsigntemplatedocument_signaturetotal = i_ezsigntemplatedocument_signaturetotal;
    this->m_i_ezsigntemplatedocument_signaturetotal_isSet = true;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_i_ezsigntemplatedocument_signaturetotal_Set() const{
    return m_i_ezsigntemplatedocument_signaturetotal_isSet;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::is_i_ezsigntemplatedocument_signaturetotal_Valid() const{
    return m_i_ezsigntemplatedocument_signaturetotal_isValid;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatedocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocument_pagetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocument_signaturetotal_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_getObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatedocument_id_isValid && m_fki_ezsigntemplate_id_isValid && m_s_ezsigntemplatedocument_name_isValid && m_i_ezsigntemplatedocument_pagetotal_isValid && m_i_ezsigntemplatedocument_signaturetotal_isValid && true;
}

} // namespace OpenAPI

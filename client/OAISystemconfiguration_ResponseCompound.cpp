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

#include "OAISystemconfiguration_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISystemconfiguration_ResponseCompound::OAISystemconfiguration_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISystemconfiguration_ResponseCompound::OAISystemconfiguration_ResponseCompound() {
    this->initializeModel();
}

OAISystemconfiguration_ResponseCompound::~OAISystemconfiguration_ResponseCompound() {}

void OAISystemconfiguration_ResponseCompound::initializeModel() {

    m_pki_systemconfiguration_id_isSet = false;
    m_pki_systemconfiguration_id_isValid = false;

    m_fki_systemconfigurationtype_id_isSet = false;
    m_fki_systemconfigurationtype_id_isValid = false;

    m_s_systemconfigurationtype_description_x_isSet = false;
    m_s_systemconfigurationtype_description_x_isValid = false;

    m_e_systemconfiguration_newexternaluseraction_isSet = false;
    m_e_systemconfiguration_newexternaluseraction_isValid = false;

    m_e_systemconfiguration_language1_isSet = false;
    m_e_systemconfiguration_language1_isValid = false;

    m_e_systemconfiguration_language2_isSet = false;
    m_e_systemconfiguration_language2_isValid = false;

    m_e_systemconfiguration_ezsign_isSet = false;
    m_e_systemconfiguration_ezsign_isValid = false;

    m_b_systemconfiguration_ezsignpersonnal_isSet = false;
    m_b_systemconfiguration_ezsignpersonnal_isValid = false;

    m_b_systemconfiguration_sspr_isSet = false;
    m_b_systemconfiguration_sspr_isValid = false;

    m_dt_systemconfiguration_readonlyexpirationstart_isSet = false;
    m_dt_systemconfiguration_readonlyexpirationstart_isValid = false;

    m_dt_systemconfiguration_readonlyexpirationend_isSet = false;
    m_dt_systemconfiguration_readonlyexpirationend_isValid = false;
}

void OAISystemconfiguration_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISystemconfiguration_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_systemconfiguration_id_isValid = ::OpenAPI::fromJsonValue(m_pki_systemconfiguration_id, json[QString("pkiSystemconfigurationID")]);
    m_pki_systemconfiguration_id_isSet = !json[QString("pkiSystemconfigurationID")].isNull() && m_pki_systemconfiguration_id_isValid;

    m_fki_systemconfigurationtype_id_isValid = ::OpenAPI::fromJsonValue(m_fki_systemconfigurationtype_id, json[QString("fkiSystemconfigurationtypeID")]);
    m_fki_systemconfigurationtype_id_isSet = !json[QString("fkiSystemconfigurationtypeID")].isNull() && m_fki_systemconfigurationtype_id_isValid;

    m_s_systemconfigurationtype_description_x_isValid = ::OpenAPI::fromJsonValue(m_s_systemconfigurationtype_description_x, json[QString("sSystemconfigurationtypeDescriptionX")]);
    m_s_systemconfigurationtype_description_x_isSet = !json[QString("sSystemconfigurationtypeDescriptionX")].isNull() && m_s_systemconfigurationtype_description_x_isValid;

    m_e_systemconfiguration_newexternaluseraction_isValid = ::OpenAPI::fromJsonValue(m_e_systemconfiguration_newexternaluseraction, json[QString("eSystemconfigurationNewexternaluseraction")]);
    m_e_systemconfiguration_newexternaluseraction_isSet = !json[QString("eSystemconfigurationNewexternaluseraction")].isNull() && m_e_systemconfiguration_newexternaluseraction_isValid;

    m_e_systemconfiguration_language1_isValid = ::OpenAPI::fromJsonValue(m_e_systemconfiguration_language1, json[QString("eSystemconfigurationLanguage1")]);
    m_e_systemconfiguration_language1_isSet = !json[QString("eSystemconfigurationLanguage1")].isNull() && m_e_systemconfiguration_language1_isValid;

    m_e_systemconfiguration_language2_isValid = ::OpenAPI::fromJsonValue(m_e_systemconfiguration_language2, json[QString("eSystemconfigurationLanguage2")]);
    m_e_systemconfiguration_language2_isSet = !json[QString("eSystemconfigurationLanguage2")].isNull() && m_e_systemconfiguration_language2_isValid;

    m_e_systemconfiguration_ezsign_isValid = ::OpenAPI::fromJsonValue(m_e_systemconfiguration_ezsign, json[QString("eSystemconfigurationEzsign")]);
    m_e_systemconfiguration_ezsign_isSet = !json[QString("eSystemconfigurationEzsign")].isNull() && m_e_systemconfiguration_ezsign_isValid;

    m_b_systemconfiguration_ezsignpersonnal_isValid = ::OpenAPI::fromJsonValue(m_b_systemconfiguration_ezsignpersonnal, json[QString("bSystemconfigurationEzsignpersonnal")]);
    m_b_systemconfiguration_ezsignpersonnal_isSet = !json[QString("bSystemconfigurationEzsignpersonnal")].isNull() && m_b_systemconfiguration_ezsignpersonnal_isValid;

    m_b_systemconfiguration_sspr_isValid = ::OpenAPI::fromJsonValue(m_b_systemconfiguration_sspr, json[QString("bSystemconfigurationSspr")]);
    m_b_systemconfiguration_sspr_isSet = !json[QString("bSystemconfigurationSspr")].isNull() && m_b_systemconfiguration_sspr_isValid;

    m_dt_systemconfiguration_readonlyexpirationstart_isValid = ::OpenAPI::fromJsonValue(m_dt_systemconfiguration_readonlyexpirationstart, json[QString("dtSystemconfigurationReadonlyexpirationstart")]);
    m_dt_systemconfiguration_readonlyexpirationstart_isSet = !json[QString("dtSystemconfigurationReadonlyexpirationstart")].isNull() && m_dt_systemconfiguration_readonlyexpirationstart_isValid;

    m_dt_systemconfiguration_readonlyexpirationend_isValid = ::OpenAPI::fromJsonValue(m_dt_systemconfiguration_readonlyexpirationend, json[QString("dtSystemconfigurationReadonlyexpirationend")]);
    m_dt_systemconfiguration_readonlyexpirationend_isSet = !json[QString("dtSystemconfigurationReadonlyexpirationend")].isNull() && m_dt_systemconfiguration_readonlyexpirationend_isValid;
}

QString OAISystemconfiguration_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISystemconfiguration_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_systemconfiguration_id_isSet) {
        obj.insert(QString("pkiSystemconfigurationID"), ::OpenAPI::toJsonValue(m_pki_systemconfiguration_id));
    }
    if (m_fki_systemconfigurationtype_id_isSet) {
        obj.insert(QString("fkiSystemconfigurationtypeID"), ::OpenAPI::toJsonValue(m_fki_systemconfigurationtype_id));
    }
    if (m_s_systemconfigurationtype_description_x_isSet) {
        obj.insert(QString("sSystemconfigurationtypeDescriptionX"), ::OpenAPI::toJsonValue(m_s_systemconfigurationtype_description_x));
    }
    if (m_e_systemconfiguration_newexternaluseraction.isSet()) {
        obj.insert(QString("eSystemconfigurationNewexternaluseraction"), ::OpenAPI::toJsonValue(m_e_systemconfiguration_newexternaluseraction));
    }
    if (m_e_systemconfiguration_language1.isSet()) {
        obj.insert(QString("eSystemconfigurationLanguage1"), ::OpenAPI::toJsonValue(m_e_systemconfiguration_language1));
    }
    if (m_e_systemconfiguration_language2.isSet()) {
        obj.insert(QString("eSystemconfigurationLanguage2"), ::OpenAPI::toJsonValue(m_e_systemconfiguration_language2));
    }
    if (m_e_systemconfiguration_ezsign.isSet()) {
        obj.insert(QString("eSystemconfigurationEzsign"), ::OpenAPI::toJsonValue(m_e_systemconfiguration_ezsign));
    }
    if (m_b_systemconfiguration_ezsignpersonnal_isSet) {
        obj.insert(QString("bSystemconfigurationEzsignpersonnal"), ::OpenAPI::toJsonValue(m_b_systemconfiguration_ezsignpersonnal));
    }
    if (m_b_systemconfiguration_sspr_isSet) {
        obj.insert(QString("bSystemconfigurationSspr"), ::OpenAPI::toJsonValue(m_b_systemconfiguration_sspr));
    }
    if (m_dt_systemconfiguration_readonlyexpirationstart_isSet) {
        obj.insert(QString("dtSystemconfigurationReadonlyexpirationstart"), ::OpenAPI::toJsonValue(m_dt_systemconfiguration_readonlyexpirationstart));
    }
    if (m_dt_systemconfiguration_readonlyexpirationend_isSet) {
        obj.insert(QString("dtSystemconfigurationReadonlyexpirationend"), ::OpenAPI::toJsonValue(m_dt_systemconfiguration_readonlyexpirationend));
    }
    return obj;
}

qint32 OAISystemconfiguration_ResponseCompound::getPkiSystemconfigurationId() const {
    return m_pki_systemconfiguration_id;
}
void OAISystemconfiguration_ResponseCompound::setPkiSystemconfigurationId(const qint32 &pki_systemconfiguration_id) {
    m_pki_systemconfiguration_id = pki_systemconfiguration_id;
    m_pki_systemconfiguration_id_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_pki_systemconfiguration_id_Set() const{
    return m_pki_systemconfiguration_id_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_pki_systemconfiguration_id_Valid() const{
    return m_pki_systemconfiguration_id_isValid;
}

qint32 OAISystemconfiguration_ResponseCompound::getFkiSystemconfigurationtypeId() const {
    return m_fki_systemconfigurationtype_id;
}
void OAISystemconfiguration_ResponseCompound::setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id) {
    m_fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    m_fki_systemconfigurationtype_id_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_fki_systemconfigurationtype_id_Set() const{
    return m_fki_systemconfigurationtype_id_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_fki_systemconfigurationtype_id_Valid() const{
    return m_fki_systemconfigurationtype_id_isValid;
}

QString OAISystemconfiguration_ResponseCompound::getSSystemconfigurationtypeDescriptionX() const {
    return m_s_systemconfigurationtype_description_x;
}
void OAISystemconfiguration_ResponseCompound::setSSystemconfigurationtypeDescriptionX(const QString &s_systemconfigurationtype_description_x) {
    m_s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    m_s_systemconfigurationtype_description_x_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_s_systemconfigurationtype_description_x_Set() const{
    return m_s_systemconfigurationtype_description_x_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_s_systemconfigurationtype_description_x_Valid() const{
    return m_s_systemconfigurationtype_description_x_isValid;
}

OAIField_eSystemconfigurationNewexternaluseraction OAISystemconfiguration_ResponseCompound::getESystemconfigurationNewexternaluseraction() const {
    return m_e_systemconfiguration_newexternaluseraction;
}
void OAISystemconfiguration_ResponseCompound::setESystemconfigurationNewexternaluseraction(const OAIField_eSystemconfigurationNewexternaluseraction &e_systemconfiguration_newexternaluseraction) {
    m_e_systemconfiguration_newexternaluseraction = e_systemconfiguration_newexternaluseraction;
    m_e_systemconfiguration_newexternaluseraction_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_e_systemconfiguration_newexternaluseraction_Set() const{
    return m_e_systemconfiguration_newexternaluseraction_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_e_systemconfiguration_newexternaluseraction_Valid() const{
    return m_e_systemconfiguration_newexternaluseraction_isValid;
}

OAIField_eSystemconfigurationLanguage1 OAISystemconfiguration_ResponseCompound::getESystemconfigurationLanguage1() const {
    return m_e_systemconfiguration_language1;
}
void OAISystemconfiguration_ResponseCompound::setESystemconfigurationLanguage1(const OAIField_eSystemconfigurationLanguage1 &e_systemconfiguration_language1) {
    m_e_systemconfiguration_language1 = e_systemconfiguration_language1;
    m_e_systemconfiguration_language1_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_e_systemconfiguration_language1_Set() const{
    return m_e_systemconfiguration_language1_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_e_systemconfiguration_language1_Valid() const{
    return m_e_systemconfiguration_language1_isValid;
}

OAIField_eSystemconfigurationLanguage2 OAISystemconfiguration_ResponseCompound::getESystemconfigurationLanguage2() const {
    return m_e_systemconfiguration_language2;
}
void OAISystemconfiguration_ResponseCompound::setESystemconfigurationLanguage2(const OAIField_eSystemconfigurationLanguage2 &e_systemconfiguration_language2) {
    m_e_systemconfiguration_language2 = e_systemconfiguration_language2;
    m_e_systemconfiguration_language2_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_e_systemconfiguration_language2_Set() const{
    return m_e_systemconfiguration_language2_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_e_systemconfiguration_language2_Valid() const{
    return m_e_systemconfiguration_language2_isValid;
}

OAIField_eSystemconfigurationEzsign OAISystemconfiguration_ResponseCompound::getESystemconfigurationEzsign() const {
    return m_e_systemconfiguration_ezsign;
}
void OAISystemconfiguration_ResponseCompound::setESystemconfigurationEzsign(const OAIField_eSystemconfigurationEzsign &e_systemconfiguration_ezsign) {
    m_e_systemconfiguration_ezsign = e_systemconfiguration_ezsign;
    m_e_systemconfiguration_ezsign_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_e_systemconfiguration_ezsign_Set() const{
    return m_e_systemconfiguration_ezsign_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_e_systemconfiguration_ezsign_Valid() const{
    return m_e_systemconfiguration_ezsign_isValid;
}

bool OAISystemconfiguration_ResponseCompound::isBSystemconfigurationEzsignpersonnal() const {
    return m_b_systemconfiguration_ezsignpersonnal;
}
void OAISystemconfiguration_ResponseCompound::setBSystemconfigurationEzsignpersonnal(const bool &b_systemconfiguration_ezsignpersonnal) {
    m_b_systemconfiguration_ezsignpersonnal = b_systemconfiguration_ezsignpersonnal;
    m_b_systemconfiguration_ezsignpersonnal_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_b_systemconfiguration_ezsignpersonnal_Set() const{
    return m_b_systemconfiguration_ezsignpersonnal_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_b_systemconfiguration_ezsignpersonnal_Valid() const{
    return m_b_systemconfiguration_ezsignpersonnal_isValid;
}

bool OAISystemconfiguration_ResponseCompound::isBSystemconfigurationSspr() const {
    return m_b_systemconfiguration_sspr;
}
void OAISystemconfiguration_ResponseCompound::setBSystemconfigurationSspr(const bool &b_systemconfiguration_sspr) {
    m_b_systemconfiguration_sspr = b_systemconfiguration_sspr;
    m_b_systemconfiguration_sspr_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_b_systemconfiguration_sspr_Set() const{
    return m_b_systemconfiguration_sspr_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_b_systemconfiguration_sspr_Valid() const{
    return m_b_systemconfiguration_sspr_isValid;
}

QString OAISystemconfiguration_ResponseCompound::getDtSystemconfigurationReadonlyexpirationstart() const {
    return m_dt_systemconfiguration_readonlyexpirationstart;
}
void OAISystemconfiguration_ResponseCompound::setDtSystemconfigurationReadonlyexpirationstart(const QString &dt_systemconfiguration_readonlyexpirationstart) {
    m_dt_systemconfiguration_readonlyexpirationstart = dt_systemconfiguration_readonlyexpirationstart;
    m_dt_systemconfiguration_readonlyexpirationstart_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_dt_systemconfiguration_readonlyexpirationstart_Set() const{
    return m_dt_systemconfiguration_readonlyexpirationstart_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_dt_systemconfiguration_readonlyexpirationstart_Valid() const{
    return m_dt_systemconfiguration_readonlyexpirationstart_isValid;
}

QString OAISystemconfiguration_ResponseCompound::getDtSystemconfigurationReadonlyexpirationend() const {
    return m_dt_systemconfiguration_readonlyexpirationend;
}
void OAISystemconfiguration_ResponseCompound::setDtSystemconfigurationReadonlyexpirationend(const QString &dt_systemconfiguration_readonlyexpirationend) {
    m_dt_systemconfiguration_readonlyexpirationend = dt_systemconfiguration_readonlyexpirationend;
    m_dt_systemconfiguration_readonlyexpirationend_isSet = true;
}

bool OAISystemconfiguration_ResponseCompound::is_dt_systemconfiguration_readonlyexpirationend_Set() const{
    return m_dt_systemconfiguration_readonlyexpirationend_isSet;
}

bool OAISystemconfiguration_ResponseCompound::is_dt_systemconfiguration_readonlyexpirationend_Valid() const{
    return m_dt_systemconfiguration_readonlyexpirationend_isValid;
}

bool OAISystemconfiguration_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_systemconfiguration_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_systemconfigurationtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_systemconfigurationtype_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_newexternaluseraction.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_language1.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_language2.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_ezsign.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_systemconfiguration_ezsignpersonnal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_systemconfiguration_sspr_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_systemconfiguration_readonlyexpirationstart_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_systemconfiguration_readonlyexpirationend_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISystemconfiguration_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_systemconfiguration_id_isValid && m_fki_systemconfigurationtype_id_isValid && m_s_systemconfigurationtype_description_x_isValid && m_e_systemconfiguration_newexternaluseraction_isValid && m_e_systemconfiguration_language1_isValid && m_e_systemconfiguration_language2_isValid && m_e_systemconfiguration_ezsign_isValid && m_b_systemconfiguration_ezsignpersonnal_isValid && m_b_systemconfiguration_sspr_isValid && true;
}

} // namespace OpenAPI

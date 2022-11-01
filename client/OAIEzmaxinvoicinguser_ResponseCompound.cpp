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

#include "OAIEzmaxinvoicinguser_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicinguser_ResponseCompound::OAIEzmaxinvoicinguser_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicinguser_ResponseCompound::OAIEzmaxinvoicinguser_ResponseCompound() {
    this->initializeModel();
}

OAIEzmaxinvoicinguser_ResponseCompound::~OAIEzmaxinvoicinguser_ResponseCompound() {}

void OAIEzmaxinvoicinguser_ResponseCompound::initializeModel() {

    m_pki_ezmaxinvoicinguser_id_isSet = false;
    m_pki_ezmaxinvoicinguser_id_isValid = false;

    m_fki_ezmaxinvoicing_id_isSet = false;
    m_fki_ezmaxinvoicing_id_isValid = false;

    m_fki_billingentityinternal_id_isSet = false;
    m_fki_billingentityinternal_id_isValid = false;

    m_s_billingentityinternal_description_x_isSet = false;
    m_s_billingentityinternal_description_x_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_i_ezmaxinvoicinguser_ezsigndocument_isSet = false;
    m_i_ezmaxinvoicinguser_ezsigndocument_isValid = false;

    m_b_ezmaxinvoicinguser_ezsignaccount_isSet = false;
    m_b_ezmaxinvoicinguser_ezsignaccount_isValid = false;

    m_b_ezmaxinvoicinguser_billableezsign_isSet = false;
    m_b_ezmaxinvoicinguser_billableezsign_isValid = false;

    m_e_ezmaxinvoicinguser_variationezsign_isSet = false;
    m_e_ezmaxinvoicinguser_variationezsign_isValid = false;

    m_obj_contact_name_isSet = false;
    m_obj_contact_name_isValid = false;
}

void OAIEzmaxinvoicinguser_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicinguser_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicinguser_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicinguser_id, json[QString("pkiEzmaxinvoicinguserID")]);
    m_pki_ezmaxinvoicinguser_id_isSet = !json[QString("pkiEzmaxinvoicinguserID")].isNull() && m_pki_ezmaxinvoicinguser_id_isValid;

    m_fki_ezmaxinvoicing_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxinvoicing_id, json[QString("fkiEzmaxinvoicingID")]);
    m_fki_ezmaxinvoicing_id_isSet = !json[QString("fkiEzmaxinvoicingID")].isNull() && m_fki_ezmaxinvoicing_id_isValid;

    m_fki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::OpenAPI::fromJsonValue(s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_i_ezmaxinvoicinguser_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicinguser_ezsigndocument, json[QString("iEzmaxinvoicinguserEzsigndocument")]);
    m_i_ezmaxinvoicinguser_ezsigndocument_isSet = !json[QString("iEzmaxinvoicinguserEzsigndocument")].isNull() && m_i_ezmaxinvoicinguser_ezsigndocument_isValid;

    m_b_ezmaxinvoicinguser_ezsignaccount_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicinguser_ezsignaccount, json[QString("bEzmaxinvoicinguserEzsignaccount")]);
    m_b_ezmaxinvoicinguser_ezsignaccount_isSet = !json[QString("bEzmaxinvoicinguserEzsignaccount")].isNull() && m_b_ezmaxinvoicinguser_ezsignaccount_isValid;

    m_b_ezmaxinvoicinguser_billableezsign_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicinguser_billableezsign, json[QString("bEzmaxinvoicinguserBillableezsign")]);
    m_b_ezmaxinvoicinguser_billableezsign_isSet = !json[QString("bEzmaxinvoicinguserBillableezsign")].isNull() && m_b_ezmaxinvoicinguser_billableezsign_isValid;

    m_e_ezmaxinvoicinguser_variationezsign_isValid = ::OpenAPI::fromJsonValue(e_ezmaxinvoicinguser_variationezsign, json[QString("eEzmaxinvoicinguserVariationezsign")]);
    m_e_ezmaxinvoicinguser_variationezsign_isSet = !json[QString("eEzmaxinvoicinguserVariationezsign")].isNull() && m_e_ezmaxinvoicinguser_variationezsign_isValid;

    m_obj_contact_name_isValid = ::OpenAPI::fromJsonValue(obj_contact_name, json[QString("objContactName")]);
    m_obj_contact_name_isSet = !json[QString("objContactName")].isNull() && m_obj_contact_name_isValid;
}

QString OAIEzmaxinvoicinguser_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicinguser_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicinguser_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicinguserID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicinguser_id));
    }
    if (m_fki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingID"), ::OpenAPI::toJsonValue(fki_ezmaxinvoicing_id));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::OpenAPI::toJsonValue(fki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::OpenAPI::toJsonValue(s_billingentityinternal_description_x));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_i_ezmaxinvoicinguser_ezsigndocument_isSet) {
        obj.insert(QString("iEzmaxinvoicinguserEzsigndocument"), ::OpenAPI::toJsonValue(i_ezmaxinvoicinguser_ezsigndocument));
    }
    if (m_b_ezmaxinvoicinguser_ezsignaccount_isSet) {
        obj.insert(QString("bEzmaxinvoicinguserEzsignaccount"), ::OpenAPI::toJsonValue(b_ezmaxinvoicinguser_ezsignaccount));
    }
    if (m_b_ezmaxinvoicinguser_billableezsign_isSet) {
        obj.insert(QString("bEzmaxinvoicinguserBillableezsign"), ::OpenAPI::toJsonValue(b_ezmaxinvoicinguser_billableezsign));
    }
    if (e_ezmaxinvoicinguser_variationezsign.isSet()) {
        obj.insert(QString("eEzmaxinvoicinguserVariationezsign"), ::OpenAPI::toJsonValue(e_ezmaxinvoicinguser_variationezsign));
    }
    if (obj_contact_name.isSet()) {
        obj.insert(QString("objContactName"), ::OpenAPI::toJsonValue(obj_contact_name));
    }
    return obj;
}

qint32 OAIEzmaxinvoicinguser_ResponseCompound::getPkiEzmaxinvoicinguserId() const {
    return pki_ezmaxinvoicinguser_id;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setPkiEzmaxinvoicinguserId(const qint32 &pki_ezmaxinvoicinguser_id) {
    this->pki_ezmaxinvoicinguser_id = pki_ezmaxinvoicinguser_id;
    this->m_pki_ezmaxinvoicinguser_id_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_pki_ezmaxinvoicinguser_id_Set() const{
    return m_pki_ezmaxinvoicinguser_id_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_pki_ezmaxinvoicinguser_id_Valid() const{
    return m_pki_ezmaxinvoicinguser_id_isValid;
}

qint32 OAIEzmaxinvoicinguser_ResponseCompound::getFkiEzmaxinvoicingId() const {
    return fki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id) {
    this->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    this->m_fki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_fki_ezmaxinvoicing_id_Set() const{
    return m_fki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_fki_ezmaxinvoicing_id_Valid() const{
    return m_fki_ezmaxinvoicing_id_isValid;
}

qint32 OAIEzmaxinvoicinguser_ResponseCompound::getFkiBillingentityinternalId() const {
    return fki_billingentityinternal_id;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    this->fki_billingentityinternal_id = fki_billingentityinternal_id;
    this->m_fki_billingentityinternal_id_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

QString OAIEzmaxinvoicinguser_ResponseCompound::getSBillingentityinternalDescriptionX() const {
    return s_billingentityinternal_description_x;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    this->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    this->m_s_billingentityinternal_description_x_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

qint32 OAIEzmaxinvoicinguser_ResponseCompound::getFkiUserId() const {
    return fki_user_id;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAIEzmaxinvoicinguser_ResponseCompound::getIEzmaxinvoicinguserEzsigndocument() const {
    return i_ezmaxinvoicinguser_ezsigndocument;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setIEzmaxinvoicinguserEzsigndocument(const qint32 &i_ezmaxinvoicinguser_ezsigndocument) {
    this->i_ezmaxinvoicinguser_ezsigndocument = i_ezmaxinvoicinguser_ezsigndocument;
    this->m_i_ezmaxinvoicinguser_ezsigndocument_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_i_ezmaxinvoicinguser_ezsigndocument_Set() const{
    return m_i_ezmaxinvoicinguser_ezsigndocument_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_i_ezmaxinvoicinguser_ezsigndocument_Valid() const{
    return m_i_ezmaxinvoicinguser_ezsigndocument_isValid;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::isBEzmaxinvoicinguserEzsignaccount() const {
    return b_ezmaxinvoicinguser_ezsignaccount;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setBEzmaxinvoicinguserEzsignaccount(const bool &b_ezmaxinvoicinguser_ezsignaccount) {
    this->b_ezmaxinvoicinguser_ezsignaccount = b_ezmaxinvoicinguser_ezsignaccount;
    this->m_b_ezmaxinvoicinguser_ezsignaccount_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_b_ezmaxinvoicinguser_ezsignaccount_Set() const{
    return m_b_ezmaxinvoicinguser_ezsignaccount_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_b_ezmaxinvoicinguser_ezsignaccount_Valid() const{
    return m_b_ezmaxinvoicinguser_ezsignaccount_isValid;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::isBEzmaxinvoicinguserBillableezsign() const {
    return b_ezmaxinvoicinguser_billableezsign;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setBEzmaxinvoicinguserBillableezsign(const bool &b_ezmaxinvoicinguser_billableezsign) {
    this->b_ezmaxinvoicinguser_billableezsign = b_ezmaxinvoicinguser_billableezsign;
    this->m_b_ezmaxinvoicinguser_billableezsign_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_b_ezmaxinvoicinguser_billableezsign_Set() const{
    return m_b_ezmaxinvoicinguser_billableezsign_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_b_ezmaxinvoicinguser_billableezsign_Valid() const{
    return m_b_ezmaxinvoicinguser_billableezsign_isValid;
}

OAIField_eEzmaxinvoicinguserVariationezsign OAIEzmaxinvoicinguser_ResponseCompound::getEEzmaxinvoicinguserVariationezsign() const {
    return e_ezmaxinvoicinguser_variationezsign;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setEEzmaxinvoicinguserVariationezsign(const OAIField_eEzmaxinvoicinguserVariationezsign &e_ezmaxinvoicinguser_variationezsign) {
    this->e_ezmaxinvoicinguser_variationezsign = e_ezmaxinvoicinguser_variationezsign;
    this->m_e_ezmaxinvoicinguser_variationezsign_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_e_ezmaxinvoicinguser_variationezsign_Set() const{
    return m_e_ezmaxinvoicinguser_variationezsign_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_e_ezmaxinvoicinguser_variationezsign_Valid() const{
    return m_e_ezmaxinvoicinguser_variationezsign_isValid;
}

OAICustom_ContactName_Response OAIEzmaxinvoicinguser_ResponseCompound::getObjContactName() const {
    return obj_contact_name;
}
void OAIEzmaxinvoicinguser_ResponseCompound::setObjContactName(const OAICustom_ContactName_Response &obj_contact_name) {
    this->obj_contact_name = obj_contact_name;
    this->m_obj_contact_name_isSet = true;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_obj_contact_name_Set() const{
    return m_obj_contact_name_isSet;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::is_obj_contact_name_Valid() const{
    return m_obj_contact_name_isValid;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicinguser_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityinternal_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicinguser_ezsigndocument_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicinguser_ezsignaccount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicinguser_billableezsign_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezmaxinvoicinguser_variationezsign.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_contact_name.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicinguser_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_billingentityinternal_id_isValid && m_s_billingentityinternal_description_x_isValid && m_fki_user_id_isValid && m_i_ezmaxinvoicinguser_ezsigndocument_isValid && m_b_ezmaxinvoicinguser_ezsignaccount_isValid && m_b_ezmaxinvoicinguser_billableezsign_isValid && m_e_ezmaxinvoicinguser_variationezsign_isValid && m_obj_contact_name_isValid && true;
}

} // namespace OpenAPI

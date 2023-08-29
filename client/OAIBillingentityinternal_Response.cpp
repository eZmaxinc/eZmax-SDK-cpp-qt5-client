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

#include "OAIBillingentityinternal_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBillingentityinternal_Response::OAIBillingentityinternal_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBillingentityinternal_Response::OAIBillingentityinternal_Response() {
    this->initializeModel();
}

OAIBillingentityinternal_Response::~OAIBillingentityinternal_Response() {}

void OAIBillingentityinternal_Response::initializeModel() {

    m_pki_billingentityinternal_id_isSet = false;
    m_pki_billingentityinternal_id_isValid = false;

    m_obj_billingentityinternal_description_isSet = false;
    m_obj_billingentityinternal_description_isValid = false;
}

void OAIBillingentityinternal_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBillingentityinternal_Response::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(m_pki_billingentityinternal_id, json[QString("pkiBillingentityinternalID")]);
    m_pki_billingentityinternal_id_isSet = !json[QString("pkiBillingentityinternalID")].isNull() && m_pki_billingentityinternal_id_isValid;

    m_obj_billingentityinternal_description_isValid = ::OpenAPI::fromJsonValue(m_obj_billingentityinternal_description, json[QString("objBillingentityinternalDescription")]);
    m_obj_billingentityinternal_description_isSet = !json[QString("objBillingentityinternalDescription")].isNull() && m_obj_billingentityinternal_description_isValid;
}

QString OAIBillingentityinternal_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBillingentityinternal_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityinternal_id_isSet) {
        obj.insert(QString("pkiBillingentityinternalID"), ::OpenAPI::toJsonValue(m_pki_billingentityinternal_id));
    }
    if (m_obj_billingentityinternal_description.isSet()) {
        obj.insert(QString("objBillingentityinternalDescription"), ::OpenAPI::toJsonValue(m_obj_billingentityinternal_description));
    }
    return obj;
}

qint32 OAIBillingentityinternal_Response::getPkiBillingentityinternalId() const {
    return m_pki_billingentityinternal_id;
}
void OAIBillingentityinternal_Response::setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id) {
    m_pki_billingentityinternal_id = pki_billingentityinternal_id;
    m_pki_billingentityinternal_id_isSet = true;
}

bool OAIBillingentityinternal_Response::is_pki_billingentityinternal_id_Set() const{
    return m_pki_billingentityinternal_id_isSet;
}

bool OAIBillingentityinternal_Response::is_pki_billingentityinternal_id_Valid() const{
    return m_pki_billingentityinternal_id_isValid;
}

OAIMultilingual_BillingentityinternalDescription OAIBillingentityinternal_Response::getObjBillingentityinternalDescription() const {
    return m_obj_billingentityinternal_description;
}
void OAIBillingentityinternal_Response::setObjBillingentityinternalDescription(const OAIMultilingual_BillingentityinternalDescription &obj_billingentityinternal_description) {
    m_obj_billingentityinternal_description = obj_billingentityinternal_description;
    m_obj_billingentityinternal_description_isSet = true;
}

bool OAIBillingentityinternal_Response::is_obj_billingentityinternal_description_Set() const{
    return m_obj_billingentityinternal_description_isSet;
}

bool OAIBillingentityinternal_Response::is_obj_billingentityinternal_description_Valid() const{
    return m_obj_billingentityinternal_description_isValid;
}

bool OAIBillingentityinternal_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_billingentityinternal_description.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBillingentityinternal_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_billingentityinternal_id_isValid && m_obj_billingentityinternal_description_isValid && true;
}

} // namespace OpenAPI

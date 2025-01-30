/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Customer_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Customer_createObject_v1_Response_mPayload::Customer_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Customer_createObject_v1_Response_mPayload::Customer_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

Customer_createObject_v1_Response_mPayload::~Customer_createObject_v1_Response_mPayload() {}

void Customer_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_customer_id_isSet = false;
    m_a_pki_customer_id_isValid = false;
}

void Customer_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Customer_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_customer_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_customer_id, json[QString("a_pkiCustomerID")]);
    m_a_pki_customer_id_isSet = !json[QString("a_pkiCustomerID")].isNull() && m_a_pki_customer_id_isValid;
}

QString Customer_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Customer_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_customer_id.size() > 0) {
        obj.insert(QString("a_pkiCustomerID"), ::Ezmaxapi::toJsonValue(m_a_pki_customer_id));
    }
    return obj;
}

QList<qint32> Customer_createObject_v1_Response_mPayload::getAPkiCustomerId() const {
    return m_a_pki_customer_id;
}
void Customer_createObject_v1_Response_mPayload::setAPkiCustomerId(const QList<qint32> &a_pki_customer_id) {
    m_a_pki_customer_id = a_pki_customer_id;
    m_a_pki_customer_id_isSet = true;
}

bool Customer_createObject_v1_Response_mPayload::is_a_pki_customer_id_Set() const{
    return m_a_pki_customer_id_isSet;
}

bool Customer_createObject_v1_Response_mPayload::is_a_pki_customer_id_Valid() const{
    return m_a_pki_customer_id_isValid;
}

bool Customer_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_customer_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Customer_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_customer_id_isValid && true;
}

} // namespace Ezmaxapi

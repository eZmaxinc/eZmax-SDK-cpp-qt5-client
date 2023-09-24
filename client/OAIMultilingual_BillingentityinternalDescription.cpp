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

#include "OAIMultilingual_BillingentityinternalDescription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMultilingual_BillingentityinternalDescription::OAIMultilingual_BillingentityinternalDescription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMultilingual_BillingentityinternalDescription::OAIMultilingual_BillingentityinternalDescription() {
    this->initializeModel();
}

OAIMultilingual_BillingentityinternalDescription::~OAIMultilingual_BillingentityinternalDescription() {}

void OAIMultilingual_BillingentityinternalDescription::initializeModel() {

    m_s_billingentityinternal_description1_isSet = false;
    m_s_billingentityinternal_description1_isValid = false;

    m_s_billingentityinternal_description2_isSet = false;
    m_s_billingentityinternal_description2_isValid = false;
}

void OAIMultilingual_BillingentityinternalDescription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMultilingual_BillingentityinternalDescription::fromJsonObject(QJsonObject json) {

    m_s_billingentityinternal_description1_isValid = ::OpenAPI::fromJsonValue(m_s_billingentityinternal_description1, json[QString("sBillingentityinternalDescription1")]);
    m_s_billingentityinternal_description1_isSet = !json[QString("sBillingentityinternalDescription1")].isNull() && m_s_billingentityinternal_description1_isValid;

    m_s_billingentityinternal_description2_isValid = ::OpenAPI::fromJsonValue(m_s_billingentityinternal_description2, json[QString("sBillingentityinternalDescription2")]);
    m_s_billingentityinternal_description2_isSet = !json[QString("sBillingentityinternalDescription2")].isNull() && m_s_billingentityinternal_description2_isValid;
}

QString OAIMultilingual_BillingentityinternalDescription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMultilingual_BillingentityinternalDescription::asJsonObject() const {
    QJsonObject obj;
    if (m_s_billingentityinternal_description1_isSet) {
        obj.insert(QString("sBillingentityinternalDescription1"), ::OpenAPI::toJsonValue(m_s_billingentityinternal_description1));
    }
    if (m_s_billingentityinternal_description2_isSet) {
        obj.insert(QString("sBillingentityinternalDescription2"), ::OpenAPI::toJsonValue(m_s_billingentityinternal_description2));
    }
    return obj;
}

QString OAIMultilingual_BillingentityinternalDescription::getSBillingentityinternalDescription1() const {
    return m_s_billingentityinternal_description1;
}
void OAIMultilingual_BillingentityinternalDescription::setSBillingentityinternalDescription1(const QString &s_billingentityinternal_description1) {
    m_s_billingentityinternal_description1 = s_billingentityinternal_description1;
    m_s_billingentityinternal_description1_isSet = true;
}

bool OAIMultilingual_BillingentityinternalDescription::is_s_billingentityinternal_description1_Set() const{
    return m_s_billingentityinternal_description1_isSet;
}

bool OAIMultilingual_BillingentityinternalDescription::is_s_billingentityinternal_description1_Valid() const{
    return m_s_billingentityinternal_description1_isValid;
}

QString OAIMultilingual_BillingentityinternalDescription::getSBillingentityinternalDescription2() const {
    return m_s_billingentityinternal_description2;
}
void OAIMultilingual_BillingentityinternalDescription::setSBillingentityinternalDescription2(const QString &s_billingentityinternal_description2) {
    m_s_billingentityinternal_description2 = s_billingentityinternal_description2;
    m_s_billingentityinternal_description2_isSet = true;
}

bool OAIMultilingual_BillingentityinternalDescription::is_s_billingentityinternal_description2_Set() const{
    return m_s_billingentityinternal_description2_isSet;
}

bool OAIMultilingual_BillingentityinternalDescription::is_s_billingentityinternal_description2_Valid() const{
    return m_s_billingentityinternal_description2_isValid;
}

bool OAIMultilingual_BillingentityinternalDescription::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_billingentityinternal_description1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityinternal_description2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMultilingual_BillingentityinternalDescription::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI

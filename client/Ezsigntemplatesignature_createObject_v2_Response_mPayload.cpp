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

#include "Ezsigntemplatesignature_createObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatesignature_createObject_v2_Response_mPayload::Ezsigntemplatesignature_createObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatesignature_createObject_v2_Response_mPayload::Ezsigntemplatesignature_createObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplatesignature_createObject_v2_Response_mPayload::~Ezsigntemplatesignature_createObject_v2_Response_mPayload() {}

void Ezsigntemplatesignature_createObject_v2_Response_mPayload::initializeModel() {

    m_a_pki_ezsigntemplatesignature_id_isSet = false;
    m_a_pki_ezsigntemplatesignature_id_isValid = false;
}

void Ezsigntemplatesignature_createObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatesignature_createObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsigntemplatesignature_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_ezsigntemplatesignature_id, json[QString("a_pkiEzsigntemplatesignatureID")]);
    m_a_pki_ezsigntemplatesignature_id_isSet = !json[QString("a_pkiEzsigntemplatesignatureID")].isNull() && m_a_pki_ezsigntemplatesignature_id_isValid;
}

QString Ezsigntemplatesignature_createObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatesignature_createObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_ezsigntemplatesignature_id.size() > 0) {
        obj.insert(QString("a_pkiEzsigntemplatesignatureID"), ::Ezmaxapi::toJsonValue(m_a_pki_ezsigntemplatesignature_id));
    }
    return obj;
}

QList<qint32> Ezsigntemplatesignature_createObject_v2_Response_mPayload::getAPkiEzsigntemplatesignatureId() const {
    return m_a_pki_ezsigntemplatesignature_id;
}
void Ezsigntemplatesignature_createObject_v2_Response_mPayload::setAPkiEzsigntemplatesignatureId(const QList<qint32> &a_pki_ezsigntemplatesignature_id) {
    m_a_pki_ezsigntemplatesignature_id = a_pki_ezsigntemplatesignature_id;
    m_a_pki_ezsigntemplatesignature_id_isSet = true;
}

bool Ezsigntemplatesignature_createObject_v2_Response_mPayload::is_a_pki_ezsigntemplatesignature_id_Set() const{
    return m_a_pki_ezsigntemplatesignature_id_isSet;
}

bool Ezsigntemplatesignature_createObject_v2_Response_mPayload::is_a_pki_ezsigntemplatesignature_id_Valid() const{
    return m_a_pki_ezsigntemplatesignature_id_isValid;
}

bool Ezsigntemplatesignature_createObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_ezsigntemplatesignature_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatesignature_createObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsigntemplatesignature_id_isValid && true;
}

} // namespace Ezmaxapi

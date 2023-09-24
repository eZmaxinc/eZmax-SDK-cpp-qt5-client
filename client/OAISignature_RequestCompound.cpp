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

#include "OAISignature_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISignature_RequestCompound::OAISignature_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISignature_RequestCompound::OAISignature_RequestCompound() {
    this->initializeModel();
}

OAISignature_RequestCompound::~OAISignature_RequestCompound() {}

void OAISignature_RequestCompound::initializeModel() {

    m_pki_signature_id_isSet = false;
    m_pki_signature_id_isValid = false;

    m_t_signature_svg_isSet = false;
    m_t_signature_svg_isValid = false;
}

void OAISignature_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISignature_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_signature_id_isValid = ::OpenAPI::fromJsonValue(m_pki_signature_id, json[QString("pkiSignatureID")]);
    m_pki_signature_id_isSet = !json[QString("pkiSignatureID")].isNull() && m_pki_signature_id_isValid;

    m_t_signature_svg_isValid = ::OpenAPI::fromJsonValue(m_t_signature_svg, json[QString("tSignatureSvg")]);
    m_t_signature_svg_isSet = !json[QString("tSignatureSvg")].isNull() && m_t_signature_svg_isValid;
}

QString OAISignature_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISignature_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_signature_id_isSet) {
        obj.insert(QString("pkiSignatureID"), ::OpenAPI::toJsonValue(m_pki_signature_id));
    }
    if (m_t_signature_svg_isSet) {
        obj.insert(QString("tSignatureSvg"), ::OpenAPI::toJsonValue(m_t_signature_svg));
    }
    return obj;
}

qint32 OAISignature_RequestCompound::getPkiSignatureId() const {
    return m_pki_signature_id;
}
void OAISignature_RequestCompound::setPkiSignatureId(const qint32 &pki_signature_id) {
    m_pki_signature_id = pki_signature_id;
    m_pki_signature_id_isSet = true;
}

bool OAISignature_RequestCompound::is_pki_signature_id_Set() const{
    return m_pki_signature_id_isSet;
}

bool OAISignature_RequestCompound::is_pki_signature_id_Valid() const{
    return m_pki_signature_id_isValid;
}

QString OAISignature_RequestCompound::getTSignatureSvg() const {
    return m_t_signature_svg;
}
void OAISignature_RequestCompound::setTSignatureSvg(const QString &t_signature_svg) {
    m_t_signature_svg = t_signature_svg;
    m_t_signature_svg_isSet = true;
}

bool OAISignature_RequestCompound::is_t_signature_svg_Set() const{
    return m_t_signature_svg_isSet;
}

bool OAISignature_RequestCompound::is_t_signature_svg_Valid() const{
    return m_t_signature_svg_isValid;
}

bool OAISignature_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_signature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_signature_svg_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISignature_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_t_signature_svg_isValid && true;
}

} // namespace OpenAPI

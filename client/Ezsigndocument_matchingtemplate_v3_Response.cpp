/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigndocument_matchingtemplate_v3_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_matchingtemplate_v3_Response::Ezsigndocument_matchingtemplate_v3_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_matchingtemplate_v3_Response::Ezsigndocument_matchingtemplate_v3_Response() {
    this->initializeModel();
}

Ezsigndocument_matchingtemplate_v3_Response::~Ezsigndocument_matchingtemplate_v3_Response() {}

void Ezsigndocument_matchingtemplate_v3_Response::initializeModel() {

    m_pki_ezsigntemplate_id_isSet = false;
    m_pki_ezsigntemplate_id_isValid = false;

    m_pki_ezsigntemplateglobal_id_isSet = false;
    m_pki_ezsigntemplateglobal_id_isValid = false;
}

void Ezsigndocument_matchingtemplate_v3_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_matchingtemplate_v3_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplate_id, json[QString("pkiEzsigntemplateID")]);
    m_pki_ezsigntemplate_id_isSet = !json[QString("pkiEzsigntemplateID")].isNull() && m_pki_ezsigntemplate_id_isValid;

    m_pki_ezsigntemplateglobal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplateglobal_id, json[QString("pkiEzsigntemplateglobalID")]);
    m_pki_ezsigntemplateglobal_id_isSet = !json[QString("pkiEzsigntemplateglobalID")].isNull() && m_pki_ezsigntemplateglobal_id_isValid;
}

QString Ezsigndocument_matchingtemplate_v3_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_matchingtemplate_v3_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplate_id));
    }
    if (m_pki_ezsigntemplateglobal_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateglobalID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplateglobal_id));
    }
    return obj;
}

qint32 Ezsigndocument_matchingtemplate_v3_Response::getPkiEzsigntemplateId() const {
    return m_pki_ezsigntemplate_id;
}
void Ezsigndocument_matchingtemplate_v3_Response::setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id) {
    m_pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    m_pki_ezsigntemplate_id_isSet = true;
}

bool Ezsigndocument_matchingtemplate_v3_Response::is_pki_ezsigntemplate_id_Set() const{
    return m_pki_ezsigntemplate_id_isSet;
}

bool Ezsigndocument_matchingtemplate_v3_Response::is_pki_ezsigntemplate_id_Valid() const{
    return m_pki_ezsigntemplate_id_isValid;
}

qint32 Ezsigndocument_matchingtemplate_v3_Response::getPkiEzsigntemplateglobalId() const {
    return m_pki_ezsigntemplateglobal_id;
}
void Ezsigndocument_matchingtemplate_v3_Response::setPkiEzsigntemplateglobalId(const qint32 &pki_ezsigntemplateglobal_id) {
    m_pki_ezsigntemplateglobal_id = pki_ezsigntemplateglobal_id;
    m_pki_ezsigntemplateglobal_id_isSet = true;
}

bool Ezsigndocument_matchingtemplate_v3_Response::is_pki_ezsigntemplateglobal_id_Set() const{
    return m_pki_ezsigntemplateglobal_id_isSet;
}

bool Ezsigndocument_matchingtemplate_v3_Response::is_pki_ezsigntemplateglobal_id_Valid() const{
    return m_pki_ezsigntemplateglobal_id_isValid;
}

bool Ezsigndocument_matchingtemplate_v3_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_ezsigntemplateglobal_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_matchingtemplate_v3_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi

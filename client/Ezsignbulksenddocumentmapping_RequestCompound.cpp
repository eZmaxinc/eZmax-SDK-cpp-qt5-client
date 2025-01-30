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

#include "Ezsignbulksenddocumentmapping_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksenddocumentmapping_RequestCompound::Ezsignbulksenddocumentmapping_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksenddocumentmapping_RequestCompound::Ezsignbulksenddocumentmapping_RequestCompound() {
    this->initializeModel();
}

Ezsignbulksenddocumentmapping_RequestCompound::~Ezsignbulksenddocumentmapping_RequestCompound() {}

void Ezsignbulksenddocumentmapping_RequestCompound::initializeModel() {

    m_pki_ezsignbulksenddocumentmapping_id_isSet = false;
    m_pki_ezsignbulksenddocumentmapping_id_isValid = false;

    m_fki_ezsignbulksend_id_isSet = false;
    m_fki_ezsignbulksend_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;
}

void Ezsignbulksenddocumentmapping_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksenddocumentmapping_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksenddocumentmapping_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignbulksenddocumentmapping_id, json[QString("pkiEzsignbulksenddocumentmappingID")]);
    m_pki_ezsignbulksenddocumentmapping_id_isSet = !json[QString("pkiEzsignbulksenddocumentmappingID")].isNull() && m_pki_ezsignbulksenddocumentmapping_id_isValid;

    m_fki_ezsignbulksend_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignbulksend_id, json[QString("fkiEzsignbulksendID")]);
    m_fki_ezsignbulksend_id_isSet = !json[QString("fkiEzsignbulksendID")].isNull() && m_fki_ezsignbulksend_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;
}

QString Ezsignbulksenddocumentmapping_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksenddocumentmapping_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksenddocumentmapping_id_isSet) {
        obj.insert(QString("pkiEzsignbulksenddocumentmappingID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignbulksenddocumentmapping_id));
    }
    if (m_fki_ezsignbulksend_id_isSet) {
        obj.insert(QString("fkiEzsignbulksendID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignbulksend_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplate_id));
    }
    return obj;
}

qint32 Ezsignbulksenddocumentmapping_RequestCompound::getPkiEzsignbulksenddocumentmappingId() const {
    return m_pki_ezsignbulksenddocumentmapping_id;
}
void Ezsignbulksenddocumentmapping_RequestCompound::setPkiEzsignbulksenddocumentmappingId(const qint32 &pki_ezsignbulksenddocumentmapping_id) {
    m_pki_ezsignbulksenddocumentmapping_id = pki_ezsignbulksenddocumentmapping_id;
    m_pki_ezsignbulksenddocumentmapping_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::is_pki_ezsignbulksenddocumentmapping_id_Set() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isSet;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::is_pki_ezsignbulksenddocumentmapping_id_Valid() const{
    return m_pki_ezsignbulksenddocumentmapping_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_RequestCompound::getFkiEzsignbulksendId() const {
    return m_fki_ezsignbulksend_id;
}
void Ezsignbulksenddocumentmapping_RequestCompound::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    m_fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    m_fki_ezsignbulksend_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_RequestCompound::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsignbulksenddocumentmapping_RequestCompound::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 Ezsignbulksenddocumentmapping_RequestCompound::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void Ezsignbulksenddocumentmapping_RequestCompound::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksenddocumentmapping_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksenddocumentmapping_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignbulksend_id_isValid && true;
}

} // namespace Ezmaxapi

/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignformfieldgroupsigner_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfieldgroupsigner_RequestCompound::OAIEzsignformfieldgroupsigner_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfieldgroupsigner_RequestCompound::OAIEzsignformfieldgroupsigner_RequestCompound() {
    this->initializeModel();
}

OAIEzsignformfieldgroupsigner_RequestCompound::~OAIEzsignformfieldgroupsigner_RequestCompound() {}

void OAIEzsignformfieldgroupsigner_RequestCompound::initializeModel() {

    m_pki_ezsignformfieldgroupsigner_id_isSet = false;
    m_pki_ezsignformfieldgroupsigner_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;
}

void OAIEzsignformfieldgroupsigner_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfieldgroupsigner_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignformfieldgroupsigner_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignformfieldgroupsigner_id, json[QString("pkiEzsignformfieldgroupsignerID")]);
    m_pki_ezsignformfieldgroupsigner_id_isSet = !json[QString("pkiEzsignformfieldgroupsignerID")].isNull() && m_pki_ezsignformfieldgroupsigner_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString OAIEzsignformfieldgroupsigner_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfieldgroupsigner_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignformfieldgroupsigner_id_isSet) {
        obj.insert(QString("pkiEzsignformfieldgroupsignerID"), ::OpenAPI::toJsonValue(pki_ezsignformfieldgroupsigner_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

qint32 OAIEzsignformfieldgroupsigner_RequestCompound::getPkiEzsignformfieldgroupsignerId() const {
    return pki_ezsignformfieldgroupsigner_id;
}
void OAIEzsignformfieldgroupsigner_RequestCompound::setPkiEzsignformfieldgroupsignerId(const qint32 &pki_ezsignformfieldgroupsigner_id) {
    this->pki_ezsignformfieldgroupsigner_id = pki_ezsignformfieldgroupsigner_id;
    this->m_pki_ezsignformfieldgroupsigner_id_isSet = true;
}

bool OAIEzsignformfieldgroupsigner_RequestCompound::is_pki_ezsignformfieldgroupsigner_id_Set() const{
    return m_pki_ezsignformfieldgroupsigner_id_isSet;
}

bool OAIEzsignformfieldgroupsigner_RequestCompound::is_pki_ezsignformfieldgroupsigner_id_Valid() const{
    return m_pki_ezsignformfieldgroupsigner_id_isValid;
}

qint32 OAIEzsignformfieldgroupsigner_RequestCompound::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAIEzsignformfieldgroupsigner_RequestCompound::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignformfieldgroupsigner_RequestCompound::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignformfieldgroupsigner_RequestCompound::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

bool OAIEzsignformfieldgroupsigner_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignformfieldgroupsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignformfieldgroupsigner_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace OpenAPI

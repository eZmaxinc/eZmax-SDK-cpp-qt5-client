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

#include "OAIEzsignformfieldgroupsigner_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfieldgroupsigner_ResponseCompound::OAIEzsignformfieldgroupsigner_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfieldgroupsigner_ResponseCompound::OAIEzsignformfieldgroupsigner_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignformfieldgroupsigner_ResponseCompound::~OAIEzsignformfieldgroupsigner_ResponseCompound() {}

void OAIEzsignformfieldgroupsigner_ResponseCompound::initializeModel() {

    m_pki_ezsignformfieldgroupsigner_id_isSet = false;
    m_pki_ezsignformfieldgroupsigner_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;
}

void OAIEzsignformfieldgroupsigner_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfieldgroupsigner_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignformfieldgroupsigner_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsignformfieldgroupsigner_id, json[QString("pkiEzsignformfieldgroupsignerID")]);
    m_pki_ezsignformfieldgroupsigner_id_isSet = !json[QString("pkiEzsignformfieldgroupsignerID")].isNull() && m_pki_ezsignformfieldgroupsigner_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString OAIEzsignformfieldgroupsigner_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfieldgroupsigner_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignformfieldgroupsigner_id_isSet) {
        obj.insert(QString("pkiEzsignformfieldgroupsignerID"), ::OpenAPI::toJsonValue(m_pki_ezsignformfieldgroupsigner_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(m_fki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

qint32 OAIEzsignformfieldgroupsigner_ResponseCompound::getPkiEzsignformfieldgroupsignerId() const {
    return m_pki_ezsignformfieldgroupsigner_id;
}
void OAIEzsignformfieldgroupsigner_ResponseCompound::setPkiEzsignformfieldgroupsignerId(const qint32 &pki_ezsignformfieldgroupsigner_id) {
    m_pki_ezsignformfieldgroupsigner_id = pki_ezsignformfieldgroupsigner_id;
    m_pki_ezsignformfieldgroupsigner_id_isSet = true;
}

bool OAIEzsignformfieldgroupsigner_ResponseCompound::is_pki_ezsignformfieldgroupsigner_id_Set() const{
    return m_pki_ezsignformfieldgroupsigner_id_isSet;
}

bool OAIEzsignformfieldgroupsigner_ResponseCompound::is_pki_ezsignformfieldgroupsigner_id_Valid() const{
    return m_pki_ezsignformfieldgroupsigner_id_isValid;
}

qint32 OAIEzsignformfieldgroupsigner_ResponseCompound::getFkiEzsignfoldersignerassociationId() const {
    return m_fki_ezsignfoldersignerassociation_id;
}
void OAIEzsignformfieldgroupsigner_ResponseCompound::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    m_fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignformfieldgroupsigner_ResponseCompound::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignformfieldgroupsigner_ResponseCompound::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

bool OAIEzsignformfieldgroupsigner_ResponseCompound::isSet() const {
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

bool OAIEzsignformfieldgroupsigner_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignformfieldgroupsigner_id_isValid && m_fki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace OpenAPI

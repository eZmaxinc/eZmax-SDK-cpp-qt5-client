/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfoldersignerassociation_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_ResponseCompound::OAIEzsignfoldersignerassociation_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_ResponseCompound::OAIEzsignfoldersignerassociation_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_ResponseCompound::~OAIEzsignfoldersignerassociation_ResponseCompound() {}

void OAIEzsignfoldersignerassociation_ResponseCompound::initializeModel() {

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;

    m_obj_ezsignsigner_isSet = false;
    m_obj_ezsignsigner_isValid = false;

    m_pki_ezsignfoldersignerassociation_id_isSet = false;
    m_pki_ezsignfoldersignerassociation_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_b_ezsignfoldersignerassociation_receivecopy_isSet = false;
    m_b_ezsignfoldersignerassociation_receivecopy_isValid = false;
}

void OAIEzsignfoldersignerassociation_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_obj_user_isValid = ::OpenAPI::fromJsonValue(obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;

    m_obj_ezsignsigner_isValid = ::OpenAPI::fromJsonValue(obj_ezsignsigner, json[QString("objEzsignsigner")]);
    m_obj_ezsignsigner_isSet = !json[QString("objEzsignsigner")].isNull() && m_obj_ezsignsigner_isValid;

    m_pki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfoldersignerassociation_id, json[QString("pkiEzsignfoldersignerassociationID")]);
    m_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("pkiEzsignfoldersignerassociationID")].isNull() && m_pki_ezsignfoldersignerassociation_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_b_ezsignfoldersignerassociation_receivecopy_isValid = ::OpenAPI::fromJsonValue(b_ezsignfoldersignerassociation_receivecopy, json[QString("bEzsignfoldersignerassociationReceivecopy")]);
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = !json[QString("bEzsignfoldersignerassociationReceivecopy")].isNull() && m_b_ezsignfoldersignerassociation_receivecopy_isValid;
}

QString OAIEzsignfoldersignerassociation_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (obj_user.isSet()) {
        obj.insert(QString("objUser"), ::OpenAPI::toJsonValue(obj_user));
    }
    if (obj_ezsignsigner.isSet()) {
        obj.insert(QString("objEzsignsigner"), ::OpenAPI::toJsonValue(obj_ezsignsigner));
    }
    if (m_pki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("pkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(pki_ezsignfoldersignerassociation_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationReceivecopy"), ::OpenAPI::toJsonValue(b_ezsignfoldersignerassociation_receivecopy));
    }
    return obj;
}

OAIEzsignfoldersignerassociation_ResponseCompound_User OAIEzsignfoldersignerassociation_ResponseCompound::getObjUser() const {
    return obj_user;
}
void OAIEzsignfoldersignerassociation_ResponseCompound::setObjUser(const OAIEzsignfoldersignerassociation_ResponseCompound_User &obj_user) {
    this->obj_user = obj_user;
    this->m_obj_user_isSet = true;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

OAIEzsignsigner_ResponseCompound OAIEzsignfoldersignerassociation_ResponseCompound::getObjEzsignsigner() const {
    return obj_ezsignsigner;
}
void OAIEzsignfoldersignerassociation_ResponseCompound::setObjEzsignsigner(const OAIEzsignsigner_ResponseCompound &obj_ezsignsigner) {
    this->obj_ezsignsigner = obj_ezsignsigner;
    this->m_obj_ezsignsigner_isSet = true;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_obj_ezsignsigner_Set() const{
    return m_obj_ezsignsigner_isSet;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_obj_ezsignsigner_Valid() const{
    return m_obj_ezsignsigner_isValid;
}

qint32 OAIEzsignfoldersignerassociation_ResponseCompound::getPkiEzsignfoldersignerassociationId() const {
    return pki_ezsignfoldersignerassociation_id;
}
void OAIEzsignfoldersignerassociation_ResponseCompound::setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id) {
    this->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    this->m_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_pki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_pki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_ResponseCompound::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAIEzsignfoldersignerassociation_ResponseCompound::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::isBEzsignfoldersignerassociationReceivecopy() const {
    return b_ezsignfoldersignerassociation_receivecopy;
}
void OAIEzsignfoldersignerassociation_ResponseCompound::setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy) {
    this->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    this->m_b_ezsignfoldersignerassociation_receivecopy_isSet = true;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_b_ezsignfoldersignerassociation_receivecopy_Set() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isSet;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::is_b_ezsignfoldersignerassociation_receivecopy_Valid() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isValid;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezsignsigner.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfoldersignerassociation_id_isValid && m_fki_ezsignfolder_id_isValid && m_b_ezsignfoldersignerassociation_receivecopy_isValid && true;
}

} // namespace OpenAPI

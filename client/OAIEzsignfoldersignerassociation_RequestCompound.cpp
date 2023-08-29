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

#include "OAIEzsignfoldersignerassociation_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_RequestCompound::OAIEzsignfoldersignerassociation_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_RequestCompound::OAIEzsignfoldersignerassociation_RequestCompound() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_RequestCompound::~OAIEzsignfoldersignerassociation_RequestCompound() {}

void OAIEzsignfoldersignerassociation_RequestCompound::initializeModel() {

    m_pki_ezsignfoldersignerassociation_id_isSet = false;
    m_pki_ezsignfoldersignerassociation_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_ezsignsignergroup_id_isSet = false;
    m_fki_ezsignsignergroup_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_b_ezsignfoldersignerassociation_receivecopy_isSet = false;
    m_b_ezsignfoldersignerassociation_receivecopy_isValid = false;

    m_t_ezsignfoldersignerassociation_message_isSet = false;
    m_t_ezsignfoldersignerassociation_message_isValid = false;

    m_obj_ezsignsigner_isSet = false;
    m_obj_ezsignsigner_isValid = false;
}

void OAIEzsignfoldersignerassociation_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsignfoldersignerassociation_id, json[QString("pkiEzsignfoldersignerassociationID")]);
    m_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("pkiEzsignfoldersignerassociationID")].isNull() && m_pki_ezsignfoldersignerassociation_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_ezsignsignergroup_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsignsignergroup_id, json[QString("fkiEzsignsignergroupID")]);
    m_fki_ezsignsignergroup_id_isSet = !json[QString("fkiEzsignsignergroupID")].isNull() && m_fki_ezsignsignergroup_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_b_ezsignfoldersignerassociation_receivecopy_isValid = ::OpenAPI::fromJsonValue(m_b_ezsignfoldersignerassociation_receivecopy, json[QString("bEzsignfoldersignerassociationReceivecopy")]);
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = !json[QString("bEzsignfoldersignerassociationReceivecopy")].isNull() && m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    m_t_ezsignfoldersignerassociation_message_isValid = ::OpenAPI::fromJsonValue(m_t_ezsignfoldersignerassociation_message, json[QString("tEzsignfoldersignerassociationMessage")]);
    m_t_ezsignfoldersignerassociation_message_isSet = !json[QString("tEzsignfoldersignerassociationMessage")].isNull() && m_t_ezsignfoldersignerassociation_message_isValid;

    m_obj_ezsignsigner_isValid = ::OpenAPI::fromJsonValue(m_obj_ezsignsigner, json[QString("objEzsignsigner")]);
    m_obj_ezsignsigner_isSet = !json[QString("objEzsignsigner")].isNull() && m_obj_ezsignsigner_isValid;
}

QString OAIEzsignfoldersignerassociation_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("pkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(m_pki_ezsignfoldersignerassociation_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(m_fki_user_id));
    }
    if (m_fki_ezsignsignergroup_id_isSet) {
        obj.insert(QString("fkiEzsignsignergroupID"), ::OpenAPI::toJsonValue(m_fki_ezsignsignergroup_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(m_fki_ezsignfolder_id));
    }
    if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationReceivecopy"), ::OpenAPI::toJsonValue(m_b_ezsignfoldersignerassociation_receivecopy));
    }
    if (m_t_ezsignfoldersignerassociation_message_isSet) {
        obj.insert(QString("tEzsignfoldersignerassociationMessage"), ::OpenAPI::toJsonValue(m_t_ezsignfoldersignerassociation_message));
    }
    if (m_obj_ezsignsigner.isSet()) {
        obj.insert(QString("objEzsignsigner"), ::OpenAPI::toJsonValue(m_obj_ezsignsigner));
    }
    return obj;
}

qint32 OAIEzsignfoldersignerassociation_RequestCompound::getPkiEzsignfoldersignerassociationId() const {
    return m_pki_ezsignfoldersignerassociation_id;
}
void OAIEzsignfoldersignerassociation_RequestCompound::setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id) {
    m_pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    m_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_pki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_pki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_RequestCompound::getFkiUserId() const {
    return m_fki_user_id;
}
void OAIEzsignfoldersignerassociation_RequestCompound::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_RequestCompound::getFkiEzsignsignergroupId() const {
    return m_fki_ezsignsignergroup_id;
}
void OAIEzsignfoldersignerassociation_RequestCompound::setFkiEzsignsignergroupId(const qint32 &fki_ezsignsignergroup_id) {
    m_fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    m_fki_ezsignsignergroup_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_fki_ezsignsignergroup_id_Set() const{
    return m_fki_ezsignsignergroup_id_isSet;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_fki_ezsignsignergroup_id_Valid() const{
    return m_fki_ezsignsignergroup_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_RequestCompound::getFkiEzsignfolderId() const {
    return m_fki_ezsignfolder_id;
}
void OAIEzsignfoldersignerassociation_RequestCompound::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    m_fki_ezsignfolder_id = fki_ezsignfolder_id;
    m_fki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::isBEzsignfoldersignerassociationReceivecopy() const {
    return m_b_ezsignfoldersignerassociation_receivecopy;
}
void OAIEzsignfoldersignerassociation_RequestCompound::setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy) {
    m_b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = true;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_b_ezsignfoldersignerassociation_receivecopy_Set() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isSet;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_b_ezsignfoldersignerassociation_receivecopy_Valid() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isValid;
}

QString OAIEzsignfoldersignerassociation_RequestCompound::getTEzsignfoldersignerassociationMessage() const {
    return m_t_ezsignfoldersignerassociation_message;
}
void OAIEzsignfoldersignerassociation_RequestCompound::setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message) {
    m_t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    m_t_ezsignfoldersignerassociation_message_isSet = true;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_t_ezsignfoldersignerassociation_message_Set() const{
    return m_t_ezsignfoldersignerassociation_message_isSet;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_t_ezsignfoldersignerassociation_message_Valid() const{
    return m_t_ezsignfoldersignerassociation_message_isValid;
}

OAIEzsignsigner_RequestCompound OAIEzsignfoldersignerassociation_RequestCompound::getObjEzsignsigner() const {
    return m_obj_ezsignsigner;
}
void OAIEzsignfoldersignerassociation_RequestCompound::setObjEzsignsigner(const OAIEzsignsigner_RequestCompound &obj_ezsignsigner) {
    m_obj_ezsignsigner = obj_ezsignsigner;
    m_obj_ezsignsigner_isSet = true;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_obj_ezsignsigner_Set() const{
    return m_obj_ezsignsigner_isSet;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::is_obj_ezsignsigner_Valid() const{
    return m_obj_ezsignsigner_isValid;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsignergroup_id_isSet) {
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

        if (m_t_ezsignfoldersignerassociation_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsignsigner.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && true;
}

} // namespace OpenAPI

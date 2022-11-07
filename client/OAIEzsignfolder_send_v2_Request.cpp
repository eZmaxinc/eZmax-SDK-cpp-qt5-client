/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_send_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_send_v2_Request::OAIEzsignfolder_send_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_send_v2_Request::OAIEzsignfolder_send_v2_Request() {
    this->initializeModel();
}

OAIEzsignfolder_send_v2_Request::~OAIEzsignfolder_send_v2_Request() {}

void OAIEzsignfolder_send_v2_Request::initializeModel() {

    m_t_ezsignfolder_message_isSet = false;
    m_t_ezsignfolder_message_isValid = false;

    m_a_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_a_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_a_obj_ezsignfoldersignerassociationmessage_isSet = false;
    m_a_obj_ezsignfoldersignerassociationmessage_isValid = false;
}

void OAIEzsignfolder_send_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_send_v2_Request::fromJsonObject(QJsonObject json) {

    m_t_ezsignfolder_message_isValid = ::OpenAPI::fromJsonValue(t_ezsignfolder_message, json[QString("tEzsignfolderMessage")]);
    m_t_ezsignfolder_message_isSet = !json[QString("tEzsignfolderMessage")].isNull() && m_t_ezsignfolder_message_isValid;

    m_a_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(a_fki_ezsignfoldersignerassociation_id, json[QString("a_fkiEzsignfoldersignerassociationID")]);
    m_a_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("a_fkiEzsignfoldersignerassociationID")].isNull() && m_a_fki_ezsignfoldersignerassociation_id_isValid;

    m_a_obj_ezsignfoldersignerassociationmessage_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldersignerassociationmessage, json[QString("a_objEzsignfoldersignerassociationmessage")]);
    m_a_obj_ezsignfoldersignerassociationmessage_isSet = !json[QString("a_objEzsignfoldersignerassociationmessage")].isNull() && m_a_obj_ezsignfoldersignerassociationmessage_isValid;
}

QString OAIEzsignfolder_send_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_send_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_t_ezsignfolder_message_isSet) {
        obj.insert(QString("tEzsignfolderMessage"), ::OpenAPI::toJsonValue(t_ezsignfolder_message));
    }
    if (a_fki_ezsignfoldersignerassociation_id.size() > 0) {
        obj.insert(QString("a_fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(a_fki_ezsignfoldersignerassociation_id));
    }
    if (a_obj_ezsignfoldersignerassociationmessage.size() > 0) {
        obj.insert(QString("a_objEzsignfoldersignerassociationmessage"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldersignerassociationmessage));
    }
    return obj;
}

QString OAIEzsignfolder_send_v2_Request::getTEzsignfolderMessage() const {
    return t_ezsignfolder_message;
}
void OAIEzsignfolder_send_v2_Request::setTEzsignfolderMessage(const QString &t_ezsignfolder_message) {
    this->t_ezsignfolder_message = t_ezsignfolder_message;
    this->m_t_ezsignfolder_message_isSet = true;
}

bool OAIEzsignfolder_send_v2_Request::is_t_ezsignfolder_message_Set() const{
    return m_t_ezsignfolder_message_isSet;
}

bool OAIEzsignfolder_send_v2_Request::is_t_ezsignfolder_message_Valid() const{
    return m_t_ezsignfolder_message_isValid;
}

QList<qint32> OAIEzsignfolder_send_v2_Request::getAFkiEzsignfoldersignerassociationId() const {
    return a_fki_ezsignfoldersignerassociation_id;
}
void OAIEzsignfolder_send_v2_Request::setAFkiEzsignfoldersignerassociationId(const QList<qint32> &a_fki_ezsignfoldersignerassociation_id) {
    this->a_fki_ezsignfoldersignerassociation_id = a_fki_ezsignfoldersignerassociation_id;
    this->m_a_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignfolder_send_v2_Request::is_a_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_a_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignfolder_send_v2_Request::is_a_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_a_fki_ezsignfoldersignerassociation_id_isValid;
}

QList<OAICustom_Ezsignfoldersignerassociationmessage_Request> OAIEzsignfolder_send_v2_Request::getAObjEzsignfoldersignerassociationmessage() const {
    return a_obj_ezsignfoldersignerassociationmessage;
}
void OAIEzsignfolder_send_v2_Request::setAObjEzsignfoldersignerassociationmessage(const QList<OAICustom_Ezsignfoldersignerassociationmessage_Request> &a_obj_ezsignfoldersignerassociationmessage) {
    this->a_obj_ezsignfoldersignerassociationmessage = a_obj_ezsignfoldersignerassociationmessage;
    this->m_a_obj_ezsignfoldersignerassociationmessage_isSet = true;
}

bool OAIEzsignfolder_send_v2_Request::is_a_obj_ezsignfoldersignerassociationmessage_Set() const{
    return m_a_obj_ezsignfoldersignerassociationmessage_isSet;
}

bool OAIEzsignfolder_send_v2_Request::is_a_obj_ezsignfoldersignerassociationmessage_Valid() const{
    return m_a_obj_ezsignfoldersignerassociationmessage_isValid;
}

bool OAIEzsignfolder_send_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_t_ezsignfolder_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_fki_ezsignfoldersignerassociation_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignfoldersignerassociationmessage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_send_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_t_ezsignfolder_message_isValid && m_a_fki_ezsignfoldersignerassociation_id_isValid && m_a_obj_ezsignfoldersignerassociationmessage_isValid && true;
}

} // namespace OpenAPI

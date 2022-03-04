/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_Ezsignfoldersignerassociationstatus_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Ezsignfoldersignerassociationstatus_Response::OAICustom_Ezsignfoldersignerassociationstatus_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Ezsignfoldersignerassociationstatus_Response::OAICustom_Ezsignfoldersignerassociationstatus_Response() {
    this->initializeModel();
}

OAICustom_Ezsignfoldersignerassociationstatus_Response::~OAICustom_Ezsignfoldersignerassociationstatus_Response() {}

void OAICustom_Ezsignfoldersignerassociationstatus_Response::initializeModel() {

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_s_ezsignfoldersignerassociationstatus_lastname_isSet = false;
    m_s_ezsignfoldersignerassociationstatus_lastname_isValid = false;

    m_s_ezsignfoldersignerassociationstatus_firstname_isSet = false;
    m_s_ezsignfoldersignerassociationstatus_firstname_isValid = false;

    m_a_obj_ezsignsignaturestatus_isSet = false;
    m_a_obj_ezsignsignaturestatus_isValid = false;
}

void OAICustom_Ezsignfoldersignerassociationstatus_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Ezsignfoldersignerassociationstatus_Response::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_s_ezsignfoldersignerassociationstatus_lastname_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldersignerassociationstatus_lastname, json[QString("sEzsignfoldersignerassociationstatusLastname")]);
    m_s_ezsignfoldersignerassociationstatus_lastname_isSet = !json[QString("sEzsignfoldersignerassociationstatusLastname")].isNull() && m_s_ezsignfoldersignerassociationstatus_lastname_isValid;

    m_s_ezsignfoldersignerassociationstatus_firstname_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldersignerassociationstatus_firstname, json[QString("sEzsignfoldersignerassociationstatusFirstname")]);
    m_s_ezsignfoldersignerassociationstatus_firstname_isSet = !json[QString("sEzsignfoldersignerassociationstatusFirstname")].isNull() && m_s_ezsignfoldersignerassociationstatus_firstname_isValid;

    m_a_obj_ezsignsignaturestatus_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignsignaturestatus, json[QString("a_objEzsignsignaturestatus")]);
    m_a_obj_ezsignsignaturestatus_isSet = !json[QString("a_objEzsignsignaturestatus")].isNull() && m_a_obj_ezsignsignaturestatus_isValid;
}

QString OAICustom_Ezsignfoldersignerassociationstatus_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Ezsignfoldersignerassociationstatus_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    if (m_s_ezsignfoldersignerassociationstatus_lastname_isSet) {
        obj.insert(QString("sEzsignfoldersignerassociationstatusLastname"), ::OpenAPI::toJsonValue(s_ezsignfoldersignerassociationstatus_lastname));
    }
    if (m_s_ezsignfoldersignerassociationstatus_firstname_isSet) {
        obj.insert(QString("sEzsignfoldersignerassociationstatusFirstname"), ::OpenAPI::toJsonValue(s_ezsignfoldersignerassociationstatus_firstname));
    }
    if (a_obj_ezsignsignaturestatus.size() > 0) {
        obj.insert(QString("a_objEzsignsignaturestatus"), ::OpenAPI::toJsonValue(a_obj_ezsignsignaturestatus));
    }
    return obj;
}

qint32 OAICustom_Ezsignfoldersignerassociationstatus_Response::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAICustom_Ezsignfoldersignerassociationstatus_Response::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString OAICustom_Ezsignfoldersignerassociationstatus_Response::getSEzsignfoldersignerassociationstatusLastname() const {
    return s_ezsignfoldersignerassociationstatus_lastname;
}
void OAICustom_Ezsignfoldersignerassociationstatus_Response::setSEzsignfoldersignerassociationstatusLastname(const QString &s_ezsignfoldersignerassociationstatus_lastname) {
    this->s_ezsignfoldersignerassociationstatus_lastname = s_ezsignfoldersignerassociationstatus_lastname;
    this->m_s_ezsignfoldersignerassociationstatus_lastname_isSet = true;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::is_s_ezsignfoldersignerassociationstatus_lastname_Set() const{
    return m_s_ezsignfoldersignerassociationstatus_lastname_isSet;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::is_s_ezsignfoldersignerassociationstatus_lastname_Valid() const{
    return m_s_ezsignfoldersignerassociationstatus_lastname_isValid;
}

QString OAICustom_Ezsignfoldersignerassociationstatus_Response::getSEzsignfoldersignerassociationstatusFirstname() const {
    return s_ezsignfoldersignerassociationstatus_firstname;
}
void OAICustom_Ezsignfoldersignerassociationstatus_Response::setSEzsignfoldersignerassociationstatusFirstname(const QString &s_ezsignfoldersignerassociationstatus_firstname) {
    this->s_ezsignfoldersignerassociationstatus_firstname = s_ezsignfoldersignerassociationstatus_firstname;
    this->m_s_ezsignfoldersignerassociationstatus_firstname_isSet = true;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::is_s_ezsignfoldersignerassociationstatus_firstname_Set() const{
    return m_s_ezsignfoldersignerassociationstatus_firstname_isSet;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::is_s_ezsignfoldersignerassociationstatus_firstname_Valid() const{
    return m_s_ezsignfoldersignerassociationstatus_firstname_isValid;
}

QList<OAICustom_Ezsignsignaturestatus_Response> OAICustom_Ezsignfoldersignerassociationstatus_Response::getAObjEzsignsignaturestatus() const {
    return a_obj_ezsignsignaturestatus;
}
void OAICustom_Ezsignfoldersignerassociationstatus_Response::setAObjEzsignsignaturestatus(const QList<OAICustom_Ezsignsignaturestatus_Response> &a_obj_ezsignsignaturestatus) {
    this->a_obj_ezsignsignaturestatus = a_obj_ezsignsignaturestatus;
    this->m_a_obj_ezsignsignaturestatus_isSet = true;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::is_a_obj_ezsignsignaturestatus_Set() const{
    return m_a_obj_ezsignsignaturestatus_isSet;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::is_a_obj_ezsignsignaturestatus_Valid() const{
    return m_a_obj_ezsignsignaturestatus_isValid;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldersignerassociationstatus_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldersignerassociationstatus_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignsignaturestatus.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Ezsignfoldersignerassociationstatus_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldersignerassociation_id_isValid && m_s_ezsignfoldersignerassociationstatus_lastname_isValid && m_s_ezsignfoldersignerassociationstatus_firstname_isValid && m_a_obj_ezsignsignaturestatus_isValid && true;
}

} // namespace OpenAPI

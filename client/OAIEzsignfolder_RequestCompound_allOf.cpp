/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.47
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_RequestCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_RequestCompound_allOf::OAIEzsignfolder_RequestCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_RequestCompound_allOf::OAIEzsignfolder_RequestCompound_allOf() {
    this->initializeModel();
}

OAIEzsignfolder_RequestCompound_allOf::~OAIEzsignfolder_RequestCompound_allOf() {}

void OAIEzsignfolder_RequestCompound_allOf::initializeModel() {

    m_a_ezsignfoldersignerassociation_isSet = false;
    m_a_ezsignfoldersignerassociation_isValid = false;
}

void OAIEzsignfolder_RequestCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_RequestCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(a_ezsignfoldersignerassociation, json[QString("a_Ezsignfoldersignerassociation")]);
    m_a_ezsignfoldersignerassociation_isSet = !json[QString("a_Ezsignfoldersignerassociation")].isNull() && m_a_ezsignfoldersignerassociation_isValid;
}

QString OAIEzsignfolder_RequestCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_RequestCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_ezsignfoldersignerassociation.size() > 0) {
        obj.insert(QString("a_Ezsignfoldersignerassociation"), ::OpenAPI::toJsonValue(a_ezsignfoldersignerassociation));
    }
    return obj;
}

QList<OAIEzsignfoldersignerassociation_Request> OAIEzsignfolder_RequestCompound_allOf::getAEzsignfoldersignerassociation() const {
    return a_ezsignfoldersignerassociation;
}
void OAIEzsignfolder_RequestCompound_allOf::setAEzsignfoldersignerassociation(const QList<OAIEzsignfoldersignerassociation_Request> &a_ezsignfoldersignerassociation) {
    this->a_ezsignfoldersignerassociation = a_ezsignfoldersignerassociation;
    this->m_a_ezsignfoldersignerassociation_isSet = true;
}

bool OAIEzsignfolder_RequestCompound_allOf::is_a_ezsignfoldersignerassociation_Set() const{
    return m_a_ezsignfoldersignerassociation_isSet;
}

bool OAIEzsignfolder_RequestCompound_allOf::is_a_ezsignfoldersignerassociation_Valid() const{
    return m_a_ezsignfoldersignerassociation_isValid;
}

bool OAIEzsignfolder_RequestCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_ezsignfoldersignerassociation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_RequestCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_ezsignfoldersignerassociation_isValid && true;
}

} // namespace OpenAPI

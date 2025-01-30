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

#include "Ezsignfoldersignerassociation_reassign_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfoldersignerassociation_reassign_v1_Request::Ezsignfoldersignerassociation_reassign_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfoldersignerassociation_reassign_v1_Request::Ezsignfoldersignerassociation_reassign_v1_Request() {
    this->initializeModel();
}

Ezsignfoldersignerassociation_reassign_v1_Request::~Ezsignfoldersignerassociation_reassign_v1_Request() {}

void Ezsignfoldersignerassociation_reassign_v1_Request::initializeModel() {

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;
}

void Ezsignfoldersignerassociation_reassign_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfoldersignerassociation_reassign_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString Ezsignfoldersignerassociation_reassign_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfoldersignerassociation_reassign_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

qint32 Ezsignfoldersignerassociation_reassign_v1_Request::getFkiEzsignfoldersignerassociationId() const {
    return m_fki_ezsignfoldersignerassociation_id;
}
void Ezsignfoldersignerassociation_reassign_v1_Request::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    m_fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool Ezsignfoldersignerassociation_reassign_v1_Request::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool Ezsignfoldersignerassociation_reassign_v1_Request::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

bool Ezsignfoldersignerassociation_reassign_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfoldersignerassociation_reassign_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi

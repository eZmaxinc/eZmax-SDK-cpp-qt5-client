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

#include "OAIEzsignfolder_disposeEzsignfolders_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_disposeEzsignfolders_v1_Request::OAIEzsignfolder_disposeEzsignfolders_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_disposeEzsignfolders_v1_Request::OAIEzsignfolder_disposeEzsignfolders_v1_Request() {
    this->initializeModel();
}

OAIEzsignfolder_disposeEzsignfolders_v1_Request::~OAIEzsignfolder_disposeEzsignfolders_v1_Request() {}

void OAIEzsignfolder_disposeEzsignfolders_v1_Request::initializeModel() {

    m_a_pki_ezsignfolder_id_isSet = false;
    m_a_pki_ezsignfolder_id_isValid = false;
}

void OAIEzsignfolder_disposeEzsignfolders_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_disposeEzsignfolders_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(a_pki_ezsignfolder_id, json[QString("a_pkiEzsignfolderID")]);
    m_a_pki_ezsignfolder_id_isSet = !json[QString("a_pkiEzsignfolderID")].isNull() && m_a_pki_ezsignfolder_id_isValid;
}

QString OAIEzsignfolder_disposeEzsignfolders_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_disposeEzsignfolders_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_pki_ezsignfolder_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignfolderID"), ::OpenAPI::toJsonValue(a_pki_ezsignfolder_id));
    }
    return obj;
}

QList<qint32> OAIEzsignfolder_disposeEzsignfolders_v1_Request::getAPkiEzsignfolderId() const {
    return a_pki_ezsignfolder_id;
}
void OAIEzsignfolder_disposeEzsignfolders_v1_Request::setAPkiEzsignfolderId(const QList<qint32> &a_pki_ezsignfolder_id) {
    this->a_pki_ezsignfolder_id = a_pki_ezsignfolder_id;
    this->m_a_pki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfolder_disposeEzsignfolders_v1_Request::is_a_pki_ezsignfolder_id_Set() const{
    return m_a_pki_ezsignfolder_id_isSet;
}

bool OAIEzsignfolder_disposeEzsignfolders_v1_Request::is_a_pki_ezsignfolder_id_Valid() const{
    return m_a_pki_ezsignfolder_id_isValid;
}

bool OAIEzsignfolder_disposeEzsignfolders_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_pki_ezsignfolder_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_disposeEzsignfolders_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsignfolder_id_isValid && true;
}

} // namespace OpenAPI

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

#include "OAIEzsignfolder_reorder_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_reorder_v1_Request::OAIEzsignfolder_reorder_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_reorder_v1_Request::OAIEzsignfolder_reorder_v1_Request() {
    this->initializeModel();
}

OAIEzsignfolder_reorder_v1_Request::~OAIEzsignfolder_reorder_v1_Request() {}

void OAIEzsignfolder_reorder_v1_Request::initializeModel() {

    m_a_pki_ezsigndocument_id_isSet = false;
    m_a_pki_ezsigndocument_id_isValid = false;
}

void OAIEzsignfolder_reorder_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_reorder_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(m_a_pki_ezsigndocument_id, json[QString("a_pkiEzsigndocumentID")]);
    m_a_pki_ezsigndocument_id_isSet = !json[QString("a_pkiEzsigndocumentID")].isNull() && m_a_pki_ezsigndocument_id_isValid;
}

QString OAIEzsignfolder_reorder_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_reorder_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_ezsigndocument_id.size() > 0) {
        obj.insert(QString("a_pkiEzsigndocumentID"), ::OpenAPI::toJsonValue(m_a_pki_ezsigndocument_id));
    }
    return obj;
}

QList<qint32> OAIEzsignfolder_reorder_v1_Request::getAPkiEzsigndocumentId() const {
    return m_a_pki_ezsigndocument_id;
}
void OAIEzsignfolder_reorder_v1_Request::setAPkiEzsigndocumentId(const QList<qint32> &a_pki_ezsigndocument_id) {
    m_a_pki_ezsigndocument_id = a_pki_ezsigndocument_id;
    m_a_pki_ezsigndocument_id_isSet = true;
}

bool OAIEzsignfolder_reorder_v1_Request::is_a_pki_ezsigndocument_id_Set() const{
    return m_a_pki_ezsigndocument_id_isSet;
}

bool OAIEzsignfolder_reorder_v1_Request::is_a_pki_ezsigndocument_id_Valid() const{
    return m_a_pki_ezsigndocument_id_isValid;
}

bool OAIEzsignfolder_reorder_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_ezsigndocument_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_reorder_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsigndocument_id_isValid && true;
}

} // namespace OpenAPI

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

#include "OAIEzsigntemplatepackagemembership_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagemembership_Request::OAIEzsigntemplatepackagemembership_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagemembership_Request::OAIEzsigntemplatepackagemembership_Request() {
    this->initializeModel();
}

OAIEzsigntemplatepackagemembership_Request::~OAIEzsigntemplatepackagemembership_Request() {}

void OAIEzsigntemplatepackagemembership_Request::initializeModel() {

    m_pki_ezsigntemplatepackagemembership_id_isSet = false;
    m_pki_ezsigntemplatepackagemembership_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;
}

void OAIEzsigntemplatepackagemembership_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagemembership_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagemembership_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsigntemplatepackagemembership_id, json[QString("pkiEzsigntemplatepackagemembershipID")]);
    m_pki_ezsigntemplatepackagemembership_id_isSet = !json[QString("pkiEzsigntemplatepackagemembershipID")].isNull() && m_pki_ezsigntemplatepackagemembership_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;
}

QString OAIEzsigntemplatepackagemembership_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagemembership_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagemembershipID"), ::OpenAPI::toJsonValue(m_pki_ezsigntemplatepackagemembership_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(m_fki_ezsigntemplate_id));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackagemembership_Request::getPkiEzsigntemplatepackagemembershipId() const {
    return m_pki_ezsigntemplatepackagemembership_id;
}
void OAIEzsigntemplatepackagemembership_Request::setPkiEzsigntemplatepackagemembershipId(const qint32 &pki_ezsigntemplatepackagemembership_id) {
    m_pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    m_pki_ezsigntemplatepackagemembership_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_Request::is_pki_ezsigntemplatepackagemembership_id_Set() const{
    return m_pki_ezsigntemplatepackagemembership_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_Request::is_pki_ezsigntemplatepackagemembership_id_Valid() const{
    return m_pki_ezsigntemplatepackagemembership_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_Request::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackagemembership_Request::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_Request::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_Request::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_Request::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void OAIEzsigntemplatepackagemembership_Request::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_Request::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_Request::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

bool OAIEzsigntemplatepackagemembership_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagemembership_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplatepackage_id_isValid && m_fki_ezsigntemplate_id_isValid && true;
}

} // namespace OpenAPI

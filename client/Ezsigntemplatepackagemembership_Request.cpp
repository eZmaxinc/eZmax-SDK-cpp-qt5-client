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

#include "Ezsigntemplatepackagemembership_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepackagemembership_Request::Ezsigntemplatepackagemembership_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepackagemembership_Request::Ezsigntemplatepackagemembership_Request() {
    this->initializeModel();
}

Ezsigntemplatepackagemembership_Request::~Ezsigntemplatepackagemembership_Request() {}

void Ezsigntemplatepackagemembership_Request::initializeModel() {

    m_pki_ezsigntemplatepackagemembership_id_isSet = false;
    m_pki_ezsigntemplatepackagemembership_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;
}

void Ezsigntemplatepackagemembership_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepackagemembership_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagemembership_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatepackagemembership_id, json[QString("pkiEzsigntemplatepackagemembershipID")]);
    m_pki_ezsigntemplatepackagemembership_id_isSet = !json[QString("pkiEzsigntemplatepackagemembershipID")].isNull() && m_pki_ezsigntemplatepackagemembership_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;
}

QString Ezsigntemplatepackagemembership_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepackagemembership_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagemembershipID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatepackagemembership_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplate_id));
    }
    return obj;
}

qint32 Ezsigntemplatepackagemembership_Request::getPkiEzsigntemplatepackagemembershipId() const {
    return m_pki_ezsigntemplatepackagemembership_id;
}
void Ezsigntemplatepackagemembership_Request::setPkiEzsigntemplatepackagemembershipId(const qint32 &pki_ezsigntemplatepackagemembership_id) {
    m_pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    m_pki_ezsigntemplatepackagemembership_id_isSet = true;
}

bool Ezsigntemplatepackagemembership_Request::is_pki_ezsigntemplatepackagemembership_id_Set() const{
    return m_pki_ezsigntemplatepackagemembership_id_isSet;
}

bool Ezsigntemplatepackagemembership_Request::is_pki_ezsigntemplatepackagemembership_id_Valid() const{
    return m_pki_ezsigntemplatepackagemembership_id_isValid;
}

qint32 Ezsigntemplatepackagemembership_Request::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsigntemplatepackagemembership_Request::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsigntemplatepackagemembership_Request::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsigntemplatepackagemembership_Request::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 Ezsigntemplatepackagemembership_Request::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void Ezsigntemplatepackagemembership_Request::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool Ezsigntemplatepackagemembership_Request::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool Ezsigntemplatepackagemembership_Request::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

bool Ezsigntemplatepackagemembership_Request::isSet() const {
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

bool Ezsigntemplatepackagemembership_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplatepackage_id_isValid && m_fki_ezsigntemplate_id_isValid && true;
}

} // namespace Ezmaxapi

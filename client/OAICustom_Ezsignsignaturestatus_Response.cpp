/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_Ezsignsignaturestatus_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Ezsignsignaturestatus_Response::OAICustom_Ezsignsignaturestatus_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Ezsignsignaturestatus_Response::OAICustom_Ezsignsignaturestatus_Response() {
    this->initializeModel();
}

OAICustom_Ezsignsignaturestatus_Response::~OAICustom_Ezsignsignaturestatus_Response() {}

void OAICustom_Ezsignsignaturestatus_Response::initializeModel() {

    m_e_ezsignsignaturestatus_steptype_isSet = false;
    m_e_ezsignsignaturestatus_steptype_isValid = false;

    m_i_ezsignsignaturestatus_step_isSet = false;
    m_i_ezsignsignaturestatus_step_isValid = false;

    m_i_ezsignsignaturestatus_total_isSet = false;
    m_i_ezsignsignaturestatus_total_isValid = false;

    m_i_ezsignsignaturestatus_signed_isSet = false;
    m_i_ezsignsignaturestatus_signed_isValid = false;
}

void OAICustom_Ezsignsignaturestatus_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Ezsignsignaturestatus_Response::fromJsonObject(QJsonObject json) {

    m_e_ezsignsignaturestatus_steptype_isValid = ::OpenAPI::fromJsonValue(e_ezsignsignaturestatus_steptype, json[QString("eEzsignsignaturestatusSteptype")]);
    m_e_ezsignsignaturestatus_steptype_isSet = !json[QString("eEzsignsignaturestatusSteptype")].isNull() && m_e_ezsignsignaturestatus_steptype_isValid;

    m_i_ezsignsignaturestatus_step_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignaturestatus_step, json[QString("iEzsignsignaturestatusStep")]);
    m_i_ezsignsignaturestatus_step_isSet = !json[QString("iEzsignsignaturestatusStep")].isNull() && m_i_ezsignsignaturestatus_step_isValid;

    m_i_ezsignsignaturestatus_total_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignaturestatus_total, json[QString("iEzsignsignaturestatusTotal")]);
    m_i_ezsignsignaturestatus_total_isSet = !json[QString("iEzsignsignaturestatusTotal")].isNull() && m_i_ezsignsignaturestatus_total_isValid;

    m_i_ezsignsignaturestatus_signed_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignaturestatus_signed, json[QString("iEzsignsignaturestatusSigned")]);
    m_i_ezsignsignaturestatus_signed_isSet = !json[QString("iEzsignsignaturestatusSigned")].isNull() && m_i_ezsignsignaturestatus_signed_isValid;
}

QString OAICustom_Ezsignsignaturestatus_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Ezsignsignaturestatus_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_e_ezsignsignaturestatus_steptype_isSet) {
        obj.insert(QString("eEzsignsignaturestatusSteptype"), ::OpenAPI::toJsonValue(e_ezsignsignaturestatus_steptype));
    }
    if (m_i_ezsignsignaturestatus_step_isSet) {
        obj.insert(QString("iEzsignsignaturestatusStep"), ::OpenAPI::toJsonValue(i_ezsignsignaturestatus_step));
    }
    if (m_i_ezsignsignaturestatus_total_isSet) {
        obj.insert(QString("iEzsignsignaturestatusTotal"), ::OpenAPI::toJsonValue(i_ezsignsignaturestatus_total));
    }
    if (m_i_ezsignsignaturestatus_signed_isSet) {
        obj.insert(QString("iEzsignsignaturestatusSigned"), ::OpenAPI::toJsonValue(i_ezsignsignaturestatus_signed));
    }
    return obj;
}

QString OAICustom_Ezsignsignaturestatus_Response::getEEzsignsignaturestatusSteptype() const {
    return e_ezsignsignaturestatus_steptype;
}
void OAICustom_Ezsignsignaturestatus_Response::setEEzsignsignaturestatusSteptype(const QString &e_ezsignsignaturestatus_steptype) {
    this->e_ezsignsignaturestatus_steptype = e_ezsignsignaturestatus_steptype;
    this->m_e_ezsignsignaturestatus_steptype_isSet = true;
}

bool OAICustom_Ezsignsignaturestatus_Response::is_e_ezsignsignaturestatus_steptype_Set() const{
    return m_e_ezsignsignaturestatus_steptype_isSet;
}

bool OAICustom_Ezsignsignaturestatus_Response::is_e_ezsignsignaturestatus_steptype_Valid() const{
    return m_e_ezsignsignaturestatus_steptype_isValid;
}

qint32 OAICustom_Ezsignsignaturestatus_Response::getIEzsignsignaturestatusStep() const {
    return i_ezsignsignaturestatus_step;
}
void OAICustom_Ezsignsignaturestatus_Response::setIEzsignsignaturestatusStep(const qint32 &i_ezsignsignaturestatus_step) {
    this->i_ezsignsignaturestatus_step = i_ezsignsignaturestatus_step;
    this->m_i_ezsignsignaturestatus_step_isSet = true;
}

bool OAICustom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_step_Set() const{
    return m_i_ezsignsignaturestatus_step_isSet;
}

bool OAICustom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_step_Valid() const{
    return m_i_ezsignsignaturestatus_step_isValid;
}

qint32 OAICustom_Ezsignsignaturestatus_Response::getIEzsignsignaturestatusTotal() const {
    return i_ezsignsignaturestatus_total;
}
void OAICustom_Ezsignsignaturestatus_Response::setIEzsignsignaturestatusTotal(const qint32 &i_ezsignsignaturestatus_total) {
    this->i_ezsignsignaturestatus_total = i_ezsignsignaturestatus_total;
    this->m_i_ezsignsignaturestatus_total_isSet = true;
}

bool OAICustom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_total_Set() const{
    return m_i_ezsignsignaturestatus_total_isSet;
}

bool OAICustom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_total_Valid() const{
    return m_i_ezsignsignaturestatus_total_isValid;
}

qint32 OAICustom_Ezsignsignaturestatus_Response::getIEzsignsignaturestatusSigned() const {
    return i_ezsignsignaturestatus_signed;
}
void OAICustom_Ezsignsignaturestatus_Response::setIEzsignsignaturestatusSigned(const qint32 &i_ezsignsignaturestatus_signed) {
    this->i_ezsignsignaturestatus_signed = i_ezsignsignaturestatus_signed;
    this->m_i_ezsignsignaturestatus_signed_isSet = true;
}

bool OAICustom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_signed_Set() const{
    return m_i_ezsignsignaturestatus_signed_isSet;
}

bool OAICustom_Ezsignsignaturestatus_Response::is_i_ezsignsignaturestatus_signed_Valid() const{
    return m_i_ezsignsignaturestatus_signed_isValid;
}

bool OAICustom_Ezsignsignaturestatus_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_ezsignsignaturestatus_steptype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignaturestatus_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignaturestatus_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignaturestatus_signed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Ezsignsignaturestatus_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_ezsignsignaturestatus_steptype_isValid && m_i_ezsignsignaturestatus_step_isValid && m_i_ezsignsignaturestatus_total_isValid && m_i_ezsignsignaturestatus_signed_isValid && true;
}

} // namespace OpenAPI

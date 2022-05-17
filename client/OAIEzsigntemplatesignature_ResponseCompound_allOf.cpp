/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatesignature_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesignature_ResponseCompound_allOf::OAIEzsigntemplatesignature_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesignature_ResponseCompound_allOf::OAIEzsigntemplatesignature_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzsigntemplatesignature_ResponseCompound_allOf::~OAIEzsigntemplatesignature_ResponseCompound_allOf() {}

void OAIEzsigntemplatesignature_ResponseCompound_allOf::initializeModel() {

    m_b_ezsigntemplatesignature_customdate_isSet = false;
    m_b_ezsigntemplatesignature_customdate_isValid = false;

    m_a_obj_ezsigntemplatesignaturecustomdate_isSet = false;
    m_a_obj_ezsigntemplatesignaturecustomdate_isValid = false;
}

void OAIEzsigntemplatesignature_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesignature_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_b_ezsigntemplatesignature_customdate_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatesignature_customdate, json[QString("bEzsigntemplatesignatureCustomdate")]);
    m_b_ezsigntemplatesignature_customdate_isSet = !json[QString("bEzsigntemplatesignatureCustomdate")].isNull() && m_b_ezsigntemplatesignature_customdate_isValid;

    m_a_obj_ezsigntemplatesignaturecustomdate_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatesignaturecustomdate, json[QString("a_objEzsigntemplatesignaturecustomdate")]);
    m_a_obj_ezsigntemplatesignaturecustomdate_isSet = !json[QString("a_objEzsigntemplatesignaturecustomdate")].isNull() && m_a_obj_ezsigntemplatesignaturecustomdate_isValid;
}

QString OAIEzsigntemplatesignature_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesignature_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_b_ezsigntemplatesignature_customdate_isSet) {
        obj.insert(QString("bEzsigntemplatesignatureCustomdate"), ::OpenAPI::toJsonValue(b_ezsigntemplatesignature_customdate));
    }
    if (a_obj_ezsigntemplatesignaturecustomdate.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatesignaturecustomdate"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatesignaturecustomdate));
    }
    return obj;
}

bool OAIEzsigntemplatesignature_ResponseCompound_allOf::isBEzsigntemplatesignatureCustomdate() const {
    return b_ezsigntemplatesignature_customdate;
}
void OAIEzsigntemplatesignature_ResponseCompound_allOf::setBEzsigntemplatesignatureCustomdate(const bool &b_ezsigntemplatesignature_customdate) {
    this->b_ezsigntemplatesignature_customdate = b_ezsigntemplatesignature_customdate;
    this->m_b_ezsigntemplatesignature_customdate_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound_allOf::is_b_ezsigntemplatesignature_customdate_Set() const{
    return m_b_ezsigntemplatesignature_customdate_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound_allOf::is_b_ezsigntemplatesignature_customdate_Valid() const{
    return m_b_ezsigntemplatesignature_customdate_isValid;
}

QList<OAIEzsigntemplatesignaturecustomdate_ResponseCompound> OAIEzsigntemplatesignature_ResponseCompound_allOf::getAObjEzsigntemplatesignaturecustomdate() const {
    return a_obj_ezsigntemplatesignaturecustomdate;
}
void OAIEzsigntemplatesignature_ResponseCompound_allOf::setAObjEzsigntemplatesignaturecustomdate(const QList<OAIEzsigntemplatesignaturecustomdate_ResponseCompound> &a_obj_ezsigntemplatesignaturecustomdate) {
    this->a_obj_ezsigntemplatesignaturecustomdate = a_obj_ezsigntemplatesignaturecustomdate;
    this->m_a_obj_ezsigntemplatesignaturecustomdate_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound_allOf::is_a_obj_ezsigntemplatesignaturecustomdate_Set() const{
    return m_a_obj_ezsigntemplatesignaturecustomdate_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound_allOf::is_a_obj_ezsigntemplatesignaturecustomdate_Valid() const{
    return m_a_obj_ezsigntemplatesignaturecustomdate_isValid;
}

bool OAIEzsigntemplatesignature_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_b_ezsigntemplatesignature_customdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsigntemplatesignaturecustomdate.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesignature_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI

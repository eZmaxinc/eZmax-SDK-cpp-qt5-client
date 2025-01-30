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

#include "Common_Reportsubsectionpart.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Reportsubsectionpart::Common_Reportsubsectionpart(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Reportsubsectionpart::Common_Reportsubsectionpart() {
    this->initializeModel();
}

Common_Reportsubsectionpart::~Common_Reportsubsectionpart() {}

void Common_Reportsubsectionpart::initializeModel() {

    m_e_reportsubsectionpart_type_isSet = false;
    m_e_reportsubsectionpart_type_isValid = false;

    m_a_obj_reportrow_isSet = false;
    m_a_obj_reportrow_isValid = false;
}

void Common_Reportsubsectionpart::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Reportsubsectionpart::fromJsonObject(QJsonObject json) {

    m_e_reportsubsectionpart_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_reportsubsectionpart_type, json[QString("eReportsubsectionpartType")]);
    m_e_reportsubsectionpart_type_isSet = !json[QString("eReportsubsectionpartType")].isNull() && m_e_reportsubsectionpart_type_isValid;

    m_a_obj_reportrow_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_reportrow, json[QString("a_objReportrow")]);
    m_a_obj_reportrow_isSet = !json[QString("a_objReportrow")].isNull() && m_a_obj_reportrow_isValid;
}

QString Common_Reportsubsectionpart::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Reportsubsectionpart::asJsonObject() const {
    QJsonObject obj;
    if (m_e_reportsubsectionpart_type_isSet) {
        obj.insert(QString("eReportsubsectionpartType"), ::Ezmaxapi::toJsonValue(m_e_reportsubsectionpart_type));
    }
    if (m_a_obj_reportrow.size() > 0) {
        obj.insert(QString("a_objReportrow"), ::Ezmaxapi::toJsonValue(m_a_obj_reportrow));
    }
    return obj;
}

QString Common_Reportsubsectionpart::getEReportsubsectionpartType() const {
    return m_e_reportsubsectionpart_type;
}
void Common_Reportsubsectionpart::setEReportsubsectionpartType(const QString &e_reportsubsectionpart_type) {
    m_e_reportsubsectionpart_type = e_reportsubsectionpart_type;
    m_e_reportsubsectionpart_type_isSet = true;
}

bool Common_Reportsubsectionpart::is_e_reportsubsectionpart_type_Set() const{
    return m_e_reportsubsectionpart_type_isSet;
}

bool Common_Reportsubsectionpart::is_e_reportsubsectionpart_type_Valid() const{
    return m_e_reportsubsectionpart_type_isValid;
}

QList<Common_Reportrow> Common_Reportsubsectionpart::getAObjReportrow() const {
    return m_a_obj_reportrow;
}
void Common_Reportsubsectionpart::setAObjReportrow(const QList<Common_Reportrow> &a_obj_reportrow) {
    m_a_obj_reportrow = a_obj_reportrow;
    m_a_obj_reportrow_isSet = true;
}

bool Common_Reportsubsectionpart::is_a_obj_reportrow_Set() const{
    return m_a_obj_reportrow_isSet;
}

bool Common_Reportsubsectionpart::is_a_obj_reportrow_Valid() const{
    return m_a_obj_reportrow_isValid;
}

bool Common_Reportsubsectionpart::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_reportsubsectionpart_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_reportrow.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Reportsubsectionpart::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_reportsubsectionpart_type_isValid && m_a_obj_reportrow_isValid && true;
}

} // namespace Ezmaxapi

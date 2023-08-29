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

#include "OAICommon_Reportsubsection.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Reportsubsection::OAICommon_Reportsubsection(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Reportsubsection::OAICommon_Reportsubsection() {
    this->initializeModel();
}

OAICommon_Reportsubsection::~OAICommon_Reportsubsection() {}

void OAICommon_Reportsubsection::initializeModel() {

    m_obj_reportsubsectionpart_header_isSet = false;
    m_obj_reportsubsectionpart_header_isValid = false;

    m_obj_reportsubsectionpart_body_isSet = false;
    m_obj_reportsubsectionpart_body_isValid = false;

    m_obj_reportsubsectionpart_footer_isSet = false;
    m_obj_reportsubsectionpart_footer_isValid = false;
}

void OAICommon_Reportsubsection::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Reportsubsection::fromJsonObject(QJsonObject json) {

    m_obj_reportsubsectionpart_header_isValid = ::OpenAPI::fromJsonValue(m_obj_reportsubsectionpart_header, json[QString("objReportsubsectionpartHeader")]);
    m_obj_reportsubsectionpart_header_isSet = !json[QString("objReportsubsectionpartHeader")].isNull() && m_obj_reportsubsectionpart_header_isValid;

    m_obj_reportsubsectionpart_body_isValid = ::OpenAPI::fromJsonValue(m_obj_reportsubsectionpart_body, json[QString("objReportsubsectionpartBody")]);
    m_obj_reportsubsectionpart_body_isSet = !json[QString("objReportsubsectionpartBody")].isNull() && m_obj_reportsubsectionpart_body_isValid;

    m_obj_reportsubsectionpart_footer_isValid = ::OpenAPI::fromJsonValue(m_obj_reportsubsectionpart_footer, json[QString("objReportsubsectionpartFooter")]);
    m_obj_reportsubsectionpart_footer_isSet = !json[QString("objReportsubsectionpartFooter")].isNull() && m_obj_reportsubsectionpart_footer_isValid;
}

QString OAICommon_Reportsubsection::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Reportsubsection::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_reportsubsectionpart_header.isSet()) {
        obj.insert(QString("objReportsubsectionpartHeader"), ::OpenAPI::toJsonValue(m_obj_reportsubsectionpart_header));
    }
    if (m_obj_reportsubsectionpart_body.isSet()) {
        obj.insert(QString("objReportsubsectionpartBody"), ::OpenAPI::toJsonValue(m_obj_reportsubsectionpart_body));
    }
    if (m_obj_reportsubsectionpart_footer.isSet()) {
        obj.insert(QString("objReportsubsectionpartFooter"), ::OpenAPI::toJsonValue(m_obj_reportsubsectionpart_footer));
    }
    return obj;
}

OAICommon_Reportsubsectionpart OAICommon_Reportsubsection::getObjReportsubsectionpartHeader() const {
    return m_obj_reportsubsectionpart_header;
}
void OAICommon_Reportsubsection::setObjReportsubsectionpartHeader(const OAICommon_Reportsubsectionpart &obj_reportsubsectionpart_header) {
    m_obj_reportsubsectionpart_header = obj_reportsubsectionpart_header;
    m_obj_reportsubsectionpart_header_isSet = true;
}

bool OAICommon_Reportsubsection::is_obj_reportsubsectionpart_header_Set() const{
    return m_obj_reportsubsectionpart_header_isSet;
}

bool OAICommon_Reportsubsection::is_obj_reportsubsectionpart_header_Valid() const{
    return m_obj_reportsubsectionpart_header_isValid;
}

OAICommon_Reportsubsectionpart OAICommon_Reportsubsection::getObjReportsubsectionpartBody() const {
    return m_obj_reportsubsectionpart_body;
}
void OAICommon_Reportsubsection::setObjReportsubsectionpartBody(const OAICommon_Reportsubsectionpart &obj_reportsubsectionpart_body) {
    m_obj_reportsubsectionpart_body = obj_reportsubsectionpart_body;
    m_obj_reportsubsectionpart_body_isSet = true;
}

bool OAICommon_Reportsubsection::is_obj_reportsubsectionpart_body_Set() const{
    return m_obj_reportsubsectionpart_body_isSet;
}

bool OAICommon_Reportsubsection::is_obj_reportsubsectionpart_body_Valid() const{
    return m_obj_reportsubsectionpart_body_isValid;
}

OAICommon_Reportsubsectionpart OAICommon_Reportsubsection::getObjReportsubsectionpartFooter() const {
    return m_obj_reportsubsectionpart_footer;
}
void OAICommon_Reportsubsection::setObjReportsubsectionpartFooter(const OAICommon_Reportsubsectionpart &obj_reportsubsectionpart_footer) {
    m_obj_reportsubsectionpart_footer = obj_reportsubsectionpart_footer;
    m_obj_reportsubsectionpart_footer_isSet = true;
}

bool OAICommon_Reportsubsection::is_obj_reportsubsectionpart_footer_Set() const{
    return m_obj_reportsubsectionpart_footer_isSet;
}

bool OAICommon_Reportsubsection::is_obj_reportsubsectionpart_footer_Valid() const{
    return m_obj_reportsubsectionpart_footer_isValid;
}

bool OAICommon_Reportsubsection::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_reportsubsectionpart_header.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_reportsubsectionpart_body.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_reportsubsectionpart_footer.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Reportsubsection::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_reportsubsectionpart_header_isValid && m_obj_reportsubsectionpart_body_isValid && m_obj_reportsubsectionpart_footer_isValid && true;
}

} // namespace OpenAPI

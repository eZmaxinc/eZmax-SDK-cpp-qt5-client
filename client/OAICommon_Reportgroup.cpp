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

#include "OAICommon_Reportgroup.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Reportgroup::OAICommon_Reportgroup(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Reportgroup::OAICommon_Reportgroup() {
    this->initializeModel();
}

OAICommon_Reportgroup::~OAICommon_Reportgroup() {}

void OAICommon_Reportgroup::initializeModel() {

    m_a_obj_report_isSet = false;
    m_a_obj_report_isValid = false;

    m_a_obj_reportcellstyle_custom_isSet = false;
    m_a_obj_reportcellstyle_custom_isValid = false;
}

void OAICommon_Reportgroup::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Reportgroup::fromJsonObject(QJsonObject json) {

    m_a_obj_report_isValid = ::OpenAPI::fromJsonValue(m_a_obj_report, json[QString("a_objReport")]);
    m_a_obj_report_isSet = !json[QString("a_objReport")].isNull() && m_a_obj_report_isValid;

    m_a_obj_reportcellstyle_custom_isValid = ::OpenAPI::fromJsonValue(m_a_obj_reportcellstyle_custom, json[QString("a_objReportcellstyleCustom")]);
    m_a_obj_reportcellstyle_custom_isSet = !json[QString("a_objReportcellstyleCustom")].isNull() && m_a_obj_reportcellstyle_custom_isValid;
}

QString OAICommon_Reportgroup::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Reportgroup::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_report.size() > 0) {
        obj.insert(QString("a_objReport"), ::OpenAPI::toJsonValue(m_a_obj_report));
    }
    if (m_a_obj_reportcellstyle_custom.size() > 0) {
        obj.insert(QString("a_objReportcellstyleCustom"), ::OpenAPI::toJsonValue(m_a_obj_reportcellstyle_custom));
    }
    return obj;
}

QList<OAICommon_Report> OAICommon_Reportgroup::getAObjReport() const {
    return m_a_obj_report;
}
void OAICommon_Reportgroup::setAObjReport(const QList<OAICommon_Report> &a_obj_report) {
    m_a_obj_report = a_obj_report;
    m_a_obj_report_isSet = true;
}

bool OAICommon_Reportgroup::is_a_obj_report_Set() const{
    return m_a_obj_report_isSet;
}

bool OAICommon_Reportgroup::is_a_obj_report_Valid() const{
    return m_a_obj_report_isValid;
}

QList<OAICommon_Reportcellstyle> OAICommon_Reportgroup::getAObjReportcellstyleCustom() const {
    return m_a_obj_reportcellstyle_custom;
}
void OAICommon_Reportgroup::setAObjReportcellstyleCustom(const QList<OAICommon_Reportcellstyle> &a_obj_reportcellstyle_custom) {
    m_a_obj_reportcellstyle_custom = a_obj_reportcellstyle_custom;
    m_a_obj_reportcellstyle_custom_isSet = true;
}

bool OAICommon_Reportgroup::is_a_obj_reportcellstyle_custom_Set() const{
    return m_a_obj_reportcellstyle_custom_isSet;
}

bool OAICommon_Reportgroup::is_a_obj_reportcellstyle_custom_Valid() const{
    return m_a_obj_reportcellstyle_custom_isValid;
}

bool OAICommon_Reportgroup::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_report.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_reportcellstyle_custom.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Reportgroup::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_report_isValid && m_a_obj_reportcellstyle_custom_isValid && true;
}

} // namespace OpenAPI

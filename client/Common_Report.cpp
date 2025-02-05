/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Common_Report.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Report::Common_Report(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Report::Common_Report() {
    this->initializeModel();
}

Common_Report::~Common_Report() {}

void Common_Report::initializeModel() {

    m_a_obj_reportsection_isSet = false;
    m_a_obj_reportsection_isValid = false;
}

void Common_Report::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Report::fromJsonObject(QJsonObject json) {

    m_a_obj_reportsection_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_reportsection, json[QString("a_objReportsection")]);
    m_a_obj_reportsection_isSet = !json[QString("a_objReportsection")].isNull() && m_a_obj_reportsection_isValid;
}

QString Common_Report::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Report::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_reportsection.size() > 0) {
        obj.insert(QString("a_objReportsection"), ::Ezmaxapi::toJsonValue(m_a_obj_reportsection));
    }
    return obj;
}

QList<Common_Reportsection> Common_Report::getAObjReportsection() const {
    return m_a_obj_reportsection;
}
void Common_Report::setAObjReportsection(const QList<Common_Reportsection> &a_obj_reportsection) {
    m_a_obj_reportsection = a_obj_reportsection;
    m_a_obj_reportsection_isSet = true;
}

bool Common_Report::is_a_obj_reportsection_Set() const{
    return m_a_obj_reportsection_isSet;
}

bool Common_Report::is_a_obj_reportsection_Valid() const{
    return m_a_obj_reportsection_isValid;
}

bool Common_Report::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_reportsection.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Report::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_reportsection_isValid && true;
}

} // namespace Ezmaxapi

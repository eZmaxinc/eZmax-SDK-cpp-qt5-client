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

#include "OAIDepartment_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDepartment_AutocompleteElement_Response::OAIDepartment_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDepartment_AutocompleteElement_Response::OAIDepartment_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIDepartment_AutocompleteElement_Response::~OAIDepartment_AutocompleteElement_Response() {}

void OAIDepartment_AutocompleteElement_Response::initializeModel() {

    m_s_company_name_x_isSet = false;
    m_s_company_name_x_isValid = false;

    m_s_department_name_x_isSet = false;
    m_s_department_name_x_isValid = false;

    m_pki_department_id_isSet = false;
    m_pki_department_id_isValid = false;

    m_b_department_isactive_isSet = false;
    m_b_department_isactive_isValid = false;
}

void OAIDepartment_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDepartment_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_company_name_x_isValid = ::OpenAPI::fromJsonValue(s_company_name_x, json[QString("sCompanyNameX")]);
    m_s_company_name_x_isSet = !json[QString("sCompanyNameX")].isNull() && m_s_company_name_x_isValid;

    m_s_department_name_x_isValid = ::OpenAPI::fromJsonValue(s_department_name_x, json[QString("sDepartmentNameX")]);
    m_s_department_name_x_isSet = !json[QString("sDepartmentNameX")].isNull() && m_s_department_name_x_isValid;

    m_pki_department_id_isValid = ::OpenAPI::fromJsonValue(pki_department_id, json[QString("pkiDepartmentID")]);
    m_pki_department_id_isSet = !json[QString("pkiDepartmentID")].isNull() && m_pki_department_id_isValid;

    m_b_department_isactive_isValid = ::OpenAPI::fromJsonValue(b_department_isactive, json[QString("bDepartmentIsactive")]);
    m_b_department_isactive_isSet = !json[QString("bDepartmentIsactive")].isNull() && m_b_department_isactive_isValid;
}

QString OAIDepartment_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDepartment_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_company_name_x_isSet) {
        obj.insert(QString("sCompanyNameX"), ::OpenAPI::toJsonValue(s_company_name_x));
    }
    if (m_s_department_name_x_isSet) {
        obj.insert(QString("sDepartmentNameX"), ::OpenAPI::toJsonValue(s_department_name_x));
    }
    if (m_pki_department_id_isSet) {
        obj.insert(QString("pkiDepartmentID"), ::OpenAPI::toJsonValue(pki_department_id));
    }
    if (m_b_department_isactive_isSet) {
        obj.insert(QString("bDepartmentIsactive"), ::OpenAPI::toJsonValue(b_department_isactive));
    }
    return obj;
}

QString OAIDepartment_AutocompleteElement_Response::getSCompanyNameX() const {
    return s_company_name_x;
}
void OAIDepartment_AutocompleteElement_Response::setSCompanyNameX(const QString &s_company_name_x) {
    this->s_company_name_x = s_company_name_x;
    this->m_s_company_name_x_isSet = true;
}

bool OAIDepartment_AutocompleteElement_Response::is_s_company_name_x_Set() const{
    return m_s_company_name_x_isSet;
}

bool OAIDepartment_AutocompleteElement_Response::is_s_company_name_x_Valid() const{
    return m_s_company_name_x_isValid;
}

QString OAIDepartment_AutocompleteElement_Response::getSDepartmentNameX() const {
    return s_department_name_x;
}
void OAIDepartment_AutocompleteElement_Response::setSDepartmentNameX(const QString &s_department_name_x) {
    this->s_department_name_x = s_department_name_x;
    this->m_s_department_name_x_isSet = true;
}

bool OAIDepartment_AutocompleteElement_Response::is_s_department_name_x_Set() const{
    return m_s_department_name_x_isSet;
}

bool OAIDepartment_AutocompleteElement_Response::is_s_department_name_x_Valid() const{
    return m_s_department_name_x_isValid;
}

qint32 OAIDepartment_AutocompleteElement_Response::getPkiDepartmentId() const {
    return pki_department_id;
}
void OAIDepartment_AutocompleteElement_Response::setPkiDepartmentId(const qint32 &pki_department_id) {
    this->pki_department_id = pki_department_id;
    this->m_pki_department_id_isSet = true;
}

bool OAIDepartment_AutocompleteElement_Response::is_pki_department_id_Set() const{
    return m_pki_department_id_isSet;
}

bool OAIDepartment_AutocompleteElement_Response::is_pki_department_id_Valid() const{
    return m_pki_department_id_isValid;
}

bool OAIDepartment_AutocompleteElement_Response::isBDepartmentIsactive() const {
    return b_department_isactive;
}
void OAIDepartment_AutocompleteElement_Response::setBDepartmentIsactive(const bool &b_department_isactive) {
    this->b_department_isactive = b_department_isactive;
    this->m_b_department_isactive_isSet = true;
}

bool OAIDepartment_AutocompleteElement_Response::is_b_department_isactive_Set() const{
    return m_b_department_isactive_isSet;
}

bool OAIDepartment_AutocompleteElement_Response::is_b_department_isactive_Valid() const{
    return m_b_department_isactive_isValid;
}

bool OAIDepartment_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_company_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_department_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_department_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_department_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDepartment_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_company_name_x_isValid && m_s_department_name_x_isValid && m_pki_department_id_isValid && m_b_department_isactive_isValid && true;
}

} // namespace OpenAPI

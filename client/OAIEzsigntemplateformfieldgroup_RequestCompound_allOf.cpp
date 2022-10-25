/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplateformfieldgroup_RequestCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::OAIEzsigntemplateformfieldgroup_RequestCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::OAIEzsigntemplateformfieldgroup_RequestCompound_allOf() {
    this->initializeModel();
}

OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::~OAIEzsigntemplateformfieldgroup_RequestCompound_allOf() {}

void OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::initializeModel() {

    m_a_obj_ezsigntemplateformfieldgroupsigner_isSet = false;
    m_a_obj_ezsigntemplateformfieldgroupsigner_isValid = false;

    m_a_obj_dropdown_element_isSet = false;
    m_a_obj_dropdown_element_isValid = false;

    m_a_obj_ezsigntemplateformfield_isSet = false;
    m_a_obj_ezsigntemplateformfield_isValid = false;
}

void OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplateformfieldgroupsigner_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplateformfieldgroupsigner, json[QString("a_objEzsigntemplateformfieldgroupsigner")]);
    m_a_obj_ezsigntemplateformfieldgroupsigner_isSet = !json[QString("a_objEzsigntemplateformfieldgroupsigner")].isNull() && m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;

    m_a_obj_dropdown_element_isValid = ::OpenAPI::fromJsonValue(a_obj_dropdown_element, json[QString("a_objDropdownElement")]);
    m_a_obj_dropdown_element_isSet = !json[QString("a_objDropdownElement")].isNull() && m_a_obj_dropdown_element_isValid;

    m_a_obj_ezsigntemplateformfield_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplateformfield, json[QString("a_objEzsigntemplateformfield")]);
    m_a_obj_ezsigntemplateformfield_isSet = !json[QString("a_objEzsigntemplateformfield")].isNull() && m_a_obj_ezsigntemplateformfield_isValid;
}

QString OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplateformfieldgroupsigner.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateformfieldgroupsigner"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplateformfieldgroupsigner));
    }
    if (a_obj_dropdown_element.size() > 0) {
        obj.insert(QString("a_objDropdownElement"), ::OpenAPI::toJsonValue(a_obj_dropdown_element));
    }
    if (a_obj_ezsigntemplateformfield.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateformfield"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplateformfield));
    }
    return obj;
}

QList<OAIEzsigntemplateformfieldgroupsigner_RequestCompound> OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::getAObjEzsigntemplateformfieldgroupsigner() const {
    return a_obj_ezsigntemplateformfieldgroupsigner;
}
void OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::setAObjEzsigntemplateformfieldgroupsigner(const QList<OAIEzsigntemplateformfieldgroupsigner_RequestCompound> &a_obj_ezsigntemplateformfieldgroupsigner) {
    this->a_obj_ezsigntemplateformfieldgroupsigner = a_obj_ezsigntemplateformfieldgroupsigner;
    this->m_a_obj_ezsigntemplateformfieldgroupsigner_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::is_a_obj_ezsigntemplateformfieldgroupsigner_Set() const{
    return m_a_obj_ezsigntemplateformfieldgroupsigner_isSet;
}

bool OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::is_a_obj_ezsigntemplateformfieldgroupsigner_Valid() const{
    return m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;
}

QList<OAICustom_DropdownElement_RequestCompound> OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::getAObjDropdownElement() const {
    return a_obj_dropdown_element;
}
void OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::setAObjDropdownElement(const QList<OAICustom_DropdownElement_RequestCompound> &a_obj_dropdown_element) {
    this->a_obj_dropdown_element = a_obj_dropdown_element;
    this->m_a_obj_dropdown_element_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::is_a_obj_dropdown_element_Set() const{
    return m_a_obj_dropdown_element_isSet;
}

bool OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::is_a_obj_dropdown_element_Valid() const{
    return m_a_obj_dropdown_element_isValid;
}

QList<OAIEzsigntemplateformfield_RequestCompound> OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::getAObjEzsigntemplateformfield() const {
    return a_obj_ezsigntemplateformfield;
}
void OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::setAObjEzsigntemplateformfield(const QList<OAIEzsigntemplateformfield_RequestCompound> &a_obj_ezsigntemplateformfield) {
    this->a_obj_ezsigntemplateformfield = a_obj_ezsigntemplateformfield;
    this->m_a_obj_ezsigntemplateformfield_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::is_a_obj_ezsigntemplateformfield_Set() const{
    return m_a_obj_ezsigntemplateformfield_isSet;
}

bool OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::is_a_obj_ezsigntemplateformfield_Valid() const{
    return m_a_obj_ezsigntemplateformfield_isValid;
}

bool OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplateformfieldgroupsigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_dropdown_element.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsigntemplateformfield.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplateformfieldgroup_RequestCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplateformfieldgroupsigner_isValid && m_a_obj_ezsigntemplateformfield_isValid && true;
}

} // namespace OpenAPI

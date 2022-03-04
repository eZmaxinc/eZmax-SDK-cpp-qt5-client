/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignformfieldgroup_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfieldgroup_ResponseCompound_allOf::OAIEzsignformfieldgroup_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfieldgroup_ResponseCompound_allOf::OAIEzsignformfieldgroup_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIEzsignformfieldgroup_ResponseCompound_allOf::~OAIEzsignformfieldgroup_ResponseCompound_allOf() {}

void OAIEzsignformfieldgroup_ResponseCompound_allOf::initializeModel() {

    m_a_obj_ezsignformfield_isSet = false;
    m_a_obj_ezsignformfield_isValid = false;

    m_a_obj_dropdown_element_isSet = false;
    m_a_obj_dropdown_element_isValid = false;

    m_a_obj_ezsignformfieldgroupsigner_isSet = false;
    m_a_obj_ezsignformfieldgroupsigner_isValid = false;
}

void OAIEzsignformfieldgroup_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfieldgroup_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignformfield_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfield, json[QString("a_objEzsignformfield")]);
    m_a_obj_ezsignformfield_isSet = !json[QString("a_objEzsignformfield")].isNull() && m_a_obj_ezsignformfield_isValid;

    m_a_obj_dropdown_element_isValid = ::OpenAPI::fromJsonValue(a_obj_dropdown_element, json[QString("a_objDropdownElement")]);
    m_a_obj_dropdown_element_isSet = !json[QString("a_objDropdownElement")].isNull() && m_a_obj_dropdown_element_isValid;

    m_a_obj_ezsignformfieldgroupsigner_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfieldgroupsigner, json[QString("a_objEzsignformfieldgroupsigner")]);
    m_a_obj_ezsignformfieldgroupsigner_isSet = !json[QString("a_objEzsignformfieldgroupsigner")].isNull() && m_a_obj_ezsignformfieldgroupsigner_isValid;
}

QString OAIEzsignformfieldgroup_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfieldgroup_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignformfield.size() > 0) {
        obj.insert(QString("a_objEzsignformfield"), ::OpenAPI::toJsonValue(a_obj_ezsignformfield));
    }
    if (a_obj_dropdown_element.size() > 0) {
        obj.insert(QString("a_objDropdownElement"), ::OpenAPI::toJsonValue(a_obj_dropdown_element));
    }
    if (a_obj_ezsignformfieldgroupsigner.isSet()) {
        obj.insert(QString("a_objEzsignformfieldgroupsigner"), ::OpenAPI::toJsonValue(a_obj_ezsignformfieldgroupsigner));
    }
    return obj;
}

QList<OAIEzsignformfield_ResponseCompound> OAIEzsignformfieldgroup_ResponseCompound_allOf::getAObjEzsignformfield() const {
    return a_obj_ezsignformfield;
}
void OAIEzsignformfieldgroup_ResponseCompound_allOf::setAObjEzsignformfield(const QList<OAIEzsignformfield_ResponseCompound> &a_obj_ezsignformfield) {
    this->a_obj_ezsignformfield = a_obj_ezsignformfield;
    this->m_a_obj_ezsignformfield_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound_allOf::is_a_obj_ezsignformfield_Set() const{
    return m_a_obj_ezsignformfield_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound_allOf::is_a_obj_ezsignformfield_Valid() const{
    return m_a_obj_ezsignformfield_isValid;
}

QList<OAICustom_DropdownElement_ResponseCompound> OAIEzsignformfieldgroup_ResponseCompound_allOf::getAObjDropdownElement() const {
    return a_obj_dropdown_element;
}
void OAIEzsignformfieldgroup_ResponseCompound_allOf::setAObjDropdownElement(const QList<OAICustom_DropdownElement_ResponseCompound> &a_obj_dropdown_element) {
    this->a_obj_dropdown_element = a_obj_dropdown_element;
    this->m_a_obj_dropdown_element_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound_allOf::is_a_obj_dropdown_element_Set() const{
    return m_a_obj_dropdown_element_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound_allOf::is_a_obj_dropdown_element_Valid() const{
    return m_a_obj_dropdown_element_isValid;
}

OAIEzsignformfieldgroupsigner_ResponseCompound OAIEzsignformfieldgroup_ResponseCompound_allOf::getAObjEzsignformfieldgroupsigner() const {
    return a_obj_ezsignformfieldgroupsigner;
}
void OAIEzsignformfieldgroup_ResponseCompound_allOf::setAObjEzsignformfieldgroupsigner(const OAIEzsignformfieldgroupsigner_ResponseCompound &a_obj_ezsignformfieldgroupsigner) {
    this->a_obj_ezsignformfieldgroupsigner = a_obj_ezsignformfieldgroupsigner;
    this->m_a_obj_ezsignformfieldgroupsigner_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound_allOf::is_a_obj_ezsignformfieldgroupsigner_Set() const{
    return m_a_obj_ezsignformfieldgroupsigner_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound_allOf::is_a_obj_ezsignformfieldgroupsigner_Valid() const{
    return m_a_obj_ezsignformfieldgroupsigner_isValid;
}

bool OAIEzsignformfieldgroup_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignformfield.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_dropdown_element.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignformfieldgroupsigner.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignformfieldgroup_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignformfield_isValid && m_a_obj_ezsignformfieldgroupsigner_isValid && true;
}

} // namespace OpenAPI

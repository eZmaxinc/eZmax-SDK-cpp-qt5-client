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

#include "OAIEzsigntemplateformfieldgroup_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplateformfieldgroup_ResponseCompound::OAIEzsigntemplateformfieldgroup_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplateformfieldgroup_ResponseCompound::OAIEzsigntemplateformfieldgroup_ResponseCompound() {
    this->initializeModel();
}

OAIEzsigntemplateformfieldgroup_ResponseCompound::~OAIEzsigntemplateformfieldgroup_ResponseCompound() {}

void OAIEzsigntemplateformfieldgroup_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplateformfieldgroup_id_isSet = false;
    m_pki_ezsigntemplateformfieldgroup_id_isValid = false;

    m_fki_ezsigntemplatedocument_id_isSet = false;
    m_fki_ezsigntemplatedocument_id_isValid = false;

    m_e_ezsigntemplateformfieldgroup_type_isSet = false;
    m_e_ezsigntemplateformfieldgroup_type_isValid = false;

    m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet = false;
    m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid = false;

    m_s_ezsigntemplateformfieldgroup_label_isSet = false;
    m_s_ezsigntemplateformfieldgroup_label_isValid = false;

    m_i_ezsigntemplateformfieldgroup_step_isSet = false;
    m_i_ezsigntemplateformfieldgroup_step_isValid = false;

    m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet = false;
    m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid = false;

    m_i_ezsigntemplateformfieldgroup_filledmin_isSet = false;
    m_i_ezsigntemplateformfieldgroup_filledmin_isValid = false;

    m_i_ezsigntemplateformfieldgroup_filledmax_isSet = false;
    m_i_ezsigntemplateformfieldgroup_filledmax_isValid = false;

    m_b_ezsigntemplateformfieldgroup_readonly_isSet = false;
    m_b_ezsigntemplateformfieldgroup_readonly_isValid = false;

    m_i_ezsigntemplateformfieldgroup_maxlength_isSet = false;
    m_i_ezsigntemplateformfieldgroup_maxlength_isValid = false;

    m_b_ezsigntemplateformfieldgroup_encrypted_isSet = false;
    m_b_ezsigntemplateformfieldgroup_encrypted_isValid = false;

    m_s_ezsigntemplateformfieldgroup_regexp_isSet = false;
    m_s_ezsigntemplateformfieldgroup_regexp_isValid = false;

    m_t_ezsigntemplateformfieldgroup_tooltip_isSet = false;
    m_t_ezsigntemplateformfieldgroup_tooltip_isValid = false;

    m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet = false;
    m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid = false;

    m_a_obj_ezsigntemplateformfieldgroupsigner_isSet = false;
    m_a_obj_ezsigntemplateformfieldgroupsigner_isValid = false;

    m_a_obj_dropdown_element_isSet = false;
    m_a_obj_dropdown_element_isValid = false;

    m_a_obj_ezsigntemplateformfield_isSet = false;
    m_a_obj_ezsigntemplateformfield_isValid = false;
}

void OAIEzsigntemplateformfieldgroup_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplateformfieldgroup_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateformfieldgroup_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplateformfieldgroup_id, json[QString("pkiEzsigntemplateformfieldgroupID")]);
    m_pki_ezsigntemplateformfieldgroup_id_isSet = !json[QString("pkiEzsigntemplateformfieldgroupID")].isNull() && m_pki_ezsigntemplateformfieldgroup_id_isValid;

    m_fki_ezsigntemplatedocument_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatedocument_id, json[QString("fkiEzsigntemplatedocumentID")]);
    m_fki_ezsigntemplatedocument_id_isSet = !json[QString("fkiEzsigntemplatedocumentID")].isNull() && m_fki_ezsigntemplatedocument_id_isValid;

    m_e_ezsigntemplateformfieldgroup_type_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplateformfieldgroup_type, json[QString("eEzsigntemplateformfieldgroupType")]);
    m_e_ezsigntemplateformfieldgroup_type_isSet = !json[QString("eEzsigntemplateformfieldgroupType")].isNull() && m_e_ezsigntemplateformfieldgroup_type_isValid;

    m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplateformfieldgroup_signerrequirement, json[QString("eEzsigntemplateformfieldgroupSignerrequirement")]);
    m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet = !json[QString("eEzsigntemplateformfieldgroupSignerrequirement")].isNull() && m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid;

    m_s_ezsigntemplateformfieldgroup_label_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplateformfieldgroup_label, json[QString("sEzsigntemplateformfieldgroupLabel")]);
    m_s_ezsigntemplateformfieldgroup_label_isSet = !json[QString("sEzsigntemplateformfieldgroupLabel")].isNull() && m_s_ezsigntemplateformfieldgroup_label_isValid;

    m_i_ezsigntemplateformfieldgroup_step_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplateformfieldgroup_step, json[QString("iEzsigntemplateformfieldgroupStep")]);
    m_i_ezsigntemplateformfieldgroup_step_isSet = !json[QString("iEzsigntemplateformfieldgroupStep")].isNull() && m_i_ezsigntemplateformfieldgroup_step_isValid;

    m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplateformfieldgroup_defaultvalue, json[QString("sEzsigntemplateformfieldgroupDefaultvalue")]);
    m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet = !json[QString("sEzsigntemplateformfieldgroupDefaultvalue")].isNull() && m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid;

    m_i_ezsigntemplateformfieldgroup_filledmin_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplateformfieldgroup_filledmin, json[QString("iEzsigntemplateformfieldgroupFilledmin")]);
    m_i_ezsigntemplateformfieldgroup_filledmin_isSet = !json[QString("iEzsigntemplateformfieldgroupFilledmin")].isNull() && m_i_ezsigntemplateformfieldgroup_filledmin_isValid;

    m_i_ezsigntemplateformfieldgroup_filledmax_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplateformfieldgroup_filledmax, json[QString("iEzsigntemplateformfieldgroupFilledmax")]);
    m_i_ezsigntemplateformfieldgroup_filledmax_isSet = !json[QString("iEzsigntemplateformfieldgroupFilledmax")].isNull() && m_i_ezsigntemplateformfieldgroup_filledmax_isValid;

    m_b_ezsigntemplateformfieldgroup_readonly_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplateformfieldgroup_readonly, json[QString("bEzsigntemplateformfieldgroupReadonly")]);
    m_b_ezsigntemplateformfieldgroup_readonly_isSet = !json[QString("bEzsigntemplateformfieldgroupReadonly")].isNull() && m_b_ezsigntemplateformfieldgroup_readonly_isValid;

    m_i_ezsigntemplateformfieldgroup_maxlength_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplateformfieldgroup_maxlength, json[QString("iEzsigntemplateformfieldgroupMaxlength")]);
    m_i_ezsigntemplateformfieldgroup_maxlength_isSet = !json[QString("iEzsigntemplateformfieldgroupMaxlength")].isNull() && m_i_ezsigntemplateformfieldgroup_maxlength_isValid;

    m_b_ezsigntemplateformfieldgroup_encrypted_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplateformfieldgroup_encrypted, json[QString("bEzsigntemplateformfieldgroupEncrypted")]);
    m_b_ezsigntemplateformfieldgroup_encrypted_isSet = !json[QString("bEzsigntemplateformfieldgroupEncrypted")].isNull() && m_b_ezsigntemplateformfieldgroup_encrypted_isValid;

    m_s_ezsigntemplateformfieldgroup_regexp_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplateformfieldgroup_regexp, json[QString("sEzsigntemplateformfieldgroupRegexp")]);
    m_s_ezsigntemplateformfieldgroup_regexp_isSet = !json[QString("sEzsigntemplateformfieldgroupRegexp")].isNull() && m_s_ezsigntemplateformfieldgroup_regexp_isValid;

    m_t_ezsigntemplateformfieldgroup_tooltip_isValid = ::OpenAPI::fromJsonValue(t_ezsigntemplateformfieldgroup_tooltip, json[QString("tEzsigntemplateformfieldgroupTooltip")]);
    m_t_ezsigntemplateformfieldgroup_tooltip_isSet = !json[QString("tEzsigntemplateformfieldgroupTooltip")].isNull() && m_t_ezsigntemplateformfieldgroup_tooltip_isValid;

    m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplateformfieldgroup_tooltipposition, json[QString("eEzsigntemplateformfieldgroupTooltipposition")]);
    m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet = !json[QString("eEzsigntemplateformfieldgroupTooltipposition")].isNull() && m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid;

    m_a_obj_ezsigntemplateformfieldgroupsigner_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplateformfieldgroupsigner, json[QString("a_objEzsigntemplateformfieldgroupsigner")]);
    m_a_obj_ezsigntemplateformfieldgroupsigner_isSet = !json[QString("a_objEzsigntemplateformfieldgroupsigner")].isNull() && m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;

    m_a_obj_dropdown_element_isValid = ::OpenAPI::fromJsonValue(a_obj_dropdown_element, json[QString("a_objDropdownElement")]);
    m_a_obj_dropdown_element_isSet = !json[QString("a_objDropdownElement")].isNull() && m_a_obj_dropdown_element_isValid;

    m_a_obj_ezsigntemplateformfield_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplateformfield, json[QString("a_objEzsigntemplateformfield")]);
    m_a_obj_ezsigntemplateformfield_isSet = !json[QString("a_objEzsigntemplateformfield")].isNull() && m_a_obj_ezsigntemplateformfield_isValid;
}

QString OAIEzsigntemplateformfieldgroup_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplateformfieldgroup_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateformfieldgroup_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateformfieldgroupID"), ::OpenAPI::toJsonValue(pki_ezsigntemplateformfieldgroup_id));
    }
    if (m_fki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatedocumentID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatedocument_id));
    }
    if (e_ezsigntemplateformfieldgroup_type.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupType"), ::OpenAPI::toJsonValue(e_ezsigntemplateformfieldgroup_type));
    }
    if (e_ezsigntemplateformfieldgroup_signerrequirement.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupSignerrequirement"), ::OpenAPI::toJsonValue(e_ezsigntemplateformfieldgroup_signerrequirement));
    }
    if (m_s_ezsigntemplateformfieldgroup_label_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupLabel"), ::OpenAPI::toJsonValue(s_ezsigntemplateformfieldgroup_label));
    }
    if (m_i_ezsigntemplateformfieldgroup_step_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupStep"), ::OpenAPI::toJsonValue(i_ezsigntemplateformfieldgroup_step));
    }
    if (m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupDefaultvalue"), ::OpenAPI::toJsonValue(s_ezsigntemplateformfieldgroup_defaultvalue));
    }
    if (m_i_ezsigntemplateformfieldgroup_filledmin_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupFilledmin"), ::OpenAPI::toJsonValue(i_ezsigntemplateformfieldgroup_filledmin));
    }
    if (m_i_ezsigntemplateformfieldgroup_filledmax_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupFilledmax"), ::OpenAPI::toJsonValue(i_ezsigntemplateformfieldgroup_filledmax));
    }
    if (m_b_ezsigntemplateformfieldgroup_readonly_isSet) {
        obj.insert(QString("bEzsigntemplateformfieldgroupReadonly"), ::OpenAPI::toJsonValue(b_ezsigntemplateformfieldgroup_readonly));
    }
    if (m_i_ezsigntemplateformfieldgroup_maxlength_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupMaxlength"), ::OpenAPI::toJsonValue(i_ezsigntemplateformfieldgroup_maxlength));
    }
    if (m_b_ezsigntemplateformfieldgroup_encrypted_isSet) {
        obj.insert(QString("bEzsigntemplateformfieldgroupEncrypted"), ::OpenAPI::toJsonValue(b_ezsigntemplateformfieldgroup_encrypted));
    }
    if (m_s_ezsigntemplateformfieldgroup_regexp_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupRegexp"), ::OpenAPI::toJsonValue(s_ezsigntemplateformfieldgroup_regexp));
    }
    if (m_t_ezsigntemplateformfieldgroup_tooltip_isSet) {
        obj.insert(QString("tEzsigntemplateformfieldgroupTooltip"), ::OpenAPI::toJsonValue(t_ezsigntemplateformfieldgroup_tooltip));
    }
    if (e_ezsigntemplateformfieldgroup_tooltipposition.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupTooltipposition"), ::OpenAPI::toJsonValue(e_ezsigntemplateformfieldgroup_tooltipposition));
    }
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

qint32 OAIEzsigntemplateformfieldgroup_ResponseCompound::getPkiEzsigntemplateformfieldgroupId() const {
    return pki_ezsigntemplateformfieldgroup_id;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setPkiEzsigntemplateformfieldgroupId(const qint32 &pki_ezsigntemplateformfieldgroup_id) {
    this->pki_ezsigntemplateformfieldgroup_id = pki_ezsigntemplateformfieldgroup_id;
    this->m_pki_ezsigntemplateformfieldgroup_id_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_pki_ezsigntemplateformfieldgroup_id_Set() const{
    return m_pki_ezsigntemplateformfieldgroup_id_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_pki_ezsigntemplateformfieldgroup_id_Valid() const{
    return m_pki_ezsigntemplateformfieldgroup_id_isValid;
}

qint32 OAIEzsigntemplateformfieldgroup_ResponseCompound::getFkiEzsigntemplatedocumentId() const {
    return fki_ezsigntemplatedocument_id;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id) {
    this->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    this->m_fki_ezsigntemplatedocument_id_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_fki_ezsigntemplatedocument_id_Set() const{
    return m_fki_ezsigntemplatedocument_id_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_fki_ezsigntemplatedocument_id_Valid() const{
    return m_fki_ezsigntemplatedocument_id_isValid;
}

OAIField_eEzsigntemplateformfieldgroupType OAIEzsigntemplateformfieldgroup_ResponseCompound::getEEzsigntemplateformfieldgroupType() const {
    return e_ezsigntemplateformfieldgroup_type;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setEEzsigntemplateformfieldgroupType(const OAIField_eEzsigntemplateformfieldgroupType &e_ezsigntemplateformfieldgroup_type) {
    this->e_ezsigntemplateformfieldgroup_type = e_ezsigntemplateformfieldgroup_type;
    this->m_e_ezsigntemplateformfieldgroup_type_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_type_Set() const{
    return m_e_ezsigntemplateformfieldgroup_type_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_type_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_type_isValid;
}

OAIField_eEzsigntemplateformfieldgroupSignerrequirement OAIEzsigntemplateformfieldgroup_ResponseCompound::getEEzsigntemplateformfieldgroupSignerrequirement() const {
    return e_ezsigntemplateformfieldgroup_signerrequirement;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setEEzsigntemplateformfieldgroupSignerrequirement(const OAIField_eEzsigntemplateformfieldgroupSignerrequirement &e_ezsigntemplateformfieldgroup_signerrequirement) {
    this->e_ezsigntemplateformfieldgroup_signerrequirement = e_ezsigntemplateformfieldgroup_signerrequirement;
    this->m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_signerrequirement_Set() const{
    return m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_signerrequirement_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid;
}

QString OAIEzsigntemplateformfieldgroup_ResponseCompound::getSEzsigntemplateformfieldgroupLabel() const {
    return s_ezsigntemplateformfieldgroup_label;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setSEzsigntemplateformfieldgroupLabel(const QString &s_ezsigntemplateformfieldgroup_label) {
    this->s_ezsigntemplateformfieldgroup_label = s_ezsigntemplateformfieldgroup_label;
    this->m_s_ezsigntemplateformfieldgroup_label_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_label_Set() const{
    return m_s_ezsigntemplateformfieldgroup_label_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_label_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_label_isValid;
}

qint32 OAIEzsigntemplateformfieldgroup_ResponseCompound::getIEzsigntemplateformfieldgroupStep() const {
    return i_ezsigntemplateformfieldgroup_step;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setIEzsigntemplateformfieldgroupStep(const qint32 &i_ezsigntemplateformfieldgroup_step) {
    this->i_ezsigntemplateformfieldgroup_step = i_ezsigntemplateformfieldgroup_step;
    this->m_i_ezsigntemplateformfieldgroup_step_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_step_Set() const{
    return m_i_ezsigntemplateformfieldgroup_step_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_step_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_step_isValid;
}

QString OAIEzsigntemplateformfieldgroup_ResponseCompound::getSEzsigntemplateformfieldgroupDefaultvalue() const {
    return s_ezsigntemplateformfieldgroup_defaultvalue;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setSEzsigntemplateformfieldgroupDefaultvalue(const QString &s_ezsigntemplateformfieldgroup_defaultvalue) {
    this->s_ezsigntemplateformfieldgroup_defaultvalue = s_ezsigntemplateformfieldgroup_defaultvalue;
    this->m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_defaultvalue_Set() const{
    return m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_defaultvalue_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid;
}

qint32 OAIEzsigntemplateformfieldgroup_ResponseCompound::getIEzsigntemplateformfieldgroupFilledmin() const {
    return i_ezsigntemplateformfieldgroup_filledmin;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setIEzsigntemplateformfieldgroupFilledmin(const qint32 &i_ezsigntemplateformfieldgroup_filledmin) {
    this->i_ezsigntemplateformfieldgroup_filledmin = i_ezsigntemplateformfieldgroup_filledmin;
    this->m_i_ezsigntemplateformfieldgroup_filledmin_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_filledmin_Set() const{
    return m_i_ezsigntemplateformfieldgroup_filledmin_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_filledmin_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_filledmin_isValid;
}

qint32 OAIEzsigntemplateformfieldgroup_ResponseCompound::getIEzsigntemplateformfieldgroupFilledmax() const {
    return i_ezsigntemplateformfieldgroup_filledmax;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setIEzsigntemplateformfieldgroupFilledmax(const qint32 &i_ezsigntemplateformfieldgroup_filledmax) {
    this->i_ezsigntemplateformfieldgroup_filledmax = i_ezsigntemplateformfieldgroup_filledmax;
    this->m_i_ezsigntemplateformfieldgroup_filledmax_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_filledmax_Set() const{
    return m_i_ezsigntemplateformfieldgroup_filledmax_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_filledmax_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_filledmax_isValid;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::isBEzsigntemplateformfieldgroupReadonly() const {
    return b_ezsigntemplateformfieldgroup_readonly;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setBEzsigntemplateformfieldgroupReadonly(const bool &b_ezsigntemplateformfieldgroup_readonly) {
    this->b_ezsigntemplateformfieldgroup_readonly = b_ezsigntemplateformfieldgroup_readonly;
    this->m_b_ezsigntemplateformfieldgroup_readonly_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_b_ezsigntemplateformfieldgroup_readonly_Set() const{
    return m_b_ezsigntemplateformfieldgroup_readonly_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_b_ezsigntemplateformfieldgroup_readonly_Valid() const{
    return m_b_ezsigntemplateformfieldgroup_readonly_isValid;
}

qint32 OAIEzsigntemplateformfieldgroup_ResponseCompound::getIEzsigntemplateformfieldgroupMaxlength() const {
    return i_ezsigntemplateformfieldgroup_maxlength;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setIEzsigntemplateformfieldgroupMaxlength(const qint32 &i_ezsigntemplateformfieldgroup_maxlength) {
    this->i_ezsigntemplateformfieldgroup_maxlength = i_ezsigntemplateformfieldgroup_maxlength;
    this->m_i_ezsigntemplateformfieldgroup_maxlength_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_maxlength_Set() const{
    return m_i_ezsigntemplateformfieldgroup_maxlength_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_maxlength_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_maxlength_isValid;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::isBEzsigntemplateformfieldgroupEncrypted() const {
    return b_ezsigntemplateformfieldgroup_encrypted;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setBEzsigntemplateformfieldgroupEncrypted(const bool &b_ezsigntemplateformfieldgroup_encrypted) {
    this->b_ezsigntemplateformfieldgroup_encrypted = b_ezsigntemplateformfieldgroup_encrypted;
    this->m_b_ezsigntemplateformfieldgroup_encrypted_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_b_ezsigntemplateformfieldgroup_encrypted_Set() const{
    return m_b_ezsigntemplateformfieldgroup_encrypted_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_b_ezsigntemplateformfieldgroup_encrypted_Valid() const{
    return m_b_ezsigntemplateformfieldgroup_encrypted_isValid;
}

QString OAIEzsigntemplateformfieldgroup_ResponseCompound::getSEzsigntemplateformfieldgroupRegexp() const {
    return s_ezsigntemplateformfieldgroup_regexp;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setSEzsigntemplateformfieldgroupRegexp(const QString &s_ezsigntemplateformfieldgroup_regexp) {
    this->s_ezsigntemplateformfieldgroup_regexp = s_ezsigntemplateformfieldgroup_regexp;
    this->m_s_ezsigntemplateformfieldgroup_regexp_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_regexp_Set() const{
    return m_s_ezsigntemplateformfieldgroup_regexp_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_regexp_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_regexp_isValid;
}

QString OAIEzsigntemplateformfieldgroup_ResponseCompound::getTEzsigntemplateformfieldgroupTooltip() const {
    return t_ezsigntemplateformfieldgroup_tooltip;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setTEzsigntemplateformfieldgroupTooltip(const QString &t_ezsigntemplateformfieldgroup_tooltip) {
    this->t_ezsigntemplateformfieldgroup_tooltip = t_ezsigntemplateformfieldgroup_tooltip;
    this->m_t_ezsigntemplateformfieldgroup_tooltip_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_t_ezsigntemplateformfieldgroup_tooltip_Set() const{
    return m_t_ezsigntemplateformfieldgroup_tooltip_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_t_ezsigntemplateformfieldgroup_tooltip_Valid() const{
    return m_t_ezsigntemplateformfieldgroup_tooltip_isValid;
}

OAIField_eEzsigntemplateformfieldgroupTooltipposition OAIEzsigntemplateformfieldgroup_ResponseCompound::getEEzsigntemplateformfieldgroupTooltipposition() const {
    return e_ezsigntemplateformfieldgroup_tooltipposition;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setEEzsigntemplateformfieldgroupTooltipposition(const OAIField_eEzsigntemplateformfieldgroupTooltipposition &e_ezsigntemplateformfieldgroup_tooltipposition) {
    this->e_ezsigntemplateformfieldgroup_tooltipposition = e_ezsigntemplateformfieldgroup_tooltipposition;
    this->m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_tooltipposition_Set() const{
    return m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_tooltipposition_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid;
}

QList<OAIEzsigntemplateformfieldgroupsigner_ResponseCompound> OAIEzsigntemplateformfieldgroup_ResponseCompound::getAObjEzsigntemplateformfieldgroupsigner() const {
    return a_obj_ezsigntemplateformfieldgroupsigner;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setAObjEzsigntemplateformfieldgroupsigner(const QList<OAIEzsigntemplateformfieldgroupsigner_ResponseCompound> &a_obj_ezsigntemplateformfieldgroupsigner) {
    this->a_obj_ezsigntemplateformfieldgroupsigner = a_obj_ezsigntemplateformfieldgroupsigner;
    this->m_a_obj_ezsigntemplateformfieldgroupsigner_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_a_obj_ezsigntemplateformfieldgroupsigner_Set() const{
    return m_a_obj_ezsigntemplateformfieldgroupsigner_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_a_obj_ezsigntemplateformfieldgroupsigner_Valid() const{
    return m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;
}

QList<OAICustom_DropdownElement_ResponseCompound> OAIEzsigntemplateformfieldgroup_ResponseCompound::getAObjDropdownElement() const {
    return a_obj_dropdown_element;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setAObjDropdownElement(const QList<OAICustom_DropdownElement_ResponseCompound> &a_obj_dropdown_element) {
    this->a_obj_dropdown_element = a_obj_dropdown_element;
    this->m_a_obj_dropdown_element_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_a_obj_dropdown_element_Set() const{
    return m_a_obj_dropdown_element_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_a_obj_dropdown_element_Valid() const{
    return m_a_obj_dropdown_element_isValid;
}

QList<OAIEzsigntemplateformfield_ResponseCompound> OAIEzsigntemplateformfieldgroup_ResponseCompound::getAObjEzsigntemplateformfield() const {
    return a_obj_ezsigntemplateformfield;
}
void OAIEzsigntemplateformfieldgroup_ResponseCompound::setAObjEzsigntemplateformfield(const QList<OAIEzsigntemplateformfield_ResponseCompound> &a_obj_ezsigntemplateformfield) {
    this->a_obj_ezsigntemplateformfield = a_obj_ezsigntemplateformfield;
    this->m_a_obj_ezsigntemplateformfield_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_a_obj_ezsigntemplateformfield_Set() const{
    return m_a_obj_ezsigntemplateformfield_isSet;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::is_a_obj_ezsigntemplateformfield_Valid() const{
    return m_a_obj_ezsigntemplateformfield_isValid;
}

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplateformfieldgroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsigntemplateformfieldgroup_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsigntemplateformfieldgroup_signerrequirement.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateformfieldgroup_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfieldgroup_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfieldgroup_filledmin_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfieldgroup_filledmax_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplateformfieldgroup_readonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfieldgroup_maxlength_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplateformfieldgroup_encrypted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateformfieldgroup_regexp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsigntemplateformfieldgroup_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsigntemplateformfieldgroup_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }

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

bool OAIEzsigntemplateformfieldgroup_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplateformfieldgroup_id_isValid && m_fki_ezsigntemplatedocument_id_isValid && m_e_ezsigntemplateformfieldgroup_type_isValid && m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid && m_s_ezsigntemplateformfieldgroup_label_isValid && m_i_ezsigntemplateformfieldgroup_step_isValid && m_i_ezsigntemplateformfieldgroup_filledmin_isValid && m_i_ezsigntemplateformfieldgroup_filledmax_isValid && m_b_ezsigntemplateformfieldgroup_readonly_isValid && m_a_obj_ezsigntemplateformfieldgroupsigner_isValid && m_a_obj_ezsigntemplateformfield_isValid && true;
}

} // namespace OpenAPI

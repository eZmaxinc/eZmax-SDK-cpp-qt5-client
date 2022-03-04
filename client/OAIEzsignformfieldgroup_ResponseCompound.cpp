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

#include "OAIEzsignformfieldgroup_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfieldgroup_ResponseCompound::OAIEzsignformfieldgroup_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfieldgroup_ResponseCompound::OAIEzsignformfieldgroup_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignformfieldgroup_ResponseCompound::~OAIEzsignformfieldgroup_ResponseCompound() {}

void OAIEzsignformfieldgroup_ResponseCompound::initializeModel() {

    m_pki_ezsignformfieldgroup_id_isSet = false;
    m_pki_ezsignformfieldgroup_id_isValid = false;

    m_fki_ezsigndocument_id_isSet = false;
    m_fki_ezsigndocument_id_isValid = false;

    m_e_ezsignformfieldgroup_type_isSet = false;
    m_e_ezsignformfieldgroup_type_isValid = false;

    m_e_ezsignformfieldgroup_signerrequirement_isSet = false;
    m_e_ezsignformfieldgroup_signerrequirement_isValid = false;

    m_s_ezsignformfieldgroup_label_isSet = false;
    m_s_ezsignformfieldgroup_label_isValid = false;

    m_i_ezsignformfieldgroup_step_isSet = false;
    m_i_ezsignformfieldgroup_step_isValid = false;

    m_s_ezsignformfieldgroup_defaultvalue_isSet = false;
    m_s_ezsignformfieldgroup_defaultvalue_isValid = false;

    m_i_ezsignformfieldgroup_filledmin_isSet = false;
    m_i_ezsignformfieldgroup_filledmin_isValid = false;

    m_i_ezsignformfieldgroup_filledmax_isSet = false;
    m_i_ezsignformfieldgroup_filledmax_isValid = false;

    m_b_ezsignformfieldgroup_readonly_isSet = false;
    m_b_ezsignformfieldgroup_readonly_isValid = false;

    m_i_ezsignformfieldgroup_maxlength_isSet = false;
    m_i_ezsignformfieldgroup_maxlength_isValid = false;

    m_b_ezsignformfieldgroup_encrypted_isSet = false;
    m_b_ezsignformfieldgroup_encrypted_isValid = false;

    m_s_ezsignformfieldgroup_regexp_isSet = false;
    m_s_ezsignformfieldgroup_regexp_isValid = false;

    m_t_ezsignformfieldgroup_tooltip_isSet = false;
    m_t_ezsignformfieldgroup_tooltip_isValid = false;

    m_e_ezsignformfieldgroup_tooltipposition_isSet = false;
    m_e_ezsignformfieldgroup_tooltipposition_isValid = false;

    m_a_obj_ezsignformfield_isSet = false;
    m_a_obj_ezsignformfield_isValid = false;

    m_a_obj_dropdown_element_isSet = false;
    m_a_obj_dropdown_element_isValid = false;

    m_a_obj_ezsignformfieldgroupsigner_isSet = false;
    m_a_obj_ezsignformfieldgroupsigner_isValid = false;
}

void OAIEzsignformfieldgroup_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfieldgroup_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignformfieldgroup_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignformfieldgroup_id, json[QString("pkiEzsignformfieldgroupID")]);
    m_pki_ezsignformfieldgroup_id_isSet = !json[QString("pkiEzsignformfieldgroupID")].isNull() && m_pki_ezsignformfieldgroup_id_isValid;

    m_fki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigndocument_id, json[QString("fkiEzsigndocumentID")]);
    m_fki_ezsigndocument_id_isSet = !json[QString("fkiEzsigndocumentID")].isNull() && m_fki_ezsigndocument_id_isValid;

    m_e_ezsignformfieldgroup_type_isValid = ::OpenAPI::fromJsonValue(e_ezsignformfieldgroup_type, json[QString("eEzsignformfieldgroupType")]);
    m_e_ezsignformfieldgroup_type_isSet = !json[QString("eEzsignformfieldgroupType")].isNull() && m_e_ezsignformfieldgroup_type_isValid;

    m_e_ezsignformfieldgroup_signerrequirement_isValid = ::OpenAPI::fromJsonValue(e_ezsignformfieldgroup_signerrequirement, json[QString("eEzsignformfieldgroupSignerrequirement")]);
    m_e_ezsignformfieldgroup_signerrequirement_isSet = !json[QString("eEzsignformfieldgroupSignerrequirement")].isNull() && m_e_ezsignformfieldgroup_signerrequirement_isValid;

    m_s_ezsignformfieldgroup_label_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfieldgroup_label, json[QString("sEzsignformfieldgroupLabel")]);
    m_s_ezsignformfieldgroup_label_isSet = !json[QString("sEzsignformfieldgroupLabel")].isNull() && m_s_ezsignformfieldgroup_label_isValid;

    m_i_ezsignformfieldgroup_step_isValid = ::OpenAPI::fromJsonValue(i_ezsignformfieldgroup_step, json[QString("iEzsignformfieldgroupStep")]);
    m_i_ezsignformfieldgroup_step_isSet = !json[QString("iEzsignformfieldgroupStep")].isNull() && m_i_ezsignformfieldgroup_step_isValid;

    m_s_ezsignformfieldgroup_defaultvalue_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfieldgroup_defaultvalue, json[QString("sEzsignformfieldgroupDefaultvalue")]);
    m_s_ezsignformfieldgroup_defaultvalue_isSet = !json[QString("sEzsignformfieldgroupDefaultvalue")].isNull() && m_s_ezsignformfieldgroup_defaultvalue_isValid;

    m_i_ezsignformfieldgroup_filledmin_isValid = ::OpenAPI::fromJsonValue(i_ezsignformfieldgroup_filledmin, json[QString("iEzsignformfieldgroupFilledmin")]);
    m_i_ezsignformfieldgroup_filledmin_isSet = !json[QString("iEzsignformfieldgroupFilledmin")].isNull() && m_i_ezsignformfieldgroup_filledmin_isValid;

    m_i_ezsignformfieldgroup_filledmax_isValid = ::OpenAPI::fromJsonValue(i_ezsignformfieldgroup_filledmax, json[QString("iEzsignformfieldgroupFilledmax")]);
    m_i_ezsignformfieldgroup_filledmax_isSet = !json[QString("iEzsignformfieldgroupFilledmax")].isNull() && m_i_ezsignformfieldgroup_filledmax_isValid;

    m_b_ezsignformfieldgroup_readonly_isValid = ::OpenAPI::fromJsonValue(b_ezsignformfieldgroup_readonly, json[QString("bEzsignformfieldgroupReadonly")]);
    m_b_ezsignformfieldgroup_readonly_isSet = !json[QString("bEzsignformfieldgroupReadonly")].isNull() && m_b_ezsignformfieldgroup_readonly_isValid;

    m_i_ezsignformfieldgroup_maxlength_isValid = ::OpenAPI::fromJsonValue(i_ezsignformfieldgroup_maxlength, json[QString("iEzsignformfieldgroupMaxlength")]);
    m_i_ezsignformfieldgroup_maxlength_isSet = !json[QString("iEzsignformfieldgroupMaxlength")].isNull() && m_i_ezsignformfieldgroup_maxlength_isValid;

    m_b_ezsignformfieldgroup_encrypted_isValid = ::OpenAPI::fromJsonValue(b_ezsignformfieldgroup_encrypted, json[QString("bEzsignformfieldgroupEncrypted")]);
    m_b_ezsignformfieldgroup_encrypted_isSet = !json[QString("bEzsignformfieldgroupEncrypted")].isNull() && m_b_ezsignformfieldgroup_encrypted_isValid;

    m_s_ezsignformfieldgroup_regexp_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfieldgroup_regexp, json[QString("sEzsignformfieldgroupRegexp")]);
    m_s_ezsignformfieldgroup_regexp_isSet = !json[QString("sEzsignformfieldgroupRegexp")].isNull() && m_s_ezsignformfieldgroup_regexp_isValid;

    m_t_ezsignformfieldgroup_tooltip_isValid = ::OpenAPI::fromJsonValue(t_ezsignformfieldgroup_tooltip, json[QString("tEzsignformfieldgroupTooltip")]);
    m_t_ezsignformfieldgroup_tooltip_isSet = !json[QString("tEzsignformfieldgroupTooltip")].isNull() && m_t_ezsignformfieldgroup_tooltip_isValid;

    m_e_ezsignformfieldgroup_tooltipposition_isValid = ::OpenAPI::fromJsonValue(e_ezsignformfieldgroup_tooltipposition, json[QString("eEzsignformfieldgroupTooltipposition")]);
    m_e_ezsignformfieldgroup_tooltipposition_isSet = !json[QString("eEzsignformfieldgroupTooltipposition")].isNull() && m_e_ezsignformfieldgroup_tooltipposition_isValid;

    m_a_obj_ezsignformfield_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfield, json[QString("a_objEzsignformfield")]);
    m_a_obj_ezsignformfield_isSet = !json[QString("a_objEzsignformfield")].isNull() && m_a_obj_ezsignformfield_isValid;

    m_a_obj_dropdown_element_isValid = ::OpenAPI::fromJsonValue(a_obj_dropdown_element, json[QString("a_objDropdownElement")]);
    m_a_obj_dropdown_element_isSet = !json[QString("a_objDropdownElement")].isNull() && m_a_obj_dropdown_element_isValid;

    m_a_obj_ezsignformfieldgroupsigner_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfieldgroupsigner, json[QString("a_objEzsignformfieldgroupsigner")]);
    m_a_obj_ezsignformfieldgroupsigner_isSet = !json[QString("a_objEzsignformfieldgroupsigner")].isNull() && m_a_obj_ezsignformfieldgroupsigner_isValid;
}

QString OAIEzsignformfieldgroup_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfieldgroup_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignformfieldgroup_id_isSet) {
        obj.insert(QString("pkiEzsignformfieldgroupID"), ::OpenAPI::toJsonValue(pki_ezsignformfieldgroup_id));
    }
    if (m_fki_ezsigndocument_id_isSet) {
        obj.insert(QString("fkiEzsigndocumentID"), ::OpenAPI::toJsonValue(fki_ezsigndocument_id));
    }
    if (e_ezsignformfieldgroup_type.isSet()) {
        obj.insert(QString("eEzsignformfieldgroupType"), ::OpenAPI::toJsonValue(e_ezsignformfieldgroup_type));
    }
    if (e_ezsignformfieldgroup_signerrequirement.isSet()) {
        obj.insert(QString("eEzsignformfieldgroupSignerrequirement"), ::OpenAPI::toJsonValue(e_ezsignformfieldgroup_signerrequirement));
    }
    if (m_s_ezsignformfieldgroup_label_isSet) {
        obj.insert(QString("sEzsignformfieldgroupLabel"), ::OpenAPI::toJsonValue(s_ezsignformfieldgroup_label));
    }
    if (m_i_ezsignformfieldgroup_step_isSet) {
        obj.insert(QString("iEzsignformfieldgroupStep"), ::OpenAPI::toJsonValue(i_ezsignformfieldgroup_step));
    }
    if (m_s_ezsignformfieldgroup_defaultvalue_isSet) {
        obj.insert(QString("sEzsignformfieldgroupDefaultvalue"), ::OpenAPI::toJsonValue(s_ezsignformfieldgroup_defaultvalue));
    }
    if (m_i_ezsignformfieldgroup_filledmin_isSet) {
        obj.insert(QString("iEzsignformfieldgroupFilledmin"), ::OpenAPI::toJsonValue(i_ezsignformfieldgroup_filledmin));
    }
    if (m_i_ezsignformfieldgroup_filledmax_isSet) {
        obj.insert(QString("iEzsignformfieldgroupFilledmax"), ::OpenAPI::toJsonValue(i_ezsignformfieldgroup_filledmax));
    }
    if (m_b_ezsignformfieldgroup_readonly_isSet) {
        obj.insert(QString("bEzsignformfieldgroupReadonly"), ::OpenAPI::toJsonValue(b_ezsignformfieldgroup_readonly));
    }
    if (m_i_ezsignformfieldgroup_maxlength_isSet) {
        obj.insert(QString("iEzsignformfieldgroupMaxlength"), ::OpenAPI::toJsonValue(i_ezsignformfieldgroup_maxlength));
    }
    if (m_b_ezsignformfieldgroup_encrypted_isSet) {
        obj.insert(QString("bEzsignformfieldgroupEncrypted"), ::OpenAPI::toJsonValue(b_ezsignformfieldgroup_encrypted));
    }
    if (m_s_ezsignformfieldgroup_regexp_isSet) {
        obj.insert(QString("sEzsignformfieldgroupRegexp"), ::OpenAPI::toJsonValue(s_ezsignformfieldgroup_regexp));
    }
    if (m_t_ezsignformfieldgroup_tooltip_isSet) {
        obj.insert(QString("tEzsignformfieldgroupTooltip"), ::OpenAPI::toJsonValue(t_ezsignformfieldgroup_tooltip));
    }
    if (e_ezsignformfieldgroup_tooltipposition.isSet()) {
        obj.insert(QString("eEzsignformfieldgroupTooltipposition"), ::OpenAPI::toJsonValue(e_ezsignformfieldgroup_tooltipposition));
    }
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

qint32 OAIEzsignformfieldgroup_ResponseCompound::getPkiEzsignformfieldgroupId() const {
    return pki_ezsignformfieldgroup_id;
}
void OAIEzsignformfieldgroup_ResponseCompound::setPkiEzsignformfieldgroupId(const qint32 &pki_ezsignformfieldgroup_id) {
    this->pki_ezsignformfieldgroup_id = pki_ezsignformfieldgroup_id;
    this->m_pki_ezsignformfieldgroup_id_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_pki_ezsignformfieldgroup_id_Set() const{
    return m_pki_ezsignformfieldgroup_id_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_pki_ezsignformfieldgroup_id_Valid() const{
    return m_pki_ezsignformfieldgroup_id_isValid;
}

qint32 OAIEzsignformfieldgroup_ResponseCompound::getFkiEzsigndocumentId() const {
    return fki_ezsigndocument_id;
}
void OAIEzsignformfieldgroup_ResponseCompound::setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id) {
    this->fki_ezsigndocument_id = fki_ezsigndocument_id;
    this->m_fki_ezsigndocument_id_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_fki_ezsigndocument_id_Set() const{
    return m_fki_ezsigndocument_id_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_fki_ezsigndocument_id_Valid() const{
    return m_fki_ezsigndocument_id_isValid;
}

OAIField_eEzsignformfieldgroupType OAIEzsignformfieldgroup_ResponseCompound::getEEzsignformfieldgroupType() const {
    return e_ezsignformfieldgroup_type;
}
void OAIEzsignformfieldgroup_ResponseCompound::setEEzsignformfieldgroupType(const OAIField_eEzsignformfieldgroupType &e_ezsignformfieldgroup_type) {
    this->e_ezsignformfieldgroup_type = e_ezsignformfieldgroup_type;
    this->m_e_ezsignformfieldgroup_type_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_e_ezsignformfieldgroup_type_Set() const{
    return m_e_ezsignformfieldgroup_type_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_e_ezsignformfieldgroup_type_Valid() const{
    return m_e_ezsignformfieldgroup_type_isValid;
}

OAIField_eEzsignformfieldgroupSignerrequirement OAIEzsignformfieldgroup_ResponseCompound::getEEzsignformfieldgroupSignerrequirement() const {
    return e_ezsignformfieldgroup_signerrequirement;
}
void OAIEzsignformfieldgroup_ResponseCompound::setEEzsignformfieldgroupSignerrequirement(const OAIField_eEzsignformfieldgroupSignerrequirement &e_ezsignformfieldgroup_signerrequirement) {
    this->e_ezsignformfieldgroup_signerrequirement = e_ezsignformfieldgroup_signerrequirement;
    this->m_e_ezsignformfieldgroup_signerrequirement_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_e_ezsignformfieldgroup_signerrequirement_Set() const{
    return m_e_ezsignformfieldgroup_signerrequirement_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_e_ezsignformfieldgroup_signerrequirement_Valid() const{
    return m_e_ezsignformfieldgroup_signerrequirement_isValid;
}

QString OAIEzsignformfieldgroup_ResponseCompound::getSEzsignformfieldgroupLabel() const {
    return s_ezsignformfieldgroup_label;
}
void OAIEzsignformfieldgroup_ResponseCompound::setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label) {
    this->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    this->m_s_ezsignformfieldgroup_label_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_s_ezsignformfieldgroup_label_Set() const{
    return m_s_ezsignformfieldgroup_label_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_s_ezsignformfieldgroup_label_Valid() const{
    return m_s_ezsignformfieldgroup_label_isValid;
}

qint32 OAIEzsignformfieldgroup_ResponseCompound::getIEzsignformfieldgroupStep() const {
    return i_ezsignformfieldgroup_step;
}
void OAIEzsignformfieldgroup_ResponseCompound::setIEzsignformfieldgroupStep(const qint32 &i_ezsignformfieldgroup_step) {
    this->i_ezsignformfieldgroup_step = i_ezsignformfieldgroup_step;
    this->m_i_ezsignformfieldgroup_step_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_i_ezsignformfieldgroup_step_Set() const{
    return m_i_ezsignformfieldgroup_step_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_i_ezsignformfieldgroup_step_Valid() const{
    return m_i_ezsignformfieldgroup_step_isValid;
}

QString OAIEzsignformfieldgroup_ResponseCompound::getSEzsignformfieldgroupDefaultvalue() const {
    return s_ezsignformfieldgroup_defaultvalue;
}
void OAIEzsignformfieldgroup_ResponseCompound::setSEzsignformfieldgroupDefaultvalue(const QString &s_ezsignformfieldgroup_defaultvalue) {
    this->s_ezsignformfieldgroup_defaultvalue = s_ezsignformfieldgroup_defaultvalue;
    this->m_s_ezsignformfieldgroup_defaultvalue_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_s_ezsignformfieldgroup_defaultvalue_Set() const{
    return m_s_ezsignformfieldgroup_defaultvalue_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_s_ezsignformfieldgroup_defaultvalue_Valid() const{
    return m_s_ezsignformfieldgroup_defaultvalue_isValid;
}

qint32 OAIEzsignformfieldgroup_ResponseCompound::getIEzsignformfieldgroupFilledmin() const {
    return i_ezsignformfieldgroup_filledmin;
}
void OAIEzsignformfieldgroup_ResponseCompound::setIEzsignformfieldgroupFilledmin(const qint32 &i_ezsignformfieldgroup_filledmin) {
    this->i_ezsignformfieldgroup_filledmin = i_ezsignformfieldgroup_filledmin;
    this->m_i_ezsignformfieldgroup_filledmin_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_i_ezsignformfieldgroup_filledmin_Set() const{
    return m_i_ezsignformfieldgroup_filledmin_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_i_ezsignformfieldgroup_filledmin_Valid() const{
    return m_i_ezsignformfieldgroup_filledmin_isValid;
}

qint32 OAIEzsignformfieldgroup_ResponseCompound::getIEzsignformfieldgroupFilledmax() const {
    return i_ezsignformfieldgroup_filledmax;
}
void OAIEzsignformfieldgroup_ResponseCompound::setIEzsignformfieldgroupFilledmax(const qint32 &i_ezsignformfieldgroup_filledmax) {
    this->i_ezsignformfieldgroup_filledmax = i_ezsignformfieldgroup_filledmax;
    this->m_i_ezsignformfieldgroup_filledmax_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_i_ezsignformfieldgroup_filledmax_Set() const{
    return m_i_ezsignformfieldgroup_filledmax_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_i_ezsignformfieldgroup_filledmax_Valid() const{
    return m_i_ezsignformfieldgroup_filledmax_isValid;
}

bool OAIEzsignformfieldgroup_ResponseCompound::isBEzsignformfieldgroupReadonly() const {
    return b_ezsignformfieldgroup_readonly;
}
void OAIEzsignformfieldgroup_ResponseCompound::setBEzsignformfieldgroupReadonly(const bool &b_ezsignformfieldgroup_readonly) {
    this->b_ezsignformfieldgroup_readonly = b_ezsignformfieldgroup_readonly;
    this->m_b_ezsignformfieldgroup_readonly_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_b_ezsignformfieldgroup_readonly_Set() const{
    return m_b_ezsignformfieldgroup_readonly_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_b_ezsignformfieldgroup_readonly_Valid() const{
    return m_b_ezsignformfieldgroup_readonly_isValid;
}

qint32 OAIEzsignformfieldgroup_ResponseCompound::getIEzsignformfieldgroupMaxlength() const {
    return i_ezsignformfieldgroup_maxlength;
}
void OAIEzsignformfieldgroup_ResponseCompound::setIEzsignformfieldgroupMaxlength(const qint32 &i_ezsignformfieldgroup_maxlength) {
    this->i_ezsignformfieldgroup_maxlength = i_ezsignformfieldgroup_maxlength;
    this->m_i_ezsignformfieldgroup_maxlength_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_i_ezsignformfieldgroup_maxlength_Set() const{
    return m_i_ezsignformfieldgroup_maxlength_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_i_ezsignformfieldgroup_maxlength_Valid() const{
    return m_i_ezsignformfieldgroup_maxlength_isValid;
}

bool OAIEzsignformfieldgroup_ResponseCompound::isBEzsignformfieldgroupEncrypted() const {
    return b_ezsignformfieldgroup_encrypted;
}
void OAIEzsignformfieldgroup_ResponseCompound::setBEzsignformfieldgroupEncrypted(const bool &b_ezsignformfieldgroup_encrypted) {
    this->b_ezsignformfieldgroup_encrypted = b_ezsignformfieldgroup_encrypted;
    this->m_b_ezsignformfieldgroup_encrypted_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_b_ezsignformfieldgroup_encrypted_Set() const{
    return m_b_ezsignformfieldgroup_encrypted_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_b_ezsignformfieldgroup_encrypted_Valid() const{
    return m_b_ezsignformfieldgroup_encrypted_isValid;
}

QString OAIEzsignformfieldgroup_ResponseCompound::getSEzsignformfieldgroupRegexp() const {
    return s_ezsignformfieldgroup_regexp;
}
void OAIEzsignformfieldgroup_ResponseCompound::setSEzsignformfieldgroupRegexp(const QString &s_ezsignformfieldgroup_regexp) {
    this->s_ezsignformfieldgroup_regexp = s_ezsignformfieldgroup_regexp;
    this->m_s_ezsignformfieldgroup_regexp_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_s_ezsignformfieldgroup_regexp_Set() const{
    return m_s_ezsignformfieldgroup_regexp_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_s_ezsignformfieldgroup_regexp_Valid() const{
    return m_s_ezsignformfieldgroup_regexp_isValid;
}

QString OAIEzsignformfieldgroup_ResponseCompound::getTEzsignformfieldgroupTooltip() const {
    return t_ezsignformfieldgroup_tooltip;
}
void OAIEzsignformfieldgroup_ResponseCompound::setTEzsignformfieldgroupTooltip(const QString &t_ezsignformfieldgroup_tooltip) {
    this->t_ezsignformfieldgroup_tooltip = t_ezsignformfieldgroup_tooltip;
    this->m_t_ezsignformfieldgroup_tooltip_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_t_ezsignformfieldgroup_tooltip_Set() const{
    return m_t_ezsignformfieldgroup_tooltip_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_t_ezsignformfieldgroup_tooltip_Valid() const{
    return m_t_ezsignformfieldgroup_tooltip_isValid;
}

OAIField_eEzsignformfieldgroupTooltipposition OAIEzsignformfieldgroup_ResponseCompound::getEEzsignformfieldgroupTooltipposition() const {
    return e_ezsignformfieldgroup_tooltipposition;
}
void OAIEzsignformfieldgroup_ResponseCompound::setEEzsignformfieldgroupTooltipposition(const OAIField_eEzsignformfieldgroupTooltipposition &e_ezsignformfieldgroup_tooltipposition) {
    this->e_ezsignformfieldgroup_tooltipposition = e_ezsignformfieldgroup_tooltipposition;
    this->m_e_ezsignformfieldgroup_tooltipposition_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_e_ezsignformfieldgroup_tooltipposition_Set() const{
    return m_e_ezsignformfieldgroup_tooltipposition_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_e_ezsignformfieldgroup_tooltipposition_Valid() const{
    return m_e_ezsignformfieldgroup_tooltipposition_isValid;
}

QList<OAIEzsignformfield_ResponseCompound> OAIEzsignformfieldgroup_ResponseCompound::getAObjEzsignformfield() const {
    return a_obj_ezsignformfield;
}
void OAIEzsignformfieldgroup_ResponseCompound::setAObjEzsignformfield(const QList<OAIEzsignformfield_ResponseCompound> &a_obj_ezsignformfield) {
    this->a_obj_ezsignformfield = a_obj_ezsignformfield;
    this->m_a_obj_ezsignformfield_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_a_obj_ezsignformfield_Set() const{
    return m_a_obj_ezsignformfield_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_a_obj_ezsignformfield_Valid() const{
    return m_a_obj_ezsignformfield_isValid;
}

QList<OAICustom_DropdownElement_ResponseCompound> OAIEzsignformfieldgroup_ResponseCompound::getAObjDropdownElement() const {
    return a_obj_dropdown_element;
}
void OAIEzsignformfieldgroup_ResponseCompound::setAObjDropdownElement(const QList<OAICustom_DropdownElement_ResponseCompound> &a_obj_dropdown_element) {
    this->a_obj_dropdown_element = a_obj_dropdown_element;
    this->m_a_obj_dropdown_element_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_a_obj_dropdown_element_Set() const{
    return m_a_obj_dropdown_element_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_a_obj_dropdown_element_Valid() const{
    return m_a_obj_dropdown_element_isValid;
}

OAIEzsignformfieldgroupsigner_ResponseCompound OAIEzsignformfieldgroup_ResponseCompound::getAObjEzsignformfieldgroupsigner() const {
    return a_obj_ezsignformfieldgroupsigner;
}
void OAIEzsignformfieldgroup_ResponseCompound::setAObjEzsignformfieldgroupsigner(const OAIEzsignformfieldgroupsigner_ResponseCompound &a_obj_ezsignformfieldgroupsigner) {
    this->a_obj_ezsignformfieldgroupsigner = a_obj_ezsignformfieldgroupsigner;
    this->m_a_obj_ezsignformfieldgroupsigner_isSet = true;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_a_obj_ezsignformfieldgroupsigner_Set() const{
    return m_a_obj_ezsignformfieldgroupsigner_isSet;
}

bool OAIEzsignformfieldgroup_ResponseCompound::is_a_obj_ezsignformfieldgroupsigner_Valid() const{
    return m_a_obj_ezsignformfieldgroupsigner_isValid;
}

bool OAIEzsignformfieldgroup_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignformfieldgroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignformfieldgroup_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignformfieldgroup_signerrequirement.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfieldgroup_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfieldgroup_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfieldgroup_defaultvalue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfieldgroup_filledmin_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfieldgroup_filledmax_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignformfieldgroup_readonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfieldgroup_maxlength_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignformfieldgroup_encrypted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfieldgroup_regexp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignformfieldgroup_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignformfieldgroup_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }

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

bool OAIEzsignformfieldgroup_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignformfieldgroup_id_isValid && m_fki_ezsigndocument_id_isValid && m_e_ezsignformfieldgroup_type_isValid && m_e_ezsignformfieldgroup_signerrequirement_isValid && m_s_ezsignformfieldgroup_label_isValid && m_i_ezsignformfieldgroup_step_isValid && m_s_ezsignformfieldgroup_defaultvalue_isValid && m_i_ezsignformfieldgroup_filledmin_isValid && m_i_ezsignformfieldgroup_filledmax_isValid && m_b_ezsignformfieldgroup_readonly_isValid && m_a_obj_ezsignformfield_isValid && m_a_obj_ezsignformfieldgroupsigner_isValid && true;
}

} // namespace OpenAPI

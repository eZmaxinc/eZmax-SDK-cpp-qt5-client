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

#include "Ezsigntemplateformfieldgroup_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateformfieldgroup_ResponseCompound::Ezsigntemplateformfieldgroup_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateformfieldgroup_ResponseCompound::Ezsigntemplateformfieldgroup_ResponseCompound() {
    this->initializeModel();
}

Ezsigntemplateformfieldgroup_ResponseCompound::~Ezsigntemplateformfieldgroup_ResponseCompound() {}

void Ezsigntemplateformfieldgroup_ResponseCompound::initializeModel() {

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

    m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isSet = false;
    m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isValid = false;

    m_e_ezsigntemplateformfieldgroup_textvalidation_isSet = false;
    m_e_ezsigntemplateformfieldgroup_textvalidation_isValid = false;

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

void Ezsigntemplateformfieldgroup_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateformfieldgroup_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateformfieldgroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplateformfieldgroup_id, json[QString("pkiEzsigntemplateformfieldgroupID")]);
    m_pki_ezsigntemplateformfieldgroup_id_isSet = !json[QString("pkiEzsigntemplateformfieldgroupID")].isNull() && m_pki_ezsigntemplateformfieldgroup_id_isValid;

    m_fki_ezsigntemplatedocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatedocument_id, json[QString("fkiEzsigntemplatedocumentID")]);
    m_fki_ezsigntemplatedocument_id_isSet = !json[QString("fkiEzsigntemplatedocumentID")].isNull() && m_fki_ezsigntemplatedocument_id_isValid;

    m_e_ezsigntemplateformfieldgroup_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateformfieldgroup_type, json[QString("eEzsigntemplateformfieldgroupType")]);
    m_e_ezsigntemplateformfieldgroup_type_isSet = !json[QString("eEzsigntemplateformfieldgroupType")].isNull() && m_e_ezsigntemplateformfieldgroup_type_isValid;

    m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateformfieldgroup_signerrequirement, json[QString("eEzsigntemplateformfieldgroupSignerrequirement")]);
    m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet = !json[QString("eEzsigntemplateformfieldgroupSignerrequirement")].isNull() && m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid;

    m_s_ezsigntemplateformfieldgroup_label_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateformfieldgroup_label, json[QString("sEzsigntemplateformfieldgroupLabel")]);
    m_s_ezsigntemplateformfieldgroup_label_isSet = !json[QString("sEzsigntemplateformfieldgroupLabel")].isNull() && m_s_ezsigntemplateformfieldgroup_label_isValid;

    m_i_ezsigntemplateformfieldgroup_step_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateformfieldgroup_step, json[QString("iEzsigntemplateformfieldgroupStep")]);
    m_i_ezsigntemplateformfieldgroup_step_isSet = !json[QString("iEzsigntemplateformfieldgroupStep")].isNull() && m_i_ezsigntemplateformfieldgroup_step_isValid;

    m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateformfieldgroup_defaultvalue, json[QString("sEzsigntemplateformfieldgroupDefaultvalue")]);
    m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet = !json[QString("sEzsigntemplateformfieldgroupDefaultvalue")].isNull() && m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid;

    m_i_ezsigntemplateformfieldgroup_filledmin_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateformfieldgroup_filledmin, json[QString("iEzsigntemplateformfieldgroupFilledmin")]);
    m_i_ezsigntemplateformfieldgroup_filledmin_isSet = !json[QString("iEzsigntemplateformfieldgroupFilledmin")].isNull() && m_i_ezsigntemplateformfieldgroup_filledmin_isValid;

    m_i_ezsigntemplateformfieldgroup_filledmax_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateformfieldgroup_filledmax, json[QString("iEzsigntemplateformfieldgroupFilledmax")]);
    m_i_ezsigntemplateformfieldgroup_filledmax_isSet = !json[QString("iEzsigntemplateformfieldgroupFilledmax")].isNull() && m_i_ezsigntemplateformfieldgroup_filledmax_isValid;

    m_b_ezsigntemplateformfieldgroup_readonly_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplateformfieldgroup_readonly, json[QString("bEzsigntemplateformfieldgroupReadonly")]);
    m_b_ezsigntemplateformfieldgroup_readonly_isSet = !json[QString("bEzsigntemplateformfieldgroupReadonly")].isNull() && m_b_ezsigntemplateformfieldgroup_readonly_isValid;

    m_i_ezsigntemplateformfieldgroup_maxlength_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateformfieldgroup_maxlength, json[QString("iEzsigntemplateformfieldgroupMaxlength")]);
    m_i_ezsigntemplateformfieldgroup_maxlength_isSet = !json[QString("iEzsigntemplateformfieldgroupMaxlength")].isNull() && m_i_ezsigntemplateformfieldgroup_maxlength_isValid;

    m_b_ezsigntemplateformfieldgroup_encrypted_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplateformfieldgroup_encrypted, json[QString("bEzsigntemplateformfieldgroupEncrypted")]);
    m_b_ezsigntemplateformfieldgroup_encrypted_isSet = !json[QString("bEzsigntemplateformfieldgroupEncrypted")].isNull() && m_b_ezsigntemplateformfieldgroup_encrypted_isValid;

    m_s_ezsigntemplateformfieldgroup_regexp_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateformfieldgroup_regexp, json[QString("sEzsigntemplateformfieldgroupRegexp")]);
    m_s_ezsigntemplateformfieldgroup_regexp_isSet = !json[QString("sEzsigntemplateformfieldgroupRegexp")].isNull() && m_s_ezsigntemplateformfieldgroup_regexp_isValid;

    m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage, json[QString("sEzsigntemplateformfieldgroupTextvalidationcustommessage")]);
    m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isSet = !json[QString("sEzsigntemplateformfieldgroupTextvalidationcustommessage")].isNull() && m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isValid;

    m_e_ezsigntemplateformfieldgroup_textvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateformfieldgroup_textvalidation, json[QString("eEzsigntemplateformfieldgroupTextvalidation")]);
    m_e_ezsigntemplateformfieldgroup_textvalidation_isSet = !json[QString("eEzsigntemplateformfieldgroupTextvalidation")].isNull() && m_e_ezsigntemplateformfieldgroup_textvalidation_isValid;

    m_t_ezsigntemplateformfieldgroup_tooltip_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsigntemplateformfieldgroup_tooltip, json[QString("tEzsigntemplateformfieldgroupTooltip")]);
    m_t_ezsigntemplateformfieldgroup_tooltip_isSet = !json[QString("tEzsigntemplateformfieldgroupTooltip")].isNull() && m_t_ezsigntemplateformfieldgroup_tooltip_isValid;

    m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateformfieldgroup_tooltipposition, json[QString("eEzsigntemplateformfieldgroupTooltipposition")]);
    m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet = !json[QString("eEzsigntemplateformfieldgroupTooltipposition")].isNull() && m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid;

    m_a_obj_ezsigntemplateformfieldgroupsigner_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplateformfieldgroupsigner, json[QString("a_objEzsigntemplateformfieldgroupsigner")]);
    m_a_obj_ezsigntemplateformfieldgroupsigner_isSet = !json[QString("a_objEzsigntemplateformfieldgroupsigner")].isNull() && m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;

    m_a_obj_dropdown_element_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_dropdown_element, json[QString("a_objDropdownElement")]);
    m_a_obj_dropdown_element_isSet = !json[QString("a_objDropdownElement")].isNull() && m_a_obj_dropdown_element_isValid;

    m_a_obj_ezsigntemplateformfield_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplateformfield, json[QString("a_objEzsigntemplateformfield")]);
    m_a_obj_ezsigntemplateformfield_isSet = !json[QString("a_objEzsigntemplateformfield")].isNull() && m_a_obj_ezsigntemplateformfield_isValid;
}

QString Ezsigntemplateformfieldgroup_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateformfieldgroup_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateformfieldgroup_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateformfieldgroupID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplateformfieldgroup_id));
    }
    if (m_fki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatedocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatedocument_id));
    }
    if (m_e_ezsigntemplateformfieldgroup_type.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupType"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateformfieldgroup_type));
    }
    if (m_e_ezsigntemplateformfieldgroup_signerrequirement.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupSignerrequirement"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateformfieldgroup_signerrequirement));
    }
    if (m_s_ezsigntemplateformfieldgroup_label_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupLabel"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateformfieldgroup_label));
    }
    if (m_i_ezsigntemplateformfieldgroup_step_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupStep"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateformfieldgroup_step));
    }
    if (m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupDefaultvalue"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateformfieldgroup_defaultvalue));
    }
    if (m_i_ezsigntemplateformfieldgroup_filledmin_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupFilledmin"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateformfieldgroup_filledmin));
    }
    if (m_i_ezsigntemplateformfieldgroup_filledmax_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupFilledmax"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateformfieldgroup_filledmax));
    }
    if (m_b_ezsigntemplateformfieldgroup_readonly_isSet) {
        obj.insert(QString("bEzsigntemplateformfieldgroupReadonly"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplateformfieldgroup_readonly));
    }
    if (m_i_ezsigntemplateformfieldgroup_maxlength_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupMaxlength"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateformfieldgroup_maxlength));
    }
    if (m_b_ezsigntemplateformfieldgroup_encrypted_isSet) {
        obj.insert(QString("bEzsigntemplateformfieldgroupEncrypted"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplateformfieldgroup_encrypted));
    }
    if (m_s_ezsigntemplateformfieldgroup_regexp_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupRegexp"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateformfieldgroup_regexp));
    }
    if (m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupTextvalidationcustommessage"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage));
    }
    if (m_e_ezsigntemplateformfieldgroup_textvalidation.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupTextvalidation"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateformfieldgroup_textvalidation));
    }
    if (m_t_ezsigntemplateformfieldgroup_tooltip_isSet) {
        obj.insert(QString("tEzsigntemplateformfieldgroupTooltip"), ::Ezmaxapi::toJsonValue(m_t_ezsigntemplateformfieldgroup_tooltip));
    }
    if (m_e_ezsigntemplateformfieldgroup_tooltipposition.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupTooltipposition"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateformfieldgroup_tooltipposition));
    }
    if (m_a_obj_ezsigntemplateformfieldgroupsigner.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateformfieldgroupsigner"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplateformfieldgroupsigner));
    }
    if (m_a_obj_dropdown_element.size() > 0) {
        obj.insert(QString("a_objDropdownElement"), ::Ezmaxapi::toJsonValue(m_a_obj_dropdown_element));
    }
    if (m_a_obj_ezsigntemplateformfield.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateformfield"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplateformfield));
    }
    return obj;
}

qint32 Ezsigntemplateformfieldgroup_ResponseCompound::getPkiEzsigntemplateformfieldgroupId() const {
    return m_pki_ezsigntemplateformfieldgroup_id;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setPkiEzsigntemplateformfieldgroupId(const qint32 &pki_ezsigntemplateformfieldgroup_id) {
    m_pki_ezsigntemplateformfieldgroup_id = pki_ezsigntemplateformfieldgroup_id;
    m_pki_ezsigntemplateformfieldgroup_id_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_pki_ezsigntemplateformfieldgroup_id_Set() const{
    return m_pki_ezsigntemplateformfieldgroup_id_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_pki_ezsigntemplateformfieldgroup_id_Valid() const{
    return m_pki_ezsigntemplateformfieldgroup_id_isValid;
}

qint32 Ezsigntemplateformfieldgroup_ResponseCompound::getFkiEzsigntemplatedocumentId() const {
    return m_fki_ezsigntemplatedocument_id;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id) {
    m_fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    m_fki_ezsigntemplatedocument_id_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_fki_ezsigntemplatedocument_id_Set() const{
    return m_fki_ezsigntemplatedocument_id_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_fki_ezsigntemplatedocument_id_Valid() const{
    return m_fki_ezsigntemplatedocument_id_isValid;
}

Field_eEzsigntemplateformfieldgroupType Ezsigntemplateformfieldgroup_ResponseCompound::getEEzsigntemplateformfieldgroupType() const {
    return m_e_ezsigntemplateformfieldgroup_type;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setEEzsigntemplateformfieldgroupType(const Field_eEzsigntemplateformfieldgroupType &e_ezsigntemplateformfieldgroup_type) {
    m_e_ezsigntemplateformfieldgroup_type = e_ezsigntemplateformfieldgroup_type;
    m_e_ezsigntemplateformfieldgroup_type_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_type_Set() const{
    return m_e_ezsigntemplateformfieldgroup_type_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_type_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_type_isValid;
}

Field_eEzsigntemplateformfieldgroupSignerrequirement Ezsigntemplateformfieldgroup_ResponseCompound::getEEzsigntemplateformfieldgroupSignerrequirement() const {
    return m_e_ezsigntemplateformfieldgroup_signerrequirement;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setEEzsigntemplateformfieldgroupSignerrequirement(const Field_eEzsigntemplateformfieldgroupSignerrequirement &e_ezsigntemplateformfieldgroup_signerrequirement) {
    m_e_ezsigntemplateformfieldgroup_signerrequirement = e_ezsigntemplateformfieldgroup_signerrequirement;
    m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_signerrequirement_Set() const{
    return m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_signerrequirement_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid;
}

QString Ezsigntemplateformfieldgroup_ResponseCompound::getSEzsigntemplateformfieldgroupLabel() const {
    return m_s_ezsigntemplateformfieldgroup_label;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setSEzsigntemplateformfieldgroupLabel(const QString &s_ezsigntemplateformfieldgroup_label) {
    m_s_ezsigntemplateformfieldgroup_label = s_ezsigntemplateformfieldgroup_label;
    m_s_ezsigntemplateformfieldgroup_label_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_label_Set() const{
    return m_s_ezsigntemplateformfieldgroup_label_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_label_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_label_isValid;
}

qint32 Ezsigntemplateformfieldgroup_ResponseCompound::getIEzsigntemplateformfieldgroupStep() const {
    return m_i_ezsigntemplateformfieldgroup_step;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setIEzsigntemplateformfieldgroupStep(const qint32 &i_ezsigntemplateformfieldgroup_step) {
    m_i_ezsigntemplateformfieldgroup_step = i_ezsigntemplateformfieldgroup_step;
    m_i_ezsigntemplateformfieldgroup_step_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_step_Set() const{
    return m_i_ezsigntemplateformfieldgroup_step_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_step_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_step_isValid;
}

QString Ezsigntemplateformfieldgroup_ResponseCompound::getSEzsigntemplateformfieldgroupDefaultvalue() const {
    return m_s_ezsigntemplateformfieldgroup_defaultvalue;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setSEzsigntemplateformfieldgroupDefaultvalue(const QString &s_ezsigntemplateformfieldgroup_defaultvalue) {
    m_s_ezsigntemplateformfieldgroup_defaultvalue = s_ezsigntemplateformfieldgroup_defaultvalue;
    m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_defaultvalue_Set() const{
    return m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_defaultvalue_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid;
}

qint32 Ezsigntemplateformfieldgroup_ResponseCompound::getIEzsigntemplateformfieldgroupFilledmin() const {
    return m_i_ezsigntemplateformfieldgroup_filledmin;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setIEzsigntemplateformfieldgroupFilledmin(const qint32 &i_ezsigntemplateformfieldgroup_filledmin) {
    m_i_ezsigntemplateformfieldgroup_filledmin = i_ezsigntemplateformfieldgroup_filledmin;
    m_i_ezsigntemplateformfieldgroup_filledmin_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_filledmin_Set() const{
    return m_i_ezsigntemplateformfieldgroup_filledmin_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_filledmin_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_filledmin_isValid;
}

qint32 Ezsigntemplateformfieldgroup_ResponseCompound::getIEzsigntemplateformfieldgroupFilledmax() const {
    return m_i_ezsigntemplateformfieldgroup_filledmax;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setIEzsigntemplateformfieldgroupFilledmax(const qint32 &i_ezsigntemplateformfieldgroup_filledmax) {
    m_i_ezsigntemplateformfieldgroup_filledmax = i_ezsigntemplateformfieldgroup_filledmax;
    m_i_ezsigntemplateformfieldgroup_filledmax_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_filledmax_Set() const{
    return m_i_ezsigntemplateformfieldgroup_filledmax_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_filledmax_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_filledmax_isValid;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::isBEzsigntemplateformfieldgroupReadonly() const {
    return m_b_ezsigntemplateformfieldgroup_readonly;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setBEzsigntemplateformfieldgroupReadonly(const bool &b_ezsigntemplateformfieldgroup_readonly) {
    m_b_ezsigntemplateformfieldgroup_readonly = b_ezsigntemplateformfieldgroup_readonly;
    m_b_ezsigntemplateformfieldgroup_readonly_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_b_ezsigntemplateformfieldgroup_readonly_Set() const{
    return m_b_ezsigntemplateformfieldgroup_readonly_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_b_ezsigntemplateformfieldgroup_readonly_Valid() const{
    return m_b_ezsigntemplateformfieldgroup_readonly_isValid;
}

qint32 Ezsigntemplateformfieldgroup_ResponseCompound::getIEzsigntemplateformfieldgroupMaxlength() const {
    return m_i_ezsigntemplateformfieldgroup_maxlength;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setIEzsigntemplateformfieldgroupMaxlength(const qint32 &i_ezsigntemplateformfieldgroup_maxlength) {
    m_i_ezsigntemplateformfieldgroup_maxlength = i_ezsigntemplateformfieldgroup_maxlength;
    m_i_ezsigntemplateformfieldgroup_maxlength_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_maxlength_Set() const{
    return m_i_ezsigntemplateformfieldgroup_maxlength_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_i_ezsigntemplateformfieldgroup_maxlength_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_maxlength_isValid;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::isBEzsigntemplateformfieldgroupEncrypted() const {
    return m_b_ezsigntemplateformfieldgroup_encrypted;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setBEzsigntemplateformfieldgroupEncrypted(const bool &b_ezsigntemplateformfieldgroup_encrypted) {
    m_b_ezsigntemplateformfieldgroup_encrypted = b_ezsigntemplateformfieldgroup_encrypted;
    m_b_ezsigntemplateformfieldgroup_encrypted_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_b_ezsigntemplateformfieldgroup_encrypted_Set() const{
    return m_b_ezsigntemplateformfieldgroup_encrypted_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_b_ezsigntemplateformfieldgroup_encrypted_Valid() const{
    return m_b_ezsigntemplateformfieldgroup_encrypted_isValid;
}

QString Ezsigntemplateformfieldgroup_ResponseCompound::getSEzsigntemplateformfieldgroupRegexp() const {
    return m_s_ezsigntemplateformfieldgroup_regexp;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setSEzsigntemplateformfieldgroupRegexp(const QString &s_ezsigntemplateformfieldgroup_regexp) {
    m_s_ezsigntemplateformfieldgroup_regexp = s_ezsigntemplateformfieldgroup_regexp;
    m_s_ezsigntemplateformfieldgroup_regexp_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_regexp_Set() const{
    return m_s_ezsigntemplateformfieldgroup_regexp_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_regexp_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_regexp_isValid;
}

QString Ezsigntemplateformfieldgroup_ResponseCompound::getSEzsigntemplateformfieldgroupTextvalidationcustommessage() const {
    return m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setSEzsigntemplateformfieldgroupTextvalidationcustommessage(const QString &s_ezsigntemplateformfieldgroup_textvalidationcustommessage) {
    m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage = s_ezsigntemplateformfieldgroup_textvalidationcustommessage;
    m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_Set() const{
    return m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isValid;
}

Enum_Textvalidation Ezsigntemplateformfieldgroup_ResponseCompound::getEEzsigntemplateformfieldgroupTextvalidation() const {
    return m_e_ezsigntemplateformfieldgroup_textvalidation;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setEEzsigntemplateformfieldgroupTextvalidation(const Enum_Textvalidation &e_ezsigntemplateformfieldgroup_textvalidation) {
    m_e_ezsigntemplateformfieldgroup_textvalidation = e_ezsigntemplateformfieldgroup_textvalidation;
    m_e_ezsigntemplateformfieldgroup_textvalidation_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_textvalidation_Set() const{
    return m_e_ezsigntemplateformfieldgroup_textvalidation_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_textvalidation_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_textvalidation_isValid;
}

QString Ezsigntemplateformfieldgroup_ResponseCompound::getTEzsigntemplateformfieldgroupTooltip() const {
    return m_t_ezsigntemplateformfieldgroup_tooltip;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setTEzsigntemplateformfieldgroupTooltip(const QString &t_ezsigntemplateformfieldgroup_tooltip) {
    m_t_ezsigntemplateformfieldgroup_tooltip = t_ezsigntemplateformfieldgroup_tooltip;
    m_t_ezsigntemplateformfieldgroup_tooltip_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_t_ezsigntemplateformfieldgroup_tooltip_Set() const{
    return m_t_ezsigntemplateformfieldgroup_tooltip_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_t_ezsigntemplateformfieldgroup_tooltip_Valid() const{
    return m_t_ezsigntemplateformfieldgroup_tooltip_isValid;
}

Field_eEzsigntemplateformfieldgroupTooltipposition Ezsigntemplateformfieldgroup_ResponseCompound::getEEzsigntemplateformfieldgroupTooltipposition() const {
    return m_e_ezsigntemplateformfieldgroup_tooltipposition;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setEEzsigntemplateformfieldgroupTooltipposition(const Field_eEzsigntemplateformfieldgroupTooltipposition &e_ezsigntemplateformfieldgroup_tooltipposition) {
    m_e_ezsigntemplateformfieldgroup_tooltipposition = e_ezsigntemplateformfieldgroup_tooltipposition;
    m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_tooltipposition_Set() const{
    return m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_e_ezsigntemplateformfieldgroup_tooltipposition_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid;
}

QList<Ezsigntemplateformfieldgroupsigner_ResponseCompound> Ezsigntemplateformfieldgroup_ResponseCompound::getAObjEzsigntemplateformfieldgroupsigner() const {
    return m_a_obj_ezsigntemplateformfieldgroupsigner;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setAObjEzsigntemplateformfieldgroupsigner(const QList<Ezsigntemplateformfieldgroupsigner_ResponseCompound> &a_obj_ezsigntemplateformfieldgroupsigner) {
    m_a_obj_ezsigntemplateformfieldgroupsigner = a_obj_ezsigntemplateformfieldgroupsigner;
    m_a_obj_ezsigntemplateformfieldgroupsigner_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_a_obj_ezsigntemplateformfieldgroupsigner_Set() const{
    return m_a_obj_ezsigntemplateformfieldgroupsigner_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_a_obj_ezsigntemplateformfieldgroupsigner_Valid() const{
    return m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;
}

QList<Custom_DropdownElement_ResponseCompound> Ezsigntemplateformfieldgroup_ResponseCompound::getAObjDropdownElement() const {
    return m_a_obj_dropdown_element;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setAObjDropdownElement(const QList<Custom_DropdownElement_ResponseCompound> &a_obj_dropdown_element) {
    m_a_obj_dropdown_element = a_obj_dropdown_element;
    m_a_obj_dropdown_element_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_a_obj_dropdown_element_Set() const{
    return m_a_obj_dropdown_element_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_a_obj_dropdown_element_Valid() const{
    return m_a_obj_dropdown_element_isValid;
}

QList<Ezsigntemplateformfield_ResponseCompound> Ezsigntemplateformfieldgroup_ResponseCompound::getAObjEzsigntemplateformfield() const {
    return m_a_obj_ezsigntemplateformfield;
}
void Ezsigntemplateformfieldgroup_ResponseCompound::setAObjEzsigntemplateformfield(const QList<Ezsigntemplateformfield_ResponseCompound> &a_obj_ezsigntemplateformfield) {
    m_a_obj_ezsigntemplateformfield = a_obj_ezsigntemplateformfield;
    m_a_obj_ezsigntemplateformfield_isSet = true;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_a_obj_ezsigntemplateformfield_Set() const{
    return m_a_obj_ezsigntemplateformfield_isSet;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::is_a_obj_ezsigntemplateformfield_Valid() const{
    return m_a_obj_ezsigntemplateformfield_isValid;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::isSet() const {
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

        if (m_e_ezsigntemplateformfieldgroup_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateformfieldgroup_signerrequirement.isSet()) {
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

        if (m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateformfieldgroup_textvalidation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsigntemplateformfieldgroup_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateformfieldgroup_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsigntemplateformfieldgroupsigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_dropdown_element.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsigntemplateformfield.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateformfieldgroup_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplateformfieldgroup_id_isValid && m_fki_ezsigntemplatedocument_id_isValid && m_e_ezsigntemplateformfieldgroup_type_isValid && m_s_ezsigntemplateformfieldgroup_label_isValid && m_i_ezsigntemplateformfieldgroup_step_isValid && m_i_ezsigntemplateformfieldgroup_filledmin_isValid && m_i_ezsigntemplateformfieldgroup_filledmax_isValid && m_b_ezsigntemplateformfieldgroup_readonly_isValid && m_a_obj_ezsigntemplateformfieldgroupsigner_isValid && m_a_obj_ezsigntemplateformfield_isValid && true;
}

} // namespace Ezmaxapi

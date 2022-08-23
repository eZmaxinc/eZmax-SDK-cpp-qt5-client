/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsignature_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignature_RequestCompound::OAIEzsignsignature_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignature_RequestCompound::OAIEzsignsignature_RequestCompound() {
    this->initializeModel();
}

OAIEzsignsignature_RequestCompound::~OAIEzsignsignature_RequestCompound() {}

void OAIEzsignsignature_RequestCompound::initializeModel() {

    m_pki_ezsignsignature_id_isSet = false;
    m_pki_ezsignsignature_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_i_ezsignpage_pagenumber_isSet = false;
    m_i_ezsignpage_pagenumber_isValid = false;

    m_i_ezsignsignature_x_isSet = false;
    m_i_ezsignsignature_x_isValid = false;

    m_i_ezsignsignature_y_isSet = false;
    m_i_ezsignsignature_y_isValid = false;

    m_i_ezsignsignature_step_isSet = false;
    m_i_ezsignsignature_step_isValid = false;

    m_e_ezsignsignature_type_isSet = false;
    m_e_ezsignsignature_type_isValid = false;

    m_fki_ezsigndocument_id_isSet = false;
    m_fki_ezsigndocument_id_isValid = false;

    m_t_ezsignsignature_tooltip_isSet = false;
    m_t_ezsignsignature_tooltip_isValid = false;

    m_e_ezsignsignature_tooltipposition_isSet = false;
    m_e_ezsignsignature_tooltipposition_isValid = false;

    m_e_ezsignsignature_font_isSet = false;
    m_e_ezsignsignature_font_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_b_ezsignsignature_required_isSet = false;
    m_b_ezsignsignature_required_isValid = false;

    m_e_ezsignsignature_attachmentnamesource_isSet = false;
    m_e_ezsignsignature_attachmentnamesource_isValid = false;

    m_s_ezsignsignature_attachmentdescription_isSet = false;
    m_s_ezsignsignature_attachmentdescription_isValid = false;

    m_i_ezsignsignature_validationstep_isSet = false;
    m_i_ezsignsignature_validationstep_isValid = false;

    m_b_ezsignsignature_customdate_isSet = false;
    m_b_ezsignsignature_customdate_isValid = false;

    m_a_obj_ezsignsignaturecustomdate_isSet = false;
    m_a_obj_ezsignsignaturecustomdate_isValid = false;
}

void OAIEzsignsignature_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignature_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignature_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignsignature_id, json[QString("pkiEzsignsignatureID")]);
    m_pki_ezsignsignature_id_isSet = !json[QString("pkiEzsignsignatureID")].isNull() && m_pki_ezsignsignature_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_i_ezsignpage_pagenumber_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_pagenumber, json[QString("iEzsignpagePagenumber")]);
    m_i_ezsignpage_pagenumber_isSet = !json[QString("iEzsignpagePagenumber")].isNull() && m_i_ezsignpage_pagenumber_isValid;

    m_i_ezsignsignature_x_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_x, json[QString("iEzsignsignatureX")]);
    m_i_ezsignsignature_x_isSet = !json[QString("iEzsignsignatureX")].isNull() && m_i_ezsignsignature_x_isValid;

    m_i_ezsignsignature_y_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_y, json[QString("iEzsignsignatureY")]);
    m_i_ezsignsignature_y_isSet = !json[QString("iEzsignsignatureY")].isNull() && m_i_ezsignsignature_y_isValid;

    m_i_ezsignsignature_step_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_step, json[QString("iEzsignsignatureStep")]);
    m_i_ezsignsignature_step_isSet = !json[QString("iEzsignsignatureStep")].isNull() && m_i_ezsignsignature_step_isValid;

    m_e_ezsignsignature_type_isValid = ::OpenAPI::fromJsonValue(e_ezsignsignature_type, json[QString("eEzsignsignatureType")]);
    m_e_ezsignsignature_type_isSet = !json[QString("eEzsignsignatureType")].isNull() && m_e_ezsignsignature_type_isValid;

    m_fki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigndocument_id, json[QString("fkiEzsigndocumentID")]);
    m_fki_ezsigndocument_id_isSet = !json[QString("fkiEzsigndocumentID")].isNull() && m_fki_ezsigndocument_id_isValid;

    m_t_ezsignsignature_tooltip_isValid = ::OpenAPI::fromJsonValue(t_ezsignsignature_tooltip, json[QString("tEzsignsignatureTooltip")]);
    m_t_ezsignsignature_tooltip_isSet = !json[QString("tEzsignsignatureTooltip")].isNull() && m_t_ezsignsignature_tooltip_isValid;

    m_e_ezsignsignature_tooltipposition_isValid = ::OpenAPI::fromJsonValue(e_ezsignsignature_tooltipposition, json[QString("eEzsignsignatureTooltipposition")]);
    m_e_ezsignsignature_tooltipposition_isSet = !json[QString("eEzsignsignatureTooltipposition")].isNull() && m_e_ezsignsignature_tooltipposition_isValid;

    m_e_ezsignsignature_font_isValid = ::OpenAPI::fromJsonValue(e_ezsignsignature_font, json[QString("eEzsignsignatureFont")]);
    m_e_ezsignsignature_font_isSet = !json[QString("eEzsignsignatureFont")].isNull() && m_e_ezsignsignature_font_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_b_ezsignsignature_required_isValid = ::OpenAPI::fromJsonValue(b_ezsignsignature_required, json[QString("bEzsignsignatureRequired")]);
    m_b_ezsignsignature_required_isSet = !json[QString("bEzsignsignatureRequired")].isNull() && m_b_ezsignsignature_required_isValid;

    m_e_ezsignsignature_attachmentnamesource_isValid = ::OpenAPI::fromJsonValue(e_ezsignsignature_attachmentnamesource, json[QString("eEzsignsignatureAttachmentnamesource")]);
    m_e_ezsignsignature_attachmentnamesource_isSet = !json[QString("eEzsignsignatureAttachmentnamesource")].isNull() && m_e_ezsignsignature_attachmentnamesource_isValid;

    m_s_ezsignsignature_attachmentdescription_isValid = ::OpenAPI::fromJsonValue(s_ezsignsignature_attachmentdescription, json[QString("sEzsignsignatureAttachmentdescription")]);
    m_s_ezsignsignature_attachmentdescription_isSet = !json[QString("sEzsignsignatureAttachmentdescription")].isNull() && m_s_ezsignsignature_attachmentdescription_isValid;

    m_i_ezsignsignature_validationstep_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_validationstep, json[QString("iEzsignsignatureValidationstep")]);
    m_i_ezsignsignature_validationstep_isSet = !json[QString("iEzsignsignatureValidationstep")].isNull() && m_i_ezsignsignature_validationstep_isValid;

    m_b_ezsignsignature_customdate_isValid = ::OpenAPI::fromJsonValue(b_ezsignsignature_customdate, json[QString("bEzsignsignatureCustomdate")]);
    m_b_ezsignsignature_customdate_isSet = !json[QString("bEzsignsignatureCustomdate")].isNull() && m_b_ezsignsignature_customdate_isValid;

    m_a_obj_ezsignsignaturecustomdate_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignsignaturecustomdate, json[QString("a_objEzsignsignaturecustomdate")]);
    m_a_obj_ezsignsignaturecustomdate_isSet = !json[QString("a_objEzsignsignaturecustomdate")].isNull() && m_a_obj_ezsignsignaturecustomdate_isValid;
}

QString OAIEzsignsignature_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignature_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignature_id_isSet) {
        obj.insert(QString("pkiEzsignsignatureID"), ::OpenAPI::toJsonValue(pki_ezsignsignature_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    if (m_i_ezsignpage_pagenumber_isSet) {
        obj.insert(QString("iEzsignpagePagenumber"), ::OpenAPI::toJsonValue(i_ezsignpage_pagenumber));
    }
    if (m_i_ezsignsignature_x_isSet) {
        obj.insert(QString("iEzsignsignatureX"), ::OpenAPI::toJsonValue(i_ezsignsignature_x));
    }
    if (m_i_ezsignsignature_y_isSet) {
        obj.insert(QString("iEzsignsignatureY"), ::OpenAPI::toJsonValue(i_ezsignsignature_y));
    }
    if (m_i_ezsignsignature_step_isSet) {
        obj.insert(QString("iEzsignsignatureStep"), ::OpenAPI::toJsonValue(i_ezsignsignature_step));
    }
    if (e_ezsignsignature_type.isSet()) {
        obj.insert(QString("eEzsignsignatureType"), ::OpenAPI::toJsonValue(e_ezsignsignature_type));
    }
    if (m_fki_ezsigndocument_id_isSet) {
        obj.insert(QString("fkiEzsigndocumentID"), ::OpenAPI::toJsonValue(fki_ezsigndocument_id));
    }
    if (m_t_ezsignsignature_tooltip_isSet) {
        obj.insert(QString("tEzsignsignatureTooltip"), ::OpenAPI::toJsonValue(t_ezsignsignature_tooltip));
    }
    if (e_ezsignsignature_tooltipposition.isSet()) {
        obj.insert(QString("eEzsignsignatureTooltipposition"), ::OpenAPI::toJsonValue(e_ezsignsignature_tooltipposition));
    }
    if (e_ezsignsignature_font.isSet()) {
        obj.insert(QString("eEzsignsignatureFont"), ::OpenAPI::toJsonValue(e_ezsignsignature_font));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_b_ezsignsignature_required_isSet) {
        obj.insert(QString("bEzsignsignatureRequired"), ::OpenAPI::toJsonValue(b_ezsignsignature_required));
    }
    if (e_ezsignsignature_attachmentnamesource.isSet()) {
        obj.insert(QString("eEzsignsignatureAttachmentnamesource"), ::OpenAPI::toJsonValue(e_ezsignsignature_attachmentnamesource));
    }
    if (m_s_ezsignsignature_attachmentdescription_isSet) {
        obj.insert(QString("sEzsignsignatureAttachmentdescription"), ::OpenAPI::toJsonValue(s_ezsignsignature_attachmentdescription));
    }
    if (m_i_ezsignsignature_validationstep_isSet) {
        obj.insert(QString("iEzsignsignatureValidationstep"), ::OpenAPI::toJsonValue(i_ezsignsignature_validationstep));
    }
    if (m_b_ezsignsignature_customdate_isSet) {
        obj.insert(QString("bEzsignsignatureCustomdate"), ::OpenAPI::toJsonValue(b_ezsignsignature_customdate));
    }
    if (a_obj_ezsignsignaturecustomdate.size() > 0) {
        obj.insert(QString("a_objEzsignsignaturecustomdate"), ::OpenAPI::toJsonValue(a_obj_ezsignsignaturecustomdate));
    }
    return obj;
}

qint32 OAIEzsignsignature_RequestCompound::getPkiEzsignsignatureId() const {
    return pki_ezsignsignature_id;
}
void OAIEzsignsignature_RequestCompound::setPkiEzsignsignatureId(const qint32 &pki_ezsignsignature_id) {
    this->pki_ezsignsignature_id = pki_ezsignsignature_id;
    this->m_pki_ezsignsignature_id_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_pki_ezsignsignature_id_Set() const{
    return m_pki_ezsignsignature_id_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_pki_ezsignsignature_id_Valid() const{
    return m_pki_ezsignsignature_id_isValid;
}

qint32 OAIEzsignsignature_RequestCompound::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAIEzsignsignature_RequestCompound::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAIEzsignsignature_RequestCompound::getIEzsignpagePagenumber() const {
    return i_ezsignpage_pagenumber;
}
void OAIEzsignsignature_RequestCompound::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    this->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    this->m_i_ezsignpage_pagenumber_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

qint32 OAIEzsignsignature_RequestCompound::getIEzsignsignatureX() const {
    return i_ezsignsignature_x;
}
void OAIEzsignsignature_RequestCompound::setIEzsignsignatureX(const qint32 &i_ezsignsignature_x) {
    this->i_ezsignsignature_x = i_ezsignsignature_x;
    this->m_i_ezsignsignature_x_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignsignature_x_Set() const{
    return m_i_ezsignsignature_x_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignsignature_x_Valid() const{
    return m_i_ezsignsignature_x_isValid;
}

qint32 OAIEzsignsignature_RequestCompound::getIEzsignsignatureY() const {
    return i_ezsignsignature_y;
}
void OAIEzsignsignature_RequestCompound::setIEzsignsignatureY(const qint32 &i_ezsignsignature_y) {
    this->i_ezsignsignature_y = i_ezsignsignature_y;
    this->m_i_ezsignsignature_y_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignsignature_y_Set() const{
    return m_i_ezsignsignature_y_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignsignature_y_Valid() const{
    return m_i_ezsignsignature_y_isValid;
}

qint32 OAIEzsignsignature_RequestCompound::getIEzsignsignatureStep() const {
    return i_ezsignsignature_step;
}
void OAIEzsignsignature_RequestCompound::setIEzsignsignatureStep(const qint32 &i_ezsignsignature_step) {
    this->i_ezsignsignature_step = i_ezsignsignature_step;
    this->m_i_ezsignsignature_step_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignsignature_step_Set() const{
    return m_i_ezsignsignature_step_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignsignature_step_Valid() const{
    return m_i_ezsignsignature_step_isValid;
}

OAIField_eEzsignsignatureType OAIEzsignsignature_RequestCompound::getEEzsignsignatureType() const {
    return e_ezsignsignature_type;
}
void OAIEzsignsignature_RequestCompound::setEEzsignsignatureType(const OAIField_eEzsignsignatureType &e_ezsignsignature_type) {
    this->e_ezsignsignature_type = e_ezsignsignature_type;
    this->m_e_ezsignsignature_type_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_e_ezsignsignature_type_Set() const{
    return m_e_ezsignsignature_type_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_e_ezsignsignature_type_Valid() const{
    return m_e_ezsignsignature_type_isValid;
}

qint32 OAIEzsignsignature_RequestCompound::getFkiEzsigndocumentId() const {
    return fki_ezsigndocument_id;
}
void OAIEzsignsignature_RequestCompound::setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id) {
    this->fki_ezsigndocument_id = fki_ezsigndocument_id;
    this->m_fki_ezsigndocument_id_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_fki_ezsigndocument_id_Set() const{
    return m_fki_ezsigndocument_id_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_fki_ezsigndocument_id_Valid() const{
    return m_fki_ezsigndocument_id_isValid;
}

QString OAIEzsignsignature_RequestCompound::getTEzsignsignatureTooltip() const {
    return t_ezsignsignature_tooltip;
}
void OAIEzsignsignature_RequestCompound::setTEzsignsignatureTooltip(const QString &t_ezsignsignature_tooltip) {
    this->t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    this->m_t_ezsignsignature_tooltip_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_t_ezsignsignature_tooltip_Set() const{
    return m_t_ezsignsignature_tooltip_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_t_ezsignsignature_tooltip_Valid() const{
    return m_t_ezsignsignature_tooltip_isValid;
}

OAIField_eEzsignsignatureTooltipposition OAIEzsignsignature_RequestCompound::getEEzsignsignatureTooltipposition() const {
    return e_ezsignsignature_tooltipposition;
}
void OAIEzsignsignature_RequestCompound::setEEzsignsignatureTooltipposition(const OAIField_eEzsignsignatureTooltipposition &e_ezsignsignature_tooltipposition) {
    this->e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    this->m_e_ezsignsignature_tooltipposition_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_e_ezsignsignature_tooltipposition_Set() const{
    return m_e_ezsignsignature_tooltipposition_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_e_ezsignsignature_tooltipposition_Valid() const{
    return m_e_ezsignsignature_tooltipposition_isValid;
}

OAIField_eEzsignsignatureFont OAIEzsignsignature_RequestCompound::getEEzsignsignatureFont() const {
    return e_ezsignsignature_font;
}
void OAIEzsignsignature_RequestCompound::setEEzsignsignatureFont(const OAIField_eEzsignsignatureFont &e_ezsignsignature_font) {
    this->e_ezsignsignature_font = e_ezsignsignature_font;
    this->m_e_ezsignsignature_font_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_e_ezsignsignature_font_Set() const{
    return m_e_ezsignsignature_font_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_e_ezsignsignature_font_Valid() const{
    return m_e_ezsignsignature_font_isValid;
}

qint32 OAIEzsignsignature_RequestCompound::getFkiUserId() const {
    return fki_user_id;
}
void OAIEzsignsignature_RequestCompound::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

bool OAIEzsignsignature_RequestCompound::isBEzsignsignatureRequired() const {
    return b_ezsignsignature_required;
}
void OAIEzsignsignature_RequestCompound::setBEzsignsignatureRequired(const bool &b_ezsignsignature_required) {
    this->b_ezsignsignature_required = b_ezsignsignature_required;
    this->m_b_ezsignsignature_required_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_b_ezsignsignature_required_Set() const{
    return m_b_ezsignsignature_required_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_b_ezsignsignature_required_Valid() const{
    return m_b_ezsignsignature_required_isValid;
}

OAIField_eEzsignsignatureAttachmentnamesource OAIEzsignsignature_RequestCompound::getEEzsignsignatureAttachmentnamesource() const {
    return e_ezsignsignature_attachmentnamesource;
}
void OAIEzsignsignature_RequestCompound::setEEzsignsignatureAttachmentnamesource(const OAIField_eEzsignsignatureAttachmentnamesource &e_ezsignsignature_attachmentnamesource) {
    this->e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    this->m_e_ezsignsignature_attachmentnamesource_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_e_ezsignsignature_attachmentnamesource_Set() const{
    return m_e_ezsignsignature_attachmentnamesource_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_e_ezsignsignature_attachmentnamesource_Valid() const{
    return m_e_ezsignsignature_attachmentnamesource_isValid;
}

QString OAIEzsignsignature_RequestCompound::getSEzsignsignatureAttachmentdescription() const {
    return s_ezsignsignature_attachmentdescription;
}
void OAIEzsignsignature_RequestCompound::setSEzsignsignatureAttachmentdescription(const QString &s_ezsignsignature_attachmentdescription) {
    this->s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    this->m_s_ezsignsignature_attachmentdescription_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_s_ezsignsignature_attachmentdescription_Set() const{
    return m_s_ezsignsignature_attachmentdescription_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_s_ezsignsignature_attachmentdescription_Valid() const{
    return m_s_ezsignsignature_attachmentdescription_isValid;
}

qint32 OAIEzsignsignature_RequestCompound::getIEzsignsignatureValidationstep() const {
    return i_ezsignsignature_validationstep;
}
void OAIEzsignsignature_RequestCompound::setIEzsignsignatureValidationstep(const qint32 &i_ezsignsignature_validationstep) {
    this->i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;
    this->m_i_ezsignsignature_validationstep_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignsignature_validationstep_Set() const{
    return m_i_ezsignsignature_validationstep_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_i_ezsignsignature_validationstep_Valid() const{
    return m_i_ezsignsignature_validationstep_isValid;
}

bool OAIEzsignsignature_RequestCompound::isBEzsignsignatureCustomdate() const {
    return b_ezsignsignature_customdate;
}
void OAIEzsignsignature_RequestCompound::setBEzsignsignatureCustomdate(const bool &b_ezsignsignature_customdate) {
    this->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    this->m_b_ezsignsignature_customdate_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_b_ezsignsignature_customdate_Set() const{
    return m_b_ezsignsignature_customdate_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_b_ezsignsignature_customdate_Valid() const{
    return m_b_ezsignsignature_customdate_isValid;
}

QList<OAIEzsignsignaturecustomdate_RequestCompound> OAIEzsignsignature_RequestCompound::getAObjEzsignsignaturecustomdate() const {
    return a_obj_ezsignsignaturecustomdate;
}
void OAIEzsignsignature_RequestCompound::setAObjEzsignsignaturecustomdate(const QList<OAIEzsignsignaturecustomdate_RequestCompound> &a_obj_ezsignsignaturecustomdate) {
    this->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;
    this->m_a_obj_ezsignsignaturecustomdate_isSet = true;
}

bool OAIEzsignsignature_RequestCompound::is_a_obj_ezsignsignaturecustomdate_Set() const{
    return m_a_obj_ezsignsignaturecustomdate_isSet;
}

bool OAIEzsignsignature_RequestCompound::is_a_obj_ezsignsignaturecustomdate_Valid() const{
    return m_a_obj_ezsignsignaturecustomdate_isValid;
}

bool OAIEzsignsignature_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignsignature_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignsignature_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignsignature_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignsignature_font.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignsignature_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignsignature_attachmentnamesource.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsignature_attachmentdescription_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_validationstep_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignsignature_customdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignsignaturecustomdate.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignature_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldersignerassociation_id_isValid && m_i_ezsignpage_pagenumber_isValid && m_i_ezsignsignature_x_isValid && m_i_ezsignsignature_y_isValid && m_i_ezsignsignature_step_isValid && m_e_ezsignsignature_type_isValid && m_fki_ezsigndocument_id_isValid && true;
}

} // namespace OpenAPI

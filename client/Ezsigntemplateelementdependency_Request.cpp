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

#include "Ezsigntemplateelementdependency_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateelementdependency_Request::Ezsigntemplateelementdependency_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateelementdependency_Request::Ezsigntemplateelementdependency_Request() {
    this->initializeModel();
}

Ezsigntemplateelementdependency_Request::~Ezsigntemplateelementdependency_Request() {}

void Ezsigntemplateelementdependency_Request::initializeModel() {

    m_pki_ezsigntemplateelementdependency_id_isSet = false;
    m_pki_ezsigntemplateelementdependency_id_isValid = false;

    m_fki_ezsigntemplateformfield_id_validation_isSet = false;
    m_fki_ezsigntemplateformfield_id_validation_isValid = false;

    m_fki_ezsigntemplateformfieldgroup_id_validation_isSet = false;
    m_fki_ezsigntemplateformfieldgroup_id_validation_isValid = false;

    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isSet = false;
    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isValid = false;

    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isSet = false;
    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isValid = false;

    m_e_ezsigntemplateelementdependency_validation_isSet = false;
    m_e_ezsigntemplateelementdependency_validation_isValid = false;

    m_b_ezsigntemplateelementdependency_selected_isSet = false;
    m_b_ezsigntemplateelementdependency_selected_isValid = false;

    m_e_ezsigntemplateelementdependency_operator_isSet = false;
    m_e_ezsigntemplateelementdependency_operator_isValid = false;

    m_s_ezsigntemplateelementdependency_value_isSet = false;
    m_s_ezsigntemplateelementdependency_value_isValid = false;
}

void Ezsigntemplateelementdependency_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateelementdependency_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateelementdependency_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplateelementdependency_id, json[QString("pkiEzsigntemplateelementdependencyID")]);
    m_pki_ezsigntemplateelementdependency_id_isSet = !json[QString("pkiEzsigntemplateelementdependencyID")].isNull() && m_pki_ezsigntemplateelementdependency_id_isValid;

    m_fki_ezsigntemplateformfield_id_validation_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplateformfield_id_validation, json[QString("fkiEzsigntemplateformfieldIDValidation")]);
    m_fki_ezsigntemplateformfield_id_validation_isSet = !json[QString("fkiEzsigntemplateformfieldIDValidation")].isNull() && m_fki_ezsigntemplateformfield_id_validation_isValid;

    m_fki_ezsigntemplateformfieldgroup_id_validation_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplateformfieldgroup_id_validation, json[QString("fkiEzsigntemplateformfieldgroupIDValidation")]);
    m_fki_ezsigntemplateformfieldgroup_id_validation_isSet = !json[QString("fkiEzsigntemplateformfieldgroupIDValidation")].isNull() && m_fki_ezsigntemplateformfieldgroup_id_validation_isValid;

    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel, json[QString("sEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel")]);
    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isSet = !json[QString("sEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel")].isNull() && m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isValid;

    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel, json[QString("sEzsigntemplateelementdependencyEzsigntemplateformfieldlabel")]);
    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isSet = !json[QString("sEzsigntemplateelementdependencyEzsigntemplateformfieldlabel")].isNull() && m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isValid;

    m_e_ezsigntemplateelementdependency_validation_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateelementdependency_validation, json[QString("eEzsigntemplateelementdependencyValidation")]);
    m_e_ezsigntemplateelementdependency_validation_isSet = !json[QString("eEzsigntemplateelementdependencyValidation")].isNull() && m_e_ezsigntemplateelementdependency_validation_isValid;

    m_b_ezsigntemplateelementdependency_selected_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplateelementdependency_selected, json[QString("bEzsigntemplateelementdependencySelected")]);
    m_b_ezsigntemplateelementdependency_selected_isSet = !json[QString("bEzsigntemplateelementdependencySelected")].isNull() && m_b_ezsigntemplateelementdependency_selected_isValid;

    m_e_ezsigntemplateelementdependency_operator_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateelementdependency_operator, json[QString("eEzsigntemplateelementdependencyOperator")]);
    m_e_ezsigntemplateelementdependency_operator_isSet = !json[QString("eEzsigntemplateelementdependencyOperator")].isNull() && m_e_ezsigntemplateelementdependency_operator_isValid;

    m_s_ezsigntemplateelementdependency_value_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateelementdependency_value, json[QString("sEzsigntemplateelementdependencyValue")]);
    m_s_ezsigntemplateelementdependency_value_isSet = !json[QString("sEzsigntemplateelementdependencyValue")].isNull() && m_s_ezsigntemplateelementdependency_value_isValid;
}

QString Ezsigntemplateelementdependency_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateelementdependency_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateelementdependency_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateelementdependencyID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplateelementdependency_id));
    }
    if (m_fki_ezsigntemplateformfield_id_validation_isSet) {
        obj.insert(QString("fkiEzsigntemplateformfieldIDValidation"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplateformfield_id_validation));
    }
    if (m_fki_ezsigntemplateformfieldgroup_id_validation_isSet) {
        obj.insert(QString("fkiEzsigntemplateformfieldgroupIDValidation"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplateformfieldgroup_id_validation));
    }
    if (m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isSet) {
        obj.insert(QString("sEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel));
    }
    if (m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isSet) {
        obj.insert(QString("sEzsigntemplateelementdependencyEzsigntemplateformfieldlabel"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel));
    }
    if (m_e_ezsigntemplateelementdependency_validation.isSet()) {
        obj.insert(QString("eEzsigntemplateelementdependencyValidation"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateelementdependency_validation));
    }
    if (m_b_ezsigntemplateelementdependency_selected_isSet) {
        obj.insert(QString("bEzsigntemplateelementdependencySelected"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplateelementdependency_selected));
    }
    if (m_e_ezsigntemplateelementdependency_operator.isSet()) {
        obj.insert(QString("eEzsigntemplateelementdependencyOperator"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateelementdependency_operator));
    }
    if (m_s_ezsigntemplateelementdependency_value_isSet) {
        obj.insert(QString("sEzsigntemplateelementdependencyValue"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateelementdependency_value));
    }
    return obj;
}

qint32 Ezsigntemplateelementdependency_Request::getPkiEzsigntemplateelementdependencyId() const {
    return m_pki_ezsigntemplateelementdependency_id;
}
void Ezsigntemplateelementdependency_Request::setPkiEzsigntemplateelementdependencyId(const qint32 &pki_ezsigntemplateelementdependency_id) {
    m_pki_ezsigntemplateelementdependency_id = pki_ezsigntemplateelementdependency_id;
    m_pki_ezsigntemplateelementdependency_id_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_pki_ezsigntemplateelementdependency_id_Set() const{
    return m_pki_ezsigntemplateelementdependency_id_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_pki_ezsigntemplateelementdependency_id_Valid() const{
    return m_pki_ezsigntemplateelementdependency_id_isValid;
}

qint32 Ezsigntemplateelementdependency_Request::getFkiEzsigntemplateformfieldIdValidation() const {
    return m_fki_ezsigntemplateformfield_id_validation;
}
void Ezsigntemplateelementdependency_Request::setFkiEzsigntemplateformfieldIdValidation(const qint32 &fki_ezsigntemplateformfield_id_validation) {
    m_fki_ezsigntemplateformfield_id_validation = fki_ezsigntemplateformfield_id_validation;
    m_fki_ezsigntemplateformfield_id_validation_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_fki_ezsigntemplateformfield_id_validation_Set() const{
    return m_fki_ezsigntemplateformfield_id_validation_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_fki_ezsigntemplateformfield_id_validation_Valid() const{
    return m_fki_ezsigntemplateformfield_id_validation_isValid;
}

qint32 Ezsigntemplateelementdependency_Request::getFkiEzsigntemplateformfieldgroupIdValidation() const {
    return m_fki_ezsigntemplateformfieldgroup_id_validation;
}
void Ezsigntemplateelementdependency_Request::setFkiEzsigntemplateformfieldgroupIdValidation(const qint32 &fki_ezsigntemplateformfieldgroup_id_validation) {
    m_fki_ezsigntemplateformfieldgroup_id_validation = fki_ezsigntemplateformfieldgroup_id_validation;
    m_fki_ezsigntemplateformfieldgroup_id_validation_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_fki_ezsigntemplateformfieldgroup_id_validation_Set() const{
    return m_fki_ezsigntemplateformfieldgroup_id_validation_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_fki_ezsigntemplateformfieldgroup_id_validation_Valid() const{
    return m_fki_ezsigntemplateformfieldgroup_id_validation_isValid;
}

QString Ezsigntemplateelementdependency_Request::getSEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel() const {
    return m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel;
}
void Ezsigntemplateelementdependency_Request::setSEzsigntemplateelementdependencyEzsigntemplateformfieldgrouplabel(const QString &s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel) {
    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel = s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel;
    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_Set() const{
    return m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_Valid() const{
    return m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isValid;
}

QString Ezsigntemplateelementdependency_Request::getSEzsigntemplateelementdependencyEzsigntemplateformfieldlabel() const {
    return m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel;
}
void Ezsigntemplateelementdependency_Request::setSEzsigntemplateelementdependencyEzsigntemplateformfieldlabel(const QString &s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel) {
    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel = s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel;
    m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_Set() const{
    return m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_Valid() const{
    return m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isValid;
}

Field_eEzsigntemplateelementdependencyValidation Ezsigntemplateelementdependency_Request::getEEzsigntemplateelementdependencyValidation() const {
    return m_e_ezsigntemplateelementdependency_validation;
}
void Ezsigntemplateelementdependency_Request::setEEzsigntemplateelementdependencyValidation(const Field_eEzsigntemplateelementdependencyValidation &e_ezsigntemplateelementdependency_validation) {
    m_e_ezsigntemplateelementdependency_validation = e_ezsigntemplateelementdependency_validation;
    m_e_ezsigntemplateelementdependency_validation_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_e_ezsigntemplateelementdependency_validation_Set() const{
    return m_e_ezsigntemplateelementdependency_validation_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_e_ezsigntemplateelementdependency_validation_Valid() const{
    return m_e_ezsigntemplateelementdependency_validation_isValid;
}

bool Ezsigntemplateelementdependency_Request::isBEzsigntemplateelementdependencySelected() const {
    return m_b_ezsigntemplateelementdependency_selected;
}
void Ezsigntemplateelementdependency_Request::setBEzsigntemplateelementdependencySelected(const bool &b_ezsigntemplateelementdependency_selected) {
    m_b_ezsigntemplateelementdependency_selected = b_ezsigntemplateelementdependency_selected;
    m_b_ezsigntemplateelementdependency_selected_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_b_ezsigntemplateelementdependency_selected_Set() const{
    return m_b_ezsigntemplateelementdependency_selected_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_b_ezsigntemplateelementdependency_selected_Valid() const{
    return m_b_ezsigntemplateelementdependency_selected_isValid;
}

Field_eEzsigntemplateelementdependencyOperator Ezsigntemplateelementdependency_Request::getEEzsigntemplateelementdependencyOperator() const {
    return m_e_ezsigntemplateelementdependency_operator;
}
void Ezsigntemplateelementdependency_Request::setEEzsigntemplateelementdependencyOperator(const Field_eEzsigntemplateelementdependencyOperator &e_ezsigntemplateelementdependency_operator) {
    m_e_ezsigntemplateelementdependency_operator = e_ezsigntemplateelementdependency_operator;
    m_e_ezsigntemplateelementdependency_operator_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_e_ezsigntemplateelementdependency_operator_Set() const{
    return m_e_ezsigntemplateelementdependency_operator_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_e_ezsigntemplateelementdependency_operator_Valid() const{
    return m_e_ezsigntemplateelementdependency_operator_isValid;
}

QString Ezsigntemplateelementdependency_Request::getSEzsigntemplateelementdependencyValue() const {
    return m_s_ezsigntemplateelementdependency_value;
}
void Ezsigntemplateelementdependency_Request::setSEzsigntemplateelementdependencyValue(const QString &s_ezsigntemplateelementdependency_value) {
    m_s_ezsigntemplateelementdependency_value = s_ezsigntemplateelementdependency_value;
    m_s_ezsigntemplateelementdependency_value_isSet = true;
}

bool Ezsigntemplateelementdependency_Request::is_s_ezsigntemplateelementdependency_value_Set() const{
    return m_s_ezsigntemplateelementdependency_value_isSet;
}

bool Ezsigntemplateelementdependency_Request::is_s_ezsigntemplateelementdependency_value_Valid() const{
    return m_s_ezsigntemplateelementdependency_value_isValid;
}

bool Ezsigntemplateelementdependency_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplateelementdependency_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplateformfield_id_validation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplateformfieldgroup_id_validation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldgrouplabel_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateelementdependency_ezsigntemplateformfieldlabel_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateelementdependency_validation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplateelementdependency_selected_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateelementdependency_operator.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateelementdependency_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateelementdependency_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_ezsigntemplateelementdependency_validation_isValid && true;
}

} // namespace Ezmaxapi

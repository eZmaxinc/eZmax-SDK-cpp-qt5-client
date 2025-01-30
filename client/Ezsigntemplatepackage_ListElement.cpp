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

#include "Ezsigntemplatepackage_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepackage_ListElement::Ezsigntemplatepackage_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepackage_ListElement::Ezsigntemplatepackage_ListElement() {
    this->initializeModel();
}

Ezsigntemplatepackage_ListElement::~Ezsigntemplatepackage_ListElement() {}

void Ezsigntemplatepackage_ListElement::initializeModel() {

    m_pki_ezsigntemplatepackage_id_isSet = false;
    m_pki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsigntemplatepackage_description_isSet = false;
    m_s_ezsigntemplatepackage_description_isValid = false;

    m_b_ezsigntemplatepackage_needvalidation_isSet = false;
    m_b_ezsigntemplatepackage_needvalidation_isValid = false;

    m_i_ezsigntemplatepackagemembership_isSet = false;
    m_i_ezsigntemplatepackagemembership_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_b_ezsigntemplatepackage_isactive_isSet = false;
    m_b_ezsigntemplatepackage_isactive_isValid = false;
}

void Ezsigntemplatepackage_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepackage_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatepackage_id, json[QString("pkiEzsigntemplatepackageID")]);
    m_pki_ezsigntemplatepackage_id_isSet = !json[QString("pkiEzsigntemplatepackageID")].isNull() && m_pki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsigntemplatepackage_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepackage_description, json[QString("sEzsigntemplatepackageDescription")]);
    m_s_ezsigntemplatepackage_description_isSet = !json[QString("sEzsigntemplatepackageDescription")].isNull() && m_s_ezsigntemplatepackage_description_isValid;

    m_b_ezsigntemplatepackage_needvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatepackage_needvalidation, json[QString("bEzsigntemplatepackageNeedvalidation")]);
    m_b_ezsigntemplatepackage_needvalidation_isSet = !json[QString("bEzsigntemplatepackageNeedvalidation")].isNull() && m_b_ezsigntemplatepackage_needvalidation_isValid;

    m_i_ezsigntemplatepackagemembership_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatepackagemembership, json[QString("iEzsigntemplatepackagemembership")]);
    m_i_ezsigntemplatepackagemembership_isSet = !json[QString("iEzsigntemplatepackagemembership")].isNull() && m_i_ezsigntemplatepackagemembership_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_b_ezsigntemplatepackage_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatepackage_isactive, json[QString("bEzsigntemplatepackageIsactive")]);
    m_b_ezsigntemplatepackage_isactive_isSet = !json[QString("bEzsigntemplatepackageIsactive")].isNull() && m_b_ezsigntemplatepackage_isactive_isValid;
}

QString Ezsigntemplatepackage_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepackage_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_ezsigntemplatepackage_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackageDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepackage_description));
    }
    if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
        obj.insert(QString("bEzsigntemplatepackageNeedvalidation"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatepackage_needvalidation));
    }
    if (m_i_ezsigntemplatepackagemembership_isSet) {
        obj.insert(QString("iEzsigntemplatepackagemembership"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatepackagemembership));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_b_ezsigntemplatepackage_isactive_isSet) {
        obj.insert(QString("bEzsigntemplatepackageIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatepackage_isactive));
    }
    return obj;
}

qint32 Ezsigntemplatepackage_ListElement::getPkiEzsigntemplatepackageId() const {
    return m_pki_ezsigntemplatepackage_id;
}
void Ezsigntemplatepackage_ListElement::setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id) {
    m_pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    m_pki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsigntemplatepackage_ListElement::is_pki_ezsigntemplatepackage_id_Set() const{
    return m_pki_ezsigntemplatepackage_id_isSet;
}

bool Ezsigntemplatepackage_ListElement::is_pki_ezsigntemplatepackage_id_Valid() const{
    return m_pki_ezsigntemplatepackage_id_isValid;
}

qint32 Ezsigntemplatepackage_ListElement::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezsigntemplatepackage_ListElement::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsigntemplatepackage_ListElement::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezsigntemplatepackage_ListElement::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 Ezsigntemplatepackage_ListElement::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Ezsigntemplatepackage_ListElement::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Ezsigntemplatepackage_ListElement::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Ezsigntemplatepackage_ListElement::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString Ezsigntemplatepackage_ListElement::getSEzsigntemplatepackageDescription() const {
    return m_s_ezsigntemplatepackage_description;
}
void Ezsigntemplatepackage_ListElement::setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description) {
    m_s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    m_s_ezsigntemplatepackage_description_isSet = true;
}

bool Ezsigntemplatepackage_ListElement::is_s_ezsigntemplatepackage_description_Set() const{
    return m_s_ezsigntemplatepackage_description_isSet;
}

bool Ezsigntemplatepackage_ListElement::is_s_ezsigntemplatepackage_description_Valid() const{
    return m_s_ezsigntemplatepackage_description_isValid;
}

bool Ezsigntemplatepackage_ListElement::isBEzsigntemplatepackageNeedvalidation() const {
    return m_b_ezsigntemplatepackage_needvalidation;
}
void Ezsigntemplatepackage_ListElement::setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation) {
    m_b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    m_b_ezsigntemplatepackage_needvalidation_isSet = true;
}

bool Ezsigntemplatepackage_ListElement::is_b_ezsigntemplatepackage_needvalidation_Set() const{
    return m_b_ezsigntemplatepackage_needvalidation_isSet;
}

bool Ezsigntemplatepackage_ListElement::is_b_ezsigntemplatepackage_needvalidation_Valid() const{
    return m_b_ezsigntemplatepackage_needvalidation_isValid;
}

qint32 Ezsigntemplatepackage_ListElement::getIEzsigntemplatepackagemembership() const {
    return m_i_ezsigntemplatepackagemembership;
}
void Ezsigntemplatepackage_ListElement::setIEzsigntemplatepackagemembership(const qint32 &i_ezsigntemplatepackagemembership) {
    m_i_ezsigntemplatepackagemembership = i_ezsigntemplatepackagemembership;
    m_i_ezsigntemplatepackagemembership_isSet = true;
}

bool Ezsigntemplatepackage_ListElement::is_i_ezsigntemplatepackagemembership_Set() const{
    return m_i_ezsigntemplatepackagemembership_isSet;
}

bool Ezsigntemplatepackage_ListElement::is_i_ezsigntemplatepackagemembership_Valid() const{
    return m_i_ezsigntemplatepackagemembership_isValid;
}

QString Ezsigntemplatepackage_ListElement::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void Ezsigntemplatepackage_ListElement::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool Ezsigntemplatepackage_ListElement::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool Ezsigntemplatepackage_ListElement::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

bool Ezsigntemplatepackage_ListElement::isBEzsigntemplatepackageIsactive() const {
    return m_b_ezsigntemplatepackage_isactive;
}
void Ezsigntemplatepackage_ListElement::setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive) {
    m_b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    m_b_ezsigntemplatepackage_isactive_isSet = true;
}

bool Ezsigntemplatepackage_ListElement::is_b_ezsigntemplatepackage_isactive_Set() const{
    return m_b_ezsigntemplatepackage_isactive_isSet;
}

bool Ezsigntemplatepackage_ListElement::is_b_ezsigntemplatepackage_isactive_Valid() const{
    return m_b_ezsigntemplatepackage_isactive_isValid;
}

bool Ezsigntemplatepackage_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepackage_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatepackagemembership_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepackage_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackage_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_ezsigntemplatepackage_description_isValid && m_b_ezsigntemplatepackage_needvalidation_isValid && m_i_ezsigntemplatepackagemembership_isValid && m_s_ezsignfoldertype_name_x_isValid && m_b_ezsigntemplatepackage_isactive_isValid && true;
}

} // namespace Ezmaxapi

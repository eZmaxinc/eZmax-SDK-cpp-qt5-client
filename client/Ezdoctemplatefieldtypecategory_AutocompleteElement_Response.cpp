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

#include "Ezdoctemplatefieldtypecategory_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::Ezdoctemplatefieldtypecategory_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::Ezdoctemplatefieldtypecategory_AutocompleteElement_Response() {
    this->initializeModel();
}

Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::~Ezdoctemplatefieldtypecategory_AutocompleteElement_Response() {}

void Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::initializeModel() {

    m_pki_ezdoctemplatefieldtypecategory_id_isSet = false;
    m_pki_ezdoctemplatefieldtypecategory_id_isValid = false;

    m_fki_ezdoctemplatetype_id_isSet = false;
    m_fki_ezdoctemplatetype_id_isValid = false;

    m_s_ezdoctemplatefieldtypecategory_description_x_isSet = false;
    m_s_ezdoctemplatefieldtypecategory_description_x_isValid = false;

    m_b_ezdoctemplatefieldtypecategory_isactive_isSet = false;
    m_b_ezdoctemplatefieldtypecategory_isactive_isValid = false;
}

void Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezdoctemplatefieldtypecategory_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezdoctemplatefieldtypecategory_id, json[QString("pkiEzdoctemplatefieldtypecategoryID")]);
    m_pki_ezdoctemplatefieldtypecategory_id_isSet = !json[QString("pkiEzdoctemplatefieldtypecategoryID")].isNull() && m_pki_ezdoctemplatefieldtypecategory_id_isValid;

    m_fki_ezdoctemplatetype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezdoctemplatetype_id, json[QString("fkiEzdoctemplatetypeID")]);
    m_fki_ezdoctemplatetype_id_isSet = !json[QString("fkiEzdoctemplatetypeID")].isNull() && m_fki_ezdoctemplatetype_id_isValid;

    m_s_ezdoctemplatefieldtypecategory_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezdoctemplatefieldtypecategory_description_x, json[QString("sEzdoctemplatefieldtypecategoryDescriptionX")]);
    m_s_ezdoctemplatefieldtypecategory_description_x_isSet = !json[QString("sEzdoctemplatefieldtypecategoryDescriptionX")].isNull() && m_s_ezdoctemplatefieldtypecategory_description_x_isValid;

    m_b_ezdoctemplatefieldtypecategory_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezdoctemplatefieldtypecategory_isactive, json[QString("bEzdoctemplatefieldtypecategoryIsactive")]);
    m_b_ezdoctemplatefieldtypecategory_isactive_isSet = !json[QString("bEzdoctemplatefieldtypecategoryIsactive")].isNull() && m_b_ezdoctemplatefieldtypecategory_isactive_isValid;
}

QString Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezdoctemplatefieldtypecategory_id_isSet) {
        obj.insert(QString("pkiEzdoctemplatefieldtypecategoryID"), ::Ezmaxapi::toJsonValue(m_pki_ezdoctemplatefieldtypecategory_id));
    }
    if (m_fki_ezdoctemplatetype_id_isSet) {
        obj.insert(QString("fkiEzdoctemplatetypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezdoctemplatetype_id));
    }
    if (m_s_ezdoctemplatefieldtypecategory_description_x_isSet) {
        obj.insert(QString("sEzdoctemplatefieldtypecategoryDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_ezdoctemplatefieldtypecategory_description_x));
    }
    if (m_b_ezdoctemplatefieldtypecategory_isactive_isSet) {
        obj.insert(QString("bEzdoctemplatefieldtypecategoryIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezdoctemplatefieldtypecategory_isactive));
    }
    return obj;
}

qint32 Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::getPkiEzdoctemplatefieldtypecategoryId() const {
    return m_pki_ezdoctemplatefieldtypecategory_id;
}
void Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::setPkiEzdoctemplatefieldtypecategoryId(const qint32 &pki_ezdoctemplatefieldtypecategory_id) {
    m_pki_ezdoctemplatefieldtypecategory_id = pki_ezdoctemplatefieldtypecategory_id;
    m_pki_ezdoctemplatefieldtypecategory_id_isSet = true;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::is_pki_ezdoctemplatefieldtypecategory_id_Set() const{
    return m_pki_ezdoctemplatefieldtypecategory_id_isSet;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::is_pki_ezdoctemplatefieldtypecategory_id_Valid() const{
    return m_pki_ezdoctemplatefieldtypecategory_id_isValid;
}

qint32 Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::getFkiEzdoctemplatetypeId() const {
    return m_fki_ezdoctemplatetype_id;
}
void Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::setFkiEzdoctemplatetypeId(const qint32 &fki_ezdoctemplatetype_id) {
    m_fki_ezdoctemplatetype_id = fki_ezdoctemplatetype_id;
    m_fki_ezdoctemplatetype_id_isSet = true;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::is_fki_ezdoctemplatetype_id_Set() const{
    return m_fki_ezdoctemplatetype_id_isSet;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::is_fki_ezdoctemplatetype_id_Valid() const{
    return m_fki_ezdoctemplatetype_id_isValid;
}

QString Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::getSEzdoctemplatefieldtypecategoryDescriptionX() const {
    return m_s_ezdoctemplatefieldtypecategory_description_x;
}
void Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::setSEzdoctemplatefieldtypecategoryDescriptionX(const QString &s_ezdoctemplatefieldtypecategory_description_x) {
    m_s_ezdoctemplatefieldtypecategory_description_x = s_ezdoctemplatefieldtypecategory_description_x;
    m_s_ezdoctemplatefieldtypecategory_description_x_isSet = true;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::is_s_ezdoctemplatefieldtypecategory_description_x_Set() const{
    return m_s_ezdoctemplatefieldtypecategory_description_x_isSet;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::is_s_ezdoctemplatefieldtypecategory_description_x_Valid() const{
    return m_s_ezdoctemplatefieldtypecategory_description_x_isValid;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::isBEzdoctemplatefieldtypecategoryIsactive() const {
    return m_b_ezdoctemplatefieldtypecategory_isactive;
}
void Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::setBEzdoctemplatefieldtypecategoryIsactive(const bool &b_ezdoctemplatefieldtypecategory_isactive) {
    m_b_ezdoctemplatefieldtypecategory_isactive = b_ezdoctemplatefieldtypecategory_isactive;
    m_b_ezdoctemplatefieldtypecategory_isactive_isSet = true;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::is_b_ezdoctemplatefieldtypecategory_isactive_Set() const{
    return m_b_ezdoctemplatefieldtypecategory_isactive_isSet;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::is_b_ezdoctemplatefieldtypecategory_isactive_Valid() const{
    return m_b_ezdoctemplatefieldtypecategory_isactive_isValid;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezdoctemplatefieldtypecategory_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezdoctemplatetype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezdoctemplatefieldtypecategory_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezdoctemplatefieldtypecategory_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezdoctemplatefieldtypecategory_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezdoctemplatefieldtypecategory_id_isValid && m_fki_ezdoctemplatetype_id_isValid && m_s_ezdoctemplatefieldtypecategory_description_x_isValid && m_b_ezdoctemplatefieldtypecategory_isactive_isValid && true;
}

} // namespace Ezmaxapi

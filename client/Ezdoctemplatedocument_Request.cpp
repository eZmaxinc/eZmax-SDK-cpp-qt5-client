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

#include "Ezdoctemplatedocument_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezdoctemplatedocument_Request::Ezdoctemplatedocument_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezdoctemplatedocument_Request::Ezdoctemplatedocument_Request() {
    this->initializeModel();
}

Ezdoctemplatedocument_Request::~Ezdoctemplatedocument_Request() {}

void Ezdoctemplatedocument_Request::initializeModel() {

    m_pki_ezdoctemplatedocument_id_isSet = false;
    m_pki_ezdoctemplatedocument_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_ezdoctemplatetype_id_isSet = false;
    m_fki_ezdoctemplatetype_id_isValid = false;

    m_fki_ezdoctemplatefieldtypecategory_id_isSet = false;
    m_fki_ezdoctemplatefieldtypecategory_id_isValid = false;

    m_e_ezdoctemplatedocument_privacylevel_isSet = false;
    m_e_ezdoctemplatedocument_privacylevel_isValid = false;

    m_b_ezdoctemplatedocument_isactive_isSet = false;
    m_b_ezdoctemplatedocument_isactive_isValid = false;

    m_obj_ezdoctemplatedocument_name_isSet = false;
    m_obj_ezdoctemplatedocument_name_isValid = false;
}

void Ezdoctemplatedocument_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezdoctemplatedocument_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezdoctemplatedocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezdoctemplatedocument_id, json[QString("pkiEzdoctemplatedocumentID")]);
    m_pki_ezdoctemplatedocument_id_isSet = !json[QString("pkiEzdoctemplatedocumentID")].isNull() && m_pki_ezdoctemplatedocument_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_ezdoctemplatetype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezdoctemplatetype_id, json[QString("fkiEzdoctemplatetypeID")]);
    m_fki_ezdoctemplatetype_id_isSet = !json[QString("fkiEzdoctemplatetypeID")].isNull() && m_fki_ezdoctemplatetype_id_isValid;

    m_fki_ezdoctemplatefieldtypecategory_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezdoctemplatefieldtypecategory_id, json[QString("fkiEzdoctemplatefieldtypecategoryID")]);
    m_fki_ezdoctemplatefieldtypecategory_id_isSet = !json[QString("fkiEzdoctemplatefieldtypecategoryID")].isNull() && m_fki_ezdoctemplatefieldtypecategory_id_isValid;

    m_e_ezdoctemplatedocument_privacylevel_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezdoctemplatedocument_privacylevel, json[QString("eEzdoctemplatedocumentPrivacylevel")]);
    m_e_ezdoctemplatedocument_privacylevel_isSet = !json[QString("eEzdoctemplatedocumentPrivacylevel")].isNull() && m_e_ezdoctemplatedocument_privacylevel_isValid;

    m_b_ezdoctemplatedocument_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezdoctemplatedocument_isactive, json[QString("bEzdoctemplatedocumentIsactive")]);
    m_b_ezdoctemplatedocument_isactive_isSet = !json[QString("bEzdoctemplatedocumentIsactive")].isNull() && m_b_ezdoctemplatedocument_isactive_isValid;

    m_obj_ezdoctemplatedocument_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezdoctemplatedocument_name, json[QString("objEzdoctemplatedocumentName")]);
    m_obj_ezdoctemplatedocument_name_isSet = !json[QString("objEzdoctemplatedocumentName")].isNull() && m_obj_ezdoctemplatedocument_name_isValid;
}

QString Ezdoctemplatedocument_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezdoctemplatedocument_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezdoctemplatedocument_id_isSet) {
        obj.insert(QString("pkiEzdoctemplatedocumentID"), ::Ezmaxapi::toJsonValue(m_pki_ezdoctemplatedocument_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_fki_ezdoctemplatetype_id_isSet) {
        obj.insert(QString("fkiEzdoctemplatetypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezdoctemplatetype_id));
    }
    if (m_fki_ezdoctemplatefieldtypecategory_id_isSet) {
        obj.insert(QString("fkiEzdoctemplatefieldtypecategoryID"), ::Ezmaxapi::toJsonValue(m_fki_ezdoctemplatefieldtypecategory_id));
    }
    if (m_e_ezdoctemplatedocument_privacylevel.isSet()) {
        obj.insert(QString("eEzdoctemplatedocumentPrivacylevel"), ::Ezmaxapi::toJsonValue(m_e_ezdoctemplatedocument_privacylevel));
    }
    if (m_b_ezdoctemplatedocument_isactive_isSet) {
        obj.insert(QString("bEzdoctemplatedocumentIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezdoctemplatedocument_isactive));
    }
    if (m_obj_ezdoctemplatedocument_name.isSet()) {
        obj.insert(QString("objEzdoctemplatedocumentName"), ::Ezmaxapi::toJsonValue(m_obj_ezdoctemplatedocument_name));
    }
    return obj;
}

qint32 Ezdoctemplatedocument_Request::getPkiEzdoctemplatedocumentId() const {
    return m_pki_ezdoctemplatedocument_id;
}
void Ezdoctemplatedocument_Request::setPkiEzdoctemplatedocumentId(const qint32 &pki_ezdoctemplatedocument_id) {
    m_pki_ezdoctemplatedocument_id = pki_ezdoctemplatedocument_id;
    m_pki_ezdoctemplatedocument_id_isSet = true;
}

bool Ezdoctemplatedocument_Request::is_pki_ezdoctemplatedocument_id_Set() const{
    return m_pki_ezdoctemplatedocument_id_isSet;
}

bool Ezdoctemplatedocument_Request::is_pki_ezdoctemplatedocument_id_Valid() const{
    return m_pki_ezdoctemplatedocument_id_isValid;
}

qint32 Ezdoctemplatedocument_Request::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Ezdoctemplatedocument_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Ezdoctemplatedocument_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Ezdoctemplatedocument_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

qint32 Ezdoctemplatedocument_Request::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezdoctemplatedocument_Request::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezdoctemplatedocument_Request::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezdoctemplatedocument_Request::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 Ezdoctemplatedocument_Request::getFkiEzdoctemplatetypeId() const {
    return m_fki_ezdoctemplatetype_id;
}
void Ezdoctemplatedocument_Request::setFkiEzdoctemplatetypeId(const qint32 &fki_ezdoctemplatetype_id) {
    m_fki_ezdoctemplatetype_id = fki_ezdoctemplatetype_id;
    m_fki_ezdoctemplatetype_id_isSet = true;
}

bool Ezdoctemplatedocument_Request::is_fki_ezdoctemplatetype_id_Set() const{
    return m_fki_ezdoctemplatetype_id_isSet;
}

bool Ezdoctemplatedocument_Request::is_fki_ezdoctemplatetype_id_Valid() const{
    return m_fki_ezdoctemplatetype_id_isValid;
}

qint32 Ezdoctemplatedocument_Request::getFkiEzdoctemplatefieldtypecategoryId() const {
    return m_fki_ezdoctemplatefieldtypecategory_id;
}
void Ezdoctemplatedocument_Request::setFkiEzdoctemplatefieldtypecategoryId(const qint32 &fki_ezdoctemplatefieldtypecategory_id) {
    m_fki_ezdoctemplatefieldtypecategory_id = fki_ezdoctemplatefieldtypecategory_id;
    m_fki_ezdoctemplatefieldtypecategory_id_isSet = true;
}

bool Ezdoctemplatedocument_Request::is_fki_ezdoctemplatefieldtypecategory_id_Set() const{
    return m_fki_ezdoctemplatefieldtypecategory_id_isSet;
}

bool Ezdoctemplatedocument_Request::is_fki_ezdoctemplatefieldtypecategory_id_Valid() const{
    return m_fki_ezdoctemplatefieldtypecategory_id_isValid;
}

Field_eEzdoctemplatedocumentPrivacylevel Ezdoctemplatedocument_Request::getEEzdoctemplatedocumentPrivacylevel() const {
    return m_e_ezdoctemplatedocument_privacylevel;
}
void Ezdoctemplatedocument_Request::setEEzdoctemplatedocumentPrivacylevel(const Field_eEzdoctemplatedocumentPrivacylevel &e_ezdoctemplatedocument_privacylevel) {
    m_e_ezdoctemplatedocument_privacylevel = e_ezdoctemplatedocument_privacylevel;
    m_e_ezdoctemplatedocument_privacylevel_isSet = true;
}

bool Ezdoctemplatedocument_Request::is_e_ezdoctemplatedocument_privacylevel_Set() const{
    return m_e_ezdoctemplatedocument_privacylevel_isSet;
}

bool Ezdoctemplatedocument_Request::is_e_ezdoctemplatedocument_privacylevel_Valid() const{
    return m_e_ezdoctemplatedocument_privacylevel_isValid;
}

bool Ezdoctemplatedocument_Request::isBEzdoctemplatedocumentIsactive() const {
    return m_b_ezdoctemplatedocument_isactive;
}
void Ezdoctemplatedocument_Request::setBEzdoctemplatedocumentIsactive(const bool &b_ezdoctemplatedocument_isactive) {
    m_b_ezdoctemplatedocument_isactive = b_ezdoctemplatedocument_isactive;
    m_b_ezdoctemplatedocument_isactive_isSet = true;
}

bool Ezdoctemplatedocument_Request::is_b_ezdoctemplatedocument_isactive_Set() const{
    return m_b_ezdoctemplatedocument_isactive_isSet;
}

bool Ezdoctemplatedocument_Request::is_b_ezdoctemplatedocument_isactive_Valid() const{
    return m_b_ezdoctemplatedocument_isactive_isValid;
}

Multilingual_EzdoctemplatedocumentName Ezdoctemplatedocument_Request::getObjEzdoctemplatedocumentName() const {
    return m_obj_ezdoctemplatedocument_name;
}
void Ezdoctemplatedocument_Request::setObjEzdoctemplatedocumentName(const Multilingual_EzdoctemplatedocumentName &obj_ezdoctemplatedocument_name) {
    m_obj_ezdoctemplatedocument_name = obj_ezdoctemplatedocument_name;
    m_obj_ezdoctemplatedocument_name_isSet = true;
}

bool Ezdoctemplatedocument_Request::is_obj_ezdoctemplatedocument_name_Set() const{
    return m_obj_ezdoctemplatedocument_name_isSet;
}

bool Ezdoctemplatedocument_Request::is_obj_ezdoctemplatedocument_name_Valid() const{
    return m_obj_ezdoctemplatedocument_name_isValid;
}

bool Ezdoctemplatedocument_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezdoctemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezdoctemplatetype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezdoctemplatefieldtypecategory_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezdoctemplatedocument_privacylevel.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezdoctemplatedocument_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezdoctemplatedocument_name.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezdoctemplatedocument_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_language_id_isValid && m_fki_ezdoctemplatetype_id_isValid && m_fki_ezdoctemplatefieldtypecategory_id_isValid && m_b_ezdoctemplatedocument_isactive_isValid && m_obj_ezdoctemplatedocument_name_isValid && true;
}

} // namespace Ezmaxapi

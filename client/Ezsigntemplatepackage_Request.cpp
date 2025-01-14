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

#include "Ezsigntemplatepackage_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepackage_Request::Ezsigntemplatepackage_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepackage_Request::Ezsigntemplatepackage_Request() {
    this->initializeModel();
}

Ezsigntemplatepackage_Request::~Ezsigntemplatepackage_Request() {}

void Ezsigntemplatepackage_Request::initializeModel() {

    m_pki_ezsigntemplatepackage_id_isSet = false;
    m_pki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_ezdoctemplatedocument_id_isSet = false;
    m_fki_ezdoctemplatedocument_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsigntemplatepackage_description_isSet = false;
    m_s_ezsigntemplatepackage_description_isValid = false;

    m_b_ezsigntemplatepackage_adminonly_isSet = false;
    m_b_ezsigntemplatepackage_adminonly_isValid = false;

    m_b_ezsigntemplatepackage_isactive_isSet = false;
    m_b_ezsigntemplatepackage_isactive_isValid = false;
}

void Ezsigntemplatepackage_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepackage_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatepackage_id, json[QString("pkiEzsigntemplatepackageID")]);
    m_pki_ezsigntemplatepackage_id_isSet = !json[QString("pkiEzsigntemplatepackageID")].isNull() && m_pki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_ezdoctemplatedocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezdoctemplatedocument_id, json[QString("fkiEzdoctemplatedocumentID")]);
    m_fki_ezdoctemplatedocument_id_isSet = !json[QString("fkiEzdoctemplatedocumentID")].isNull() && m_fki_ezdoctemplatedocument_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsigntemplatepackage_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepackage_description, json[QString("sEzsigntemplatepackageDescription")]);
    m_s_ezsigntemplatepackage_description_isSet = !json[QString("sEzsigntemplatepackageDescription")].isNull() && m_s_ezsigntemplatepackage_description_isValid;

    m_b_ezsigntemplatepackage_adminonly_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatepackage_adminonly, json[QString("bEzsigntemplatepackageAdminonly")]);
    m_b_ezsigntemplatepackage_adminonly_isSet = !json[QString("bEzsigntemplatepackageAdminonly")].isNull() && m_b_ezsigntemplatepackage_adminonly_isValid;

    m_b_ezsigntemplatepackage_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatepackage_isactive, json[QString("bEzsigntemplatepackageIsactive")]);
    m_b_ezsigntemplatepackage_isactive_isSet = !json[QString("bEzsigntemplatepackageIsactive")].isNull() && m_b_ezsigntemplatepackage_isactive_isValid;
}

QString Ezsigntemplatepackage_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepackage_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_fki_ezdoctemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzdoctemplatedocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezdoctemplatedocument_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_ezsigntemplatepackage_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackageDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepackage_description));
    }
    if (m_b_ezsigntemplatepackage_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplatepackageAdminonly"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatepackage_adminonly));
    }
    if (m_b_ezsigntemplatepackage_isactive_isSet) {
        obj.insert(QString("bEzsigntemplatepackageIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatepackage_isactive));
    }
    return obj;
}

qint32 Ezsigntemplatepackage_Request::getPkiEzsigntemplatepackageId() const {
    return m_pki_ezsigntemplatepackage_id;
}
void Ezsigntemplatepackage_Request::setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id) {
    m_pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    m_pki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsigntemplatepackage_Request::is_pki_ezsigntemplatepackage_id_Set() const{
    return m_pki_ezsigntemplatepackage_id_isSet;
}

bool Ezsigntemplatepackage_Request::is_pki_ezsigntemplatepackage_id_Valid() const{
    return m_pki_ezsigntemplatepackage_id_isValid;
}

qint32 Ezsigntemplatepackage_Request::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezsigntemplatepackage_Request::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsigntemplatepackage_Request::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezsigntemplatepackage_Request::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 Ezsigntemplatepackage_Request::getFkiEzdoctemplatedocumentId() const {
    return m_fki_ezdoctemplatedocument_id;
}
void Ezsigntemplatepackage_Request::setFkiEzdoctemplatedocumentId(const qint32 &fki_ezdoctemplatedocument_id) {
    m_fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    m_fki_ezdoctemplatedocument_id_isSet = true;
}

bool Ezsigntemplatepackage_Request::is_fki_ezdoctemplatedocument_id_Set() const{
    return m_fki_ezdoctemplatedocument_id_isSet;
}

bool Ezsigntemplatepackage_Request::is_fki_ezdoctemplatedocument_id_Valid() const{
    return m_fki_ezdoctemplatedocument_id_isValid;
}

qint32 Ezsigntemplatepackage_Request::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Ezsigntemplatepackage_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Ezsigntemplatepackage_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Ezsigntemplatepackage_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString Ezsigntemplatepackage_Request::getSEzsigntemplatepackageDescription() const {
    return m_s_ezsigntemplatepackage_description;
}
void Ezsigntemplatepackage_Request::setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description) {
    m_s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    m_s_ezsigntemplatepackage_description_isSet = true;
}

bool Ezsigntemplatepackage_Request::is_s_ezsigntemplatepackage_description_Set() const{
    return m_s_ezsigntemplatepackage_description_isSet;
}

bool Ezsigntemplatepackage_Request::is_s_ezsigntemplatepackage_description_Valid() const{
    return m_s_ezsigntemplatepackage_description_isValid;
}

bool Ezsigntemplatepackage_Request::isBEzsigntemplatepackageAdminonly() const {
    return m_b_ezsigntemplatepackage_adminonly;
}
void Ezsigntemplatepackage_Request::setBEzsigntemplatepackageAdminonly(const bool &b_ezsigntemplatepackage_adminonly) {
    m_b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    m_b_ezsigntemplatepackage_adminonly_isSet = true;
}

bool Ezsigntemplatepackage_Request::is_b_ezsigntemplatepackage_adminonly_Set() const{
    return m_b_ezsigntemplatepackage_adminonly_isSet;
}

bool Ezsigntemplatepackage_Request::is_b_ezsigntemplatepackage_adminonly_Valid() const{
    return m_b_ezsigntemplatepackage_adminonly_isValid;
}

bool Ezsigntemplatepackage_Request::isBEzsigntemplatepackageIsactive() const {
    return m_b_ezsigntemplatepackage_isactive;
}
void Ezsigntemplatepackage_Request::setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive) {
    m_b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    m_b_ezsigntemplatepackage_isactive_isSet = true;
}

bool Ezsigntemplatepackage_Request::is_b_ezsigntemplatepackage_isactive_Set() const{
    return m_b_ezsigntemplatepackage_isactive_isSet;
}

bool Ezsigntemplatepackage_Request::is_b_ezsigntemplatepackage_isactive_Valid() const{
    return m_b_ezsigntemplatepackage_isactive_isValid;
}

bool Ezsigntemplatepackage_Request::isSet() const {
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

        if (m_fki_ezdoctemplatedocument_id_isSet) {
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

        if (m_b_ezsigntemplatepackage_adminonly_isSet) {
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

bool Ezsigntemplatepackage_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_ezsigntemplatepackage_description_isValid && m_b_ezsigntemplatepackage_adminonly_isValid && m_b_ezsigntemplatepackage_isactive_isValid && true;
}

} // namespace Ezmaxapi

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

#include "Ezsigntemplatepackagesigner_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepackagesigner_ResponseCompound::Ezsigntemplatepackagesigner_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepackagesigner_ResponseCompound::Ezsigntemplatepackagesigner_ResponseCompound() {
    this->initializeModel();
}

Ezsigntemplatepackagesigner_ResponseCompound::~Ezsigntemplatepackagesigner_ResponseCompound() {}

void Ezsigntemplatepackagesigner_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatepackagesigner_id_isSet = false;
    m_pki_ezsigntemplatepackagesigner_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezdoctemplatedocument_id_isSet = false;
    m_fki_ezdoctemplatedocument_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_usergroup_id_isSet = false;
    m_fki_usergroup_id_isValid = false;

    m_s_ezdoctemplatedocument_name_x_isSet = false;
    m_s_ezdoctemplatedocument_name_x_isValid = false;

    m_b_ezsigntemplatepackagesigner_receivecopy_isSet = false;
    m_b_ezsigntemplatepackagesigner_receivecopy_isValid = false;

    m_e_ezsigntemplatepackagesigner_mapping_isSet = false;
    m_e_ezsigntemplatepackagesigner_mapping_isValid = false;

    m_s_ezsigntemplatepackagesigner_description_isSet = false;
    m_s_ezsigntemplatepackagesigner_description_isValid = false;

    m_s_user_name_isSet = false;
    m_s_user_name_isValid = false;

    m_s_usergroup_name_x_isSet = false;
    m_s_usergroup_name_x_isValid = false;
}

void Ezsigntemplatepackagesigner_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepackagesigner_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagesigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatepackagesigner_id, json[QString("pkiEzsigntemplatepackagesignerID")]);
    m_pki_ezsigntemplatepackagesigner_id_isSet = !json[QString("pkiEzsigntemplatepackagesignerID")].isNull() && m_pki_ezsigntemplatepackagesigner_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezdoctemplatedocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezdoctemplatedocument_id, json[QString("fkiEzdoctemplatedocumentID")]);
    m_fki_ezdoctemplatedocument_id_isSet = !json[QString("fkiEzdoctemplatedocumentID")].isNull() && m_fki_ezdoctemplatedocument_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_usergroup_id, json[QString("fkiUsergroupID")]);
    m_fki_usergroup_id_isSet = !json[QString("fkiUsergroupID")].isNull() && m_fki_usergroup_id_isValid;

    m_s_ezdoctemplatedocument_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezdoctemplatedocument_name_x, json[QString("sEzdoctemplatedocumentNameX")]);
    m_s_ezdoctemplatedocument_name_x_isSet = !json[QString("sEzdoctemplatedocumentNameX")].isNull() && m_s_ezdoctemplatedocument_name_x_isValid;

    m_b_ezsigntemplatepackagesigner_receivecopy_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatepackagesigner_receivecopy, json[QString("bEzsigntemplatepackagesignerReceivecopy")]);
    m_b_ezsigntemplatepackagesigner_receivecopy_isSet = !json[QString("bEzsigntemplatepackagesignerReceivecopy")].isNull() && m_b_ezsigntemplatepackagesigner_receivecopy_isValid;

    m_e_ezsigntemplatepackagesigner_mapping_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatepackagesigner_mapping, json[QString("eEzsigntemplatepackagesignerMapping")]);
    m_e_ezsigntemplatepackagesigner_mapping_isSet = !json[QString("eEzsigntemplatepackagesignerMapping")].isNull() && m_e_ezsigntemplatepackagesigner_mapping_isValid;

    m_s_ezsigntemplatepackagesigner_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepackagesigner_description, json[QString("sEzsigntemplatepackagesignerDescription")]);
    m_s_ezsigntemplatepackagesigner_description_isSet = !json[QString("sEzsigntemplatepackagesignerDescription")].isNull() && m_s_ezsigntemplatepackagesigner_description_isValid;

    m_s_user_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_name, json[QString("sUserName")]);
    m_s_user_name_isSet = !json[QString("sUserName")].isNull() && m_s_user_name_isValid;

    m_s_usergroup_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_usergroup_name_x, json[QString("sUsergroupNameX")]);
    m_s_usergroup_name_x_isSet = !json[QString("sUsergroupNameX")].isNull() && m_s_usergroup_name_x_isValid;
}

QString Ezsigntemplatepackagesigner_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepackagesigner_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagesigner_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagesignerID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatepackagesigner_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezdoctemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzdoctemplatedocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezdoctemplatedocument_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_fki_usergroup_id_isSet) {
        obj.insert(QString("fkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_fki_usergroup_id));
    }
    if (m_s_ezdoctemplatedocument_name_x_isSet) {
        obj.insert(QString("sEzdoctemplatedocumentNameX"), ::Ezmaxapi::toJsonValue(m_s_ezdoctemplatedocument_name_x));
    }
    if (m_b_ezsigntemplatepackagesigner_receivecopy_isSet) {
        obj.insert(QString("bEzsigntemplatepackagesignerReceivecopy"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatepackagesigner_receivecopy));
    }
    if (m_e_ezsigntemplatepackagesigner_mapping.isSet()) {
        obj.insert(QString("eEzsigntemplatepackagesignerMapping"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatepackagesigner_mapping));
    }
    if (m_s_ezsigntemplatepackagesigner_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackagesignerDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepackagesigner_description));
    }
    if (m_s_user_name_isSet) {
        obj.insert(QString("sUserName"), ::Ezmaxapi::toJsonValue(m_s_user_name));
    }
    if (m_s_usergroup_name_x_isSet) {
        obj.insert(QString("sUsergroupNameX"), ::Ezmaxapi::toJsonValue(m_s_usergroup_name_x));
    }
    return obj;
}

qint32 Ezsigntemplatepackagesigner_ResponseCompound::getPkiEzsigntemplatepackagesignerId() const {
    return m_pki_ezsigntemplatepackagesigner_id;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setPkiEzsigntemplatepackagesignerId(const qint32 &pki_ezsigntemplatepackagesigner_id) {
    m_pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    m_pki_ezsigntemplatepackagesigner_id_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_pki_ezsigntemplatepackagesigner_id_Set() const{
    return m_pki_ezsigntemplatepackagesigner_id_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_pki_ezsigntemplatepackagesigner_id_Valid() const{
    return m_pki_ezsigntemplatepackagesigner_id_isValid;
}

qint32 Ezsigntemplatepackagesigner_ResponseCompound::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 Ezsigntemplatepackagesigner_ResponseCompound::getFkiEzdoctemplatedocumentId() const {
    return m_fki_ezdoctemplatedocument_id;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setFkiEzdoctemplatedocumentId(const qint32 &fki_ezdoctemplatedocument_id) {
    m_fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    m_fki_ezdoctemplatedocument_id_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_fki_ezdoctemplatedocument_id_Set() const{
    return m_fki_ezdoctemplatedocument_id_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_fki_ezdoctemplatedocument_id_Valid() const{
    return m_fki_ezdoctemplatedocument_id_isValid;
}

qint32 Ezsigntemplatepackagesigner_ResponseCompound::getFkiUserId() const {
    return m_fki_user_id;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 Ezsigntemplatepackagesigner_ResponseCompound::getFkiUsergroupId() const {
    return m_fki_usergroup_id;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setFkiUsergroupId(const qint32 &fki_usergroup_id) {
    m_fki_usergroup_id = fki_usergroup_id;
    m_fki_usergroup_id_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_fki_usergroup_id_Set() const{
    return m_fki_usergroup_id_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_fki_usergroup_id_Valid() const{
    return m_fki_usergroup_id_isValid;
}

QString Ezsigntemplatepackagesigner_ResponseCompound::getSEzdoctemplatedocumentNameX() const {
    return m_s_ezdoctemplatedocument_name_x;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setSEzdoctemplatedocumentNameX(const QString &s_ezdoctemplatedocument_name_x) {
    m_s_ezdoctemplatedocument_name_x = s_ezdoctemplatedocument_name_x;
    m_s_ezdoctemplatedocument_name_x_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_s_ezdoctemplatedocument_name_x_Set() const{
    return m_s_ezdoctemplatedocument_name_x_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_s_ezdoctemplatedocument_name_x_Valid() const{
    return m_s_ezdoctemplatedocument_name_x_isValid;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::isBEzsigntemplatepackagesignerReceivecopy() const {
    return m_b_ezsigntemplatepackagesigner_receivecopy;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setBEzsigntemplatepackagesignerReceivecopy(const bool &b_ezsigntemplatepackagesigner_receivecopy) {
    m_b_ezsigntemplatepackagesigner_receivecopy = b_ezsigntemplatepackagesigner_receivecopy;
    m_b_ezsigntemplatepackagesigner_receivecopy_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_b_ezsigntemplatepackagesigner_receivecopy_Set() const{
    return m_b_ezsigntemplatepackagesigner_receivecopy_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_b_ezsigntemplatepackagesigner_receivecopy_Valid() const{
    return m_b_ezsigntemplatepackagesigner_receivecopy_isValid;
}

Field_eEzsigntemplatepackagesignerMapping Ezsigntemplatepackagesigner_ResponseCompound::getEEzsigntemplatepackagesignerMapping() const {
    return m_e_ezsigntemplatepackagesigner_mapping;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setEEzsigntemplatepackagesignerMapping(const Field_eEzsigntemplatepackagesignerMapping &e_ezsigntemplatepackagesigner_mapping) {
    m_e_ezsigntemplatepackagesigner_mapping = e_ezsigntemplatepackagesigner_mapping;
    m_e_ezsigntemplatepackagesigner_mapping_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_e_ezsigntemplatepackagesigner_mapping_Set() const{
    return m_e_ezsigntemplatepackagesigner_mapping_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_e_ezsigntemplatepackagesigner_mapping_Valid() const{
    return m_e_ezsigntemplatepackagesigner_mapping_isValid;
}

QString Ezsigntemplatepackagesigner_ResponseCompound::getSEzsigntemplatepackagesignerDescription() const {
    return m_s_ezsigntemplatepackagesigner_description;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description) {
    m_s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;
    m_s_ezsigntemplatepackagesigner_description_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_s_ezsigntemplatepackagesigner_description_Set() const{
    return m_s_ezsigntemplatepackagesigner_description_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_s_ezsigntemplatepackagesigner_description_Valid() const{
    return m_s_ezsigntemplatepackagesigner_description_isValid;
}

QString Ezsigntemplatepackagesigner_ResponseCompound::getSUserName() const {
    return m_s_user_name;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setSUserName(const QString &s_user_name) {
    m_s_user_name = s_user_name;
    m_s_user_name_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_s_user_name_Set() const{
    return m_s_user_name_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_s_user_name_Valid() const{
    return m_s_user_name_isValid;
}

QString Ezsigntemplatepackagesigner_ResponseCompound::getSUsergroupNameX() const {
    return m_s_usergroup_name_x;
}
void Ezsigntemplatepackagesigner_ResponseCompound::setSUsergroupNameX(const QString &s_usergroup_name_x) {
    m_s_usergroup_name_x = s_usergroup_name_x;
    m_s_usergroup_name_x_isSet = true;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_s_usergroup_name_x_Set() const{
    return m_s_usergroup_name_x_isSet;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::is_s_usergroup_name_x_Valid() const{
    return m_s_usergroup_name_x_isValid;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezdoctemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezdoctemplatedocument_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackagesigner_receivecopy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatepackagesigner_mapping.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepackagesigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_usergroup_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepackagesigner_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackagesigner_id_isValid && m_fki_ezsigntemplatepackage_id_isValid && m_s_ezsigntemplatepackagesigner_description_isValid && true;
}

} // namespace Ezmaxapi

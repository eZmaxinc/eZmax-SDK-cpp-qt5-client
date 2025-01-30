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

#include "Ezsigntemplate_RequestV3.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplate_RequestV3::Ezsigntemplate_RequestV3(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplate_RequestV3::Ezsigntemplate_RequestV3() {
    this->initializeModel();
}

Ezsigntemplate_RequestV3::~Ezsigntemplate_RequestV3() {}

void Ezsigntemplate_RequestV3::initializeModel() {

    m_pki_ezsigntemplate_id_isSet = false;
    m_pki_ezsigntemplate_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_fki_ezdoctemplatedocument_id_isSet = false;
    m_fki_ezdoctemplatedocument_id_isValid = false;

    m_s_ezsigntemplate_description_isSet = false;
    m_s_ezsigntemplate_description_isValid = false;

    m_s_ezsigntemplate_externaldescription_isSet = false;
    m_s_ezsigntemplate_externaldescription_isValid = false;

    m_t_ezsigntemplate_comment_isSet = false;
    m_t_ezsigntemplate_comment_isValid = false;

    m_e_ezsigntemplate_recognition_isSet = false;
    m_e_ezsigntemplate_recognition_isValid = false;

    m_s_ezsigntemplate_filenameregexp_isSet = false;
    m_s_ezsigntemplate_filenameregexp_isValid = false;

    m_b_ezsigntemplate_adminonly_isSet = false;
    m_b_ezsigntemplate_adminonly_isValid = false;

    m_e_ezsigntemplate_type_isSet = false;
    m_e_ezsigntemplate_type_isValid = false;
}

void Ezsigntemplate_RequestV3::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplate_RequestV3::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplate_id, json[QString("pkiEzsigntemplateID")]);
    m_pki_ezsigntemplate_id_isSet = !json[QString("pkiEzsigntemplateID")].isNull() && m_pki_ezsigntemplate_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_fki_ezdoctemplatedocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezdoctemplatedocument_id, json[QString("fkiEzdoctemplatedocumentID")]);
    m_fki_ezdoctemplatedocument_id_isSet = !json[QString("fkiEzdoctemplatedocumentID")].isNull() && m_fki_ezdoctemplatedocument_id_isValid;

    m_s_ezsigntemplate_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplate_description, json[QString("sEzsigntemplateDescription")]);
    m_s_ezsigntemplate_description_isSet = !json[QString("sEzsigntemplateDescription")].isNull() && m_s_ezsigntemplate_description_isValid;

    m_s_ezsigntemplate_externaldescription_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplate_externaldescription, json[QString("sEzsigntemplateExternaldescription")]);
    m_s_ezsigntemplate_externaldescription_isSet = !json[QString("sEzsigntemplateExternaldescription")].isNull() && m_s_ezsigntemplate_externaldescription_isValid;

    m_t_ezsigntemplate_comment_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsigntemplate_comment, json[QString("tEzsigntemplateComment")]);
    m_t_ezsigntemplate_comment_isSet = !json[QString("tEzsigntemplateComment")].isNull() && m_t_ezsigntemplate_comment_isValid;

    m_e_ezsigntemplate_recognition_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplate_recognition, json[QString("eEzsigntemplateRecognition")]);
    m_e_ezsigntemplate_recognition_isSet = !json[QString("eEzsigntemplateRecognition")].isNull() && m_e_ezsigntemplate_recognition_isValid;

    m_s_ezsigntemplate_filenameregexp_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplate_filenameregexp, json[QString("sEzsigntemplateFilenameregexp")]);
    m_s_ezsigntemplate_filenameregexp_isSet = !json[QString("sEzsigntemplateFilenameregexp")].isNull() && m_s_ezsigntemplate_filenameregexp_isValid;

    m_b_ezsigntemplate_adminonly_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplate_adminonly, json[QString("bEzsigntemplateAdminonly")]);
    m_b_ezsigntemplate_adminonly_isSet = !json[QString("bEzsigntemplateAdminonly")].isNull() && m_b_ezsigntemplate_adminonly_isValid;

    m_e_ezsigntemplate_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplate_type, json[QString("eEzsigntemplateType")]);
    m_e_ezsigntemplate_type_isSet = !json[QString("eEzsigntemplateType")].isNull() && m_e_ezsigntemplate_type_isValid;
}

QString Ezsigntemplate_RequestV3::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplate_RequestV3::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplate_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_fki_ezdoctemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzdoctemplatedocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezdoctemplatedocument_id));
    }
    if (m_s_ezsigntemplate_description_isSet) {
        obj.insert(QString("sEzsigntemplateDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplate_description));
    }
    if (m_s_ezsigntemplate_externaldescription_isSet) {
        obj.insert(QString("sEzsigntemplateExternaldescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplate_externaldescription));
    }
    if (m_t_ezsigntemplate_comment_isSet) {
        obj.insert(QString("tEzsigntemplateComment"), ::Ezmaxapi::toJsonValue(m_t_ezsigntemplate_comment));
    }
    if (m_e_ezsigntemplate_recognition.isSet()) {
        obj.insert(QString("eEzsigntemplateRecognition"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplate_recognition));
    }
    if (m_s_ezsigntemplate_filenameregexp_isSet) {
        obj.insert(QString("sEzsigntemplateFilenameregexp"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplate_filenameregexp));
    }
    if (m_b_ezsigntemplate_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplateAdminonly"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplate_adminonly));
    }
    if (m_e_ezsigntemplate_type.isSet()) {
        obj.insert(QString("eEzsigntemplateType"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplate_type));
    }
    return obj;
}

qint32 Ezsigntemplate_RequestV3::getPkiEzsigntemplateId() const {
    return m_pki_ezsigntemplate_id;
}
void Ezsigntemplate_RequestV3::setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id) {
    m_pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    m_pki_ezsigntemplate_id_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_pki_ezsigntemplate_id_Set() const{
    return m_pki_ezsigntemplate_id_isSet;
}

bool Ezsigntemplate_RequestV3::is_pki_ezsigntemplate_id_Valid() const{
    return m_pki_ezsigntemplate_id_isValid;
}

qint32 Ezsigntemplate_RequestV3::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezsigntemplate_RequestV3::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezsigntemplate_RequestV3::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 Ezsigntemplate_RequestV3::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Ezsigntemplate_RequestV3::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Ezsigntemplate_RequestV3::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

qint32 Ezsigntemplate_RequestV3::getFkiEzdoctemplatedocumentId() const {
    return m_fki_ezdoctemplatedocument_id;
}
void Ezsigntemplate_RequestV3::setFkiEzdoctemplatedocumentId(const qint32 &fki_ezdoctemplatedocument_id) {
    m_fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    m_fki_ezdoctemplatedocument_id_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_fki_ezdoctemplatedocument_id_Set() const{
    return m_fki_ezdoctemplatedocument_id_isSet;
}

bool Ezsigntemplate_RequestV3::is_fki_ezdoctemplatedocument_id_Valid() const{
    return m_fki_ezdoctemplatedocument_id_isValid;
}

QString Ezsigntemplate_RequestV3::getSEzsigntemplateDescription() const {
    return m_s_ezsigntemplate_description;
}
void Ezsigntemplate_RequestV3::setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description) {
    m_s_ezsigntemplate_description = s_ezsigntemplate_description;
    m_s_ezsigntemplate_description_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_s_ezsigntemplate_description_Set() const{
    return m_s_ezsigntemplate_description_isSet;
}

bool Ezsigntemplate_RequestV3::is_s_ezsigntemplate_description_Valid() const{
    return m_s_ezsigntemplate_description_isValid;
}

QString Ezsigntemplate_RequestV3::getSEzsigntemplateExternaldescription() const {
    return m_s_ezsigntemplate_externaldescription;
}
void Ezsigntemplate_RequestV3::setSEzsigntemplateExternaldescription(const QString &s_ezsigntemplate_externaldescription) {
    m_s_ezsigntemplate_externaldescription = s_ezsigntemplate_externaldescription;
    m_s_ezsigntemplate_externaldescription_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_s_ezsigntemplate_externaldescription_Set() const{
    return m_s_ezsigntemplate_externaldescription_isSet;
}

bool Ezsigntemplate_RequestV3::is_s_ezsigntemplate_externaldescription_Valid() const{
    return m_s_ezsigntemplate_externaldescription_isValid;
}

QString Ezsigntemplate_RequestV3::getTEzsigntemplateComment() const {
    return m_t_ezsigntemplate_comment;
}
void Ezsigntemplate_RequestV3::setTEzsigntemplateComment(const QString &t_ezsigntemplate_comment) {
    m_t_ezsigntemplate_comment = t_ezsigntemplate_comment;
    m_t_ezsigntemplate_comment_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_t_ezsigntemplate_comment_Set() const{
    return m_t_ezsigntemplate_comment_isSet;
}

bool Ezsigntemplate_RequestV3::is_t_ezsigntemplate_comment_Valid() const{
    return m_t_ezsigntemplate_comment_isValid;
}

Field_eEzsigntemplateRecognition Ezsigntemplate_RequestV3::getEEzsigntemplateRecognition() const {
    return m_e_ezsigntemplate_recognition;
}
void Ezsigntemplate_RequestV3::setEEzsigntemplateRecognition(const Field_eEzsigntemplateRecognition &e_ezsigntemplate_recognition) {
    m_e_ezsigntemplate_recognition = e_ezsigntemplate_recognition;
    m_e_ezsigntemplate_recognition_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_e_ezsigntemplate_recognition_Set() const{
    return m_e_ezsigntemplate_recognition_isSet;
}

bool Ezsigntemplate_RequestV3::is_e_ezsigntemplate_recognition_Valid() const{
    return m_e_ezsigntemplate_recognition_isValid;
}

QString Ezsigntemplate_RequestV3::getSEzsigntemplateFilenameregexp() const {
    return m_s_ezsigntemplate_filenameregexp;
}
void Ezsigntemplate_RequestV3::setSEzsigntemplateFilenameregexp(const QString &s_ezsigntemplate_filenameregexp) {
    m_s_ezsigntemplate_filenameregexp = s_ezsigntemplate_filenameregexp;
    m_s_ezsigntemplate_filenameregexp_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_s_ezsigntemplate_filenameregexp_Set() const{
    return m_s_ezsigntemplate_filenameregexp_isSet;
}

bool Ezsigntemplate_RequestV3::is_s_ezsigntemplate_filenameregexp_Valid() const{
    return m_s_ezsigntemplate_filenameregexp_isValid;
}

bool Ezsigntemplate_RequestV3::isBEzsigntemplateAdminonly() const {
    return m_b_ezsigntemplate_adminonly;
}
void Ezsigntemplate_RequestV3::setBEzsigntemplateAdminonly(const bool &b_ezsigntemplate_adminonly) {
    m_b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    m_b_ezsigntemplate_adminonly_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_b_ezsigntemplate_adminonly_Set() const{
    return m_b_ezsigntemplate_adminonly_isSet;
}

bool Ezsigntemplate_RequestV3::is_b_ezsigntemplate_adminonly_Valid() const{
    return m_b_ezsigntemplate_adminonly_isValid;
}

Field_eEzsigntemplateType Ezsigntemplate_RequestV3::getEEzsigntemplateType() const {
    return m_e_ezsigntemplate_type;
}
void Ezsigntemplate_RequestV3::setEEzsigntemplateType(const Field_eEzsigntemplateType &e_ezsigntemplate_type) {
    m_e_ezsigntemplate_type = e_ezsigntemplate_type;
    m_e_ezsigntemplate_type_isSet = true;
}

bool Ezsigntemplate_RequestV3::is_e_ezsigntemplate_type_Set() const{
    return m_e_ezsigntemplate_type_isSet;
}

bool Ezsigntemplate_RequestV3::is_e_ezsigntemplate_type_Valid() const{
    return m_e_ezsigntemplate_type_isValid;
}

bool Ezsigntemplate_RequestV3::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplate_id_isSet) {
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

        if (m_fki_ezdoctemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplate_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplate_externaldescription_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsigntemplate_comment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplate_recognition.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplate_filenameregexp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplate_adminonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplate_type.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplate_RequestV3::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_language_id_isValid && m_s_ezsigntemplate_description_isValid && m_b_ezsigntemplate_adminonly_isValid && m_e_ezsigntemplate_type_isValid && true;
}

} // namespace Ezmaxapi

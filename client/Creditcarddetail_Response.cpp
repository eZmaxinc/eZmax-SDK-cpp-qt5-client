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

#include "Creditcarddetail_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcarddetail_Response::Creditcarddetail_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcarddetail_Response::Creditcarddetail_Response() {
    this->initializeModel();
}

Creditcarddetail_Response::~Creditcarddetail_Response() {}

void Creditcarddetail_Response::initializeModel() {

    m_pki_creditcarddetail_id_isSet = false;
    m_pki_creditcarddetail_id_isValid = false;

    m_fki_creditcardtype_id_isSet = false;
    m_fki_creditcardtype_id_isValid = false;

    m_i_creditcarddetail_lastdigits_isSet = false;
    m_i_creditcarddetail_lastdigits_isValid = false;

    m_i_creditcarddetail_expirationmonth_isSet = false;
    m_i_creditcarddetail_expirationmonth_isValid = false;

    m_i_creditcarddetail_expirationyear_isSet = false;
    m_i_creditcarddetail_expirationyear_isValid = false;

    m_s_creditcarddetail_civic_isSet = false;
    m_s_creditcarddetail_civic_isValid = false;

    m_s_creditcarddetail_street_isSet = false;
    m_s_creditcarddetail_street_isValid = false;

    m_s_creditcarddetail_zip_isSet = false;
    m_s_creditcarddetail_zip_isValid = false;
}

void Creditcarddetail_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcarddetail_Response::fromJsonObject(QJsonObject json) {

    m_pki_creditcarddetail_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_creditcarddetail_id, json[QString("pkiCreditcarddetailID")]);
    m_pki_creditcarddetail_id_isSet = !json[QString("pkiCreditcarddetailID")].isNull() && m_pki_creditcarddetail_id_isValid;

    m_fki_creditcardtype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_creditcardtype_id, json[QString("fkiCreditcardtypeID")]);
    m_fki_creditcardtype_id_isSet = !json[QString("fkiCreditcardtypeID")].isNull() && m_fki_creditcardtype_id_isValid;

    m_i_creditcarddetail_lastdigits_isValid = ::Ezmaxapi::fromJsonValue(m_i_creditcarddetail_lastdigits, json[QString("iCreditcarddetailLastdigits")]);
    m_i_creditcarddetail_lastdigits_isSet = !json[QString("iCreditcarddetailLastdigits")].isNull() && m_i_creditcarddetail_lastdigits_isValid;

    m_i_creditcarddetail_expirationmonth_isValid = ::Ezmaxapi::fromJsonValue(m_i_creditcarddetail_expirationmonth, json[QString("iCreditcarddetailExpirationmonth")]);
    m_i_creditcarddetail_expirationmonth_isSet = !json[QString("iCreditcarddetailExpirationmonth")].isNull() && m_i_creditcarddetail_expirationmonth_isValid;

    m_i_creditcarddetail_expirationyear_isValid = ::Ezmaxapi::fromJsonValue(m_i_creditcarddetail_expirationyear, json[QString("iCreditcarddetailExpirationyear")]);
    m_i_creditcarddetail_expirationyear_isSet = !json[QString("iCreditcarddetailExpirationyear")].isNull() && m_i_creditcarddetail_expirationyear_isValid;

    m_s_creditcarddetail_civic_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcarddetail_civic, json[QString("sCreditcarddetailCivic")]);
    m_s_creditcarddetail_civic_isSet = !json[QString("sCreditcarddetailCivic")].isNull() && m_s_creditcarddetail_civic_isValid;

    m_s_creditcarddetail_street_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcarddetail_street, json[QString("sCreditcarddetailStreet")]);
    m_s_creditcarddetail_street_isSet = !json[QString("sCreditcarddetailStreet")].isNull() && m_s_creditcarddetail_street_isValid;

    m_s_creditcarddetail_zip_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcarddetail_zip, json[QString("sCreditcarddetailZip")]);
    m_s_creditcarddetail_zip_isSet = !json[QString("sCreditcarddetailZip")].isNull() && m_s_creditcarddetail_zip_isValid;
}

QString Creditcarddetail_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcarddetail_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_creditcarddetail_id_isSet) {
        obj.insert(QString("pkiCreditcarddetailID"), ::Ezmaxapi::toJsonValue(m_pki_creditcarddetail_id));
    }
    if (m_fki_creditcardtype_id_isSet) {
        obj.insert(QString("fkiCreditcardtypeID"), ::Ezmaxapi::toJsonValue(m_fki_creditcardtype_id));
    }
    if (m_i_creditcarddetail_lastdigits_isSet) {
        obj.insert(QString("iCreditcarddetailLastdigits"), ::Ezmaxapi::toJsonValue(m_i_creditcarddetail_lastdigits));
    }
    if (m_i_creditcarddetail_expirationmonth_isSet) {
        obj.insert(QString("iCreditcarddetailExpirationmonth"), ::Ezmaxapi::toJsonValue(m_i_creditcarddetail_expirationmonth));
    }
    if (m_i_creditcarddetail_expirationyear_isSet) {
        obj.insert(QString("iCreditcarddetailExpirationyear"), ::Ezmaxapi::toJsonValue(m_i_creditcarddetail_expirationyear));
    }
    if (m_s_creditcarddetail_civic_isSet) {
        obj.insert(QString("sCreditcarddetailCivic"), ::Ezmaxapi::toJsonValue(m_s_creditcarddetail_civic));
    }
    if (m_s_creditcarddetail_street_isSet) {
        obj.insert(QString("sCreditcarddetailStreet"), ::Ezmaxapi::toJsonValue(m_s_creditcarddetail_street));
    }
    if (m_s_creditcarddetail_zip_isSet) {
        obj.insert(QString("sCreditcarddetailZip"), ::Ezmaxapi::toJsonValue(m_s_creditcarddetail_zip));
    }
    return obj;
}

qint32 Creditcarddetail_Response::getPkiCreditcarddetailId() const {
    return m_pki_creditcarddetail_id;
}
void Creditcarddetail_Response::setPkiCreditcarddetailId(const qint32 &pki_creditcarddetail_id) {
    m_pki_creditcarddetail_id = pki_creditcarddetail_id;
    m_pki_creditcarddetail_id_isSet = true;
}

bool Creditcarddetail_Response::is_pki_creditcarddetail_id_Set() const{
    return m_pki_creditcarddetail_id_isSet;
}

bool Creditcarddetail_Response::is_pki_creditcarddetail_id_Valid() const{
    return m_pki_creditcarddetail_id_isValid;
}

qint32 Creditcarddetail_Response::getFkiCreditcardtypeId() const {
    return m_fki_creditcardtype_id;
}
void Creditcarddetail_Response::setFkiCreditcardtypeId(const qint32 &fki_creditcardtype_id) {
    m_fki_creditcardtype_id = fki_creditcardtype_id;
    m_fki_creditcardtype_id_isSet = true;
}

bool Creditcarddetail_Response::is_fki_creditcardtype_id_Set() const{
    return m_fki_creditcardtype_id_isSet;
}

bool Creditcarddetail_Response::is_fki_creditcardtype_id_Valid() const{
    return m_fki_creditcardtype_id_isValid;
}

qint32 Creditcarddetail_Response::getICreditcarddetailLastdigits() const {
    return m_i_creditcarddetail_lastdigits;
}
void Creditcarddetail_Response::setICreditcarddetailLastdigits(const qint32 &i_creditcarddetail_lastdigits) {
    m_i_creditcarddetail_lastdigits = i_creditcarddetail_lastdigits;
    m_i_creditcarddetail_lastdigits_isSet = true;
}

bool Creditcarddetail_Response::is_i_creditcarddetail_lastdigits_Set() const{
    return m_i_creditcarddetail_lastdigits_isSet;
}

bool Creditcarddetail_Response::is_i_creditcarddetail_lastdigits_Valid() const{
    return m_i_creditcarddetail_lastdigits_isValid;
}

qint32 Creditcarddetail_Response::getICreditcarddetailExpirationmonth() const {
    return m_i_creditcarddetail_expirationmonth;
}
void Creditcarddetail_Response::setICreditcarddetailExpirationmonth(const qint32 &i_creditcarddetail_expirationmonth) {
    m_i_creditcarddetail_expirationmonth = i_creditcarddetail_expirationmonth;
    m_i_creditcarddetail_expirationmonth_isSet = true;
}

bool Creditcarddetail_Response::is_i_creditcarddetail_expirationmonth_Set() const{
    return m_i_creditcarddetail_expirationmonth_isSet;
}

bool Creditcarddetail_Response::is_i_creditcarddetail_expirationmonth_Valid() const{
    return m_i_creditcarddetail_expirationmonth_isValid;
}

qint32 Creditcarddetail_Response::getICreditcarddetailExpirationyear() const {
    return m_i_creditcarddetail_expirationyear;
}
void Creditcarddetail_Response::setICreditcarddetailExpirationyear(const qint32 &i_creditcarddetail_expirationyear) {
    m_i_creditcarddetail_expirationyear = i_creditcarddetail_expirationyear;
    m_i_creditcarddetail_expirationyear_isSet = true;
}

bool Creditcarddetail_Response::is_i_creditcarddetail_expirationyear_Set() const{
    return m_i_creditcarddetail_expirationyear_isSet;
}

bool Creditcarddetail_Response::is_i_creditcarddetail_expirationyear_Valid() const{
    return m_i_creditcarddetail_expirationyear_isValid;
}

QString Creditcarddetail_Response::getSCreditcarddetailCivic() const {
    return m_s_creditcarddetail_civic;
}
void Creditcarddetail_Response::setSCreditcarddetailCivic(const QString &s_creditcarddetail_civic) {
    m_s_creditcarddetail_civic = s_creditcarddetail_civic;
    m_s_creditcarddetail_civic_isSet = true;
}

bool Creditcarddetail_Response::is_s_creditcarddetail_civic_Set() const{
    return m_s_creditcarddetail_civic_isSet;
}

bool Creditcarddetail_Response::is_s_creditcarddetail_civic_Valid() const{
    return m_s_creditcarddetail_civic_isValid;
}

QString Creditcarddetail_Response::getSCreditcarddetailStreet() const {
    return m_s_creditcarddetail_street;
}
void Creditcarddetail_Response::setSCreditcarddetailStreet(const QString &s_creditcarddetail_street) {
    m_s_creditcarddetail_street = s_creditcarddetail_street;
    m_s_creditcarddetail_street_isSet = true;
}

bool Creditcarddetail_Response::is_s_creditcarddetail_street_Set() const{
    return m_s_creditcarddetail_street_isSet;
}

bool Creditcarddetail_Response::is_s_creditcarddetail_street_Valid() const{
    return m_s_creditcarddetail_street_isValid;
}

QString Creditcarddetail_Response::getSCreditcarddetailZip() const {
    return m_s_creditcarddetail_zip;
}
void Creditcarddetail_Response::setSCreditcarddetailZip(const QString &s_creditcarddetail_zip) {
    m_s_creditcarddetail_zip = s_creditcarddetail_zip;
    m_s_creditcarddetail_zip_isSet = true;
}

bool Creditcarddetail_Response::is_s_creditcarddetail_zip_Set() const{
    return m_s_creditcarddetail_zip_isSet;
}

bool Creditcarddetail_Response::is_s_creditcarddetail_zip_Valid() const{
    return m_s_creditcarddetail_zip_isValid;
}

bool Creditcarddetail_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_creditcarddetail_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_creditcardtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_creditcarddetail_lastdigits_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_creditcarddetail_expirationmonth_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_creditcarddetail_expirationyear_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcarddetail_civic_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcarddetail_street_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcarddetail_zip_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcarddetail_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_creditcarddetail_id_isValid && m_fki_creditcardtype_id_isValid && m_i_creditcarddetail_lastdigits_isValid && m_i_creditcarddetail_expirationmonth_isValid && m_i_creditcarddetail_expirationyear_isValid && m_s_creditcarddetail_civic_isValid && m_s_creditcarddetail_street_isValid && m_s_creditcarddetail_zip_isValid && true;
}

} // namespace Ezmaxapi

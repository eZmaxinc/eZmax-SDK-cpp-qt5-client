/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplateformfield_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplateformfield_Request::OAIEzsigntemplateformfield_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplateformfield_Request::OAIEzsigntemplateformfield_Request() {
    this->initializeModel();
}

OAIEzsigntemplateformfield_Request::~OAIEzsigntemplateformfield_Request() {}

void OAIEzsigntemplateformfield_Request::initializeModel() {

    m_pki_ezsigntemplateformfield_id_isSet = false;
    m_pki_ezsigntemplateformfield_id_isValid = false;

    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = false;
    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = false;

    m_s_ezsigntemplateformfield_label_isSet = false;
    m_s_ezsigntemplateformfield_label_isValid = false;

    m_s_ezsigntemplateformfield_value_isSet = false;
    m_s_ezsigntemplateformfield_value_isValid = false;

    m_i_ezsigntemplateformfield_x_isSet = false;
    m_i_ezsigntemplateformfield_x_isValid = false;

    m_i_ezsigntemplateformfield_y_isSet = false;
    m_i_ezsigntemplateformfield_y_isValid = false;

    m_i_ezsigntemplateformfield_width_isSet = false;
    m_i_ezsigntemplateformfield_width_isValid = false;

    m_i_ezsigntemplateformfield_height_isSet = false;
    m_i_ezsigntemplateformfield_height_isValid = false;

    m_b_ezsigntemplateformfield_selected_isSet = false;
    m_b_ezsigntemplateformfield_selected_isValid = false;
}

void OAIEzsigntemplateformfield_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplateformfield_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateformfield_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplateformfield_id, json[QString("pkiEzsigntemplateformfieldID")]);
    m_pki_ezsigntemplateformfield_id_isSet = !json[QString("pkiEzsigntemplateformfieldID")].isNull() && m_pki_ezsigntemplateformfield_id_isValid;

    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocumentpage_pagenumber, json[QString("iEzsigntemplatedocumentpagePagenumber")]);
    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = !json[QString("iEzsigntemplatedocumentpagePagenumber")].isNull() && m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    m_s_ezsigntemplateformfield_label_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplateformfield_label, json[QString("sEzsigntemplateformfieldLabel")]);
    m_s_ezsigntemplateformfield_label_isSet = !json[QString("sEzsigntemplateformfieldLabel")].isNull() && m_s_ezsigntemplateformfield_label_isValid;

    m_s_ezsigntemplateformfield_value_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplateformfield_value, json[QString("sEzsigntemplateformfieldValue")]);
    m_s_ezsigntemplateformfield_value_isSet = !json[QString("sEzsigntemplateformfieldValue")].isNull() && m_s_ezsigntemplateformfield_value_isValid;

    m_i_ezsigntemplateformfield_x_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplateformfield_x, json[QString("iEzsigntemplateformfieldX")]);
    m_i_ezsigntemplateformfield_x_isSet = !json[QString("iEzsigntemplateformfieldX")].isNull() && m_i_ezsigntemplateformfield_x_isValid;

    m_i_ezsigntemplateformfield_y_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplateformfield_y, json[QString("iEzsigntemplateformfieldY")]);
    m_i_ezsigntemplateformfield_y_isSet = !json[QString("iEzsigntemplateformfieldY")].isNull() && m_i_ezsigntemplateformfield_y_isValid;

    m_i_ezsigntemplateformfield_width_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplateformfield_width, json[QString("iEzsigntemplateformfieldWidth")]);
    m_i_ezsigntemplateformfield_width_isSet = !json[QString("iEzsigntemplateformfieldWidth")].isNull() && m_i_ezsigntemplateformfield_width_isValid;

    m_i_ezsigntemplateformfield_height_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplateformfield_height, json[QString("iEzsigntemplateformfieldHeight")]);
    m_i_ezsigntemplateformfield_height_isSet = !json[QString("iEzsigntemplateformfieldHeight")].isNull() && m_i_ezsigntemplateformfield_height_isValid;

    m_b_ezsigntemplateformfield_selected_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplateformfield_selected, json[QString("bEzsigntemplateformfieldSelected")]);
    m_b_ezsigntemplateformfield_selected_isSet = !json[QString("bEzsigntemplateformfieldSelected")].isNull() && m_b_ezsigntemplateformfield_selected_isValid;
}

QString OAIEzsigntemplateformfield_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplateformfield_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateformfield_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateformfieldID"), ::OpenAPI::toJsonValue(pki_ezsigntemplateformfield_id));
    }
    if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagePagenumber"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocumentpage_pagenumber));
    }
    if (m_s_ezsigntemplateformfield_label_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldLabel"), ::OpenAPI::toJsonValue(s_ezsigntemplateformfield_label));
    }
    if (m_s_ezsigntemplateformfield_value_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldValue"), ::OpenAPI::toJsonValue(s_ezsigntemplateformfield_value));
    }
    if (m_i_ezsigntemplateformfield_x_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldX"), ::OpenAPI::toJsonValue(i_ezsigntemplateformfield_x));
    }
    if (m_i_ezsigntemplateformfield_y_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldY"), ::OpenAPI::toJsonValue(i_ezsigntemplateformfield_y));
    }
    if (m_i_ezsigntemplateformfield_width_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldWidth"), ::OpenAPI::toJsonValue(i_ezsigntemplateformfield_width));
    }
    if (m_i_ezsigntemplateformfield_height_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldHeight"), ::OpenAPI::toJsonValue(i_ezsigntemplateformfield_height));
    }
    if (m_b_ezsigntemplateformfield_selected_isSet) {
        obj.insert(QString("bEzsigntemplateformfieldSelected"), ::OpenAPI::toJsonValue(b_ezsigntemplateformfield_selected));
    }
    return obj;
}

qint32 OAIEzsigntemplateformfield_Request::getPkiEzsigntemplateformfieldId() const {
    return pki_ezsigntemplateformfield_id;
}
void OAIEzsigntemplateformfield_Request::setPkiEzsigntemplateformfieldId(const qint32 &pki_ezsigntemplateformfield_id) {
    this->pki_ezsigntemplateformfield_id = pki_ezsigntemplateformfield_id;
    this->m_pki_ezsigntemplateformfield_id_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_pki_ezsigntemplateformfield_id_Set() const{
    return m_pki_ezsigntemplateformfield_id_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_pki_ezsigntemplateformfield_id_Valid() const{
    return m_pki_ezsigntemplateformfield_id_isValid;
}

qint32 OAIEzsigntemplateformfield_Request::getIEzsigntemplatedocumentpagePagenumber() const {
    return i_ezsigntemplatedocumentpage_pagenumber;
}
void OAIEzsigntemplateformfield_Request::setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber) {
    this->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    this->m_i_ezsigntemplatedocumentpage_pagenumber_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplatedocumentpage_pagenumber_Set() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isValid;
}

QString OAIEzsigntemplateformfield_Request::getSEzsigntemplateformfieldLabel() const {
    return s_ezsigntemplateformfield_label;
}
void OAIEzsigntemplateformfield_Request::setSEzsigntemplateformfieldLabel(const QString &s_ezsigntemplateformfield_label) {
    this->s_ezsigntemplateformfield_label = s_ezsigntemplateformfield_label;
    this->m_s_ezsigntemplateformfield_label_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_s_ezsigntemplateformfield_label_Set() const{
    return m_s_ezsigntemplateformfield_label_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_s_ezsigntemplateformfield_label_Valid() const{
    return m_s_ezsigntemplateformfield_label_isValid;
}

QString OAIEzsigntemplateformfield_Request::getSEzsigntemplateformfieldValue() const {
    return s_ezsigntemplateformfield_value;
}
void OAIEzsigntemplateformfield_Request::setSEzsigntemplateformfieldValue(const QString &s_ezsigntemplateformfield_value) {
    this->s_ezsigntemplateformfield_value = s_ezsigntemplateformfield_value;
    this->m_s_ezsigntemplateformfield_value_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_s_ezsigntemplateformfield_value_Set() const{
    return m_s_ezsigntemplateformfield_value_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_s_ezsigntemplateformfield_value_Valid() const{
    return m_s_ezsigntemplateformfield_value_isValid;
}

qint32 OAIEzsigntemplateformfield_Request::getIEzsigntemplateformfieldX() const {
    return i_ezsigntemplateformfield_x;
}
void OAIEzsigntemplateformfield_Request::setIEzsigntemplateformfieldX(const qint32 &i_ezsigntemplateformfield_x) {
    this->i_ezsigntemplateformfield_x = i_ezsigntemplateformfield_x;
    this->m_i_ezsigntemplateformfield_x_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplateformfield_x_Set() const{
    return m_i_ezsigntemplateformfield_x_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplateformfield_x_Valid() const{
    return m_i_ezsigntemplateformfield_x_isValid;
}

qint32 OAIEzsigntemplateformfield_Request::getIEzsigntemplateformfieldY() const {
    return i_ezsigntemplateformfield_y;
}
void OAIEzsigntemplateformfield_Request::setIEzsigntemplateformfieldY(const qint32 &i_ezsigntemplateformfield_y) {
    this->i_ezsigntemplateformfield_y = i_ezsigntemplateformfield_y;
    this->m_i_ezsigntemplateformfield_y_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplateformfield_y_Set() const{
    return m_i_ezsigntemplateformfield_y_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplateformfield_y_Valid() const{
    return m_i_ezsigntemplateformfield_y_isValid;
}

qint32 OAIEzsigntemplateformfield_Request::getIEzsigntemplateformfieldWidth() const {
    return i_ezsigntemplateformfield_width;
}
void OAIEzsigntemplateformfield_Request::setIEzsigntemplateformfieldWidth(const qint32 &i_ezsigntemplateformfield_width) {
    this->i_ezsigntemplateformfield_width = i_ezsigntemplateformfield_width;
    this->m_i_ezsigntemplateformfield_width_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplateformfield_width_Set() const{
    return m_i_ezsigntemplateformfield_width_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplateformfield_width_Valid() const{
    return m_i_ezsigntemplateformfield_width_isValid;
}

qint32 OAIEzsigntemplateformfield_Request::getIEzsigntemplateformfieldHeight() const {
    return i_ezsigntemplateformfield_height;
}
void OAIEzsigntemplateformfield_Request::setIEzsigntemplateformfieldHeight(const qint32 &i_ezsigntemplateformfield_height) {
    this->i_ezsigntemplateformfield_height = i_ezsigntemplateformfield_height;
    this->m_i_ezsigntemplateformfield_height_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplateformfield_height_Set() const{
    return m_i_ezsigntemplateformfield_height_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_i_ezsigntemplateformfield_height_Valid() const{
    return m_i_ezsigntemplateformfield_height_isValid;
}

bool OAIEzsigntemplateformfield_Request::isBEzsigntemplateformfieldSelected() const {
    return b_ezsigntemplateformfield_selected;
}
void OAIEzsigntemplateformfield_Request::setBEzsigntemplateformfieldSelected(const bool &b_ezsigntemplateformfield_selected) {
    this->b_ezsigntemplateformfield_selected = b_ezsigntemplateformfield_selected;
    this->m_b_ezsigntemplateformfield_selected_isSet = true;
}

bool OAIEzsigntemplateformfield_Request::is_b_ezsigntemplateformfield_selected_Set() const{
    return m_b_ezsigntemplateformfield_selected_isSet;
}

bool OAIEzsigntemplateformfield_Request::is_b_ezsigntemplateformfield_selected_Valid() const{
    return m_b_ezsigntemplateformfield_selected_isValid;
}

bool OAIEzsigntemplateformfield_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplateformfield_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateformfield_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateformfield_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfield_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfield_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfield_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfield_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplateformfield_selected_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplateformfield_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_ezsigntemplatedocumentpage_pagenumber_isValid && m_s_ezsigntemplateformfield_label_isValid && m_i_ezsigntemplateformfield_x_isValid && m_i_ezsigntemplateformfield_y_isValid && m_i_ezsigntemplateformfield_width_isValid && m_i_ezsigntemplateformfield_height_isValid && true;
}

} // namespace OpenAPI

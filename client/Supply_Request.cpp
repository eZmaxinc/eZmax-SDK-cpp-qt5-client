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

#include "Supply_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Supply_Request::Supply_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Supply_Request::Supply_Request() {
    this->initializeModel();
}

Supply_Request::~Supply_Request() {}

void Supply_Request::initializeModel() {

    m_pki_supply_id_isSet = false;
    m_pki_supply_id_isValid = false;

    m_fki_glaccount_id_isSet = false;
    m_fki_glaccount_id_isValid = false;

    m_fki_glaccountcontainer_id_isSet = false;
    m_fki_glaccountcontainer_id_isValid = false;

    m_fki_variableexpense_id_isSet = false;
    m_fki_variableexpense_id_isValid = false;

    m_s_supply_code_isSet = false;
    m_s_supply_code_isValid = false;

    m_obj_supply_description_isSet = false;
    m_obj_supply_description_isValid = false;

    m_d_supply_unitprice_isSet = false;
    m_d_supply_unitprice_isValid = false;

    m_b_supply_isactive_isSet = false;
    m_b_supply_isactive_isValid = false;

    m_b_supply_variableprice_isSet = false;
    m_b_supply_variableprice_isValid = false;
}

void Supply_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Supply_Request::fromJsonObject(QJsonObject json) {

    m_pki_supply_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_supply_id, json[QString("pkiSupplyID")]);
    m_pki_supply_id_isSet = !json[QString("pkiSupplyID")].isNull() && m_pki_supply_id_isValid;

    m_fki_glaccount_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_glaccount_id, json[QString("fkiGlaccountID")]);
    m_fki_glaccount_id_isSet = !json[QString("fkiGlaccountID")].isNull() && m_fki_glaccount_id_isValid;

    m_fki_glaccountcontainer_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_glaccountcontainer_id, json[QString("fkiGlaccountcontainerID")]);
    m_fki_glaccountcontainer_id_isSet = !json[QString("fkiGlaccountcontainerID")].isNull() && m_fki_glaccountcontainer_id_isValid;

    m_fki_variableexpense_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_variableexpense_id, json[QString("fkiVariableexpenseID")]);
    m_fki_variableexpense_id_isSet = !json[QString("fkiVariableexpenseID")].isNull() && m_fki_variableexpense_id_isValid;

    m_s_supply_code_isValid = ::Ezmaxapi::fromJsonValue(m_s_supply_code, json[QString("sSupplyCode")]);
    m_s_supply_code_isSet = !json[QString("sSupplyCode")].isNull() && m_s_supply_code_isValid;

    m_obj_supply_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_supply_description, json[QString("objSupplyDescription")]);
    m_obj_supply_description_isSet = !json[QString("objSupplyDescription")].isNull() && m_obj_supply_description_isValid;

    m_d_supply_unitprice_isValid = ::Ezmaxapi::fromJsonValue(m_d_supply_unitprice, json[QString("dSupplyUnitprice")]);
    m_d_supply_unitprice_isSet = !json[QString("dSupplyUnitprice")].isNull() && m_d_supply_unitprice_isValid;

    m_b_supply_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_supply_isactive, json[QString("bSupplyIsactive")]);
    m_b_supply_isactive_isSet = !json[QString("bSupplyIsactive")].isNull() && m_b_supply_isactive_isValid;

    m_b_supply_variableprice_isValid = ::Ezmaxapi::fromJsonValue(m_b_supply_variableprice, json[QString("bSupplyVariableprice")]);
    m_b_supply_variableprice_isSet = !json[QString("bSupplyVariableprice")].isNull() && m_b_supply_variableprice_isValid;
}

QString Supply_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Supply_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_supply_id_isSet) {
        obj.insert(QString("pkiSupplyID"), ::Ezmaxapi::toJsonValue(m_pki_supply_id));
    }
    if (m_fki_glaccount_id_isSet) {
        obj.insert(QString("fkiGlaccountID"), ::Ezmaxapi::toJsonValue(m_fki_glaccount_id));
    }
    if (m_fki_glaccountcontainer_id_isSet) {
        obj.insert(QString("fkiGlaccountcontainerID"), ::Ezmaxapi::toJsonValue(m_fki_glaccountcontainer_id));
    }
    if (m_fki_variableexpense_id_isSet) {
        obj.insert(QString("fkiVariableexpenseID"), ::Ezmaxapi::toJsonValue(m_fki_variableexpense_id));
    }
    if (m_s_supply_code_isSet) {
        obj.insert(QString("sSupplyCode"), ::Ezmaxapi::toJsonValue(m_s_supply_code));
    }
    if (m_obj_supply_description.isSet()) {
        obj.insert(QString("objSupplyDescription"), ::Ezmaxapi::toJsonValue(m_obj_supply_description));
    }
    if (m_d_supply_unitprice_isSet) {
        obj.insert(QString("dSupplyUnitprice"), ::Ezmaxapi::toJsonValue(m_d_supply_unitprice));
    }
    if (m_b_supply_isactive_isSet) {
        obj.insert(QString("bSupplyIsactive"), ::Ezmaxapi::toJsonValue(m_b_supply_isactive));
    }
    if (m_b_supply_variableprice_isSet) {
        obj.insert(QString("bSupplyVariableprice"), ::Ezmaxapi::toJsonValue(m_b_supply_variableprice));
    }
    return obj;
}

qint32 Supply_Request::getPkiSupplyId() const {
    return m_pki_supply_id;
}
void Supply_Request::setPkiSupplyId(const qint32 &pki_supply_id) {
    m_pki_supply_id = pki_supply_id;
    m_pki_supply_id_isSet = true;
}

bool Supply_Request::is_pki_supply_id_Set() const{
    return m_pki_supply_id_isSet;
}

bool Supply_Request::is_pki_supply_id_Valid() const{
    return m_pki_supply_id_isValid;
}

qint32 Supply_Request::getFkiGlaccountId() const {
    return m_fki_glaccount_id;
}
void Supply_Request::setFkiGlaccountId(const qint32 &fki_glaccount_id) {
    m_fki_glaccount_id = fki_glaccount_id;
    m_fki_glaccount_id_isSet = true;
}

bool Supply_Request::is_fki_glaccount_id_Set() const{
    return m_fki_glaccount_id_isSet;
}

bool Supply_Request::is_fki_glaccount_id_Valid() const{
    return m_fki_glaccount_id_isValid;
}

qint32 Supply_Request::getFkiGlaccountcontainerId() const {
    return m_fki_glaccountcontainer_id;
}
void Supply_Request::setFkiGlaccountcontainerId(const qint32 &fki_glaccountcontainer_id) {
    m_fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    m_fki_glaccountcontainer_id_isSet = true;
}

bool Supply_Request::is_fki_glaccountcontainer_id_Set() const{
    return m_fki_glaccountcontainer_id_isSet;
}

bool Supply_Request::is_fki_glaccountcontainer_id_Valid() const{
    return m_fki_glaccountcontainer_id_isValid;
}

qint32 Supply_Request::getFkiVariableexpenseId() const {
    return m_fki_variableexpense_id;
}
void Supply_Request::setFkiVariableexpenseId(const qint32 &fki_variableexpense_id) {
    m_fki_variableexpense_id = fki_variableexpense_id;
    m_fki_variableexpense_id_isSet = true;
}

bool Supply_Request::is_fki_variableexpense_id_Set() const{
    return m_fki_variableexpense_id_isSet;
}

bool Supply_Request::is_fki_variableexpense_id_Valid() const{
    return m_fki_variableexpense_id_isValid;
}

QString Supply_Request::getSSupplyCode() const {
    return m_s_supply_code;
}
void Supply_Request::setSSupplyCode(const QString &s_supply_code) {
    m_s_supply_code = s_supply_code;
    m_s_supply_code_isSet = true;
}

bool Supply_Request::is_s_supply_code_Set() const{
    return m_s_supply_code_isSet;
}

bool Supply_Request::is_s_supply_code_Valid() const{
    return m_s_supply_code_isValid;
}

Multilingual_SupplyDescription Supply_Request::getObjSupplyDescription() const {
    return m_obj_supply_description;
}
void Supply_Request::setObjSupplyDescription(const Multilingual_SupplyDescription &obj_supply_description) {
    m_obj_supply_description = obj_supply_description;
    m_obj_supply_description_isSet = true;
}

bool Supply_Request::is_obj_supply_description_Set() const{
    return m_obj_supply_description_isSet;
}

bool Supply_Request::is_obj_supply_description_Valid() const{
    return m_obj_supply_description_isValid;
}

QString Supply_Request::getDSupplyUnitprice() const {
    return m_d_supply_unitprice;
}
void Supply_Request::setDSupplyUnitprice(const QString &d_supply_unitprice) {
    m_d_supply_unitprice = d_supply_unitprice;
    m_d_supply_unitprice_isSet = true;
}

bool Supply_Request::is_d_supply_unitprice_Set() const{
    return m_d_supply_unitprice_isSet;
}

bool Supply_Request::is_d_supply_unitprice_Valid() const{
    return m_d_supply_unitprice_isValid;
}

bool Supply_Request::isBSupplyIsactive() const {
    return m_b_supply_isactive;
}
void Supply_Request::setBSupplyIsactive(const bool &b_supply_isactive) {
    m_b_supply_isactive = b_supply_isactive;
    m_b_supply_isactive_isSet = true;
}

bool Supply_Request::is_b_supply_isactive_Set() const{
    return m_b_supply_isactive_isSet;
}

bool Supply_Request::is_b_supply_isactive_Valid() const{
    return m_b_supply_isactive_isValid;
}

bool Supply_Request::isBSupplyVariableprice() const {
    return m_b_supply_variableprice;
}
void Supply_Request::setBSupplyVariableprice(const bool &b_supply_variableprice) {
    m_b_supply_variableprice = b_supply_variableprice;
    m_b_supply_variableprice_isSet = true;
}

bool Supply_Request::is_b_supply_variableprice_Set() const{
    return m_b_supply_variableprice_isSet;
}

bool Supply_Request::is_b_supply_variableprice_Valid() const{
    return m_b_supply_variableprice_isValid;
}

bool Supply_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_supply_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_glaccount_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_glaccountcontainer_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_variableexpense_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_supply_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_supply_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_supply_unitprice_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_supply_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_supply_variableprice_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Supply_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_variableexpense_id_isValid && m_s_supply_code_isValid && m_obj_supply_description_isValid && m_d_supply_unitprice_isValid && m_b_supply_isactive_isValid && m_b_supply_variableprice_isValid && true;
}

} // namespace Ezmaxapi

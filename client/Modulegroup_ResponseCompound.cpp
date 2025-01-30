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

#include "Modulegroup_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Modulegroup_ResponseCompound::Modulegroup_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Modulegroup_ResponseCompound::Modulegroup_ResponseCompound() {
    this->initializeModel();
}

Modulegroup_ResponseCompound::~Modulegroup_ResponseCompound() {}

void Modulegroup_ResponseCompound::initializeModel() {

    m_pki_modulegroup_id_isSet = false;
    m_pki_modulegroup_id_isValid = false;

    m_s_modulegroup_name_x_isSet = false;
    m_s_modulegroup_name_x_isValid = false;

    m_a_obj_module_isSet = false;
    m_a_obj_module_isValid = false;
}

void Modulegroup_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Modulegroup_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_modulegroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_modulegroup_id, json[QString("pkiModulegroupID")]);
    m_pki_modulegroup_id_isSet = !json[QString("pkiModulegroupID")].isNull() && m_pki_modulegroup_id_isValid;

    m_s_modulegroup_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_modulegroup_name_x, json[QString("sModulegroupNameX")]);
    m_s_modulegroup_name_x_isSet = !json[QString("sModulegroupNameX")].isNull() && m_s_modulegroup_name_x_isValid;

    m_a_obj_module_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_module, json[QString("a_objModule")]);
    m_a_obj_module_isSet = !json[QString("a_objModule")].isNull() && m_a_obj_module_isValid;
}

QString Modulegroup_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Modulegroup_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_modulegroup_id_isSet) {
        obj.insert(QString("pkiModulegroupID"), ::Ezmaxapi::toJsonValue(m_pki_modulegroup_id));
    }
    if (m_s_modulegroup_name_x_isSet) {
        obj.insert(QString("sModulegroupNameX"), ::Ezmaxapi::toJsonValue(m_s_modulegroup_name_x));
    }
    if (m_a_obj_module.size() > 0) {
        obj.insert(QString("a_objModule"), ::Ezmaxapi::toJsonValue(m_a_obj_module));
    }
    return obj;
}

qint32 Modulegroup_ResponseCompound::getPkiModulegroupId() const {
    return m_pki_modulegroup_id;
}
void Modulegroup_ResponseCompound::setPkiModulegroupId(const qint32 &pki_modulegroup_id) {
    m_pki_modulegroup_id = pki_modulegroup_id;
    m_pki_modulegroup_id_isSet = true;
}

bool Modulegroup_ResponseCompound::is_pki_modulegroup_id_Set() const{
    return m_pki_modulegroup_id_isSet;
}

bool Modulegroup_ResponseCompound::is_pki_modulegroup_id_Valid() const{
    return m_pki_modulegroup_id_isValid;
}

QString Modulegroup_ResponseCompound::getSModulegroupNameX() const {
    return m_s_modulegroup_name_x;
}
void Modulegroup_ResponseCompound::setSModulegroupNameX(const QString &s_modulegroup_name_x) {
    m_s_modulegroup_name_x = s_modulegroup_name_x;
    m_s_modulegroup_name_x_isSet = true;
}

bool Modulegroup_ResponseCompound::is_s_modulegroup_name_x_Set() const{
    return m_s_modulegroup_name_x_isSet;
}

bool Modulegroup_ResponseCompound::is_s_modulegroup_name_x_Valid() const{
    return m_s_modulegroup_name_x_isValid;
}

QList<Module_ResponseCompound> Modulegroup_ResponseCompound::getAObjModule() const {
    return m_a_obj_module;
}
void Modulegroup_ResponseCompound::setAObjModule(const QList<Module_ResponseCompound> &a_obj_module) {
    m_a_obj_module = a_obj_module;
    m_a_obj_module_isSet = true;
}

bool Modulegroup_ResponseCompound::is_a_obj_module_Set() const{
    return m_a_obj_module_isSet;
}

bool Modulegroup_ResponseCompound::is_a_obj_module_Valid() const{
    return m_a_obj_module_isValid;
}

bool Modulegroup_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_modulegroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_modulegroup_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_module.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Modulegroup_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_modulegroup_id_isValid && m_s_modulegroup_name_x_isValid && true;
}

} // namespace Ezmaxapi

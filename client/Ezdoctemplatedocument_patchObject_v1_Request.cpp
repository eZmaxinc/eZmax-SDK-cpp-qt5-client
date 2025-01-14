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

#include "Ezdoctemplatedocument_patchObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezdoctemplatedocument_patchObject_v1_Request::Ezdoctemplatedocument_patchObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezdoctemplatedocument_patchObject_v1_Request::Ezdoctemplatedocument_patchObject_v1_Request() {
    this->initializeModel();
}

Ezdoctemplatedocument_patchObject_v1_Request::~Ezdoctemplatedocument_patchObject_v1_Request() {}

void Ezdoctemplatedocument_patchObject_v1_Request::initializeModel() {

    m_obj_ezdoctemplatedocument_isSet = false;
    m_obj_ezdoctemplatedocument_isValid = false;
}

void Ezdoctemplatedocument_patchObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezdoctemplatedocument_patchObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezdoctemplatedocument_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezdoctemplatedocument, json[QString("objEzdoctemplatedocument")]);
    m_obj_ezdoctemplatedocument_isSet = !json[QString("objEzdoctemplatedocument")].isNull() && m_obj_ezdoctemplatedocument_isValid;
}

QString Ezdoctemplatedocument_patchObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezdoctemplatedocument_patchObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezdoctemplatedocument.isSet()) {
        obj.insert(QString("objEzdoctemplatedocument"), ::Ezmaxapi::toJsonValue(m_obj_ezdoctemplatedocument));
    }
    return obj;
}

Ezdoctemplatedocument_RequestPatch Ezdoctemplatedocument_patchObject_v1_Request::getObjEzdoctemplatedocument() const {
    return m_obj_ezdoctemplatedocument;
}
void Ezdoctemplatedocument_patchObject_v1_Request::setObjEzdoctemplatedocument(const Ezdoctemplatedocument_RequestPatch &obj_ezdoctemplatedocument) {
    m_obj_ezdoctemplatedocument = obj_ezdoctemplatedocument;
    m_obj_ezdoctemplatedocument_isSet = true;
}

bool Ezdoctemplatedocument_patchObject_v1_Request::is_obj_ezdoctemplatedocument_Set() const{
    return m_obj_ezdoctemplatedocument_isSet;
}

bool Ezdoctemplatedocument_patchObject_v1_Request::is_obj_ezdoctemplatedocument_Valid() const{
    return m_obj_ezdoctemplatedocument_isValid;
}

bool Ezdoctemplatedocument_patchObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezdoctemplatedocument.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezdoctemplatedocument_patchObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezdoctemplatedocument_isValid && true;
}

} // namespace Ezmaxapi

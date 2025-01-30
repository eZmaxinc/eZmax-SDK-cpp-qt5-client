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

#include "Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::~Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload() {}

void Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_ezdoctemplatedocument_isSet = false;
    m_a_obj_ezdoctemplatedocument_isValid = false;
}

void Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezdoctemplatedocument_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezdoctemplatedocument, json[QString("a_objEzdoctemplatedocument")]);
    m_a_obj_ezdoctemplatedocument_isSet = !json[QString("a_objEzdoctemplatedocument")].isNull() && m_a_obj_ezdoctemplatedocument_isValid;
}

QString Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezdoctemplatedocument.size() > 0) {
        obj.insert(QString("a_objEzdoctemplatedocument"), ::Ezmaxapi::toJsonValue(m_a_obj_ezdoctemplatedocument));
    }
    return obj;
}

QList<Ezdoctemplatedocument_AutocompleteElement_Response> Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::getAObjEzdoctemplatedocument() const {
    return m_a_obj_ezdoctemplatedocument;
}
void Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::setAObjEzdoctemplatedocument(const QList<Ezdoctemplatedocument_AutocompleteElement_Response> &a_obj_ezdoctemplatedocument) {
    m_a_obj_ezdoctemplatedocument = a_obj_ezdoctemplatedocument;
    m_a_obj_ezdoctemplatedocument_isSet = true;
}

bool Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::is_a_obj_ezdoctemplatedocument_Set() const{
    return m_a_obj_ezdoctemplatedocument_isSet;
}

bool Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::is_a_obj_ezdoctemplatedocument_Valid() const{
    return m_a_obj_ezdoctemplatedocument_isValid;
}

bool Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezdoctemplatedocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezdoctemplatedocument_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezdoctemplatedocument_isValid && true;
}

} // namespace Ezmaxapi

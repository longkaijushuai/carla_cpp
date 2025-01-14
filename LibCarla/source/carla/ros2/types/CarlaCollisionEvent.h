// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file CarlaCollisionEvent.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_CARLA_MSGS_MSG_CARLACOLLISIONEVENT_H_
#define _FAST_DDS_GENERATED_CARLA_MSGS_MSG_CARLACOLLISIONEVENT_H_
// 引入相关头文件，可能包含了一些自定义的结构体、类等定义，用于后续成员变量等的使用
#include "Vector3.h"
#include "Header.h"
// 引入 fastrtps 库中用于处理固定大小字符串的工具头文件
#include <fastrtps/utils/fixed_size_string.hpp>
// 引入标准 C++ 库中的一些常用头文件，用于处理不同类型的数据
#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)// 在 Windows 平台下，如果定义了 EPROSIMA_USER_DLL_EXPORT，将函数或类声明为导出符号（用于动态链接库导出）
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32
// 引入 eprosima 命名空间下 fastcdr 相关的类声明（此处 Cdr 类完整定义应该在其他地方），可能用于后续的序列化、反序列化操作
namespace eprosima {
#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(CarlaCollisionEvent_SOURCE)// 在 Windows 平台下，根据 CarlaCollisionEvent_SOURCE 是否定义，决定是导出还是导入符号（用于动态链接库相关操作）
#define CarlaCollisionEvent_DllAPI __declspec( dllexport )
#else
#define CarlaCollisionEvent_DllAPI __declspec( dllimport )
#endif // CarlaCollisionEvent_SOURCE
#else
#define CarlaCollisionEvent_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define CarlaCollisionEvent_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace carla_msgs {
    namespace msg {
        /*!
         *  @brief 此类代表了用户在 IDL 文件中定义的 CarlaCollisionEvent 结构。
         * @ingroup CARLACOLLISIONEVENT
         */
        class CarlaCollisionEvent
        {
        public:

            /*!
             * @brief 默认构造函数，用于创建对象时进行默认的初始化操作。
             */
            eProsima_user_DllExport CarlaCollisionEvent();

            /*!
             * @brief 默认析构函数，用于在对象生命周期结束时释放相关资源。
             */
            eProsima_user_DllExport ~CarlaCollisionEvent();

            /*!
             * @brief 拷贝构造函数，根据传入的另一个 CarlaCollisionEvent 对象进行拷贝创建新对象，进行深拷贝或浅拷贝（取决于具体实现）。
             * @param x 要被拷贝的 carla_msgs::msg::CarlaCollisionEvent 对象的引用。
             */
            eProsima_user_DllExport CarlaCollisionEvent(
                    const CarlaCollisionEvent& x);

            /*!
             * @brief 移动构造函数，通过移动语义，高效地将传入的 CarlaCollisionEvent 对象资源所有权转移到新创建的对象中，避免不必要的拷贝开销。
             * @brief 移动构造函数，通过移动语义，高效地将传入的 CarlaCollisionEvent 对象资源所有权转移到新创建的对象中，避免不必要的拷贝开销。
             */
            eProsima_user_DllExport CarlaCollisionEvent(
                    CarlaCollisionEvent&& x) noexcept;

            /*!
             * @brief 移动构造函数，通过移动语义，高效地将传入的 CarlaCollisionEvent 对象资源所有权转移到新创建的对象中，避免不必要的拷贝开销。
             * @param x 要被拷贝的 carla_msgs::msg::CarlaCollisionEvent 对象的引用。
             */
            eProsima_user_DllExport CarlaCollisionEvent& operator =(
                    const CarlaCollisionEvent& x);

            /*!
             * @brief 移动赋值运算符重载，通过移动语义将一个 CarlaCollisionEvent 对象的资源所有权转移给当前对象，实现高效赋值操作。
             *@param x 要被移动的 carla_msgs::msg::CarlaCollisionEvent 对象的引用。
             */
            eProsima_user_DllExport CarlaCollisionEvent& operator =(
                    CarlaCollisionEvent&& x) noexcept;

            /*!
             * @brief 移动赋值运算符重载，通过移动语义将一个 CarlaCollisionEvent 对象的资源所有权转移给当前对象，实现高效赋值操作。
             * @param x 要与之比较的 carla_msgs::msg::CarlaCollisionEvent 对象。
             */
            eProsima_user_DllExport bool operator ==(
                    const CarlaCollisionEvent& x) const;

            /*!
             * .@brief 比较运算符，用于比较当前对象与传入的 CarlaCollisionEvent 对象是否不相等。
             * @param x 要与之比较的 carla_msgs::msg::CarlaCollisionEvent 对象。
             */
            eProsima_user_DllExport bool operator !=(
                    const CarlaCollisionEvent& x) const;

            /*!
             * @brief 此函数用于拷贝成员 header 的值，传入新的 std_msgs::msg::Header 对象进行赋值。
             * @param _header 要拷贝到成员 header 的新值。
             */
            eProsima_user_DllExport void header(
                    const std_msgs::msg::Header& _header);

            /*!
             * @brief 此函数用于移动成员 header 的值，传入新的 std_msgs::msg::Header 对象进行资源所有权转移赋值。
             * @return 成员 header 的常量引用。
             */
            eProsima_user_DllExport void header(
                    std_msgs::msg::Header&& _header);

            /*!
             *@brief 此函数返回成员 header 的常量引用，外部可通过该引用获取 header 的值，但不能修改它。
             *@return 成员 header 的常量引用。
             */
            eProsima_user_DllExport const std_msgs::msg::Header& header() const;

            /*!
             * @brief 此函数返回成员 header 的引用，外部可通过该引用获取和修改 header 的值。
             *  @return 成员 header 的引用。
             */
            eProsima_user_DllExport std_msgs::msg::Header& header();
            /*!
             *@brief 此函数设置成员 other_actor_id 的值，传入新的整数值进行赋值。
             *@param _other_actor_id 成员 other_actor_id 的新值。
             */
            eProsima_user_DllExport void other_actor_id(
                    uint32_t _other_actor_id);

            /*!
             * @brief 此函数返回成员 other_actor_id 的值。
             * @return 成员 other_actor_id 的引用。
             */
            eProsima_user_DllExport uint32_t other_actor_id() const;

            /*!
             * @brief 此函数返回成员 other_actor_id 的引用，外部可通过该引用获取和修改其值。
             *  @return 成员 other_actor_id 的引用。
             */
            eProsima_user_DllExport uint32_t& other_actor_id();

            /*!
             *@brief 此函数用于拷贝成员 normal_impulse 的值，传入新的 geometry_msgs::msg::Vector3 对象进行赋值。
             * @param _normal_impulse 要拷贝到成员 normal_impulse 的新值。
             */
            eProsima_user_DllExport void normal_impulse(
                    const geometry_msgs::msg::Vector3& _normal_impulse);

            /*!
             * @brief 此函数用于移动成员 normal_impulse 的值，传入新的 geometry_msgs::msg::Vector3 对象进行资源所有权转移赋值
             * @return 成员 normal_impulse 的常量引用。
             */
            eProsima_user_DllExport void normal_impulse(
                    geometry_msgs::msg::Vector3&& _normal_impulse);

            /*!
             *@brief 此函数返回成员 normal_impulse 的常量引用，外部可通过该引用获取其值，但不能修改它。
             *@return 成员 normal_impulse 的常量引用。
             */
            eProsima_user_DllExport const geometry_msgs::msg::Vector3& normal_impulse() const;

            /*!
             * @brief 此函数返回成员 normal_impulse 的引用，外部可通过该引用获取和修改其值。
             * @return 成员 normal_impulse 的引用。
             */
            eProsima_user_DllExport geometry_msgs::msg::Vector3& normal_impulse();

            /*!
            * @brief 此函数返回一个对象根据缓冲区对齐方式的最大序列化大小。
            * depending on the buffer alignment.
            * @param current_alignment 缓冲区对齐方式，默认为 0。
            * @return 最大序列化大小。
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief 此函数返回根据缓冲区对齐方式给定数据的序列化大小。
             * @param data 要计算序列化大小的数据对象。
             * @param current_alignment 缓冲区对齐方式，默认为 0。
             * @return 序列化大小。
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const carla_msgs::msg::CarlaCollisionEvent& data,
                    size_t current_alignment = 0);

            /*!
             *  @brief 此函数使用 CDR 序列化方式对对象进行序列化操作，将对象转换为适合传输或存储的格式，传入 Cdr 序列化对象进行具体操作。
             * @param cdr CDR 序列化对象。
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief 此函数使用 CDR 序列化方式对对象进行反序列化操作，将序列化的数据还原为对象，传入 Cdr 序列化对象进行具体操作。
             *  @param cdr CDR 序列化对象。
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);

            /*!
             * @brief 此函数返回一个对象的键（Key）根据缓冲区对齐方式的最大序列化大小。
             * depending on the buffer alignment.
             * @param current_alignment 缓冲区对齐方式，默认为 0。
             * @return 最大序列化大小。
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief 此函数用于判断该类型是否已经定义了键（Key）。
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief 此函数使用 CDR 序列化方式对对象的键（Key）成员进行序列化操作，传入 Cdr 序列化对象进行具体操作。
             * @param cdr CDR 序列化对象。
             * @param cdr CDR 序列化对象。
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:// 存储消息头相关信息的成员变量，类型为 std_msgs::msg::Header
            std_msgs::msg::Header m_header;// 存储其他参与者 ID 的成员变量，类型为 uint32_t
            uint32_t m_other_actor_id;// 存储碰撞法线冲量相关信息的成员变量，类型为 geometry_msgs::msg::Vector3
            geometry_msgs::msg::Vector3 m_normal_impulse;
        };
    } // namespace msg
} // namespace carla_msgs

#endif // _FAST_DDS_GENERATED_CARLA_MSGS_MSG_CARLACOLLISIONEVENT_H_

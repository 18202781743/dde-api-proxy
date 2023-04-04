// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#include "defenderprocinfolist.h"

void registerDefenderProcInfoListMetaType()
{
    qRegisterMetaType<DefenderProcInfoList>("DefenderProcInfoList");
    qDBusRegisterMetaType<DefenderProcInfoList>();
}

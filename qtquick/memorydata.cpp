/*
 * Copyright 2013 KanMemo Project.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "memorydata.h"

MemoryData::MemoryData(QObject *parent) :
    QObject(parent)
{
}

const QString &MemoryData::memoryPath() const
{
    return m_memoryPath;
}

void MemoryData::setMemoryPath(const QString &path)
{
    if(m_memoryPath.compare(path) == 0)
        return;

    m_memoryPath = path;
    emit memoryPathChanged(m_memoryPath);
}

const QString &MemoryData::imagePath() const
{
    return m_imagePath;
}

void MemoryData::setImagePath(const QString &path)
{
    if(m_imagePath.compare(path) == 0)
        return;

    m_imagePath = path;
    emit imagePathChanged(m_imagePath);
}

#pragma once

const auto gameTicksPerFrame = (int*)0x7D4B8C;
const auto lastGameTicksPerFrame = (int*)0x8B94D4;
const auto serverTicks = (int*)0x910948;
const auto dword_8C28DC = (int*)0x8C28DC;
const auto dword_7827E0 = (int*)0x7827E0;

const auto sprintf = (int(*)(char*, const char*, ...))0x59A680;

int PAHook(int* params);
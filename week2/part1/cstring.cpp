/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 24
***********************************************************************/
//#include <iostream>
#include "cstring.h"

namespace sdds
{
void strCpy(char* des, const char* src) {
    int a = 0;
    while(src[a] != '\0')
    {
        a++;
    }
    for(int i = 0; i<a; i++)
    {
        des[i] = src[i];
    }
}

void strnCpy(char* des, const char* src, int len) {
    int i = 0;
    while(i<len && src[i] != '\0')
    {
        des[i] = src[i];
        i++;
    }
    if(i<len)
    {
        des[i] = '\0'; 
    }
}

int strCmp(const char* s1, const char* s2) {
    //i = 0;
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) 
    {
        s1++;
        s2++;
        return 0;
    }
    return int(*s1) - int(*s2);
    //return s1[i] - s2[i];
}

int strnCmp(const char* s1, const char* s2, int len) {
    int i = 0;
    while (*s1 != '\0' && *s1 == *s2 && i < len) {
        s1++;
        s2++;
        i++;
    }
    if (i == len)
        return 0;
    else
        return *s1 - *s2;
}

int strLen(const char* s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

/*const char* strStr(const char* str1, const char* str2) {
    while (*str1 != '\0') {
        const char* s1 = str1;
        const char* s2 = str2;
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
            return str1;
        str1++;
    }
    return nullptr;
}*/
const char* strStr(const char* str1, const char* str2) {

   const char* faddress = nullptr;

   int i, len2 = strLen(str2), len1 = strLen(str1);

   for (i = 0; i < len1 - len2 && strnCmp(&str1[i], str2, len2); i++);

   if (i < len1 - len2) faddress = &str1[i];

   return faddress;

  }

void strCat(char* des, const char* src) 
{
    /*while(*des != '\0')
    {
        des++;
    }
    while(*src != '\0')
    {
        *des = *src;
        *src++;
        *des++;
    }*/
    int i = 0, j=0;

    while(des[i] != '\0')
    {
        i++;
    }

    if(src[j] != '\0')
    {
        des[i] = src[j];
        i++;
        j++;
    }
    else if(src[j] == '\0')
    {
        des[i] = '\0';
    }

}

}
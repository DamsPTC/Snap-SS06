/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f9dbf0; end: 108f9dbf7; -[NBPhoneMetaData generalDesc] */

undefined8 FUN_108f9dbf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f9dbf8; end: 108f9dc27; -[NBPhoneMetaData setGeneralDesc:] */

void FUN_108f9dbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dc28; end: 108f9dc2f; -[NBPhoneMetaData fixedLine] */

undefined8 FUN_108f9dc28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f9dc30; end: 108f9dc5f; -[NBPhoneMetaData setFixedLine:] */

void FUN_108f9dc30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dc60; end: 108f9dc67; -[NBPhoneMetaData mobile] */

undefined8 FUN_108f9dc60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f9dc68; end: 108f9dc97; -[NBPhoneMetaData setMobile:] */

void FUN_108f9dc68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dc98; end: 108f9dc9f; -[NBPhoneMetaData tollFree] */

undefined8 FUN_108f9dc98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f9dca0; end: 108f9dccf; -[NBPhoneMetaData setTollFree:] */

void FUN_108f9dca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dcd0; end: 108f9dcd7; -[NBPhoneMetaData premiumRate] */

undefined8 FUN_108f9dcd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f9dcd8; end: 108f9dd07; -[NBPhoneMetaData setPremiumRate:] */

void FUN_108f9dcd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dd08; end: 108f9dd0f; -[NBPhoneMetaData sharedCost] */

undefined8 FUN_108f9dd08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f9dd10; end: 108f9dd3f; -[NBPhoneMetaData setSharedCost:] */

void FUN_108f9dd10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dd40; end: 108f9dd47; -[NBPhoneMetaData personalNumber] */

undefined8 FUN_108f9dd40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f9dd48; end: 108f9dd77; -[NBPhoneMetaData setPersonalNumber:] */

void FUN_108f9dd48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dd78; end: 108f9dd7f; -[NBPhoneMetaData voip] */

undefined8 FUN_108f9dd78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f9dd80; end: 108f9ddaf; -[NBPhoneMetaData setVoip:] */

void FUN_108f9dd80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9ddb0; end: 108f9ddb7; -[NBPhoneMetaData pager] */

undefined8 FUN_108f9ddb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f9ddb8; end: 108f9dde7; -[NBPhoneMetaData setPager:] */

void FUN_108f9ddb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dde8; end: 108f9ddef; -[NBPhoneMetaData uan] */

undefined8 FUN_108f9dde8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f9ddf0; end: 108f9de1f; -[NBPhoneMetaData setUan:] */

void FUN_108f9ddf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9de20; end: 108f9de27; -[NBPhoneMetaData emergency] */

undefined8 FUN_108f9de20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f9de28; end: 108f9de57; -[NBPhoneMetaData setEmergency:] */

void FUN_108f9de28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9de58; end: 108f9de5f; -[NBPhoneMetaData voicemail] */

undefined8 FUN_108f9de58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108f9de60; end: 108f9de8f; -[NBPhoneMetaData setVoicemail:] */

void FUN_108f9de60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9de90; end: 108f9de97; -[NBPhoneMetaData noInternationalDialling] */

undefined8 FUN_108f9de90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108f9de98; end: 108f9dec7; -[NBPhoneMetaData setNoInternationalDialling:] */

void FUN_108f9de98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dec8; end: 108f9decf; -[NBPhoneMetaData codeID] */

undefined8 FUN_108f9dec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108f9ded0; end: 108f9deff; -[NBPhoneMetaData setCodeID:] */

void FUN_108f9ded0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9df00; end: 108f9df07; -[NBPhoneMetaData countryCode] */

undefined8 FUN_108f9df00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108f9df08; end: 108f9df37; -[NBPhoneMetaData setCountryCode:] */

void FUN_108f9df08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9df38; end: 108f9df3f; -[NBPhoneMetaData internationalPrefix] */

undefined8 FUN_108f9df38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108f9df40; end: 108f9df6f; -[NBPhoneMetaData setInternationalPrefix:] */

void FUN_108f9df40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9df70; end: 108f9df77; -[NBPhoneMetaData preferredInternationalPrefix] */

undefined8 FUN_108f9df70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108f9df78; end: 108f9dfa7; -[NBPhoneMetaData setPreferredInternationalPrefix:] */

void FUN_108f9df78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dfa8; end: 108f9dfaf; -[NBPhoneMetaData nationalPrefix] */

undefined8 FUN_108f9dfa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108f9dfb0; end: 108f9dfdf; -[NBPhoneMetaData setNationalPrefix:] */

void FUN_108f9dfb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9dfe0; end: 108f9dfe7; -[NBPhoneMetaData preferredExtnPrefix] */

undefined8 FUN_108f9dfe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108f9dfe8; end: 108f9e017; -[NBPhoneMetaData setPreferredExtnPrefix:] */

void FUN_108f9dfe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9e018; end: 108f9e01f; -[NBPhoneMetaData nationalPrefixForParsing] */

undefined8 FUN_108f9e018(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108f9e020; end: 108f9e04f; -[NBPhoneMetaData setNationalPrefixForParsing:] */

void FUN_108f9e020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9e050; end: 108f9e057; -[NBPhoneMetaData nationalPrefixTransformRule] */

undefined8 FUN_108f9e050(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108f9e058; end: 108f9e087; -[NBPhoneMetaData setNationalPrefixTransformRule:] */

void FUN_108f9e058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9e088; end: 108f9e08f; -[NBPhoneMetaData sameMobileAndFixedLinePattern] */

undefined1 FUN_108f9e088(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f9e090; end: 108f9e097; -[NBPhoneMetaData setSameMobileAndFixedLinePattern:] */

void FUN_108f9e090(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108f9e098; end: 108f9e09f; -[NBPhoneMetaData numberFormats] */

undefined8 FUN_108f9e098(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108f9e0a0; end: 108f9e0cf; -[NBPhoneMetaData setNumberFormats:] */

void FUN_108f9e0a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9e0d0; end: 108f9e0d7; -[NBPhoneMetaData intlNumberFormats] */

undefined8 FUN_108f9e0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108f9e0d8; end: 108f9e107; -[NBPhoneMetaData setIntlNumberFormats:] */

void FUN_108f9e0d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9e108; end: 108f9e10f; -[NBPhoneMetaData mainCountryForCode] */

undefined1 FUN_108f9e108(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f9e110; end: 108f9e117; -[NBPhoneMetaData setMainCountryForCode:] */

void FUN_108f9e110(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108f9e118; end: 108f9e11f; -[NBPhoneMetaData leadingDigits] */

undefined8 FUN_108f9e118(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108f9e120; end: 108f9e14f; -[NBPhoneMetaData setLeadingDigits:] */

void FUN_108f9e120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9e150; end: 108f9e157; -[NBPhoneMetaData leadingZeroPossible] */

undefined1 FUN_108f9e150(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108f9e158; end: 108f9e15f; -[NBPhoneMetaData setLeadingZeroPossible:] */

void FUN_108f9e158(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108f9e160; end: 108f9e297; -[NBPhoneMetaData .cxx_destruct] */

void FUN_108f9e160(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f9e298; end: 108f9e30f; -[NBPhoneNumber init] */

undefined1 * FUN_108f9e298(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1cb1a0(puVar1);
    func_0x00010c184960(puVar1);
    func_0x00010c1cfca0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f9e310; end: 108f9e317; -[NBPhoneNumber clearCountryCodeSource] */

void FUN_108f9e310(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c184a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCountryCodeSource__11263ecc0,0);
  return;
}



/* Entry: 108f9e318; end: 108f9e37b; -[NBPhoneNumber getCountryCodeSourceOrDefault] */

long FUN_108f9e318(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf53540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    func_0x00010bf53540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c067fc0();
    _objc_release(param_1);
  }
  return lVar1;
}



/* Entry: 108f9e37c; end: 108f9e45f; -[NBPhoneNumber hash] */

ulong FUN_108f9e37c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d55e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  uVar3 = uVar3 * 0x40 + (uVar3 >> 2) + uVar2 + 0x9e3779b9 ^ uVar3;
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0def00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  uVar3 = uVar3 * 0x40 + (uVar3 >> 2) + uVar2 + 0x9e3779b9 ^ uVar3;
  _objc_release(uVar1);
  func_0x00010bf9dc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
}



/* Entry: 108f9e460; end: 108f9e68f; -[NBPhoneNumber isEqual:] */

ulong FUN_108f9e460(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dcc98;
  _objc_opt_class(PTR_PTR_1126dcc98);
  uVar10 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar10 & 1) == 0) {
    uVar10 = 0;
    goto LAB_108f9e65c;
  }
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf53280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c071f40();
  if ((int)uVar10 == 0) {
    uVar10 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010c0d55e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0d55e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010c071f40();
    if ((int)uVar10 == 0) {
LAB_108f9e540:
      uVar10 = 0;
    }
    else {
      uVar10 = param_1;
      func_0x00010c084000();
      uVar6 = param_3;
      func_0x00010c084000();
      if ((int)uVar10 != (int)uVar6) goto LAB_108f9e540;
      uVar6 = param_1;
      func_0x00010c0def00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0def00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c071f40();
      if ((int)uVar10 == 0) {
        uVar10 = 0;
      }
      else {
        uVar8 = param_1;
        func_0x00010bf9dc80();
        _objc_retainAutoreleasedReturnValue();
        if (uVar8 == 0) {
          uVar8 = param_3;
          func_0x00010bf9dc80();
          _objc_retainAutoreleasedReturnValue();
          if (uVar8 != 0) goto LAB_108f9e5cc;
          uVar10 = 1;
        }
        else {
LAB_108f9e5cc:
          func_0x00010bf9dc80(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_3;
          func_0x00010bf9dc80(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_1;
          func_0x00010c0720c0(param_1);
          _objc_release(uVar9);
          _objc_release(param_1);
        }
        _objc_release(uVar8);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
LAB_108f9e65c:
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 108f9e690; end: 108f9e867; -[NBPhoneNumber copyWithZone:] */

undefined * FUN_108f9e690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dcc98;
  func_0x00010bf00e40(PTR_PTR_1126dcc98);
  func_0x00010bfee200();
  uVar2 = param_1;
  func_0x00010bf53280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c184960(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0d55e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1cb1a0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9dc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1992c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c084000(param_1);
  func_0x00010c1b5ce0(puVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c0def00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1cfca0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1201e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1e7880(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf53540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c184a80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c106a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf51e00();
  func_0x00010c1dff20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 108f9e868; end: 108f9ea53; -[NBPhoneNumber initWithCoder:] */

undefined1 * FUN_108f9e868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff990;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184960(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb1a0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1992c0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b5ce0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfca0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7880(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184a80(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dff20(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f9ea54; end: 108f9ec1b; -[NBPhoneNumber encodeWithCoder:] */

void FUN_108f9ea54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf53280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e3e538);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d55e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f13c78);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf9dc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f13c98);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_1;
  func_0x00010c084000(param_1);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110f13cb8);
  _objc_release(puVar2);
  uVar1 = param_1;
  func_0x00010c0def00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f13cd8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1201e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f13cf8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf53540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f13d18);
  _objc_release(uVar1);
  func_0x00010c106a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110f13d38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f9ec1c; end: 108f9ed77; -[NBPhoneNumber description] */

void FUN_108f9ec1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d55e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf9dc80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084000();
  uVar4 = param_1;
  func_0x00010c0def00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c1201e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf53540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110f13d58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108f9ed78; end: 108f9ed7f; -[NBPhoneNumber countryCode] */

undefined8 FUN_108f9ed78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f9ed80; end: 108f9edaf; -[NBPhoneNumber setCountryCode:] */

void FUN_108f9ed80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9edb0; end: 108f9edb7; -[NBPhoneNumber nationalNumber] */

undefined8 FUN_108f9edb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f9edb8; end: 108f9ede7; -[NBPhoneNumber setNationalNumber:] */

void FUN_108f9edb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9ede8; end: 108f9edef; -[NBPhoneNumber extension] */

undefined8 FUN_108f9ede8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f9edf0; end: 108f9ee1f; -[NBPhoneNumber setExtension:] */

void FUN_108f9edf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9ee20; end: 108f9ee27; -[NBPhoneNumber italianLeadingZero] */

undefined1 FUN_108f9ee20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f9ee28; end: 108f9ee2f; -[NBPhoneNumber setItalianLeadingZero:] */

void FUN_108f9ee28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108f9ee30; end: 108f9ee37; -[NBPhoneNumber numberOfLeadingZeros] */

undefined8 FUN_108f9ee30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f9ee38; end: 108f9ee67; -[NBPhoneNumber setNumberOfLeadingZeros:] */

void FUN_108f9ee38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9ee68; end: 108f9ee6f; -[NBPhoneNumber rawInput] */

undefined8 FUN_108f9ee68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f9ee70; end: 108f9ee9f; -[NBPhoneNumber setRawInput:] */

void FUN_108f9ee70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9eea0; end: 108f9eea7; -[NBPhoneNumber countryCodeSource] */

undefined8 FUN_108f9eea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f9eea8; end: 108f9eed7; -[NBPhoneNumber setCountryCodeSource:] */

void FUN_108f9eea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9eed8; end: 108f9eedf; -[NBPhoneNumber preferredDomesticCarrierCode] */

undefined8 FUN_108f9eed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f9eee0; end: 108f9ef0f; -[NBPhoneNumber setPreferredDomesticCarrierCode:] */

void FUN_108f9eee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9ef10; end: 108f9ef7b; -[NBPhoneNumber .cxx_destruct] */

void FUN_108f9ef10(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f9ef7c; end: 108f9f0db; -[NBPhoneNumberDesc initWithEntry:] */

undefined1 * FUN_108f9ef7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff998;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if ((param_3 != 0) && (puVar1 != (undefined8 *)0x0)) {
    lVar2 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010c0d6dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(long *)((long)puVar1 + 0x18) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010c0d6dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(long *)((long)puVar1 + 0x20) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010c0d6e40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(long *)((long)puVar1 + 0x28) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010c0d6de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(long *)((long)puVar1 + 0x30) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_3;
    func_0x00010c0d6de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(long *)((long)puVar1 + 0x38) = lVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f9f0dc; end: 108f9f1cb; -[NBPhoneNumberDesc description] */

void FUN_108f9f0dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c0d5600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c104540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c104500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c104520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9a720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110f13df8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f9f1cc; end: 108f9f1d3; -[NBPhoneNumberDesc nationalNumberPattern] */

undefined8 FUN_108f9f1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f9f1d4; end: 108f9f1db; -[NBPhoneNumberDesc possibleNumberPattern] */

undefined8 FUN_108f9f1d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f9f1dc; end: 108f9f1e3; -[NBPhoneNumberDesc possibleLength] */

undefined8 FUN_108f9f1dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f9f1e4; end: 108f9f1eb; -[NBPhoneNumberDesc possibleLengthLocalOnly] */

undefined8 FUN_108f9f1e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f9f1ec; end: 108f9f1f3; -[NBPhoneNumberDesc exampleNumber] */

undefined8 FUN_108f9f1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f9f1f4; end: 108f9f1fb; -[NBPhoneNumberDesc nationalNumberMatcherData] */

undefined8 FUN_108f9f1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f9f1fc; end: 108f9f203; -[NBPhoneNumberDesc possibleNumberMatcherData] */

undefined8 FUN_108f9f1fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f9f204; end: 108f9f26f; -[NBPhoneNumberDesc .cxx_destruct] */

void FUN_108f9f204(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f9f270; end: 108f9f2f7; +[NBPhoneNumberUtil sharedInstance] */

void FUN_108f9f270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108f9f2f8;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137304f0 != -1) {
    func_0x000107c27d9c(0x1137304f0,&puStack_48);
  }
  uVar1 = uRam00000001137304e8;
  _objc_retain(uRam00000001137304e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f9f2f8; end: 108f9f31f;  */

void FUN_108f9f2f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137304e8;
  uRam00000001137304e8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f9f320; end: 108f9f3b7; -[NBPhoneNumberUtil errorWithObject:withDomain:] */

void FUN_108f9f320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  _objc_retain(param_4);
  func_0x00010bf72040(puVar1,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,param_4,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f9f3b8; end: 108f9f52b; -[NBPhoneNumberUtil entireRegularExpressionWithPattern:options:error:] */

/* WARNING: Removing unreachable block (ram,0x000108f9f4ec) */

void FUN_108f9f3b8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar4);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010c11f420(param_3,param_2,&PTR____CFConstantStringClassReference_110f13ff8);
    puVar3 = param_3;
    if (puVar2 == (undefined *)0x7fffffffffffffff) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f13bb8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    lVar1 = param_1;
    func_0x00010c127e80(param_1,param_2,puVar3,0,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,lVar1,param_3);
    _objc_release(puVar3);
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f9f52c; end: 108f9f63b; -[NBPhoneNumberUtil regularExpressionWithPattern:options:error:] */

/* WARNING: Removing unreachable block (ram,0x000108f9f604) */

void FUN_108f9f52c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x18));
  puVar1 = *(undefined **)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    puVar1 = *(undefined **)(param_1 + 0x20);
  }
  func_0x00010c0dff20(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,param_3,param_4,
                        param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,param_3);
  }
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f9f63c; end: 108f9f6b7; -[NBPhoneNumberUtil componentsSeparatedByRegex:regex:] */

void FUN_108f9f63c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c131120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  func_0x00010c12d360(uVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f9f6b8; end: 108f9f7db; -[NBPhoneNumberUtil stringPositionByRegex:regex:] */

long FUN_108f9f6b8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    lVar3 = 0xffffffff;
    if ((param_4 == 0) || (lVar1 == 0)) goto LAB_108f9f7b0;
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      uStack_48 = 0;
      func_0x00010c127e80(param_1,param_2,param_4,0,&uStack_48);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c08fa60(param_3);
      lVar2 = param_1;
      func_0x00010c0c1b40(param_1,param_2,param_3,0,0,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        lVar3 = 0xffffffff;
      }
      else {
        lVar1 = lVar2;
        func_0x00010c0dfd20(lVar2,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c11f2a0();
        _objc_release(lVar1);
      }
      _objc_release(lVar2);
      _objc_release(param_1);
      goto LAB_108f9f7b0;
    }
  }
  lVar3 = 0xffffffff;
LAB_108f9f7b0:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f9f7dc; end: 108f9f7f7; -[NBPhoneNumberUtil indexOfStringByString:target:] */

void FUN_108f9f7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c11f420(param_3,param_2,param_4);
  return;
}



/* Entry: 108f9f7f8; end: 108f9f927; -[NBPhoneNumberUtil replaceFirstStringByRegex:regex:withTemplate:] */

void FUN_108f9f7f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c08fa60(param_3);
  lVar2 = param_1;
  func_0x00010c11f400();
  lVar3 = lVar1;
  if (lVar2 != 0x7fffffffffffffff) {
    lVar2 = param_3;
    func_0x00010c0d3c80(param_3);
    lVar3 = param_1;
    func_0x00010c25cfa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



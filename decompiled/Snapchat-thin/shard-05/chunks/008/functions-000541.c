/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104190ad4; end: 104190ae3;  */

undefined1  [16] FUN_104190ad4(void)

{
  return ZEXT816(0x11074e8c0);
}



/* Entry: 104190ae4; end: 104190b1f; -[SCAdAttachmentCallbacks webViewCallbacks] */

void FUN_104190ae4(undefined8 param_1,ulong param_2)

{
  FUN_1041c51a8();
  if ((param_2 & 0xff) == 0) {
    FUN_104190ce0();
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104190b20; end: 104190b5f; -[SCAdAttachmentCallbacks appInstallCallbacks] */

void FUN_104190b20(undefined8 param_1,uint param_2)

{
  FUN_1041c51a8();
  if ((param_2 & 0xff) == 1) {
    FUN_104190ce0();
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104190b60; end: 104190b9f; -[SCAdAttachmentCallbacks deepLinkCallbacks] */

void FUN_104190b60(undefined8 param_1,uint param_2)

{
  FUN_1041c51a8();
  if ((param_2 & 0xff) == 2) {
    FUN_104190ce0();
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104190ba0; end: 104190bdf; -[SCAdAttachmentCallbacks adToCallCallbacks] */

void FUN_104190ba0(undefined8 param_1,uint param_2)

{
  FUN_1041c51a8();
  if ((param_2 & 0xff) == 3) {
    FUN_104190ce0();
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104190be0; end: 104190c1f; -[SCAdAttachmentCallbacks surveyCallbacks] */

void FUN_104190be0(undefined8 param_1,uint param_2)

{
  FUN_1041c51a8();
  if ((param_2 & 0xff) == 4) {
    FUN_104190ce0();
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104190c20; end: 104190c5f; -[SCAdAttachmentCallbacks adToMessageCallbacks] */

void FUN_104190c20(undefined8 param_1,uint param_2)

{
  FUN_1041c51a8();
  if ((param_2 & 0xff) == 5) {
    FUN_104190ce0();
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104190c60; end: 104190c9f; -[SCAdAttachmentCallbacks leadGenCallbacks] */

void FUN_104190c60(undefined8 param_1,uint param_2)

{
  FUN_1041c51a8();
  if ((param_2 & 0xff) == 6) {
    FUN_104190ce0();
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104190ca0; end: 104190cdf; -[SCAdAttachmentCallbacks instantPageCallbacks] */

void FUN_104190ca0(undefined8 param_1,uint param_2)

{
  FUN_1041c51a8();
  if ((param_2 & 0xff) == 7) {
    FUN_104190ce0();
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104190ce0; end: 104190cf3;  */

void FUN_104190ce0(undefined8 param_1,byte param_2)

{
  if (param_2 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 104190cf4; end: 104190e5b;  */

void FUN_104190cf4(undefined8 *param_1)

{
  if (*(byte *)(param_1 + 1) < 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(*param_1);
    return;
  }
  return;
}



/* Entry: 104190e5c; end: 104190f97;  */

void FUN_104190e5c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[3];
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[3];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[5];
  }
  else {
    uVar2 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[5];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[6]);
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  lVar1 = unaff_x20[9];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[10]);
  if (*(char *)(unaff_x20 + 0xc) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[0xb];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0xd]);
  return;
}



/* Entry: 104190f98; end: 104190fd3;  */

void FUN_104190f98(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104190e5c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104190fd4; end: 104190fd7;  */

void FUN_104190fd4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[3];
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[3];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[5];
  }
  else {
    uVar2 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[5];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[6]);
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  lVar1 = unaff_x20[9];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar1);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[10]);
  if (*(char *)(unaff_x20 + 0xc) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = unaff_x20[0xb];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0xd]);
  return;
}



/* Entry: 104190fd8; end: 10419100f;  */

void FUN_104190fd8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104190e5c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104191010; end: 104191073;  */

uint FUN_104191010(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_104191074(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 104191074; end: 104191267;  */

bool FUN_104191074(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = param_1[2];
    if (((uVar3 != param_2[2]) || (uVar2 != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,param_2[2],uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return false;
    }
  }
  else {
    if (uVar1 == 0) {
      return false;
    }
    uVar3 = param_1[4];
    if (((uVar3 != param_2[4]) || (uVar2 != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar2,param_2[4],uVar1,0), (uVar3 & 1) == 0)) {
      return false;
    }
  }
  if ((int)param_1[6] != (int)param_2[6]) {
    return false;
  }
  if ((int)param_1[7] == (int)param_2[7]) {
    uVar2 = param_1[9];
    uVar1 = param_2[9];
    if (uVar2 == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar3 = param_1[8];
      if (((uVar3 != param_2[8]) || (uVar2 != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar2,param_2[8],uVar1,0), (uVar3 & 1) == 0)) {
        return false;
      }
    }
    if (param_1[10] != param_2[10]) {
      return false;
    }
    if ((char)param_1[0xc] == '\x01') {
      if ((char)param_2[0xc] != '\x01') {
        return false;
      }
    }
    else {
      if ((char)param_2[0xc] == '\x01') {
        return false;
      }
      if (param_1[0xb] != param_2[0xb]) {
        return false;
      }
    }
    return (int)param_1[0xd] == (int)param_2[0xd];
  }
  return false;
}



/* Entry: 104191268; end: 10419126b;  */

void FUN_104191268(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdf580;
  _swift_getWitnessTable(&UNK_10dcdf580,&UNK_11074ea20);
  puRam0000000113067728 = puVar1;
  return;
}



/* Entry: 10419126c; end: 1041912ab;  */

void FUN_10419126c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdf580;
  _swift_getWitnessTable(&UNK_10dcdf580,&UNK_11074ea20);
  puRam0000000113067728 = puVar1;
  return;
}



/* Entry: 1041912ac; end: 10419130f;  */

long FUN_1041912ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104191310; end: 10419146f;  */

undefined8 * FUN_104191310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 104191470; end: 1041914f3;  */

undefined8 * FUN_104191470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  return param_1;
}



/* Entry: 1041914f4; end: 1041915cf;  */

int FUN_1041914f4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1041915d0; end: 104191613;  */

void FUN_1041915d0(double param_1,undefined8 param_2,uint param_3)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyys5UInt8VF(param_3 & 1);
  __ss6HasherV8_combineyys5UInt8VF(param_3 >> 8 & 1);
  return;
}



/* Entry: 104191614; end: 104191687;  */

void FUN_104191614(double param_1,uint param_2)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyys5UInt8VF(param_2 & 1);
  __ss6HasherV8_combineyys5UInt8VF(param_2 >> 8 & 1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104191688; end: 1041916c7;  */

void FUN_104191688(void)

{
  byte bVar1;
  uint uVar2;
  double *unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_78 [72];
  
  dVar4 = *unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  uVar2 = 0x100;
  if (*(char *)((long)unaff_x20 + 9) == '\0') {
    uVar2 = 0;
  }
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  __ss6HasherV8_combineyys5UInt8VF(uVar2 >> 8);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041916c8; end: 104191727;  */

void FUN_1041916c8(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar4 = *unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  cVar2 = *(char *)((long)unaff_x20 + 9);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  uVar3 = 0x100;
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  FUN_1041915d0(uVar4,auStack_78,uVar3 | bVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104191728; end: 10419172b;  */

void FUN_104191728(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdf610;
  _swift_getWitnessTable(&UNK_10dcdf610,&UNK_11074eaf8);
  puRam0000000113067730 = puVar1;
  return;
}



/* Entry: 10419172c; end: 10419176b;  */

void FUN_10419172c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdf610;
  _swift_getWitnessTable(&UNK_10dcdf610,&UNK_11074eaf8);
  puRam0000000113067730 = puVar1;
  return;
}



/* Entry: 10419176c; end: 10419184f;  */

byte FUN_10419176c(double *param_1,double *param_2)

{
  return ((*param_1 != *param_2 |
          *(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1) |
          *(byte *)((long)param_2 + 9) ^ *(byte *)((long)param_1 + 9)) ^ 0xff) & 1;
}



/* Entry: 104191850; end: 104191963;  */

void FUN_104191850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104191964; end: 104191a67;  */

undefined8 FUN_104191964(undefined8 param_1)

{
  (*(code *)(undefined *)0x1041a5708)();
  return param_1;
}



/* Entry: 104191a68; end: 104191a9b; -[SCAdAttachmentDataModel attachmentType] */

undefined8 FUN_104191a68(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104191a9c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104191a9c; end: 104191af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104191a9c(void)

{
  code *pcVar1;
  long unaff_x20;
  ulong uStack_18;
  
  uStack_18 = *(ulong *)(unaff_x20 + _DAT_113067d20);
  if (uStack_18 < 9) {
    return uStack_18 + 1;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11074fa30,&uStack_18,&UNK_11074fa30,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104191af4);
  (*pcVar1)();
}



/* Entry: 104191af4; end: 104191b2b; -[SCAdAttachmentDataModel commonConfig] */

void FUN_104191af4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104191bf4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104191b2c; end: 104191b3f;  */

void FUN_104191b2c(void)

{
  FUN_104191bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 104191b40; end: 104191b53; -[SCAdAttachmentDataModel webViewAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d28));
  return;
}



/* Entry: 104191b54; end: 104191b67; -[SCAdAttachmentDataModel appInstallAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d30));
  return;
}



/* Entry: 104191b68; end: 104191b7b; -[SCAdAttachmentDataModel deepLinkAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d38));
  return;
}



/* Entry: 104191b7c; end: 104191b8f; -[SCAdAttachmentDataModel adToCallAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d40));
  return;
}



/* Entry: 104191b90; end: 104191ba3; -[SCAdAttachmentDataModel adToMessageAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d48));
  return;
}



/* Entry: 104191ba4; end: 104191bb7; -[SCAdAttachmentDataModel surveyAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d50));
  return;
}



/* Entry: 104191bb8; end: 104191bcb; -[SCAdAttachmentDataModel leadGenAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d58));
  return;
}



/* Entry: 104191bcc; end: 104191bdf; -[SCAdAttachmentDataModel instantPageAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d60));
  return;
}



/* Entry: 104191be0; end: 104191bf3; -[SCAdAttachmentDataModel playableAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104191be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067d68));
  return;
}



/* Entry: 104191bf4; end: 104191de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104191bf4(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_18;
  
  lStack_18 = *(long *)(unaff_x20 + _DAT_113067d20);
  if (lStack_18 < 4) {
    if (lStack_18 < 2) {
      if (lStack_18 == 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_113067d28);
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104191da0);
          (*pcVar1)();
        }
        plVar3 = (long *)&DAT_1138131a8;
      }
      else {
        if (lStack_18 != 1) {
LAB_104191dc0:
          __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                    (&UNK_11074fa30,&lStack_18,&UNK_11074fa30,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104191de4);
          (*pcVar1)();
        }
        lVar2 = *(long *)(unaff_x20 + _DAT_113067d30);
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104191db4);
          (*pcVar1)();
        }
        plVar3 = (long *)&DAT_1130683b0;
      }
    }
    else if (lStack_18 == 2) {
      lVar2 = *(long *)(unaff_x20 + _DAT_113067d38);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104191da4);
        (*pcVar1)();
      }
      plVar3 = (long *)&DAT_1138131f0;
    }
    else {
      if (lStack_18 != 3) goto LAB_104191dc0;
      lVar2 = *(long *)(unaff_x20 + _DAT_113067d40);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104191db8);
        (*pcVar1)();
      }
      plVar3 = (long *)&DAT_1130680d8;
    }
  }
  else if (lStack_18 < 6) {
    if (lStack_18 == 4) {
      lVar2 = *(long *)(unaff_x20 + _DAT_113067d48);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104191db0);
        (*pcVar1)();
      }
      plVar3 = (long *)&DAT_113068128;
    }
    else {
      if (lStack_18 != 5) goto LAB_104191dc0;
      lVar2 = *(long *)(unaff_x20 + _DAT_113067d50);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104191dc0);
        (*pcVar1)();
      }
      plVar3 = (long *)&DAT_113068170;
    }
  }
  else if (lStack_18 == 6) {
    lVar2 = *(long *)(unaff_x20 + _DAT_113067d58);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104191da8);
      (*pcVar1)();
    }
    plVar3 = (long *)&DAT_113068240;
  }
  else if (lStack_18 == 7) {
    lVar2 = *(long *)(unaff_x20 + _DAT_113067d60);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104191dac);
      (*pcVar1)();
    }
    plVar3 = (long *)&DAT_113068288;
  }
  else {
    if (lStack_18 != 8) goto LAB_104191dc0;
    lVar2 = *(long *)(unaff_x20 + _DAT_113067d68);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104191dbc);
      (*pcVar1)();
    }
    plVar3 = (long *)&DAT_113813260;
  }
  return *(undefined8 *)(lVar2 + *plVar3);
}



/* Entry: 104191de4; end: 104191de7;  */

uint FUN_104191de4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  uint uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  ulong auStack_530 [13];
  ulong *puStack_4c8;
  ulong auStack_4c0 [8];
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  
  lVar4 = 0;
  auStack_530[0xc] = param_1;
  puStack_4c8 = (ulong *)param_2;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = (long)auStack_530 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_530[5] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lVar4 = 0;
  auStack_530[4] = lVar13;
  func_0x000100b919a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  auStack_530[3] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  lVar4 = 0;
  auStack_530[0xb] = lVar13;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  auStack_530[2] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_01;
  lVar4 = 0;
  auStack_530[10] = lVar13;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  auStack_530[1] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_02;
  lVar5 = 0;
  auStack_530[9] = lVar13;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  auStack_530[8] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_03;
  auStack_530[7] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_04;
  auStack_530[6] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (ulong *)(lVar13 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (ulong *)((long)puVar17 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (ulong *)((long)puVar20 - extraout_x12_07);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)puVar15 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar18 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = lVar13 - extraout_x12_10;
  lVar4 = 0x1130677e0;
  func_0x0001000285a8(0x1130677e0,&UNK_10dcdf750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = uVar16 - extraout_x8_04;
  puVar9 = (ulong *)(lVar19 + *(int *)(lVar4 + 0x30));
  func_0x000100e3aef4(auStack_530[0xc],lVar19);
  puVar8 = puStack_4c8;
  puStack_4c8 = puVar9;
  func_0x000100e3aef4(puVar8,puVar9);
  lVar4 = lVar19;
  _swift_getEnumCaseMultiPayload(lVar19,lVar5);
  puVar9 = puStack_4c8;
  uVar11 = auStack_530[0xb];
  uVar10 = auStack_530[10];
  uVar2 = auStack_530[9];
  uVar1 = auStack_530[8];
  uVar7 = auStack_530[7];
  uVar6 = auStack_530[6];
  iVar3 = (int)lVar4;
  if (iVar3 < 4) {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        func_0x000100e3aef4(lVar19,uVar16);
        puVar8 = puVar9;
        _swift_getEnumCaseMultiPayload(puVar9,lVar5);
        if ((int)puVar8 == 0) {
          puVar12 = &SUB_100b915bc;
          func_0x00010419e3f4(uVar16,uVar2,&SUB_100b915bc);
          uVar10 = auStack_530[1];
          func_0x00010419e3f4(puVar9,auStack_530[1],&SUB_100b915bc);
          uVar6 = uVar2;
          FUN_1041b6dec(uVar2,uVar10);
          uVar14 = (uint)uVar6;
          func_0x00010419e3b8(uVar10,&SUB_100b915bc);
          uVar11 = uVar2;
LAB_1041926e0:
          func_0x00010419e3b8(uVar11,puVar12);
          goto LAB_1041926e8;
        }
        puVar12 = &SUB_100b915bc;
      }
      else {
        func_0x000100e3aef4(lVar19,lVar13);
        puVar8 = puVar9;
        _swift_getEnumCaseMultiPayload(puVar9,lVar5);
        if ((int)puVar8 == 1) {
          puVar12 = &SUB_100b91790;
          func_0x00010419e3f4(lVar13,uVar10,&SUB_100b91790);
          uVar6 = auStack_530[2];
          func_0x00010419e3f4(puVar9,auStack_530[2],&SUB_100b91790);
          uVar7 = uVar10;
          func_0x00010418d078(uVar10,uVar6);
          uVar14 = (uint)uVar7;
          goto LAB_1041924bc;
        }
        puVar12 = &SUB_100b91790;
        uVar16 = lVar13;
      }
    }
    else {
      if (iVar3 != 2) {
        func_0x000100e3aef4(lVar19,puVar15);
        uStack_378 = puVar15[0xd];
        uStack_380 = puVar15[0xc];
        uStack_368 = puVar15[0xf];
        uStack_370 = puVar15[0xe];
        uStack_360 = puVar15[0x10];
        uStack_3b8 = puVar15[5];
        uStack_3c0 = puVar15[4];
        uStack_3a8 = puVar15[7];
        uStack_3b0 = puVar15[6];
        uStack_398 = puVar15[9];
        uStack_3a0 = puVar15[8];
        uStack_388 = puVar15[0xb];
        uStack_390 = puVar15[10];
        uStack_3d8 = puVar15[1];
        uStack_3e0 = *puVar15;
        uStack_3c8 = puVar15[3];
        uStack_3d0 = puVar15[2];
        puVar8 = puVar9;
        _swift_getEnumCaseMultiPayload(puVar9,lVar5);
        if ((int)puVar8 == 3) {
          uStack_1b8 = puVar9[0xd];
          uStack_1c0 = puVar9[0xc];
          uStack_1a8 = puVar9[0xf];
          uStack_1b0 = puVar9[0xe];
          uStack_1a0 = puVar9[0x10];
          uStack_1f8 = puVar9[5];
          uStack_200 = puVar9[4];
          uStack_1e8 = puVar9[7];
          uStack_1f0 = puVar9[6];
          uStack_1d8 = puVar9[9];
          uStack_1e0 = puVar9[8];
          uStack_1c8 = puVar9[0xb];
          uStack_1d0 = puVar9[10];
          uStack_218 = puVar9[1];
          uStack_220 = *puVar9;
          uStack_208 = puVar9[3];
          uStack_210 = puVar9[2];
          puVar9 = &uStack_3e0;
          FUN_10418c0a0(puVar9,&uStack_220);
          uVar14 = (uint)puVar9;
          func_0x000104191a34(&uStack_220);
          func_0x000104191a34(&uStack_3e0);
          goto LAB_1041926e8;
        }
        func_0x000104191a34(&uStack_3e0);
        goto LAB_10419266c;
      }
      func_0x000100e3aef4(lVar19,lVar18);
      puVar8 = puVar9;
      _swift_getEnumCaseMultiPayload(puVar9,lVar5);
      if ((int)puVar8 == 2) {
        puVar12 = &SUB_100b919a8;
        func_0x00010419e3f4(lVar18,uVar11,&SUB_100b919a8);
        uVar10 = auStack_530[3];
        func_0x00010419e3f4(puVar9,auStack_530[3],&SUB_100b919a8);
        uVar6 = uVar11;
        func_0x0001041a1a74(uVar11,uVar10);
        uVar14 = (uint)uVar6;
        func_0x00010419e3b8(uVar10,&SUB_100b919a8);
        goto LAB_1041926e0;
      }
      puVar12 = &SUB_100b919a8;
      uVar16 = lVar18;
    }
LAB_104192668:
    func_0x00010419e3b8(uVar16,puVar12);
LAB_10419266c:
    func_0x00010419e370(lVar19);
  }
  else {
    if (5 < iVar3) {
      if (iVar3 == 6) {
        func_0x000100e3aef4(lVar19,auStack_530[6]);
        _memcpy(&uStack_3e0,uVar6,0x1b8);
        puVar9 = puStack_4c8;
        puVar8 = puStack_4c8;
        _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
        if ((int)puVar8 == 6) {
          _memcpy(&uStack_220,puVar9,0x1b8);
          puVar9 = &uStack_3e0;
          FUN_1041a6fc0(puVar9,&uStack_220);
          uVar14 = (uint)puVar9;
          func_0x000104191998(&uStack_220);
          func_0x000104191998(&uStack_3e0);
LAB_1041926e8:
          func_0x00010419e3b8(lVar19,&SUB_100b91584);
          goto LAB_1041926f8;
        }
        func_0x000104191998(&uStack_3e0);
      }
      else {
        if (iVar3 != 7) {
          func_0x000100e3aef4(lVar19,auStack_530[8]);
          puVar9 = puStack_4c8;
          puVar8 = puStack_4c8;
          _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
          uVar10 = auStack_530[4];
          if ((int)puVar8 != 8) {
            puVar12 = &SUB_100b91b84;
            uVar16 = uVar1;
            goto LAB_104192668;
          }
          puVar12 = &SUB_100b91b84;
          func_0x00010419e3f4(uVar1,auStack_530[4],&SUB_100b91b84);
          uVar6 = auStack_530[5];
          func_0x00010419e3f4(puVar9,auStack_530[5],&SUB_100b91b84);
          uVar7 = uVar10;
          FUN_1041a87cc(uVar10,uVar6);
          uVar14 = (uint)uVar7;
LAB_1041924bc:
          func_0x00010419e3b8(uVar6,puVar12);
          uVar11 = uVar10;
          goto LAB_1041926e0;
        }
        func_0x000100e3aef4(lVar19,auStack_530[7]);
        _memcpy(&uStack_3e0,uVar7,0x168);
        puVar9 = puStack_4c8;
        puVar8 = puStack_4c8;
        _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
        if ((int)puVar8 == 7) {
          _memcpy(&uStack_220,puVar9,0x168);
          puVar9 = &uStack_3e0;
          FUN_1041a506c(puVar9,&uStack_220);
          uVar14 = (uint)puVar9;
          FUN_104191964(&uStack_220);
          FUN_104191964(&uStack_3e0);
          goto LAB_1041926e8;
        }
        FUN_104191964(&uStack_3e0);
      }
      goto LAB_10419266c;
    }
    if (iVar3 == 4) {
      func_0x000100e3aef4(lVar19,puVar20);
      puVar9 = puStack_4c8;
      uStack_378 = puVar20[0xd];
      uStack_380 = puVar20[0xc];
      uStack_368 = puVar20[0xf];
      uStack_370 = puVar20[0xe];
      uStack_358 = puVar20[0x11];
      uStack_360 = puVar20[0x10];
      uStack_350 = puVar20[0x12];
      uStack_3b8 = puVar20[5];
      uStack_3c0 = puVar20[4];
      uStack_3a8 = puVar20[7];
      uStack_3b0 = puVar20[6];
      uStack_398 = puVar20[9];
      uStack_3a0 = puVar20[8];
      uStack_388 = puVar20[0xb];
      uStack_390 = puVar20[10];
      uStack_3d8 = puVar20[1];
      uStack_3e0 = *puVar20;
      uStack_3c8 = puVar20[3];
      uStack_3d0 = puVar20[2];
      puVar8 = puStack_4c8;
      _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
      if ((int)puVar8 == 4) {
        uStack_1b8 = puVar9[0xd];
        uStack_1c0 = puVar9[0xc];
        uStack_1a8 = puVar9[0xf];
        uStack_1b0 = puVar9[0xe];
        uStack_198 = puVar9[0x11];
        uStack_1a0 = puVar9[0x10];
        uStack_190 = puVar9[0x12];
        uStack_1f8 = puVar9[5];
        uStack_200 = puVar9[4];
        uStack_1e8 = puVar9[7];
        uStack_1f0 = puVar9[6];
        uStack_1d8 = puVar9[9];
        uStack_1e0 = puVar9[8];
        uStack_1c8 = puVar9[0xb];
        uStack_1d0 = puVar9[10];
        uStack_218 = puVar9[1];
        uStack_220 = *puVar9;
        uStack_208 = puVar9[3];
        uStack_210 = puVar9[2];
        puVar9 = &uStack_3e0;
        FUN_10418c878(puVar9,&uStack_220);
        uVar14 = (uint)puVar9;
        func_0x000104191a00(&uStack_220);
        func_0x000104191a00(&uStack_3e0);
        goto LAB_1041926e8;
      }
      func_0x000104191a00(&uStack_3e0);
      goto LAB_10419266c;
    }
    func_0x000100e3aef4(lVar19,puVar17);
    puVar9 = puStack_4c8;
    uStack_1d8 = puVar17[9];
    uStack_1e0 = puVar17[8];
    uStack_1c8 = puVar17[0xb];
    uStack_1d0 = puVar17[10];
    uStack_1b8 = puVar17[0xd];
    uStack_1c0 = puVar17[0xc];
    uStack_1a8 = puVar17[0xf];
    uStack_1b0 = puVar17[0xe];
    uStack_218 = puVar17[1];
    uStack_220 = *puVar17;
    uStack_208 = puVar17[3];
    uStack_210 = puVar17[2];
    uStack_1f8 = puVar17[5];
    uStack_200 = puVar17[4];
    uStack_1e8 = puVar17[7];
    uStack_1f0 = puVar17[6];
    puVar8 = puStack_4c8;
    _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
    if ((int)puVar8 != 5) {
      func_0x0001041919cc(&uStack_220);
      goto LAB_10419266c;
    }
    uStack_398 = puVar9[9];
    uStack_3a0 = puVar9[8];
    uStack_388 = puVar9[0xb];
    uStack_390 = puVar9[10];
    uStack_378 = puVar9[0xd];
    uStack_380 = puVar9[0xc];
    uStack_368 = puVar9[0xf];
    uStack_370 = puVar9[0xe];
    uStack_3d8 = puVar9[1];
    uStack_3e0 = *puVar9;
    uStack_3c8 = puVar9[3];
    uStack_3d0 = puVar9[2];
    uStack_3b8 = puVar9[5];
    uStack_3c0 = puVar9[4];
    uStack_3a8 = puVar9[7];
    uStack_3b0 = puVar9[6];
    uVar7 = uStack_220;
    func_0x00010474b704(uStack_220,uStack_3e0);
    uVar6 = uStack_218;
    uVar10 = uStack_3d8;
    if ((uVar7 & 1) == 0) {
LAB_104192720:
      func_0x0001041919cc(&uStack_3e0);
      func_0x0001041919cc(&uStack_220);
    }
    else {
      if (uStack_218 != 0) {
        if (uStack_3d8 != 0) {
          FUN_1041b68d8(0);
          _objc_retain(uVar10);
          _objc_retain();
          uVar7 = uVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar6);
          _objc_release(uVar10);
          if ((uVar7 & 1) != 0) goto LAB_1041925a0;
        }
        goto LAB_104192720;
      }
      if (uStack_3d8 != 0) goto LAB_104192720;
LAB_1041925a0:
      uStack_478 = uStack_1c8;
      uStack_480 = uStack_1d0;
      uStack_468 = uStack_1b8;
      uStack_470 = uStack_1c0;
      auStack_4c0[1] = uStack_208;
      auStack_4c0[0] = uStack_210;
      auStack_4c0[3] = uStack_1f8;
      auStack_4c0[2] = uStack_200;
      auStack_4c0[5] = uStack_1e8;
      auStack_4c0[4] = uStack_1f0;
      auStack_4c0[7] = uStack_1d8;
      auStack_4c0[6] = uStack_1e0;
      uStack_458 = uStack_1a8;
      uStack_460 = uStack_1b0;
      uStack_448 = uStack_3c8;
      uStack_450 = uStack_3d0;
      uStack_3f8 = uStack_378;
      uStack_400 = uStack_380;
      uStack_3e8 = uStack_368;
      uStack_3f0 = uStack_370;
      uStack_418 = uStack_398;
      uStack_420 = uStack_3a0;
      uStack_408 = uStack_388;
      uStack_410 = uStack_390;
      uStack_438 = uStack_3b8;
      uStack_440 = uStack_3c0;
      uStack_428 = uStack_3a8;
      uStack_430 = uStack_3b0;
      puVar9 = auStack_4c0;
      FUN_104191074(puVar9,&uStack_450);
      func_0x0001041919cc(&uStack_3e0);
      func_0x0001041919cc(&uStack_220);
      if (((ulong)puVar9 & 1) != 0) {
        func_0x00010419e3b8(lVar19,&SUB_100b91584);
        uVar14 = 1;
        goto LAB_1041926f8;
      }
    }
    func_0x00010419e3b8(lVar19,&SUB_100b91584);
  }
  uVar14 = 0;
LAB_1041926f8:
  return uVar14 & 1;
}



/* Entry: 104191de8; end: 10419e33f;  */

uint FUN_104191de8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  uint uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  ulong auStack_530 [13];
  ulong *puStack_4c8;
  ulong auStack_4c0 [8];
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  
  lVar4 = 0;
  auStack_530[0xc] = param_1;
  puStack_4c8 = (ulong *)param_2;
  func_0x000100b91b84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = (long)auStack_530 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_530[5] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lVar4 = 0;
  auStack_530[4] = lVar13;
  func_0x000100b919a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  auStack_530[3] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  lVar4 = 0;
  auStack_530[0xb] = lVar13;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  auStack_530[2] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_01;
  lVar4 = 0;
  auStack_530[10] = lVar13;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  auStack_530[1] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_02;
  lVar5 = 0;
  auStack_530[9] = lVar13;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  auStack_530[8] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_03;
  auStack_530[7] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_04;
  auStack_530[6] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (ulong *)(lVar13 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (ulong *)((long)puVar17 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (ulong *)((long)puVar20 - extraout_x12_07);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)puVar15 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar18 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = lVar13 - extraout_x12_10;
  lVar4 = 0x1130677e0;
  func_0x0001000285a8(0x1130677e0,&UNK_10dcdf750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = uVar16 - extraout_x8_04;
  puVar9 = (ulong *)(lVar19 + *(int *)(lVar4 + 0x30));
  func_0x000100e3aef4(auStack_530[0xc],lVar19);
  puVar8 = puStack_4c8;
  puStack_4c8 = puVar9;
  func_0x000100e3aef4(puVar8,puVar9);
  lVar4 = lVar19;
  _swift_getEnumCaseMultiPayload(lVar19,lVar5);
  puVar9 = puStack_4c8;
  uVar11 = auStack_530[0xb];
  uVar10 = auStack_530[10];
  uVar2 = auStack_530[9];
  uVar1 = auStack_530[8];
  uVar7 = auStack_530[7];
  uVar6 = auStack_530[6];
  iVar3 = (int)lVar4;
  if (iVar3 < 4) {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        func_0x000100e3aef4(lVar19,uVar16);
        puVar8 = puVar9;
        _swift_getEnumCaseMultiPayload(puVar9,lVar5);
        if ((int)puVar8 == 0) {
          puVar12 = &SUB_100b915bc;
          func_0x00010419e3f4(uVar16,uVar2,&SUB_100b915bc);
          uVar10 = auStack_530[1];
          func_0x00010419e3f4(puVar9,auStack_530[1],&SUB_100b915bc);
          uVar6 = uVar2;
          FUN_1041b6dec(uVar2,uVar10);
          uVar14 = (uint)uVar6;
          func_0x00010419e3b8(uVar10,&SUB_100b915bc);
          uVar11 = uVar2;
LAB_1041926e0:
          func_0x00010419e3b8(uVar11,puVar12);
          goto LAB_1041926e8;
        }
        puVar12 = &SUB_100b915bc;
      }
      else {
        func_0x000100e3aef4(lVar19,lVar13);
        puVar8 = puVar9;
        _swift_getEnumCaseMultiPayload(puVar9,lVar5);
        if ((int)puVar8 == 1) {
          puVar12 = &SUB_100b91790;
          func_0x00010419e3f4(lVar13,uVar10,&SUB_100b91790);
          uVar6 = auStack_530[2];
          func_0x00010419e3f4(puVar9,auStack_530[2],&SUB_100b91790);
          uVar7 = uVar10;
          func_0x00010418d078(uVar10,uVar6);
          uVar14 = (uint)uVar7;
          goto LAB_1041924bc;
        }
        puVar12 = &SUB_100b91790;
        uVar16 = lVar13;
      }
    }
    else {
      if (iVar3 != 2) {
        func_0x000100e3aef4(lVar19,puVar15);
        uStack_378 = puVar15[0xd];
        uStack_380 = puVar15[0xc];
        uStack_368 = puVar15[0xf];
        uStack_370 = puVar15[0xe];
        uStack_360 = puVar15[0x10];
        uStack_3b8 = puVar15[5];
        uStack_3c0 = puVar15[4];
        uStack_3a8 = puVar15[7];
        uStack_3b0 = puVar15[6];
        uStack_398 = puVar15[9];
        uStack_3a0 = puVar15[8];
        uStack_388 = puVar15[0xb];
        uStack_390 = puVar15[10];
        uStack_3d8 = puVar15[1];
        uStack_3e0 = *puVar15;
        uStack_3c8 = puVar15[3];
        uStack_3d0 = puVar15[2];
        puVar8 = puVar9;
        _swift_getEnumCaseMultiPayload(puVar9,lVar5);
        if ((int)puVar8 == 3) {
          uStack_1b8 = puVar9[0xd];
          uStack_1c0 = puVar9[0xc];
          uStack_1a8 = puVar9[0xf];
          uStack_1b0 = puVar9[0xe];
          uStack_1a0 = puVar9[0x10];
          uStack_1f8 = puVar9[5];
          uStack_200 = puVar9[4];
          uStack_1e8 = puVar9[7];
          uStack_1f0 = puVar9[6];
          uStack_1d8 = puVar9[9];
          uStack_1e0 = puVar9[8];
          uStack_1c8 = puVar9[0xb];
          uStack_1d0 = puVar9[10];
          uStack_218 = puVar9[1];
          uStack_220 = *puVar9;
          uStack_208 = puVar9[3];
          uStack_210 = puVar9[2];
          puVar9 = &uStack_3e0;
          FUN_10418c0a0(puVar9,&uStack_220);
          uVar14 = (uint)puVar9;
          func_0x000104191a34(&uStack_220);
          func_0x000104191a34(&uStack_3e0);
          goto LAB_1041926e8;
        }
        func_0x000104191a34(&uStack_3e0);
        goto LAB_10419266c;
      }
      func_0x000100e3aef4(lVar19,lVar18);
      puVar8 = puVar9;
      _swift_getEnumCaseMultiPayload(puVar9,lVar5);
      if ((int)puVar8 == 2) {
        puVar12 = &SUB_100b919a8;
        func_0x00010419e3f4(lVar18,uVar11,&SUB_100b919a8);
        uVar10 = auStack_530[3];
        func_0x00010419e3f4(puVar9,auStack_530[3],&SUB_100b919a8);
        uVar6 = uVar11;
        func_0x0001041a1a74(uVar11,uVar10);
        uVar14 = (uint)uVar6;
        func_0x00010419e3b8(uVar10,&SUB_100b919a8);
        goto LAB_1041926e0;
      }
      puVar12 = &SUB_100b919a8;
      uVar16 = lVar18;
    }
LAB_104192668:
    func_0x00010419e3b8(uVar16,puVar12);
LAB_10419266c:
    func_0x00010419e370(lVar19);
  }
  else {
    if (5 < iVar3) {
      if (iVar3 == 6) {
        func_0x000100e3aef4(lVar19,auStack_530[6]);
        _memcpy(&uStack_3e0,uVar6,0x1b8);
        puVar9 = puStack_4c8;
        puVar8 = puStack_4c8;
        _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
        if ((int)puVar8 == 6) {
          _memcpy(&uStack_220,puVar9,0x1b8);
          puVar9 = &uStack_3e0;
          FUN_1041a6fc0(puVar9,&uStack_220);
          uVar14 = (uint)puVar9;
          func_0x000104191998(&uStack_220);
          func_0x000104191998(&uStack_3e0);
LAB_1041926e8:
          func_0x00010419e3b8(lVar19,&SUB_100b91584);
          goto LAB_1041926f8;
        }
        func_0x000104191998(&uStack_3e0);
      }
      else {
        if (iVar3 != 7) {
          func_0x000100e3aef4(lVar19,auStack_530[8]);
          puVar9 = puStack_4c8;
          puVar8 = puStack_4c8;
          _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
          uVar10 = auStack_530[4];
          if ((int)puVar8 != 8) {
            puVar12 = &SUB_100b91b84;
            uVar16 = uVar1;
            goto LAB_104192668;
          }
          puVar12 = &SUB_100b91b84;
          func_0x00010419e3f4(uVar1,auStack_530[4],&SUB_100b91b84);
          uVar6 = auStack_530[5];
          func_0x00010419e3f4(puVar9,auStack_530[5],&SUB_100b91b84);
          uVar7 = uVar10;
          FUN_1041a87cc(uVar10,uVar6);
          uVar14 = (uint)uVar7;
LAB_1041924bc:
          func_0x00010419e3b8(uVar6,puVar12);
          uVar11 = uVar10;
          goto LAB_1041926e0;
        }
        func_0x000100e3aef4(lVar19,auStack_530[7]);
        _memcpy(&uStack_3e0,uVar7,0x168);
        puVar9 = puStack_4c8;
        puVar8 = puStack_4c8;
        _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
        if ((int)puVar8 == 7) {
          _memcpy(&uStack_220,puVar9,0x168);
          puVar9 = &uStack_3e0;
          FUN_1041a506c(puVar9,&uStack_220);
          uVar14 = (uint)puVar9;
          FUN_104191964(&uStack_220);
          FUN_104191964(&uStack_3e0);
          goto LAB_1041926e8;
        }
        FUN_104191964(&uStack_3e0);
      }
      goto LAB_10419266c;
    }
    if (iVar3 == 4) {
      func_0x000100e3aef4(lVar19,puVar20);
      puVar9 = puStack_4c8;
      uStack_378 = puVar20[0xd];
      uStack_380 = puVar20[0xc];
      uStack_368 = puVar20[0xf];
      uStack_370 = puVar20[0xe];
      uStack_358 = puVar20[0x11];
      uStack_360 = puVar20[0x10];
      uStack_350 = puVar20[0x12];
      uStack_3b8 = puVar20[5];
      uStack_3c0 = puVar20[4];
      uStack_3a8 = puVar20[7];
      uStack_3b0 = puVar20[6];
      uStack_398 = puVar20[9];
      uStack_3a0 = puVar20[8];
      uStack_388 = puVar20[0xb];
      uStack_390 = puVar20[10];
      uStack_3d8 = puVar20[1];
      uStack_3e0 = *puVar20;
      uStack_3c8 = puVar20[3];
      uStack_3d0 = puVar20[2];
      puVar8 = puStack_4c8;
      _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
      if ((int)puVar8 == 4) {
        uStack_1b8 = puVar9[0xd];
        uStack_1c0 = puVar9[0xc];
        uStack_1a8 = puVar9[0xf];
        uStack_1b0 = puVar9[0xe];
        uStack_198 = puVar9[0x11];
        uStack_1a0 = puVar9[0x10];
        uStack_190 = puVar9[0x12];
        uStack_1f8 = puVar9[5];
        uStack_200 = puVar9[4];
        uStack_1e8 = puVar9[7];
        uStack_1f0 = puVar9[6];
        uStack_1d8 = puVar9[9];
        uStack_1e0 = puVar9[8];
        uStack_1c8 = puVar9[0xb];
        uStack_1d0 = puVar9[10];
        uStack_218 = puVar9[1];
        uStack_220 = *puVar9;
        uStack_208 = puVar9[3];
        uStack_210 = puVar9[2];
        puVar9 = &uStack_3e0;
        FUN_10418c878(puVar9,&uStack_220);
        uVar14 = (uint)puVar9;
        func_0x000104191a00(&uStack_220);
        func_0x000104191a00(&uStack_3e0);
        goto LAB_1041926e8;
      }
      func_0x000104191a00(&uStack_3e0);
      goto LAB_10419266c;
    }
    func_0x000100e3aef4(lVar19,puVar17);
    puVar9 = puStack_4c8;
    uStack_1d8 = puVar17[9];
    uStack_1e0 = puVar17[8];
    uStack_1c8 = puVar17[0xb];
    uStack_1d0 = puVar17[10];
    uStack_1b8 = puVar17[0xd];
    uStack_1c0 = puVar17[0xc];
    uStack_1a8 = puVar17[0xf];
    uStack_1b0 = puVar17[0xe];
    uStack_218 = puVar17[1];
    uStack_220 = *puVar17;
    uStack_208 = puVar17[3];
    uStack_210 = puVar17[2];
    uStack_1f8 = puVar17[5];
    uStack_200 = puVar17[4];
    uStack_1e8 = puVar17[7];
    uStack_1f0 = puVar17[6];
    puVar8 = puStack_4c8;
    _swift_getEnumCaseMultiPayload(puStack_4c8,lVar5);
    if ((int)puVar8 != 5) {
      func_0x0001041919cc(&uStack_220);
      goto LAB_10419266c;
    }
    uStack_398 = puVar9[9];
    uStack_3a0 = puVar9[8];
    uStack_388 = puVar9[0xb];
    uStack_390 = puVar9[10];
    uStack_378 = puVar9[0xd];
    uStack_380 = puVar9[0xc];
    uStack_368 = puVar9[0xf];
    uStack_370 = puVar9[0xe];
    uStack_3d8 = puVar9[1];
    uStack_3e0 = *puVar9;
    uStack_3c8 = puVar9[3];
    uStack_3d0 = puVar9[2];
    uStack_3b8 = puVar9[5];
    uStack_3c0 = puVar9[4];
    uStack_3a8 = puVar9[7];
    uStack_3b0 = puVar9[6];
    uVar7 = uStack_220;
    func_0x00010474b704(uStack_220,uStack_3e0);
    uVar6 = uStack_218;
    uVar10 = uStack_3d8;
    if ((uVar7 & 1) == 0) {
LAB_104192720:
      func_0x0001041919cc(&uStack_3e0);
      func_0x0001041919cc(&uStack_220);
    }
    else {
      if (uStack_218 != 0) {
        if (uStack_3d8 != 0) {
          FUN_1041b68d8(0);
          _objc_retain(uVar10);
          _objc_retain();
          uVar7 = uVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar6);
          _objc_release(uVar10);
          if ((uVar7 & 1) != 0) goto LAB_1041925a0;
        }
        goto LAB_104192720;
      }
      if (uStack_3d8 != 0) goto LAB_104192720;
LAB_1041925a0:
      uStack_478 = uStack_1c8;
      uStack_480 = uStack_1d0;
      uStack_468 = uStack_1b8;
      uStack_470 = uStack_1c0;
      auStack_4c0[1] = uStack_208;
      auStack_4c0[0] = uStack_210;
      auStack_4c0[3] = uStack_1f8;
      auStack_4c0[2] = uStack_200;
      auStack_4c0[5] = uStack_1e8;
      auStack_4c0[4] = uStack_1f0;
      auStack_4c0[7] = uStack_1d8;
      auStack_4c0[6] = uStack_1e0;
      uStack_458 = uStack_1a8;
      uStack_460 = uStack_1b0;
      uStack_448 = uStack_3c8;
      uStack_450 = uStack_3d0;
      uStack_3f8 = uStack_378;
      uStack_400 = uStack_380;
      uStack_3e8 = uStack_368;
      uStack_3f0 = uStack_370;
      uStack_418 = uStack_398;
      uStack_420 = uStack_3a0;
      uStack_408 = uStack_388;
      uStack_410 = uStack_390;
      uStack_438 = uStack_3b8;
      uStack_440 = uStack_3c0;
      uStack_428 = uStack_3a8;
      uStack_430 = uStack_3b0;
      puVar9 = auStack_4c0;
      FUN_104191074(puVar9,&uStack_450);
      func_0x0001041919cc(&uStack_3e0);
      func_0x0001041919cc(&uStack_220);
      if (((ulong)puVar9 & 1) != 0) {
        func_0x00010419e3b8(lVar19,&SUB_100b91584);
        uVar14 = 1;
        goto LAB_1041926f8;
      }
    }
    func_0x00010419e3b8(lVar19,&SUB_100b91584);
  }
  uVar14 = 0;
LAB_1041926f8:
  return uVar14 & 1;
}



/* Entry: 10419e340; end: 10419e36f;  */

void FUN_10419e340(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010419e348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10419e370; end: 10419e437;  */

undefined8 FUN_10419e370(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1130677e0;
  func_0x0001000285a8(0x1130677e0,&UNK_10dcdf750);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10419e438; end: 10419e59b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10419e438(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long alStack_50 [2];
  
  lVar2 = 0;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)alStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x00010419ed40();
  lVar4 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar3);
  if ((int)lVar4 == 1) {
    FUN_10419e59c(lVar7,&SUB_100b91790);
    uVar5 = 3;
  }
  else {
    FUN_10419e974(lVar7,lVar6,&SUB_100b915bc);
    alStack_50[1] = *(long *)(lVar6 + *(int *)(lVar2 + 0x14));
    if (alStack_50[1] != 2) {
      if (alStack_50[1] == 1) {
        FUN_10419e59c(lVar6,&SUB_100b915bc);
        return 2;
      }
      if (alStack_50[1] != 0) {
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_11074f9b8,alStack_50 + 1,&UNK_11074f9b8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10419e59c);
        (*pcVar1)();
      }
    }
    FUN_10419e59c(lVar6,&SUB_100b915bc);
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 10419e59c; end: 10419e5d7;  */

undefined8 FUN_10419e59c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10419e5d8; end: 10419e673; -[SCAdAttachmentDeepLinkFallbackAttachment fallbackType] */

undefined8 FUN_10419e5d8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  _objc_retain();
  uVar2 = param_1;
  FUN_1041c25dc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10419e438();
  _objc_release(param_1);
  FUN_10419e59c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&SUB_100b91acc
               );
  return uVar2;
}



/* Entry: 10419e674; end: 10419e6a7; -[SCAdAttachmentDeepLinkFallbackAttachment webView] */

void FUN_10419e674(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10419e6a8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10419e6a8; end: 10419e973;  */

long FUN_10419e6a8(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000100b915bc();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_68 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12;
  lStack_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_00;
  lVar3 = 0x112f05bd0;
  func_0x0001000285a8(0x112f05bd0,&UNK_10db39d18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12_01;
  lVar4 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _objc_retain();
  FUN_1041c25dc(lVar9 - extraout_x12_02);
  FUN_10419e974(lVar9 - extraout_x12_02,lVar9,&SUB_100b91acc);
  lVar3 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar4);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    FUN_10419e974(lVar9,lVar5,&SUB_100b915bc);
    FUN_10419e974(lVar5,lVar7,&SUB_100b915bc);
  }
  else {
    FUN_10419e59c(lVar9,&SUB_100b91acc);
  }
  (**(code **)(lVar6 + 0x38))(lVar7,!bVar1,1,lVar2);
  FUN_10419ecb8(lVar7,lVar8,0x112f05bd0,&UNK_10db39d18);
  lVar4 = lVar8;
  (**(code **)(lVar6 + 0x30))(lVar8,1,lVar2);
  lVar3 = lStack_70;
  if ((int)lVar4 == 1) {
    func_0x00010419ed00(lVar7,0x112f05bd0,&UNK_10db39d18);
    lVar2 = 0;
  }
  else {
    FUN_10419e974(lVar8,lStack_70,&SUB_100b915bc);
    lVar2 = lStack_68;
    func_0x00010419ed40(lVar3,lStack_68,&SUB_100b915bc);
    FUN_1041c0a38(0);
    _objc_allocWithZone();
    func_0x0001041c04ec(lVar2);
    FUN_10419e59c(lVar3,&SUB_100b915bc);
    func_0x00010419ed00(lVar7,0x112f05bd0,&UNK_10db39d18);
  }
  return lVar2;
}



/* Entry: 10419e974; end: 10419e9b7;  */

undefined8 FUN_10419e974(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10419e9b8; end: 10419e9eb; -[SCAdAttachmentDeepLinkFallbackAttachment appInstall] */

void FUN_10419e9b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10419e9ec();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10419e9ec; end: 10419ecb7;  */

long FUN_10419e9ec(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000100b91790();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_68 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12;
  lStack_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_00;
  lVar3 = 0x1130677e8;
  func_0x0001000285a8(0x1130677e8,&UNK_10dcdf758);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12_01;
  lVar4 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _objc_retain();
  FUN_1041c25dc(lVar9 - extraout_x12_02);
  FUN_10419e974(lVar9 - extraout_x12_02,lVar9,&SUB_100b91acc);
  lVar3 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar4);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    FUN_10419e59c(lVar9,&SUB_100b91acc);
  }
  else {
    FUN_10419e974(lVar9,lVar5,&SUB_100b91790);
    FUN_10419e974(lVar5,lVar7,&SUB_100b91790);
  }
  (**(code **)(lVar6 + 0x38))(lVar7,bVar1,1,lVar2);
  FUN_10419ecb8(lVar7,lVar8,0x1130677e8,&UNK_10dcdf758);
  lVar4 = lVar8;
  (**(code **)(lVar6 + 0x30))(lVar8,1,lVar2);
  lVar3 = lStack_70;
  if ((int)lVar4 == 1) {
    func_0x00010419ed00(lVar7,0x1130677e8,&UNK_10dcdf758);
    lVar2 = 0;
  }
  else {
    FUN_10419e974(lVar8,lStack_70,&SUB_100b91790);
    lVar2 = lStack_68;
    func_0x00010419ed40(lVar3,lStack_68,&SUB_100b91790);
    FUN_1041ca2d4(0);
    _objc_allocWithZone();
    func_0x0001041c9d38(lVar2);
    FUN_10419e59c(lVar3,&SUB_100b91790);
    func_0x00010419ed00(lVar7,0x1130677e8,&UNK_10dcdf758);
  }
  return lVar2;
}



/* Entry: 10419ecb8; end: 10419ed83;  */

undefined8 FUN_10419ecb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10419ed84; end: 10419eeab;  */

long FUN_10419ed84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10419eeac; end: 10419eeb7;  */

undefined * FUN_10419eeac(void)

{
  return &UNK_11074ec68;
}



/* Entry: 10419eeb8; end: 10419eee3; +[SCAdAttachmentHandlerScopeIdentifiers trackCommonSource] */

void FUN_10419eeb8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1ee780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10419eee4; end: 10419ef1f; -[SCAdAttachmentHandlerScopeIdentifiers init] */

void FUN_10419eee4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10419ef20; end: 10419ef53;  */

void FUN_10419ef20(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10419ef54; end: 10419ef57; -[SCAdAttachmentHandlerScopeIdentifiers .cxx_destruct] */

void FUN_10419ef54(void)

{
  return;
}



/* Entry: 10419ef58; end: 10419ef77;  */

void FUN_10419ef58(void)

{
  _objc_opt_self(&PTR_PTR_11298dc98);
  return;
}



/* Entry: 10419ef78; end: 10419f0b3;  */

void FUN_10419ef78(void)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = unaff_x20[1];
  uVar8 = unaff_x20[3];
  uVar1 = 0;
  if ((*unaff_x20 & 0x7fffffffffffffff) != 0) {
    uVar1 = *unaff_x20;
  }
  uVar5 = *(byte *)((long)unaff_x20 + 9) & 1;
  if (-1 < (long)uVar8) {
    __ss6HasherV8_combineyySuF(0);
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    __ss6HasherV8_combineyys5UInt8VF((byte)uVar3 & 1);
    goto LAB_10419f094;
  }
  uVar6 = unaff_x20[2];
  uVar7 = unaff_x20[4];
  uVar2 = (ushort)unaff_x20[5];
  __ss6HasherV8_combineyySuF(1);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF((byte)uVar3 & 1);
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  if ((uVar8 & 0xff00) == 0x300) {
LAB_10419f058:
    uVar4 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    if ((uVar8 & 0xff) == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar6);
    }
    if ((uVar8 & 0xff00) == 0x200) goto LAB_10419f058;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar4 = (uint)uVar8 >> 8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar4);
  if ((uVar2 & 0xff) == 2) {
    uVar5 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    __ss6HasherV8_combineyys5UInt8VF(uVar2 & 1);
    uVar5 = uVar2 >> 8 & 1;
  }
LAB_10419f094:
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  return;
}



/* Entry: 10419f0b4; end: 10419f0ef;  */

void FUN_10419f0b4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10419ef78(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10419f0f0; end: 10419f0f3;  */

void FUN_10419f0f0(void)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = unaff_x20[1];
  uVar8 = unaff_x20[3];
  uVar1 = 0;
  if ((*unaff_x20 & 0x7fffffffffffffff) != 0) {
    uVar1 = *unaff_x20;
  }
  uVar5 = *(byte *)((long)unaff_x20 + 9) & 1;
  if (-1 < (long)uVar8) {
    __ss6HasherV8_combineyySuF(0);
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    __ss6HasherV8_combineyys5UInt8VF((byte)uVar3 & 1);
    goto LAB_10419f094;
  }
  uVar6 = unaff_x20[2];
  uVar7 = unaff_x20[4];
  uVar2 = (ushort)unaff_x20[5];
  __ss6HasherV8_combineyySuF(1);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF((byte)uVar3 & 1);
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  if ((uVar8 & 0xff00) == 0x300) {
LAB_10419f058:
    uVar4 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    if ((uVar8 & 0xff) == 1) {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar6);
    }
    if ((uVar8 & 0xff00) == 0x200) goto LAB_10419f058;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar4 = (uint)uVar8 >> 8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar4);
  if ((uVar2 & 0xff) == 2) {
    uVar5 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((uVar7 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    __ss6HasherV8_combineyys5UInt8VF(uVar2 & 1);
    uVar5 = uVar2 >> 8 & 1;
  }
LAB_10419f094:
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  return;
}



/* Entry: 10419f0f4; end: 10419f12b;  */

void FUN_10419f0f4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10419ef78(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10419f12c; end: 10419f173;  */

uint FUN_10419f12c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined8 uStack_4e;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined2)param_1[3];
  uStack_4e = *(undefined8 *)((long)param_1 + 0x22);
  uStack_56 = (undefined6)*(undefined8 *)((long)param_1 + 0x1a);
  uStack_50 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x1a) >> 0x30);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined2)param_2[3];
  uStack_1e = *(undefined8 *)((long)param_2 + 0x22);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_2 + 0x1a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x1a) >> 0x30);
  FUN_10419f270(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10419f174; end: 10419f23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10419f174(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  long alStack_90 [2];
  long alStack_80 [2];
  undefined8 uStack_70;
  byte bStack_68;
  byte bStack_67;
  long lStack_58;
  
  _objc_retain();
  FUN_1041bc3a8(&uStack_70);
  _objc_release(unaff_x20);
  lVar2 = 0;
  func_0x0001041bce7c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_113067e70) = uStack_70;
  *(byte *)(lVar3 + _DAT_113067e78) = bStack_68 & 1;
  *(byte *)(lVar3 + _DAT_113067e80) = bStack_67 & 1;
  plVar1 = alStack_80;
  if (-1 < lStack_58) {
    plVar1 = alStack_90;
  }
  *plVar1 = lVar3;
  plVar1[1] = lVar2;
  _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10419f23c; end: 10419f26f; -[SCAdAttachmentLoadingMetrics getCommonMetrics] */

void FUN_10419f23c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10419f174();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10419f270; end: 10419f3d7;  */

byte FUN_10419f270(double *param_1,double *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  
  dVar4 = param_1[3];
  if ((long)dVar4 < 0) {
    dVar5 = param_2[3];
    if ((long)dVar5 < 0) {
      bVar3 = 0;
      if (((*param_2 == *param_1) && (((*(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1)) & 1) == 0))
         && (((*(byte *)((long)param_1 + 9) ^ *(byte *)((long)param_2 + 9)) & 1) == 0)) {
        uVar6 = (ulong)dVar5 & 0xff00;
        if (((ulong)dVar4 & 0xff00) == 0x300) {
          if (uVar6 != 0x300) {
            return 0;
          }
        }
        else {
          if (uVar6 == 0x300) {
            return 0;
          }
          uVar2 = SUB84(dVar5,0) & 0xff;
          if (((ulong)dVar4 & 0xff) == 1) {
            if (uVar2 != 1) {
              return 0;
            }
          }
          else {
            if (uVar2 == 1) {
              return 0;
            }
            if (param_1[2] != param_2[2]) {
              return 0;
            }
          }
          if (((ulong)dVar4 & 0xff00) == 0x200) {
            if (uVar6 != 0x200) {
              return 0;
            }
          }
          else {
            if (uVar6 == 0x200) {
              return 0;
            }
            if (((SUB84(dVar4,0) ^ SUB84(dVar5,0)) >> 8 & 1) != 0) {
              return 0;
            }
          }
        }
        uVar1 = *(ushort *)(param_2 + 5) & 0xff;
        if ((*(ushort *)(param_1 + 5) & 0xff) == 2) {
          if (uVar1 != 2) {
            return 0;
          }
        }
        else {
          if (uVar1 == 2) {
            return 0;
          }
          if (param_1[4] != param_2[4]) {
            return 0;
          }
          if (((*(ushort *)(param_2 + 5) ^ *(ushort *)(param_1 + 5)) & 0x101) != 0) {
            return 0;
          }
        }
        bVar3 = 1;
      }
      return bVar3;
    }
  }
  else if (-1 < (long)param_2[3]) {
    return *param_2 == *param_1 &
           (*(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1) ^ 1) &
           (*(byte *)((long)param_1 + 9) ^ *(byte *)((long)param_2 + 9) ^ 1);
  }
  return 0;
}



/* Entry: 10419f3d8; end: 10419f417;  */

void FUN_10419f3d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdf7f0;
  _swift_getWitnessTable(&UNK_10dcdf7f0,&UNK_11074ecf8);
  puRam0000000113067818 = puVar1;
  return;
}



/* Entry: 10419f418; end: 10419f443;  */

long FUN_10419f418(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10419f444; end: 10419f547;  */

int FUN_10419f444(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x2a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 2) >> 2) & 0xffffff80 |
          (uint)*(ulong *)(param_1 + 2) >> 1 & 0x7f;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 10419f548; end: 10419f5ef;  */

void FUN_10419f548(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if ((param_2 & 0xff) == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if ((param_2 >> 8 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = param_2 >> 8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10419f5f0; end: 10419f5fb;  */

void FUN_10419f5f0(void)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(ushort *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if ((uVar1 & 0xff) == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (uVar1 >> 8 == 2) {
    uVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = uVar1 >> 8 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10419f5fc; end: 10419f713;  */

void FUN_10419f5fc(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  bVar1 = *(byte *)((long)unaff_x20 + 9);
  if (*(char *)(unaff_x20 + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  return;
}



/* Entry: 10419f714; end: 10419f7a7;  */

undefined8 FUN_10419f714(long *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *(ushort *)(param_2 + 1);
  if ((uVar1 & 0xff) == 1) {
    if ((uVar2 & 0xff) != 1) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff) == 1) {
      return 0;
    }
    if (*param_1 != *param_2) {
      return 0;
    }
  }
  if (uVar1 >> 8 == 2) {
    if (uVar2 >> 8 == 2) {
      return 1;
    }
  }
  else if ((uVar2 >> 8 != 2) && (((uVar1 ^ uVar2) >> 8 & 1) == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 10419f7a8; end: 10419f7e7;  */

void FUN_10419f7a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdf880;
  _swift_getWitnessTable(&UNK_10dcdf880,&UNK_11074eda8);
  puRam0000000113067820 = puVar1;
  return;
}



/* Entry: 10419f7e8; end: 10419fb77;  */

int FUN_10419f7e8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 10) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)((long)param_1 + 9)) {
    uVar1 = (*(byte *)((long)param_1 + 9) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10419fb78; end: 1041a0397;  */

uint FUN_10419fb78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  lVar1 = 0;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12_00;
  lVar2 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar11 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12_01;
  lVar1 = 0x1130678d0;
  func_0x0001000285a8(0x1130678d0,&UNK_10dcdf978);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar12 - extraout_x8_02;
  lVar10 = (long)*(int *)(lVar1 + 0x30);
  FUN_1041a180c(param_1,lVar4);
  FUN_1041a180c(uStack_68,lVar4 + lVar10);
  lVar1 = lVar4;
  _swift_getEnumCaseMultiPayload(lVar4,lVar2);
  if ((int)lVar1 == 1) {
    FUN_1041a180c(lVar4,lVar11);
    lVar1 = lVar4 + lVar10;
    _swift_getEnumCaseMultiPayload(lVar1,lVar2);
    if ((int)lVar1 != 1) {
      puVar3 = &SUB_100b91790;
      lVar12 = lVar11;
LAB_10419fdac:
      func_0x0001041a1898(lVar12,puVar3);
      func_0x0001041a1850(lVar4);
      uVar9 = 0;
      goto LAB_10419fe20;
    }
    puVar3 = &SUB_100b91790;
    func_0x0001041a18d4(lVar11,lVar6,&SUB_100b91790);
    func_0x0001041a18d4(lVar4 + lVar10,puVar5,&SUB_100b91790);
    lVar1 = lVar6;
    func_0x00010418d078(lVar6,puVar5);
    uVar9 = (uint)lVar1;
    func_0x0001041a1898(puVar5,&SUB_100b91790);
    lVar8 = lVar6;
  }
  else {
    FUN_1041a180c(lVar4,lVar12);
    lVar1 = lVar4 + lVar10;
    _swift_getEnumCaseMultiPayload(lVar1,lVar2);
    if ((int)lVar1 == 1) {
      puVar3 = &SUB_100b915bc;
      goto LAB_10419fdac;
    }
    puVar3 = &SUB_100b915bc;
    func_0x0001041a18d4(lVar12,lVar8,&SUB_100b915bc);
    func_0x0001041a18d4(lVar4 + lVar10,lVar7,&SUB_100b915bc);
    lVar1 = lVar8;
    FUN_1041b6dec(lVar8,lVar7);
    uVar9 = (uint)lVar1;
    func_0x0001041a1898(lVar7,&SUB_100b915bc);
  }
  func_0x0001041a1898(lVar8,puVar3);
  func_0x0001041a1898(lVar4,&SUB_100b91acc);
LAB_10419fe20:
  return uVar9 & 1;
}



/* Entry: 1041a0398; end: 1041a05f7;  */

void FUN_1041a0398(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  lVar5 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar5 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
    lVar2 = 0;
    func_0x000100b91790();
    lVar5 = param_1 + *(int *)(lVar2 + 0x18);
    lVar3 = 0;
    func_0x000100b918b4();
    lVar6 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar6 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
      _objc_release(*(undefined8 *)(lVar5 + 0x10));
      _objc_release(*(undefined8 *)(lVar5 + 0x18));
      iVar1 = *(int *)(lVar3 + 0x1c);
      lVar4 = 0;
      __s10Foundation4UUIDVMa();
      lVar8 = *(long *)(lVar4 + -8);
      pcVar7 = *(code **)(lVar8 + 8);
      (*pcVar7)(lVar5 + iVar1,lVar4);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x20) + 8));
      _objc_release(*(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x24)));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x28) + 8));
      _objc_release(*(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x2c)));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x30) + 8));
      iVar1 = *(int *)(lVar3 + 0x34);
      lVar6 = lVar5 + iVar1;
      (**(code **)(lVar8 + 0x30))(lVar6,1,lVar4);
      if ((int)lVar6 == 0) {
        (*pcVar7)(lVar5 + iVar1,lVar4);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x38) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar3 + 0x3c) + 8));
    }
    _objc_release(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x1c)));
    lVar5 = param_1 + *(int *)(lVar2 + 0x24);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x28)));
    return;
  }
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 8))(param_1,lVar5);
  lVar6 = 0;
  func_0x000100b915bc();
  lVar5 = param_1 + *(int *)(lVar6 + 0x18);
  if (*(long *)(lVar5 + 0x10) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x38));
  }
  _objc_release(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x1c)));
  lVar5 = param_1 + *(int *)(lVar6 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x48));
  lVar5 = param_1 + *(int *)(lVar6 + 0x24);
  if (*(long *)(lVar5 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x18));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x28) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x30) + 8));
  return;
}



/* Entry: 1041a05f8; end: 1041a17db;  */

undefined8 * FUN_1041a05f8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar4 == 1) {
    uVar17 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar17;
    uVar17 = param_2[2];
    param_1[2] = uVar17;
    lVar5 = 0;
    func_0x000100b91790();
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
    lVar6 = 0;
    func_0x000100b918b4();
    lVar18 = *(long *)(lVar6 + -8);
    pcVar11 = *(code **)(lVar18 + 0x30);
    _swift_bridgeObjectRetain(uVar17);
    puVar7 = puVar1;
    (*pcVar11)(puVar1,1,lVar6);
    if ((int)puVar7 == 0) {
      uVar16 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar16;
      uVar17 = puVar1[2];
      uVar12 = puVar1[3];
      puVar4[2] = uVar17;
      puVar4[3] = uVar12;
      iVar3 = *(int *)(lVar6 + 0x1c);
      lVar8 = 0;
      __s10Foundation4UUIDVMa();
      lVar10 = *(long *)(lVar8 + -8);
      pcVar14 = *(code **)(lVar10 + 0x10);
      _swift_bridgeObjectRetain(uVar16);
      _objc_retain(uVar17);
      _objc_retain(uVar12);
      (*pcVar14)((long)puVar4 + (long)iVar3,(long)puVar1 + (long)iVar3,lVar8);
      puVar7 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x20));
      puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x20));
      uVar17 = puVar2[1];
      *puVar7 = *puVar2;
      puVar7[1] = uVar17;
      uVar12 = *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x24));
      *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x24)) = uVar12;
      puVar7 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x28));
      puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x28));
      uVar17 = puVar2[1];
      *puVar7 = *puVar2;
      puVar7[1] = uVar17;
      uVar19 = *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x2c));
      *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x2c)) = uVar19;
      puVar7 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x30));
      puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x30));
      uVar16 = puVar2[1];
      *puVar7 = *puVar2;
      puVar7[1] = uVar16;
      lVar15 = (long)*(int *)(lVar6 + 0x34);
      pcVar11 = *(code **)(lVar10 + 0x30);
      _swift_bridgeObjectRetain();
      _objc_retain(uVar12);
      _swift_bridgeObjectRetain(uVar17);
      _objc_retain(uVar19);
      _swift_bridgeObjectRetain(uVar16);
      lVar9 = (long)puVar1 + lVar15;
      (*pcVar11)(lVar9,1,lVar8);
      if ((int)lVar9 == 0) {
        (*pcVar14)((long)puVar4 + lVar15,(long)puVar1 + lVar15,lVar8);
        (**(code **)(lVar10 + 0x38))((long)puVar4 + lVar15,0,1,lVar8);
      }
      else {
        lVar9 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar4 + lVar15,(long)puVar1 + lVar15,
                *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x38));
      puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x38));
      uVar17 = puVar2[1];
      *puVar7 = *puVar2;
      puVar7[1] = uVar17;
      puVar7 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar6 + 0x3c));
      puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x3c));
      uVar17 = puVar1[1];
      *puVar7 = *puVar1;
      puVar7[1] = uVar17;
      pcVar11 = *(code **)(lVar18 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      (*pcVar11)(puVar4,0,1,lVar6);
    }
    else {
      lVar6 = 0x112dd42a0;
      func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
      _memcpy(puVar4,puVar1,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
    uVar17 = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[1] = uVar17;
    uVar16 = puVar1[3];
    puVar4[2] = puVar1[2];
    puVar4[3] = uVar16;
    uVar12 = puVar1[5];
    puVar4[4] = puVar1[4];
    puVar4[5] = uVar12;
    uVar19 = puVar1[6];
    puVar4[7] = puVar1[7];
    puVar4[6] = uVar19;
    uVar19 = puVar1[9];
    puVar4[8] = puVar1[8];
    puVar4[9] = uVar19;
    *(undefined1 *)(puVar4 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    uVar13 = puVar1[0xb];
    puVar4[10] = puVar1[10];
    puVar4[0xb] = uVar13;
    puVar4[0xd] = puVar1[0xd];
    uVar13 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28)) = uVar13;
    _objc_retain();
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar19);
    _objc_retain(uVar13);
    uVar17 = 1;
  }
  else {
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    lVar5 = 0;
    func_0x000100b915bc();
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x14));
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
    lVar6 = puVar1[2];
    if (lVar6 == 1) {
      uVar17 = puVar1[4];
      uVar12 = puVar1[7];
      uVar16 = puVar1[6];
      puVar4[5] = puVar1[5];
      puVar4[4] = uVar17;
      puVar4[7] = uVar12;
      puVar4[6] = uVar16;
      *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(puVar1 + 8);
      uVar12 = *puVar1;
      uVar16 = puVar1[3];
      uVar17 = puVar1[2];
      puVar4[1] = puVar1[1];
      *puVar4 = uVar12;
      puVar4[3] = uVar16;
      puVar4[2] = uVar17;
    }
    else {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar1;
      puVar4[1] = puVar1[1];
      puVar4[2] = lVar6;
      uVar17 = puVar1[3];
      puVar4[4] = puVar1[4];
      puVar4[3] = uVar17;
      uVar17 = puVar1[5];
      uVar16 = puVar1[6];
      puVar4[5] = uVar17;
      puVar4[6] = uVar16;
      uVar16 = puVar1[7];
      puVar4[7] = uVar16;
      *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(puVar1 + 8);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar16);
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x1c));
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
    uVar17 = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[1] = uVar17;
    uVar16 = puVar1[3];
    puVar4[2] = puVar1[2];
    puVar4[3] = uVar16;
    uVar12 = puVar1[5];
    puVar4[4] = puVar1[4];
    puVar4[5] = uVar12;
    uVar19 = puVar1[6];
    puVar4[7] = puVar1[7];
    puVar4[6] = uVar19;
    uVar19 = puVar1[9];
    puVar4[8] = puVar1[8];
    puVar4[9] = uVar19;
    *(undefined1 *)(puVar4 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    uVar13 = puVar1[0xb];
    puVar4[10] = puVar1[10];
    puVar4[0xb] = uVar13;
    puVar4[0xd] = puVar1[0xd];
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
    lVar6 = puVar1[1];
    _objc_retain();
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar19);
    if (lVar6 == 0) {
      uVar17 = *puVar1;
      uVar12 = puVar1[3];
      uVar16 = puVar1[2];
      puVar4[1] = puVar1[1];
      *puVar4 = uVar17;
      puVar4[3] = uVar12;
      puVar4[2] = uVar16;
    }
    else {
      *puVar4 = *puVar1;
      puVar4[1] = lVar6;
      uVar17 = puVar1[3];
      puVar4[2] = puVar1[2];
      puVar4[3] = uVar17;
      _swift_bridgeObjectRetain(lVar6);
      _swift_bridgeObjectRetain(uVar17);
    }
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
    uVar17 = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[1] = uVar17;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x2c));
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
    uVar17 = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[1] = uVar17;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x34));
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar17);
    uVar17 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar17);
  return param_1;
}



/* Entry: 1041a17dc; end: 1041a180b;  */

void FUN_1041a17dc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001041a17e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 1041a180c; end: 1041a1917;  */

undefined8 FUN_1041a180c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b91acc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041a1918; end: 1041a192b;  */

bool FUN_1041a1918(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1041a192c; end: 1041a1a03;  */

void FUN_1041a192c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041a1a04; end: 1041a1a23;  */

void FUN_1041a1a04(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1041a1a24; end: 1041a1a63;  */

void FUN_1041a1a24(void)

{
  undefined *puVar1;
  
  if (puRam00000001130678d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdf980;
  _swift_getWitnessTable(&UNK_10dcdf980,&UNK_11074eeb8);
  puRam00000001130678d8 = puVar1;
  return;
}



/* Entry: 1041a1a64; end: 1041a1a7b;  */

undefined1  [16] FUN_1041a1a64(void)

{
  return ZEXT816(0x11074eeb8);
}



/* Entry: 1041a1a7c; end: 1041a467b;  */

uint FUN_1041a1a7c(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puVar6;
  
  lVar4 = 0;
  func_0x000100b91acc();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = lVar7 - extraout_x8_00;
  lVar11 = 0x112dd42b0;
  func_0x0001000285a8(0x112dd42b0,&UNK_10d996f10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar10 - extraout_x8_01;
  uVar8 = param_1;
  __s10Foundation3URLV2eeoiySbAC_ACtFZ(param_1,param_2);
  if ((uVar8 & 1) != 0) {
    lVar5 = 0;
    func_0x000100b919a8();
    iVar2 = *(int *)(lVar5 + 0x14);
    lVar11 = (long)*(int *)(lVar11 + 0x30);
    func_0x00010191b8b4(param_1 + (long)iVar2,lVar9);
    func_0x00010191b8b4(param_2 + iVar2,lVar9 + lVar11);
    pcVar13 = *(code **)(lVar12 + 0x30);
    lVar12 = lVar9;
    (*pcVar13)(lVar9,1,lVar4);
    if ((int)lVar12 == 1) {
      lVar11 = lVar9 + lVar11;
      (*pcVar13)(lVar11,1,lVar4);
      if ((int)lVar11 == 1) {
        FUN_1041a4694(lVar9,0x112d3b128,&UNK_10d996bb0);
LAB_1041a1c98:
        uVar8 = *(ulong *)(param_1 + (long)*(int *)(lVar5 + 0x18));
        lVar11 = *(long *)(param_2 + *(int *)(lVar5 + 0x18));
        if (uVar8 == 0) {
          if (lVar11 == 0) {
LAB_1041a1cfc:
            puVar6 = (undefined8 *)(param_1 + (long)*(int *)(lVar5 + 0x1c));
            puVar1 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x1c));
            uStack_108 = puVar6[9];
            uStack_110 = puVar6[8];
            uStack_f8 = puVar6[0xb];
            uStack_100 = puVar6[10];
            uStack_e8 = puVar6[0xd];
            uStack_f0 = puVar6[0xc];
            uStack_148 = puVar6[1];
            uStack_150 = *puVar6;
            uStack_138 = puVar6[3];
            uStack_140 = puVar6[2];
            uStack_128 = puVar6[5];
            uStack_130 = puVar6[4];
            uStack_118 = puVar6[7];
            uStack_120 = puVar6[6];
            uStack_d8 = puVar1[1];
            uStack_e0 = *puVar1;
            uStack_c8 = puVar1[3];
            uStack_d0 = puVar1[2];
            uStack_b8 = puVar1[5];
            uStack_c0 = puVar1[4];
            uStack_a8 = puVar1[7];
            uStack_b0 = puVar1[6];
            uStack_88 = puVar1[0xb];
            uStack_90 = puVar1[10];
            uStack_78 = puVar1[0xd];
            uStack_80 = puVar1[0xc];
            uStack_98 = puVar1[9];
            uStack_a0 = puVar1[8];
            puVar6 = &uStack_150;
            FUN_104191074(puVar6,&uStack_e0);
            uVar3 = (uint)puVar6;
            goto LAB_1041a1c2c;
          }
        }
        else if (lVar11 != 0) {
          FUN_1041a4f40(0);
          _objc_retain(lVar11);
          _objc_retain();
          uVar10 = uVar8;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar8);
          _objc_release(lVar11);
          if ((uVar10 & 1) != 0) goto LAB_1041a1cfc;
        }
      }
      else {
LAB_1041a1c10:
        FUN_1041a4694(lVar9,0x112dd42b0,&UNK_10d996f10);
      }
    }
    else {
      func_0x00010191b8b4(lVar9,uVar10);
      lVar12 = lVar9 + lVar11;
      (*pcVar13)(lVar12,1,lVar4);
      if ((int)lVar12 == 1) {
        func_0x00010308b534(uVar10);
        goto LAB_1041a1c10;
      }
      func_0x0001041a46d4(lVar9 + lVar11,lVar7);
      uVar8 = uVar10;
      FUN_10419fb78(uVar10,lVar7);
      func_0x00010308b534(lVar7);
      func_0x00010308b534(uVar10);
      FUN_1041a4694(lVar9,0x112d3b128,&UNK_10d996bb0);
      if ((uVar8 & 1) != 0) goto LAB_1041a1c98;
    }
  }
  uVar3 = 0;
LAB_1041a1c2c:
  return uVar3 & 1;
}



/* Entry: 1041a467c; end: 1041a4693;  */

void FUN_1041a467c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041a4694; end: 1041a4717;  */

undefined8 FUN_1041a4694(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1041a4718; end: 1041a4733; -[SCAdDeepLinkAttachmentCallbacks fallbackToAttachmentHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a4718(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067978);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1041a4fd4;
  puStack_48 = &UNK_11074f138;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1041a4734; end: 1041a474f; -[SCAdDeepLinkAttachmentCallbacks interceptionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a4734(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067980);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1041a47cc;
  puStack_48 = &UNK_11074f110;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1041a4750; end: 1041a4813;  */

void FUN_1041a4750(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + *param_3);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = param_4;
  uStack_48 = param_5;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1041a4814; end: 1041a482f; -[SCAdDeepLinkAttachmentCallbacks attemptHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a4814(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067988);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f3aa0;
  puStack_48 = &UNK_11074f0e8;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



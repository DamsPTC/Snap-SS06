/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fbf23c; end: 103fbf297;  */

undefined8 * FUN_103fbf23c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 103fbf298; end: 103fbf2db;  */

undefined8 * FUN_103fbf298(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 103fbf2dc; end: 103fbf377;  */

int FUN_103fbf2dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103fbf378; end: 103fbf3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbf378(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303e9d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbf3fc; end: 103fbf45b; -[_TtC30MemoriesNetworkingUtilitiesAPI35MemoriesNetworkingUtilitiesServices init] */

void FUN_103fbf3fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesNetworkingUtilitiesAPI.MemoriesNetworkingUtilitiesServices",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbf428);
  (*pcVar1)();
}



/* Entry: 103fbf45c; end: 103fbf46b;  */

undefined1  [16] FUN_103fbf45c(void)

{
  return ZEXT816(0x11072c710);
}



/* Entry: 103fbf46c; end: 103fbf48f; -[_TtC30MemoriesNetworkingUtilitiesAPI35MemoriesNetworkingUtilitiesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbf46c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303e9d0));
  return;
}



/* Entry: 103fbf490; end: 103fbf53b;  */

void FUN_103fbf490(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbf53c; end: 103fbf53f;  */

void FUN_103fbf53c(void)

{
  undefined *puVar1;
  
  if (puRam000000011303ea00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7b50;
  _swift_getWitnessTable(&UNK_10dcb7b50,&UNK_11072c7d8);
  puRam000000011303ea00 = puVar1;
  return;
}



/* Entry: 103fbf540; end: 103fbf57f;  */

void FUN_103fbf540(void)

{
  undefined *puVar1;
  
  if (puRam000000011303ea00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7b50;
  _swift_getWitnessTable(&UNK_10dcb7b50,&UNK_11072c7d8);
  puRam000000011303ea00 = puVar1;
  return;
}



/* Entry: 103fbf580; end: 103fbf6f3;  */

void FUN_103fbf580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103fbf6f4; end: 103fbf78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbf6f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303ea08) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbf78c; end: 103fbf7eb; -[_TtC54MemoriesOpportunisticRetranscodeBitrateHelpingServices54MemoriesOpportunisticRetranscodeBitrateHelpingServices init] */

void FUN_103fbf78c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesOpportunisticRetranscodeBitrateHelpingServices.MemoriesOpportunisticRetranscodeBitrateHelpingServices"
             ,0x6d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbf7b8);
  (*pcVar1)();
}



/* Entry: 103fbf7ec; end: 103fbf7fb; -[_TtC54MemoriesOpportunisticRetranscodeBitrateHelpingServices54MemoriesOpportunisticRetranscodeBitrateHelpingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbf7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303ea08));
  return;
}



/* Entry: 103fbf7fc; end: 103fbf847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbf7fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303ea38) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbf848; end: 103fbf8a3; -[_TtC30SCMemoriesUserDefaultsServices30SCMemoriesUserDefaultsServices init] */

void FUN_103fbf848(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMemoriesUserDefaultsServices.SCMemoriesUserDefaultsServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbf874);
  (*pcVar1)();
}



/* Entry: 103fbf8a4; end: 103fbf8c7; -[_TtC30SCMemoriesUserDefaultsServices30SCMemoriesUserDefaultsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbf8a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303ea38));
  return;
}



/* Entry: 103fbf8c8; end: 103fbf973;  */

void FUN_103fbf8c8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fbf974; end: 103fbf977;  */

void FUN_103fbf974(void)

{
  undefined *puVar1;
  
  if (puRam000000011303ea68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7cf0;
  _swift_getWitnessTable(&UNK_10dcb7cf0,&UNK_11072c980);
  puRam000000011303ea68 = puVar1;
  return;
}



/* Entry: 103fbf978; end: 103fbf9b7;  */

void FUN_103fbf978(void)

{
  undefined *puVar1;
  
  if (puRam000000011303ea68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7cf0;
  _swift_getWitnessTable(&UNK_10dcb7cf0,&UNK_11072c980);
  puRam000000011303ea68 = puVar1;
  return;
}



/* Entry: 103fbf9b8; end: 103fbfb3f;  */

void FUN_103fbf9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103fbfb40; end: 103fbfb8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbfb40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303ea70) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbfb8c; end: 103fbfbc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbfb8c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11303ea70) = param_1;
  func_0x0001001c7b48();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fbfbc8; end: 103fbfc23; -[_TtC38SCMemoriesSnapDocSerializationServices36MemoriesSnapDocSerializationServices init] */

void FUN_103fbfbc8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMemoriesSnapDocSerializationServices.MemoriesSnapDocSerializationServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fbfbf4);
  (*pcVar1)();
}



/* Entry: 103fbfc24; end: 103fbfc43; -[_TtC38SCMemoriesSnapDocSerializationServices36MemoriesSnapDocSerializationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fbfc24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303ea70));
  return;
}



/* Entry: 103fbfc44; end: 103fc0073;  */

undefined1  [16] FUN_103fbfc44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  char *pcVar16;
  long *unaff_x20;
  undefined1 auVar17 [16];
  undefined8 uStack_98;
  ulong uStack_90;
  
  lVar1 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar7 = unaff_x20[3];
  lVar3 = unaff_x20[4];
  lVar8 = unaff_x20[5];
  lVar4 = unaff_x20[6];
  lVar9 = unaff_x20[7];
  lVar15 = unaff_x20[8];
  bVar11 = *(byte *)(unaff_x20 + 0xb);
  if (bVar11 < 4) {
    if (bVar11 < 2) {
      if (bVar11 == 0) {
        __ss11_StringGutsV4growyySiF(0x14);
        _swift_bridgeObjectRelease(0xe000000000000000);
        uStack_90 = 0x800000010f1d86e0;
        uStack_98 = 0xd000000000000011;
      }
      else {
        __ss11_StringGutsV4growyySiF(0x1b);
        _swift_bridgeObjectRelease(0xe000000000000000);
        uStack_90 = 0x800000010f1d86a0;
        uStack_98 = 0xd000000000000018;
      }
    }
    else if (bVar11 == 2) {
      __ss11_StringGutsV4growyySiF(0x1f);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_90 = 0x800000010f1d8640;
      uStack_98 = 0xd00000000000001c;
    }
    else {
      __ss11_StringGutsV4growyySiF(0x28);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_90 = 0x800000010f1d8610;
      uStack_98 = 0xd000000000000025;
    }
  }
  else if (bVar11 < 6) {
    if (bVar11 == 4) {
      __ss11_StringGutsV4growyySiF(0x29);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_90 = 0x800000010f1d85e0;
      uStack_98 = 0xd000000000000026;
    }
    else {
      __ss11_StringGutsV4growyySiF(0x13);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_90 = 0x800000010f1d85a0;
      uStack_98 = 0xd000000000000010;
    }
  }
  else {
    lVar5 = unaff_x20[9];
    lVar10 = unaff_x20[10];
    if (bVar11 != 6) {
      uStack_98 = 0xd00000000000001a;
      if ((((lVar6 == 0 && lVar1 == 0) && (lVar2 == 0 && lVar7 == 0)) &&
          ((lVar3 == 0 && lVar8 == 0) && lVar4 == 0)) &&
          (((lVar9 == 0 && lVar15 == 0) && lVar5 == 0) && lVar10 == 0)) {
        uStack_90 = 0x800000010f1d86c0;
        uStack_98 = 0xd00000000000001f;
      }
      else if ((lVar1 == 1) &&
              ((((lVar2 == 0 && lVar6 == 0) && (lVar7 == 0 && lVar3 == 0)) &&
               ((lVar8 == 0 && lVar4 == 0) && lVar9 == 0)) &&
               ((lVar15 == 0 && lVar5 == 0) && lVar10 == 0))) {
        uStack_90 = 0x800000010f1d8680;
        uStack_98 = 0xd00000000000001b;
      }
      else {
        if ((lVar1 == 2) &&
           ((((lVar2 == 0 && lVar6 == 0) && (lVar7 == 0 && lVar3 == 0)) &&
            ((lVar8 == 0 && lVar4 == 0) && lVar9 == 0)) &&
            ((lVar15 == 0 && lVar5 == 0) && lVar10 == 0))) {
          pcVar16 = "snapEditorValidationFailed";
        }
        else {
          pcVar16 = "missingResultFromValidator";
        }
        uStack_90 = (ulong)(pcVar16 + -0x20) | 0x8000000000000000;
      }
      goto LAB_103fbff9c;
    }
    __ss11_StringGutsV4growyySiF(0x23);
    _swift_bridgeObjectRelease(0xe000000000000000);
    puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar12 = PTR___sSiN_11034deb0;
    uStack_98 = 0xd000000000000012;
    uStack_90 = 0x800000010f1d8580;
    puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x3d74696d696c202c,0xe800000000000000);
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar12,puVar14);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar14);
    param_2 = 0xe200000000000000;
    __sSS6appendyySSF(0x202c,0xe200000000000000);
  }
  FUN_103fc069c();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
LAB_103fbff9c:
  auVar17._8_8_ = uStack_90;
  auVar17._0_8_ = uStack_98;
  return auVar17;
}



/* Entry: 103fc0074; end: 103fc0077;  */

undefined1  [16] FUN_103fc0074(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  char *pcVar16;
  long *unaff_x20;
  undefined1 auVar17 [16];
  undefined8 uStack_98;
  ulong uStack_90;
  
  lVar1 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar2 = unaff_x20[2];
  lVar7 = unaff_x20[3];
  lVar3 = unaff_x20[4];
  lVar8 = unaff_x20[5];
  lVar4 = unaff_x20[6];
  lVar9 = unaff_x20[7];
  lVar15 = unaff_x20[8];
  bVar11 = *(byte *)(unaff_x20 + 0xb);
  if (bVar11 < 4) {
    if (bVar11 < 2) {
      if (bVar11 == 0) {
        __ss11_StringGutsV4growyySiF(0x14);
        _swift_bridgeObjectRelease(0xe000000000000000);
        uStack_90 = 0x800000010f1d86e0;
        uStack_98 = 0xd000000000000011;
      }
      else {
        __ss11_StringGutsV4growyySiF(0x1b);
        _swift_bridgeObjectRelease(0xe000000000000000);
        uStack_90 = 0x800000010f1d86a0;
        uStack_98 = 0xd000000000000018;
      }
    }
    else if (bVar11 == 2) {
      __ss11_StringGutsV4growyySiF(0x1f);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_90 = 0x800000010f1d8640;
      uStack_98 = 0xd00000000000001c;
    }
    else {
      __ss11_StringGutsV4growyySiF(0x28);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_90 = 0x800000010f1d8610;
      uStack_98 = 0xd000000000000025;
    }
  }
  else if (bVar11 < 6) {
    if (bVar11 == 4) {
      __ss11_StringGutsV4growyySiF(0x29);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_90 = 0x800000010f1d85e0;
      uStack_98 = 0xd000000000000026;
    }
    else {
      __ss11_StringGutsV4growyySiF(0x13);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_90 = 0x800000010f1d85a0;
      uStack_98 = 0xd000000000000010;
    }
  }
  else {
    lVar5 = unaff_x20[9];
    lVar10 = unaff_x20[10];
    if (bVar11 != 6) {
      uStack_98 = 0xd00000000000001a;
      if ((((lVar6 == 0 && lVar1 == 0) && (lVar2 == 0 && lVar7 == 0)) &&
          ((lVar3 == 0 && lVar8 == 0) && lVar4 == 0)) &&
          (((lVar9 == 0 && lVar15 == 0) && lVar5 == 0) && lVar10 == 0)) {
        uStack_90 = 0x800000010f1d86c0;
        uStack_98 = 0xd00000000000001f;
      }
      else if ((lVar1 == 1) &&
              ((((lVar2 == 0 && lVar6 == 0) && (lVar7 == 0 && lVar3 == 0)) &&
               ((lVar8 == 0 && lVar4 == 0) && lVar9 == 0)) &&
               ((lVar15 == 0 && lVar5 == 0) && lVar10 == 0))) {
        uStack_90 = 0x800000010f1d8680;
        uStack_98 = 0xd00000000000001b;
      }
      else {
        if ((lVar1 == 2) &&
           ((((lVar2 == 0 && lVar6 == 0) && (lVar7 == 0 && lVar3 == 0)) &&
            ((lVar8 == 0 && lVar4 == 0) && lVar9 == 0)) &&
            ((lVar15 == 0 && lVar5 == 0) && lVar10 == 0))) {
          pcVar16 = "snapEditorValidationFailed";
        }
        else {
          pcVar16 = "missingResultFromValidator";
        }
        uStack_90 = (ulong)(pcVar16 + -0x20) | 0x8000000000000000;
      }
      goto LAB_103fbff9c;
    }
    __ss11_StringGutsV4growyySiF(0x23);
    _swift_bridgeObjectRelease(0xe000000000000000);
    puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar12 = PTR___sSiN_11034deb0;
    uStack_98 = 0xd000000000000012;
    uStack_90 = 0x800000010f1d8580;
    puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x3d74696d696c202c,0xe800000000000000);
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar12,puVar14);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar14);
    param_2 = 0xe200000000000000;
    __sSS6appendyySSF(0x202c,0xe200000000000000);
  }
  FUN_103fc069c();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
LAB_103fbff9c:
  auVar17._8_8_ = uStack_90;
  auVar17._0_8_ = uStack_98;
  return auVar17;
}



/* Entry: 103fc0078; end: 103fc00a3;  */

long FUN_103fc0078(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fc00a4; end: 103fc01b3;  */

long FUN_103fc00a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,
                  long param_11,byte param_12)

{
  if (param_12 < 3) {
    if (((param_12 != 0) && (param_12 != 1)) && (param_12 != 2)) {
      return param_1;
    }
  }
  else if (param_12 < 5) {
    if ((param_12 != 3) && (param_12 != 4)) {
      return param_1;
    }
  }
  else if (param_12 != 5) {
    if (param_12 != 6) {
      return param_1;
    }
    _objc_retain(param_3);
    _swift_errorRetain(param_4);
    _swift_bridgeObjectRetain(param_6);
    param_5 = param_7;
    param_6 = param_8;
    param_7 = param_9;
    param_8 = param_10;
    param_9 = param_11;
    goto LAB_103fc0184;
  }
  _objc_retain();
  _swift_errorRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
LAB_103fc0184:
  if (param_6 != 0) {
    _swift_bridgeObjectRetain(param_6,param_6,param_7,param_8,param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_8);
    return param_8;
  }
  return param_5;
}



/* Entry: 103fc01b4; end: 103fc01e3;  */

void FUN_103fc01b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
    return;
  }
  return;
}



/* Entry: 103fc01e4; end: 103fc022b;  */

void FUN_103fc01e4(undefined8 *param_1)

{
  FUN_103fc022c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],*(undefined1 *)(param_1 + 0xb));
  return;
}



/* Entry: 103fc022c; end: 103fc033b;  */

long FUN_103fc022c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,
                  long param_11,byte param_12)

{
  if (param_12 < 3) {
    if (((param_12 != 0) && (param_12 != 1)) && (param_12 != 2)) {
      return param_1;
    }
  }
  else if (param_12 < 5) {
    if ((param_12 != 3) && (param_12 != 4)) {
      return param_1;
    }
  }
  else if (param_12 != 5) {
    if (param_12 != 6) {
      return param_1;
    }
    _objc_release(param_3);
    _swift_errorRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    param_5 = param_7;
    param_6 = param_8;
    param_7 = param_9;
    param_8 = param_10;
    param_9 = param_11;
    goto LAB_103fc030c;
  }
  _objc_release();
  _swift_errorRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
LAB_103fc030c:
  if (param_6 != 0) {
    _swift_bridgeObjectRelease(param_6,param_6,param_7,param_8,param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_8);
    return param_8;
  }
  return param_5;
}



/* Entry: 103fc033c; end: 103fc036b;  */

void FUN_103fc033c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
    return;
  }
  return;
}



/* Entry: 103fc036c; end: 103fc0517;  */

undefined8 * FUN_103fc036c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  uVar12 = param_2[10];
  uVar11 = *(undefined1 *)(param_2 + 0xb);
  FUN_103fc00a4(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar12,uVar11);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  param_1[10] = uVar12;
  *(undefined1 *)(param_1 + 0xb) = uVar11;
  return param_1;
}



/* Entry: 103fc0518; end: 103fc059b;  */

undefined8 * FUN_103fc0518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar11 = param_2[10];
  uVar7 = *(undefined1 *)(param_2 + 0xb);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar12 = param_1[10];
  uVar8 = *(undefined1 *)(param_1 + 0xb);
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[10] = uVar11;
  *(undefined1 *)(param_1 + 0xb) = uVar7;
  FUN_103fc022c(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar13,uVar14,uVar12,uVar8);
  return param_1;
}



/* Entry: 103fc059c; end: 103fc069b;  */

int FUN_103fc059c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf8 < param_2) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return *param_1 + 0xf9;
  }
  uVar1 = *(byte *)(param_1 + 0x16) ^ 0xff;
  if (*(byte *)(param_1 + 0x16) < 8) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103fc069c; end: 103fc0b87;  */

undefined1  [16] FUN_103fc069c(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  lVar12 = 0x6c696e;
  uVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_allocObject();
  *(undefined8 *)(uVar2 + 0x18) = 4;
  *(undefined8 *)(uVar2 + 0x10) = 2;
  lVar3 = unaff_x20[3];
  if (lVar3 == 0) {
    lVar3 = -0x1d00000000000000;
    lVar14 = 0x6c696e;
  }
  else {
    lVar14 = unaff_x20[2];
  }
  _swift_bridgeObjectRetain();
  lVar13 = lVar3;
  __sSS6appendyySSF(lVar14,lVar3);
  _swift_bridgeObjectRelease(lVar3);
  *(undefined8 *)(uVar2 + 0x20) = 0x3d65736143657375;
  *(undefined8 *)(uVar2 + 0x28) = 0xe800000000000000;
  if (unaff_x20[5] == 0) {
    lVar13 = -0x1d00000000000000;
  }
  else {
    FUN_103fc11f4();
    lVar12 = lVar3;
  }
  lVar3 = lVar13;
  __sSS6appendyySSF(lVar12,lVar13);
  _swift_bridgeObjectRelease(lVar13);
  *(undefined8 *)(uVar2 + 0x30) = 0x3d656372756f73;
  *(undefined8 *)(uVar2 + 0x38) = 0xe700000000000000;
  lVar12 = unaff_x20[1];
  uVar8 = uVar2;
  if (lVar12 == 0) {
    uVar7 = *(ulong *)(uVar2 + 0x10);
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar7) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001000d182c(uVar8,uVar7 + 1,1,uVar2);
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
    lVar12 = uVar8 + uVar7 * 0x10;
    *(undefined8 *)(lVar12 + 0x20) = 0x69796c7265646e75;
    *(undefined8 *)(lVar12 + 0x28) = 0xee006c696e3d676e;
  }
  else {
    _swift_errorRetain(lVar12);
    lVar14 = lVar12;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    __ss11_StringGutsV4growyySiF(0x14);
    _swift_bridgeObjectRelease(0xe000000000000000);
    lVar13 = lVar14;
    func_0x00010bf87dc0(lVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar13);
    __sSS6appendyySSF(lVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    __sSS6appendyySSF(0x23,0xe100000000000000);
    func_0x00010bf3ec40();
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    uVar10 = 0xe200000000000000;
    __sSS6appendyySSF(0x203a,0xe200000000000000);
    lVar3 = lVar14;
    func_0x000107c4b85c(lVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
    __sSS6appendyySSF(lVar13,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    uVar7 = *(ulong *)(uVar2 + 0x10);
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar7) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001000d182c(uVar8,uVar7 + 1,1,uVar2);
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
    lVar3 = uVar8 + uVar7 * 0x10;
    *(undefined8 *)(lVar3 + 0x20) = 0x69796c7265646e75;
    *(undefined8 *)(lVar3 + 0x28) = 0xeb000000003d676e;
    _swift_errorRelease(lVar12);
    _objc_release(lVar14);
  }
  __ss11_StringGutsV4growyySiF(0x29);
  _swift_bridgeObjectRelease(0xe000000000000000);
  lVar3 = *unaff_x20;
  lVar12 = lVar3;
  func_0x000107c4ca10();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc0b80);
    (*pcVar1)();
  }
  func_0x00010bf529e0();
  _objc_release(lVar12);
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0xd000000000000011,0x800000010f011db0);
  func_0x000107c4e8d8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc0b84);
    (*pcVar1)();
  }
  lVar12 = lVar3;
  func_0x000107c4e928();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar12 != 0) {
    func_0x00010bf529e0();
    _objc_release(lVar12);
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    __sSS6appendyySSF(0x5d,0xe100000000000000);
    uVar2 = *(ulong *)(uVar8 + 0x10);
    uVar7 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      func_0x0001000d182c(uVar7,uVar2 + 1,1,uVar8);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    lVar12 = uVar7 + uVar2 * 0x10;
    *(undefined8 *)(lVar12 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar12 + 0x28) = 0x800000010f1d8700;
    uVar10 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar5 = uVar10;
    func_0x00010011d734();
    uVar6 = 0x202c;
    uVar11 = 0xe200000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,uVar10,uVar5);
    _swift_bridgeObjectRelease(uVar7);
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = uVar6;
    return auVar15;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc0b88);
  (*pcVar1)();
}



/* Entry: 103fc0b88; end: 103fc0b8b;  */

undefined1  [16] FUN_103fc0b88(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  lVar12 = 0x6c696e;
  uVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_allocObject();
  *(undefined8 *)(uVar2 + 0x18) = 4;
  *(undefined8 *)(uVar2 + 0x10) = 2;
  lVar3 = unaff_x20[3];
  if (lVar3 == 0) {
    lVar3 = -0x1d00000000000000;
    lVar14 = 0x6c696e;
  }
  else {
    lVar14 = unaff_x20[2];
  }
  _swift_bridgeObjectRetain();
  lVar13 = lVar3;
  __sSS6appendyySSF(lVar14,lVar3);
  _swift_bridgeObjectRelease(lVar3);
  *(undefined8 *)(uVar2 + 0x20) = 0x3d65736143657375;
  *(undefined8 *)(uVar2 + 0x28) = 0xe800000000000000;
  if (unaff_x20[5] == 0) {
    lVar13 = -0x1d00000000000000;
  }
  else {
    FUN_103fc11f4();
    lVar12 = lVar3;
  }
  lVar3 = lVar13;
  __sSS6appendyySSF(lVar12,lVar13);
  _swift_bridgeObjectRelease(lVar13);
  *(undefined8 *)(uVar2 + 0x30) = 0x3d656372756f73;
  *(undefined8 *)(uVar2 + 0x38) = 0xe700000000000000;
  lVar12 = unaff_x20[1];
  uVar8 = uVar2;
  if (lVar12 == 0) {
    uVar7 = *(ulong *)(uVar2 + 0x10);
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar7) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001000d182c(uVar8,uVar7 + 1,1,uVar2);
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
    lVar12 = uVar8 + uVar7 * 0x10;
    *(undefined8 *)(lVar12 + 0x20) = 0x69796c7265646e75;
    *(undefined8 *)(lVar12 + 0x28) = 0xee006c696e3d676e;
  }
  else {
    _swift_errorRetain(lVar12);
    lVar14 = lVar12;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
    __ss11_StringGutsV4growyySiF(0x14);
    _swift_bridgeObjectRelease(0xe000000000000000);
    lVar13 = lVar14;
    func_0x00010bf87dc0(lVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar13);
    __sSS6appendyySSF(lVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    __sSS6appendyySSF(0x23,0xe100000000000000);
    func_0x00010bf3ec40();
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    uVar10 = 0xe200000000000000;
    __sSS6appendyySSF(0x203a,0xe200000000000000);
    lVar3 = lVar14;
    func_0x000107c4b85c(lVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
    __sSS6appendyySSF(lVar13,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    uVar7 = *(ulong *)(uVar2 + 0x10);
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar7) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x0001000d182c(uVar8,uVar7 + 1,1,uVar2);
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
    lVar3 = uVar8 + uVar7 * 0x10;
    *(undefined8 *)(lVar3 + 0x20) = 0x69796c7265646e75;
    *(undefined8 *)(lVar3 + 0x28) = 0xeb000000003d676e;
    _swift_errorRelease(lVar12);
    _objc_release(lVar14);
  }
  __ss11_StringGutsV4growyySiF(0x29);
  _swift_bridgeObjectRelease(0xe000000000000000);
  lVar3 = *unaff_x20;
  lVar12 = lVar3;
  func_0x000107c4ca10();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc0b80);
    (*pcVar1)();
  }
  func_0x00010bf529e0();
  _objc_release(lVar12);
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0xd000000000000011,0x800000010f011db0);
  func_0x000107c4e8d8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc0b84);
    (*pcVar1)();
  }
  lVar12 = lVar3;
  func_0x000107c4e928();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar12 != 0) {
    func_0x00010bf529e0();
    _objc_release(lVar12);
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    __sSS6appendyySSF(0x5d,0xe100000000000000);
    uVar2 = *(ulong *)(uVar8 + 0x10);
    uVar7 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      func_0x0001000d182c(uVar7,uVar2 + 1,1,uVar8);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    lVar12 = uVar7 + uVar2 * 0x10;
    *(undefined8 *)(lVar12 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar12 + 0x28) = 0x800000010f1d8700;
    uVar10 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar5 = uVar10;
    func_0x00010011d734();
    uVar6 = 0x202c;
    uVar11 = 0xe200000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,uVar10,uVar5);
    _swift_bridgeObjectRelease(uVar7);
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = uVar6;
    return auVar15;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc0b88);
  (*pcVar1)();
}



/* Entry: 103fc0b8c; end: 103fc0c07;  */

long FUN_103fc0b8c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fc0c08; end: 103fc0ddb;  */

undefined8 * FUN_103fc0c08(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  _objc_retain();
  _swift_errorRetain(uVar3);
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  lVar1 = param_2[5];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    param_1[8] = param_2[8];
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    uVar2 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar2;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar2);
  }
  return param_1;
}



/* Entry: 103fc0ddc; end: 103fc0eb3;  */

undefined8 FUN_103fc0ddc(undefined8 param_1)

{
  (*(code *)(undefined *)0x103fc12f4)();
  return param_1;
}



/* Entry: 103fc0eb4; end: 103fc0f5b;  */

int FUN_103fc0eb4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103fc0f5c; end: 103fc0f6b; -[MemoriesSnapDocValidationServices validator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc0f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303eaa8));
  return;
}



/* Entry: 103fc0f6c; end: 103fc1033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fc0f6c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303eaa0) = param_1;
  _swift_retain(param_1);
  uVar1 = 0x11303eab0;
  func_0x0001000285a8(0x11303eab0,&UNK_10dcb7f80);
  pcVar2 = FUN_103fc1034;
  func_0x0001000cb480(FUN_103fc1034,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  _swift_release(pcVar2);
  *(code **)(unaff_x20 + _DAT_11303eaa8) = pcVar3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar4;
}



/* Entry: 103fc1034; end: 103fc103f;  */

void FUN_103fc1034(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103fc1040; end: 103fc109f; -[MemoriesSnapDocValidationServices init] */

void FUN_103fc1040(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesSnapDocValidationServicesAPI.MemoriesSnapDocValidationServices",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc106c);
  (*pcVar1)();
}



/* Entry: 103fc10a0; end: 103fc10d7; -[MemoriesSnapDocValidationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc10a0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303eaa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303eaa8));
  return;
}



/* Entry: 103fc10d8; end: 103fc117b;  */

void FUN_103fc10d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  piVar3 = *(int **)(param_6 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103fc117c;
                    /* WARNING: Could not recover jumptable at 0x000103fc1178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_5,param_6);
  return;
}



/* Entry: 103fc117c; end: 103fc11f3;  */

void FUN_103fc117c(void)

{
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    puVar2 = *(undefined8 **)(lVar4 + 0x70);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    uVar1 = *(undefined1 *)(lVar4 + 0x68);
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar10 = *(undefined8 *)(lVar4 + 0x38);
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    uVar12 = *(undefined8 *)(lVar4 + 0x48);
    uVar11 = *(undefined8 *)(lVar4 + 0x40);
    uVar14 = *(undefined8 *)(lVar4 + 0x58);
    uVar13 = *(undefined8 *)(lVar4 + 0x50);
    puVar2[1] = *(undefined8 *)(lVar4 + 0x18);
    *puVar2 = uVar6;
    puVar2[3] = uVar8;
    puVar2[2] = uVar7;
    puVar2[5] = uVar10;
    puVar2[4] = uVar9;
    puVar2[7] = uVar12;
    puVar2[6] = uVar11;
    puVar2[9] = uVar14;
    puVar2[8] = uVar13;
    puVar2[10] = uVar3;
    *(undefined1 *)(puVar2 + 0xb) = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103fc11f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103fc11f4; end: 103fc12c3;  */

undefined1  [16] FUN_103fc11f4(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar3 = uVar2;
  func_0x000107c4aa34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar3);
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(unaff_x20[2],unaff_x20[3]);
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Entry: 103fc12c4; end: 103fc12c7;  */

undefined1  [16] FUN_103fc12c4(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar3 = uVar2;
  func_0x000107c4aa34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar3);
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(unaff_x20[2],unaff_x20[3]);
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Entry: 103fc12c8; end: 103fc135f;  */

long FUN_103fc12c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fc1360; end: 103fc13d3;  */

undefined8 * FUN_103fc1360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 103fc13d4; end: 103fc141f;  */

undefined8 * FUN_103fc13d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 103fc1420; end: 103fc14cf;  */

int FUN_103fc1420(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103fc14d0; end: 103fc159f;  */

undefined1  [16] FUN_103fc14d0(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    return ZEXT816(0) << 0x40;
  }
  if (param_1 == 1) {
    auVar3._8_8_ = 0x800000010f1d8770;
    auVar3._0_8_ = 0xd000000000000026;
    return auVar3;
  }
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x18);
  __sSS6appendyySSF(0xd000000000000016,0x800000010f1d87a0);
  uVar2 = 0x112d393f0;
  lStack_38 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&lStack_38,&uStack_30,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 103fc15a0; end: 103fc15cf;  */

void FUN_103fc15a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb8068;
  func_0x000107c61520(&UNK_10dcb8068,&UNK_11072cd20);
  puRam0000000112d51638 = puVar1;
  return;
}



/* Entry: 103fc15d0; end: 103fc16bf;  */

ulong * FUN_103fc15d0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      _swift_errorRetain(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    _swift_errorRelease();
    *param_1 = *param_2;
  }
  else {
    _swift_errorRetain(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    _swift_errorRelease(uVar1);
  }
  return param_1;
}



/* Entry: 103fc16c0; end: 103fc17c3;  */

int FUN_103fc16c0(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 103fc17c4; end: 103fc185b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc17c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303eae0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fc185c; end: 103fc18bb; -[SnapDocMediaClaimingServices init] */

void FUN_103fc185c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapDocMediaClaimingServicesAPI.SnapDocMediaClaimingServices",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc1888);
  (*pcVar1)();
}



/* Entry: 103fc18bc; end: 103fc18cb; -[SnapDocMediaClaimingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc18bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11303eae0));
  return;
}



/* Entry: 103fc18cc; end: 103fc1b2f;  */

char * FUN_103fc18cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  uVar4 = uVar1 >> 0x1c;
  if (4 < uVar1 >> 0x1c) {
    pcVar2 = "MemoriesFeaturedStoryLiveRendering";
    if (uVar4 != 8) {
      pcVar2 = "MemTwoSendTo";
    }
    pcVar3 = "MemoriesMashupSnapDocFactory";
    if (uVar4 != 7) {
      pcVar3 = pcVar2;
    }
    pcVar2 = "QuickCut";
    if (uVar4 != 5) {
      pcVar2 = "MemoriesSnapDocProvider";
    }
    if (uVar1 >> 0x1c < 7) {
      pcVar3 = pcVar2;
    }
    return pcVar3;
  }
  pcVar2 = "MemoriesValdiSnapDocTranscoder";
  if (uVar1 >> 0x1c != 3) {
    pcVar2 = "MemoriesValidSnapDocClaimer";
  }
  pcVar3 = "SnapDocCameraRollSaver";
  if (1 < uVar4 - 1) {
    pcVar3 = "SnapDocMemoriesSaveProxy";
  }
  if (uVar4 < 3) {
    pcVar2 = pcVar3;
  }
  return pcVar2;
}



/* Entry: 103fc1b30; end: 103fc1b77;  */

void FUN_103fc1b30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb81c8;
  func_0x000107c61520(&UNK_10dcb81c8,&UNK_11072cfa8);
  puRam0000000112d51700 = puVar1;
  return;
}



/* Entry: 103fc1b78; end: 103fc1bb3;  */

undefined8 * FUN_103fc1b78(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000101a69898(uVar3,uVar2);
  return param_1;
}



/* Entry: 103fc1bb4; end: 103fc1cf7;  */

int FUN_103fc1bb4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103fc1cf8; end: 103fc1d4b;  */

undefined8 *
FUN_103fc1cf8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  (*param_4)(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  (*param_5)(uVar3,uVar2);
  return param_1;
}



/* Entry: 103fc1d4c; end: 103fc1d87;  */

undefined8 * FUN_103fc1d4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103fc1cbc(uVar3,uVar2);
  return param_1;
}



/* Entry: 103fc1d88; end: 103fc1e7b;  */

int FUN_103fc1d88(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3c < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x3d;
  }
  uVar1 = (*(byte *)(param_1 + 2) & 0x3c | (uint)(*(byte *)(param_1 + 2) >> 6)) ^ 0x3f;
  if (0x3b < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103fc1e7c; end: 103fc1f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fc1e7c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a53e3c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11303eb10) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11303eb18) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc1f04);
  (*pcVar1)();
}



/* Entry: 103fc1f04; end: 103fc1f63; -[_TtC29MmUserSessionScopeGraphBridge44MmUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103fc1f04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MmUserSessionScopeGraphBridge.MmUserSessionScopeGraphBridgeSaberEntryPoint",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc1f30);
  (*pcVar1)();
}



/* Entry: 103fc1f64; end: 103fc1f9b; -[_TtC29MmUserSessionScopeGraphBridge44MmUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc1f64(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303eb10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303eb18));
  return;
}



/* Entry: 103fc1f9c; end: 103fc1fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc1f9c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11303eb18),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11303eb10));
  return;
}



/* Entry: 103fc1fc4; end: 103fc205f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fc1fc4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11303f088);
  *(undefined8 *)(unaff_x20 + _DAT_11303eb48) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11303eb50) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103fc2060; end: 103fc20bf; -[_TtC29MmUserSessionScopeGraphBridge40SCFeatureSettingsServicesSaberEntryPoint init] */

void FUN_103fc2060(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MmUserSessionScopeGraphBridge.SCFeatureSettingsServicesSaberEntryPoint",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fc208c);
  (*pcVar1)();
}



/* Entry: 103fc20c0; end: 103fc2153; -[_TtC29MmUserSessionScopeGraphBridge40SCFeatureSettingsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fc20c0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303eb48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303eb50));
  return;
}



/* Entry: 103fc2154; end: 103fc215b;  */

undefined8 FUN_103fc2154(void)

{
  return 0;
}



/* Entry: 103fc215c; end: 103fc21bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fc215c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303f070);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fc21c0; end: 103fc21c7;  */

void FUN_103fc21c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fc21c8; end: 103fc2267;  */

void FUN_103fc21c8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fc2268; end: 103fc2287;  */

void FUN_103fc2268(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fc2288; end: 103fc22eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fc2288(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303f078);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fc22ec; end: 103fc22f3;  */

void FUN_103fc22ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fc22f4; end: 103fc2317;  */

void FUN_103fc22f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fc2318; end: 103fc2337;  */

void FUN_103fc2318(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fc2338; end: 103fc239b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fc2338(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303f080);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fc239c; end: 103fc23a3;  */

void FUN_103fc239c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fc23a4; end: 103fc2443;  */

void FUN_103fc23a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fc2444; end: 103fc2463;  */

void FUN_103fc2444(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fc2464; end: 103fc24c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fc2464(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303f090);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fc24c8; end: 103fc24cf;  */

void FUN_103fc24c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fc24d0; end: 103fc256f;  */

void FUN_103fc24d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fc2570; end: 103fc258f;  */

void FUN_103fc2570(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fc2590; end: 103fc25f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fc2590(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303f098);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fc25f4; end: 103fc25fb;  */

void FUN_103fc25f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fc25fc; end: 103fc269b;  */

void FUN_103fc25fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fc269c; end: 103fc26bb;  */

void FUN_103fc269c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fc26bc; end: 103fc271f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fc26bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303f0a0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fc2720; end: 103fc2727;  */

void FUN_103fc2720(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fc2728; end: 103fc27c7;  */

void FUN_103fc2728(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



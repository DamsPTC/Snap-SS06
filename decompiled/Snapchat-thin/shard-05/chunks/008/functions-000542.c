/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041a4830; end: 1041a491b; -[SCAdDeepLinkAttachmentCallbacks destinationReachedHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a4830(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113067990);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113067990))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ff4e14;
    puStack_48 = &UNK_11074f0c0;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a491c; end: 1041a4a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a491c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067978);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067980);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067988);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067990);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041a4a94; end: 1041a4c07; -[SCAdDeepLinkAttachmentCallbacks initWithFallbackToAttachmentHandler:interceptionHandler:attemptHandler:destinationReachedHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a4a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __Block_copy();
  __Block_copy();
  __Block_copy();
  __Block_copy();
  puVar3 = &UNK_11074f030;
  _swift_allocObject(&UNK_11074f030,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  puVar4 = &UNK_11074f058;
  _swift_allocObject(&UNK_11074f058,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  puVar5 = &UNK_11074f080;
  _swift_allocObject(&UNK_11074f080,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_5;
  if (param_6 == 0) {
    uVar7 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_11074f0a8;
    _swift_allocObject(&UNK_11074f0a8,0x18,7);
    *(long *)(puVar6 + 0x10) = param_6;
    uVar7 = 0x1041a4f94;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113067978);
  *puVar1 = 0x1041a4fb4;
  puVar1[1] = puVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067980);
  *puVar1 = 0x1041a4fd0;
  puVar1[1] = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067988);
  *puVar1 = 0x1041a4fd8;
  puVar1[1] = puVar5;
  puVar1 = (undefined8 *)(param_1 + _DAT_113067990);
  *puVar1 = uVar7;
  puVar1[1] = puVar6;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041a4c08; end: 1041a4d87;  */

undefined8
FUN_1041a4c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_a0;
  ppuVar4 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x1041a4fd4;
  puStack_88 = &UNK_11074ef30;
  uStack_80 = param_1;
  uStack_78 = param_2;
  __Block_copy(&puStack_a0);
  uVar2 = uStack_78;
  _swift_retain(param_2);
  _swift_release(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x1041a47cc;
  puStack_88 = &UNK_11074ef58;
  uStack_80 = param_3;
  uStack_78 = param_4;
  __Block_copy(&puStack_a0);
  uVar2 = uStack_78;
  _swift_retain(param_4);
  _swift_release(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f3aa0;
  puStack_88 = &UNK_11074ef80;
  uStack_80 = param_5;
  uStack_78 = param_6;
  __Block_copy(&puStack_a0);
  uVar2 = uStack_78;
  _swift_retain(param_6);
  _swift_release(uVar2);
  func_0x00010c0116c0();
  _swift_release(param_2);
  _swift_release(param_4);
  _swift_release(param_6);
  __Block_release(ppuVar5);
  __Block_release(ppuVar4);
  __Block_release(ppuVar3);
  return unaff_x20;
}



/* Entry: 1041a4d88; end: 1041a4da3;  */

void FUN_1041a4d88(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1041a4da4; end: 1041a4e77; -[SCAdDeepLinkAttachmentCallbacks initWithFallbackToAttachmentHandler:interceptionHandler:attemptHandler:] */

void FUN_1041a4da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  __Block_copy();
  __Block_copy();
  __Block_copy();
  puVar1 = &UNK_11074efb8;
  _swift_allocObject(&UNK_11074efb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_11074efe0;
  _swift_allocObject(&UNK_11074efe0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  puVar3 = &UNK_11074f008;
  _swift_allocObject(&UNK_11074f008,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  FUN_1041a4c08(FUN_1041a4f60,puVar1,0x1041a4f70,puVar2,0x1041a4f8c,puVar3);
  return;
}



/* Entry: 1041a4e78; end: 1041a4ed7; -[SCAdDeepLinkAttachmentCallbacks init] */

void FUN_1041a4e78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAttachmentHandlerScope.AdDeepLinkAttachmentCallbacks",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041a4ea4);
  (*pcVar1)();
}



/* Entry: 1041a4ed8; end: 1041a4f3f; -[SCAdDeepLinkAttachmentCallbacks .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a4ed8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113067978 + 8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113067980 + 8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113067988 + 8));
  if (*(long *)(param_1 + _DAT_113067990) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113067990))[1]);
    return;
  }
  return;
}



/* Entry: 1041a4f40; end: 1041a4f5f;  */

void FUN_1041a4f40(void)

{
  _objc_opt_self(&PTR_PTR_11298dd48);
  return;
}



/* Entry: 1041a4f60; end: 1041a4fdb;  */

void FUN_1041a4f60(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001041a4f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1041a4fdc; end: 1041a506b;  */

undefined8 FUN_1041a4fdc(undefined8 param_1,undefined8 param_2)

{
  FUN_1041a6a4c(param_2,param_1);
  return param_2;
}



/* Entry: 1041a506c; end: 1041a56db;  */

undefined8 FUN_1041a506c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint5 uVar6;
  uint5 uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_1c8 = param_2[1];
  uStack_1d0 = *param_2;
  uStack_1b8 = param_2[3];
  uStack_1c0 = param_2[2];
  uStack_1a8 = param_2[5];
  uStack_1b0 = param_2[4];
  uStack_198 = param_2[7];
  uStack_1a0 = param_2[6];
  uStack_178 = param_2[0xb];
  uStack_180 = param_2[10];
  uStack_168 = param_2[0xd];
  uStack_170 = param_2[0xc];
  uStack_188 = param_2[9];
  uStack_190 = param_2[8];
  puVar8 = &uStack_160;
  FUN_104191074(puVar8,&uStack_1d0);
  if (((ulong)puVar8 & 1) == 0) {
    return 0;
  }
  uVar11 = param_1[0xe];
  uVar10 = param_1[0x10];
  uVar3 = param_1[0x11];
  uVar20 = param_1[0x12];
  uVar6 = *(uint5 *)(param_1 + 0x15);
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x11];
  uVar7 = *(uint5 *)(param_2 + 0x15);
  uVar21 = param_2[0x12];
  if ((uVar6 >> 0x25 & 1) == 0) {
    if ((uVar7 >> 0x25 & 1) != 0) {
      return 0;
    }
    uStack_c0 = param_1[0x14];
    uStack_c8 = param_1[0x13];
    uStack_80 = param_2[0x14];
    uStack_88 = param_2[0x13];
    uStack_b8 = (undefined4)uVar6;
    uStack_b4 = (undefined1)(uVar6 >> 0x20);
    uStack_78 = (undefined4)uVar7;
    uStack_74 = (undefined1)(uVar7 >> 0x20);
    puVar9 = &uStack_f0;
    uStack_f0 = uVar11;
    lStack_e8 = param_1[0xf];
    uStack_e0 = uVar10;
    uStack_d8 = uVar3;
    uStack_d0 = uVar20;
    uStack_b0 = param_2[0xe];
    lStack_a8 = param_2[0xf];
    uStack_a0 = uVar1;
    uStack_98 = uVar4;
    uStack_90 = uVar21;
    func_0x00010473b6a8(puVar9,&uStack_b0);
    if (((ulong)puVar9 & 1) == 0) {
      return 0;
    }
  }
  else {
    if ((uVar7 >> 0x25 & 1) == 0) {
      return 0;
    }
    lVar16 = param_1[0x13];
    lVar22 = param_2[0x13];
    if (((uVar11 != param_2[0xe]) || (param_1[0xf] != param_2[0xf])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar11 & 1) == 0)) {
      return 0;
    }
    func_0x000100e25fcc(uVar10,uVar3,uVar1,uVar4);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if ((int)uVar20 != (int)uVar21) {
      return 0;
    }
    if (lVar16 != lVar22) {
      return 0;
    }
  }
  uVar11 = param_1[0x16];
  if (((uVar11 != param_2[0x16]) || (param_1[0x17] != param_2[0x17])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar11 & 1) == 0)) {
    return 0;
  }
  lVar16 = param_2[0x19];
  if (param_1[0x19] == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    uVar11 = param_1[0x18];
    if (((uVar11 != param_2[0x18]) || (param_1[0x19] != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar11 & 1) == 0)) {
      return 0;
    }
  }
  lVar16 = param_2[0x1b];
  if (param_1[0x1b] == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    uVar11 = param_1[0x1a];
    if (((uVar11 != param_2[0x1a]) || (param_1[0x1b] != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar11 & 1) == 0)) {
      return 0;
    }
  }
  lVar16 = param_2[0x1d];
  if (param_1[0x1d] == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    uVar11 = param_1[0x1c];
    if (((uVar11 != param_2[0x1c]) || (param_1[0x1d] != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar11 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_1[0x1e];
  lVar16 = param_2[0x1e];
  if (uVar11 == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    FUN_1041a64f4(0);
    _objc_retain(lVar16);
    _objc_retain();
    uVar10 = uVar11;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar11);
    _objc_release(lVar16);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  uVar11 = param_1[0x1f];
  func_0x000101058cd4(uVar11,param_2[0x1f]);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  lVar16 = param_2[0x21];
  if (param_1[0x21] == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    uVar11 = param_1[0x20];
    if (((uVar11 != param_2[0x20]) || (param_1[0x21] != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar11 & 1) == 0)) {
      return 0;
    }
  }
  if (((*(byte *)(param_1 + 0x22) ^ *(byte *)(param_2 + 0x22)) & 1) != 0) {
    return 0;
  }
  lVar16 = param_2[0x24];
  if (param_1[0x24] == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    uVar11 = param_1[0x23];
    if (((uVar11 != param_2[0x23]) || (param_1[0x24] != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar11 & 1) == 0)) {
      return 0;
    }
  }
  lVar16 = param_2[0x26];
  if (param_1[0x26] == 0) {
    if (lVar16 != 0) {
      return 0;
    }
  }
  else {
    if (lVar16 == 0) {
      return 0;
    }
    uVar11 = param_1[0x25];
    if (((uVar11 != param_2[0x25]) || (param_1[0x26] != lVar16)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar11 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_1[0x27];
  lVar16 = param_1[0x28];
  uVar10 = param_1[0x29];
  lVar22 = param_1[0x2a];
  uVar2 = param_1[0x2b];
  lVar5 = param_1[0x2c];
  uVar13 = param_2[0x27];
  lVar14 = param_2[0x28];
  uVar15 = param_2[0x29];
  lVar17 = param_2[0x2a];
  uVar18 = param_2[0x2b];
  lVar19 = param_2[0x2c];
  if (lVar16 == 0) {
    if (lVar14 == 0) {
      return 1;
    }
  }
  else if (lVar14 != 0) {
    if ((((uVar11 == uVar13) && (lVar16 == lVar14)) ||
        (uVar12 = uVar11,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar11,lVar16,uVar13,lVar14,0), (uVar12 & 1) != 0)) &&
       (((uVar10 == uVar15 && (lVar22 == lVar17)) ||
        (uVar12 = uVar10,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar10,lVar22,uVar15,lVar17,0), (uVar12 & 1) != 0)))) {
      if ((uVar2 == uVar18) && (lVar5 == lVar19)) {
        func_0x000101895c08(uVar13,lVar14,uVar15,lVar17,uVar2,lVar5);
        func_0x000101895c08(uVar11,lVar16,uVar10,lVar22,uVar2,lVar5);
        _swift_bridgeObjectRelease(lVar19);
        _swift_bridgeObjectRelease(lVar17);
        _swift_bridgeObjectRelease(lVar14);
        FUN_1041a60a4(uVar11,lVar16,uVar10,lVar22,uVar2,lVar5);
        return 1;
      }
      uVar12 = uVar2;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar2,lVar5,uVar18,lVar19,0);
      func_0x000101895c08(uVar13,lVar14,uVar15,lVar17,uVar18,lVar19);
      func_0x000101895c08(uVar11,lVar16,uVar10,lVar22,uVar2,lVar5);
      _swift_bridgeObjectRelease(lVar19);
      _swift_bridgeObjectRelease(lVar17);
      _swift_bridgeObjectRelease(lVar14);
      FUN_1041a60a4(uVar11,lVar16,uVar10,lVar22,uVar2,lVar5);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    func_0x000101895c08(uVar13,lVar14,uVar15,lVar17,uVar18,lVar19);
    func_0x000101895c08(uVar11,lVar16,uVar10,lVar22,uVar2,lVar5);
    _swift_bridgeObjectRelease(lVar19);
    _swift_bridgeObjectRelease(lVar17);
    _swift_bridgeObjectRelease(lVar14);
    uVar13 = uVar11;
    lVar14 = lVar16;
    uVar15 = uVar10;
    lVar17 = lVar22;
    uVar18 = uVar2;
    lVar19 = lVar5;
    goto LAB_1041a5624;
  }
  func_0x000101895c08(uVar13,lVar14,uVar15,lVar17,uVar18,lVar19);
  func_0x000101895c08(uVar11,lVar16,uVar10,lVar22,uVar2,lVar5);
  FUN_1041a60a4(uVar11,lVar16,uVar10,lVar22,uVar2,lVar5);
LAB_1041a5624:
  FUN_1041a60a4(uVar13,lVar14,uVar15,lVar17,uVar18,lVar19);
  return 0;
}



/* Entry: 1041a56dc; end: 1041a57cf;  */

long FUN_1041a56dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041a57d0; end: 1041a5d3f;  */

undefined8 * FUN_1041a57d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  uint5 uVar9;
  uint5 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar12;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar12 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar12;
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  uVar12 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar12;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  uVar12 = param_2[0xf];
  uVar5 = param_2[0x10];
  uVar13 = param_2[0x11];
  uVar6 = param_2[0x12];
  uVar8 = *(undefined1 *)((long)param_2 + 0xac);
  uVar10 = *(uint5 *)(param_2 + 0x15);
  uVar9 = *(uint5 *)(param_2 + 0x15);
  uVar14 = param_2[0x13];
  uVar7 = param_2[0x14];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  func_0x0001037cba18(uVar4,uVar12,uVar5,uVar13,uVar6,uVar14,uVar7,(ulong)uVar9);
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar12;
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar13;
  param_1[0x12] = uVar6;
  param_1[0x13] = uVar14;
  param_1[0x14] = uVar7;
  *(undefined1 *)((long)param_1 + 0xac) = uVar8;
  *(int *)(param_1 + 0x15) = (int)uVar10;
  uVar12 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar12;
  uVar13 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar13;
  uVar14 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar14;
  uVar1 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  uVar12 = param_2[0x1e];
  uVar2 = param_2[0x1f];
  param_1[0x1e] = uVar12;
  param_1[0x1f] = uVar2;
  uVar3 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar3;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  uVar4 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar4;
  uVar5 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar5;
  lVar11 = param_2[0x28];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(uVar12);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  if (lVar11 == 0) {
    uVar12 = param_2[0x27];
    uVar14 = param_2[0x2a];
    uVar13 = param_2[0x29];
    param_1[0x28] = param_2[0x28];
    param_1[0x27] = uVar12;
    param_1[0x2a] = uVar14;
    param_1[0x29] = uVar13;
    uVar12 = param_2[0x2b];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2b] = uVar12;
  }
  else {
    param_1[0x27] = param_2[0x27];
    param_1[0x28] = lVar11;
    uVar12 = param_2[0x2a];
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = uVar12;
    uVar13 = param_2[0x2c];
    param_1[0x2b] = param_2[0x2b];
    param_1[0x2c] = uVar13;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar13);
  }
  return param_1;
}



/* Entry: 1041a5d40; end: 1041a5d47;  */

void FUN_1041a5d40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x168);
  return;
}



/* Entry: 1041a5d48; end: 1041a5f0b;  */

undefined8 * FUN_1041a5d48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = param_2[1];
  uVar8 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_2[3];
  uVar8 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_2[5];
  uVar8 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  uVar9 = param_2[9];
  uVar8 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar5 = *(undefined4 *)(param_1 + 0x15);
  uVar9 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar9;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x15);
  uVar6 = *(undefined1 *)((long)param_2 + 0xac);
  uVar9 = param_1[0xe];
  uVar1 = param_1[0xf];
  uVar8 = param_1[0x10];
  uVar2 = param_1[0x11];
  uVar15 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar10 = param_1[0x14];
  uVar7 = *(undefined1 *)((long)param_1 + 0xac);
  uVar12 = param_2[0xd];
  uVar14 = param_2[0x10];
  uVar13 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar12;
  param_1[0x10] = uVar14;
  param_1[0xf] = uVar13;
  uVar12 = param_2[0x11];
  uVar14 = param_2[0x14];
  uVar13 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar12;
  param_1[0x14] = uVar14;
  param_1[0x13] = uVar13;
  *(undefined1 *)((long)param_1 + 0xac) = uVar6;
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  func_0x000102c86250(uVar9,uVar1,uVar8,uVar2,uVar15,uVar3,uVar10,(ulong)CONCAT14(uVar7,uVar5));
  uVar9 = param_2[0x17];
  uVar8 = param_1[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_2[0x19];
  uVar8 = param_1[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_2[0x1b];
  uVar8 = param_1[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_2[0x1d];
  uVar8 = param_1[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_1[0x1e];
  param_1[0x1e] = param_2[0x1e];
  _objc_release(uVar9);
  uVar9 = param_1[0x1f];
  param_1[0x1f] = param_2[0x1f];
  _swift_bridgeObjectRelease(uVar9);
  uVar9 = param_2[0x21];
  uVar8 = param_1[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  uVar9 = param_2[0x24];
  uVar8 = param_1[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_2[0x26];
  uVar8 = param_1[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  if (param_1[0x28] != 0) {
    lVar11 = param_2[0x28];
    if (lVar11 != 0) {
      param_1[0x27] = param_2[0x27];
      param_1[0x28] = lVar11;
      _swift_bridgeObjectRelease();
      uVar9 = param_2[0x2a];
      uVar8 = param_1[0x2a];
      param_1[0x29] = param_2[0x29];
      param_1[0x2a] = uVar9;
      _swift_bridgeObjectRelease(uVar8);
      uVar9 = param_2[0x2c];
      uVar8 = param_1[0x2c];
      param_1[0x2b] = param_2[0x2b];
      param_1[0x2c] = uVar9;
      _swift_bridgeObjectRelease(uVar8);
      return param_1;
    }
    func_0x0001017b6740(param_1 + 0x27);
  }
  uVar9 = param_2[0x27];
  uVar15 = param_2[0x2a];
  uVar8 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar9;
  param_1[0x2a] = uVar15;
  param_1[0x29] = uVar8;
  uVar9 = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = uVar9;
  return param_1;
}



/* Entry: 1041a5f0c; end: 1041a60a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1041a5f0c(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x5a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  iVar2 = param_1[0x2a];
  auVar5._4_4_ = iVar2;
  auVar5._0_4_ = iVar2;
  auVar5._8_4_ = iVar2;
  auVar5._12_4_ = iVar2;
  auVar5 = NEON_ushl(auVar5,_UNK_10dcdfae0,4);
  bVar4 = auVar5[0] & 0x7f;
  auVar6._0_6_ = CONCAT15(auVar5[5],CONCAT14(auVar5[4],(uint)bVar4)) & 0x3f80ffffffff;
  auVar6._6_3_ = 0;
  auVar6[9] = auVar5[9] & 0xc0;
  auVar6[10] = auVar5[10] & 0x1f;
  auVar6._11_3_ = 0;
  auVar6[0xe] = auVar5[0xe] & 0xe0;
  auVar6[0xf] = auVar5[0xf] & 0xf;
  auVar6 = NEON_ext(auVar6,auVar6,8,1);
  uVar3 = CONCAT13(auVar6[3],CONCAT12(auVar6[2],CONCAT11(auVar6[1],bVar4 | auVar6[0])));
  uVar1 = uVar3 | (uint)(CONCAT17(auVar6[7],
                                  CONCAT16(auVar6[6],
                                           CONCAT15(auVar5[5] & 0x3f | auVar6[5],
                                                    CONCAT14(auVar5[4] & 0x80 | auVar6[4],uVar3))))
                        >> 0x20) | (uint)(*(byte *)(param_1 + 0x2b) >> 1) << 0x1c;
  uVar3 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar3 = ~uVar1;
  }
  return uVar3 + 1;
}



/* Entry: 1041a60a4; end: 1041a60df;  */

void FUN_1041a60a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
    return;
  }
  return;
}



/* Entry: 1041a60e0; end: 1041a60fb; -[SCAdInstantPageAttachmentCallbacks dismissHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a60e0(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_1130679c0);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_1130679c0))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f3aa0;
    puStack_48 = &UNK_11074f2e8;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a60fc; end: 1041a6117; -[SCAdInstantPageAttachmentCallbacks loadUrlHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a60fc(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_1130679c8);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_1130679c8))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100c75f50;
    puStack_48 = &UNK_11074f2c0;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a6118; end: 1041a6133; -[SCAdInstantPageAttachmentCallbacks exbCheckoutHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a6118(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_1130679d0);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_1130679d0))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11074f298;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a6134; end: 1041a61bb;  */

void FUN_1041a6134(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + *param_3))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = param_4;
    uStack_48 = param_5;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a61bc; end: 1041a62f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a61bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130679c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130679c8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130679d0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041a62f4; end: 1041a643f; -[SCAdInstantPageAttachmentCallbacks initWithDismissHandler:loadUrlHandler:exbCheckoutHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a62f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __Block_copy();
  __Block_copy();
  __Block_copy();
  if (param_3 == 0) {
    pcVar8 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_11074f280;
    _swift_allocObject(&UNK_11074f280,0x18,7);
    *(long *)(puVar6 + 0x10) = param_3;
    pcVar8 = FUN_1041a6554;
  }
  if (param_4 == 0) {
    puVar7 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar7 = &UNK_11074f258;
    _swift_allocObject(&UNK_11074f258,0x18,7);
    *(long *)(puVar7 + 0x10) = param_4;
    pcVar1 = FUN_1041a651c;
  }
  if (param_5 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11074f230;
    _swift_allocObject(&UNK_11074f230,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    pcVar5 = FUN_1041a6514;
  }
  puVar2 = (undefined8 *)(param_1 + _DAT_1130679c0);
  *puVar2 = pcVar8;
  puVar2[1] = puVar6;
  puVar2 = (undefined8 *)(param_1 + _DAT_1130679c8);
  *puVar2 = pcVar1;
  puVar2[1] = puVar7;
  puVar2 = (undefined8 *)(param_1 + _DAT_1130679d0);
  *puVar2 = pcVar5;
  puVar2[1] = puVar4;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041a6440; end: 1041a649f; -[SCAdInstantPageAttachmentCallbacks init] */

void FUN_1041a6440(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAttachmentHandlerScope.AdInstantPageAttachmentCallbacks",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041a646c);
  (*pcVar1)();
}



/* Entry: 1041a64a0; end: 1041a64f3; -[SCAdInstantPageAttachmentCallbacks .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001041a64c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001041a64c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a64a0(long param_1)

{
  if (*(long *)(param_1 + _DAT_1130679c0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_1130679c0))[1]);
    return;
  }
  return;
}



/* Entry: 1041a64f4; end: 1041a6513;  */

void FUN_1041a64f4(void)

{
  _objc_opt_self(&PTR_PTR_11298de20);
  return;
}



/* Entry: 1041a6514; end: 1041a651b;  */

void FUN_1041a6514(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1041a651c; end: 1041a6553;  */

void FUN_1041a651c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041a6554; end: 1041a6593;  */

void FUN_1041a6554(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001041a6564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1041a6594; end: 1041a682f;  */

void FUN_1041a6594(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint5 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  uVar8 = unaff_x20[6];
  uVar7 = *(uint5 *)(unaff_x20 + 7);
  __ss6HasherV5_seedABSi_tcfC(auStack_d8,0);
  if ((uVar7 >> 0x25 & 1) == 0) {
    uStack_58 = (undefined4)uVar7;
    uStack_54 = (undefined1)(uVar7 >> 0x20);
    uStack_90 = uVar1;
    uStack_88 = uVar4;
    uStack_80 = uVar2;
    uStack_78 = uVar5;
    uStack_70 = uVar3;
    uStack_68 = uVar6;
    uStack_60 = uVar8;
    __ss6HasherV8_combineyySuF(0);
    func_0x00010473b6ac(auStack_d8);
  }
  else {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_d8,uVar1,uVar4);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(auStack_d8,uVar2,uVar5);
    __ss6HasherV8_combineyySuF(uVar3);
    __ss6HasherV8_combineyySuF(uVar6);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041a6830; end: 1041a6887;  */

uint FUN_1041a6830(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 uStack_5b;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  undefined8 uStack_1b;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined5)param_1[5];
  uStack_5b = *(undefined8 *)((long)param_1 + 0x35);
  uStack_63 = (undefined3)*(undefined8 *)((long)param_1 + 0x2d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x2d) >> 0x18);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined5)param_2[5];
  uStack_1b = *(undefined8 *)((long)param_2 + 0x35);
  uStack_23 = (undefined3)*(undefined8 *)((long)param_2 + 0x2d);
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x2d) >> 0x18);
  FUN_1041a6888(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1041a6888; end: 1041a69b7;  */

uint FUN_1041a6888(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint5 uVar7;
  uint5 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  uVar9 = 0;
  uVar10 = *param_1;
  uStack_c8 = param_1[1];
  uVar11 = param_1[2];
  uVar1 = param_1[3];
  uVar4 = param_1[4];
  uVar7 = (uint5)param_1[7];
  if ((uVar7 >> 0x25 & 1) == 0) {
    uVar8 = (uint5)param_2[7];
    if ((uVar8 >> 0x25 & 1) == 0) {
      uStack_a0 = param_1[6];
      uStack_a8 = param_1[5];
      uStack_60 = param_2[6];
      uStack_98 = (undefined4)uVar7;
      uStack_94 = (undefined1)(uVar7 >> 0x20);
      uStack_88 = param_2[1];
      uStack_90 = *param_2;
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_68 = param_2[5];
      uStack_70 = param_2[4];
      uStack_58 = (undefined4)uVar8;
      uStack_54 = (undefined1)(uVar8 >> 0x20);
      uStack_d0 = uVar10;
      uStack_c0 = uVar11;
      uStack_b8 = uVar1;
      uStack_b0 = uVar4;
      func_0x00010473b6a8(&uStack_d0,&uStack_90);
      goto LAB_1041a6998;
    }
  }
  else if ((*(byte *)((long)param_2 + 0x3c) >> 5 & 1) != 0) {
    uVar12 = param_1[5];
    uVar2 = param_2[2];
    uVar5 = param_2[3];
    uVar3 = param_2[4];
    uVar6 = param_2[5];
    if (((uVar10 == *param_2) && (uStack_c8 == param_2[1])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar10,uStack_c8,*param_2,param_2[1],0), (uVar10 & 1) != 0)) {
      func_0x000100e25fcc(uVar11,uVar1,uVar2,uVar5);
      uVar9 = 0;
      if (uVar12 == uVar6) {
        uVar9 = (uint)uVar11 & (uint)((int)uVar4 == (int)uVar3);
      }
      goto LAB_1041a6998;
    }
  }
  uVar9 = 0;
LAB_1041a6998:
  return uVar9 & 1;
}



/* Entry: 1041a69b8; end: 1041a69bb;  */

void FUN_1041a69b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdfbe0;
  _swift_getWitnessTable(&UNK_10dcdfbe0,&UNK_11074f390);
  puRam0000000113067a00 = puVar1;
  return;
}



/* Entry: 1041a69bc; end: 1041a69fb;  */

void FUN_1041a69bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdfbe0;
  _swift_getWitnessTable(&UNK_10dcdfbe0,&UNK_11074f390);
  puRam0000000113067a00 = puVar1;
  return;
}



/* Entry: 1041a69fc; end: 1041a6a27;  */

long FUN_1041a69fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041a6a28; end: 1041a6a4b;  */

/* WARNING: Possible PIC construction at 0x00010179b854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010179b868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010179b86c) */
/* WARNING: Removing unreachable block (ram,0x00010179b858) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1041a6a28(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  if ((*(byte *)((long)param_1 + 0x3c) >> 5 & 1) != 0) {
    func_0x000107c6142c(uVar2);
    uVar2 = uVar1;
code_r0x00010006c090:
    uVar4 = (uint)(uVar3 >> 0x3e);
    if (uVar4 == 1) {
      uVar2 = uVar3 & 0x3fffffffffffffff;
    }
    else if (uVar4 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  uVar4 = (uint)((uint5)*(undefined5 *)(param_1 + 7) >> 0x26);
  if (uVar4 < 2) {
    if (uVar4 != 0) {
      func_0x000107c6142c(*param_1);
      uVar3 = uVar1;
      goto code_r0x00010006c090;
    }
  }
  else if (uVar4 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1041a6a4c; end: 1041a6b97;  */

undefined8 * FUN_1041a6a4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint5 uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar9 = param_2[6];
  uVar7 = *(undefined1 *)((long)param_2 + 0x3c);
  uVar8 = *(uint5 *)(param_2 + 7);
  func_0x0001037cba18(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar9,(ulong)*(uint5 *)(param_2 + 7));
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar9;
  *(undefined1 *)((long)param_1 + 0x3c) = uVar7;
  *(int *)(param_1 + 7) = (int)uVar8;
  return param_1;
}



/* Entry: 1041a6b98; end: 1041a6bb3;  */

void FUN_1041a6b98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x2d);
  *(undefined8 *)((long)param_1 + 0x35) = *(undefined8 *)((long)param_2 + 0x35);
  *(undefined8 *)((long)param_1 + 0x2d) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 1041a6bb4; end: 1041a6c23;  */

undefined8 * FUN_1041a6bb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint5 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar11 = param_2[6];
  uVar8 = *(undefined1 *)((long)param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 7);
  uVar10 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar9 = *(uint5 *)(param_1 + 7);
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  uVar12 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar12;
  param_1[6] = uVar11;
  *(undefined4 *)(param_1 + 7) = uVar7;
  *(undefined1 *)((long)param_1 + 0x3c) = uVar8;
  func_0x000102c86250(uVar10,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,(ulong)uVar9);
  return param_1;
}



/* Entry: 1041a6c24; end: 1041a6dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1041a6c24(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x3d) != '\0')) {
    return *param_1 + -0x80000000;
  }
  iVar2 = param_1[0xe];
  auVar5._4_4_ = iVar2;
  auVar5._0_4_ = iVar2;
  auVar5._8_4_ = iVar2;
  auVar5._12_4_ = iVar2;
  auVar5 = NEON_ushl(auVar5,_UNK_10dcdfae0,4);
  bVar4 = auVar5[0] & 0x7f;
  auVar6._0_6_ = CONCAT15(auVar5[5],CONCAT14(auVar5[4],(uint)bVar4)) & 0x3f80ffffffff;
  auVar6._6_3_ = 0;
  auVar6[9] = auVar5[9] & 0xc0;
  auVar6[10] = auVar5[10] & 0x1f;
  auVar6._11_3_ = 0;
  auVar6[0xe] = auVar5[0xe] & 0xe0;
  auVar6[0xf] = auVar5[0xf] & 0xf;
  auVar6 = NEON_ext(auVar6,auVar6,8,1);
  uVar3 = CONCAT13(auVar6[3],CONCAT12(auVar6[2],CONCAT11(auVar6[1],bVar4 | auVar6[0])));
  uVar1 = uVar3 | (uint)(CONCAT17(auVar6[7],
                                  CONCAT16(auVar6[6],
                                           CONCAT15(auVar5[5] & 0x3f | auVar6[5],
                                                    CONCAT14(auVar5[4] & 0x80 | auVar6[4],uVar3))))
                        >> 0x20) | (uint)(*(byte *)(param_1 + 0xf) >> 1) << 0x1c;
  uVar3 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar3 = ~uVar1;
  }
  return uVar3 + 1;
}



/* Entry: 1041a6dd4; end: 1041a6eab;  */

void FUN_1041a6dd4(void)

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



/* Entry: 1041a6eac; end: 1041a6edf;  */

void FUN_1041a6eac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1041a6ee0; end: 1041a6f1f;  */

void FUN_1041a6ee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdfca8;
  _swift_getWitnessTable(&UNK_10dcdfca8,&UNK_11074f3e8);
  puRam0000000113067a08 = puVar1;
  return;
}



/* Entry: 1041a6f20; end: 1041a6f2f;  */

undefined1  [16] FUN_1041a6f20(void)

{
  return ZEXT816(0x11074f3e8);
}



/* Entry: 1041a6f30; end: 1041a6fbf;  */

undefined8 FUN_1041a6f30(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10473fedc)(param_2,param_1);
  return param_2;
}



/* Entry: 1041a6fc0; end: 1041a7307;  */

undefined8 FUN_1041a6fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_88 = param_1[0x19];
  uStack_90 = param_1[0x18];
  uStack_78 = param_1[0x1b];
  uStack_80 = param_1[0x1a];
  uStack_68 = param_1[0x1d];
  uStack_70 = param_1[0x1c];
  uStack_60 = param_1[0x1e];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_188 = param_2[0x19];
  uStack_190 = param_2[0x18];
  uStack_178 = param_2[0x1b];
  uStack_180 = param_2[0x1a];
  uStack_168 = param_2[0x1d];
  uStack_170 = param_2[0x1c];
  uStack_160 = param_2[0x1e];
  uStack_1c8 = param_2[0x11];
  uStack_1d0 = param_2[0x10];
  uStack_1b8 = param_2[0x13];
  uStack_1c0 = param_2[0x12];
  uStack_1a8 = param_2[0x15];
  uStack_1b0 = param_2[0x14];
  uStack_198 = param_2[0x17];
  uStack_1a0 = param_2[0x16];
  uStack_208 = param_2[9];
  uStack_210 = param_2[8];
  uStack_1f8 = param_2[0xb];
  uStack_200 = param_2[10];
  uStack_1e8 = param_2[0xd];
  uStack_1f0 = param_2[0xc];
  uStack_1d8 = param_2[0xf];
  uStack_1e0 = param_2[0xe];
  uStack_248 = param_2[1];
  uStack_250 = *param_2;
  uStack_238 = param_2[3];
  uStack_240 = param_2[2];
  uStack_228 = param_2[5];
  uStack_230 = param_2[4];
  uStack_218 = param_2[7];
  uStack_220 = param_2[6];
  puVar1 = &uStack_150;
  func_0x00010473ef08(puVar1,&uStack_250);
  if (((ulong)puVar1 & 1) == 0) {
    return 0;
  }
  lVar4 = param_2[0x20];
  if (param_1[0x20] == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    uVar2 = param_1[0x1f];
    if (((uVar2 != param_2[0x1f]) || (param_1[0x20] != lVar4)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  lVar4 = param_2[0x22];
  if (param_1[0x22] == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    uVar2 = param_1[0x21];
    if (((uVar2 != param_2[0x21]) || (param_1[0x22] != lVar4)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  lVar4 = param_2[0x24];
  if (param_1[0x24] == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    uVar2 = param_1[0x23];
    if (((uVar2 != param_2[0x23]) || (param_1[0x24] != lVar4)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar2 = param_1[0x25];
  lVar4 = param_2[0x25];
  if (uVar2 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    FUN_1041a86dc(0);
    _objc_retain(lVar4);
    _objc_retain();
    uVar6 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  uStack_278 = param_1[0x2f];
  uStack_280 = param_1[0x2e];
  uStack_268 = param_1[0x31];
  uStack_270 = param_1[0x30];
  uStack_258 = param_1[0x33];
  uStack_260 = param_1[0x32];
  uStack_2b8 = param_1[0x27];
  uStack_2c0 = param_1[0x26];
  uStack_2a8 = param_1[0x29];
  uStack_2b0 = param_1[0x28];
  uStack_298 = param_1[0x2b];
  uStack_2a0 = param_1[0x2a];
  uStack_288 = param_1[0x2d];
  uStack_290 = param_1[0x2c];
  uStack_328 = param_2[0x27];
  uStack_330 = param_2[0x26];
  uStack_318 = param_2[0x29];
  uStack_320 = param_2[0x28];
  uStack_308 = param_2[0x2b];
  uStack_310 = param_2[0x2a];
  uStack_2f8 = param_2[0x2d];
  uStack_300 = param_2[0x2c];
  uStack_2d8 = param_2[0x31];
  uStack_2e0 = param_2[0x30];
  uStack_2c8 = param_2[0x33];
  uStack_2d0 = param_2[0x32];
  uStack_2e8 = param_2[0x2f];
  uStack_2f0 = param_2[0x2e];
  puVar1 = &uStack_2c0;
  FUN_104191074(puVar1,&uStack_330);
  if ((((ulong)puVar1 & 1) != 0) &&
     (((*(byte *)(param_1 + 0x34) ^ *(byte *)(param_2 + 0x34)) & 1) == 0)) {
    uVar7 = param_1[0x36];
    uVar6 = param_1[0x35];
    uVar2 = param_2[0x36];
    uVar5 = param_2[0x35];
    uStack_350 = uVar5;
    uStack_348 = uVar2;
    uStack_340 = uVar6;
    uStack_338 = uVar7;
    if (uVar7 >> 0x3c < 0xf) {
      if (uVar2 >> 0x3c < 0xf) {
        func_0x00010105aabc(&uStack_340,auStack_360);
        func_0x00010105aabc(&uStack_350,auStack_360);
        uVar3 = uVar6;
        func_0x000100e25fcc(uVar6,uVar7,uVar5,uVar2);
        func_0x0001000b44c0(uVar5,uVar2);
        func_0x0001000b44c0(uVar6,uVar7);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < uVar2 >> 0x3c) {
      func_0x00010105aabc(&uStack_340,auStack_360);
      func_0x00010105aabc(&uStack_350,auStack_360);
      func_0x0001000b44c0(uVar6,uVar7);
      return 1;
    }
    func_0x00010105aabc(&uStack_340,auStack_360);
    func_0x00010105aabc(&uStack_350,auStack_360);
    func_0x0001000b44c0(uVar6,uVar7);
    func_0x0001000b44c0(uVar5,uVar2);
  }
  return 0;
}



/* Entry: 1041a7308; end: 1041a744b;  */

long FUN_1041a7308(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1041a744c; end: 1041a7733;  */

undefined8 * FUN_1041a744c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  uVar10 = param_2[4];
  param_1[4] = uVar10;
  lVar8 = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  if (lVar8 == 0) {
    uVar9 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar9;
    uVar9 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar9;
    param_1[9] = param_2[9];
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = lVar8;
    uVar9 = param_2[8];
    param_1[7] = param_2[7];
    param_1[8] = uVar9;
    uVar10 = param_2[9];
    param_1[9] = uVar10;
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
  }
  lVar8 = param_2[0x10];
  if (lVar8 == 1) {
    uVar9 = param_2[10];
    uVar13 = param_2[0xd];
    uVar10 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar9;
    param_1[0xd] = uVar13;
    param_1[0xc] = uVar10;
    uVar9 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar9;
    param_1[0x10] = param_2[0x10];
  }
  else {
    lVar6 = param_2[0xc];
    if (lVar6 == 1) {
      uVar9 = param_2[10];
      uVar13 = param_2[0xd];
      uVar10 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar9;
      param_1[0xd] = uVar13;
      param_1[0xc] = uVar10;
      param_1[0xe] = param_2[0xe];
    }
    else {
      uVar9 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar9;
      uVar9 = param_2[0xd];
      uVar10 = param_2[0xe];
      param_1[0xc] = lVar6;
      param_1[0xd] = uVar9;
      param_1[0xe] = uVar10;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar10);
    }
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = lVar8;
    _swift_bridgeObjectRetain(lVar8);
  }
  lVar8 = param_2[0x17];
  if (lVar8 == 1) {
    uVar9 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar9;
    uVar9 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar9;
    uVar9 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar9;
    param_1[0x17] = param_2[0x17];
  }
  else {
    lVar6 = param_2[0x13];
    if (lVar6 == 1) {
      uVar9 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar9;
      uVar9 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar9;
      param_1[0x15] = param_2[0x15];
    }
    else {
      uVar9 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar9;
      uVar9 = param_2[0x14];
      uVar10 = param_2[0x15];
      param_1[0x13] = lVar6;
      param_1[0x14] = uVar9;
      param_1[0x15] = uVar10;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar10);
    }
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = lVar8;
    _swift_bridgeObjectRetain(lVar8);
  }
  uVar9 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar9;
  param_1[0x1a] = param_2[0x1a];
  uVar9 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar9;
  uVar1 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar1;
  uVar2 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar2;
  uVar3 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar3;
  uVar4 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar4;
  uVar9 = param_2[0x25];
  uVar10 = param_2[0x26];
  param_1[0x25] = uVar9;
  param_1[0x26] = uVar10;
  uVar10 = param_2[0x27];
  uVar13 = param_2[0x28];
  param_1[0x27] = uVar10;
  param_1[0x28] = uVar13;
  uVar13 = param_2[0x29];
  uVar12 = param_2[0x2a];
  param_1[0x29] = uVar13;
  param_1[0x2a] = uVar12;
  uVar11 = param_2[0x2b];
  param_1[0x2b] = uVar11;
  uVar12 = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2c] = uVar12;
  uVar12 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar12;
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  uVar5 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar5;
  param_1[0x33] = param_2[0x33];
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  uVar7 = param_2[0x36];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  if (uVar7 >> 0x3c < 0xf) {
    uVar9 = param_2[0x35];
    func_0x00010006c00c(uVar9,uVar7);
    param_1[0x35] = uVar9;
    param_1[0x36] = uVar7;
  }
  else {
    uVar9 = param_2[0x35];
    param_1[0x36] = param_2[0x36];
    param_1[0x35] = uVar9;
  }
  return param_1;
}



/* Entry: 1041a7734; end: 1041a7e3b;  */

undefined8 * FUN_1041a7734(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = param_2[3];
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  lVar4 = param_1[6];
  if (lVar4 == 0) {
    if (param_2[6] == 0) {
      uVar6 = param_2[6];
      uVar3 = param_2[5];
      uVar7 = param_2[8];
      uVar5 = param_2[7];
      param_1[9] = param_2[9];
      param_1[8] = uVar7;
      param_1[7] = uVar5;
      param_1[6] = uVar6;
      param_1[5] = uVar3;
    }
    else {
      param_1[5] = param_2[5];
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      uVar3 = param_2[8];
      param_1[8] = uVar3;
      uVar6 = param_2[9];
      param_1[9] = uVar6;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar6);
    }
  }
  else if (param_2[6] == 0) {
    func_0x0001017b6844(param_1 + 5);
    uVar3 = param_2[9];
    uVar5 = param_2[8];
    uVar6 = param_2[7];
    uVar7 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar7;
    param_1[8] = uVar5;
    param_1[7] = uVar6;
    param_1[9] = uVar3;
  }
  else {
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    param_1[7] = param_2[7];
    uVar3 = param_1[8];
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = param_1[9];
    param_1[9] = param_2[9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
  }
  if (param_1[0x10] == 1) {
    if (param_2[0x10] == 1) {
      uVar6 = param_2[0xb];
      uVar3 = param_2[10];
      uVar7 = param_2[0xd];
      uVar5 = param_2[0xc];
      uVar9 = param_2[0xf];
      uVar8 = param_2[0xe];
      param_1[0x10] = param_2[0x10];
      param_1[0xd] = uVar7;
      param_1[0xc] = uVar5;
      param_1[0xf] = uVar9;
      param_1[0xe] = uVar8;
      param_1[0xb] = uVar6;
      param_1[10] = uVar3;
    }
    else {
      if (param_2[0xc] == 1) {
        uVar6 = param_2[0xb];
        uVar3 = param_2[10];
        uVar7 = param_2[0xd];
        uVar5 = param_2[0xc];
        param_1[0xe] = param_2[0xe];
        param_1[0xb] = uVar6;
        param_1[10] = uVar3;
        param_1[0xd] = uVar7;
        param_1[0xc] = uVar5;
      }
      else {
        param_1[10] = param_2[10];
        param_1[0xb] = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        uVar3 = param_2[0xe];
        param_1[0xe] = uVar3;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar3);
      }
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0x10] == 1) {
    func_0x0001017b64d0(param_1 + 10);
    uVar7 = param_2[0xd];
    uVar5 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar3 = param_2[0xe];
    uVar9 = param_2[0xb];
    uVar8 = param_2[10];
    param_1[0x10] = param_2[0x10];
    param_1[0xd] = uVar7;
    param_1[0xc] = uVar5;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar3;
    param_1[0xb] = uVar9;
    param_1[10] = uVar8;
  }
  else {
    lVar4 = param_1[0xc];
    if (lVar4 == 1) {
      if (param_2[0xc] == 1) {
        uVar6 = param_2[0xb];
        uVar3 = param_2[10];
        uVar7 = param_2[0xd];
        uVar5 = param_2[0xc];
        param_1[0xe] = param_2[0xe];
        param_1[0xb] = uVar6;
        param_1[10] = uVar3;
        param_1[0xd] = uVar7;
        param_1[0xc] = uVar5;
      }
      else {
        param_1[10] = param_2[10];
        param_1[0xb] = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        uVar3 = param_2[0xe];
        param_1[0xe] = uVar3;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar3);
      }
    }
    else if (param_2[0xc] == 1) {
      func_0x0001017b649c(param_1 + 10);
      uVar3 = param_2[0xe];
      uVar7 = param_2[10];
      uVar5 = param_2[0xd];
      uVar6 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar7;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar6;
      param_1[0xe] = uVar3;
    }
    else {
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar4);
      param_1[0xd] = param_2[0xd];
      uVar3 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar3);
    }
    param_1[0xf] = param_2[0xf];
    uVar3 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
  }
  if (param_1[0x17] == 1) {
    if (param_2[0x17] == 1) {
      uVar6 = param_2[0x12];
      uVar3 = param_2[0x11];
      uVar7 = param_2[0x14];
      uVar5 = param_2[0x13];
      uVar9 = param_2[0x16];
      uVar8 = param_2[0x15];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar9;
      param_1[0x15] = uVar8;
      param_1[0x14] = uVar7;
      param_1[0x13] = uVar5;
      param_1[0x12] = uVar6;
      param_1[0x11] = uVar3;
    }
    else {
      if (param_2[0x13] == 1) {
        uVar6 = param_2[0x12];
        uVar3 = param_2[0x11];
        uVar7 = param_2[0x14];
        uVar5 = param_2[0x13];
        param_1[0x15] = param_2[0x15];
        param_1[0x14] = uVar7;
        param_1[0x13] = uVar5;
        param_1[0x12] = uVar6;
        param_1[0x11] = uVar3;
      }
      else {
        param_1[0x11] = param_2[0x11];
        param_1[0x12] = param_2[0x12];
        param_1[0x13] = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        uVar3 = param_2[0x15];
        param_1[0x15] = uVar3;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar3);
      }
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0x17] == 1) {
    func_0x0001017b64d0(param_1 + 0x11);
    uVar5 = param_2[0x14];
    uVar6 = param_2[0x13];
    uVar8 = param_2[0x16];
    uVar7 = param_2[0x15];
    uVar3 = param_2[0x17];
    uVar9 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar9;
    param_1[0x17] = uVar3;
    param_1[0x16] = uVar8;
    param_1[0x15] = uVar7;
    param_1[0x14] = uVar5;
    param_1[0x13] = uVar6;
  }
  else {
    lVar4 = param_1[0x13];
    if (lVar4 == 1) {
      if (param_2[0x13] == 1) {
        uVar6 = param_2[0x12];
        uVar3 = param_2[0x11];
        uVar7 = param_2[0x14];
        uVar5 = param_2[0x13];
        param_1[0x15] = param_2[0x15];
        param_1[0x14] = uVar7;
        param_1[0x13] = uVar5;
        param_1[0x12] = uVar6;
        param_1[0x11] = uVar3;
      }
      else {
        param_1[0x11] = param_2[0x11];
        param_1[0x12] = param_2[0x12];
        param_1[0x13] = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        uVar3 = param_2[0x15];
        param_1[0x15] = uVar3;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar3);
      }
    }
    else if (param_2[0x13] == 1) {
      func_0x0001017b649c(param_1 + 0x11);
      uVar3 = param_2[0x15];
      uVar5 = param_2[0x14];
      uVar6 = param_2[0x13];
      uVar7 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar7;
      param_1[0x14] = uVar5;
      param_1[0x13] = uVar6;
      param_1[0x15] = uVar3;
    }
    else {
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar4);
      param_1[0x14] = param_2[0x14];
      uVar3 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar3);
    }
    param_1[0x16] = param_2[0x16];
    uVar3 = param_1[0x17];
    param_1[0x17] = param_2[0x17];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
  }
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  uVar3 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  uVar3 = param_1[0x1e];
  param_1[0x1e] = param_2[0x1e];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x1f] = param_2[0x1f];
  uVar3 = param_1[0x20];
  param_1[0x20] = param_2[0x20];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x21] = param_2[0x21];
  uVar3 = param_1[0x22];
  param_1[0x22] = param_2[0x22];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x23] = param_2[0x23];
  uVar3 = param_1[0x24];
  param_1[0x24] = param_2[0x24];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[0x25];
  param_1[0x25] = param_2[0x25];
  _objc_retain();
  _objc_release(uVar3);
  param_1[0x26] = param_2[0x26];
  uVar3 = param_1[0x27];
  param_1[0x27] = param_2[0x27];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x28] = param_2[0x28];
  uVar3 = param_1[0x29];
  param_1[0x29] = param_2[0x29];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x2a] = param_2[0x2a];
  uVar3 = param_1[0x2b];
  param_1[0x2b] = param_2[0x2b];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  uVar3 = param_1[0x2f];
  param_1[0x2f] = param_2[0x2f];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x30] = param_2[0x30];
  uVar3 = param_2[0x31];
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  param_1[0x31] = uVar3;
  param_1[0x33] = param_2[0x33];
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  puVar1 = param_2 + 0x35;
  uVar2 = param_2[0x36];
  if ((ulong)param_1[0x36] >> 0x3c < 0xf) {
    if (uVar2 >> 0x3c < 0xf) {
      uVar5 = *puVar1;
      func_0x00010006c00c(uVar5,uVar2);
      uVar3 = param_1[0x35];
      uVar6 = param_1[0x36];
      param_1[0x35] = uVar5;
      param_1[0x36] = uVar2;
      func_0x00010006c090(uVar3,uVar6);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 0x35);
  }
  else if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *puVar1;
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x35] = uVar3;
    param_1[0x36] = uVar2;
    return param_1;
  }
  uVar3 = *puVar1;
  param_1[0x36] = param_2[0x36];
  param_1[0x35] = uVar3;
  return param_1;
}



/* Entry: 1041a7e3c; end: 1041a7e43;  */

void FUN_1041a7e3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x1b8);
  return;
}



/* Entry: 1041a7e44; end: 1041a8173;  */

undefined8 * FUN_1041a7e44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[6] == 0) {
LAB_1041a7ed4:
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[9] = param_2[9];
  }
  else {
    lVar3 = param_2[6];
    if (lVar3 == 0) {
      func_0x0001017b6844(param_1 + 5);
      goto LAB_1041a7ed4;
    }
    param_1[5] = param_2[5];
    param_1[6] = lVar3;
    _swift_bridgeObjectRelease();
    uVar2 = param_2[8];
    uVar1 = param_1[8];
    param_1[7] = param_2[7];
    param_1[8] = uVar2;
    _swift_bridgeObjectRelease(uVar1);
    uVar2 = param_1[9];
    param_1[9] = param_2[9];
    _swift_bridgeObjectRelease(uVar2);
  }
  if (param_1[0x10] == 1) {
LAB_1041a7f0c:
    uVar2 = param_2[10];
    uVar5 = param_2[0xd];
    uVar1 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar1;
    uVar2 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x10] = param_2[0x10];
  }
  else {
    if (param_2[0x10] == 1) {
      func_0x0001017b64d0(param_1 + 10);
      goto LAB_1041a7f0c;
    }
    if (param_1[0xc] == 1) {
LAB_1041a7f48:
      uVar2 = param_2[10];
      uVar5 = param_2[0xd];
      uVar1 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar2;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar1;
      param_1[0xe] = param_2[0xe];
    }
    else {
      lVar3 = param_2[0xc];
      if (lVar3 == 1) {
        func_0x0001017b649c(param_1 + 10);
        goto LAB_1041a7f48;
      }
      uVar2 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar2;
      param_1[0xc] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_2[0xe];
      uVar1 = param_1[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
    }
    uVar2 = param_2[0x10];
    uVar1 = param_1[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar2;
    _swift_bridgeObjectRelease(uVar1);
  }
  if (param_1[0x17] != 1) {
    if (param_2[0x17] != 1) {
      if (param_1[0x13] == 1) {
LAB_1041a7ff0:
        uVar2 = param_2[0x11];
        param_1[0x12] = param_2[0x12];
        param_1[0x11] = uVar2;
        uVar2 = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        param_1[0x13] = uVar2;
        param_1[0x15] = param_2[0x15];
      }
      else {
        lVar3 = param_2[0x13];
        if (lVar3 == 1) {
          func_0x0001017b649c(param_1 + 0x11);
          goto LAB_1041a7ff0;
        }
        uVar2 = param_2[0x11];
        param_1[0x12] = param_2[0x12];
        param_1[0x11] = uVar2;
        param_1[0x13] = lVar3;
        _swift_bridgeObjectRelease();
        uVar2 = param_2[0x15];
        uVar1 = param_1[0x15];
        param_1[0x14] = param_2[0x14];
        param_1[0x15] = uVar2;
        _swift_bridgeObjectRelease(uVar1);
      }
      uVar2 = param_2[0x17];
      uVar1 = param_1[0x17];
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_1041a803c;
    }
    func_0x0001017b64d0(param_1 + 0x11);
  }
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar2;
  param_1[0x17] = param_2[0x17];
LAB_1041a803c:
  uVar2 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar2;
  uVar2 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar2;
  uVar2 = param_2[0x1e];
  uVar1 = param_1[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x20];
  uVar1 = param_1[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x22];
  uVar1 = param_1[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x24];
  uVar1 = param_1[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[0x25];
  param_1[0x25] = param_2[0x25];
  _objc_release(uVar2);
  uVar2 = param_2[0x27];
  uVar1 = param_1[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x29];
  uVar1 = param_1[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x2b];
  uVar1 = param_1[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2c] = uVar2;
  uVar2 = param_2[0x2f];
  uVar1 = param_1[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar2;
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  param_1[0x33] = param_2[0x33];
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  if ((ulong)param_1[0x36] >> 0x3c < 0xf) {
    uVar4 = param_2[0x36];
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_1[0x35];
      param_1[0x35] = param_2[0x35];
      param_1[0x36] = uVar4;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 0x35);
  }
  uVar2 = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x35] = uVar2;
  return param_1;
}



/* Entry: 1041a8174; end: 1041a827b;  */

int FUN_1041a8174(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x6e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1041a827c; end: 1041a8297; -[SCAdLeadGenAttachmentCallbacks dismissHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a827c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113067a10);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113067a10))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11074f5c0;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a8298; end: 1041a82b3; -[SCAdLeadGenAttachmentCallbacks submitHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a8298(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113067a18);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113067a18))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1041a82b4;
    puStack_48 = &UNK_11074f598;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a82b4; end: 1041a82ff;  */

void FUN_1041a82b4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1041a8300; end: 1041a831b; -[SCAdLeadGenAttachmentCallbacks submitFormMetricsHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a8300(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113067a20);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113067a20))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_101341328;
    puStack_48 = &UNK_11074f570;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a831c; end: 1041a83a3;  */

void FUN_1041a831c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + *param_3))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = param_4;
    uStack_48 = param_5;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1041a83a4; end: 1041a84db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a83a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067a10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067a18);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113067a20);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041a84dc; end: 1041a8627; -[SCAdLeadGenAttachmentCallbacks initWithDismissHandler:submitHandler:submitFormMetricsHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a84dc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __Block_copy();
  __Block_copy();
  __Block_copy();
  if (param_3 == 0) {
    uVar8 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_11074f558;
    _swift_allocObject(&UNK_11074f558,0x18,7);
    *(long *)(puVar6 + 0x10) = param_3;
    uVar8 = 0x1041a8744;
  }
  if (param_4 == 0) {
    puVar7 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar7 = &UNK_11074f530;
    _swift_allocObject(&UNK_11074f530,0x18,7);
    *(long *)(puVar7 + 0x10) = param_4;
    pcVar1 = FUN_1041a8734;
  }
  if (param_5 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11074f508;
    _swift_allocObject(&UNK_11074f508,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    pcVar5 = FUN_1041a86fc;
  }
  puVar2 = (undefined8 *)(param_1 + _DAT_113067a10);
  *puVar2 = uVar8;
  puVar2[1] = puVar6;
  puVar2 = (undefined8 *)(param_1 + _DAT_113067a18);
  *puVar2 = pcVar1;
  puVar2[1] = puVar7;
  puVar2 = (undefined8 *)(param_1 + _DAT_113067a20);
  *puVar2 = pcVar5;
  puVar2[1] = puVar4;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041a8628; end: 1041a8687; -[SCAdLeadGenAttachmentCallbacks init] */

void FUN_1041a8628(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdAttachmentHandlerScope.AdLeadGenAttachmentCallbacks",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041a8654);
  (*pcVar1)();
}



/* Entry: 1041a8688; end: 1041a86db; -[SCAdLeadGenAttachmentCallbacks .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001041a86a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001041a86ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041a8688(long param_1)

{
  if (*(long *)(param_1 + _DAT_113067a10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113067a10))[1]);
    return;
  }
  return;
}



/* Entry: 1041a86dc; end: 1041a86fb;  */

void FUN_1041a86dc(void)

{
  _objc_opt_self(&PTR_PTR_11298def0);
  return;
}



/* Entry: 1041a86fc; end: 1041a8733;  */

void FUN_1041a86fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041a8734; end: 1041a877b;  */

void FUN_1041a8734(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001041a8740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1041a877c; end: 1041a87cb;  */

undefined8 FUN_1041a877c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e9b260;
  func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041a87cc; end: 1041a87cf;  */

undefined8 FUN_1041a87cc(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000100b91cc8();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar12 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112e9b260;
  func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = lVar12 - extraout_x8_00;
  lVar15 = 0x112f39728;
  func_0x0001000285a8(0x112f39728,&UNK_10db848e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = uVar13 - extraout_x8_01;
  uVar9 = param_1;
  __s10Foundation3URLV2eeoiySbAC_ACtFZ(param_1,param_2);
  if ((uVar9 & 1) != 0) {
    lVar6 = 0;
    func_0x000100b91b84();
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x14));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x14));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if ((uVar7 != *puVar2 || uVar9 != uVar10) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x18));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x18));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if (((uVar7 != *puVar2) || (uVar9 != uVar10)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x1c));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x1c));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if (((uVar7 != *puVar2) || (uVar9 != uVar10)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar8 = (undefined8 *)(param_1 + (long)*(int *)(lVar6 + 0x20));
    puVar3 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x20));
    uStack_f8 = puVar8[9];
    uStack_100 = puVar8[8];
    uStack_e8 = puVar8[0xb];
    uStack_f0 = puVar8[10];
    uStack_d8 = puVar8[0xd];
    uStack_e0 = puVar8[0xc];
    uStack_138 = puVar8[1];
    uStack_140 = *puVar8;
    uStack_128 = puVar8[3];
    uStack_130 = puVar8[2];
    uStack_118 = puVar8[5];
    uStack_120 = puVar8[4];
    uStack_108 = puVar8[7];
    uStack_110 = puVar8[6];
    uStack_c8 = puVar3[1];
    uStack_d0 = *puVar3;
    uStack_b8 = puVar3[3];
    uStack_c0 = puVar3[2];
    uStack_a8 = puVar3[5];
    uStack_b0 = puVar3[4];
    uStack_98 = puVar3[7];
    uStack_a0 = puVar3[6];
    uStack_78 = puVar3[0xb];
    uStack_80 = puVar3[10];
    uStack_68 = puVar3[0xd];
    uStack_70 = puVar3[0xc];
    uStack_88 = puVar3[9];
    uStack_90 = puVar3[8];
    puVar8 = &uStack_140;
    FUN_104191074(puVar8,&uStack_d0);
    if (((ulong)puVar8 & 1) != 0) {
      uVar9 = param_1 + (long)*(int *)(lVar6 + 0x24);
      func_0x00010418d078(uVar9,param_2 + *(int *)(lVar6 + 0x24));
      if ((uVar9 & 1) != 0) {
        iVar4 = *(int *)(lVar6 + 0x28);
        lVar15 = (long)*(int *)(lVar15 + 0x30);
        FUN_1041a877c(param_1 + (long)iVar4,lVar11);
        FUN_1041a877c(param_2 + iVar4,lVar11 + lVar15);
        pcVar14 = *(code **)(lVar16 + 0x30);
        lVar16 = lVar11;
        (*pcVar14)(lVar11,1,lVar5);
        if ((int)lVar16 == 1) {
          lVar15 = lVar11 + lVar15;
          (*pcVar14)(lVar15,1,lVar5);
          if ((int)lVar15 == 1) {
            FUN_1041b55ac(lVar11,0x112e9b260,&UNK_10daa8cf0);
            return 1;
          }
        }
        else {
          FUN_1041a877c(lVar11,uVar13);
          lVar16 = lVar11 + lVar15;
          (*pcVar14)(lVar16,1,lVar5);
          if ((int)lVar16 != 1) {
            FUN_1041a8f9c(lVar11 + lVar15,lVar12,&SUB_100b91cc8);
            uVar9 = uVar13;
            func_0x0001041d6e44(uVar13,lVar12);
            FUN_1041b1a2c(lVar12,&SUB_100b91cc8);
            FUN_1041b1a2c(uVar13,&SUB_100b91cc8);
            FUN_1041b55ac(lVar11,0x112e9b260,&UNK_10daa8cf0);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            return 1;
          }
          FUN_1041b1a2c(uVar13,&SUB_100b91cc8);
        }
        FUN_1041b55ac(lVar11,0x112f39728,&UNK_10db848e8);
      }
    }
  }
  return 0;
}



/* Entry: 1041a87d0; end: 1041a8b8f;  */

void FUN_1041a87d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_160 [8];
  long lStack_158;
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
  
  lVar3 = 0;
  func_0x000100b91cc8();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_158 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e9b260;
  func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - extraout_x8_00;
  uVar4 = 0;
  __s10Foundation3URLVMa(0);
  uVar8 = 0x112e092e0;
  FUN_1041a900c(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVSHAAMc_1103509a0);
  __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar4,uVar8);
  lVar3 = 0;
  func_0x000100b91b84();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x14));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x18));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x1c));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x20));
  uStack_98 = puVar1[9];
  uStack_a0 = puVar1[8];
  uStack_88 = puVar1[0xb];
  uStack_90 = puVar1[10];
  uStack_78 = puVar1[0xd];
  uStack_80 = puVar1[0xc];
  uStack_d8 = puVar1[1];
  uStack_e0 = *puVar1;
  uStack_c8 = puVar1[3];
  uStack_d0 = puVar1[2];
  uStack_b8 = puVar1[5];
  uStack_c0 = puVar1[4];
  uStack_a8 = puVar1[7];
  uStack_b0 = puVar1[6];
  FUN_104190e5c(param_1);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x24));
  __ss6HasherV8_combineyySuF(*puVar1);
  lVar7 = puVar1[2];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  lVar7 = 0;
  func_0x000100b91790();
  FUN_10418d26c((long)*(int *)(lVar7 + 0x18),param_1);
  lVar9 = *(long *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar9);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar9);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20)));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
  uStack_108 = puVar2[9];
  uStack_110 = puVar2[8];
  uStack_f8 = puVar2[0xb];
  uStack_100 = puVar2[10];
  uStack_e8 = puVar2[0xd];
  uStack_f0 = puVar2[0xc];
  uStack_148 = puVar2[1];
  uStack_150 = *puVar2;
  uStack_138 = puVar2[3];
  uStack_140 = puVar2[2];
  uStack_128 = puVar2[5];
  uStack_130 = puVar2[4];
  uStack_118 = puVar2[7];
  uStack_120 = puVar2[6];
  FUN_104190e5c(param_1);
  lVar7 = *(long *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar7);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar7);
  }
  FUN_1041a877c(unaff_x20 + *(int *)(lVar3 + 0x28),lVar6);
  lVar3 = lVar6;
  (**(code **)(lVar10 + 0x30))(lVar6,1,lStack_158);
  if ((int)lVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041a8f9c(lVar6,puVar5,&SUB_100b91cc8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1041d6e48(param_1);
    FUN_1041b1a2c(puVar5,&SUB_100b91cc8);
  }
  return;
}



/* Entry: 1041a8b90; end: 1041a8bcb;  */

void FUN_1041a8b90(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1041a87d0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041a8bcc; end: 1041a8bcf;  */

void FUN_1041a8bcc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_160 [8];
  long lStack_158;
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
  
  lVar3 = 0;
  func_0x000100b91cc8();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_158 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e9b260;
  func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - extraout_x8_00;
  uVar4 = 0;
  __s10Foundation3URLVMa(0);
  uVar8 = 0x112e092e0;
  FUN_1041a900c(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVSHAAMc_1103509a0);
  __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar4,uVar8);
  lVar3 = 0;
  func_0x000100b91b84();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x14));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x18));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x1c));
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x20));
  uStack_98 = puVar1[9];
  uStack_a0 = puVar1[8];
  uStack_88 = puVar1[0xb];
  uStack_90 = puVar1[10];
  uStack_78 = puVar1[0xd];
  uStack_80 = puVar1[0xc];
  uStack_d8 = puVar1[1];
  uStack_e0 = *puVar1;
  uStack_c8 = puVar1[3];
  uStack_d0 = puVar1[2];
  uStack_b8 = puVar1[5];
  uStack_c0 = puVar1[4];
  uStack_a8 = puVar1[7];
  uStack_b0 = puVar1[6];
  FUN_104190e5c(param_1);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x24));
  __ss6HasherV8_combineyySuF(*puVar1);
  lVar7 = puVar1[2];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar7);
  }
  lVar7 = 0;
  func_0x000100b91790();
  FUN_10418d26c((long)*(int *)(lVar7 + 0x18),param_1);
  lVar9 = *(long *)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c));
  if (lVar9 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar9);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar9);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x20)));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
  uStack_108 = puVar2[9];
  uStack_110 = puVar2[8];
  uStack_f8 = puVar2[0xb];
  uStack_100 = puVar2[10];
  uStack_e8 = puVar2[0xd];
  uStack_f0 = puVar2[0xc];
  uStack_148 = puVar2[1];
  uStack_150 = *puVar2;
  uStack_138 = puVar2[3];
  uStack_140 = puVar2[2];
  uStack_128 = puVar2[5];
  uStack_130 = puVar2[4];
  uStack_118 = puVar2[7];
  uStack_120 = puVar2[6];
  FUN_104190e5c(param_1);
  lVar7 = *(long *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar7);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar7);
  }
  FUN_1041a877c(unaff_x20 + *(int *)(lVar3 + 0x28),lVar6);
  lVar3 = lVar6;
  (**(code **)(lVar10 + 0x30))(lVar6,1,lStack_158);
  if ((int)lVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1041a8f9c(lVar6,puVar5,&SUB_100b91cc8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1041d6e48(param_1);
    FUN_1041b1a2c(puVar5,&SUB_100b91cc8);
  }
  return;
}



/* Entry: 1041a8bd0; end: 1041a8c07;  */

void FUN_1041a8bd0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1041a87d0(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041a8c08; end: 1041a8c0b;  */

undefined8 FUN_1041a8c08(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000100b91cc8();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar12 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112e9b260;
  func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = lVar12 - extraout_x8_00;
  lVar15 = 0x112f39728;
  func_0x0001000285a8(0x112f39728,&UNK_10db848e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = uVar13 - extraout_x8_01;
  uVar9 = param_1;
  __s10Foundation3URLV2eeoiySbAC_ACtFZ(param_1,param_2);
  if ((uVar9 & 1) != 0) {
    lVar6 = 0;
    func_0x000100b91b84();
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x14));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x14));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if ((uVar7 != *puVar2 || uVar9 != uVar10) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x18));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x18));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if (((uVar7 != *puVar2) || (uVar9 != uVar10)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x1c));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x1c));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if (((uVar7 != *puVar2) || (uVar9 != uVar10)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar8 = (undefined8 *)(param_1 + (long)*(int *)(lVar6 + 0x20));
    puVar3 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x20));
    uStack_f8 = puVar8[9];
    uStack_100 = puVar8[8];
    uStack_e8 = puVar8[0xb];
    uStack_f0 = puVar8[10];
    uStack_d8 = puVar8[0xd];
    uStack_e0 = puVar8[0xc];
    uStack_138 = puVar8[1];
    uStack_140 = *puVar8;
    uStack_128 = puVar8[3];
    uStack_130 = puVar8[2];
    uStack_118 = puVar8[5];
    uStack_120 = puVar8[4];
    uStack_108 = puVar8[7];
    uStack_110 = puVar8[6];
    uStack_c8 = puVar3[1];
    uStack_d0 = *puVar3;
    uStack_b8 = puVar3[3];
    uStack_c0 = puVar3[2];
    uStack_a8 = puVar3[5];
    uStack_b0 = puVar3[4];
    uStack_98 = puVar3[7];
    uStack_a0 = puVar3[6];
    uStack_78 = puVar3[0xb];
    uStack_80 = puVar3[10];
    uStack_68 = puVar3[0xd];
    uStack_70 = puVar3[0xc];
    uStack_88 = puVar3[9];
    uStack_90 = puVar3[8];
    puVar8 = &uStack_140;
    FUN_104191074(puVar8,&uStack_d0);
    if (((ulong)puVar8 & 1) != 0) {
      uVar9 = param_1 + (long)*(int *)(lVar6 + 0x24);
      func_0x00010418d078(uVar9,param_2 + *(int *)(lVar6 + 0x24));
      if ((uVar9 & 1) != 0) {
        iVar4 = *(int *)(lVar6 + 0x28);
        lVar15 = (long)*(int *)(lVar15 + 0x30);
        FUN_1041a877c(param_1 + (long)iVar4,lVar11);
        FUN_1041a877c(param_2 + iVar4,lVar11 + lVar15);
        pcVar14 = *(code **)(lVar16 + 0x30);
        lVar16 = lVar11;
        (*pcVar14)(lVar11,1,lVar5);
        if ((int)lVar16 == 1) {
          lVar15 = lVar11 + lVar15;
          (*pcVar14)(lVar15,1,lVar5);
          if ((int)lVar15 == 1) {
            FUN_1041b55ac(lVar11,0x112e9b260,&UNK_10daa8cf0);
            return 1;
          }
        }
        else {
          FUN_1041a877c(lVar11,uVar13);
          lVar16 = lVar11 + lVar15;
          (*pcVar14)(lVar16,1,lVar5);
          if ((int)lVar16 != 1) {
            FUN_1041a8f9c(lVar11 + lVar15,lVar12,&SUB_100b91cc8);
            uVar9 = uVar13;
            func_0x0001041d6e44(uVar13,lVar12);
            FUN_1041b1a2c(lVar12,&SUB_100b91cc8);
            FUN_1041b1a2c(uVar13,&SUB_100b91cc8);
            FUN_1041b55ac(lVar11,0x112e9b260,&UNK_10daa8cf0);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            return 1;
          }
          FUN_1041b1a2c(uVar13,&SUB_100b91cc8);
        }
        FUN_1041b55ac(lVar11,0x112f39728,&UNK_10db848e8);
      }
    }
  }
  return 0;
}



/* Entry: 1041a8c0c; end: 1041a8f9b;  */

undefined8 FUN_1041a8c0c(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000100b91cc8();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar12 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112e9b260;
  func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = lVar12 - extraout_x8_00;
  lVar15 = 0x112f39728;
  func_0x0001000285a8(0x112f39728,&UNK_10db848e8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = uVar13 - extraout_x8_01;
  uVar9 = param_1;
  __s10Foundation3URLV2eeoiySbAC_ACtFZ(param_1,param_2);
  if ((uVar9 & 1) != 0) {
    lVar6 = 0;
    func_0x000100b91b84();
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x14));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x14));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if ((uVar7 != *puVar2 || uVar9 != uVar10) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x18));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x18));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if (((uVar7 != *puVar2) || (uVar9 != uVar10)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar6 + 0x1c));
    uVar9 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar6 + 0x1c));
    uVar10 = puVar2[1];
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        return 0;
      }
    }
    else {
      if (uVar10 == 0) {
        return 0;
      }
      uVar7 = *puVar1;
      if (((uVar7 != *puVar2) || (uVar9 != uVar10)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    puVar8 = (undefined8 *)(param_1 + (long)*(int *)(lVar6 + 0x20));
    puVar3 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x20));
    uStack_f8 = puVar8[9];
    uStack_100 = puVar8[8];
    uStack_e8 = puVar8[0xb];
    uStack_f0 = puVar8[10];
    uStack_d8 = puVar8[0xd];
    uStack_e0 = puVar8[0xc];
    uStack_138 = puVar8[1];
    uStack_140 = *puVar8;
    uStack_128 = puVar8[3];
    uStack_130 = puVar8[2];
    uStack_118 = puVar8[5];
    uStack_120 = puVar8[4];
    uStack_108 = puVar8[7];
    uStack_110 = puVar8[6];
    uStack_c8 = puVar3[1];
    uStack_d0 = *puVar3;
    uStack_b8 = puVar3[3];
    uStack_c0 = puVar3[2];
    uStack_a8 = puVar3[5];
    uStack_b0 = puVar3[4];
    uStack_98 = puVar3[7];
    uStack_a0 = puVar3[6];
    uStack_78 = puVar3[0xb];
    uStack_80 = puVar3[10];
    uStack_68 = puVar3[0xd];
    uStack_70 = puVar3[0xc];
    uStack_88 = puVar3[9];
    uStack_90 = puVar3[8];
    puVar8 = &uStack_140;
    FUN_104191074(puVar8,&uStack_d0);
    if (((ulong)puVar8 & 1) != 0) {
      uVar9 = param_1 + (long)*(int *)(lVar6 + 0x24);
      func_0x00010418d078(uVar9,param_2 + *(int *)(lVar6 + 0x24));
      if ((uVar9 & 1) != 0) {
        iVar4 = *(int *)(lVar6 + 0x28);
        lVar15 = (long)*(int *)(lVar15 + 0x30);
        FUN_1041a877c(param_1 + (long)iVar4,lVar11);
        FUN_1041a877c(param_2 + iVar4,lVar11 + lVar15);
        pcVar14 = *(code **)(lVar16 + 0x30);
        lVar16 = lVar11;
        (*pcVar14)(lVar11,1,lVar5);
        if ((int)lVar16 == 1) {
          lVar15 = lVar11 + lVar15;
          (*pcVar14)(lVar15,1,lVar5);
          if ((int)lVar15 == 1) {
            FUN_1041b55ac(lVar11,0x112e9b260,&UNK_10daa8cf0);
            return 1;
          }
        }
        else {
          FUN_1041a877c(lVar11,uVar13);
          lVar16 = lVar11 + lVar15;
          (*pcVar14)(lVar16,1,lVar5);
          if ((int)lVar16 != 1) {
            FUN_1041a8f9c(lVar11 + lVar15,lVar12,&SUB_100b91cc8);
            uVar9 = uVar13;
            func_0x0001041d6e44(uVar13,lVar12);
            FUN_1041b1a2c(lVar12,&SUB_100b91cc8);
            FUN_1041b1a2c(uVar13,&SUB_100b91cc8);
            FUN_1041b55ac(lVar11,0x112e9b260,&UNK_10daa8cf0);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            return 1;
          }
          FUN_1041b1a2c(uVar13,&SUB_100b91cc8);
        }
        FUN_1041b55ac(lVar11,0x112f39728,&UNK_10db848e8);
      }
    }
  }
  return 0;
}



/* Entry: 1041a8f9c; end: 1041a8fdf;  */

undefined8 FUN_1041a8f9c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041a8fe0; end: 1041a900b;  */

void FUN_1041a8fe0(void)

{
  FUN_1041a900c(0x113067a50,&SUB_100b91b84,&UNK_10dcdfda8);
  return;
}



/* Entry: 1041a900c; end: 1041a904b;  */

void FUN_1041a900c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1041a904c; end: 1041b1a2b;  */

long * FUN_1041a904c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  code *pcVar33;
  undefined8 uVar34;
  long lVar35;
  code *pcVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar10 = 0;
    __s10Foundation3URLVMa();
    lVar19 = *(long *)(lVar10 + -8);
    pcVar20 = *(code **)(lVar19 + 0x10);
    (*pcVar20)(param_1,param_2);
    iVar8 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar29 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar29;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar31 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar31;
    iVar8 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar34 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar34;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar30 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar30;
    uVar38 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar38;
    uVar22 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar22;
    uVar42 = puVar2[6];
    puVar1[7] = puVar2[7];
    puVar1[6] = uVar42;
    uVar42 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar42;
    *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
    uVar28 = puVar2[0xb];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = uVar28;
    puVar1[0xd] = puVar2[0xd];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar28 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar28;
    uVar28 = puVar2[2];
    puVar1[2] = uVar28;
    lVar11 = 0;
    func_0x000100b91790();
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x18));
    lVar12 = 0;
    func_0x000100b918b4();
    lVar41 = *(long *)(lVar12 + -8);
    pcVar33 = *(code **)(lVar41 + 0x30);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar31);
    _swift_bridgeObjectRetain(uVar34);
    _swift_bridgeObjectRetain(uVar30);
    _swift_bridgeObjectRetain(uVar38);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar42);
    _swift_bridgeObjectRetain(uVar28);
    puVar13 = puVar3;
    (*pcVar33)(puVar3,1,lVar12);
    if ((int)puVar13 == 0) {
      uVar31 = puVar3[1];
      *puVar14 = *puVar3;
      puVar14[1] = uVar31;
      uVar29 = puVar3[2];
      uVar34 = puVar3[3];
      puVar14[2] = uVar29;
      puVar14[3] = uVar34;
      iVar8 = *(int *)(lVar12 + 0x1c);
      lVar16 = 0;
      __s10Foundation4UUIDVMa();
      lVar21 = *(long *)(lVar16 + -8);
      pcVar36 = *(code **)(lVar21 + 0x10);
      _swift_bridgeObjectRetain(uVar31);
      _objc_retain(uVar29);
      _objc_retain(uVar34);
      (*pcVar36)((long)puVar14 + (long)iVar8,(long)puVar3 + (long)iVar8,lVar16);
      puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x20));
      puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x20));
      uVar29 = puVar18[1];
      *puVar13 = *puVar18;
      puVar13[1] = uVar29;
      uVar34 = *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x24));
      *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x24)) = uVar34;
      puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x28));
      puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x28));
      uVar29 = puVar18[1];
      *puVar13 = *puVar18;
      puVar13[1] = uVar29;
      uVar30 = *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x2c));
      *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x2c)) = uVar30;
      puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x30));
      puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x30));
      uVar31 = puVar18[1];
      *puVar13 = *puVar18;
      puVar13[1] = uVar31;
      lVar37 = (long)*(int *)(lVar12 + 0x34);
      pcVar33 = *(code **)(lVar21 + 0x30);
      _swift_bridgeObjectRetain();
      _objc_retain(uVar34);
      _swift_bridgeObjectRetain(uVar29);
      _objc_retain(uVar30);
      _swift_bridgeObjectRetain(uVar31);
      lVar15 = (long)puVar3 + lVar37;
      (*pcVar33)(lVar15,1,lVar16);
      if ((int)lVar15 == 0) {
        (*pcVar36)((long)puVar14 + lVar37,(long)puVar3 + lVar37,lVar16);
        (**(code **)(lVar21 + 0x38))((long)puVar14 + lVar37,0,1,lVar16);
      }
      else {
        lVar15 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar14 + lVar37,(long)puVar3 + lVar37,
                *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x38));
      puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x38));
      uVar29 = puVar18[1];
      *puVar13 = *puVar18;
      puVar13[1] = uVar29;
      puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar12 + 0x3c));
      puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x3c));
      uVar29 = puVar3[1];
      *puVar13 = *puVar3;
      puVar13[1] = uVar29;
      pcVar33 = *(code **)(lVar41 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar29);
      (*pcVar33)(puVar14,0,1,lVar12);
    }
    else {
      lVar12 = 0x112dd42a0;
      func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
      _memcpy(puVar14,puVar3,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    uVar22 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c)) = uVar22;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
    uVar29 = puVar3[1];
    *puVar14 = *puVar3;
    puVar14[1] = uVar29;
    uVar31 = puVar3[3];
    puVar14[2] = puVar3[2];
    puVar14[3] = uVar31;
    uVar34 = puVar3[5];
    puVar14[4] = puVar3[4];
    puVar14[5] = uVar34;
    uVar30 = puVar3[6];
    puVar14[7] = puVar3[7];
    puVar14[6] = uVar30;
    uVar30 = puVar3[9];
    puVar14[8] = puVar3[8];
    puVar14[9] = uVar30;
    *(undefined1 *)(puVar14 + 0xc) = *(undefined1 *)(puVar3 + 0xc);
    uVar38 = puVar3[0xb];
    puVar14[10] = puVar3[10];
    puVar14[0xb] = uVar38;
    puVar14[0xd] = puVar3[0xd];
    uVar38 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28)) = uVar38;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    lVar11 = 0;
    func_0x000100b91cc8();
    lVar12 = *(long *)(lVar11 + -8);
    pcVar33 = *(code **)(lVar12 + 0x30);
    _objc_retain(uVar22);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar31);
    _swift_bridgeObjectRetain(uVar34);
    _swift_bridgeObjectRetain(uVar30);
    _objc_retain(uVar38);
    puVar14 = puVar2;
    (*pcVar33)(puVar2,1,lVar11);
    if ((int)puVar14 == 0) {
      uVar29 = *puVar2;
      uVar34 = puVar2[3];
      uVar31 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar29;
      puVar1[3] = uVar34;
      puVar1[2] = uVar31;
      uVar29 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar29;
      uVar29 = puVar2[6];
      uVar31 = puVar2[7];
      puVar1[6] = uVar29;
      puVar1[7] = uVar31;
      uVar31 = puVar2[8];
      uVar34 = puVar2[9];
      puVar1[8] = uVar31;
      puVar1[9] = uVar34;
      uVar34 = puVar2[10];
      uVar30 = puVar2[0xb];
      puVar1[10] = uVar34;
      puVar1[0xb] = uVar30;
      uVar30 = puVar2[0xc];
      uVar38 = puVar2[0xd];
      puVar1[0xc] = uVar30;
      puVar1[0xd] = uVar38;
      uVar38 = puVar2[0xe];
      uVar22 = puVar2[0xf];
      puVar1[0xe] = uVar38;
      puVar1[0xf] = uVar22;
      uVar22 = puVar2[0x10];
      puVar1[0x10] = uVar22;
      lVar15 = 0;
      func_0x000100b91d00();
      lVar37 = (long)*(int *)(lVar15 + 0x3c);
      lVar16 = 0;
      __s10Foundation4UUIDVMa();
      lVar21 = *(long *)(lVar16 + -8);
      pcVar33 = *(code **)(lVar21 + 0x30);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar34);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar38);
      _swift_bridgeObjectRetain(uVar22);
      lVar41 = (long)puVar2 + lVar37;
      (*pcVar33)(lVar41,1,lVar16);
      if ((int)lVar41 == 0) {
        (**(code **)(lVar21 + 0x10))((long)puVar1 + lVar37,(long)puVar2 + lVar37,lVar16);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar37,0,1,lVar16);
      }
      else {
        lVar41 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar37,(long)puVar2 + lVar37,
                *(undefined8 *)(*(long *)(lVar41 + -8) + 0x40));
      }
      lVar37 = (long)*(int *)(lVar15 + 0x40);
      lVar41 = (long)puVar2 + lVar37;
      (*pcVar33)(lVar41,1,lVar16);
      if ((int)lVar41 == 0) {
        (**(code **)(lVar21 + 0x10))((long)puVar1 + lVar37,(long)puVar2 + lVar37,lVar16);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar37,0,1,lVar16);
      }
      else {
        lVar41 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar37,(long)puVar2 + lVar37,
                *(undefined8 *)(*(long *)(lVar41 + -8) + 0x40));
      }
      lVar37 = (long)*(int *)(lVar15 + 0x44);
      lVar41 = (long)puVar2 + lVar37;
      (*pcVar33)(lVar41,1,lVar16);
      if ((int)lVar41 == 0) {
        (**(code **)(lVar21 + 0x10))((long)puVar1 + lVar37,(long)puVar2 + lVar37,lVar16);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar37,0,1,lVar16);
      }
      else {
        lVar41 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar37,(long)puVar2 + lVar37,
                *(undefined8 *)(*(long *)(lVar41 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x48)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x48));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x4c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x4c));
      uVar29 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x50));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x50)) = uVar29;
      uVar31 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x54));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x54)) = uVar31;
      uVar34 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x58));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x58)) = uVar34;
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x5c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x5c));
      lVar41 = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar34);
      if (lVar41 == 1) {
        uVar29 = puVar3[0xc];
        uVar34 = puVar3[0xf];
        uVar31 = puVar3[0xe];
        puVar14[0xd] = puVar3[0xd];
        puVar14[0xc] = uVar29;
        puVar14[0xf] = uVar34;
        puVar14[0xe] = uVar31;
        uVar29 = puVar3[0x10];
        uVar34 = puVar3[0x13];
        uVar31 = puVar3[0x12];
        puVar14[0x11] = puVar3[0x11];
        puVar14[0x10] = uVar29;
        puVar14[0x13] = uVar34;
        puVar14[0x12] = uVar31;
        uVar29 = puVar3[4];
        uVar34 = puVar3[7];
        uVar31 = puVar3[6];
        puVar14[5] = puVar3[5];
        puVar14[4] = uVar29;
        puVar14[7] = uVar34;
        puVar14[6] = uVar31;
        uVar29 = puVar3[8];
        uVar34 = puVar3[0xb];
        uVar31 = puVar3[10];
        puVar14[9] = puVar3[9];
        puVar14[8] = uVar29;
        puVar14[0xb] = uVar34;
        puVar14[10] = uVar31;
        uVar29 = *puVar3;
        uVar34 = puVar3[3];
        uVar31 = puVar3[2];
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
        puVar14[3] = uVar34;
        puVar14[2] = uVar31;
      }
      else {
        *puVar14 = *puVar3;
        puVar14[1] = lVar41;
        uVar29 = puVar3[3];
        puVar14[2] = puVar3[2];
        puVar14[3] = uVar29;
        uVar31 = puVar3[5];
        puVar14[4] = puVar3[4];
        puVar14[5] = uVar31;
        uVar34 = puVar3[7];
        puVar14[6] = puVar3[6];
        puVar14[7] = uVar34;
        uVar30 = puVar3[9];
        puVar14[8] = puVar3[8];
        puVar14[9] = uVar30;
        *(undefined1 *)(puVar14 + 10) = *(undefined1 *)(puVar3 + 10);
        uVar38 = puVar3[0xb];
        puVar14[0xc] = puVar3[0xc];
        puVar14[0xb] = uVar38;
        lVar37 = puVar3[0x12];
        _swift_bridgeObjectRetain(lVar41);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar31);
        _swift_bridgeObjectRetain(uVar34);
        _swift_bridgeObjectRetain(uVar30);
        if (lVar37 == 0) {
          uVar29 = puVar3[0xd];
          puVar14[0xe] = puVar3[0xe];
          puVar14[0xd] = uVar29;
          uVar29 = puVar3[0xf];
          puVar14[0x10] = puVar3[0x10];
          puVar14[0xf] = uVar29;
          uVar29 = puVar3[0x11];
          puVar14[0x12] = puVar3[0x12];
          puVar14[0x11] = uVar29;
          puVar14[0x13] = puVar3[0x13];
        }
        else {
          uVar29 = puVar3[0xe];
          puVar14[0xd] = puVar3[0xd];
          puVar14[0xe] = uVar29;
          uVar29 = puVar3[0x10];
          puVar14[0xf] = puVar3[0xf];
          puVar14[0x10] = uVar29;
          puVar14[0x11] = puVar3[0x11];
          puVar14[0x12] = lVar37;
          puVar14[0x13] = puVar3[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(lVar37);
        }
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x60)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x60));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 100));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 100));
      lVar41 = puVar3[1];
      if (lVar41 == 1) {
        uVar29 = *puVar3;
        uVar34 = puVar3[3];
        uVar31 = puVar3[2];
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
        puVar14[3] = uVar34;
        puVar14[2] = uVar31;
        puVar14[4] = puVar3[4];
      }
      else {
        *puVar14 = *puVar3;
        puVar14[1] = lVar41;
        puVar14[2] = puVar3[2];
        *(undefined1 *)(puVar14 + 3) = *(undefined1 *)(puVar3 + 3);
        *(undefined2 *)((long)puVar14 + 0x19) = *(undefined2 *)((long)puVar3 + 0x19);
        puVar14[4] = puVar3[4];
        _swift_bridgeObjectRetain();
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x68));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x68));
      if (puVar3[0x27] == 0) {
        _memcpy(puVar14,puVar3,0x160);
      }
      else {
        uVar29 = *puVar3;
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
        uVar29 = puVar3[2];
        uVar31 = puVar3[3];
        puVar14[2] = uVar29;
        puVar14[3] = uVar31;
        uVar23 = puVar3[4];
        puVar14[4] = uVar23;
        uVar31 = puVar3[5];
        puVar14[6] = puVar3[6];
        puVar14[5] = uVar31;
        uVar25 = puVar3[7];
        uVar31 = puVar3[8];
        puVar14[7] = uVar25;
        puVar14[8] = uVar31;
        *(undefined2 *)(puVar14 + 9) = *(undefined2 *)(puVar3 + 9);
        *(undefined1 *)((long)puVar14 + 0x4a) = *(undefined1 *)((long)puVar3 + 0x4a);
        uVar31 = puVar3[0xb];
        puVar14[10] = puVar3[10];
        puVar14[0xb] = uVar31;
        uVar24 = puVar3[0xc];
        puVar14[0xc] = uVar24;
        *(undefined1 *)(puVar14 + 0xd) = *(undefined1 *)(puVar3 + 0xd);
        uVar34 = puVar3[0xe];
        puVar14[0xf] = puVar3[0xf];
        puVar14[0xe] = uVar34;
        *(undefined1 *)(puVar14 + 0x10) = *(undefined1 *)(puVar3 + 0x10);
        uVar34 = puVar3[0x12];
        puVar14[0x11] = puVar3[0x11];
        puVar14[0x12] = uVar34;
        uVar30 = puVar3[0x14];
        puVar14[0x13] = puVar3[0x13];
        puVar14[0x14] = uVar30;
        uVar38 = puVar3[0x16];
        puVar14[0x15] = puVar3[0x15];
        puVar14[0x16] = uVar38;
        uVar22 = puVar3[0x18];
        puVar14[0x17] = puVar3[0x17];
        puVar14[0x18] = uVar22;
        uVar42 = puVar3[0x1a];
        puVar14[0x19] = puVar3[0x19];
        puVar14[0x1a] = uVar42;
        uVar28 = puVar3[0x1b];
        puVar14[0x1c] = puVar3[0x1c];
        puVar14[0x1b] = uVar28;
        uVar39 = puVar3[0x1d];
        puVar14[0x1d] = uVar39;
        *(undefined1 *)(puVar14 + 0x1e) = *(undefined1 *)(puVar3 + 0x1e);
        *(undefined1 *)((long)puVar14 + 0xf1) = *(undefined1 *)((long)puVar3 + 0xf1);
        *(undefined1 *)((long)puVar14 + 0xf2) = *(undefined1 *)((long)puVar3 + 0xf2);
        uVar28 = puVar3[0x20];
        puVar14[0x1f] = puVar3[0x1f];
        puVar14[0x20] = uVar28;
        uVar5 = puVar3[0x22];
        puVar14[0x21] = puVar3[0x21];
        puVar14[0x22] = uVar5;
        uVar6 = puVar3[0x24];
        puVar14[0x23] = puVar3[0x23];
        puVar14[0x24] = uVar6;
        uVar7 = puVar3[0x26];
        puVar14[0x25] = puVar3[0x25];
        puVar14[0x26] = uVar7;
        uVar26 = puVar3[0x27];
        puVar14[0x27] = uVar26;
        uVar43 = puVar3[0x28];
        puVar14[0x29] = puVar3[0x29];
        puVar14[0x28] = uVar43;
        uVar43 = puVar3[0x2b];
        puVar14[0x2a] = puVar3[0x2a];
        puVar14[0x2b] = uVar43;
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar25);
        _swift_bridgeObjectRetain(uVar31);
        _swift_bridgeObjectRetain(uVar24);
        _swift_bridgeObjectRetain(uVar34);
        _swift_bridgeObjectRetain(uVar30);
        _swift_bridgeObjectRetain(uVar38);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar42);
        _swift_bridgeObjectRetain(uVar39);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar26);
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x6c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x6c));
      uVar27 = puVar3[1];
      if (uVar27 >> 0x3c < 0xf) {
        uVar29 = *puVar3;
        func_0x00010006c00c(uVar29,uVar27);
        *puVar14 = uVar29;
        puVar14[1] = uVar27;
      }
      else {
        uVar29 = *puVar3;
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x70)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x70));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x74));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x74));
      uVar29 = puVar3[1];
      *puVar14 = *puVar3;
      puVar14[1] = uVar29;
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x78));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x78));
      uVar29 = puVar3[1];
      *puVar14 = *puVar3;
      puVar14[1] = uVar29;
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x7c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x7c));
      uVar31 = puVar3[1];
      *puVar14 = *puVar3;
      puVar14[1] = uVar31;
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x80));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x80));
      uVar27 = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar31);
      if (uVar27 >> 0x3c < 0xf) {
        uVar29 = *puVar3;
        func_0x00010006c00c(uVar29,uVar27);
        *puVar14 = uVar29;
        puVar14[1] = uVar27;
      }
      else {
        uVar29 = *puVar3;
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x84));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x84));
      lVar41 = 0;
      func_0x000100b91fbc();
      lVar37 = *(long *)(lVar41 + -8);
      puVar13 = puVar3;
      (**(code **)(lVar37 + 0x30))(puVar3,1,lVar41);
      if ((int)puVar13 == 0) {
        uVar29 = puVar3[1];
        *puVar14 = *puVar3;
        puVar14[1] = uVar29;
        uVar29 = puVar3[2];
        uVar34 = puVar3[5];
        uVar31 = puVar3[4];
        puVar14[3] = puVar3[3];
        puVar14[2] = uVar29;
        puVar14[5] = uVar34;
        puVar14[4] = uVar31;
        uVar29 = puVar3[6];
        uVar31 = puVar3[7];
        puVar14[6] = uVar29;
        puVar14[7] = uVar31;
        uVar31 = puVar3[8];
        puVar14[8] = uVar31;
        lVar35 = (long)*(int *)(lVar41 + 0x28);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar31);
        lVar40 = (long)puVar3 + lVar35;
        (*pcVar33)(lVar40,1,lVar16);
        if ((int)lVar40 == 0) {
          (**(code **)(lVar21 + 0x10))((long)puVar14 + lVar35,(long)puVar3 + lVar35,lVar16);
          (**(code **)(lVar21 + 0x38))((long)puVar14 + lVar35,0,1,lVar16);
        }
        else {
          lVar40 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar14 + lVar35,(long)puVar3 + lVar35,
                  *(undefined8 *)(*(long *)(lVar40 + -8) + 0x40));
        }
        puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar41 + 0x2c));
        puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar41 + 0x2c));
        uVar29 = puVar18[1];
        *puVar13 = *puVar18;
        puVar13[1] = uVar29;
        puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar41 + 0x30));
        puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar41 + 0x30));
        uVar29 = puVar18[1];
        *puVar13 = *puVar18;
        puVar13[1] = uVar29;
        lVar35 = (long)*(int *)(lVar41 + 0x34);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        lVar40 = (long)puVar3 + lVar35;
        (*pcVar33)(lVar40,1,lVar16);
        if ((int)lVar40 == 0) {
          (**(code **)(lVar21 + 0x10))((long)puVar14 + lVar35,(long)puVar3 + lVar35,lVar16);
          (**(code **)(lVar21 + 0x38))((long)puVar14 + lVar35,0,1,lVar16);
        }
        else {
          lVar40 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar14 + lVar35,(long)puVar3 + lVar35,
                  *(undefined8 *)(*(long *)(lVar40 + -8) + 0x40));
        }
        puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar41 + 0x38));
        puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar41 + 0x38));
        uVar29 = puVar18[1];
        *puVar13 = *puVar18;
        puVar13[1] = uVar29;
        puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar41 + 0x3c));
        puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar41 + 0x3c));
        uVar29 = puVar3[1];
        *puVar13 = *puVar3;
        puVar13[1] = uVar29;
        pcVar36 = *(code **)(lVar37 + 0x38);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        (*pcVar36)(puVar14,0,1,lVar41);
      }
      else {
        lVar41 = 0x112db39a8;
        func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
        _memcpy(puVar14,puVar3,*(undefined8 *)(*(long *)(lVar41 + -8) + 0x40));
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x88));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x88));
      lVar41 = puVar3[1];
      if (lVar41 == 0) {
        uVar29 = puVar3[0x10];
        uVar34 = puVar3[0x13];
        uVar31 = puVar3[0x12];
        puVar14[0x11] = puVar3[0x11];
        puVar14[0x10] = uVar29;
        puVar14[0x13] = uVar34;
        puVar14[0x12] = uVar31;
        *(undefined1 *)(puVar14 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar29 = puVar3[8];
        uVar34 = puVar3[0xb];
        uVar31 = puVar3[10];
        puVar14[9] = puVar3[9];
        puVar14[8] = uVar29;
        puVar14[0xb] = uVar34;
        puVar14[10] = uVar31;
        uVar34 = puVar3[0xc];
        uVar31 = puVar3[0xf];
        uVar29 = puVar3[0xe];
        puVar14[0xd] = puVar3[0xd];
        puVar14[0xc] = uVar34;
        puVar14[0xf] = uVar31;
        puVar14[0xe] = uVar29;
        uVar29 = *puVar3;
        uVar34 = puVar3[3];
        uVar31 = puVar3[2];
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
        puVar14[3] = uVar34;
        puVar14[2] = uVar31;
        uVar34 = puVar3[4];
        uVar31 = puVar3[7];
        uVar29 = puVar3[6];
        puVar14[5] = puVar3[5];
        puVar14[4] = uVar34;
        puVar14[7] = uVar31;
        puVar14[6] = uVar29;
      }
      else {
        *puVar14 = *puVar3;
        puVar14[1] = lVar41;
        lVar41 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar41 == 1) {
          uVar29 = puVar3[2];
          uVar34 = puVar3[5];
          uVar31 = puVar3[4];
          puVar14[3] = puVar3[3];
          puVar14[2] = uVar29;
          puVar14[5] = uVar34;
          puVar14[4] = uVar31;
          uVar29 = puVar3[6];
          puVar14[7] = puVar3[7];
          puVar14[6] = uVar29;
          puVar14[8] = puVar3[8];
        }
        else {
          lVar37 = puVar3[4];
          if (lVar37 == 1) {
            uVar29 = puVar3[2];
            uVar34 = puVar3[5];
            uVar31 = puVar3[4];
            puVar14[3] = puVar3[3];
            puVar14[2] = uVar29;
            puVar14[5] = uVar34;
            puVar14[4] = uVar31;
            puVar14[6] = puVar3[6];
          }
          else {
            uVar29 = puVar3[2];
            puVar14[3] = puVar3[3];
            puVar14[2] = uVar29;
            uVar29 = puVar3[5];
            uVar31 = puVar3[6];
            puVar14[4] = lVar37;
            puVar14[5] = uVar29;
            puVar14[6] = uVar31;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar31);
          }
          puVar14[7] = puVar3[7];
          puVar14[8] = lVar41;
          _swift_bridgeObjectRetain(lVar41);
        }
        lVar41 = puVar3[0xf];
        if (lVar41 == 1) {
          uVar29 = puVar3[9];
          puVar14[10] = puVar3[10];
          puVar14[9] = uVar29;
          uVar29 = puVar3[0xb];
          puVar14[0xc] = puVar3[0xc];
          puVar14[0xb] = uVar29;
          uVar29 = puVar3[0xd];
          puVar14[0xe] = puVar3[0xe];
          puVar14[0xd] = uVar29;
          puVar14[0xf] = puVar3[0xf];
        }
        else {
          lVar37 = puVar3[0xb];
          if (lVar37 == 1) {
            uVar29 = puVar3[9];
            puVar14[10] = puVar3[10];
            puVar14[9] = uVar29;
            uVar29 = puVar3[0xb];
            puVar14[0xc] = puVar3[0xc];
            puVar14[0xb] = uVar29;
            puVar14[0xd] = puVar3[0xd];
          }
          else {
            uVar29 = puVar3[9];
            puVar14[10] = puVar3[10];
            puVar14[9] = uVar29;
            uVar29 = puVar3[0xc];
            uVar31 = puVar3[0xd];
            puVar14[0xb] = lVar37;
            puVar14[0xc] = uVar29;
            puVar14[0xd] = uVar31;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar31);
          }
          puVar14[0xe] = puVar3[0xe];
          puVar14[0xf] = lVar41;
          _swift_bridgeObjectRetain(lVar41);
        }
        *(undefined2 *)(puVar14 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar29 = puVar3[0x11];
        puVar14[0x12] = puVar3[0x12];
        puVar14[0x11] = uVar29;
        puVar14[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar14 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x8c)) =
           *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x8c));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x90)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x90));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x94));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x94));
      uVar29 = *puVar3;
      uVar34 = puVar3[3];
      uVar31 = puVar3[2];
      puVar14[1] = puVar3[1];
      *puVar14 = uVar29;
      puVar14[3] = uVar34;
      puVar14[2] = uVar31;
      uVar29 = puVar3[4];
      uVar34 = puVar3[7];
      uVar31 = puVar3[6];
      puVar14[5] = puVar3[5];
      puVar14[4] = uVar29;
      puVar14[7] = uVar34;
      puVar14[6] = uVar31;
      uVar34 = puVar3[0xc];
      uVar31 = puVar3[0xf];
      uVar29 = puVar3[0xe];
      puVar14[0xd] = puVar3[0xd];
      puVar14[0xc] = uVar34;
      puVar14[0xf] = uVar31;
      puVar14[0xe] = uVar29;
      uVar34 = puVar3[8];
      uVar31 = puVar3[0xb];
      uVar29 = puVar3[10];
      puVar14[9] = puVar3[9];
      puVar14[8] = uVar34;
      puVar14[0xb] = uVar31;
      puVar14[10] = uVar29;
      uVar29 = *(undefined8 *)((long)puVar3 + 0xa9);
      *(undefined8 *)((long)puVar14 + 0xb1) = *(undefined8 *)((long)puVar3 + 0xb1);
      *(undefined8 *)((long)puVar14 + 0xa9) = uVar29;
      uVar29 = puVar3[0x12];
      uVar34 = puVar3[0x15];
      uVar31 = puVar3[0x14];
      puVar14[0x13] = puVar3[0x13];
      puVar14[0x12] = uVar29;
      puVar14[0x15] = uVar34;
      puVar14[0x14] = uVar31;
      uVar29 = puVar3[0x10];
      puVar14[0x11] = puVar3[0x11];
      puVar14[0x10] = uVar29;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x98)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x98));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x9c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x9c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xa0)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xa0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xa4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xa4));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xa8)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xa8));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xac));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xac));
      lVar41 = puVar3[1];
      if (lVar41 == 0) {
        uVar29 = *puVar3;
        uVar34 = puVar3[3];
        uVar31 = puVar3[2];
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
        puVar14[3] = uVar34;
        puVar14[2] = uVar31;
      }
      else {
        *puVar14 = *puVar3;
        puVar14[1] = lVar41;
        uVar29 = puVar3[3];
        puVar14[2] = puVar3[2];
        puVar14[3] = uVar29;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xb0)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xb0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xb4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xb4));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xb8));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xb8));
      lVar41 = puVar3[1];
      if (lVar41 == 0) {
        uVar29 = puVar3[0x10];
        uVar34 = puVar3[0x13];
        uVar31 = puVar3[0x12];
        puVar14[0x11] = puVar3[0x11];
        puVar14[0x10] = uVar29;
        puVar14[0x13] = uVar34;
        puVar14[0x12] = uVar31;
        *(undefined1 *)(puVar14 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar29 = puVar3[8];
        uVar34 = puVar3[0xb];
        uVar31 = puVar3[10];
        puVar14[9] = puVar3[9];
        puVar14[8] = uVar29;
        puVar14[0xb] = uVar34;
        puVar14[10] = uVar31;
        uVar34 = puVar3[0xc];
        uVar31 = puVar3[0xf];
        uVar29 = puVar3[0xe];
        puVar14[0xd] = puVar3[0xd];
        puVar14[0xc] = uVar34;
        puVar14[0xf] = uVar31;
        puVar14[0xe] = uVar29;
        uVar29 = *puVar3;
        uVar34 = puVar3[3];
        uVar31 = puVar3[2];
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
        puVar14[3] = uVar34;
        puVar14[2] = uVar31;
        uVar34 = puVar3[4];
        uVar31 = puVar3[7];
        uVar29 = puVar3[6];
        puVar14[5] = puVar3[5];
        puVar14[4] = uVar34;
        puVar14[7] = uVar31;
        puVar14[6] = uVar29;
      }
      else {
        *puVar14 = *puVar3;
        puVar14[1] = lVar41;
        lVar41 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar41 == 1) {
          uVar29 = puVar3[2];
          uVar34 = puVar3[5];
          uVar31 = puVar3[4];
          puVar14[3] = puVar3[3];
          puVar14[2] = uVar29;
          puVar14[5] = uVar34;
          puVar14[4] = uVar31;
          uVar29 = puVar3[6];
          puVar14[7] = puVar3[7];
          puVar14[6] = uVar29;
          puVar14[8] = puVar3[8];
        }
        else {
          lVar37 = puVar3[4];
          if (lVar37 == 1) {
            uVar29 = puVar3[2];
            uVar34 = puVar3[5];
            uVar31 = puVar3[4];
            puVar14[3] = puVar3[3];
            puVar14[2] = uVar29;
            puVar14[5] = uVar34;
            puVar14[4] = uVar31;
            puVar14[6] = puVar3[6];
          }
          else {
            uVar29 = puVar3[2];
            puVar14[3] = puVar3[3];
            puVar14[2] = uVar29;
            uVar29 = puVar3[5];
            uVar31 = puVar3[6];
            puVar14[4] = lVar37;
            puVar14[5] = uVar29;
            puVar14[6] = uVar31;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar31);
          }
          puVar14[7] = puVar3[7];
          puVar14[8] = lVar41;
          _swift_bridgeObjectRetain(lVar41);
        }
        lVar41 = puVar3[0xf];
        if (lVar41 == 1) {
          uVar29 = puVar3[9];
          puVar14[10] = puVar3[10];
          puVar14[9] = uVar29;
          uVar29 = puVar3[0xb];
          puVar14[0xc] = puVar3[0xc];
          puVar14[0xb] = uVar29;
          uVar29 = puVar3[0xd];
          puVar14[0xe] = puVar3[0xe];
          puVar14[0xd] = uVar29;
          puVar14[0xf] = puVar3[0xf];
        }
        else {
          lVar37 = puVar3[0xb];
          if (lVar37 == 1) {
            uVar29 = puVar3[9];
            puVar14[10] = puVar3[10];
            puVar14[9] = uVar29;
            uVar29 = puVar3[0xb];
            puVar14[0xc] = puVar3[0xc];
            puVar14[0xb] = uVar29;
            puVar14[0xd] = puVar3[0xd];
          }
          else {
            uVar29 = puVar3[9];
            puVar14[10] = puVar3[10];
            puVar14[9] = uVar29;
            uVar29 = puVar3[0xc];
            uVar31 = puVar3[0xd];
            puVar14[0xb] = lVar37;
            puVar14[0xc] = uVar29;
            puVar14[0xd] = uVar31;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar31);
          }
          puVar14[0xe] = puVar3[0xe];
          puVar14[0xf] = lVar41;
          _swift_bridgeObjectRetain(lVar41);
        }
        *(undefined2 *)(puVar14 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar29 = puVar3[0x11];
        puVar14[0x12] = puVar3[0x12];
        puVar14[0x11] = uVar29;
        puVar14[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar14 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xbc));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xbc));
      lVar41 = puVar3[1];
      if (lVar41 == 0) {
        uVar29 = puVar3[0x10];
        uVar34 = puVar3[0x13];
        uVar31 = puVar3[0x12];
        puVar14[0x11] = puVar3[0x11];
        puVar14[0x10] = uVar29;
        puVar14[0x13] = uVar34;
        puVar14[0x12] = uVar31;
        *(undefined1 *)(puVar14 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        uVar29 = puVar3[8];
        uVar34 = puVar3[0xb];
        uVar31 = puVar3[10];
        puVar14[9] = puVar3[9];
        puVar14[8] = uVar29;
        puVar14[0xb] = uVar34;
        puVar14[10] = uVar31;
        uVar34 = puVar3[0xc];
        uVar31 = puVar3[0xf];
        uVar29 = puVar3[0xe];
        puVar14[0xd] = puVar3[0xd];
        puVar14[0xc] = uVar34;
        puVar14[0xf] = uVar31;
        puVar14[0xe] = uVar29;
        uVar29 = *puVar3;
        uVar34 = puVar3[3];
        uVar31 = puVar3[2];
        puVar14[1] = puVar3[1];
        *puVar14 = uVar29;
        puVar14[3] = uVar34;
        puVar14[2] = uVar31;
        uVar34 = puVar3[4];
        uVar31 = puVar3[7];
        uVar29 = puVar3[6];
        puVar14[5] = puVar3[5];
        puVar14[4] = uVar34;
        puVar14[7] = uVar31;
        puVar14[6] = uVar29;
      }
      else {
        *puVar14 = *puVar3;
        puVar14[1] = lVar41;
        lVar41 = puVar3[8];
        _swift_bridgeObjectRetain();
        if (lVar41 == 1) {
          uVar29 = puVar3[2];
          uVar34 = puVar3[5];
          uVar31 = puVar3[4];
          puVar14[3] = puVar3[3];
          puVar14[2] = uVar29;
          puVar14[5] = uVar34;
          puVar14[4] = uVar31;
          uVar29 = puVar3[6];
          puVar14[7] = puVar3[7];
          puVar14[6] = uVar29;
          puVar14[8] = puVar3[8];
        }
        else {
          lVar37 = puVar3[4];
          if (lVar37 == 1) {
            uVar29 = puVar3[2];
            uVar34 = puVar3[5];
            uVar31 = puVar3[4];
            puVar14[3] = puVar3[3];
            puVar14[2] = uVar29;
            puVar14[5] = uVar34;
            puVar14[4] = uVar31;
            puVar14[6] = puVar3[6];
          }
          else {
            uVar29 = puVar3[2];
            puVar14[3] = puVar3[3];
            puVar14[2] = uVar29;
            uVar29 = puVar3[5];
            uVar31 = puVar3[6];
            puVar14[4] = lVar37;
            puVar14[5] = uVar29;
            puVar14[6] = uVar31;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar31);
          }
          puVar14[7] = puVar3[7];
          puVar14[8] = lVar41;
          _swift_bridgeObjectRetain(lVar41);
        }
        lVar41 = puVar3[0xf];
        if (lVar41 == 1) {
          uVar29 = puVar3[9];
          puVar14[10] = puVar3[10];
          puVar14[9] = uVar29;
          uVar29 = puVar3[0xb];
          puVar14[0xc] = puVar3[0xc];
          puVar14[0xb] = uVar29;
          uVar29 = puVar3[0xd];
          puVar14[0xe] = puVar3[0xe];
          puVar14[0xd] = uVar29;
          puVar14[0xf] = puVar3[0xf];
        }
        else {
          lVar37 = puVar3[0xb];
          if (lVar37 == 1) {
            uVar29 = puVar3[9];
            puVar14[10] = puVar3[10];
            puVar14[9] = uVar29;
            uVar29 = puVar3[0xb];
            puVar14[0xc] = puVar3[0xc];
            puVar14[0xb] = uVar29;
            puVar14[0xd] = puVar3[0xd];
          }
          else {
            uVar29 = puVar3[9];
            puVar14[10] = puVar3[10];
            puVar14[9] = uVar29;
            uVar29 = puVar3[0xc];
            uVar31 = puVar3[0xd];
            puVar14[0xb] = lVar37;
            puVar14[0xc] = uVar29;
            puVar14[0xd] = uVar31;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar31);
          }
          puVar14[0xe] = puVar3[0xe];
          puVar14[0xf] = lVar41;
          _swift_bridgeObjectRetain(lVar41);
        }
        *(undefined2 *)(puVar14 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        uVar29 = puVar3[0x11];
        puVar14[0x12] = puVar3[0x12];
        puVar14[0x11] = uVar29;
        puVar14[0x13] = puVar3[0x13];
        *(undefined1 *)(puVar14 + 0x14) = *(undefined1 *)(puVar3 + 0x14);
        _swift_bridgeObjectRetain();
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xc0)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xc0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xc4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xc4));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 200)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 200));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar15 + 0xcc)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0xcc));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x14)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x14));
      uVar34 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x18));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18)) = uVar34;
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
      uVar29 = *puVar3;
      puVar14[1] = puVar3[1];
      *puVar14 = uVar29;
      uVar29 = puVar3[2];
      uVar31 = puVar3[3];
      puVar14[2] = uVar29;
      puVar14[3] = uVar31;
      uVar31 = puVar3[4];
      puVar14[4] = uVar31;
      lVar41 = 0;
      func_0x000100b92084();
      puVar14 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar41 + 0x1c));
      puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar41 + 0x1c));
      lVar41 = 0;
      func_0x000100b92194();
      lVar15 = *(long *)(lVar41 + -8);
      pcVar36 = *(code **)(lVar15 + 0x30);
      _swift_bridgeObjectRetain(uVar34);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar31);
      puVar13 = puVar3;
      (*pcVar36)(puVar3,1,lVar41);
      if ((int)puVar13 == 0) {
        uVar29 = puVar3[1];
        *puVar14 = *puVar3;
        puVar14[1] = uVar29;
        uVar31 = puVar3[3];
        puVar14[2] = puVar3[2];
        puVar14[3] = uVar31;
        uVar34 = puVar3[5];
        puVar14[4] = puVar3[4];
        puVar14[5] = uVar34;
        puVar14[6] = puVar3[6];
        *(undefined1 *)(puVar14 + 7) = *(undefined1 *)(puVar3 + 7);
        puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar41 + 0x14));
        puVar18 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar41 + 0x14));
        lVar37 = 0;
        func_0x000100b922c8();
        lVar40 = *(long *)(lVar37 + -8);
        pcVar36 = *(code **)(lVar40 + 0x30);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar31);
        _swift_bridgeObjectRetain(uVar34);
        puVar17 = puVar18;
        (*pcVar36)(puVar18,1,lVar37);
        if ((int)puVar17 == 0) {
          uVar29 = puVar18[1];
          *puVar13 = *puVar18;
          puVar13[1] = uVar29;
          uVar29 = puVar18[2];
          uVar34 = puVar18[5];
          uVar31 = puVar18[4];
          puVar13[3] = puVar18[3];
          puVar13[2] = uVar29;
          puVar13[5] = uVar34;
          puVar13[4] = uVar31;
          uVar29 = puVar18[7];
          puVar13[6] = puVar18[6];
          puVar13[7] = uVar29;
          lVar32 = (long)*(int *)(lVar37 + 0x28);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          lVar35 = (long)puVar18 + lVar32;
          (*pcVar33)(lVar35,1,lVar16);
          if ((int)lVar35 == 0) {
            (**(code **)(lVar21 + 0x10))((long)puVar13 + lVar32,(long)puVar18 + lVar32,lVar16);
            (**(code **)(lVar21 + 0x38))((long)puVar13 + lVar32,0,1,lVar16);
          }
          else {
            lVar35 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            _memcpy((long)puVar13 + lVar32,(long)puVar18 + lVar32,
                    *(undefined8 *)(*(long *)(lVar35 + -8) + 0x40));
          }
          puVar17 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar37 + 0x2c));
          puVar4 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar37 + 0x2c));
          uVar29 = puVar4[1];
          *puVar17 = *puVar4;
          puVar17[1] = uVar29;
          puVar17 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar37 + 0x30));
          puVar4 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar37 + 0x30));
          uVar29 = puVar4[1];
          *puVar17 = *puVar4;
          puVar17[1] = uVar29;
          lVar32 = (long)*(int *)(lVar37 + 0x34);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          lVar35 = (long)puVar18 + lVar32;
          (*pcVar33)(lVar35,1,lVar16);
          if ((int)lVar35 == 0) {
            (**(code **)(lVar21 + 0x10))((long)puVar13 + lVar32,(long)puVar18 + lVar32,lVar16);
            (**(code **)(lVar21 + 0x38))((long)puVar13 + lVar32,0,1,lVar16);
          }
          else {
            lVar16 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            _memcpy((long)puVar13 + lVar32,(long)puVar18 + lVar32,
                    *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
          }
          puVar17 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar37 + 0x38));
          puVar18 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar37 + 0x38));
          uVar29 = puVar18[1];
          *puVar17 = *puVar18;
          puVar17[1] = uVar29;
          pcVar33 = *(code **)(lVar40 + 0x38);
          _swift_bridgeObjectRetain();
          (*pcVar33)(puVar13,0,1,lVar37);
        }
        else {
          lVar16 = 0x112dd1600;
          func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
          _memcpy(puVar13,puVar18,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar41 + 0x18));
        puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar41 + 0x18));
        lVar16 = 0;
        func_0x000100b92390();
        lVar21 = *(long *)(lVar16 + -8);
        puVar18 = puVar3;
        (**(code **)(lVar21 + 0x30))(puVar3,1,lVar16);
        if ((int)puVar18 == 0) {
          uVar29 = puVar3[1];
          *puVar13 = *puVar3;
          puVar13[1] = uVar29;
          lVar40 = (long)*(int *)(lVar16 + 0x14);
          pcVar33 = *(code **)(lVar19 + 0x30);
          _swift_bridgeObjectRetain();
          lVar37 = (long)puVar3 + lVar40;
          (*pcVar33)(lVar37,1,lVar10);
          if ((int)lVar37 == 0) {
            (*pcVar20)((long)puVar13 + lVar40,(long)puVar3 + lVar40,lVar10);
            (**(code **)(lVar19 + 0x38))((long)puVar13 + lVar40,0,1,lVar10);
          }
          else {
            lVar10 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            _memcpy((long)puVar13 + lVar40,(long)puVar3 + lVar40,
                    *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
          }
          (**(code **)(lVar21 + 0x38))(puVar13,0,1,lVar16);
        }
        else {
          lVar10 = 0x112dd1458;
          func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
          _memcpy(puVar13,puVar3,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
        }
        (**(code **)(lVar15 + 0x38))(puVar14,0,1,lVar41);
      }
      else {
        lVar10 = 0x112dd1460;
        func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
        _memcpy(puVar14,puVar3,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
      uVar29 = puVar2[1];
      *puVar14 = *puVar2;
      puVar14[1] = uVar29;
      pcVar20 = *(code **)(lVar12 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar20)(puVar1,0,1,lVar11);
    }
    else {
      lVar10 = 0x112e9b260;
      func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar27 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar10 + (uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041b1a2c; end: 1041b1a67;  */

undefined8 FUN_1041b1a2c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1041b1a68; end: 1041b5593;  */

long FUN_1041b1a68(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar6 + -8);
  pcVar16 = *(code **)(lVar15 + 0x20);
  (*pcVar16)(param_1,param_2,lVar6);
  iVar2 = *(int *)(param_3 + 0x18);
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar24 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar24;
  puVar3 = (undefined8 *)(param_2 + iVar2);
  uVar24 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + iVar2);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar24;
  iVar2 = *(int *)(param_3 + 0x20);
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar24 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar24;
  puVar3 = (undefined8 *)(param_1 + iVar2);
  puVar4 = (undefined8 *)(param_2 + iVar2);
  uVar24 = puVar4[8];
  uVar26 = puVar4[0xb];
  uVar25 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar24;
  puVar3[0xb] = uVar26;
  puVar3[10] = uVar25;
  uVar24 = puVar4[0xc];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar24;
  uVar24 = *puVar4;
  uVar26 = puVar4[3];
  uVar25 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar24;
  puVar3[3] = uVar26;
  puVar3[2] = uVar25;
  uVar26 = puVar4[4];
  uVar25 = puVar4[7];
  uVar24 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar26;
  puVar3[7] = uVar25;
  puVar3[6] = uVar24;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar24 = puVar4[1];
  puVar3[2] = puVar4[2];
  puVar3[1] = uVar24;
  lVar7 = 0;
  func_0x000100b91790();
  puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x18));
  puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x18));
  lVar8 = 0;
  func_0x000100b918b4();
  lVar21 = *(long *)(lVar8 + -8);
  puVar9 = puVar1;
  (**(code **)(lVar21 + 0x30))(puVar1,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar24 = *puVar1;
    uVar26 = puVar1[3];
    uVar25 = puVar1[2];
    puVar10[1] = puVar1[1];
    *puVar10 = uVar24;
    puVar10[3] = uVar26;
    puVar10[2] = uVar25;
    iVar2 = *(int *)(lVar8 + 0x1c);
    lVar12 = 0;
    __s10Foundation4UUIDVMa();
    lVar20 = *(long *)(lVar12 + -8);
    pcVar22 = *(code **)(lVar20 + 0x20);
    (*pcVar22)((long)puVar10 + (long)iVar2,(long)puVar1 + (long)iVar2,lVar12);
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x20));
    uVar24 = *puVar9;
    puVar14 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x20));
    puVar14[1] = puVar9[1];
    *puVar14 = uVar24;
    *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x24)) =
         *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24));
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x28));
    uVar24 = *puVar9;
    puVar14 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x28));
    puVar14[1] = puVar9[1];
    *puVar14 = uVar24;
    *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x2c)) =
         *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x2c));
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x30));
    uVar24 = *puVar9;
    puVar14 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x30));
    puVar14[1] = puVar9[1];
    *puVar14 = uVar24;
    lVar17 = (long)*(int *)(lVar8 + 0x34);
    lVar11 = (long)puVar1 + lVar17;
    (**(code **)(lVar20 + 0x30))(lVar11,1,lVar12);
    if ((int)lVar11 == 0) {
      (*pcVar22)((long)puVar10 + lVar17,(long)puVar1 + lVar17,lVar12);
      (**(code **)(lVar20 + 0x38))((long)puVar10 + lVar17,0,1,lVar12);
    }
    else {
      lVar11 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar10 + lVar17,(long)puVar1 + lVar17,
              *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38));
    uVar24 = *puVar9;
    puVar14 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x38));
    puVar14[1] = puVar9[1];
    *puVar14 = uVar24;
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x3c));
    uVar24 = *puVar1;
    puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x3c));
    puVar9[1] = puVar1[1];
    *puVar9 = uVar24;
    (**(code **)(lVar21 + 0x38))(puVar10,0,1,lVar8);
  }
  else {
    lVar8 = 0x112dd42a0;
    func_0x0001000285a8(0x112dd42a0,&UNK_10dcdf270);
    _memcpy(puVar10,puVar1,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x1c)) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x1c));
  *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x20)) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x20));
  puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x24));
  puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x24));
  uVar24 = *puVar1;
  uVar26 = puVar1[3];
  uVar25 = puVar1[2];
  puVar10[1] = puVar1[1];
  *puVar10 = uVar24;
  puVar10[3] = uVar26;
  puVar10[2] = uVar25;
  uVar24 = puVar1[10];
  uVar26 = puVar1[0xd];
  uVar25 = puVar1[0xc];
  puVar10[0xb] = puVar1[0xb];
  puVar10[10] = uVar24;
  puVar10[0xd] = uVar26;
  puVar10[0xc] = uVar25;
  uVar24 = puVar1[6];
  uVar26 = puVar1[9];
  uVar25 = puVar1[8];
  puVar10[7] = puVar1[7];
  puVar10[6] = uVar24;
  puVar10[9] = uVar26;
  puVar10[8] = uVar25;
  uVar24 = puVar1[4];
  puVar10[5] = puVar1[5];
  puVar10[4] = uVar24;
  *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x28)) =
       *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x28));
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  lVar7 = 0;
  func_0x000100b91cc8();
  lVar8 = *(long *)(lVar7 + -8);
  puVar10 = puVar4;
  (**(code **)(lVar8 + 0x30))(puVar4,1,lVar7);
  if ((int)puVar10 == 0) {
    uVar24 = *puVar4;
    uVar26 = puVar4[3];
    uVar25 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar24;
    puVar3[3] = uVar26;
    puVar3[2] = uVar25;
    puVar3[4] = puVar4[4];
    uVar24 = puVar4[5];
    puVar3[6] = puVar4[6];
    puVar3[5] = uVar24;
    uVar24 = puVar4[7];
    puVar3[8] = puVar4[8];
    puVar3[7] = uVar24;
    uVar24 = puVar4[9];
    puVar3[10] = puVar4[10];
    puVar3[9] = uVar24;
    uVar24 = puVar4[0xb];
    puVar3[0xc] = puVar4[0xc];
    puVar3[0xb] = uVar24;
    uVar24 = puVar4[0xd];
    puVar3[0xe] = puVar4[0xe];
    puVar3[0xd] = uVar24;
    uVar24 = puVar4[0xf];
    puVar3[0x10] = puVar4[0x10];
    puVar3[0xf] = uVar24;
    lVar11 = 0;
    func_0x000100b91d00();
    lVar17 = (long)*(int *)(lVar11 + 0x3c);
    lVar12 = 0;
    __s10Foundation4UUIDVMa();
    lVar20 = *(long *)(lVar12 + -8);
    pcVar22 = *(code **)(lVar20 + 0x30);
    lVar21 = (long)puVar4 + lVar17;
    (*pcVar22)(lVar21,1,lVar12);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar20 + 0x20))((long)puVar3 + lVar17,(long)puVar4 + lVar17,lVar12);
      (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar17,0,1,lVar12);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar17,(long)puVar4 + lVar17,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    lVar17 = (long)*(int *)(lVar11 + 0x40);
    lVar21 = (long)puVar4 + lVar17;
    (*pcVar22)(lVar21,1,lVar12);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar20 + 0x20))((long)puVar3 + lVar17,(long)puVar4 + lVar17,lVar12);
      (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar17,0,1,lVar12);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar17,(long)puVar4 + lVar17,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    lVar17 = (long)*(int *)(lVar11 + 0x44);
    lVar21 = (long)puVar4 + lVar17;
    (*pcVar22)(lVar21,1,lVar12);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar20 + 0x20))((long)puVar3 + lVar17,(long)puVar4 + lVar17,lVar12);
      (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar17,0,1,lVar12);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar17,(long)puVar4 + lVar17,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x48));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x4c)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x4c));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x50)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x50));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x54)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x54));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x58)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x58));
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x5c));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x5c));
    uVar24 = *puVar1;
    uVar26 = puVar1[3];
    uVar25 = puVar1[2];
    puVar10[1] = puVar1[1];
    *puVar10 = uVar24;
    puVar10[3] = uVar26;
    puVar10[2] = uVar25;
    uVar26 = puVar1[8];
    uVar25 = puVar1[0xb];
    uVar24 = puVar1[10];
    puVar10[9] = puVar1[9];
    puVar10[8] = uVar26;
    puVar10[0xb] = uVar25;
    puVar10[10] = uVar24;
    uVar26 = puVar1[4];
    uVar25 = puVar1[7];
    uVar24 = puVar1[6];
    puVar10[5] = puVar1[5];
    puVar10[4] = uVar26;
    puVar10[7] = uVar25;
    puVar10[6] = uVar24;
    uVar26 = puVar1[0x10];
    uVar25 = puVar1[0x13];
    uVar24 = puVar1[0x12];
    puVar10[0x11] = puVar1[0x11];
    puVar10[0x10] = uVar26;
    puVar10[0x13] = uVar25;
    puVar10[0x12] = uVar24;
    uVar26 = puVar1[0xc];
    uVar25 = puVar1[0xf];
    uVar24 = puVar1[0xe];
    puVar10[0xd] = puVar1[0xd];
    puVar10[0xc] = uVar26;
    puVar10[0xf] = uVar25;
    puVar10[0xe] = uVar24;
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x60)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x60));
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 100));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 100));
    puVar10[4] = puVar1[4];
    uVar26 = *puVar1;
    uVar25 = puVar1[3];
    uVar24 = puVar1[2];
    puVar10[1] = puVar1[1];
    *puVar10 = uVar26;
    puVar10[3] = uVar25;
    puVar10[2] = uVar24;
    _memcpy((long)puVar3 + (long)*(int *)(lVar11 + 0x68),
            (long)puVar4 + (long)*(int *)(lVar11 + 0x68),0x160);
    puVar10 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x6c));
    uVar24 = *puVar10;
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x6c));
    puVar1[1] = puVar10[1];
    *puVar1 = uVar24;
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x70)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x70));
    puVar10 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x74));
    uVar24 = *puVar10;
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x74));
    puVar1[1] = puVar10[1];
    *puVar1 = uVar24;
    puVar10 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x78));
    uVar24 = *puVar10;
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x78));
    puVar1[1] = puVar10[1];
    *puVar1 = uVar24;
    puVar10 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x7c));
    uVar24 = *puVar10;
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x7c));
    puVar1[1] = puVar10[1];
    *puVar1 = uVar24;
    puVar10 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x80));
    uVar24 = *puVar10;
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x80));
    puVar1[1] = puVar10[1];
    *puVar1 = uVar24;
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x84));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x84));
    lVar21 = 0;
    func_0x000100b91fbc();
    lVar17 = *(long *)(lVar21 + -8);
    puVar9 = puVar1;
    (**(code **)(lVar17 + 0x30))(puVar1,1,lVar21);
    if ((int)puVar9 == 0) {
      uVar24 = *puVar1;
      uVar26 = puVar1[3];
      uVar25 = puVar1[2];
      puVar10[1] = puVar1[1];
      *puVar10 = uVar24;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
      puVar10[4] = puVar1[4];
      uVar24 = puVar1[5];
      puVar10[6] = puVar1[6];
      puVar10[5] = uVar24;
      uVar24 = puVar1[7];
      puVar10[8] = puVar1[8];
      puVar10[7] = uVar24;
      lVar18 = (long)*(int *)(lVar21 + 0x28);
      lVar23 = (long)puVar1 + lVar18;
      (*pcVar22)(lVar23,1,lVar12);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar20 + 0x20))((long)puVar10 + lVar18,(long)puVar1 + lVar18,lVar12);
        (**(code **)(lVar20 + 0x38))((long)puVar10 + lVar18,0,1,lVar12);
      }
      else {
        lVar23 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar10 + lVar18,(long)puVar1 + lVar18,
                *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
      }
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x2c));
      uVar24 = *puVar9;
      puVar14 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x2c));
      puVar14[1] = puVar9[1];
      *puVar14 = uVar24;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x30));
      uVar24 = *puVar9;
      puVar14 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x30));
      puVar14[1] = puVar9[1];
      *puVar14 = uVar24;
      lVar18 = (long)*(int *)(lVar21 + 0x34);
      lVar23 = (long)puVar1 + lVar18;
      (*pcVar22)(lVar23,1,lVar12);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar20 + 0x20))((long)puVar10 + lVar18,(long)puVar1 + lVar18,lVar12);
        (**(code **)(lVar20 + 0x38))((long)puVar10 + lVar18,0,1,lVar12);
      }
      else {
        lVar23 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar10 + lVar18,(long)puVar1 + lVar18,
                *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
      }
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x38));
      uVar24 = *puVar9;
      puVar14 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x38));
      puVar14[1] = puVar9[1];
      *puVar14 = uVar24;
      puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x3c));
      uVar24 = *puVar1;
      puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x3c));
      puVar9[1] = puVar1[1];
      *puVar9 = uVar24;
      (**(code **)(lVar17 + 0x38))(puVar10,0,1,lVar21);
    }
    else {
      lVar21 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar10,puVar1,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x88));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x88));
    uVar26 = puVar1[8];
    uVar25 = puVar1[0xb];
    uVar24 = puVar1[10];
    puVar10[9] = puVar1[9];
    puVar10[8] = uVar26;
    puVar10[0xb] = uVar25;
    puVar10[10] = uVar24;
    *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
    uVar26 = puVar1[0x10];
    uVar25 = puVar1[0x13];
    uVar24 = puVar1[0x12];
    puVar10[0x11] = puVar1[0x11];
    puVar10[0x10] = uVar26;
    puVar10[0x13] = uVar25;
    puVar10[0x12] = uVar24;
    uVar24 = puVar1[0xc];
    uVar26 = puVar1[0xf];
    uVar25 = puVar1[0xe];
    puVar10[0xd] = puVar1[0xd];
    puVar10[0xc] = uVar24;
    puVar10[0xf] = uVar26;
    puVar10[0xe] = uVar25;
    uVar24 = *puVar1;
    uVar26 = puVar1[3];
    uVar25 = puVar1[2];
    puVar10[1] = puVar1[1];
    *puVar10 = uVar24;
    puVar10[3] = uVar26;
    puVar10[2] = uVar25;
    uVar26 = puVar1[4];
    uVar25 = puVar1[7];
    uVar24 = puVar1[6];
    puVar10[5] = puVar1[5];
    puVar10[4] = uVar26;
    puVar10[7] = uVar25;
    puVar10[6] = uVar24;
    *(undefined4 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x8c)) =
         *(undefined4 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x8c));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x90)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x90));
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x94));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x94));
    uVar24 = *puVar1;
    uVar26 = puVar1[3];
    uVar25 = puVar1[2];
    puVar10[1] = puVar1[1];
    *puVar10 = uVar24;
    puVar10[3] = uVar26;
    puVar10[2] = uVar25;
    uVar24 = puVar1[4];
    uVar26 = puVar1[7];
    uVar25 = puVar1[6];
    puVar10[5] = puVar1[5];
    puVar10[4] = uVar24;
    puVar10[7] = uVar26;
    puVar10[6] = uVar25;
    uVar26 = puVar1[0xc];
    uVar25 = puVar1[0xf];
    uVar24 = puVar1[0xe];
    puVar10[0xd] = puVar1[0xd];
    puVar10[0xc] = uVar26;
    puVar10[0xf] = uVar25;
    puVar10[0xe] = uVar24;
    uVar26 = puVar1[8];
    uVar25 = puVar1[0xb];
    uVar24 = puVar1[10];
    puVar10[9] = puVar1[9];
    puVar10[8] = uVar26;
    puVar10[0xb] = uVar25;
    puVar10[10] = uVar24;
    uVar24 = *(undefined8 *)((long)puVar1 + 0xa9);
    *(undefined8 *)((long)puVar10 + 0xb1) = *(undefined8 *)((long)puVar1 + 0xb1);
    *(undefined8 *)((long)puVar10 + 0xa9) = uVar24;
    uVar24 = puVar1[0x12];
    uVar26 = puVar1[0x15];
    uVar25 = puVar1[0x14];
    puVar10[0x13] = puVar1[0x13];
    puVar10[0x12] = uVar24;
    puVar10[0x15] = uVar26;
    puVar10[0x14] = uVar25;
    uVar24 = puVar1[0x10];
    puVar10[0x11] = puVar1[0x11];
    puVar10[0x10] = uVar24;
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x98)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x98));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x9c)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x9c));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xa0)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xa0));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xa4)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xa4));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xa8)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xa8));
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xac));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xac));
    uVar24 = *puVar1;
    uVar26 = puVar1[3];
    uVar25 = puVar1[2];
    puVar10[1] = puVar1[1];
    *puVar10 = uVar24;
    puVar10[3] = uVar26;
    puVar10[2] = uVar25;
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xb0)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xb0));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xb4)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xb4));
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xb8));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xb8));
    uVar24 = *puVar1;
    uVar26 = puVar1[3];
    uVar25 = puVar1[2];
    puVar10[1] = puVar1[1];
    *puVar10 = uVar24;
    puVar10[3] = uVar26;
    puVar10[2] = uVar25;
    uVar26 = puVar1[8];
    uVar25 = puVar1[0xb];
    uVar24 = puVar1[10];
    puVar10[9] = puVar1[9];
    puVar10[8] = uVar26;
    puVar10[0xb] = uVar25;
    puVar10[10] = uVar24;
    uVar24 = puVar1[4];
    uVar26 = puVar1[7];
    uVar25 = puVar1[6];
    puVar10[5] = puVar1[5];
    puVar10[4] = uVar24;
    puVar10[7] = uVar26;
    puVar10[6] = uVar25;
    *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
    uVar26 = puVar1[0x10];
    uVar25 = puVar1[0x13];
    uVar24 = puVar1[0x12];
    puVar10[0x11] = puVar1[0x11];
    puVar10[0x10] = uVar26;
    puVar10[0x13] = uVar25;
    puVar10[0x12] = uVar24;
    uVar24 = puVar1[0xc];
    uVar26 = puVar1[0xf];
    uVar25 = puVar1[0xe];
    puVar10[0xd] = puVar1[0xd];
    puVar10[0xc] = uVar24;
    puVar10[0xf] = uVar26;
    puVar10[0xe] = uVar25;
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xbc));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xbc));
    uVar24 = *puVar1;
    uVar26 = puVar1[3];
    uVar25 = puVar1[2];
    puVar10[1] = puVar1[1];
    *puVar10 = uVar24;
    puVar10[3] = uVar26;
    puVar10[2] = uVar25;
    uVar26 = puVar1[8];
    uVar25 = puVar1[0xb];
    uVar24 = puVar1[10];
    puVar10[9] = puVar1[9];
    puVar10[8] = uVar26;
    puVar10[0xb] = uVar25;
    puVar10[10] = uVar24;
    uVar24 = puVar1[4];
    uVar26 = puVar1[7];
    uVar25 = puVar1[6];
    puVar10[5] = puVar1[5];
    puVar10[4] = uVar24;
    puVar10[7] = uVar26;
    puVar10[6] = uVar25;
    *(undefined1 *)(puVar10 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
    uVar26 = puVar1[0x10];
    uVar25 = puVar1[0x13];
    uVar24 = puVar1[0x12];
    puVar10[0x11] = puVar1[0x11];
    puVar10[0x10] = uVar26;
    puVar10[0x13] = uVar25;
    puVar10[0x12] = uVar24;
    uVar24 = puVar1[0xc];
    uVar26 = puVar1[0xf];
    uVar25 = puVar1[0xe];
    puVar10[0xd] = puVar1[0xd];
    puVar10[0xc] = uVar24;
    puVar10[0xf] = uVar26;
    puVar10[0xe] = uVar25;
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xc0)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xc0));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xc4)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xc4));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar11 + 200)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 200));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0xcc)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0xcc));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x14)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x14));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x18)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x18));
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x1c));
    puVar1 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x1c));
    *puVar10 = *puVar1;
    uVar24 = puVar1[1];
    puVar10[2] = puVar1[2];
    puVar10[1] = uVar24;
    uVar24 = puVar1[3];
    puVar10[4] = puVar1[4];
    puVar10[3] = uVar24;
    lVar21 = 0;
    func_0x000100b92084();
    puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x1c));
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x1c));
    lVar21 = 0;
    func_0x000100b92194();
    lVar11 = *(long *)(lVar21 + -8);
    puVar9 = puVar1;
    (**(code **)(lVar11 + 0x30))(puVar1,1,lVar21);
    if ((int)puVar9 == 0) {
      uVar24 = *puVar1;
      uVar26 = puVar1[3];
      uVar25 = puVar1[2];
      puVar10[1] = puVar1[1];
      *puVar10 = uVar24;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
      uVar24 = puVar1[4];
      puVar10[5] = puVar1[5];
      puVar10[4] = uVar24;
      uVar24 = *(undefined8 *)((long)puVar1 + 0x29);
      *(undefined8 *)((long)puVar10 + 0x31) = *(undefined8 *)((long)puVar1 + 0x31);
      *(undefined8 *)((long)puVar10 + 0x29) = uVar24;
      puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x14));
      puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x14));
      lVar17 = 0;
      func_0x000100b922c8();
      lVar23 = *(long *)(lVar17 + -8);
      puVar13 = puVar14;
      (**(code **)(lVar23 + 0x30))(puVar14,1,lVar17);
      if ((int)puVar13 == 0) {
        uVar24 = *puVar14;
        uVar26 = puVar14[3];
        uVar25 = puVar14[2];
        puVar9[1] = puVar14[1];
        *puVar9 = uVar24;
        puVar9[3] = uVar26;
        puVar9[2] = uVar25;
        uVar24 = puVar14[4];
        uVar26 = puVar14[7];
        uVar25 = puVar14[6];
        puVar9[5] = puVar14[5];
        puVar9[4] = uVar24;
        puVar9[7] = uVar26;
        puVar9[6] = uVar25;
        lVar19 = (long)*(int *)(lVar17 + 0x28);
        lVar18 = (long)puVar14 + lVar19;
        (*pcVar22)(lVar18,1,lVar12);
        if ((int)lVar18 == 0) {
          (**(code **)(lVar20 + 0x20))((long)puVar9 + lVar19,(long)puVar14 + lVar19,lVar12);
          (**(code **)(lVar20 + 0x38))((long)puVar9 + lVar19,0,1,lVar12);
        }
        else {
          lVar18 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar9 + lVar19,(long)puVar14 + lVar19,
                  *(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
        }
        puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar17 + 0x2c));
        uVar24 = *puVar13;
        puVar5 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar17 + 0x2c));
        puVar5[1] = puVar13[1];
        *puVar5 = uVar24;
        puVar13 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar17 + 0x30));
        uVar24 = *puVar13;
        puVar5 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar17 + 0x30));
        puVar5[1] = puVar13[1];
        *puVar5 = uVar24;
        lVar19 = (long)*(int *)(lVar17 + 0x34);
        lVar18 = (long)puVar14 + lVar19;
        (*pcVar22)(lVar18,1,lVar12);
        if ((int)lVar18 == 0) {
          (**(code **)(lVar20 + 0x20))((long)puVar9 + lVar19,(long)puVar14 + lVar19,lVar12);
          (**(code **)(lVar20 + 0x38))((long)puVar9 + lVar19,0,1,lVar12);
        }
        else {
          lVar12 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar9 + lVar19,(long)puVar14 + lVar19,
                  *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar17 + 0x38));
        uVar24 = *puVar14;
        puVar13 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar17 + 0x38));
        puVar13[1] = puVar14[1];
        *puVar13 = uVar24;
        (**(code **)(lVar23 + 0x38))(puVar9,0,1,lVar17);
      }
      else {
        lVar12 = 0x112dd1600;
        func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
        _memcpy(puVar9,puVar14,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      puVar9 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar21 + 0x18));
      puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x18));
      lVar12 = 0;
      func_0x000100b92390();
      lVar17 = *(long *)(lVar12 + -8);
      puVar14 = puVar1;
      (**(code **)(lVar17 + 0x30))(puVar1,1,lVar12);
      if ((int)puVar14 == 0) {
        uVar24 = *puVar1;
        puVar9[1] = puVar1[1];
        *puVar9 = uVar24;
        lVar23 = (long)*(int *)(lVar12 + 0x14);
        lVar20 = (long)puVar1 + lVar23;
        (**(code **)(lVar15 + 0x30))(lVar20,1,lVar6);
        if ((int)lVar20 == 0) {
          (*pcVar16)((long)puVar9 + lVar23,(long)puVar1 + lVar23,lVar6);
          (**(code **)(lVar15 + 0x38))((long)puVar9 + lVar23,0,1,lVar6);
        }
        else {
          lVar6 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          _memcpy((long)puVar9 + lVar23,(long)puVar1 + lVar23,
                  *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
        }
        (**(code **)(lVar17 + 0x38))(puVar9,0,1,lVar12);
      }
      else {
        lVar6 = 0x112dd1458;
        func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
        _memcpy(puVar9,puVar1,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
      (**(code **)(lVar11 + 0x38))(puVar10,0,1,lVar21);
    }
    else {
      lVar6 = 0x112dd1460;
      func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
      _memcpy(puVar10,puVar1,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x20)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x20));
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x24));
    uVar24 = *puVar4;
    puVar10 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x24));
    puVar10[1] = puVar4[1];
    *puVar10 = uVar24;
    (**(code **)(lVar8 + 0x38))(puVar3,0,1,lVar7);
  }
  else {
    lVar6 = 0x112e9b260;
    func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041b5594; end: 1041b55ab;  */

void FUN_1041b5594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041b55ac; end: 1041b55eb;  */

undefined8 FUN_1041b55ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1041b55ec; end: 1041b5603;  */

bool FUN_1041b55ec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1041b5604; end: 1041b5643;  */

void FUN_1041b5604(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdfe20;
  _swift_getWitnessTable(&UNK_10dcdfe20,&UNK_11074f630);
  puRam0000000113067b08 = puVar1;
  return;
}



/* Entry: 1041b5644; end: 1041b56ef;  */

void FUN_1041b5644(void)

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



/* Entry: 1041b56f0; end: 1041b573b;  */

void FUN_1041b56f0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1041b573c; end: 1041b5813;  */

void FUN_1041b573c(void)

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



/* Entry: 1041b5814; end: 1041b5833;  */

void FUN_1041b5814(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1041b5834; end: 1041b5873;  */

void FUN_1041b5834(void)

{
  undefined *puVar1;
  
  if (puRam0000000113067b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdfee0;
  _swift_getWitnessTable(&UNK_10dcdfee0,&UNK_11074f6a8);
  puRam0000000113067b10 = puVar1;
  return;
}



/* Entry: 1041b5874; end: 1041b588f;  */

undefined1  [16] FUN_1041b5874(void)

{
  return ZEXT816(0x11074f6a8);
}



/* Entry: 1041b5890; end: 1041b58bb; +[_TtC24AdAttachmentHandlerScope34SCAdAttachmentPresenterErrorDomain value] */

void FUN_1041b5890(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1ee870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041b58bc; end: 1041b58bf; -[_TtC24AdAttachmentHandlerScope34SCAdAttachmentPresenterErrorDomain .cxx_destruct] */

void FUN_1041b58bc(void)

{
  return;
}



/* Entry: 1041b58c0; end: 1041b58c7; +[_TtC24AdAttachmentHandlerScope32SCAdAttachmentPresenterErrorCode unknown] */

undefined8 FUN_1041b58c0(void)

{
  return 0;
}



/* Entry: 1041b58c8; end: 1041b58cf; +[_TtC24AdAttachmentHandlerScope32SCAdAttachmentPresenterErrorCode cantPresentAttachment] */

undefined8 FUN_1041b58c8(void)

{
  return 1;
}



/* Entry: 1041b58d0; end: 1041b58d7; +[_TtC24AdAttachmentHandlerScope32SCAdAttachmentPresenterErrorCode attachmentIsNotBeingPresented] */

undefined8 FUN_1041b58d0(void)

{
  return 2;
}



/* Entry: 1041b58d8; end: 1041b58df; +[_TtC24AdAttachmentHandlerScope32SCAdAttachmentPresenterErrorCode webBrowserNotFound] */

undefined8 FUN_1041b58d8(void)

{
  return 3;
}



/* Entry: 1041b58e0; end: 1041b58e7; +[_TtC24AdAttachmentHandlerScope32SCAdAttachmentPresenterErrorCode phoneNumberURIInvalid] */

undefined8 FUN_1041b58e0(void)

{
  return 4;
}



/* Entry: 1041b58e8; end: 1041b58ef; +[_TtC24AdAttachmentHandlerScope32SCAdAttachmentPresenterErrorCode noFallbackAttachment] */

undefined8 FUN_1041b58e8(void)

{
  return 5;
}



/* Entry: 1041b58f0; end: 1041b5907; +[_TtC24AdAttachmentHandlerScope32SCAdAttachmentPresenterErrorCode invalidUrl] */

undefined8 FUN_1041b58f0(void)

{
  return 6;
}



/* Entry: 1041b5908; end: 1041b592f; +[_TtC24AdAttachmentHandlerScope34SCAdAttachmentPresenterErrorString unknown] */

void FUN_1041b5908(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e776f6e6b6e75,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041b5930; end: 1041b593b;  */

undefined * FUN_1041b5930(void)

{
  return &UNK_10dcdffb8;
}



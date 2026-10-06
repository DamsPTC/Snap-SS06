/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044e3534; end: 1044e3573;  */

void FUN_1044e3534(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0cc60;
  _swift_getWitnessTable(&UNK_10dd0cc60,&UNK_11077d7d0);
  puRam0000000113080e98 = puVar1;
  return;
}



/* Entry: 1044e3574; end: 1044e361f;  */

void FUN_1044e3574(void)

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



/* Entry: 1044e3620; end: 1044e3657;  */

void FUN_1044e3620(ulong *param_1,ulong *param_2)

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



/* Entry: 1044e3658; end: 1044e367b; +[SCSampleBufferIdentifier camera] */

void FUN_1044e3658(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4152454d4143,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e367c; end: 1044e369b; +[SCSampleBufferIdentifier null] */

void FUN_1044e367c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4c554e,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e369c; end: 1044e36d7; -[SCSampleBufferIdentifier init] */

void FUN_1044e369c(undefined8 param_1)

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



/* Entry: 1044e36d8; end: 1044e370b;  */

void FUN_1044e36d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e370c; end: 1044e370f; -[SCSampleBufferIdentifier .cxx_destruct] */

void FUN_1044e370c(void)

{
  return;
}



/* Entry: 1044e3710; end: 1044e372f;  */

void FUN_1044e3710(void)

{
  _objc_opt_self(&PTR_PTR_1129c4628);
  return;
}



/* Entry: 1044e3730; end: 1044e3743;  */

bool FUN_1044e3730(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044e3744; end: 1044e381b;  */

void FUN_1044e3744(void)

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



/* Entry: 1044e381c; end: 1044e383b;  */

void FUN_1044e381c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044e383c; end: 1044e387b;  */

void FUN_1044e383c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0cd60;
  _swift_getWitnessTable(&UNK_10dd0cd60,&UNK_11077d848);
  puRam0000000113080ec8 = puVar1;
  return;
}



/* Entry: 1044e387c; end: 1044e3b57;  */

undefined1  [16] FUN_1044e387c(void)

{
  return ZEXT816(0x11077d848);
}



/* Entry: 1044e3b58; end: 1044e3bfb;  */

undefined1 FUN_1044e3b58(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (lRam0000000113080ed0 != -1) {
    _swift_once(0x113080ed0,FUN_1044e3bfc);
  }
  lVar1 = lRam0000000113813b80;
  if (*(long *)(lRam0000000113813b80 + 0x10) == 0) {
    uVar3 = 0x38;
  }
  else {
    _swift_bridgeObjectRetain(lRam0000000113813b80);
    uVar2 = param_2;
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      uVar3 = 0x38;
    }
    else {
      uVar3 = *(undefined1 *)(*(long *)(lVar1 + 0x38) + param_1);
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  _swift_bridgeObjectRelease(param_2);
  return uVar3;
}



/* Entry: 1044e3bfc; end: 1044e3d4f;  */

/* WARNING: Removing unreachable block (ram,0x0001044e3d30) */

void FUN_1044e3bfc(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x38;
  FUN_1044e47e8(0,0x38,0);
  puVar6 = *(undefined **)(puStack_58 + 0x10);
  lVar8 = -0x540;
  puVar7 = puVar6;
  puVar9 = (undefined1 *)0x113080f00;
  do {
    puVar3 = puStack_58;
    uVar1 = *puVar9;
    func_0x0001044e388c(uVar1);
    puVar4 = puVar7 + 1;
    puStack_58 = puVar3;
    if ((undefined *)(*(ulong *)(puVar3 + 0x18) >> 1) <= puVar7) {
      FUN_1044e47e8(1 < *(ulong *)(puVar3 + 0x18),puVar4,1);
    }
    puVar3 = puStack_58;
    *(undefined **)(puStack_58 + 0x10) = puVar4;
    lVar2 = lVar8 + (long)puVar6 * 0x18;
    *(undefined8 *)(puStack_58 + lVar2 + 0x560) = 0xd000000000000024;
    *(undefined8 *)(puStack_58 + lVar2 + 0x568) = uVar5;
    puStack_58[lVar2 + 0x570] = uVar1;
    lVar8 = lVar8 + 0x18;
    puVar7 = puVar4;
    puVar9 = puVar9 + 1;
  } while (lVar8 != 0);
  func_0x0001000285a8(0x113080f50,&UNK_10dd0cf48);
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  puStack_58 = puVar4;
  FUN_1044e4078(puVar3,1,&puStack_58);
  puRam0000000113813b80 = puStack_58;
  return;
}



/* Entry: 1044e3d50; end: 1044e3d7b;  */

void FUN_1044e3d50(void)

{
  func_0x0001000285a8(0x11302a4b0,&UNK_10dca5798);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1044e3d7c; end: 1044e3d8f;  */

bool FUN_1044e3d7c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044e3d90; end: 1044e3e7b;  */

void FUN_1044e3d90(void)

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



/* Entry: 1044e3e7c; end: 1044e3e7f;  */

void FUN_1044e3e7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ce60;
  _swift_getWitnessTable(&UNK_10dd0ce60,&UNK_11077d9b0);
  puRam0000000113080f38 = puVar1;
  return;
}



/* Entry: 1044e3e80; end: 1044e3ebf;  */

void FUN_1044e3e80(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ce60;
  _swift_getWitnessTable(&UNK_10dd0ce60,&UNK_11077d9b0);
  puRam0000000113080f38 = puVar1;
  return;
}



/* Entry: 1044e3ec0; end: 1044e3ec3;  */

void FUN_1044e3ec0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113080f40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113080f48;
  func_0x00010002969c(0x113080f48,&UNK_10dd0cec8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113080f40 = puVar2;
  return;
}



/* Entry: 1044e3ec4; end: 1044e3f13;  */

void FUN_1044e3ec4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113080f40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113080f48;
  func_0x00010002969c(0x113080f48,&UNK_10dd0cec8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113080f40 = puVar2;
  return;
}



/* Entry: 1044e3f14; end: 1044e4077;  */

int FUN_1044e3f14(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (200 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x37) {
      iVar2 = 4;
    }
    if (param_2 + 0x37 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044e3f90;
        goto LAB_1044e3f74;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044e3f74:
      return ((uint)*param_1 | uVar1 << 8) - 0x37;
    }
  }
LAB_1044e3f90:
  iVar2 = *param_1 - 0x38;
  if (*param_1 < 0x38) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044e4078; end: 1044e43eb;  */

void FUN_1044e4078(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (uVar7 != 0) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    uVar11 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(undefined1 *)(param_1 + 0x30);
    lVar12 = *param_3;
    _swift_bridgeObjectRetain(uVar11);
    uVar14 = uVar13;
    uVar6 = uVar11;
    func_0x000100029284();
    lVar8 = *(long *)(lVar12 + 0x10);
    uVar9 = (ulong)~(uint)uVar6 & 1;
    lVar1 = lVar8 + uVar9;
    if (SCARRY8(lVar8,uVar9)) {
LAB_1044e4334:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1044e4338);
      (*pcVar4)();
    }
    if (*(long *)(lVar12 + 0x18) < lVar1) {
      FUN_1044e4554(lVar1,param_2 & 1);
      uVar14 = uVar13;
      uVar9 = uVar11;
      func_0x000100029284();
      if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
LAB_1044e4124:
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1044e4134);
        (*pcVar4)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_1044e43ec();
    }
    if ((uVar6 & 1) != 0) {
LAB_1044e413c:
      puVar5 = PTR___ss11_MergeErrorON_11034e460;
      _swift_allocError(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,0,
                        0);
      _swift_willThrow();
      _swift_bridgeObjectRelease(param_1);
      _swift_errorRetain(puVar5);
      uVar7 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      _swift_dynamicCast();
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar11);
        _swift_errorRelease(puVar5);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1e);
      __sSS6appendyySSF(0xd00000000000001b,0x800000010efbd6e0);
      uStack_80 = uVar13;
      uStack_78 = uVar11;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&uStack_80,&uStack_70,PTR___sSSN_11034da80,
                 PTR___ss26DefaultStringInterpolationVN_11034ec00,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,uStack_70,uStack_68,"Swift/arm64e-apple-ios.swiftinterface",
                 0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1044e43ec);
      (*pcVar4)();
    }
    lVar8 = *param_3;
    lVar1 = lVar8 + (uVar14 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar14 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar13;
    puVar2[1] = uVar11;
    *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar14) = uVar3;
    if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
LAB_1044e4338:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1044e433c);
      (*pcVar4)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    if (uVar7 != 1) {
      puVar15 = (undefined1 *)(param_1 + 0x48);
      uVar14 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1044e4340);
          (*pcVar4)();
        }
        uVar13 = *(ulong *)(puVar15 + -0x10);
        uVar11 = *(ulong *)(puVar15 + -8);
        uVar3 = *puVar15;
        lVar12 = *param_3;
        _swift_bridgeObjectRetain(uVar11);
        uVar6 = uVar13;
        uVar9 = uVar11;
        func_0x000100029284();
        lVar8 = *(long *)(lVar12 + 0x10);
        uVar10 = (ulong)~(uint)uVar9 & 1;
        lVar1 = lVar8 + uVar10;
        if (SCARRY8(lVar8,uVar10)) goto LAB_1044e4334;
        if (*(long *)(lVar12 + 0x18) < lVar1) {
          FUN_1044e4554(lVar1,1);
          uVar6 = uVar13;
          uVar10 = uVar11;
          func_0x000100029284();
          if (((uint)uVar9 & 1) != ((uint)uVar10 & 1)) goto LAB_1044e4124;
        }
        if ((uVar9 & 1) != 0) goto LAB_1044e413c;
        lVar8 = *param_3;
        lVar1 = lVar8 + (uVar6 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar6 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        *puVar2 = uVar13;
        puVar2[1] = uVar11;
        *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar6) = uVar3;
        if (SCARRY8(*(long *)(lVar8 + 0x10),1)) goto LAB_1044e4338;
        uVar14 = uVar14 + 1;
        *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
        puVar15 = puVar15 + 0x18;
      } while (uVar7 != uVar14);
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Entry: 1044e43ec; end: 1044e4553;  */

void FUN_1044e43ec(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  
  func_0x0001000285a8(0x113080f50,&UNK_10dd0cf48);
  lVar12 = *unaff_x20;
  lVar8 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar12 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      _memmove(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar12 + 0x40);
    if (uVar9 == 0) goto LAB_1044e44c8;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar11 * 0x10);
        uVar5 = puVar3[1];
        uVar6 = *(undefined1 *)(*(long *)(lVar12 + 0x38) + uVar11);
        puVar4 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar11) = uVar6;
        _swift_bridgeObjectRetain();
        if (uVar9 != 0) break;
LAB_1044e44c8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1044e4554);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_1044e452c;
          uVar9 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1044e452c:
  _swift_release(lVar12);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 1044e4554; end: 1044e47e7;  */

void FUN_1044e4554(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x113080f50;
  func_0x0001000285a8(0x113080f50,&UNK_10dd0cf48);
  lVar8 = lVar16;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar16,lVar1,param_2,uVar7);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_1044e47b4:
    _swift_release(lVar16);
    *unaff_x20 = lVar8;
    return;
  }
  puVar18 = (ulong *)(lVar16 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar8 + 0x40;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1044e47e4);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_1044e47b4;
        }
        uVar17 = puVar18[lVar19];
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar10 * 0x10);
    uVar7 = *puVar2;
    uVar3 = puVar2[1];
    uVar4 = *(undefined1 *)(*(long *)(lVar16 + 0x38) + uVar10);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    puVar9 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar9,uVar7,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar15 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar9 & (uVar15 ^ 0xffffffffffffffff);
    uVar12 = uVar14 >> 6;
    uVar10 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar15 >> 6;
      do {
        uVar14 = uVar12 + 1;
        if ((uVar14 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1044e47e8);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar14 != uVar10) {
          uVar12 = uVar14;
        }
        bVar5 = (bool)(uVar14 == uVar10 | bVar5);
        uVar14 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar10 * 0x10);
    *puVar2 = uVar7;
    puVar2[1] = uVar3;
    *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar10) = uVar4;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar11 = lVar19;
  } while( true );
}



/* Entry: 1044e47e8; end: 1044e4803;  */

void FUN_1044e47e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1044e4804();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1044e4804; end: 1044e4943;  */

undefined * FUN_1044e4804(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044e4944);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x113080f58;
    func_0x0001000285a8(0x113080f58,&UNK_10dd0cf58);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x113080f60;
    func_0x0001000285a8(0x113080f60,&UNK_10dd0cf60);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1044e4944; end: 1044e4953; -[SCLensRemoteApiServiceSpecification specObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080f68));
  return;
}



/* Entry: 1044e4954; end: 1044e4993; -[SCLensRemoteApiServiceSpecification identifierObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4954(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(byte *)(param_1 + _DAT_113080f70);
  func_0x0001044e388c(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044e4994; end: 1044e49bf; -[SCLensRemoteApiServiceSpecification isPublicObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044e4994(long param_1)

{
  return (uint)((ulong)*(byte *)(param_1 + _DAT_113080f70) < 0x25) &
         (uint)(0x10c600005f >> ((ulong)*(byte *)(param_1 + _DAT_113080f70) & 0x3f));
}



/* Entry: 1044e49c0; end: 1044e49f7; +[SCLensRemoteApiServiceSpecification isKnownLocalOnlySpecId:] */

uint FUN_1044e49c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = (uint)param_3;
  FUN_1044e4cac();
  _swift_bridgeObjectRelease(param_2);
  return uVar1 & 1;
}



/* Entry: 1044e49f8; end: 1044e4a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044e49f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080f68) = param_1;
  _objc_retain();
  _objc_retain();
  uVar1 = param_1;
  FUN_1044e5bbc();
  *(char *)(unaff_x20 + _DAT_113080f70) = (char)uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1044e4a80; end: 1044e4be3; -[SCLensRemoteApiServiceSpecification initWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044e4a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113080f68) = param_3;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar2 = param_3;
  FUN_1044e5bbc();
  *(char *)(param_1 + _DAT_113080f70) = (char)uVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  _objc_release(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 1044e4be4; end: 1044e4c43; -[SCLensRemoteApiServiceSpecification init] */

void FUN_1044e4be4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("RemoteApiServiceSpecifications.RemoteApiServiceSpecification",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e4c10);
  (*pcVar1)();
}



/* Entry: 1044e4c44; end: 1044e4cab; -[SCLensRemoteApiServiceSpecification .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113080f68));
  return;
}



/* Entry: 1044e4cac; end: 1044e4d63;  */

uint FUN_1044e4cac(long param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  
  if (lRam0000000113080ed0 != -1) {
    _swift_once(0x113080ed0,FUN_1044e3bfc);
  }
  lVar2 = lRam0000000113813b80;
  uVar3 = 0;
  if (*(long *)(lRam0000000113813b80 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lRam0000000113813b80);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar2);
    }
    else {
      bVar1 = *(byte *)(*(long *)(lVar2 + 0x38) + param_1);
      _swift_bridgeObjectRelease(lVar2);
      if (bVar1 < 0x25) {
        uVar3 = (uint)(0x1c3f7ffff7 >> ((ulong)bVar1 & 0x3f));
        goto LAB_1044e4d38;
      }
    }
    uVar3 = 0;
  }
LAB_1044e4d38:
  return uVar3 & 1;
}



/* Entry: 1044e4d64; end: 1044e4d83;  */

void FUN_1044e4d64(void)

{
  _objc_opt_self(&PTR_PTR_1129c46d8);
  return;
}



/* Entry: 1044e4d84; end: 1044e4e57;  */

void FUN_1044e4d84(void)

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



/* Entry: 1044e4e58; end: 1044e4e77;  */

void FUN_1044e4e58(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1044e4e78; end: 1044e4e9b; -[SCRemoteApiServiceSpec description] */

void FUN_1044e4e78(void)

{
  _objc_retain();
  FUN_1044e5bbc();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4e9c; end: 1044e4ee3; -[SCRemoteApiServiceSpec init] */

void FUN_1044e4e9c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "RemoteApiServiceSpecifications/RemoteApiServiceSpecWrapper.swift",0x40,2,0x137,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e4ee4);
  (*pcVar1)();
}



/* Entry: 1044e4ee4; end: 1044e4ee7; -[SCRemoteApiServiceSpec copyWithZone:] */

void FUN_1044e4ee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044e4ee8; end: 1044e4eef; +[SCRemoteApiServiceSpec lensTappableQuestion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4ee8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4ef0; end: 1044e4ef7; +[SCRemoteApiServiceSpec publicIlc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4ef0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4ef8; end: 1044e4eff; +[SCRemoteApiServiceSpec publicLiveCameraNativeCaption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4ef8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f00; end: 1044e4f07; +[SCRemoteApiServiceSpec publicDreams2P] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f08; end: 1044e4f0f; +[SCRemoteApiServiceSpec publicPromptLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f08(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f10; end: 1044e4f17; +[SCRemoteApiServiceSpec memoriesPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f18; end: 1044e4f1f; +[SCRemoteApiServiceSpec dualCameraStream] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f20; end: 1044e4f27; +[SCRemoteApiServiceSpec friendsList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f28; end: 1044e4f2f; +[SCRemoteApiServiceSpec snapPlus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f30; end: 1044e4f37; +[SCRemoteApiServiceSpec exclusiveLensUpsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f38; end: 1044e4f3f; +[SCRemoteApiServiceSpec cameraCapability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f40; end: 1044e4f47; +[SCRemoteApiServiceSpec dreams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0xb;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f48; end: 1044e4f4f; +[SCRemoteApiServiceSpec aiLensFeedback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0xc;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f50; end: 1044e4f57; +[SCRemoteApiServiceSpec promptLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0xd;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f58; end: 1044e4f5f; +[SCRemoteApiServiceSpec inLensCreation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f58(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0xe;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f60; end: 1044e4f67; +[SCRemoteApiServiceSpec mediaShuffler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0xf;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f68; end: 1044e4f6f; +[SCRemoteApiServiceSpec previewStickerConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f70; end: 1044e4f77; +[SCRemoteApiServiceSpec liveCameraNativeCaption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x11;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f78; end: 1044e4f7f; +[SCRemoteApiServiceSpec automationFramework] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f78(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x12;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f80; end: 1044e4f87; +[SCRemoteApiServiceSpec previewSaveAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x13;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f88; end: 1044e4f8f; +[SCRemoteApiServiceSpec previewGenAiMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x14;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f90; end: 1044e4f97; +[SCRemoteApiServiceSpec mySelfieOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x15;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4f98; end: 1044e4f9f; +[SCRemoteApiServiceSpec contentReadiness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4f98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x16;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fa0; end: 1044e4fa7; +[SCRemoteApiServiceSpec bitmojiAvatarBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fa0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x17;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fa8; end: 1044e4faf; +[SCRemoteApiServiceSpec ctStickerSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fa8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x18;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fb0; end: 1044e4fb7; +[SCRemoteApiServiceSpec turnByTurnPromptLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x19;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fb8; end: 1044e4fbf; +[SCRemoteApiServiceSpec turnBasedV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fb8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x1a;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fc0; end: 1044e4fc7; +[SCRemoteApiServiceSpec cameos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x1b;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fc8; end: 1044e4fcf; +[SCRemoteApiServiceSpec getUserMySelfie] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x1c;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fd0; end: 1044e4fd7; +[SCRemoteApiServiceSpec tappableLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fd0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x1d;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fd8; end: 1044e4fdf; +[SCRemoteApiServiceSpec aiLensInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fd8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x1e;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fe0; end: 1044e4fe7; +[SCRemoteApiServiceSpec preGenAssets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fe0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x1f;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4fe8; end: 1044e4fef; +[SCRemoteApiServiceSpec bitmojiFashion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4fe8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x20;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4ff0; end: 1044e4ff7; +[SCRemoteApiServiceSpec dailyGames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4ff0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x21;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e4ff8; end: 1044e4fff; +[SCRemoteApiServiceSpec myAiInteractiveLensApi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e4ff8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x22;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5000; end: 1044e5007; +[SCRemoteApiServiceSpec aiGenerationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5000(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x23;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5008; end: 1044e500f; +[SCRemoteApiServiceSpec skipVideoRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5008(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x24;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5010; end: 1044e5017; +[SCRemoteApiServiceSpec minerva] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5010(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x25;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5018; end: 1044e501f; +[SCRemoteApiServiceSpec minervaDreams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5018(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x26;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5020; end: 1044e5027; +[SCRemoteApiServiceSpec minervaCommunityDreams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5020(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x27;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5028; end: 1044e502f; +[SCRemoteApiServiceSpec minervaTwoPersonDreams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5028(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x28;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5030; end: 1044e5037; +[SCRemoteApiServiceSpec minervaTwoPersonCommunity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5030(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x29;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5038; end: 1044e503f; +[SCRemoteApiServiceSpec minervaDreamsOpenPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5038(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x2a;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5040; end: 1044e5047; +[SCRemoteApiServiceSpec minervaVideoDreams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5040(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x2b;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5048; end: 1044e504f; +[SCRemoteApiServiceSpec minervaVideoGenOpenPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5048(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x2c;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5050; end: 1044e5057; +[SCRemoteApiServiceSpec minervaExclusiveSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5050(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x2d;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5058; end: 1044e505f; +[SCRemoteApiServiceSpec minervaCommunityVideoToVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5058(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x2e;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5060; end: 1044e5067; +[SCRemoteApiServiceSpec minervaImageQnA] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5060(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x2f;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5068; end: 1044e506f; +[SCRemoteApiServiceSpec minervaFriendSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5068(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x30;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5070; end: 1044e5077; +[SCRemoteApiServiceSpec minervaMentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5070(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x31;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5078; end: 1044e507f; +[SCRemoteApiServiceSpec minervaAsyncDreamsOpenPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5078(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x32;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5080; end: 1044e5087; +[SCRemoteApiServiceSpec minervaAsyncDreams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5080(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x33;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5088; end: 1044e508f; +[SCRemoteApiServiceSpec minervaAsyncTwoPersonDreams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5088(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x34;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5090; end: 1044e5097; +[SCRemoteApiServiceSpec minervaAsyncPreGenMySelfie] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5090(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x35;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e5098; end: 1044e509f; +[SCRemoteApiServiceSpec minervaAsyncDreamsMySelfie] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e5098(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x36;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044e50a0; end: 1044e50a7; +[SCRemoteApiServiceSpec minervaAsyncTwoPersonDreamsMySelfie] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e50a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113080fa0) = 0x37;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104914020; end: 10491406b;  */

void FUN_104914020(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10491406c; end: 1049140cb; -[_TtC8FBAEMKit27AEMAdvertiserMultiEntryRule init] */

void FUN_10491406c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBAEMKit.AEMAdvertiserMultiEntryRule",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104914098);
  (*pcVar1)();
}



/* Entry: 1049140cc; end: 1049140db; -[_TtC8FBAEMKit27AEMAdvertiserMultiEntryRule .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049140cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309d500));
  return;
}



/* Entry: 1049140dc; end: 1049142b7;  */

uint FUN_1049140dc(uint param_1)

{
  FUN_104913a58();
  return param_1 & 1;
}



/* Entry: 1049142b8; end: 1049142d3;  */

void FUN_1049142b8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10492f1b4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1049142d4; end: 1049143cb;  */

void FUN_1049142d4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309d518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd482d0;
  _swift_getWitnessTable(&UNK_10dd482d0,&UNK_1107b7dc8);
  puRam000000011309d518 = puVar1;
  return;
}



/* Entry: 1049143cc; end: 1049143d3;  */

void FUN_1049143cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049143d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Entry: 1049143d4; end: 10491457f;  */

int FUN_1049143d4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104914450;
        goto LAB_104914434;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104914434:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104914450:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104914580; end: 10491481b;  */

void FUN_104914580(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  undefined **ppuVar9;
  undefined1 *unaff_x20;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  byte *pbVar10;
  long lVar11;
  long alStack_e0 [8];
  undefined1 auStack_a0 [8];
  undefined *apuStack_98 [2];
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined1 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar11 = *(long *)(puVar2 + -8);
  lVar7 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined1 *)((long)alStack_e0 + lVar7 + 0x40);
  puVar3 = (undefined1 *)0x0;
  puVar6 = unaff_x20;
  if (param_3 != 0) {
    puVar3 = puVar2;
    puStack_88 = param_2;
    lStack_80 = param_3;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar4);
    func_0x000100e8b654();
    unaff_x24 = PTR___sSSN_11034da80;
    param_2 = (undefined1 *)0x0;
    unaff_x23 = puVar4;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar4,0,PTR___sSSN_11034da80,puVar3);
    (**(code **)(lVar11 + 8))(puVar4,puVar2);
    puVar2 = puVar4;
    puVar3 = auStack_a0 + 0x18;
    if ((ulong)param_2 >> 0x3c < 0xf) {
      puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      _swift_getInitializedObjCClass();
      puVar3 = unaff_x23;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(unaff_x23,param_2);
      puStack_88 = (undefined1 *)0x0;
      _objc_msgSend(puVar5,PTR_s_JSONObjectWithData_options_error_11254dfe0,puVar3,4,
                    auStack_a0 + 0x18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puStack_88;
      if (puVar5 != (undefined *)0x0) {
        _objc_retain();
        __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_a0 + 0x18,puVar5);
        _swift_unknownObjectRelease(puVar5);
        uVar8 = 0x11309c420;
        func_0x0001048db364(0x11309c420);
        puVar3 = auStack_a0 + 8;
        _swift_dynamicCast(puVar3,auStack_a0 + 0x18,PTR___sypN_11034f1a8 + 8,uVar8,6);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        unaff_x24 = apuStack_98[0];
        if ((int)puVar3 == 0) {
          unaff_x24 = PTR___swiftEmptyArrayStorage_11034f1c8;
          _swift_retain();
          func_0x000100214a84();
          _swift_release(puVar5);
        }
        FUN_10491481c(param_1,unaff_x24);
        _swift_bridgeObjectRelease(unaff_x24);
        puVar2 = unaff_x23;
        func_0x0001000b44c0(unaff_x23,param_2);
        goto LAB_104914798;
      }
      puVar6 = puStack_88;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(puVar6);
      _swift_willThrow();
      puVar6 = (undefined1 *)0x11309d598;
      func_0x0001048db364();
      _swift_allocObject();
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      *(undefined **)(puVar6 + 0x38) = unaff_x24;
      *(undefined8 *)(puVar6 + 0x20) = 0xd000000000000028;
      *(undefined8 *)(puVar6 + 0x28) = 0x800000010f21c3d0;
      __ss5print_9separator10terminatoryypd_S2StF();
      func_0x0001000b44c0(unaff_x23,param_2);
      _swift_errorRelease(puVar3);
      puVar2 = puVar6;
      _swift_bridgeObjectRelease();
    }
  }
  unaff_x20 = puVar3;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
LAB_104914798:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined **)((long)alStack_e0 + lVar7) = unaff_x24;
  *(undefined1 **)((long)alStack_e0 + lVar7 + 8) = unaff_x23;
  *(undefined1 **)((long)alStack_e0 + lVar7 + 0x10) = param_2;
  *(undefined1 **)((long)alStack_e0 + lVar7 + 0x18) = puVar6;
  *(undefined1 **)((long)alStack_e0 + lVar7 + 0x20) = unaff_x20;
  *(undefined8 **)((long)alStack_e0 + lVar7 + 0x28) = param_1;
  *(undefined1 **)((long)alStack_e0 + lVar7 + 0x30) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_e0 + lVar7 + 0x38) = FUN_10491481c;
  puVar6 = puVar2;
  FUN_104915750();
  lVar7 = 0x11309d5a0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar11 = *(long *)(lVar7 + 0x10);
  _swift_retain();
  pbVar10 = (byte *)(lVar7 + 0x20);
  do {
    if (lVar11 == 0) {
      _swift_release();
      FUN_104915878();
      if (puVar2 == (undefined1 *)0x0) goto LAB_1049148d0;
      uVar8 = 0;
      func_0x000104918630();
      ppuVar9 = &PTR_DAT_1107b7f98;
      goto LAB_1049148c4;
    }
    bVar1 = *pbVar10;
    lVar11 = lVar11 + -1;
    pbVar10 = pbVar10 + 1;
  } while ((uint)bVar1 != ((uint)puVar6 & 0xff));
  _swift_release();
  FUN_104914964();
  if (puVar2 == (undefined1 *)0x0) {
LAB_1049148d0:
    extraout_x8[4] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
  }
  else {
    uVar8 = 0;
    func_0x0001049143a0();
    ppuVar9 = &PTR_DAT_1107b7d28;
LAB_1049148c4:
    extraout_x8[3] = uVar8;
    extraout_x8[4] = ppuVar9;
    *extraout_x8 = puVar2;
  }
  return;
}



/* Entry: 10491481c; end: 1049148ef;  */

void FUN_10491481c(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  byte *pbVar6;
  
  lVar2 = param_2;
  FUN_104915750();
  lVar3 = 0x11309d5a0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar5 = *(long *)(lVar3 + 0x10);
  _swift_retain();
  pbVar6 = (byte *)(lVar3 + 0x20);
  do {
    if (lVar5 == 0) {
      _swift_release();
      FUN_104915878();
      if (param_2 == 0) goto LAB_1049148d0;
      lVar3 = 0;
      func_0x000104918630();
      ppuVar4 = &PTR_DAT_1107b7f98;
      goto LAB_1049148c4;
    }
    bVar1 = *pbVar6;
    lVar5 = lVar5 + -1;
    pbVar6 = pbVar6 + 1;
  } while ((uint)bVar1 != ((uint)lVar2 & 0xff));
  _swift_release();
  FUN_104914964();
  if (param_2 == 0) {
LAB_1049148d0:
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar3 = 0;
    func_0x0001049143a0();
    ppuVar4 = &PTR_DAT_1107b7d28;
LAB_1049148c4:
    param_1[3] = lVar3;
    param_1[4] = (long)ppuVar4;
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1049148f0; end: 1049148f3;  */

uint FUN_1049148f0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  lVar4 = param_1;
  _swift_bridgeObjectRetain();
  uVar2 = lVar4 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(uVar2,~(-1L << ((ulong)bVar1 & 0x3f)));
  uVar5 = (ulong)*(uint *)(param_1 + 0x24);
  bVar1 = *(byte *)(param_1 + 0x20);
  _swift_bridgeObjectRelease(param_1);
  if (uVar2 != 1L << ((ulong)bVar1 & 0x3f)) {
    FUN_1049156f8(uVar2,uVar5,0,param_1);
    __sSS10lowercasedSSyF();
    lVar4 = 0;
    puVar6 = (ulong *)0x11309d0f0;
    do {
      uVar3 = puVar6[-1];
      if ((uVar3 == uVar2 && *puVar6 == uVar5) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,*puVar6,uVar2,uVar5,0), (uVar3 & 1) != 0)) {
        _swift_bridgeObjectRelease(uVar5);
        _swift_arrayDestroy(0x11309d0e8,0x15,PTR___sSSN_11034da80);
        func_0x000104916000();
        if (((uint)lVar4 & 0xff) != 0x15) {
          return (uint)lVar4;
        }
        return 0;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 2;
    } while (lVar4 != 0x15);
    _swift_bridgeObjectRelease(uVar5);
    _swift_arrayDestroy(0x11309d0e8,0x15,PTR___sSSN_11034da80);
  }
  return 0;
}



/* Entry: 1049148f4; end: 104914963;  */

bool FUN_1049148f4(char param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  lVar2 = 0x11309d5a0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar3 = *(long *)(lVar2 + 0x10);
  _swift_retain();
  pcVar4 = (char *)(lVar2 + 0x20);
  do {
    lVar2 = lVar3;
    if (lVar2 == 0) break;
    cVar1 = *pcVar4;
    lVar3 = lVar2 + -1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != param_1);
  _swift_release();
  return lVar2 != 0;
}



/* Entry: 104914964; end: 104914d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104914964(long param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puVar8;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x20);
  lVar5 = param_1;
  _swift_bridgeObjectRetain();
  lVar5 = lVar5 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(lVar5,~(-1L << ((ulong)bVar2 & 0x3f)));
  uVar12 = (ulong)*(uint *)(param_1 + 0x24);
  bVar2 = *(byte *)(param_1 + 0x20);
  _swift_bridgeObjectRelease(param_1);
  if (lVar5 == 1L << ((ulong)bVar2 & 0x3f)) {
    return;
  }
  FUN_1049156f8(lVar5,uVar12,0,param_1);
  _swift_bridgeObjectRetain(uVar12);
  lVar6 = param_1;
  FUN_104915750();
  lVar11 = 0x11309d5a0;
  func_0x0001048db364();
  _swift_initStaticObject();
  lVar15 = *(long *)(lVar11 + 0x10);
  _swift_retain();
  pbVar16 = (byte *)(lVar11 + 0x20);
  do {
    if (lVar15 == 0) {
      _swift_bridgeObjectRelease(uVar12);
      _swift_release(lVar11);
      return;
    }
    bVar2 = *pbVar16;
    lVar15 = lVar15 + -1;
    pbVar16 = pbVar16 + 1;
  } while ((uint)bVar2 != ((uint)lVar6 & 0xff));
  _swift_release(lVar11);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_104914ae4:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    _swift_bridgeObjectRelease(uVar12);
LAB_104914af4:
    func_0x000104915d68(&uStack_90,0x11309c428);
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    uVar17 = uVar12;
    func_0x000100029284(lVar5);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_104914ae4;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(param_1);
    if (lStack_78 == 0) goto LAB_104914af4;
    uVar9 = 0x11309d5b0;
    func_0x0001048db364(0x11309d5b0);
    ppuVar7 = &puStack_c0;
    _swift_dynamicCast(ppuVar7,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar9,6);
    puVar13 = puStack_c0;
    if (((ulong)ppuVar7 & 1) != 0) goto LAB_104914b14;
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_104914b14:
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar12 = *(ulong *)(puVar13 + 0x10);
  if (uVar12 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar17 = 0;
    do {
      if (*(ulong *)(puVar13 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104914d48);
        (*pcVar3)();
      }
      puVar14 = *(undefined **)(puVar13 + uVar17 * 8 + 0x20);
      puVar8 = puVar14;
      _swift_bridgeObjectRetain();
      uVar4 = (uint)puVar8;
      FUN_104915750();
      puVar8 = puVar14;
      if ((((uint)bRam000000011309d290 == (uVar4 & 0xff)) ||
          ((uint)bRam000000011309d291 == (uVar4 & 0xff))) ||
         ((uint)bRam000000011309d292 == (uVar4 & 0xff))) {
        FUN_104914964();
        _swift_bridgeObjectRelease(puVar14);
        if (puVar8 == (undefined *)0x0) goto LAB_104914ce8;
        uVar9 = 0;
        func_0x0001049143a0();
        ppuStack_a0 = &PTR_DAT_1107b7d28;
      }
      else {
        FUN_104915878();
        _swift_bridgeObjectRelease(puVar14);
        if (puVar8 == (undefined *)0x0) {
LAB_104914ce8:
          _swift_bridgeObjectRelease(puVar13);
          ppuStack_a0 = (undefined **)0x0;
          uStack_b8 = 0;
          puStack_c0 = (undefined *)0x0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          _swift_bridgeObjectRelease(puVar10);
          func_0x000104915d68(&puStack_c0,0x11309d5a8);
          return;
        }
        uVar9 = 0;
        func_0x000104918630();
        ppuStack_a0 = &PTR_DAT_1107b7f98;
      }
      puStack_c0 = puVar8;
      uStack_a8 = uVar9;
      func_0x000104915da4(&puStack_c0,&uStack_90);
      FUN_104913b38(&uStack_90,&puStack_c0);
      puVar8 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar14 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar14 = (undefined *)0x0;
        FUN_104914ed8(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar1 = *(ulong *)(puVar14 + 0x10);
      puVar10 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar1) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        FUN_104914ed8(puVar10,uVar1 + 1,1,puVar14);
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
      func_0x000104915da4(&puStack_c0,puVar10 + uVar1 * 0x28 + 0x20);
      func_0x0001000834e4(&uStack_90);
    } while (uVar12 != uVar17);
  }
  _swift_bridgeObjectRelease(puVar13);
  if (*(long *)(puVar10 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar10);
  }
  else {
    lVar11 = 0;
    func_0x0001049143a0();
    lVar5 = lVar11;
    _objc_allocWithZone();
    *(char *)(lVar5 + _DAT_11309d4f8) = (char)lVar6;
    *(undefined **)(lVar5 + _DAT_11309d500) = puVar10;
    lStack_d0 = lVar5;
    lStack_c8 = lVar11;
    _objc_msgSendSuper2(&lStack_d0,PTR_s_init_1125d9248);
  }
  return;
}



/* Entry: 104914d48; end: 104914d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104914d48(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uVar21;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar7 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  bVar2 = *(byte *)(param_1 + 0x20);
  lVar5 = param_1;
  _swift_bridgeObjectRetain();
  lVar5 = lVar5 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(lVar5,~(-1L << ((ulong)bVar2 & 0x3f)));
  puVar15 = (undefined *)(ulong)*(uint *)(param_1 + 0x24);
  bVar2 = *(byte *)(param_1 + 0x20);
  _swift_bridgeObjectRelease(param_1);
  if (lVar5 == 1L << ((ulong)bVar2 & 0x3f)) {
    return (long *)0x0;
  }
  FUN_1049156f8(lVar5,puVar15,0,param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    _swift_bridgeObjectRetain(puVar15);
LAB_104915988:
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    func_0x000100214a84();
    _swift_release(puVar18);
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(puVar15);
    lVar6 = lVar5;
    puVar17 = puVar15;
    func_0x000100029284(lVar5);
    if (((ulong)puVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_104915988;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
    uVar21 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    _swift_dynamicCast(&puStack_b0,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar21,6);
    puVar17 = puStack_b0;
    if ((uVar7 & 1) == 0) goto LAB_104915988;
  }
  bVar2 = puVar17[0x20];
  _swift_bridgeObjectRetain(puVar17);
  puVar18 = puVar17 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(puVar18,~(-1L << ((ulong)bVar2 & 0x3f)));
  puVar16 = (undefined *)(ulong)*(uint *)(puVar17 + 0x24);
  bVar2 = puVar17[0x20];
  _swift_bridgeObjectRelease(puVar17);
  if (puVar18 != (undefined *)(1L << ((ulong)bVar2 & 0x3f))) {
    FUN_1049156f8(puVar18,puVar16,0,puVar17);
    _swift_bridgeObjectRetain(puVar16);
    puVar8 = puVar17;
    FUN_104915750();
    uVar4 = (uint)puVar8;
    if ((uVar4 & 0xff) < 0x15) {
      uVar3 = 1 << (ulong)(uVar4 & 0x1f);
      if ((uVar3 & 0x1ff0) == 0) {
        if ((uVar3 & 0x1e000) == 0) {
          if ((1 << (ulong)(uVar4 & 0x1f) & 0x1e0000U) == 0) goto LAB_104915b80;
          if (*(long *)(puVar17 + 0x10) == 0) {
LAB_104915c14:
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            _swift_bridgeObjectRetain(puVar17);
            puVar14 = puVar16;
            func_0x000100029284(puVar18);
            if (((ulong)puVar14 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar17);
              goto LAB_104915c14;
            }
            func_0x0001000bb420(*(long *)(puVar17 + 0x38) + (long)puVar18 * 0x20,&uStack_90);
            _swift_bridgeObjectRelease(puVar16);
            puVar16 = puVar17;
          }
          _swift_bridgeObjectRelease(puVar16);
          _swift_bridgeObjectRelease(puVar17);
          if (lStack_78 != 0) {
            uVar21 = 0x11309c618;
            func_0x0001048db364(0x11309c618);
            _swift_dynamicCast(&puStack_b0,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar21,6);
            if ((uVar11 & 1) == 0) goto LAB_104915d30;
            if (*(long *)(puStack_b0 + 0x10) == 0) {
              _swift_bridgeObjectRelease(puStack_b0);
              goto LAB_104915d30;
            }
            puVar18 = (undefined *)0x0;
            uStack_a8 = 0;
            puVar17 = puStack_b0;
            goto LAB_104915c7c;
          }
        }
        else {
          if (*(long *)(puVar17 + 0x10) == 0) {
LAB_104915b94:
            in_b0 = 0;
            in_register_00005001 = 0;
            in_register_00005002 = 0;
            in_register_00005003 = 0;
            in_register_00005004 = 0;
            in_register_00005005 = 0;
            in_register_00005006 = 0;
            in_register_00005007 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            _swift_bridgeObjectRetain(puVar17);
            puVar14 = puVar16;
            func_0x000100029284(puVar18);
            if (((ulong)puVar14 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar17);
              goto LAB_104915b94;
            }
            func_0x0001000bb420(*(long *)(puVar17 + 0x38) + (long)puVar18 * 0x20,&uStack_90);
            _swift_bridgeObjectRelease(puVar16);
            puVar16 = puVar17;
          }
          _swift_bridgeObjectRelease(puVar16);
          _swift_bridgeObjectRelease(puVar17);
          if (lStack_78 != 0) {
            uVar21 = 0;
            func_0x0001002ed07c(0);
            _swift_dynamicCast(&puStack_b0,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar21,6);
            if ((uVar10 & 1) != 0) {
              _objc_msgSend(puStack_b0,PTR_s_doubleValue_1125bfb10);
              uVar21 = CONCAT17(in_register_00005007,
                                CONCAT16(in_register_00005006,
                                         CONCAT15(in_register_00005005,
                                                  CONCAT14(in_register_00005004,
                                                           CONCAT13(in_register_00005003,
                                                                    CONCAT12(in_register_00005002,
                                                                             CONCAT11(
                                                  in_register_00005001,in_b0)))))));
              uVar19 = 0;
              puVar18 = (undefined *)0x0;
              uVar20 = 0;
              puVar17 = (undefined *)0x0;
              puVar16 = puStack_b0;
              goto LAB_104915c84;
            }
            goto LAB_104915d30;
          }
        }
      }
      else {
        if (*(long *)(puVar17 + 0x10) == 0) {
LAB_104915b28:
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          _swift_bridgeObjectRetain(puVar17);
          puVar14 = puVar16;
          func_0x000100029284(puVar18);
          if (((ulong)puVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar17);
            goto LAB_104915b28;
          }
          func_0x0001000bb420(*(long *)(puVar17 + 0x38) + (long)puVar18 * 0x20,&uStack_90);
          _swift_bridgeObjectRelease(puVar16);
          puVar16 = puVar17;
        }
        _swift_bridgeObjectRelease(puVar16);
        _swift_bridgeObjectRelease(puVar17);
        if (lStack_78 != 0) {
          _swift_dynamicCast(&puStack_b0,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6)
          ;
          if ((uVar9 & 1) == 0) goto LAB_104915d30;
          puVar17 = (undefined *)0x0;
          puVar18 = puStack_b0;
LAB_104915c7c:
          uVar19 = 1;
          uVar21 = 0;
          puVar16 = (undefined *)0x0;
          uVar20 = uStack_a8;
LAB_104915c84:
          lVar12 = 0;
          func_0x000104918630();
          lVar6 = lVar12;
          _objc_allocWithZone();
          *(char *)(lVar6 + _DAT_11309d6a8) = (char)puVar8;
          plVar13 = (long *)(lVar6 + _DAT_11309d6b0);
          *plVar13 = lVar5;
          plVar13[1] = (long)puVar15;
          puVar1 = (undefined8 *)(lVar6 + _DAT_11309d6b8);
          *puVar1 = puVar18;
          puVar1[1] = uVar20;
          puVar1 = (undefined8 *)(lVar6 + _DAT_11309d6c0);
          *puVar1 = uVar21;
          *(undefined1 *)(puVar1 + 1) = uVar19;
          *(undefined **)(lVar6 + _DAT_11309d6c8) = puVar17;
          plVar13 = &lStack_a0;
          lStack_a0 = lVar6;
          lStack_98 = lVar12;
          _objc_msgSendSuper2(plVar13,PTR_s_init_1125d9248);
          _objc_release(puVar16);
          return plVar13;
        }
      }
      FUN_104915d68(&uStack_90,0x11309c428);
      goto LAB_104915d30;
    }
LAB_104915b80:
    _swift_bridgeObjectRelease(puVar16);
  }
  _swift_bridgeObjectRelease(puVar15);
  puVar15 = puVar17;
LAB_104915d30:
  _swift_bridgeObjectRelease(puVar15);
  return (long *)0x0;
}



/* Entry: 104914d4c; end: 104914de3;  */

undefined1  [16] FUN_104914d4c(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  bVar1 = *(byte *)(param_1 + 0x20);
  lVar2 = param_1;
  _swift_bridgeObjectRetain();
  lVar2 = lVar2 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(lVar2,~(-1L << ((ulong)bVar1 & 0x3f)));
  uVar3 = (ulong)*(uint *)(param_1 + 0x24);
  bVar1 = *(byte *)(param_1 + 0x20);
  _swift_bridgeObjectRelease(param_1);
  if (lVar2 == 1L << ((ulong)bVar1 & 0x3f)) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    FUN_1049156f8(lVar2,uVar3,0,param_1);
    _swift_bridgeObjectRetain(uVar3);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 104914de4; end: 104914e13;  */

void FUN_104914de4(void)

{
  return;
}



/* Entry: 104914e14; end: 104914ed7;  */

void FUN_104914e14(void)

{
  FUN_104914580();
  return;
}



/* Entry: 104914ed8; end: 104915013;  */

undefined * FUN_104914ed8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104915014);
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
  if (uVar6 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    puVar3 = (undefined *)0x11309d690;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x11309d510;
    func_0x0001048db364(0x11309d510);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 104915014; end: 10491503b;  */

ulong FUN_104915014(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104915184);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000104914e54(uVar2,uVar4,0x104914168);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104915180);
      (*pcVar1)();
    }
    FUN_1049154f8(0,uVar2,uVar3 + 0x20,param_4,0x10491d944);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 10491503c; end: 104915183;  */

ulong FUN_10491503c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104915184);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000104914e54(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104915180);
      (*pcVar1)();
    }
    FUN_1049154f8(0,uVar2,uVar3 + 0x20,param_4,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 104915184; end: 104915283;  */

undefined * FUN_104915184(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104915284);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    puVar3 = (undefined *)0x11309d658;
    func_0x0001048db364();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 104915284; end: 104915297;  */

ulong FUN_104915284(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104915184);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000104914e54(uVar2,uVar4,0x104914210);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104915180);
      (*pcVar1)();
    }
    FUN_1049154f8(0,uVar2,uVar3 + 0x20,param_4,0x10491bee4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 104915298; end: 1049154f7;  */

ulong FUN_104915298(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1049153d0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000104914e54(uVar2,uVar4,0x104914264);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1049153cc);
      (*pcVar1)();
    }
    FUN_104915600(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 1049154f8; end: 1049155ff;  */

long FUN_1049154f8(long param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1049155fc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104915600);
        (*pcVar3)();
      }
      uVar4 = 0;
      (*param_5)(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      (*param_5)(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1049155f8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if ((long)param_4 < 0) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 104915600; end: 1049156f7;  */

long FUN_104915600(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1049156f4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1049156f8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1049246d8(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1049246d8(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1049156f0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if ((long)param_4 < 0) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1049156f8; end: 10491574f;  */

undefined1  [16] FUN_1049156f8(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((long)param_1 < 0) || (1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) <= (long)param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104915748);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xfffffffffffff8) + 0x40) >> (param_1 & 0x3f) & 1) == 0)
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10491574c);
    (*pcVar1)();
  }
  if (*(int *)(param_4 + 0x24) == param_2) {
    return *(undefined1 (*) [16])(*(long *)(param_4 + 0x30) + param_1 * 0x10);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104915750);
  (*pcVar1)();
}



/* Entry: 104915750; end: 104915877;  */

uint FUN_104915750(long param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  lVar4 = param_1;
  _swift_bridgeObjectRetain();
  uVar2 = lVar4 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(uVar2,~(-1L << ((ulong)bVar1 & 0x3f)));
  uVar5 = (ulong)*(uint *)(param_1 + 0x24);
  bVar1 = *(byte *)(param_1 + 0x20);
  _swift_bridgeObjectRelease(param_1);
  if (uVar2 != 1L << ((ulong)bVar1 & 0x3f)) {
    FUN_1049156f8(uVar2,uVar5,0,param_1);
    __sSS10lowercasedSSyF();
    lVar4 = 0;
    puVar6 = (ulong *)0x11309d0f0;
    do {
      uVar3 = puVar6[-1];
      if ((uVar3 == uVar2 && *puVar6 == uVar5) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,*puVar6,uVar2,uVar5,0), (uVar3 & 1) != 0)) {
        _swift_bridgeObjectRelease(uVar5);
        _swift_arrayDestroy(0x11309d0e8,0x15,PTR___sSSN_11034da80);
        func_0x000104916000();
        if (((uint)lVar4 & 0xff) != 0x15) {
          return (uint)lVar4;
        }
        return 0;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 2;
    } while (lVar4 != 0x15);
    _swift_bridgeObjectRelease(uVar5);
    _swift_arrayDestroy(0x11309d0e8,0x15,PTR___sSSN_11034da80);
  }
  return 0;
}



/* Entry: 104915878; end: 104915d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104915878(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uVar21;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar7 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  bVar2 = *(byte *)(param_1 + 0x20);
  lVar5 = param_1;
  _swift_bridgeObjectRetain();
  lVar5 = lVar5 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(lVar5,~(-1L << ((ulong)bVar2 & 0x3f)));
  puVar15 = (undefined *)(ulong)*(uint *)(param_1 + 0x24);
  bVar2 = *(byte *)(param_1 + 0x20);
  _swift_bridgeObjectRelease(param_1);
  if (lVar5 == 1L << ((ulong)bVar2 & 0x3f)) {
    return (long *)0x0;
  }
  FUN_1049156f8(lVar5,puVar15,0,param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    _swift_bridgeObjectRetain(puVar15);
LAB_104915988:
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    func_0x000100214a84();
    _swift_release(puVar18);
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(puVar15);
    lVar6 = lVar5;
    puVar17 = puVar15;
    func_0x000100029284(lVar5);
    if (((ulong)puVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_104915988;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
    uVar21 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    _swift_dynamicCast(&puStack_b0,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar21,6);
    puVar17 = puStack_b0;
    if ((uVar7 & 1) == 0) goto LAB_104915988;
  }
  bVar2 = puVar17[0x20];
  _swift_bridgeObjectRetain(puVar17);
  puVar18 = puVar17 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(puVar18,~(-1L << ((ulong)bVar2 & 0x3f)));
  puVar16 = (undefined *)(ulong)*(uint *)(puVar17 + 0x24);
  bVar2 = puVar17[0x20];
  _swift_bridgeObjectRelease(puVar17);
  if (puVar18 != (undefined *)(1L << ((ulong)bVar2 & 0x3f))) {
    FUN_1049156f8(puVar18,puVar16,0,puVar17);
    _swift_bridgeObjectRetain(puVar16);
    puVar8 = puVar17;
    FUN_104915750();
    uVar4 = (uint)puVar8;
    if ((uVar4 & 0xff) < 0x15) {
      uVar3 = 1 << (ulong)(uVar4 & 0x1f);
      if ((uVar3 & 0x1ff0) == 0) {
        if ((uVar3 & 0x1e000) == 0) {
          if ((1 << (ulong)(uVar4 & 0x1f) & 0x1e0000U) == 0) goto LAB_104915b80;
          if (*(long *)(puVar17 + 0x10) == 0) {
LAB_104915c14:
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            _swift_bridgeObjectRetain(puVar17);
            puVar14 = puVar16;
            func_0x000100029284(puVar18);
            if (((ulong)puVar14 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar17);
              goto LAB_104915c14;
            }
            func_0x0001000bb420(*(long *)(puVar17 + 0x38) + (long)puVar18 * 0x20,&uStack_90);
            _swift_bridgeObjectRelease(puVar16);
            puVar16 = puVar17;
          }
          _swift_bridgeObjectRelease(puVar16);
          _swift_bridgeObjectRelease(puVar17);
          if (lStack_78 != 0) {
            uVar21 = 0x11309c618;
            func_0x0001048db364(0x11309c618);
            _swift_dynamicCast(&puStack_b0,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar21,6);
            if ((uVar11 & 1) == 0) goto LAB_104915d30;
            if (*(long *)(puStack_b0 + 0x10) == 0) {
              _swift_bridgeObjectRelease(puStack_b0);
              goto LAB_104915d30;
            }
            puVar18 = (undefined *)0x0;
            uStack_a8 = 0;
            puVar17 = puStack_b0;
            goto LAB_104915c7c;
          }
        }
        else {
          if (*(long *)(puVar17 + 0x10) == 0) {
LAB_104915b94:
            in_b0 = 0;
            in_register_00005001 = 0;
            in_register_00005002 = 0;
            in_register_00005003 = 0;
            in_register_00005004 = 0;
            in_register_00005005 = 0;
            in_register_00005006 = 0;
            in_register_00005007 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            _swift_bridgeObjectRetain(puVar17);
            puVar14 = puVar16;
            func_0x000100029284(puVar18);
            if (((ulong)puVar14 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar17);
              goto LAB_104915b94;
            }
            func_0x0001000bb420(*(long *)(puVar17 + 0x38) + (long)puVar18 * 0x20,&uStack_90);
            _swift_bridgeObjectRelease(puVar16);
            puVar16 = puVar17;
          }
          _swift_bridgeObjectRelease(puVar16);
          _swift_bridgeObjectRelease(puVar17);
          if (lStack_78 != 0) {
            uVar21 = 0;
            func_0x0001002ed07c(0);
            _swift_dynamicCast(&puStack_b0,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar21,6);
            if ((uVar10 & 1) != 0) {
              _objc_msgSend(puStack_b0,PTR_s_doubleValue_1125bfb10);
              uVar21 = CONCAT17(in_register_00005007,
                                CONCAT16(in_register_00005006,
                                         CONCAT15(in_register_00005005,
                                                  CONCAT14(in_register_00005004,
                                                           CONCAT13(in_register_00005003,
                                                                    CONCAT12(in_register_00005002,
                                                                             CONCAT11(
                                                  in_register_00005001,in_b0)))))));
              uVar19 = 0;
              puVar18 = (undefined *)0x0;
              uVar20 = 0;
              puVar17 = (undefined *)0x0;
              puVar16 = puStack_b0;
              goto LAB_104915c84;
            }
            goto LAB_104915d30;
          }
        }
      }
      else {
        if (*(long *)(puVar17 + 0x10) == 0) {
LAB_104915b28:
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          _swift_bridgeObjectRetain(puVar17);
          puVar14 = puVar16;
          func_0x000100029284(puVar18);
          if (((ulong)puVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar17);
            goto LAB_104915b28;
          }
          func_0x0001000bb420(*(long *)(puVar17 + 0x38) + (long)puVar18 * 0x20,&uStack_90);
          _swift_bridgeObjectRelease(puVar16);
          puVar16 = puVar17;
        }
        _swift_bridgeObjectRelease(puVar16);
        _swift_bridgeObjectRelease(puVar17);
        if (lStack_78 != 0) {
          _swift_dynamicCast(&puStack_b0,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6)
          ;
          if ((uVar9 & 1) == 0) goto LAB_104915d30;
          puVar17 = (undefined *)0x0;
          puVar18 = puStack_b0;
LAB_104915c7c:
          uVar19 = 1;
          uVar21 = 0;
          puVar16 = (undefined *)0x0;
          uVar20 = uStack_a8;
LAB_104915c84:
          lVar12 = 0;
          func_0x000104918630();
          lVar6 = lVar12;
          _objc_allocWithZone();
          *(char *)(lVar6 + _DAT_11309d6a8) = (char)puVar8;
          plVar13 = (long *)(lVar6 + _DAT_11309d6b0);
          *plVar13 = lVar5;
          plVar13[1] = (long)puVar15;
          puVar1 = (undefined8 *)(lVar6 + _DAT_11309d6b8);
          *puVar1 = puVar18;
          puVar1[1] = uVar20;
          puVar1 = (undefined8 *)(lVar6 + _DAT_11309d6c0);
          *puVar1 = uVar21;
          *(undefined1 *)(puVar1 + 1) = uVar19;
          *(undefined **)(lVar6 + _DAT_11309d6c8) = puVar17;
          plVar13 = &lStack_a0;
          lStack_a0 = lVar6;
          lStack_98 = lVar12;
          _objc_msgSendSuper2(plVar13,PTR_s_init_1125d9248);
          _objc_release(puVar16);
          return plVar13;
        }
      }
      FUN_104915d68(&uStack_90,0x11309c428);
      goto LAB_104915d30;
    }
LAB_104915b80:
    _swift_bridgeObjectRelease(puVar16);
  }
  _swift_bridgeObjectRelease(puVar15);
  puVar15 = puVar17;
LAB_104915d30:
  _swift_bridgeObjectRelease(puVar15);
  return (long *)0x0;
}



/* Entry: 104915d68; end: 104915de7;  */

undefined8 FUN_104915d68(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104915de8; end: 104915dfb;  */

void FUN_104915de8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104915dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x50))();
  return;
}



/* Entry: 104915dfc; end: 104915ef7;  */

undefined * FUN_104915dfc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  }
  else {
    func_0x0001048db364(param_2);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104915ef4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104915ef8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar10 = puVar10 + 3;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 104915ef8; end: 104915f03;  */

void FUN_104915ef8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104915efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 8))();
  return;
}



/* Entry: 104915f04; end: 104915f0b;  */

undefined1 FUN_104915f04(undefined1 param_1)

{
  return param_1;
}



/* Entry: 104915f0c; end: 104915f1f;  */

bool FUN_104915f0c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104915f20; end: 104915ff3;  */

void FUN_104915f20(void)

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



/* Entry: 104915ff4; end: 10491600f;  */

void FUN_104915ff4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104916010; end: 1049161b7;  */

void FUN_104916010(void)

{
  undefined *puVar1;
  
  if (puRam000000011309d698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd484d0;
  _swift_getWitnessTable(&UNK_10dd484d0,&UNK_1107b7f30);
  puRam000000011309d698 = puVar1;
  return;
}



/* Entry: 1049161b8; end: 1049161c7;  */

void FUN_1049161b8(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x0001049161bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 8))();
  return;
}



/* Entry: 1049161c8; end: 1049162cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1049161c8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  puVar2 = auStack_80;
  if (param_7 == 0) {
    param_1 = 0;
  }
  else {
    _objc_msgSend(param_7,PTR_s_doubleValue_1125bfb10);
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11309d6a8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d6b0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d6b8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d6c0);
  *puVar1 = param_1;
  *(bool *)(puVar1 + 1) = param_7 == 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309d6c8) = param_8;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  _objc_release(param_7);
  return puVar2;
}



/* Entry: 1049162cc; end: 10491642f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049162cc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309d6a8;
  _swift_beginAccess(unaff_x20 + _DAT_11309d6a8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 104916430; end: 1049165c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104916430(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11309d6a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d6b0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d6b8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d6c0);
  *puVar1 = param_6;
  *(byte *)(puVar1 + 1) = param_7 & 1;
  *(undefined8 *)(unaff_x20 + _DAT_11309d6c8) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049165c8; end: 10491665f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049165c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_50;
  uStack_40 = *(undefined8 *)(unaff_x20 + _DAT_11309d6b0);
  uStack_38 = ((undefined8 *)(unaff_x20 + _DAT_11309d6b0))[1];
  uStack_50 = 0x2e;
  uStack_48 = 0xe100000000000000;
  uVar1 = param_1;
  func_0x000100e8b654();
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (&uStack_50,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar1,uVar1);
  FUN_104916660(param_1,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  return (uint)param_1 & 1;
}



/* Entry: 104916660; end: 104916caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104916660(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (lVar9 = *(long *)(param_2 + 0x10), lVar9 != 0)) {
    lVar3 = *(long *)(param_2 + 0x20);
    uVar7 = *(ulong *)(param_2 + 0x28);
    _swift_bridgeObjectRetain(uVar7);
    uVar2 = 0x5d2a5b;
    __sSS9hasSuffixySbSSF(0x5d2a5b,0xe300000000000000,lVar3,uVar7);
    if ((uVar2 & 1) != 0) {
      func_0x000104916a60(lVar3,uVar7,param_1,param_2);
      uVar8 = (uint)lVar3;
LAB_1049166e0:
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_1049167c4;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      _swift_bridgeObjectRetain(param_1);
      uVar2 = uVar7;
      func_0x000100029284(lVar3);
      _swift_bridgeObjectRelease(param_1);
      lVar1 = _DAT_11309d6a8;
      if ((uVar2 & 1) != 0) {
        if (lVar9 == 1) {
          _swift_beginAccess(unaff_x20 + _DAT_11309d6a8,auStack_98,0,0);
          if (*(byte *)(unaff_x20 + lVar1) < 0x15) {
            uVar8 = 1 << (ulong)(*(byte *)(unaff_x20 + lVar1) & 0x1f);
            if ((uVar8 & 0x1e1ff0) != 0) {
              if (*(long *)(param_1 + 0x10) == 0) {
                uStack_78 = 0;
                uStack_80 = 0;
                lStack_68 = 0;
                uStack_70 = 0;
                _swift_bridgeObjectRelease(uVar7);
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                uVar2 = uVar7;
                func_0x000100029284(lVar3);
                if ((uVar2 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_1);
                  uStack_78 = 0;
                  uStack_80 = 0;
                  lStack_68 = 0;
                  uStack_70 = 0;
                }
                else {
                  func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&uStack_80);
                  _swift_bridgeObjectRelease(uVar7);
                  uVar7 = param_1;
                }
                _swift_bridgeObjectRelease(uVar7);
              }
              if (lStack_68 == 0) {
                func_0x00010006e7f4(&uStack_80);
                uVar6 = 0;
                uVar7 = 0;
              }
              else {
                puVar5 = &uStack_a8;
                _swift_dynamicCast(puVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6
                                  );
                uVar6 = uStack_a8;
                uVar7 = uStack_a0;
                if ((int)puVar5 == 0) {
                  uVar6 = 0;
                  uVar7 = 0;
                }
              }
              goto LAB_1049169ac;
            }
            if ((uVar8 & 0x1e000) == 0) goto LAB_104916a48;
            if (*(long *)(param_1 + 0x10) == 0) {
              uStack_78 = 0;
              uStack_80 = 0;
              lStack_68 = 0;
              uStack_70 = 0;
              _swift_bridgeObjectRelease(uVar7);
            }
            else {
              _swift_bridgeObjectRetain(param_1);
              uVar2 = uVar7;
              func_0x000100029284(lVar3);
              if ((uVar2 & 1) == 0) {
                _swift_bridgeObjectRelease(param_1);
                uStack_78 = 0;
                uStack_80 = 0;
                lStack_68 = 0;
                uStack_70 = 0;
              }
              else {
                func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&uStack_80);
                _swift_bridgeObjectRelease(uVar7);
                uVar7 = param_1;
              }
              _swift_bridgeObjectRelease(uVar7);
            }
            if (lStack_68 == 0) {
              func_0x00010006e7f4(&uStack_80);
              uStack_a8 = 0;
              uVar8 = 1;
            }
            else {
              puVar5 = &uStack_a8;
              _swift_dynamicCast(puVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
              if ((uint)puVar5 == 0) {
                uStack_a8 = 0;
              }
              uVar8 = (uint)puVar5 ^ 1;
            }
            uVar6 = 0;
            uVar7 = 0;
          }
          else {
LAB_104916a48:
            _swift_bridgeObjectRelease(uVar7);
            uVar6 = 0;
            uVar7 = 0;
LAB_1049169ac:
            uStack_a8 = 0;
            uVar8 = 1;
          }
          FUN_104916cb0(uVar6,uVar7,uStack_a8,uVar8);
          uVar8 = (uint)uVar6;
          goto LAB_1049166e0;
        }
        if (*(long *)(param_1 + 0x10) == 0) {
LAB_104916888:
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
          _swift_bridgeObjectRelease(uVar7);
LAB_104916898:
          func_0x00010006e7f4(&uStack_80);
          uVar7 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_1);
          uVar2 = uVar7;
          func_0x000100029284(lVar3);
          if ((uVar2 & 1) == 0) {
            _swift_bridgeObjectRelease(param_1);
            goto LAB_104916888;
          }
          func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&uStack_80);
          _swift_bridgeObjectRelease(uVar7);
          _swift_bridgeObjectRelease(param_1);
          if (lStack_68 == 0) goto LAB_104916898;
          uVar6 = 0x11309c420;
          func_0x0001048db364(0x11309c420);
          puVar4 = auStack_98;
          _swift_dynamicCast(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar6,6);
          uVar7 = auStack_98[0];
          if ((int)puVar4 == 0) {
            uVar7 = 0;
          }
        }
        func_0x000101994330(param_2,(long *)(param_2 + 0x20),1,lVar9 << 1 | 1);
        uVar2 = uVar7;
        FUN_104916660(uVar7,param_2);
        uVar8 = (uint)uVar2;
        _swift_release(param_2);
        goto LAB_1049166e0;
      }
    }
    _swift_bridgeObjectRelease(uVar7);
  }
  uVar8 = 0;
LAB_1049167c4:
  return uVar8 & 1;
}



/* Entry: 104916cb0; end: 104917543;  */

/* WARNING: Removing unreachable block (ram,0x000104917054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104916cb0(undefined *param_1,undefined *param_2,double param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar11 = _DAT_11309d6a8;
  uVar1 = 0;
  puVar9 = (undefined *)0x0;
  _swift_beginAccess(unaff_x20 + _DAT_11309d6a8,auStack_68,0,0);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  switch(*(undefined1 *)(unaff_x20 + lVar11)) {
  case 4:
  case 7:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    lVar11 = ((undefined8 *)(unaff_x20 + _DAT_11309d6b8))[1];
    if (lVar11 != 0) {
      puVar7 = *(undefined **)(unaff_x20 + _DAT_11309d6b8);
      __sSS10lowercasedSSyF();
      puStack_78 = param_1;
      puStack_70 = param_2;
      __sSS10lowercasedSSyF();
      puStack_90 = puVar7;
      lStack_88 = lVar11;
      func_0x000100e8b654();
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (&puStack_90,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar7,puVar7);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(lVar11);
      param_2 = puVar9;
      goto code_r0x00010491744c;
    }
    break;
  case 5:
  case 8:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    lVar11 = ((undefined8 *)(unaff_x20 + _DAT_11309d6b8))[1];
    if (lVar11 != 0) {
      puVar9 = *(undefined **)(unaff_x20 + _DAT_11309d6b8);
      __sSS10lowercasedSSyF();
      puStack_78 = param_1;
      puStack_70 = param_2;
      __sSS10lowercasedSSyF();
      puStack_90 = puVar9;
      lStack_88 = lVar11;
      func_0x000100e8b654();
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (&puStack_90,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar9,puVar9);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(lVar11);
      param_2 = (undefined *)(ulong)(uVar1 ^ 1);
      goto code_r0x00010491744c;
    }
    break;
  case 6:
  case 9:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    puVar7 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_11309d6b8))[1];
    if (puVar7 != (undefined *)0x0) {
      puVar9 = *(undefined **)(unaff_x20 + _DAT_11309d6b8);
      __sSS10lowercasedSSyF(param_1,param_2);
      __sSS10lowercasedSSyF(puVar9,puVar7);
      __sSS9hasPrefixySbSSF();
      goto code_r0x000104917410;
    }
    break;
  case 10:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    uVar6 = ((ulong *)(unaff_x20 + _DAT_11309d6b8))[1];
    if (uVar6 != 0) {
      uVar8 = *(ulong *)(unaff_x20 + _DAT_11309d6b8);
      uVar3 = uVar8 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar3 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar3 != 0) {
        _objc_allocWithZone(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
        _swift_bridgeObjectRetain(uVar6);
        func_0x000102a44580(uVar8,uVar6,2);
        puVar9 = param_1;
        __sSS5countSivg(param_1,param_2);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
        uVar6 = uVar8;
        _objc_msgSend(uVar8,PTR_s_matchesInString_options_range__11260e0e8,param_1,4,0,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        uVar2 = 0;
        FUN_1049185f0(0,0x112f38b30,&PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170);
        uVar3 = uVar6;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar6,uVar2);
        _objc_release(uVar6);
        if (uVar3 >> 0x3e == 0) {
          uVar6 = *(ulong *)((uVar3 & 0xfffffffffffff8) + 0x10);
        }
        else {
          uVar6 = uVar3 & 0xffffffffffffff8;
          if ((long)uVar3 < 0) {
            uVar6 = uVar3;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(uVar6);
        }
        _swift_bridgeObjectRelease(uVar3);
        _objc_release(uVar8);
        param_2 = (undefined *)(ulong)(uVar6 != 0);
        goto code_r0x00010491744c;
      }
    }
    break;
  case 0xb:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    puVar9 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_11309d6b8))[1];
    if (puVar9 != (undefined *)0x0) {
      puVar7 = *(undefined **)(unaff_x20 + _DAT_11309d6b8);
      __sSS10lowercasedSSyF();
      __sSS10lowercasedSSyF();
      if (param_1 == puVar7 && param_2 == puVar9) {
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(puVar9);
        param_2 = (undefined *)0x1;
        goto code_r0x00010491744c;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,puVar7,puVar9,0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(puVar9);
      if (((ulong)param_1 & 1) != 0) goto code_r0x000104917088;
    }
    break;
  case 0xc:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    puVar7 = (undefined *)((undefined8 *)(unaff_x20 + _DAT_11309d6b8))[1];
    if (puVar7 != (undefined *)0x0) {
      puVar9 = *(undefined **)(unaff_x20 + _DAT_11309d6b8);
      __sSS10lowercasedSSyF();
      __sSS10lowercasedSSyF();
      if (param_1 != puVar9 || param_2 != puVar7) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,puVar9,puVar7,0);
        uVar1 = (uint)param_1;
        goto code_r0x000104917278;
      }
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(puVar7);
    }
    break;
  case 0xd:
    if (((param_4 & 1) == 0) && (((ulong)((double *)(unaff_x20 + _DAT_11309d6c0))[1] & 1) == 0)) {
      param_2 = (undefined *)(ulong)(param_3 < *(double *)(unaff_x20 + _DAT_11309d6c0));
      goto code_r0x00010491744c;
    }
    break;
  case 0xe:
    if ((((param_4 & 1) == 0) && (((ulong)((double *)(unaff_x20 + _DAT_11309d6c0))[1] & 1) == 0)) &&
       (param_3 <= *(double *)(unaff_x20 + _DAT_11309d6c0))) {
code_r0x000104917088:
      param_2 = (undefined *)0x1;
      goto code_r0x00010491744c;
    }
    break;
  case 0xf:
    if ((((param_4 & 1) == 0) && (((ulong)((double *)(unaff_x20 + _DAT_11309d6c0))[1] & 1) == 0)) &&
       (*(double *)(unaff_x20 + _DAT_11309d6c0) < param_3)) goto code_r0x000104917088;
    break;
  case 0x10:
    if ((((param_4 & 1) == 0) && (((ulong)((double *)(unaff_x20 + _DAT_11309d6c0))[1] & 1) == 0)) &&
       (*(double *)(unaff_x20 + _DAT_11309d6c0) <= param_3)) goto code_r0x000104917088;
    break;
  case 0x11:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    puVar5 = *(undefined **)(unaff_x20 + _DAT_11309d6c8);
    puVar9 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar9 = puVar7;
    }
    puStack_90 = PTR___swiftEmptySetSingleton_11034f1d8;
    lVar11 = *(long *)(puVar9 + 0x10);
    if (lVar11 == 0) {
      _swift_bridgeObjectRetain(puVar5);
      puVar7 = PTR___swiftEmptySetSingleton_11034f1d8;
      _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
      _swift_bridgeObjectRelease(puVar9);
    }
    else {
      _swift_bridgeObjectRetain(puVar5);
      _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
      puVar10 = (undefined8 *)(puVar9 + 0x28);
      do {
        uVar2 = puVar10[-1];
        uVar4 = *puVar10;
        __sSS10lowercasedSSyF(uVar2,uVar4);
        func_0x000100403b00(&puStack_78,uVar2,uVar4);
        _swift_bridgeObjectRelease(puStack_70);
        puVar10 = puVar10 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      _swift_bridgeObjectRelease(puVar9);
      puVar7 = puStack_90;
    }
    __sSS10lowercasedSSyF(param_1,param_2);
    func_0x0001000f66f0();
    puVar9 = param_1;
code_r0x000104917410:
    _swift_bridgeObjectRelease(param_2);
    goto code_r0x000104917414;
  case 0x12:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    puVar5 = *(undefined **)(unaff_x20 + _DAT_11309d6c8);
    puVar9 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar9 = puVar7;
    }
    puStack_90 = PTR___swiftEmptySetSingleton_11034f1d8;
    lVar11 = *(long *)(puVar9 + 0x10);
    if (lVar11 == 0) {
      _swift_bridgeObjectRetain(puVar5);
      puVar7 = PTR___swiftEmptySetSingleton_11034f1d8;
      _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
      _swift_bridgeObjectRelease(puVar9);
    }
    else {
      _swift_bridgeObjectRetain(puVar5);
      _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
      puVar10 = (undefined8 *)(puVar9 + 0x28);
      do {
        uVar2 = puVar10[-1];
        uVar4 = *puVar10;
        __sSS10lowercasedSSyF(uVar2,uVar4);
        func_0x000100403b00(&puStack_78,uVar2,uVar4);
        _swift_bridgeObjectRelease(puStack_70);
        puVar10 = puVar10 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      _swift_bridgeObjectRelease(puVar9);
      puVar7 = puStack_90;
    }
    __sSS10lowercasedSSyF(param_1,param_2);
    uVar1 = (uint)param_1;
    func_0x0001000f66f0();
code_r0x000104917278:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(puVar7);
    param_2 = (undefined *)(ulong)(uVar1 ^ 1);
    goto code_r0x00010491744c;
  case 0x13:
    if (param_2 == (undefined *)0x0) goto code_r0x00010491744c;
    puVar5 = *(undefined **)(unaff_x20 + _DAT_11309d6c8);
    puVar9 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar9 = puVar7;
    }
    puStack_90 = PTR___swiftEmptySetSingleton_11034f1d8;
    lVar11 = *(long *)(puVar9 + 0x10);
    if (lVar11 == 0) {
      _swift_bridgeObjectRetain(puVar5);
      puVar7 = PTR___swiftEmptySetSingleton_11034f1d8;
      _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
      _swift_bridgeObjectRelease(puVar9);
    }
    else {
      _swift_bridgeObjectRetain(puVar5);
      _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
      puVar10 = (undefined8 *)(puVar9 + 0x28);
      do {
        uVar2 = puVar10[-1];
        uVar4 = *puVar10;
        _swift_bridgeObjectRetain(uVar4);
        func_0x000100403b00(&puStack_78,uVar2,uVar4);
        _swift_bridgeObjectRelease(puStack_70);
        puVar10 = puVar10 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      _swift_bridgeObjectRelease(puVar9);
      puVar7 = puStack_90;
    }
    func_0x0001000f66f0(param_1,param_2,puVar7);
    puVar9 = param_1;
code_r0x000104917414:
    _swift_bridgeObjectRelease(puVar7);
    param_2 = puVar9;
    goto code_r0x00010491744c;
  case 0x14:
    if (param_2 != (undefined *)0x0) {
      puVar5 = *(undefined **)(unaff_x20 + _DAT_11309d6c8);
      puVar9 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar9 = puVar7;
      }
      puStack_90 = PTR___swiftEmptySetSingleton_11034f1d8;
      lVar11 = *(long *)(puVar9 + 0x10);
      if (lVar11 == 0) {
        _swift_bridgeObjectRetain(puVar5);
        puVar7 = PTR___swiftEmptySetSingleton_11034f1d8;
        _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
        _swift_bridgeObjectRelease(puVar9);
      }
      else {
        _swift_bridgeObjectRetain(puVar5);
        _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
        puVar10 = (undefined8 *)(puVar9 + 0x28);
        do {
          uVar2 = puVar10[-1];
          uVar4 = *puVar10;
          _swift_bridgeObjectRetain(uVar4);
          func_0x000100403b00(&puStack_78,uVar2,uVar4);
          _swift_bridgeObjectRelease(puStack_70);
          puVar10 = puVar10 + 2;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        _swift_bridgeObjectRelease(puVar9);
        puVar7 = puStack_90;
      }
      func_0x0001000f66f0(param_1,param_2,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      param_2 = (undefined *)(ulong)((uint)param_1 ^ 1);
    }
    goto code_r0x00010491744c;
  }
  param_2 = (undefined *)0x0;
code_r0x00010491744c:
  return (uint)param_2 & 1;
}



/* Entry: 104917544; end: 1049176c3;  */

/* WARNING: Removing unreachable block (ram,0x0001049175c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104917544(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  uVar3 = ((ulong *)(unaff_x20 + _DAT_11309d6b8))[1];
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11309d6b8);
    uVar2 = uVar4 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      _objc_allocWithZone(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
      _swift_bridgeObjectRetain(uVar3);
      func_0x000102a44580(uVar4,uVar3,2);
      uVar1 = param_1;
      __sSS5countSivg(param_1,param_2);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      uVar3 = uVar4;
      _objc_msgSend(uVar4,PTR_s_matchesInString_options_range__11260e0e8,param_1,4,0,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      uVar1 = 0;
      FUN_1049185f0(0,0x112f38b30,&PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170);
      uVar2 = uVar3;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar1);
      _objc_release(uVar3);
      if (uVar2 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar2 & 0xfffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar2 & 0xffffffffffffff8;
        if ((long)uVar2 < 0) {
          uVar3 = uVar2;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg(uVar3);
      }
      _swift_bridgeObjectRelease(uVar2);
      _objc_release(uVar4);
      return uVar3 != 0;
    }
  }
  return false;
}



/* Entry: 1049176c4; end: 1049177f7;  */

uint FUN_1049176c4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  puStack_58 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  else {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar2 = puVar5[-1];
      uVar3 = *puVar5;
      if ((param_4 & 1) == 0) {
        _swift_bridgeObjectRetain(uVar3);
      }
      else {
        __sSS10lowercasedSSyF(uVar2,uVar3);
      }
      func_0x000100403b00(auStack_68,uVar2,uVar3);
      _swift_bridgeObjectRelease(uStack_60);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
      puVar1 = puStack_58;
    } while (lVar4 != 0);
  }
  if ((param_4 & 1) == 0) {
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    __sSS10lowercasedSSyF(param_2,param_3);
  }
  func_0x0001000f66f0(param_2,param_3,puVar1);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(puVar1);
  return (uint)param_2 & 1;
}



/* Entry: 1049177f8; end: 104917843;  */

undefined8 FUN_1049177f8(void)

{
  return 0x11309d6a0;
}



/* Entry: 104917844; end: 104917883; +[_TtC8FBAEMKit28AEMAdvertiserSingleEntryRule supportsSecureCoding] */

undefined1 FUN_104917844(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11309d6a0,auStack_38,0,0);
  return uRam000000011309d6a0;
}



/* Entry: 104917884; end: 1049178c7;  */

void FUN_104917884(undefined1 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11309d6a0,auStack_38,1,0);
  uRam000000011309d6a0 = param_1;
  return;
}



/* Entry: 1049178c8; end: 10491790b; +[_TtC8FBAEMKit28AEMAdvertiserSingleEntryRule setSupportsSecureCoding:] */

void FUN_1049178c8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11309d6a0,auStack_38,1,0);
  uRam000000011309d6a0 = param_3;
  return;
}



/* Entry: 10491790c; end: 10491794f;  */

undefined1  [16] FUN_10491790c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x11309d6a0,param_1,0x21,0);
  auVar1._8_8_ = 0x11309d6a0;
  auVar1._0_8_ = 0x10491794c;
  return auVar1;
}



/* Entry: 104917950; end: 10491797f;  */

void FUN_104917950(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104917980(param_1);
  return;
}



/* Entry: 104917980; end: 104917c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104917980(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 uStack_98;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  _swift_getObjectType();
  uVar3 = 0x726f74617265706f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x726f74617265706f,0xe800000000000000);
  uVar9 = param_1;
  _objc_msgSend(param_1,PTR_s_decodeIntegerForKey__1125b7578,uVar3);
  uVar2 = (uint)uVar9;
  _objc_release(uVar3);
  func_0x000104916000();
  if ((uVar2 & 0xff) != 0x15) {
    lVar4 = 0;
    FUN_1049185f0(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    lVar5 = lVar4;
    __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
    if (lVar5 != 0) {
      lVar6 = lVar4;
      __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
                (lVar4,0x765f676e69727473,0xec00000065756c61,lVar4);
      if (lVar6 != 0) {
        lVar7 = 0;
        FUN_1049185f0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF()
        ;
        if (lVar7 != 0) {
          lVar8 = 0x11309d6d8;
          func_0x0001048db364();
          _swift_allocObject();
          uVar3 = 2;
          *(undefined8 *)(lVar8 + 0x18) = 4;
          *(undefined8 *)(lVar8 + 0x10) = 2;
          uVar9 = 0;
          FUN_1049185f0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
          *(undefined8 *)(lVar8 + 0x20) = uVar9;
          *(long *)(lVar8 + 0x28) = lVar4;
          puVar11 = (undefined1 *)0x61765f7961727261;
          __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
                    (auStack_80,lVar8,0x61765f7961727261,0xeb0000000065756c);
          _swift_bridgeObjectRelease(lVar8);
          if (lStack_68 == 0) {
            func_0x00010006e7f4(auStack_80);
            uVar9 = 0;
          }
          else {
            uVar9 = 0x11309c618;
            func_0x0001048db364(0x11309c618);
            puVar10 = &uStack_98;
            puVar11 = auStack_80;
            _swift_dynamicCast(puVar10,puVar11,PTR___sypN_11034f1a8 + 8,uVar9,6);
            uVar9 = uStack_98;
            if ((int)puVar10 == 0) {
              uVar9 = 0;
            }
          }
          *(char *)(unaff_x20 + _DAT_11309d6a8) = (char)uVar2;
          lVar4 = lVar5;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          plVar1 = (long *)(unaff_x20 + _DAT_11309d6b0);
          *plVar1 = lVar4;
          plVar1[1] = (long)puVar11;
          lVar4 = lVar6;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          plVar1 = (long *)(unaff_x20 + _DAT_11309d6b8);
          *plVar1 = lVar4;
          plVar1[1] = (long)puVar11;
          _objc_msgSend(lVar7,PTR_s_doubleValue_1125bfb10);
          puVar10 = (undefined8 *)(unaff_x20 + _DAT_11309d6c0);
          *puVar10 = uVar3;
          *(undefined1 *)(puVar10 + 1) = 0;
          *(undefined8 *)(unaff_x20 + _DAT_11309d6c8) = uVar9;
          puVar11 = &stack0xffffffffffffff70;
          _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
          _objc_release(param_1);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          return puVar11;
        }
        _objc_release(lVar5);
        lVar5 = lVar6;
      }
      _objc_release(lVar5);
    }
  }
  _objc_release(param_1);
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 104917c80; end: 104917ca7; -[_TtC8FBAEMKit28AEMAdvertiserSingleEntryRule initWithCoder:] */

void FUN_104917c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104917980();
  return;
}



/* Entry: 104917ca8; end: 104917ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104917ca8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = _DAT_11309d6a8;
  _swift_beginAccess(unaff_x20 + _DAT_11309d6a8,auStack_58,0,0);
  uVar1 = *(undefined1 *)(unaff_x20 + lVar4);
  uVar2 = 0x726f74617265706f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x726f74617265706f,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar1,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11309d6b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11309d6b0))[1]);
  uVar3 = 0x656b5f6d61726170;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656b5f6d61726170,0xe900000000000079);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11309d6b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11309d6b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar3 = 0x765f676e69727473;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x765f676e69727473,0xec00000065756c61);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar3);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar3);
  if ((*(byte *)((undefined8 *)(unaff_x20 + _DAT_11309d6c0) + 1) & 1) == 0) {
    __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF
              (*(undefined8 *)(unaff_x20 + _DAT_11309d6c0));
  }
  else {
    uVar3 = 0;
  }
  uVar2 = 0x765f7265626d756e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x765f7265626d756e,0xec00000065756c61);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(unaff_x20 + _DAT_11309d6c8);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,PTR___sSSN_11034da80);
  }
  uVar2 = 0x61765f7961727261;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x61765f7961727261,0xeb0000000065756c);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,lVar4,uVar2);
  _swift_unknownObjectRelease(lVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 104917ee4; end: 104917f33; -[_TtC8FBAEMKit28AEMAdvertiserSingleEntryRule encodeWithCoder:] */

void FUN_104917ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104917ca8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104917f34; end: 10491817f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104917f34(undefined8 param_1)

{
  double *pdVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  long alStack_98 [3];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar6 = alStack_98;
    _swift_dynamicCast(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    lVar8 = _DAT_11309d6a8;
    if (((ulong)plVar6 & 1) != 0) {
      _swift_beginAccess(unaff_x20 + _DAT_11309d6a8,auStack_80,0,0);
      lVar9 = _DAT_11309d6a8;
      cVar3 = *(char *)(unaff_x20 + lVar8);
      _swift_beginAccess(alStack_98[0] + _DAT_11309d6a8,alStack_98,0,0);
      cVar4 = *(char *)(alStack_98[0] + lVar9);
      lVar8 = *(long *)(unaff_x20 + _DAT_11309d6b0);
      if (lVar8 == *(long *)(alStack_98[0] + _DAT_11309d6b0) &&
          ((long *)(unaff_x20 + _DAT_11309d6b0))[1] == ((long *)(alStack_98[0] + _DAT_11309d6b0))[1]
         ) {
        uVar12 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar12 = (uint)lVar8 ^ 1;
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_11309d6b8))[1];
      lVar9 = ((long *)(alStack_98[0] + _DAT_11309d6b8))[1];
      uVar10 = (uint)(lVar8 == 0 && lVar9 == 0);
      if (lVar8 != 0 && lVar9 != 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_11309d6b8);
        if (lVar7 == *(long *)(alStack_98[0] + _DAT_11309d6b8) && lVar8 == lVar9) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar7;
        }
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11309d6c8);
      uVar11 = (uint)(lVar8 == 0 && *(long *)(alStack_98[0] + _DAT_11309d6c8) == 0);
      if ((lVar8 != 0) && (*(long *)(alStack_98[0] + _DAT_11309d6c8) != 0)) {
        func_0x00010142cfc4();
        uVar11 = (uint)lVar8;
      }
      pdVar1 = (double *)(alStack_98[0] + _DAT_11309d6c0);
      if (*(char *)((double *)(unaff_x20 + _DAT_11309d6c0) + 1) == '\x01') {
        cVar2 = *(char *)(pdVar1 + 1);
        _objc_release(alStack_98[0]);
        if (((cVar2 == '\x01') && (cVar3 == cVar4 && (uVar12 & 1) == 0)) &&
           ((((uVar10 ^ 1) & 1) == 0 && (((uVar11 ^ 1) & 1) == 0)))) {
          return true;
        }
      }
      else {
        dVar13 = *(double *)(unaff_x20 + _DAT_11309d6c0);
        dVar14 = *pdVar1;
        dVar5 = pdVar1[1];
        _objc_release(alStack_98[0]);
        if ((((((ulong)dVar5 & 1) == 0) && (cVar3 == cVar4 && (uVar12 & 1) == 0)) &&
            (((uVar10 ^ 1) & 1) == 0)) && (((uVar11 ^ 1) & 1) == 0)) {
          return dVar13 == dVar14;
        }
      }
    }
  }
  return false;
}



/* Entry: 104918180; end: 1049181ff; -[_TtC8FBAEMKit28AEMAdvertiserSingleEntryRule isEqual:] */

uint FUN_104918180(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104917f34(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104918200; end: 10491824b;  */

void FUN_104918200(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10491824c; end: 1049182ab; -[_TtC8FBAEMKit28AEMAdvertiserSingleEntryRule init] */

void FUN_10491824c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBAEMKit.AEMAdvertiserSingleEntryRule",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104918278);
  (*pcVar1)();
}



/* Entry: 1049182ac; end: 1049182fb; -[_TtC8FBAEMKit28AEMAdvertiserSingleEntryRule .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049182ac(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d6b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d6b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309d6c8));
  return;
}



/* Entry: 1049182fc; end: 104918393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049182fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_50;
  uStack_40 = *(undefined8 *)(*unaff_x20 + _DAT_11309d6b0);
  uStack_38 = ((undefined8 *)(*unaff_x20 + _DAT_11309d6b0))[1];
  uStack_50 = 0x2e;
  uStack_48 = 0xe100000000000000;
  uVar1 = param_1;
  func_0x000100e8b654();
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (&uStack_50,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar1,uVar1);
  FUN_104916660(param_1,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  return (uint)param_1 & 1;
}



/* Entry: 104918394; end: 1049185ef;  */

uint FUN_104918394(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
    if (param_2 >> 0x3e != 0) goto LAB_1049185ac;
LAB_1049183d4:
    if (uVar8 != *(ulong *)((param_2 & 0xfffffffffffff8) + 0x10)) goto LAB_1049185c4;
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar8 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (param_2 >> 0x3e == 0) goto LAB_1049183d4;
LAB_1049185ac:
    uVar4 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar8 != uVar4) {
LAB_1049185c4:
      uVar9 = 0;
      goto LAB_1049185c8;
    }
  }
  if (uVar8 != 0) {
    uVar5 = param_1 & 0xffffffffffffff8;
    uVar4 = uVar5;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    uVar10 = uVar5 + 0x20;
    if (param_1 >> 0x3e != 0) {
      uVar10 = uVar4;
    }
    uVar6 = param_2 & 0xffffffffffffff8;
    uVar4 = uVar6;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar4 = param_2;
    }
    uVar2 = uVar6 + 0x20;
    if (param_2 >> 0x3e != 0) {
      uVar2 = uVar4;
    }
    if (uVar10 != uVar2) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1049185f0);
        (*pcVar1)();
      }
      func_0x00010491d944(0);
      if (((param_2 | param_1) & 0xc000000000000001) == 0) {
        lVar13 = *(long *)(uVar5 + 0x10);
        lVar14 = *(long *)(uVar6 + 0x10);
        puVar11 = (ulong *)(param_1 + 0x20);
        puVar12 = (undefined8 *)(param_2 + 0x20);
        do {
          uVar8 = uVar8 - 1;
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104918584);
            (*pcVar1)();
          }
          if (lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104918588);
            (*pcVar1)();
          }
          uVar5 = *puVar11;
          uVar7 = *puVar12;
          _objc_retain();
          _objc_retain(uVar7);
          uVar4 = uVar5;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
          uVar9 = (uint)uVar4;
          _objc_release(uVar5);
          _objc_release(uVar7);
          if ((uVar4 & 1) == 0) break;
          lVar14 = lVar14 + -1;
          lVar13 = lVar13 + -1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar8 != 0);
      }
      else {
        lVar13 = 4;
        do {
          uVar10 = lVar13 - 4;
          uVar4 = lVar13 - 3;
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104918580);
            (*pcVar1)();
          }
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar5 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10491858c);
              (*pcVar1)();
            }
            uVar2 = *(ulong *)(param_1 + lVar13 * 8);
            _objc_retain();
            if ((param_2 & 0xc000000000000001) != 0) goto LAB_10491847c;
LAB_1049184ac:
            if (*(ulong *)(uVar6 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104918590);
              (*pcVar1)();
            }
            uVar10 = *(ulong *)(param_2 + lVar13 * 8);
            _objc_retain(uVar10);
          }
          else {
            uVar2 = uVar10;
            func_0x00010491aa6c(uVar10,param_1);
            if ((param_2 & 0xc000000000000001) == 0) goto LAB_1049184ac;
LAB_10491847c:
            func_0x00010491aa6c(uVar10,param_2);
          }
          uVar3 = uVar2;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,uVar10);
          uVar9 = (uint)uVar3;
          _objc_release(uVar2);
          _objc_release(uVar10);
        } while (((uVar3 & 1) != 0) && (lVar13 = lVar13 + 1, uVar4 != uVar8));
      }
      goto LAB_1049185c8;
    }
  }
  uVar9 = 1;
LAB_1049185c8:
  return uVar9 & 1;
}



/* Entry: 1049185f0; end: 10491865b;  */

void FUN_1049185f0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10491865c; end: 10491866f;  */

void FUN_10491865c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104918664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x78))();
  return;
}



/* Entry: 104918670; end: 104918673;  */

void FUN_104918670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104918674; end: 10491867b;  */

ulong FUN_104918674(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar2) {
    uVar2 = 8;
  }
  return uVar2;
}



/* Entry: 10491867c; end: 1049187c7;  */

undefined8 FUN_10491867c(void)

{
  return 8;
}



/* Entry: 1049187c8; end: 10491884b;  */

uint FUN_1049187c8(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  func_0x000104918690();
  pbVar3 = param_2;
  func_0x000104918690();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 10491884c; end: 10491899b;  */

void FUN_10491884c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x000104918690(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10491899c; end: 1049189a3;  */

undefined1  [16] FUN_10491899c(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  bVar2 = *unaff_x20;
  if (3 < bVar2) {
    uVar5 = 0xeb0000000064695f;
    uVar3 = 0x7373656e69737562;
    if (bVar2 != 6) {
      uVar5 = 0xea0000000000656c;
      uVar3 = 0x75725f6d61726170;
    }
    uVar1 = 0xeb0000000065646f;
    uVar4 = 0x6d5f6769666e6f63;
    if (bVar2 != 4) {
      uVar1 = 0xed000064695f7265;
      uVar4 = 0x7369747265766461;
    }
    if (bVar2 < 6) {
      uVar5 = uVar1;
      uVar3 = uVar4;
    }
    auVar7._8_8_ = uVar5;
    auVar7._0_8_ = uVar3;
    return auVar7;
  }
  uVar5 = 0x800000010f21c290;
  uVar3 = 0xd000000000000016;
  if (bVar2 != 2) {
    uVar5 = 0xea00000000006d6f;
    uVar3 = 0x72665f64696c6176;
  }
  uVar1 = 0x800000010f21c270;
  uVar4 = 0xd000000000000010;
  if (bVar2 != 0) {
    uVar1 = 0xeb00000000656d69;
    uVar4 = 0x745f66666f747563;
  }
  if (bVar2 < 2) {
    uVar5 = uVar1;
    uVar3 = uVar4;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 1049189a4; end: 1049189c7;  */

void FUN_1049189a4(undefined1 *param_1,undefined1 param_2)

{
  FUN_10491b7c4();
  *param_1 = param_2;
  return;
}



/* Entry: 1049189c8; end: 1049189df;  */

undefined1  [16] FUN_1049189c8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1049189e0; end: 104918a2f;  */

void FUN_1049189e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010491c0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104918a30; end: 104918c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104918a30(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309d708;
  _swift_beginAccess(unaff_x20 + _DAT_11309d708,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 104918c2c; end: 104918c43;  */

void FUN_104918c2c(void)

{
  uRam0000000113815728 = 0;
  uRam0000000113815710 = 0;
  uRam0000000113815708 = 0;
  uRam0000000113815720 = 0;
  uRam0000000113815718 = 0;
  return;
}



/* Entry: 104918c44; end: 104918cff;  */

undefined8 FUN_104918c44(void)

{
  if (lRam000000011309d020 != -1) {
    _swift_once(0x11309d020,FUN_104918c2c);
  }
  return 0x113815708;
}



/* Entry: 104918d00; end: 104918dff;  */

void FUN_104918d00(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d020 != -1) {
    _swift_once(0x11309d020,FUN_104918c2c);
  }
  _swift_beginAccess(0x113815708,auStack_38,0,0);
  FUN_10491b838(0x113815708,param_1,0x11309d750);
  return;
}



/* Entry: 104918e00; end: 104918e8b;  */

void FUN_104918e00(undefined8 param_1)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [40];
  
  if (lRam000000011309d020 != -1) {
    _swift_once(0x11309d020,FUN_104918c2c);
  }
  func_0x00010491b87c(param_1,auStack_48);
  _swift_beginAccess(0x113815708,auStack_60,0x21,0);
  func_0x00010491b8c0(auStack_48,0x113815708);
  _swift_endAccess(auStack_60);
  return;
}



/* Entry: 104918e8c; end: 104918ebb;  */

void FUN_104918e8c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104918ebc(param_1);
  return;
}



/* Entry: 104918ebc; end: 1049197fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104918ebc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long unaff_x20;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uStack_178;
  undefined8 uStack_160;
  long lStack_150;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e0;
  undefined1 auStack_d8 [24];
  ulong auStack_c0 [3];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d728);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11309d730);
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  if (param_1 == 0) goto LAB_1049191bc;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    uVar19 = 0;
    lVar8 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    lVar11 = param_1;
    if ((uVar19 & 1) == 0) goto LAB_1049191b0;
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar8 * 0x20,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
    puVar17 = PTR___sypN_11034f1a8;
    puVar9 = &uStack_130;
    _swift_dynamicCast(puVar9,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar11 = lStack_128;
    uVar18 = uStack_130;
    if (((ulong)puVar9 & 1) == 0) goto LAB_1049191b4;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar23 = 0xeb0000000065646f;
      _swift_bridgeObjectRetain(param_1);
      lVar8 = 0x745f66666f747563;
      uVar19 = 0xeb00000000656d69;
      func_0x000100029284(0x745f66666f747563);
      if ((uVar19 & 1) == 0) {
LAB_1049191a4:
        _swift_bridgeObjectRelease(lVar11);
        lVar11 = param_1;
      }
      else {
        func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar8 * 0x20,&uStack_90);
        _swift_bridgeObjectRelease(param_1);
        puVar9 = &uStack_130;
        _swift_dynamicCast(puVar9,&uStack_90,puVar17 + 8,PTR___sSiN_11034deb0,6);
        uVar14 = uStack_130;
        if ((((ulong)puVar9 & 1) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
          _swift_bridgeObjectRetain(param_1);
          lVar8 = 0x72665f64696c6176;
          uVar19 = 0xea00000000006d6f;
          func_0x000100029284(0x72665f64696c6176);
          if ((uVar19 & 1) == 0) goto LAB_1049191a4;
          func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar8 * 0x20,&uStack_90);
          _swift_bridgeObjectRelease(param_1);
          puVar9 = &uStack_130;
          _swift_dynamicCast(puVar9,&uStack_90,puVar17 + 8,PTR___sSiN_11034deb0,6);
          uVar3 = uStack_130;
          if ((((ulong)puVar9 & 1) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_1049191b0;
          _swift_bridgeObjectRetain(param_1);
          lVar8 = 0x6d5f6769666e6f63;
          func_0x000100029284(0x6d5f6769666e6f63);
          if ((uVar23 & 1) == 0) goto LAB_1049191a4;
          func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar8 * 0x20,&uStack_90);
          _swift_bridgeObjectRelease(param_1);
          puVar9 = &uStack_130;
          _swift_dynamicCast(puVar9,&uStack_90,puVar17 + 8,PTR___sSSN_11034da80,6);
          lVar8 = lStack_128;
          uVar4 = uStack_130;
          if (((ulong)puVar9 & 1) == 0) goto LAB_1049191b0;
          if (*(long *)(param_1 + 0x10) == 0) {
LAB_104919214:
            uStack_178 = 0;
            lStack_150 = 0;
          }
          else {
            _swift_bridgeObjectRetain(param_1);
            lVar10 = 0x7369747265766461;
            uVar19 = 0xed000064695f7265;
            func_0x000100029284(0x7369747265766461);
            if ((uVar19 & 1) == 0) {
              _swift_bridgeObjectRelease(param_1);
              goto LAB_104919214;
            }
            func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar10 * 0x20,&uStack_90);
            _swift_bridgeObjectRelease(param_1);
            puVar9 = &uStack_130;
            _swift_dynamicCast(puVar9,&uStack_90,puVar17 + 8,PTR___sSSN_11034da80,6);
            uStack_178 = uStack_130;
            lStack_150 = lStack_128;
            if ((int)puVar9 == 0) {
              uStack_178 = 0;
              lStack_150 = 0;
            }
          }
          if (*(long *)(param_1 + 0x10) == 0) {
LAB_1049192a4:
            uStack_160 = 0;
            lVar10 = 0;
          }
          else {
            _swift_bridgeObjectRetain(param_1);
            lVar10 = 0x75725f6d61726170;
            uVar19 = 0;
            func_0x000100029284(0x75725f6d61726170);
            if ((uVar19 & 1) == 0) {
              _swift_bridgeObjectRelease(param_1);
              goto LAB_1049192a4;
            }
            func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar10 * 0x20,&uStack_90);
            _swift_bridgeObjectRelease(param_1);
            puVar9 = &uStack_130;
            _swift_dynamicCast(puVar9,&uStack_90,puVar17 + 8,PTR___sSSN_11034da80,6);
            lVar10 = lStack_128;
            uStack_160 = uStack_130;
            if ((int)puVar9 == 0) {
              uStack_160 = 0;
              lVar10 = 0;
            }
          }
          if (lRam000000011309d020 != -1) {
            _swift_once(0x11309d020,FUN_104918c2c);
          }
          _swift_beginAccess(0x113815708,auStack_a8,0,0);
          if (lRam0000000113815720 == 0) {
            _swift_bridgeObjectRelease(lVar10);
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            func_0x00010491b87c(0x113815708,&uStack_130);
            lVar5 = lStack_118;
            func_0x0001000a8868(&uStack_130);
            (**(code **)(lStack_110 + 8))(&uStack_90,uStack_160,lVar10,lVar5,lStack_110);
            _swift_bridgeObjectRelease(lVar10);
            func_0x0001000834e4(&uStack_130);
          }
          if (*(long *)(param_1 + 0x10) == 0) {
LAB_1049193a0:
            lStack_128 = 0;
            uStack_130 = 0;
            lStack_118 = 0;
            uStack_120 = 0;
          }
          else {
            _swift_bridgeObjectRetain(param_1);
            lVar10 = -0x2fffffffffffffea;
            uVar19 = 0;
            func_0x000100029284(0xd000000000000016);
            if ((uVar19 & 1) == 0) {
              _swift_bridgeObjectRelease(param_1);
              goto LAB_1049193a0;
            }
            func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar10 * 0x20,&uStack_130);
            _swift_bridgeObjectRelease(param_1);
          }
          _swift_bridgeObjectRelease(param_1);
          if (lStack_118 == 0) {
            func_0x00010491b908(&uStack_130,0x11309c428);
            uVar19 = 0;
          }
          else {
            uVar12 = 0x11309d5b0;
            func_0x0001048db364(0x11309d5b0);
            puVar13 = auStack_c0;
            _swift_dynamicCast(puVar13,&uStack_130,puVar17 + 8,uVar12,6);
            uVar19 = auStack_c0[0];
            if ((int)puVar13 == 0) {
              uVar19 = 0;
            }
          }
          uVar23 = uVar19;
          FUN_10491b944();
          _swift_bridgeObjectRelease(uVar19);
          if (uVar23 != 0) {
            if (uVar23 >> 0x3e == 0) {
              uVar19 = *(ulong *)((uVar23 & 0xfffffffffffff8) + 0x10);
              lVar10 = _DAT_11309d710;
            }
            else {
              uVar19 = uVar23 & 0xffffffffffffff8;
              if ((uVar23 & 0x8000000000000000) != 0) {
                uVar19 = uVar23;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
              lVar10 = _DAT_11309d710;
            }
            _DAT_11309d710 = lVar10;
            if ((uVar19 != 0) && ((lStack_150 == 0 || (lStack_78 != 0)))) {
              *(undefined8 *)(unaff_x20 + lVar10) = uVar3;
              *(undefined8 *)(unaff_x20 + _DAT_11309d708) = uVar14;
              _swift_beginAccess(unaff_x20 + lVar10,&uStack_130,1,0);
              *(undefined8 *)(unaff_x20 + lVar10) = uVar3;
              _swift_beginAccess(puVar1,auStack_c0,1,0);
              uVar14 = puVar1[1];
              *puVar1 = uStack_178;
              puVar1[1] = lStack_150;
              _swift_bridgeObjectRelease(uVar14);
              _swift_beginAccess(puVar2,auStack_d8,0x21,0);
              func_0x00010491c07c(&uStack_90,puVar2,0x11309d5a8);
              _swift_endAccess(auStack_d8);
              puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d718);
              *puVar1 = uVar18;
              puVar1[1] = lVar11;
              puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d720);
              *puVar1 = uVar4;
              puVar1[1] = lVar8;
              lVar11 = _DAT_11309d738;
              *(ulong *)(unaff_x20 + _DAT_11309d738) = uVar23;
              puStack_e0 = PTR___swiftEmptySetSingleton_11034f1d8;
              if (uVar23 >> 0x3e == 0) {
                uVar19 = *(ulong *)((uVar23 & 0xfffffffffffff8) + 0x10);
              }
              else {
                uVar19 = uVar23 & 0xffffffffffffff8;
                if ((uVar23 & 0x8000000000000000) != 0) {
                  uVar19 = uVar23;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg();
              }
              if (uVar19 == 0) {
                puVar17 = PTR___swiftEmptySetSingleton_11034f1d8;
                _swift_retain();
              }
              else {
                _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
                _swift_bridgeObjectRetain(uVar23);
                uVar21 = 0;
                do {
                  while( true ) {
                    if ((uVar23 & 0xc000000000000001) == 0) {
                      if (*(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x1049197cc);
                        (*pcVar6)();
                      }
                      uVar15 = *(ulong *)(uVar23 + 0x20 + uVar21 * 8);
                      _objc_retain();
                    }
                    else {
                      uVar15 = uVar21;
                      FUN_10491ac4c(uVar21,uVar23,FUN_104936728,0x656c75524d4541,0xe700000000000000)
                      ;
                    }
                    bVar7 = SCARRY8(uVar21,1);
                    uVar21 = uVar21 + 1;
                    if (bVar7) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049197c4);
                      (*pcVar6)();
                    }
                    uVar24 = *(ulong *)(uVar15 + _DAT_11309da68);
                    if (uVar24 >> 0x3e == 0) break;
                    uVar20 = uVar24 & 0xffffffffffffff8;
                    if ((long)uVar24 < 0) {
                      uVar20 = uVar24;
                    }
                    __ss18_CocoaArrayWrapperV8endIndexSivg();
                    if (uVar20 == 0) goto LAB_104919724;
LAB_104919644:
                    if ((long)uVar20 < 1) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049197c8);
                      (*pcVar6)();
                    }
                    _swift_bridgeObjectRetain(uVar24);
                    uVar22 = 0;
                    do {
                      if ((uVar24 & 0xc000000000000001) == 0) {
                        uVar16 = *(ulong *)(uVar24 + uVar22 * 8 + 0x20);
                        _objc_retain();
                      }
                      else {
                        uVar16 = uVar22;
                        FUN_10491ac4c(uVar22,uVar24,0x10491d944,0x746e6576454d4541,
                                      0xe800000000000000);
                      }
                      uVar22 = uVar22 + 1;
                      puVar1 = (undefined8 *)(uVar16 + _DAT_11309d7a8);
                      _swift_beginAccess(puVar1,auStack_d8,0,0);
                      uVar18 = *puVar1;
                      uVar14 = puVar1[1];
                      _swift_bridgeObjectRetain(uVar14);
                      func_0x000100403b00(auStack_f8,uVar18,uVar14);
                      _objc_release(uVar16);
                      _swift_bridgeObjectRelease(uStack_f0);
                    } while (uVar20 != uVar22);
                    _objc_release(uVar15);
                    _swift_bridgeObjectRelease(uVar24);
                    if (uVar21 == uVar19) goto LAB_104919730;
                  }
                  uVar20 = *(ulong *)((uVar24 & 0xfffffffffffff8) + 0x10);
                  if (uVar20 != 0) goto LAB_104919644;
LAB_104919724:
                  _objc_release();
                } while (uVar21 != uVar19);
LAB_104919730:
                _swift_bridgeObjectRelease(uVar23);
                puVar17 = puStack_e0;
              }
              *(undefined **)(unaff_x20 + _DAT_11309d740) = puVar17;
              _swift_beginAccess(unaff_x20 + lVar11,auStack_f8,0,0);
              uVar14 = *(undefined8 *)(unaff_x20 + lVar11);
              uVar18 = uVar14;
              _swift_bridgeObjectRetain();
              FUN_10491baa4();
              _swift_bridgeObjectRelease(uVar14);
              *(undefined8 *)(unaff_x20 + _DAT_11309d748) = uVar18;
              func_0x00010491b908(&uStack_90,0x11309d5a8);
              _objc_msgSendSuper2(&stack0xfffffffffffffef8,PTR_s_init_1125d9248);
              return;
            }
            _swift_bridgeObjectRelease(uVar23);
          }
          _swift_bridgeObjectRelease(lVar8);
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lStack_150);
          func_0x00010491b908(&uStack_90,0x11309d5a8);
          goto LAB_1049191bc;
        }
      }
    }
LAB_1049191b0:
    _swift_bridgeObjectRelease(lVar11);
  }
LAB_1049191b4:
  _swift_bridgeObjectRelease(param_1);
LAB_1049191bc:
  _swift_bridgeObjectRelease(puVar1[1]);
  func_0x00010491b908(puVar2,0x11309d5a8);
  _swift_deallocPartialClassInstance();
  return;
}



/* Entry: 1049197fc; end: 1049197ff;  */

undefined * FUN_1049197fc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puStack_58;
  
  puStack_58 = (undefined *)0x0;
  if (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_10491ba6c:
      puStack_58 = (undefined *)0x0;
    }
    else {
      plVar9 = (long *)(param_1 + 0x20);
      uVar2 = 0;
      FUN_104936728(0);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      do {
        lVar7 = *plVar9;
        _objc_allocWithZone(uVar2);
        _swift_bridgeObjectRetain();
        FUN_104935bfc();
        if (lVar7 == 0) {
          _swift_bridgeObjectRelease(puVar5);
          goto LAB_10491ba6c;
        }
        _objc_retain();
        puVar4 = puVar5;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xfffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((long)puVar5 < 0) {
              puVar3 = puVar5;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar3);
          }
          puVar4 = (undefined *)0x0;
          func_0x000104915028(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x000104915028(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar7;
        _objc_release(lVar7);
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      puStack_58 = puVar5;
      FUN_104919a5c(&puStack_58);
    }
  }
  return puStack_58;
}



/* Entry: 104919800; end: 104919a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104919800(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar7 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 == 0) {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  else {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104919a14);
            (*pcVar4)();
          }
          uVar5 = *(ulong *)(param_1 + 0x20 + uVar8 * 8);
          _objc_retain();
        }
        else {
          uVar5 = uVar8;
          FUN_10491ac4c(uVar8,param_1,FUN_104936728,0x656c75524d4541,0xe700000000000000);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104919a0c);
          (*pcVar4)();
        }
        uVar8 = uVar8 + 1;
        uVar10 = *(ulong *)(uVar5 + _DAT_11309da68);
        if (uVar10 >> 0x3e != 0) break;
        uVar11 = *(ulong *)((uVar10 & 0xfffffffffffff8) + 0x10);
        if (uVar11 != 0) goto LAB_104919918;
LAB_1049199f4:
        _objc_release();
        if (uVar8 == uVar7) {
          return;
        }
      }
      uVar11 = uVar10 & 0xffffffffffffff8;
      if ((long)uVar10 < 0) {
        uVar11 = uVar10;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (uVar11 == 0) goto LAB_1049199f4;
LAB_104919918:
      if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104919a10);
        (*pcVar4)();
      }
      _swift_bridgeObjectRetain(uVar10);
      uVar9 = 0;
      do {
        if ((uVar10 & 0xc000000000000001) == 0) {
          uVar6 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar6 = uVar9;
          FUN_10491ac4c(uVar9,uVar10,0x10491d944,0x746e6576454d4541,0xe800000000000000);
        }
        uVar9 = uVar9 + 1;
        puVar1 = (undefined8 *)(uVar6 + _DAT_11309d7a8);
        _swift_beginAccess(puVar1,auStack_90,0,0);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        _swift_bridgeObjectRetain(uVar3);
        func_0x000100403b00(auStack_78,uVar2,uVar3);
        _objc_release(uVar6);
        _swift_bridgeObjectRelease(uStack_70);
      } while (uVar11 != uVar9);
      _objc_release(uVar5);
      _swift_bridgeObjectRelease(uVar10);
    } while (uVar8 != uVar7);
  }
  return;
}



/* Entry: 104919a58; end: 104919a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104919a58(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 == 0) {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  else {
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
    uVar13 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd94);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(param_1 + 0x20 + uVar13 * 8);
          _objc_retain();
        }
        else {
          uVar5 = uVar13;
          FUN_10491ac4c(uVar13,param_1,FUN_104936728,0x656c75524d4541,0xe700000000000000);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd90);
          (*pcVar3)();
        }
        uVar13 = uVar13 + 1;
        uVar14 = *(ulong *)(uVar5 + _DAT_11309da68);
        if (uVar14 >> 0x3e != 0) break;
        uVar17 = *(ulong *)((uVar14 & 0xfffffffffffff8) + 0x10);
        if (uVar17 != 0) goto LAB_10491bbc0;
LAB_10491bd6c:
        _objc_release();
        if (uVar13 == uVar11) {
          return;
        }
      }
      uVar17 = uVar14 & 0xffffffffffffff8;
      if ((long)uVar14 < 0) {
        uVar17 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (uVar17 == 0) goto LAB_10491bd6c;
LAB_10491bbc0:
      _swift_bridgeObjectRetain(uVar14);
      uVar15 = 0;
      do {
        if ((uVar14 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd8c);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar14 + 0x20 + uVar15 * 8);
          _objc_retain();
        }
        else {
          uVar6 = uVar15;
          FUN_10491ac4c(uVar15,uVar14,0x10491d944,0x746e6576454d4541,0xe800000000000000);
        }
        lVar10 = _DAT_11309d7b0;
        bVar4 = SCARRY8(uVar15,1);
        uVar15 = uVar15 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd88);
          (*pcVar3)();
        }
        _swift_beginAccess(uVar6 + _DAT_11309d7b0,auStack_80,0,0);
        lVar10 = *(long *)(uVar6 + lVar10);
        if (lVar10 != 0) {
          uVar9 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
          uVar16 = 0xffffffffffffffff;
          if ((long)uVar9 < 0x40) {
            uVar16 = ~(-1L << (uVar9 & 0x3f));
          }
          uVar16 = uVar16 & *(ulong *)(lVar10 + 0x40);
          _swift_bridgeObjectRetain(lVar10);
          lVar12 = 0;
          while( true ) {
            for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
              uVar2 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
              uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
              uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
              puVar1 = (undefined8 *)
                       (*(long *)(lVar10 + 0x30) +
                       (lVar12 << 10 | LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) << 4));
              uVar7 = *puVar1;
              uVar8 = puVar1[1];
              __sSS10uppercasedSSyF(uVar7,uVar8);
              func_0x000100403b00(auStack_90,uVar7,uVar8);
              _swift_bridgeObjectRelease(uStack_88);
            }
            bVar4 = SCARRY8(lVar12,1);
            lVar12 = lVar12 + 1;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10491bd84);
              (*pcVar3)();
            }
            if ((long)(uVar9 + 0x3f >> 6) <= lVar12) break;
            uVar16 = ((ulong *)(lVar10 + 0x40))[lVar12];
          }
          _swift_release(lVar10);
        }
        _objc_release(uVar6);
      } while (uVar15 != uVar17);
      _objc_release(uVar5);
      _swift_bridgeObjectRelease(uVar14);
    } while (uVar13 != uVar11);
  }
  return;
}



/* Entry: 104919a5c; end: 104919acf;  */

void FUN_104919a5c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)uVar1 == 0) || ((long)uVar2 < 0)) || ((uVar2 >> 0x3e & 1) != 0)) {
    FUN_10492fdb8();
  }
  uStack_38 = *(undefined8 *)((uVar2 & 0xffffffffffffff8) + 0x10);
  lStack_40 = (uVar2 & 0xffffffffffffff8) + 0x20;
  FUN_10491adf0(&lStack_40);
  *param_1 = uVar2;
  return;
}



/* Entry: 104919ad0; end: 104919b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104919ad0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_11309d710;
  _swift_beginAccess(unaff_x20 + _DAT_11309d710,auStack_58,0,0);
  if (*(long *)(unaff_x20 + lVar3) == param_1) {
    plVar1 = (long *)(unaff_x20 + _DAT_11309d728);
    _swift_beginAccess(plVar1,auStack_70,0,0);
    lVar3 = plVar1[1];
    uVar2 = (uint)(param_3 == 0 && lVar3 == 0);
    if ((param_3 != 0) && (lVar3 != 0)) {
      if (*plVar1 == param_2 && lVar3 == param_3) {
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_2,param_3,*plVar1,lVar3,0);
        uVar2 = (uint)param_2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}



/* Entry: 104919ba0; end: 104919c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104919ba0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_11309d728);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar3 = plVar1[1];
  uVar2 = (uint)(param_2 == 0 && lVar3 == 0);
  if ((param_2 != 0) && (lVar3 != 0)) {
    if (*plVar1 == param_1 && lVar3 == param_2) {
      uVar2 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,*plVar1,lVar3,0);
      uVar2 = (uint)param_1;
    }
  }
  return uVar2 & 1;
}



/* Entry: 104919c34; end: 10491a06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104919c34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  long lStack_100;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d718);
  _swift_beginAccess(puVar1,auStack_78,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f21c270);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = _DAT_11309d708;
  _swift_beginAccess(unaff_x20 + _DAT_11309d708,auStack_90,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
  uVar3 = 0x745f66666f747563;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x745f66666f747563,0xeb00000000656d69);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar2,uVar3);
  _objc_release(uVar3);
  lVar4 = _DAT_11309d710;
  _swift_beginAccess(unaff_x20 + _DAT_11309d710,auStack_a8,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
  uVar3 = 0x72665f64696c6176;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x72665f64696c6176,0xea00000000006d6f);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar2,uVar3);
  _objc_release(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d720);
  _swift_beginAccess(puVar1,auStack_c0,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = 0x6d5f6769666e6f63;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d5f6769666e6f63,0xeb0000000065646f);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309d728);
  _swift_beginAccess(puVar1,auStack_d8,0,0);
  lVar4 = puVar1[1];
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar4);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar4);
    _swift_bridgeObjectRelease(lVar4);
  }
  uVar2 = 0x7373656e69737562;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7373656e69737562,0xeb0000000064695f);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar3,uVar2);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar2);
  lVar4 = _DAT_11309d730;
  _swift_beginAccess(unaff_x20 + _DAT_11309d730,auStack_f0,0,0);
  FUN_10491b838(unaff_x20 + lVar4,auStack_118,0x11309d5a8);
  if (lStack_100 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = auStack_118;
    func_0x0001000a8868(puVar5,lStack_100);
    lVar4 = *(long *)(lStack_100 + -8);
    puVar6 = auStack_120 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar6,puVar5,lStack_100);
    puVar5 = puVar6;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar6,lStack_100);
    (**(code **)(lVar4 + 8))(puVar6,lStack_100);
    func_0x0001000834e4(auStack_118);
  }
  uVar3 = 0x75725f6d61726170;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x75725f6d61726170,0xea0000000000656c);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,puVar5,uVar3);
  _swift_unknownObjectRelease(puVar5);
  _objc_release(uVar3);
  lVar4 = _DAT_11309d738;
  _swift_beginAccess(unaff_x20 + _DAT_11309d738,auStack_118,0,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
  FUN_104936728(0);
  uVar2 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f21c290);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 10491a070; end: 10491a0bf; -[_TtC8FBAEMKit16AEMConfiguration encodeWithCoder:] */

void FUN_10491a070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104919c34(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10491a0c0; end: 10491a0ef;  */

void FUN_10491a0c0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10491a0f0(param_1);
  return;
}



/* Entry: 10491a0f0; end: 10491a8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10491a0f0(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lStack_170;
  long lStack_168;
  long lStack_148;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined *puStack_100;
  undefined1 auStack_f8 [24];
  ulong auStack_e0 [3];
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  lVar5 = 0;
  FUN_10491bdd8(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar17 = -0x2ffffffffffffff0;
  lVar19 = lVar5;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
  if (lVar19 == 0) {
    lStack_148 = 0;
    lVar17 = -0x2000000000000000;
  }
  else {
    lStack_148 = lVar19;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar19);
  }
  uVar6 = 0x745f66666f747563;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x745f66666f747563,0xeb00000000656d69);
  uVar7 = param_1;
  _objc_msgSend(param_1,PTR_s_decodeIntegerForKey__1125b7578,uVar6);
  _objc_release(uVar6);
  uVar8 = 0x72665f64696c6176;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x72665f64696c6176,0xea00000000006d6f);
  uVar6 = param_1;
  _objc_msgSend(param_1,PTR_s_decodeIntegerForKey__1125b7578,uVar8);
  _objc_release(uVar8);
  lVar18 = 0x6d5f6769666e6f63;
  lVar19 = lVar5;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (lVar5,0x6d5f6769666e6f63,0xeb0000000065646f,lVar5);
  if (lVar19 == 0) {
    lStack_168 = 0;
    lVar18 = -0x2000000000000000;
  }
  else {
    lStack_168 = lVar19;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar19);
  }
  lVar19 = 0x7373656e69737562;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF
            (lVar5,0x7373656e69737562,0xeb0000000064695f,lVar5);
  if (lVar5 == 0) {
    lStack_170 = 0;
    lVar19 = 0;
  }
  else {
    lStack_170 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
  }
  lVar5 = 0x11309d6d8;
  func_0x0001048db364();
  lVar9 = lVar5;
  _swift_allocObject();
  *(undefined8 *)(lVar9 + 0x18) = 6;
  *(undefined8 *)(lVar9 + 0x10) = 3;
  uVar8 = 0;
  FUN_10491bdd8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  *(undefined8 *)(lVar9 + 0x20) = uVar8;
  uVar10 = 0;
  func_0x0001049143a0();
  *(undefined8 *)(lVar9 + 0x28) = uVar10;
  uVar10 = 0;
  func_0x000104918630();
  *(undefined8 *)(lVar9 + 0x30) = uVar10;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
            (auStack_c8,lVar9,0x75725f6d61726170,0xea0000000000656c);
  _swift_bridgeObjectRelease(lVar9);
  puVar15 = PTR___sypN_11034f1a8;
  if (lStack_b0 == 0) {
    func_0x00010491b908(auStack_c8,0x11309c428);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
  }
  else {
    uVar10 = 0x11309d510;
    func_0x0001048db364(0x11309d510);
    puVar11 = &uStack_a0;
    _swift_dynamicCast(puVar11,auStack_c8,puVar15 + 8,uVar10,6);
    if (((ulong)puVar11 & 1) == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
  }
  _swift_allocObject(lVar5,0x38,7);
  *(undefined8 *)(lVar5 + 0x18) = 6;
  *(undefined8 *)(lVar5 + 0x10) = 3;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  uVar8 = 0;
  FUN_104936728();
  *(undefined8 *)(lVar5 + 0x28) = uVar8;
  uVar8 = 0;
  func_0x00010491d944();
  *(undefined8 *)(lVar5 + 0x30) = uVar8;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
            (auStack_c8,lVar5,0xd000000000000016,0x800000010f21c290);
  _swift_bridgeObjectRelease(lVar5);
  if (lStack_b0 == 0) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar18);
    _swift_bridgeObjectRelease(lVar17);
    _swift_bridgeObjectRelease(lVar19);
    func_0x00010491b908(auStack_c8,0x11309c428);
  }
  else {
    uVar8 = 0x11309d758;
    func_0x0001048db364(0x11309d758);
    puVar12 = auStack_e0;
    _swift_dynamicCast(puVar12,auStack_c8,puVar15 + 8,uVar8,6);
    if (((ulong)puVar12 & 1) != 0) {
      FUN_10491b838(&uStack_a0,auStack_c8,0x11309d5a8);
      _objc_allocWithZone();
      plVar1 = (long *)(lVar4 + _DAT_11309d728);
      *plVar1 = 0;
      plVar1[1] = 0;
      puVar11 = (undefined8 *)(lVar4 + _DAT_11309d730);
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      plVar2 = (long *)(lVar4 + _DAT_11309d718);
      *plVar2 = lStack_148;
      plVar2[1] = lVar17;
      *(undefined8 *)(lVar4 + _DAT_11309d708) = uVar7;
      *(undefined8 *)(lVar4 + _DAT_11309d710) = uVar6;
      plVar2 = (long *)(lVar4 + _DAT_11309d720);
      *plVar2 = lStack_168;
      plVar2[1] = lVar18;
      _swift_beginAccess(plVar1,auStack_e0,1,0);
      *plVar1 = lStack_170;
      plVar1[1] = lVar19;
      _swift_beginAccess(puVar11,auStack_f8,0x21,0);
      func_0x00010491c07c(auStack_c8,puVar11,0x11309d5a8);
      _swift_endAccess(auStack_f8);
      lVar19 = _DAT_11309d738;
      *(ulong *)(lVar4 + _DAT_11309d738) = auStack_e0[0];
      puStack_100 = PTR___swiftEmptySetSingleton_11034f1d8;
      if (auStack_e0[0] >> 0x3e == 0) {
        uVar21 = *(ulong *)((auStack_e0[0] & 0xfffffffffffff8) + 0x10);
        puVar15 = PTR___swiftEmptySetSingleton_11034f1d8;
      }
      else {
        uVar21 = auStack_e0[0] & 0xffffffffffffff8;
        if ((long)auStack_e0[0] < 0) {
          uVar21 = auStack_e0[0];
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        puVar15 = PTR___swiftEmptySetSingleton_11034f1d8;
      }
      PTR___swiftEmptySetSingleton_11034f1d8 = puVar15;
      if (uVar21 == 0) {
        _swift_retain();
      }
      else {
        _swift_retain(puVar15);
        _swift_bridgeObjectRetain(auStack_e0[0]);
        uVar23 = 0;
        do {
          while( true ) {
            if ((auStack_e0[0] & 0xc000000000000001) == 0) {
              if (*(ulong *)((auStack_e0[0] & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10491a7d4);
                (*pcVar3)();
              }
              uVar13 = *(ulong *)(auStack_e0[0] + 0x20 + uVar23 * 8);
              _objc_retain();
            }
            else {
              uVar13 = uVar23;
              FUN_10491ac4c(uVar23,auStack_e0[0],FUN_104936728,0x656c75524d4541,0xe700000000000000);
            }
            if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10491a7cc);
              (*pcVar3)();
            }
            uVar23 = uVar23 + 1;
            uVar20 = *(ulong *)(uVar13 + _DAT_11309da68);
            if (uVar20 >> 0x3e == 0) break;
            uVar24 = uVar20 & 0xffffffffffffff8;
            if ((long)uVar20 < 0) {
              uVar24 = uVar20;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
            if (uVar24 == 0) goto LAB_10491a71c;
LAB_10491a644:
            if ((long)uVar24 < 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10491a7d0);
              (*pcVar3)();
            }
            _swift_bridgeObjectRetain(uVar20);
            uVar22 = 0;
            do {
              if ((uVar20 & 0xc000000000000001) == 0) {
                uVar14 = *(ulong *)(uVar20 + uVar22 * 8 + 0x20);
                _objc_retain();
              }
              else {
                uVar14 = uVar22;
                FUN_10491ac4c(uVar22,uVar20,0x10491d944,0x746e6576454d4541,0xe800000000000000);
              }
              uVar22 = uVar22 + 1;
              puVar11 = (undefined8 *)(uVar14 + _DAT_11309d7a8);
              _swift_beginAccess(puVar11,auStack_f8,0,0);
              uVar7 = *puVar11;
              uVar6 = puVar11[1];
              _swift_bridgeObjectRetain(uVar6);
              func_0x000100403b00(auStack_118,uVar7,uVar6);
              _objc_release(uVar14);
              _swift_bridgeObjectRelease(uStack_110);
            } while (uVar24 != uVar22);
            _objc_release(uVar13);
            _swift_bridgeObjectRelease(uVar20);
            if (uVar23 == uVar21) goto LAB_10491a728;
          }
          uVar24 = *(ulong *)((uVar20 & 0xfffffffffffff8) + 0x10);
          if (uVar24 != 0) goto LAB_10491a644;
LAB_10491a71c:
          _objc_release();
        } while (uVar23 != uVar21);
LAB_10491a728:
        _swift_bridgeObjectRelease(auStack_e0[0]);
        puVar15 = puStack_100;
      }
      *(undefined **)(lVar4 + _DAT_11309d740) = puVar15;
      _swift_beginAccess(lVar4 + lVar19,auStack_118,0,0);
      uVar6 = *(undefined8 *)(lVar4 + lVar19);
      uVar7 = uVar6;
      _swift_bridgeObjectRetain();
      FUN_10491baa4();
      _swift_bridgeObjectRelease(uVar6);
      *(undefined8 *)(lVar4 + _DAT_11309d748) = uVar7;
      puVar16 = auStack_128;
      _objc_msgSendSuper2(puVar16,PTR_s_init_1125d9248);
      _objc_release(param_1);
      func_0x00010491b908(auStack_c8,0x11309d5a8);
      lVar4 = unaff_x20;
      _swift_getObjectType(unaff_x20);
      _swift_deallocPartialClassInstance(unaff_x20,lVar4,0x88,7);
      func_0x00010491b908(&uStack_a0,0x11309d5a8);
      return puVar16;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar18);
    _swift_bridgeObjectRelease(lVar17);
    _swift_bridgeObjectRelease(lVar19);
  }
  func_0x00010491b908(&uStack_a0,0x11309d5a8);
  lVar4 = unaff_x20;
  _swift_getObjectType(unaff_x20);
  _swift_deallocPartialClassInstance(unaff_x20,lVar4,0x88,7);
  return (undefined1 *)0x0;
}



/* Entry: 10491a8cc; end: 10491a8f3; -[_TtC8FBAEMKit16AEMConfiguration initWithCoder:] */

void FUN_10491a8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10491a0f0();
  return;
}



/* Entry: 10491a8f4; end: 10491a8fb; +[_TtC8FBAEMKit16AEMConfiguration supportsSecureCoding] */

undefined8 FUN_10491a8f4(void)

{
  return 1;
}



/* Entry: 10491a8fc; end: 10491a903;  */

undefined8 FUN_10491a8fc(void)

{
  return 1;
}



/* Entry: 10491a904; end: 10491a94f;  */

void FUN_10491a904(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10491a950; end: 10491a9af; -[_TtC8FBAEMKit16AEMConfiguration init] */

void FUN_10491a950(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBAEMKit.AEMConfiguration",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10491a97c);
  (*pcVar1)();
}



/* Entry: 10491a9b0; end: 10491aa4b; -[_TtC8FBAEMKit16AEMConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10491a9b0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d718 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d720 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d728 + 8));
  func_0x00010491b908(param_1 + _DAT_11309d730,0x11309d5a8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d738));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d740));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309d748));
  return;
}



/* Entry: 10491aa4c; end: 10491aa8b;  */

ulong FUN_10491aa4c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ad34);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ad38);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_104936728(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    FUN_104936728(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x656c75524d4541,0xe700000000000000);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10491adf0);
  (*pcVar2)();
}



/* Entry: 10491aa8c; end: 10491ac1f;  */

ulong FUN_10491aa8c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ab54);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ab58);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010491bee4();
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    func_0x00010491bee4();
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000010,0x800000010dd48730);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar5 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ac20);
  (*pcVar2)();
}



/* Entry: 10491ac20; end: 10491ac4b;  */

ulong FUN_10491ac20(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ad34);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10491ad38);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1049246d8(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    FUN_1049246d8(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x636f766e494d4541,0xed00006e6f697461);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10491adf0);
  (*pcVar2)();
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048c0a10; end: 1048c0aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048c0a10(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11309afd0);
      cVar2 = *(char *)(lStack_58 + _DAT_11309afd0);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048c0ab0; end: 1048c0b2f; -[SCAttributedBatterySubtask isEqual:] */

uint FUN_1048c0ab0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048c0a10(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048c0b30; end: 1048c0b73; -[SCAttributedBatterySubtask matchNonFatalReporter:backgroundExecution:loggerInit:loggerDebugViewInit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c0b30(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309afd0);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048c0b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 1048c0b74; end: 1048c0bbb; -[SCAttributedAppSizeSubtask init] */

void FUN_1048c0b74(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedClientResourcesTaskWrapper.swift",0x3a,2,0xa8,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c0bbc);
  (*pcVar1)();
}



/* Entry: 1048c0bbc; end: 1048c0c3b;  */

uint FUN_1048c0bbc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048c0d48(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048c0c3c; end: 1048c0c3f;  */

void FUN_1048c0c3c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c0c40; end: 1048c0cbb;  */

void FUN_1048c0c40(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048c0cbc; end: 1048c0cc3;  */

undefined8 FUN_1048c0cbc(void)

{
  return 1;
}



/* Entry: 1048c0cc4; end: 1048c0d0b; -[SCAttributedFrameRateSubtask init] */

void FUN_1048c0cc4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedClientResourcesTaskWrapper.swift",0x3a,2,0xfc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c0d0c);
  (*pcVar1)();
}



/* Entry: 1048c0d0c; end: 1048c0d47;  */

void FUN_1048c0d0c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c0d48; end: 1048c0dd3;  */

undefined8 FUN_1048c0d48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    puVar1 = &uStack_58;
    _swift_dynamicCast(puVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)puVar1 & 1) != 0) {
      _objc_release(uStack_58);
      return 1;
    }
  }
  return 0;
}



/* Entry: 1048c0dd4; end: 1048c0e97;  */

void FUN_1048c0dd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c0e98; end: 1048c0eaf;  */

void FUN_1048c0e98(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048c0eb0; end: 1048c0ecf; -[SCAttributedClientResourcesTask description] */

void FUN_1048c0eb0(void)

{
  FUN_1048c1334();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c0ed0; end: 1048c0f17; -[SCAttributedClientResourcesTask init] */

void FUN_1048c0ed0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedClientResourcesTaskWrapper.swift",0x3a,2,0x160,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c0f18);
  (*pcVar1)();
}



/* Entry: 1048c0f18; end: 1048c0f9b; +[SCAttributedClientResourcesTask appSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c0f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309afd8) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309aff0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309afe8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11309afe0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c0f9c; end: 1048c10af; +[SCAttributedClientResourcesTask frameRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c0f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309afd8) = 2;
  *(undefined8 *)(lVar2 + _DAT_11309aff0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309afe8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309afe0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c10b0; end: 1048c1113; -[SCAttributedClientResourcesTask matchBattery:appSize:frameRate:] */

void FUN_1048c10b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001048c1020(0x1048c195c,auStack_40,0x1048c18fc,auStack_60,0x1048c1960,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 1048c1114; end: 1048c1147;  */

void FUN_1048c1114(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c1148; end: 1048c11c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1148(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_60 [8];
  
  uVar4 = param_1;
  FUN_1048c13a8();
  uVar5 = uVar4;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar3 = auStack_60 + 4;
  if (uVar1 != 2) {
    puVar3 = auStack_60 + 6;
  }
  puVar2 = auStack_60;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_60 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  *(char *)(uVar5 + _DAT_11309afd0) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048c11c4; end: 1048c1333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c11c4(undefined8 ***param_1)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **appuStack_80 [2];
  undefined8 **appuStack_70 [2];
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 **appuStack_50 [2];
  undefined8 **ppuStack_40;
  undefined8 **ppuStack_38;
  
  pppuVar4 = appuStack_80;
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 == 4) {
    func_0x0001048c13c8();
    pppuVar3 = param_1;
    _objc_allocWithZone();
    pppuVar4 = &ppuStack_60;
    ppuStack_60 = pppuVar3;
    ppuStack_58 = param_1;
    _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
    pppuVar3 = pppuVar4;
    func_0x0001048c1408();
    pppuVar5 = pppuVar3;
    _objc_allocWithZone();
    *(undefined1 *)((long)pppuVar5 + _DAT_11309afd8) = 1;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309aff0) = 0;
    *(undefined8 ****)((long)pppuVar5 + _DAT_11309afe8) = pppuVar4;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309afe0) = 0;
    pppuVar4 = appuStack_70;
    appuStack_70[0] = pppuVar5;
  }
  else if (uVar1 == 5) {
    func_0x0001048c13e8();
    pppuVar4 = param_1;
    _objc_allocWithZone();
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar4;
    ppuStack_38 = param_1;
    _objc_msgSendSuper2(pppuVar2,PTR_s_init_1125d9248);
    pppuVar3 = pppuVar2;
    func_0x0001048c1408();
    pppuVar5 = pppuVar3;
    _objc_allocWithZone();
    *(undefined1 *)((long)pppuVar5 + _DAT_11309afd8) = 2;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309aff0) = 0;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309afe8) = 0;
    *(undefined8 ****)((long)pppuVar5 + _DAT_11309afe0) = pppuVar2;
    pppuVar4 = appuStack_50;
    appuStack_50[0] = pppuVar5;
  }
  else {
    FUN_1048c1148();
    pppuVar3 = param_1;
    func_0x0001048c1408();
    pppuVar5 = pppuVar3;
    _objc_allocWithZone();
    *(undefined1 *)((long)pppuVar5 + _DAT_11309afd8) = 0;
    *(undefined8 ****)((long)pppuVar5 + _DAT_11309aff0) = param_1;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309afe8) = 0;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309afe0) = 0;
    appuStack_80[0] = pppuVar5;
  }
  pppuVar4[1] = pppuVar3;
  _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048c1334; end: 1048c13a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048c1334(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11309afd8) == '\0') {
    if (*(long *)(param_1 + _DAT_11309aff0) != 0) {
      return *(undefined1 *)(*(long *)(param_1 + _DAT_11309aff0) + _DAT_11309afd0);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c13a4);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_11309afd8) == '\x01') {
    if (*(long *)(param_1 + _DAT_11309afe8) != 0) {
      return 4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c13a0);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + _DAT_11309afe0) != 0) {
    return 5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c13a8);
  (*pcVar1)();
}



/* Entry: 1048c13a8; end: 1048c1427;  */

void FUN_1048c13a8(void)

{
  _objc_opt_self(&PTR_PTR_1129e0890);
  return;
}



/* Entry: 1048c1428; end: 1048c17df;  */

int FUN_1048c1428(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048c14a4;
        goto LAB_1048c1488;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048c1488:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1048c14a4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048c17e0; end: 1048c181f;  */

void FUN_1048c17e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b0a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42ca0;
  _swift_getWitnessTable(&UNK_10dd42ca0,&UNK_1107b2b28);
  puRam000000011309b0a8 = puVar1;
  return;
}



/* Entry: 1048c1820; end: 1048c1823;  */

void FUN_1048c1820(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42d40;
  _swift_getWitnessTable(&UNK_10dd42d40,&UNK_1107b2a98);
  puRam000000011309b0b0 = puVar1;
  return;
}



/* Entry: 1048c1824; end: 1048c1863;  */

void FUN_1048c1824(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42d40;
  _swift_getWitnessTable(&UNK_10dd42d40,&UNK_1107b2a98);
  puRam000000011309b0b0 = puVar1;
  return;
}



/* Entry: 1048c1864; end: 1048c1867;  */

void FUN_1048c1864(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b0b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42de0;
  _swift_getWitnessTable(&UNK_10dd42de0,&UNK_1107b2a08);
  puRam000000011309b0b8 = puVar1;
  return;
}



/* Entry: 1048c1868; end: 1048c18a7;  */

void FUN_1048c1868(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b0b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42de0;
  _swift_getWitnessTable(&UNK_10dd42de0,&UNK_1107b2a08);
  puRam000000011309b0b8 = puVar1;
  return;
}



/* Entry: 1048c18a8; end: 1048c18ab;  */

void FUN_1048c18a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b0c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42e80;
  _swift_getWitnessTable(&UNK_10dd42e80,&UNK_1107b2978);
  puRam000000011309b0c0 = puVar1;
  return;
}



/* Entry: 1048c18ac; end: 1048c18eb;  */

void FUN_1048c18ac(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b0c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42e80;
  _swift_getWitnessTable(&UNK_10dd42e80,&UNK_1107b2978);
  puRam000000011309b0c0 = puVar1;
  return;
}



/* Entry: 1048c18ec; end: 1048c1923;  */

ulong FUN_1048c18ec(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1048c1924; end: 1048c1927; -[SCAttributedFrameRateSubtask matchMonitorInit:] */

void FUN_1048c1924(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100dc0448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048c1928; end: 1048c1963; -[SCAttributedAppSizeSubtask matchDynamicLocale:] */

void FUN_1048c1928(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100dc0448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048c1964; end: 1048c1967; -[SCAttributedBatterySubtask description] */

void FUN_1048c1964(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1968; end: 1048c196b; -[SCAttributedAppSizeSubtask description] */

void FUN_1048c1968(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c196c; end: 1048c1977; -[SCAttributedFrameRateSubtask description] */

void FUN_1048c196c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1978; end: 1048c197b; -[SCAttributedFrameRateSubtask hash] */

void FUN_1048c1978(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c197c; end: 1048c197f; -[SCAttributedAppSizeSubtask hash] */

void FUN_1048c197c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c1980; end: 1048c1983; +[SCAttributedFrameRateSubtask monitorInit] */

void FUN_1048c1980(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1984; end: 1048c198f; +[SCAttributedAppSizeSubtask dynamicLocale] */

void FUN_1048c1984(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1990; end: 1048c1993; -[SCAttributedBatterySubtask copyWithZone:] */

void FUN_1048c1990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c1994; end: 1048c199f; -[SCAttributedAppSizeSubtask copyWithZone:] */

void FUN_1048c1994(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c19a0; end: 1048c19a3; -[SCAttributedFrameRateSubtask isEqual:] */

uint FUN_1048c19a0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048c0d48(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048c19a4; end: 1048c19a7; -[SCAttributedAppSizeSubtask isEqual:] */

uint FUN_1048c19a4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048c0d48(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048c19a8; end: 1048c19b3; -[SCAttributedFrameRateSubtask copyWithZone:] */

void FUN_1048c19a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c19b4; end: 1048c19cb; -[SCAttributedClientResourcesTask copyWithZone:] */

void FUN_1048c19b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c19cc; end: 1048c1a77;  */

void FUN_1048c19cc(void)

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



/* Entry: 1048c1a78; end: 1048c1ab7;  */

void FUN_1048c1a78(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1048c1ab8; end: 1048c1ad3; -[SCAttributedComposerTask description] */

void FUN_1048c1ab8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1ad4; end: 1048c1b1b; -[SCAttributedComposerTask init] */

void FUN_1048c1ad4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedComposerTaskWrapper.swift",0x33,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c1b1c);
  (*pcVar1)();
}



/* Entry: 1048c1b1c; end: 1048c1b1f; -[SCAttributedComposerTask copyWithZone:] */

void FUN_1048c1b1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c1b20; end: 1048c1b27; +[SCAttributedComposerTask htmlToImageRendering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1b20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b0c8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1b28; end: 1048c1b43; -[SCAttributedComposerTask matchWarmup:htmlToImageRendering:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1b28(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11309b0c8) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048c1b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1048c1b44; end: 1048c1b97;  */

void FUN_1048c1b44(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c1b98; end: 1048c1cff;  */

int FUN_1048c1b98(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048c1c14;
        goto LAB_1048c1bf8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048c1bf8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1048c1c14:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048c1d00; end: 1048c1d3f;  */

void FUN_1048c1d00(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42f60;
  _swift_getWitnessTable(&UNK_10dd42f60,&UNK_1107b2c10);
  puRam000000011309b0f8 = puVar1;
  return;
}



/* Entry: 1048c1d40; end: 1048c1d67;  */

void FUN_1048c1d40(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048c2d88();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048c1d68; end: 1048c1daf; -[SCAttributedStoriesSubtask init] */

void FUN_1048c1d68(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedContentTaskWrapper.swift",0x32,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c1db0);
  (*pcVar1)();
}



/* Entry: 1048c1db0; end: 1048c1dbb; -[SCAttributedStoriesSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1db0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b100));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c1dbc; end: 1048c1dc7; -[SCAttributedStoriesSubtask isEqual:] */

uint FUN_1048c1dbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048c206c(&uStack_50,&DAT_11309b100);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048c1dc8; end: 1048c1dd7; +[SCAttributedStoriesSubtask warmupFriendStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1dc8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b100) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1dd8; end: 1048c1de7; +[SCAttributedStoriesSubtask warmupCustomStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1dd8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b100) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1de8; end: 1048c1df7; +[SCAttributedStoriesSubtask myStoryNotificationScheduler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1de8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b100) = 4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1df8; end: 1048c1e07; +[SCAttributedStoriesSubtask spotlightBadging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1df8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b100) = 6;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1e08; end: 1048c1e17; +[SCAttributedStoriesSubtask creatorSubscriptionsWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1e08(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b100) = 8;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c1e18; end: 1048c1ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c1e18(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11309b100);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        (*param_1)();
      }
      else {
        (*param_3)();
      }
    }
    else if (bVar1 == 2) {
      (*param_5)();
    }
    else {
      (*param_7)();
    }
  }
  else {
    if (bVar1 < 6) {
      if (bVar1 == 4) {
        param_12 = param_9;
      }
    }
    else {
      param_12 = param_15;
      if ((bVar1 != 6) && (param_12 = param_21, bVar1 == 7)) {
        param_12 = param_18;
      }
    }
    (*param_12)();
  }
  return;
}



/* Entry: 1048c1ed0; end: 1048c1faf; -[SCAttributedStoriesSubtask matchWarmupFriendStories:warmupCustomStories:legacyWarmup:snapReadReceiptCleanup:myStoryNotificationScheduler:fetchStories:spotlightBadging:storiesBadging:creatorSubscriptionsWarmup:] */

void FUN_1048c1ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1048c1e18(0x1048c2de4,auStack_40,0x1048c2de8,auStack_60,0x1048c2dec,auStack_80,0x1048c2df0,
                auStack_a0,0x1048c2df4,auStack_c0,0x1048c2df8,auStack_e0,0x1048c2dfc,auStack_100,
                0x1048c2e00,auStack_120,0x1048c2e04,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 1048c1fb0; end: 1048c1fcf;  */

void FUN_1048c1fb0(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1048c1fd0; end: 1048c2017; -[SCAttributedStoriesCarouselInFFSubtask init] */

void FUN_1048c1fd0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedContentTaskWrapper.swift",0x32,2,0xfd,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c2018);
  (*pcVar1)();
}



/* Entry: 1048c2018; end: 1048c2023; -[SCAttributedStoriesCarouselInFFSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c2018(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b108));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c2024; end: 1048c206b;  */

void FUN_1048c2024(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048c206c; end: 1048c210b;  */

bool FUN_1048c206c(undefined8 param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + *param_2);
      cVar2 = *(char *)(lStack_58 + *param_2);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048c210c; end: 1048c2117; -[SCAttributedStoriesCarouselInFFSubtask isEqual:] */

uint FUN_1048c210c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048c206c(&uStack_50,&DAT_11309b108);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048c2118; end: 1048c21a7;  */

uint FUN_1048c2118(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048c206c(&uStack_50,param_4);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048c21a8; end: 1048c21b7; +[SCAttributedStoriesCarouselInFFSubtask notification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c21a8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b108) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c21b8; end: 1048c21c7; +[SCAttributedStoriesCarouselInFFSubtask appStartupComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c21b8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b108) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c21c8; end: 1048c21e3; -[SCAttributedStoriesCarouselInFFSubtask matchNotification:appStartupComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c21c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11309b108) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048c21e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1048c21e4; end: 1048c228f;  */

void FUN_1048c21e4(void)

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



/* Entry: 1048c2290; end: 1048c22b3; -[SCAttributedContentTask description] */

void FUN_1048c2290(void)

{
  _objc_retain();
  func_0x0001006e1ef4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c22b4; end: 1048c22fb; -[SCAttributedContentTask init] */

void FUN_1048c22b4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedContentTaskWrapper.swift",0x32,2,0x179,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c22fc);
  (*pcVar1)();
}



/* Entry: 1048c22fc; end: 1048c230b; +[SCAttributedContentTask discoverFeedNotificationPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c22fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b110) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b118) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b120) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c230c; end: 1048c2313; +[SCAttributedContentTask discoverFeedNotificationReceived] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c230c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b110) = 1;
  *(undefined8 *)(lVar1 + _DAT_11309b118) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b120) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c2314; end: 1048c231b; +[SCAttributedContentTask discoverFeedActionHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c2314(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b110) = 2;
  *(undefined8 *)(lVar1 + _DAT_11309b118) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b120) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c231c; end: 1048c237f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c231c(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11309b110) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309b118) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b120) = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048c2380; end: 1048c24ab; +[SCAttributedContentTask storiesCarouselInFF:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c2380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b110) = 5;
  *(undefined8 *)(lVar2 + _DAT_11309b118) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b120) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c24ac; end: 1048c2547; -[SCAttributedContentTask matchDiscoverFeedNotificationPressed:discoverFeedNotificationReceived:discoverFeedActionHandlers:stories:boostCleanup:storiesCarouselInFF:] */

void FUN_1048c24ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001048c23f8(0x1048c2da8,auStack_40,0x1048c2dd8,auStack_60,0x1048c2ddc,auStack_80,
                      0x1048c2db0,auStack_a0,0x1048c2de0,auStack_c0,0x1048c2e2c,auStack_e0);
  _objc_release(param_1);
  return;
}



/* Entry: 1048c2548; end: 1048c254b;  */

void FUN_1048c2548(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c254c; end: 1048c257f;  */

void FUN_1048c254c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048c2580; end: 1048c2637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c2580(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_b0 [18];
  
  uVar5 = param_1;
  FUN_1048c2860();
  uVar6 = uVar5;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar3 = auStack_b0 + 0xe;
  if (uVar1 != 7) {
    puVar3 = auStack_b0 + 0x10;
  }
  puVar4 = auStack_b0 + 0xc;
  if (uVar1 != 6) {
    puVar4 = puVar3;
  }
  puVar3 = auStack_b0 + 8;
  if (uVar1 != 4) {
    puVar3 = auStack_b0 + 10;
  }
  if (uVar1 < 6) {
    puVar4 = puVar3;
  }
  puVar3 = auStack_b0 + 4;
  if (uVar1 != 2) {
    puVar3 = auStack_b0 + 6;
  }
  puVar2 = auStack_b0;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_b0 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  if (uVar1 < 4) {
    puVar4 = puVar3;
  }
  *(char *)(uVar6 + _DAT_11309b100) = (char)param_1;
  *puVar4 = uVar6;
  puVar4[1] = uVar5;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048c2638; end: 1048c285f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c2638(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *apuStack_b0 [2];
  undefined8 *apuStack_a0 [2];
  undefined8 *apuStack_90 [2];
  undefined8 *apuStack_80 [2];
  undefined8 *apuStack_70 [2];
  undefined8 auStack_60 [2];
  undefined8 *apuStack_50 [2];
  undefined8 auStack_40 [2];
  
  ppuVar7 = apuStack_b0;
  uVar3 = (uint)param_1;
  uVar1 = uVar3 >> 6 & 3;
  if (uVar1 == 0) {
    FUN_1048c2580();
    puVar5 = param_1;
    func_0x0001048c28a0();
    puVar6 = puVar5;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar6 + _DAT_11309b110) = 3;
    *(undefined8 **)((long)puVar6 + _DAT_11309b118) = param_1;
    *(undefined8 *)((long)puVar6 + _DAT_11309b120) = 0;
    ppuVar7 = apuStack_80;
    apuStack_80[0] = puVar6;
  }
  else if (uVar1 == 1) {
    func_0x0001048c2880();
    puVar5 = param_1;
    _objc_allocWithZone();
    bVar2 = (uVar3 & 0x3f) == 1;
    puVar6 = auStack_40;
    if (!bVar2) {
      puVar6 = auStack_60;
    }
    *(bool *)((long)puVar5 + _DAT_11309b108) = bVar2;
    *puVar6 = puVar5;
    puVar6[1] = param_1;
    _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
    puVar5 = puVar6;
    func_0x0001048c28a0();
    puVar4 = puVar5;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar4 + _DAT_11309b110) = 5;
    *(undefined8 *)((long)puVar4 + _DAT_11309b118) = 0;
    *(undefined8 **)((long)puVar4 + _DAT_11309b120) = puVar6;
    ppuVar7 = apuStack_50;
    apuStack_50[0] = puVar4;
  }
  else {
    uVar3 = uVar3 & 0xff;
    if (uVar3 < 0x82) {
      if (uVar3 == 0x80) {
        func_0x0001048c28a0();
        puVar6 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)puVar6 + _DAT_11309b110) = 0;
        *(undefined8 *)((long)puVar6 + _DAT_11309b118) = 0;
        *(undefined8 *)((long)puVar6 + _DAT_11309b120) = 0;
        puVar5 = param_1;
        apuStack_b0[0] = puVar6;
      }
      else {
        func_0x0001048c28a0();
        puVar6 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)puVar6 + _DAT_11309b110) = 1;
        *(undefined8 *)((long)puVar6 + _DAT_11309b118) = 0;
        *(undefined8 *)((long)puVar6 + _DAT_11309b120) = 0;
        ppuVar7 = apuStack_a0;
        puVar5 = param_1;
        apuStack_a0[0] = puVar6;
      }
    }
    else if (uVar3 == 0x82) {
      func_0x0001048c28a0();
      puVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar6 + _DAT_11309b110) = 2;
      *(undefined8 *)((long)puVar6 + _DAT_11309b118) = 0;
      *(undefined8 *)((long)puVar6 + _DAT_11309b120) = 0;
      ppuVar7 = apuStack_90;
      puVar5 = param_1;
      apuStack_90[0] = puVar6;
    }
    else {
      func_0x0001048c28a0();
      puVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar6 + _DAT_11309b110) = 4;
      *(undefined8 *)((long)puVar6 + _DAT_11309b118) = 0;
      *(undefined8 *)((long)puVar6 + _DAT_11309b120) = 0;
      ppuVar7 = apuStack_70;
      puVar5 = param_1;
      apuStack_70[0] = puVar6;
    }
  }
  ppuVar7[1] = puVar5;
  _objc_msgSendSuper2(ppuVar7,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048c2860; end: 1048c28bf;  */

void FUN_1048c2860(void)

{
  _objc_opt_self(&PTR_PTR_1129e0c68);
  return;
}



/* Entry: 1048c28c0; end: 1048c2cbf;  */

int FUN_1048c28c0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048c293c;
        goto LAB_1048c2920;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048c2920:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1048c293c:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048c2cc0; end: 1048c2cff;  */

void FUN_1048c2cc0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b1a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd430e0;
  _swift_getWitnessTable(&UNK_10dd430e0,&UNK_1107b2e18);
  puRam000000011309b1a0 = puVar1;
  return;
}



/* Entry: 1048c2d00; end: 1048c2d03;  */

void FUN_1048c2d00(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd43180;
  _swift_getWitnessTable(&UNK_10dd43180,&UNK_1107b2d88);
  puRam000000011309b1a8 = puVar1;
  return;
}



/* Entry: 1048c2d04; end: 1048c2d43;  */

void FUN_1048c2d04(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd43180;
  _swift_getWitnessTable(&UNK_10dd43180,&UNK_1107b2d88);
  puRam000000011309b1a8 = puVar1;
  return;
}



/* Entry: 1048c2d44; end: 1048c2d47;  */

void FUN_1048c2d44(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b1b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd43220;
  _swift_getWitnessTable(&UNK_10dd43220,&UNK_1107b2cf8);
  puRam000000011309b1b0 = puVar1;
  return;
}



/* Entry: 1048c2d48; end: 1048c2d87;  */

void FUN_1048c2d48(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b1b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd43220;
  _swift_getWitnessTable(&UNK_10dd43220,&UNK_1107b2cf8);
  puRam000000011309b1b0 = puVar1;
  return;
}



/* Entry: 1048c2d88; end: 1048c2e2f;  */

ulong FUN_1048c2d88(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 1048c2e30; end: 1048c2e33; -[SCAttributedStoriesCarouselInFFSubtask description] */

void FUN_1048c2e30(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



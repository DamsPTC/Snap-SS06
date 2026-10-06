/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10444368c; end: 104443693; +[SCOperaInternalDataSaverModeStrategy disablePlayerPreloading] */

undefined8 FUN_10444368c(void)

{
  return 2;
}



/* Entry: 104443694; end: 10444369b; +[SCOperaInternalDataSaverModeStrategy disableVMPreloadingExceptFromImmediateNeighbours] */

undefined8 FUN_104443694(void)

{
  return 4;
}



/* Entry: 10444369c; end: 1044436a3; +[SCOperaInternalDataSaverModeStrategy disableVMPreloading] */

undefined8 FUN_10444369c(void)

{
  return 8;
}



/* Entry: 1044436a4; end: 1044436ab; +[SCOperaInternalDataSaverModeStrategy backwardDirectionOnly] */

undefined8 FUN_1044436a4(void)

{
  return 0x10;
}



/* Entry: 1044436ac; end: 104443747; -[SCOperaInternalDataSaverModeStrategy init] */

void FUN_1044436ac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaInternalDataSaverModeStrategyWrapper.swift",0x44,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044436f4);
  (*pcVar1)();
}



/* Entry: 104443748; end: 104443753; -[SCOperaPlaylistItemModel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104443748(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113079b90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113079b90))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104443754; end: 10444375f; -[SCOperaPlaylistItemModel ID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104443754(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113079b98);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113079b98))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104443760; end: 1044437a7;  */

void FUN_104443760(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044437a8; end: 1044437ff; -[SCOperaPlaylistItemModel subitems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044437a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113079ba0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _swift_getObjectType();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104443800; end: 104443917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104443800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079b90);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079b98);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113079ba0) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104443918; end: 1044439df; -[SCOperaPlaylistItemModel initWithType:ID:subitems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104443918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,lVar2);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113079b90);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113079b98);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(long *)(param_1 + _DAT_113079ba0) = param_5;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044439e0; end: 104443a0f;  */

void FUN_1044439e0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104443a10(param_1);
  return;
}



/* Entry: 104443a10; end: 104443be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104443a10(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_110 [16];
  undefined *puStack_100;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_113079b90);
  puVar7[1] = uStack_c8;
  *puVar7 = uStack_d0;
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_113079b98);
  puVar7[1] = uStack_d8;
  *puVar7 = uStack_e0;
  lVar5 = param_1[4];
  lStack_e8 = lVar5;
  if (lVar5 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x10);
    if (lVar4 == 0) {
      func_0x000104444348(&lStack_e8);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000100402194(&uStack_d0,&uStack_c0);
      func_0x000100402194(&uStack_e0,&uStack_c0);
      puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102761580(0,lVar4,0);
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      do {
        puVar6 = puStack_100;
        uStack_b8 = puVar7[1];
        uStack_c0 = *puVar7;
        uStack_a8 = puVar7[3];
        uStack_b0 = puVar7[2];
        uStack_a0 = puVar7[4];
        uStack_78 = puVar7[3];
        uStack_80 = puVar7[2];
        uStack_90 = uStack_c0;
        uStack_88 = uStack_b8;
        uStack_68 = uStack_a0;
        _objc_allocWithZone(lVar2);
        func_0x000100402194(&uStack_90,auStack_110);
        func_0x000100402194(&uStack_80,auStack_110);
        func_0x0001044442f8(&uStack_68,auStack_110);
        puVar3 = &uStack_c0;
        FUN_104443a10();
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puStack_100 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x000102761580(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        puVar6 = puStack_100;
        *(ulong *)(puStack_100 + 0x10) = uVar1 + 1;
        *(undefined8 **)(puStack_100 + uVar1 * 8 + 0x20) = puVar3;
        puVar7 = puVar7 + 5;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      func_0x000100bcb1dc(&uStack_d0);
      func_0x000100bcb1dc(&uStack_e0);
      func_0x000104444348(&lStack_e8);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113079ba0) = puVar6;
  _objc_msgSendSuper2(&stack0xffffffffffffff08,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104443be8; end: 104443beb; -[SCOperaPlaylistItemModel copyWithZone:] */

void FUN_104443be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104443bec; end: 104443c4b; -[SCOperaPlaylistItemModel description] */

void FUN_104443bec(void)

{
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
  
  _objc_retain();
  FUN_104443c4c(&uStack_60);
  uStack_18 = uStack_58;
  uStack_20 = uStack_60;
  func_0x000100bcb1dc(&uStack_20);
  uStack_28 = uStack_48;
  uStack_30 = uStack_50;
  func_0x000100bcb1dc(&uStack_30);
  uStack_38 = uStack_40;
  func_0x000104444348(&uStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104443c4c; end: 104443e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104443c4c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113079b90);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113079b90))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_113079b98);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113079b98))[1];
  uVar9 = *(ulong *)(param_2 + _DAT_113079ba0);
  if (uVar9 == 0) {
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _objc_release(param_2);
    puVar7 = (undefined *)0x0;
  }
  else {
    if (uVar9 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar8 = uVar9;
      if (-1 < (long)uVar9) {
        uVar8 = uVar9 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
    if (uVar8 == 0) {
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _objc_release(param_2);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      FUN_104444390(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104443e8c);
        (*pcVar6)();
      }
      if ((uVar9 & 0xc000000000000001) == 0) {
        puVar11 = (undefined8 *)(uVar9 + 0x20);
        do {
          _objc_retain(*puVar11);
          FUN_104443c4c(&uStack_88);
          uVar9 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
            FUN_104444390(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x40) = uStack_68;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x28) = uStack_80;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x20) = uStack_88;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x38) = uStack_70;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x30) = uStack_78;
          uVar8 = uVar8 - 1;
          puVar11 = puVar11 + 1;
        } while (uVar8 != 0);
      }
      else {
        uVar10 = 0;
        do {
          FUN_104443fc8(uVar10,uVar9);
          FUN_104443c4c(&uStack_88);
          uVar3 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
            FUN_104444390(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
          }
          uVar10 = uVar10 + 1;
          *(ulong *)(puVar7 + 0x10) = uVar3 + 1;
          *(undefined8 *)(puVar7 + uVar3 * 0x28 + 0x40) = uStack_68;
          *(undefined8 *)(puVar7 + uVar3 * 0x28 + 0x28) = uStack_80;
          *(undefined8 *)(puVar7 + uVar3 * 0x28 + 0x20) = uStack_88;
          *(undefined8 *)(puVar7 + uVar3 * 0x28 + 0x38) = uStack_70;
          *(undefined8 *)(puVar7 + uVar3 * 0x28 + 0x30) = uStack_78;
        } while (uVar8 != uVar10);
      }
      _objc_release(param_2);
    }
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = puVar7;
  return;
}



/* Entry: 104443e8c; end: 104443f07; -[SCOperaPlaylistItemModel init] */

void FUN_104443e8c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaPlaylistItemModelWrapper.swift",0x38,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104443ed4);
  (*pcVar1)();
}



/* Entry: 104443f08; end: 104443f57; -[SCOperaPlaylistItemModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104443f08(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113079b90 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113079b98 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113079ba0));
  return;
}



/* Entry: 104443f58; end: 104443fc7;  */

void FUN_104443f58(long param_1,code *param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && ((*param_2)(), param_1 != 0)) {
    param_3 = (ulong *)0x112d36e60;
    param_4 = (long *)&UNK_10d901170;
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 104443fc8; end: 10444438f;  */

ulong FUN_104443fc8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104444090);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104444094);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001044443ac();
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
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    func_0x0001044443ac();
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
  __sSS6appendyySSF(0xd00000000000001a,0x800000010dcffdb0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar5 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10444415c);
  (*pcVar2)();
}



/* Entry: 104444390; end: 104444473;  */

void FUN_104444390(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104444474();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 104444474; end: 10444458f;  */

undefined * FUN_104444474(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104444590);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113079bf0;
    func_0x0001000285a8(0x113079bf0,&UNK_10dcffe08);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_11076fd18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104444590; end: 1044446d3;  */

undefined *
FUN_104444590(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             code *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044446d4);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = param_5;
    FUN_104443f58(param_5,param_6,param_7,param_8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    (*param_6)(param_5);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,param_5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1044446d4; end: 104444903;  */

undefined * FUN_1044446d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044447f0);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113079be0;
    func_0x0001000285a8(0x113079be0,&UNK_10dcffdf8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_11076e8e0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104444904; end: 10444490f; -[SCOperaPlaylistItemGroupModel ID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104444904(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113079bf8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113079bf8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104444910; end: 10444491b; -[SCOperaPlaylistItemGroupModel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104444910(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113079c00);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113079c00))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10444491c; end: 104444963;  */

void FUN_10444491c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104444964; end: 104444973; -[SCOperaPlaylistItemGroupModel swipeToDismissEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104444964(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079c08);
}



/* Entry: 104444974; end: 104444983; -[SCOperaPlaylistItemGroupModel forwardAutoAdvanceEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104444974(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079c10);
}



/* Entry: 104444984; end: 104444993; -[SCOperaPlaylistItemGroupModel backwardsAutoAdvanceEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104444984(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079c18);
}



/* Entry: 104444994; end: 104444afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104444994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079bf8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079c00);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113079c08) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113079c10) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113079c18) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104444afc; end: 104444bc3; -[SCOperaPlaylistItemGroupModel initWithID:type:swipeToDismissEnabled:forwardAutoAdvanceEnabled:backwardsAutoAdvanceEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104444afc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113079bf8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113079c00);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_1 + _DAT_113079c08) = param_5;
  *(undefined1 *)(param_1 + _DAT_113079c10) = param_6;
  *(undefined1 *)(param_1 + _DAT_113079c18) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104444bc4; end: 104444d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104444bc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079bf8);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079c00);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined1 *)(unaff_x20 + _DAT_113079c08) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(unaff_x20 + _DAT_113079c10) = *(undefined1 *)((long)param_1 + 0x21);
  func_0x000100402194(&uStack_40,auStack_60);
  func_0x000100402194(&uStack_50,auStack_60);
  FUN_104444d44(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_113079c18) = *(undefined1 *)((long)param_1 + 0x22);
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104444d44; end: 104444d77;  */

undefined8 FUN_104444d44(undefined8 param_1)

{
  (*(code *)(undefined *)0x10444226c)();
  return param_1;
}



/* Entry: 104444d78; end: 104444dab; -[SCOperaPlaylistItemGroupModel hash] */

undefined8 FUN_104444d78(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104444dac();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104444dac; end: 104444e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104444dac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113079bf8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113079bf8))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113079c00);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113079c00))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113079c08));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113079c10));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113079c18));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104444e8c; end: 104444ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104444e8c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar10 = &lStack_88;
    _swift_dynamicCast(plVar10,auStack_80,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar10 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_113079bf8);
      if (lVar9 == *(long *)(lStack_88 + _DAT_113079bf8) &&
          ((long *)(unaff_x20 + _DAT_113079bf8))[1] == ((long *)(lStack_88 + _DAT_113079bf8))[1]) {
        uVar7 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar7 = (uint)lVar9;
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_113079c00);
      if (lVar9 == *(long *)(lStack_88 + _DAT_113079c00) &&
          ((long *)(unaff_x20 + _DAT_113079c00))[1] == ((long *)(lStack_88 + _DAT_113079c00))[1]) {
        uVar8 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar8 = (uint)lVar9;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113079c08);
      bVar2 = *(byte *)(lStack_88 + _DAT_113079c08);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113079c10);
      bVar4 = *(byte *)(lStack_88 + _DAT_113079c10);
      bVar5 = *(byte *)(unaff_x20 + _DAT_113079c18);
      bVar6 = *(byte *)(lStack_88 + _DAT_113079c18);
      _objc_release(lStack_88);
      uVar7 = uVar7 & uVar8 & ((bVar1 ^ bVar2) ^ 1) & ((bVar3 ^ bVar4) ^ 1) & ((bVar5 ^ bVar6) ^ 1);
      goto LAB_104444fd8;
    }
  }
  uVar7 = 0;
LAB_104444fd8:
  return uVar7 & 1;
}



/* Entry: 104444ffc; end: 10444507b; -[SCOperaPlaylistItemGroupModel isEqual:] */

uint FUN_104444ffc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104444e8c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10444507c; end: 10444507f; -[SCOperaPlaylistItemGroupModel copyWithZone:] */

void FUN_10444507c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104445080; end: 1044450b3; -[SCOperaPlaylistItemGroupModel description] */

void FUN_104445080(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044450b4; end: 10444512f; -[SCOperaPlaylistItemGroupModel init] */

void FUN_1044450b4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaPlaylistItemGroupModelWrapper.swift",0x3d,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044450fc);
  (*pcVar1)();
}



/* Entry: 104445130; end: 10444516f; -[SCOperaPlaylistItemGroupModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445130(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113079bf8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113079c00 + 8))
  ;
  return;
}



/* Entry: 104445170; end: 10444518f;  */

void FUN_104445170(void)

{
  _objc_opt_self(&PTR_PTR_1129b45c8);
  return;
}



/* Entry: 104445190; end: 10444519b; -[SCOperaPageData pageProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445190(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113079c48);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10444519c; end: 1044451a7; -[SCOperaPageData attachmentPageProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444519c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113079c50);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044451a8; end: 10444520b;  */

void FUN_1044451a8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10444520c; end: 104445213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444520c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079c48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079c50) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104445214; end: 1044452d7; -[SCOperaPageData initWithPageProperties:attachmentPageProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445214(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR___sypN_11034f1a8;
  if (param_3 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  }
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  }
  *(long *)(param_1 + _DAT_113079c48) = param_3;
  *(long *)(param_1 + _DAT_113079c50) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044452d8; end: 10444539f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044452d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079c48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079c50) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044453a0; end: 1044453a3; -[SCOperaPageData copyWithZone:] */

void FUN_1044453a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044453a4; end: 1044453bf; -[SCOperaPageData description] */

void FUN_1044453a4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044453c0; end: 10444543b; -[SCOperaPageData init] */

void FUN_1044453c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaPageDataWrapper.swift",0x2f,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104445408);
  (*pcVar1)();
}



/* Entry: 10444543c; end: 104445473; -[SCOperaPageData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444543c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113079c48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113079c50));
  return;
}



/* Entry: 104445474; end: 104445493;  */

void FUN_104445474(void)

{
  _objc_opt_self(&PTR_PTR_1129b46b0);
  return;
}



/* Entry: 104445494; end: 10444549b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445494(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079c48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113079c50) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10444549c; end: 1044454ab; -[SCOperaBackdropConfig overlayColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444549c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079c80));
  return;
}



/* Entry: 1044454ac; end: 1044454bf; -[SCOperaBackdropConfig blurRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044454ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079c88);
}



/* Entry: 1044454c0; end: 104445593; -[SCOperaBackdropConfig initWithOverlayColor:blurRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044454c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113079c80) = param_4;
  *(undefined8 *)(param_2 + _DAT_113079c88) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_2;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104445594; end: 104445597; -[SCOperaBackdropConfig copyWithZone:] */

void FUN_104445594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104445598; end: 1044455b3; -[SCOperaBackdropConfig description] */

void FUN_104445598(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044455b4; end: 1044455fb; -[SCOperaBackdropConfig init] */

void FUN_1044455b4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaBackdropConfigWrapper.swift",0x35,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044455fc);
  (*pcVar1)();
}



/* Entry: 1044455fc; end: 104445617; +[SCOperaBackdropConfigBuilder operaBackdropConfig] */

void FUN_1044455fc(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104445618; end: 104445657; +[SCOperaBackdropConfigBuilder operaBackdropConfigWithExistingOperaBackdropConfig:] */

void FUN_104445618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_10444594c(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104445658; end: 10444569f; -[SCOperaBackdropConfigBuilder withOverlayColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104445658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113079c90);
  *(undefined8 *)(param_1 + _DAT_113079c90) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044456a0; end: 1044456b7; -[SCOperaBackdropConfigBuilder withBlurRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044456a0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113079c98);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1044456b8; end: 104445797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044456b8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_113079c90);
  if (lVar4 == 0) {
    FUN_104445a04(0x4379616c7265766f,0xec000000726f6c6f);
    _swift_willThrow();
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079c98);
    if (*(char *)(puVar1 + 1) == '\x01') {
      uVar5 = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    else {
      uVar5 = *puVar1;
    }
    FUN_104445bac();
    lVar3 = param_1;
    _objc_allocWithZone();
    *(long *)(lVar3 + _DAT_113079c80) = lVar4;
    *(undefined8 *)(lVar3 + _DAT_113079c88) = uVar5;
    puVar2 = PTR_s_init_1125d9248;
    lStack_40 = lVar3;
    lStack_38 = param_1;
    _objc_retain(lVar4);
    _objc_msgSendSuper2(&lStack_40,puVar2);
  }
  return;
}



/* Entry: 104445798; end: 104445803; -[SCOperaBackdropConfigBuilder build] */

/* WARNING: Removing unreachable block (ram,0x0001044457e4) */

void FUN_104445798(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044456b8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104445804; end: 104445893; -[SCOperaBackdropConfigBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x000104445840) */
/* WARNING: Removing unreachable block (ram,0x000104445874) */
/* WARNING: Removing unreachable block (ram,0x000104445844) */

void FUN_104445804(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044456b8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104445894; end: 1044458f3; -[SCOperaBackdropConfigBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445894(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113079c90) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_113079c98);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044458f4; end: 1044458f7;  */

void FUN_1044458f4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044458f8; end: 104445907; -[SCOperaBackdropConfigBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044458f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113079c90));
  return;
}



/* Entry: 104445908; end: 10444593b;  */

void FUN_104445908(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10444593c; end: 10444594b; -[SCOperaBackdropConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10444593c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113079c80));
  return;
}



/* Entry: 10444594c; end: 104445a03;  */

/* WARNING: Possible PIC construction at 0x000104445980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104445984) */

void FUN_10444594c(long param_1)

{
  if (param_1 == 0) {
    func_0x000104445bcc();
    _objc_allocWithZone();
  }
  else {
    func_0x000104445bcc();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104445a04; end: 104445bab;  */

undefined * FUN_104445a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 104445bac; end: 104445beb;  */

void FUN_104445bac(void)

{
  _objc_opt_self(&PTR_PTR_1129b4780);
  return;
}



/* Entry: 104445bec; end: 104445bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445bec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079c80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113079c88) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104445bf4; end: 104445bfb; +[SCOperaVideoFastStartStrategy unset] */

undefined8 FUN_104445bf4(void)

{
  return 0;
}



/* Entry: 104445bfc; end: 104445c03; +[SCOperaVideoFastStartStrategy alwaysNext] */

undefined8 FUN_104445bfc(void)

{
  return 1;
}



/* Entry: 104445c04; end: 104445c0b; +[SCOperaVideoFastStartStrategy alwaysNextGroup] */

undefined8 FUN_104445c04(void)

{
  return 2;
}



/* Entry: 104445c0c; end: 104445c13; +[SCOperaVideoFastStartStrategy nextOverNextGroup] */

undefined8 FUN_104445c0c(void)

{
  return 4;
}



/* Entry: 104445c14; end: 104445c1b; +[SCOperaVideoFastStartStrategy nextGroupHighPriorityContent] */

undefined8 FUN_104445c14(void)

{
  return 8;
}



/* Entry: 104445c1c; end: 104445c23; +[SCOperaVideoFastStartStrategy nextOverNonAdNextGroup] */

undefined8 FUN_104445c1c(void)

{
  return 0x10;
}



/* Entry: 104445c24; end: 104445cbf; -[SCOperaVideoFastStartStrategy init] */

void FUN_104445c24(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaVideoFastStartStrategyWrapper.swift",0x3d,2,0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104445c6c);
  (*pcVar1)();
}



/* Entry: 104445cc0; end: 104445cd7; -[SCOperaLayerViewControllerConfiguration operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104445cc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079d18);
}



/* Entry: 104445cd8; end: 104445ce7; -[SCOperaLayerViewControllerConfiguration pageToBottomOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104445cd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079d20);
}



/* Entry: 104445ce8; end: 104445cf7; -[SCOperaLayerViewControllerConfiguration pageBottomSafeAreaHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104445ce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079d28);
}



/* Entry: 104445cf8; end: 104445d07; -[SCOperaLayerViewControllerConfiguration hasRoundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104445cf8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113079d30);
}



/* Entry: 104445d08; end: 104445daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079d18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113079d20) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113079d28) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113079d30) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104445db0; end: 104445e57; -[SCOperaLayerViewControllerConfiguration initWithOperaSafeAreaInsets:pageToBottomOffset:pageBottomSafeAreaHeight:hasRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_7;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_7 + _DAT_113079d18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined8 *)(param_7 + _DAT_113079d20) = param_5;
  *(undefined8 *)(param_7 + _DAT_113079d28) = param_6;
  *(undefined1 *)(param_7 + _DAT_113079d30) = param_9;
  lStack_60 = param_7;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104445e58; end: 104445ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445e58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079d18);
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar4 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar2;
  puVar1[2] = uVar4;
  uVar4 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113079d20) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113079d28) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_113079d30) = *(undefined1 *)(param_1 + 6);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104445ed8; end: 104445edb; -[SCOperaLayerViewControllerConfiguration copyWithZone:] */

void FUN_104445ed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104445edc; end: 104445ef7; -[SCOperaLayerViewControllerConfiguration description] */

void FUN_104445edc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104445ef8; end: 104445f93; -[SCOperaLayerViewControllerConfiguration init] */

void FUN_104445ef8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OperaAPIDefinesSwift/OperaLayerViewControllerConfigurationWrapper.swift",0x47,2,0x34,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104445f40);
  (*pcVar1)();
}



/* Entry: 104445f94; end: 104445fa3; -[SCOperaObservablePlaybackEvent observeTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104445f94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113079d60);
}



/* Entry: 104445fa4; end: 104445fef; -[SCOperaObservablePlaybackEvent identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445fa4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113079d68);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113079d68))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104445ff0; end: 104445ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113079d60) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113079d68);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104445ff4; end: 1044460e3; -[SCOperaObservablePlaybackEvent initWithObserveTime:identifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104445ff4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_2 + _DAT_113079d60) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_113079d68);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044460e4; end: 1044460e7; -[SCOperaObservablePlaybackEvent copyWithZone:] */

void FUN_1044460e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044460e8; end: 104446103; -[SCOperaObservablePlaybackEvent description] */

void FUN_1044460e8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



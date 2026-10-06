/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013cb0a8; end: 1013cb0b3; -[SCTopLevelCardsEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb0a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a930;
  func_0x000107c61428(param_1 + _DAT_112d7a930,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cb0b4; end: 1013cb0bf; -[SCTopLevelCardsEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb0b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a930;
  func_0x000107c61428(param_1 + _DAT_112d7a930,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cb0c0; end: 1013cb0cb; -[SCTopLevelCardsEntryPoint experimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb0c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a938;
  func_0x000107c61428(param_1 + _DAT_112d7a938,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cb0cc; end: 1013cb10f;  */

void FUN_1013cb0cc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cb110; end: 1013cb11b; -[SCTopLevelCardsEntryPoint setExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb110(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a938;
  func_0x000107c61428(param_1 + _DAT_112d7a938,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cb11c; end: 1013cb16f;  */

void FUN_1013cb11c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cb170; end: 1013cb39b;  */

/* WARNING: Possible PIC construction at 0x0001013cb298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cb2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cb2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cb360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cb370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cb340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cb350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cb330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cb354) */
/* WARNING: Removing unreachable block (ram,0x0001013cb344) */
/* WARNING: Removing unreachable block (ram,0x0001013cb374) */
/* WARNING: Removing unreachable block (ram,0x0001013cb364) */
/* WARNING: Removing unreachable block (ram,0x0001013cb2bc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001013cb2ac) */
/* WARNING: Removing unreachable block (ram,0x0001013cb29c) */
/* WARNING: Removing unreachable block (ram,0x0001013cb334) */

void FUN_1013cb170(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d5b8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d280();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3eb48();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c3fa0c();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c42bbc();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_1013c92b0();
              func_0x000107c613fc();
              *(long *)(lVar6 + 0x10) = lVar1;
              *(long *)(lVar6 + 0x18) = lVar2;
              *(long *)(lVar6 + 0x20) = lVar3;
              *(long *)(lVar6 + 0x28) = lVar4;
              *(long *)(lVar6 + 0x30) = lVar5;
              *(long *)(lVar6 + 0x38) = unaff_x20;
              func_0x000107c61174(lVar1);
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(unaff_x20);
              FUN_1013c8d1c();
              lVar1 = unaff_x20;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1013cb39c; end: 1013cb3c3; -[SCTopLevelCardsEntryPoint begin] */

void FUN_1013cb39c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013cb170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013cb3c4; end: 1013cb407; -[SCTopLevelCardsEntryPoint end] */

void FUN_1013cb3c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cb408; end: 1013cb75b;  */

void FUN_1013cb408(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10c4010)) ||
       (func_0x000107c605b8(0xd000000000000014,0x800000010ef3bff0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56a4c();
    }
    else {
      uVar2 = 0x726553636973756d;
      if (((param_2 == 0x726553636973756d) && (param_3 == -0x12ffff8c9a9c968a)) ||
         (func_0x000107c605b8(0x726553636973756d,0xed00007365636976,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56870();
      }
      else {
        if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10c3ff0)) {
          uVar2 = 0xd000000000000011;
          func_0x000107c605b8(0xd000000000000011,0x800000010ef3c010,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53414();
            }
            else {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef210)) &&
                 (func_0x000107c605b8(0xd000000000000012,0x800000010ef10df0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SCContextTopLevelCards/SCTopLevelCardsEntryPoint.swift",0x36,2,
                                    0x3f,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1013cb75c);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c54798();
            }
            goto LAB_1013cb494;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52da8();
      }
    }
  }
LAB_1013cb494:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013cb75c; end: 1013cb807; -[SCTopLevelCardsEntryPoint setValue:forIvarName:] */

void FUN_1013cb75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1013cb408(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013cb808; end: 1013cb8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb808(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d7a910,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a918,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a920,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a928,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a930,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7a938,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7a940) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cb8cc; end: 1013cb8eb; -[SCTopLevelCardsEntryPoint init] */

void FUN_1013cb8cc(void)

{
  FUN_1013cb808();
  return;
}



/* Entry: 1013cb8ec; end: 1013cb91f;  */

void FUN_1013cb8ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013cb920; end: 1013cb9a7; -[SCTopLevelCardsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb920(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7a910);
  func_0x000107c61610(param_1 + _DAT_112d7a918);
  func_0x000107c61610(param_1 + _DAT_112d7a920);
  func_0x000107c61610(param_1 + _DAT_112d7a928);
  func_0x000107c61610(param_1 + _DAT_112d7a930);
  func_0x000107c61610(param_1 + _DAT_112d7a938);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7a940));
  return;
}



/* Entry: 1013cb9a8; end: 1013cb9c7;  */

void FUN_1013cb9a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf7d8);
  return;
}



/* Entry: 1013cb9c8; end: 1013cb9d7; -[SCContextOperaChromeLayerPluginServices pluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb9c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d7a970));
  return;
}



/* Entry: 1013cb9d8; end: 1013cba23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb9d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d7a970) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cba24; end: 1013cba7b; -[SCContextOperaChromeLayerPluginServices initWithPluginProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cba24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d7a970) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1013cba7c; end: 1013cbadb; -[SCContextOperaChromeLayerPluginServices init] */

void FUN_1013cba7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextOperaChromeLayerPluginServices.SCContextOperaChromeLayerPluginServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013cbaa8);
  (*pcVar1)();
}



/* Entry: 1013cbadc; end: 1013cbaeb; -[SCContextOperaChromeLayerPluginServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cbadc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a970));
  return;
}



/* Entry: 1013cbaec; end: 1013cbb0b;  */

void FUN_1013cbaec(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf8c0);
  return;
}



/* Entry: 1013cbb0c; end: 1013cc16f;  */

long FUN_1013cbb0c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1013cc170; end: 1013cc17f; -[SCPreviewContextCardsScope cardsInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d7a9a0));
  return;
}



/* Entry: 1013cc180; end: 1013cc18f; -[SCPreviewContextCardsScope actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013cc180(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d7a9a8);
}



/* Entry: 1013cc190; end: 1013cc1af; -[SCPreviewContextCardsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc190(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d7a9b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cc1b0; end: 1013cc223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d7a9a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a9a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a9b0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cc224; end: 1013cc2ab; -[SCPreviewContextCardsScope initWithCardsInfo:actionType:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d7a9a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112d7a9a8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112d7a9b0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1013cc2ac; end: 1013cc30b; -[SCPreviewContextCardsScope init] */

void FUN_1013cc2ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPreviewContextCardsScope.SCPreviewContextCardsScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013cc2d8);
  (*pcVar1)();
}



/* Entry: 1013cc30c; end: 1013cc343; -[SCPreviewContextCardsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc30c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7a9a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d7a9b0));
  return;
}



/* Entry: 1013cc344; end: 1013cc363;  */

void FUN_1013cc344(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf980);
  return;
}



/* Entry: 1013cc364; end: 1013cc3bf; -[SCPreviewContextCardsInfo lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc364(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7a9e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7a9e0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013cc3c0; end: 1013cc3d3; -[SCPreviewContextCardsInfo commerceItemInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc3c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112d7a9e8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1013ce04c(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1013cc3d4; end: 1013cc3e7; -[SCPreviewContextCardsInfo commerceStoreInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc3d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112d7a9f0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1013ce3ec(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1013cc3e8; end: 1013cc43f;  */

void FUN_1013cc3e8(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    (*param_4)(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1013cc440; end: 1013cc547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a9e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a9e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a9f0) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cc548; end: 1013cc677; -[SCPreviewContextCardsInfo initWithLensId:commerceItemInfo:commerceStoreInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc548(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  if (param_4 != 0) {
    uVar3 = 0;
    FUN_1013ce04c(0);
    func_0x000107c5fc54(param_4,uVar3);
  }
  lVar4 = 0;
  if (param_5 != 0) {
    FUN_1013ce3ec();
    func_0x000107c5fc54(param_5,lVar4);
    lVar4 = param_5;
  }
  plVar1 = (long *)(param_1 + _DAT_112d7a9e0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_112d7a9e8) = param_4;
  *(long *)(param_1 + _DAT_112d7a9f0) = lVar4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cc678; end: 1013cc9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cc678(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  func_0x000107c614f0();
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112d7a9e0);
  *puVar12 = param_1;
  puVar12[1] = param_2;
  if (param_3 == 0) {
    func_0x000107c61434(param_2);
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar14 = *(long *)(param_3 + 0x10);
    if (lVar14 == 0) {
      func_0x000107c61434(param_2);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(param_2);
      func_0x0001013ccf30(0,lVar14,0);
      puVar13 = puStack_78;
      lVar9 = 0;
      FUN_1013ce04c();
      puVar12 = (undefined8 *)(param_3 + 0x40);
      do {
        uVar2 = puVar12[-4];
        uVar5 = puVar12[-3];
        uVar3 = puVar12[-2];
        uVar6 = puVar12[-1];
        uVar15 = *puVar12;
        lVar10 = lVar9;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar10 + _DAT_112d7aa78);
        *puVar1 = uVar2;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar10 + _DAT_112d7aa80) = uVar3;
        puVar1 = (undefined8 *)(lVar10 + _DAT_112d7aa88);
        *puVar1 = uVar6;
        puVar1[1] = uVar15;
        puVar8 = PTR_s_init_1125d9248;
        lStack_98 = lVar10;
        lStack_90 = lVar9;
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar15);
        plVar11 = &lStack_98;
        func_0x000107c61154(plVar11,puVar8);
        uVar4 = *(ulong *)(puVar13 + 0x10);
        puStack_78 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
          func_0x0001013ccf30(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
        }
        puVar12 = puVar12 + 5;
        *(ulong *)(puStack_78 + 0x10) = uVar4 + 1;
        *(long **)(puStack_78 + uVar4 * 8 + 0x20) = plVar11;
        lVar14 = lVar14 + -1;
        puVar13 = puStack_78;
      } while (lVar14 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_112d7a9e8) = puVar13;
  if (param_4 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_3);
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar14 = *(long *)(param_4 + 0x10);
    if (lVar14 == 0) {
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(param_3);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001013ccefc(0,lVar14,0);
      puVar13 = puStack_78;
      lVar9 = 0;
      FUN_1013ce3ec();
      puVar12 = (undefined8 *)(param_4 + 0x48);
      do {
        uVar2 = puVar12[-5];
        uVar6 = puVar12[-4];
        uVar3 = puVar12[-3];
        uVar15 = puVar12[-2];
        uVar5 = puVar12[-1];
        uVar7 = *puVar12;
        lVar10 = lVar9;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar10 + _DAT_112d7aab8);
        *puVar1 = uVar2;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)(lVar10 + _DAT_112d7aac0);
        *puVar1 = uVar3;
        puVar1[1] = uVar15;
        puVar1 = (undefined8 *)(lVar10 + _DAT_112d7aac8);
        *puVar1 = uVar5;
        puVar1[1] = uVar7;
        puVar8 = PTR_s_init_1125d9248;
        lStack_88 = lVar10;
        lStack_80 = lVar9;
        func_0x000107c61434(uVar6);
        func_0x000107c61434(uVar15);
        func_0x000107c61434(uVar7);
        plVar11 = &lStack_88;
        func_0x000107c61154(plVar11,puVar8);
        uVar4 = *(ulong *)(puVar13 + 0x10);
        puStack_78 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
          func_0x0001013ccefc(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
        }
        puVar13 = puStack_78;
        puVar12 = puVar12 + 6;
        *(ulong *)(puStack_78 + 0x10) = uVar4 + 1;
        *(long **)(puStack_78 + uVar4 * 8 + 0x20) = plVar11;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(param_3);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_112d7a9f0) = puVar13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cc9ec; end: 1013cc9ef; -[SCPreviewContextCardsInfo copyWithZone:] */

void FUN_1013cc9ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1013cc9f0; end: 1013cca3b; -[SCPreviewContextCardsInfo description] */

void FUN_1013cc9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1013cd6b4();
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_4);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cca3c; end: 1013cca83; -[SCPreviewContextCardsInfo init] */

void FUN_1013cca3c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCPreviewContextCardsScope/SCPreviewContextCardsInfoWrapper.swift",0x41,2,
                      0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013cca84);
  (*pcVar1)();
}



/* Entry: 1013cca84; end: 1013cca9f; +[SCPreviewContextCardsInfoBuilder previewContextCardsInfo] */

void FUN_1013cca84(void)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013ccaa0; end: 1013ccadf; +[SCPreviewContextCardsInfoBuilder previewContextCardsInfoWithExistingPreviewContextCardsInfo:] */

void FUN_1013ccaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_1013cdba0(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1013ccae0; end: 1013ccb43; -[SCPreviewContextCardsInfoBuilder withLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ccae0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112d7a9f8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1013ccb44; end: 1013ccb57; -[SCPreviewContextCardsInfoBuilder withCommerceItemInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ccb44(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1013ce04c(0);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d7aa00);
  *(long *)(param_1 + _DAT_112d7aa00) = param_3;
  func_0x000107c61174();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1013ccb58; end: 1013ccb6b; -[SCPreviewContextCardsInfoBuilder withCommerceStoreInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ccb58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1013ce3ec(0);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d7aa08);
  *(long *)(param_1 + _DAT_112d7aa08) = param_3;
  func_0x000107c61174();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1013ccb6c; end: 1013ccbdf;  */

void FUN_1013ccb6c(long param_1,undefined8 param_2,long param_3,code *param_4,long *param_5)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    (*param_4)(0);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + *param_5);
  *(long *)(param_1 + *param_5) = param_3;
  func_0x000107c61174();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1013ccbe0; end: 1013ccc9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ccbe0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7a9f8);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d7a9f8))[1];
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7aa00);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d7aa08);
  FUN_1013cdc94();
  lVar5 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d7a9e0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d7a9e8) = uVar7;
  *(undefined8 *)(lVar5 + _DAT_112d7a9f0) = uVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = param_1;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar6);
  func_0x000107c61154(&lStack_50,puVar4);
  return;
}



/* Entry: 1013ccc9c; end: 1013ccd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ccc9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7a9f8);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d7a9f8))[1];
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7aa00);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d7aa08);
  FUN_1013cdc94();
  lVar5 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d7a9e0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d7a9e8) = uVar7;
  *(undefined8 *)(lVar5 + _DAT_112d7a9f0) = uVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = param_1;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar6);
  func_0x000107c61154(&lStack_50,puVar4);
  return;
}



/* Entry: 1013ccd60; end: 1013ccd93; -[SCPreviewContextCardsInfoBuilder build] */

void FUN_1013ccd60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013ccbe0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013ccd94; end: 1013ccdd7; -[SCPreviewContextCardsInfoBuilder safeBuildAndReturnError:] */

void FUN_1013ccd94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013ccc9c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013ccdd8; end: 1013cce3b; -[SCPreviewContextCardsInfoBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ccdd8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7a9f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112d7aa00) = 0;
  *(undefined8 *)(param_1 + _DAT_112d7aa08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cce3c; end: 1013cce3f;  */

void FUN_1013cce3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013cce40; end: 1013cce5b; -[SCPreviewContextCardsInfoBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013cced4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cced8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cce40(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112d7a9f8 + 8),param_2,&DAT_112d7a9f8,&DAT_112d7aa00,
             &DAT_112d7aa08);
  return;
}



/* Entry: 1013cce5c; end: 1013cce8f;  */

void FUN_1013cce5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013cce90; end: 1013cceab; -[SCPreviewContextCardsInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013cced4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cced8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cce90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112d7a9e0 + 8),param_2,&DAT_112d7a9e0,&DAT_112d7a9e8,
             &DAT_112d7a9f0);
  return;
}



/* Entry: 1013cceac; end: 1013ccefb;  */

/* WARNING: Possible PIC construction at 0x0001013cced4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cced8) */

void FUN_1013cceac(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + *param_3 + 8));
  return;
}



/* Entry: 1013ccefc; end: 1013ccf9b;  */

void FUN_1013ccefc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1013ccf9c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1013ccf9c; end: 1013cd0d7;  */

code * FUN_1013ccf9c(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013cd0d8);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    func_0x0001013cd310(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 1013cd0d8; end: 1013cd37b;  */

undefined * FUN_1013cd0d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013cd1f4);
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
    puVar3 = (undefined *)0x112d7aa68;
    func_0x0001000285a8(0x112d7aa68,&UNK_10d93a1d8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1103ae998);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1013cd37c; end: 1013cd6b3;  */

ulong FUN_1013cd37c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013cd44c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013cd450);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1013ce3ec(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_1013ce3ec(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000027,0x800000010ef3c180);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013cd518);
  (*pcVar2)();
}



/* Entry: 1013cd6b4; end: 1013cdb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013cd6b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d7a9e0);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112d7a9e0))[1];
  uVar12 = *(ulong *)(param_1 + _DAT_112d7a9e8);
  if (uVar12 == 0) {
    func_0x000107c61434(uVar3);
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar14 = uVar12;
      if (-1 < (long)uVar12) {
        uVar14 = uVar12 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
    if (uVar14 == 0) {
      func_0x000107c61434(uVar3);
    }
    else {
      func_0x000107c61434(uVar3);
      func_0x0001013ccf80(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1013cdb9c);
        (*pcVar8)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        plVar10 = (long *)(uVar12 + 0x20);
        do {
          lVar11 = *plVar10;
          uVar3 = *(undefined8 *)(lVar11 + _DAT_112d7aa78);
          uVar4 = ((undefined8 *)(lVar11 + _DAT_112d7aa78))[1];
          uVar13 = *(undefined8 *)(lVar11 + _DAT_112d7aa80);
          uVar2 = *(undefined8 *)(lVar11 + _DAT_112d7aa88);
          uVar5 = ((undefined8 *)(lVar11 + _DAT_112d7aa88))[1];
          uVar12 = *(ulong *)(puVar7 + 0x10);
          uVar15 = *(ulong *)(puVar7 + 0x18);
          func_0x000107c61434(uVar4);
          func_0x000107c61434(uVar5);
          if (uVar15 >> 1 <= uVar12) {
            func_0x0001013ccf80(1 < uVar15,uVar12 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puVar7 + uVar12 * 0x28 + 0x20) = uVar3;
          *(undefined8 *)(puVar7 + uVar12 * 0x28 + 0x28) = uVar4;
          *(undefined8 *)(puVar7 + uVar12 * 0x28 + 0x30) = uVar13;
          *(undefined8 *)(puVar7 + uVar12 * 0x28 + 0x38) = uVar2;
          *(undefined8 *)(puVar7 + uVar12 * 0x28 + 0x40) = uVar5;
          uVar14 = uVar14 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar14 != 0);
      }
      else {
        uVar15 = 0;
        do {
          uVar9 = uVar15;
          func_0x0001013cd518(uVar15,uVar12);
          uVar3 = *(undefined8 *)(uVar9 + _DAT_112d7aa78);
          uVar4 = ((undefined8 *)(uVar9 + _DAT_112d7aa78))[1];
          uVar13 = *(undefined8 *)(uVar9 + _DAT_112d7aa80);
          uVar2 = *(undefined8 *)(uVar9 + _DAT_112d7aa88);
          uVar5 = ((undefined8 *)(uVar9 + _DAT_112d7aa88))[1];
          func_0x000107c61434(uVar4);
          func_0x000107c61434(uVar5);
          func_0x000107c615e8(uVar9);
          uVar9 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
            func_0x0001013ccf80(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
          }
          uVar15 = uVar15 + 1;
          *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x20) = uVar3;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x28) = uVar4;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x30) = uVar13;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x38) = uVar2;
          *(undefined8 *)(puVar7 + uVar9 * 0x28 + 0x40) = uVar5;
        } while (uVar14 != uVar15);
      }
    }
  }
  uVar12 = *(ulong *)(param_1 + _DAT_112d7a9f0);
  if (uVar12 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar14 = uVar12;
      if (-1 < (long)uVar12) {
        uVar14 = uVar12 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
    if (uVar14 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x0001013ccf64(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1013cdba0);
        (*pcVar8)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        plVar10 = (long *)(uVar12 + 0x20);
        do {
          lVar11 = *plVar10;
          uVar3 = *(undefined8 *)(lVar11 + _DAT_112d7aab8);
          uVar5 = ((undefined8 *)(lVar11 + _DAT_112d7aab8))[1];
          uVar2 = *(undefined8 *)(lVar11 + _DAT_112d7aac0);
          uVar13 = ((undefined8 *)(lVar11 + _DAT_112d7aac0))[1];
          uVar4 = *(undefined8 *)(lVar11 + _DAT_112d7aac8);
          uVar6 = ((undefined8 *)(lVar11 + _DAT_112d7aac8))[1];
          uVar12 = *(ulong *)(puVar7 + 0x10);
          uVar15 = *(ulong *)(puVar7 + 0x18);
          func_0x000107c61434(uVar5);
          func_0x000107c61434(uVar13);
          func_0x000107c61434(uVar6);
          if (uVar15 >> 1 <= uVar12) {
            func_0x0001013ccf64(1 < uVar15,uVar12 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x20) = uVar3;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x28) = uVar5;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x30) = uVar2;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x38) = uVar13;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x40) = uVar4;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x48) = uVar6;
          uVar14 = uVar14 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar14 != 0);
      }
      else {
        uVar15 = 0;
        do {
          uVar9 = uVar15;
          func_0x0001013cd37c(uVar15,uVar12);
          uVar3 = *(undefined8 *)(uVar9 + _DAT_112d7aab8);
          uVar5 = ((undefined8 *)(uVar9 + _DAT_112d7aab8))[1];
          uVar2 = *(undefined8 *)(uVar9 + _DAT_112d7aac0);
          uVar13 = ((undefined8 *)(uVar9 + _DAT_112d7aac0))[1];
          uVar4 = *(undefined8 *)(uVar9 + _DAT_112d7aac8);
          uVar6 = ((undefined8 *)(uVar9 + _DAT_112d7aac8))[1];
          func_0x000107c61434(uVar6);
          func_0x000107c61434(uVar5);
          func_0x000107c61434(uVar13);
          func_0x000107c615e8(uVar9);
          uVar9 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
            func_0x0001013ccf64(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
          }
          uVar15 = uVar15 + 1;
          *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x20) = uVar3;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x28) = uVar5;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x30) = uVar2;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x38) = uVar13;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x40) = uVar4;
          *(undefined8 *)(puVar7 + uVar9 * 0x30 + 0x48) = uVar6;
        } while (uVar14 != uVar15);
      }
      func_0x000107c61170(param_1);
    }
  }
  return uVar1;
}



/* Entry: 1013cdba0; end: 1013cdc93;  */

/* WARNING: Possible PIC construction at 0x0001013cdbd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cdbd8) */

void FUN_1013cdba0(long param_1)

{
  if (param_1 == 0) {
    func_0x0001013cdcb4();
    func_0x000107c610f8();
  }
  else {
    func_0x0001013cdcb4();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1013cdc94; end: 1013cdcd3;  */

void FUN_1013cdc94(void)

{
  func_0x000107c61168(&PTR_PTR_1127cfa50);
  return;
}



/* Entry: 1013cdcd4; end: 1013cdcd7;  */

void FUN_1013cdcd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013cdcd8; end: 1013cdd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cdcd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aa78);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7aa80) = param_1[2];
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aa88);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cdd48; end: 1013cdd53; -[SCPreviewContextCardCommerceItemInfo key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cdd48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7aa78);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7aa78))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013cdd54; end: 1013cdd63; -[SCPreviewContextCardCommerceItemInfo snapItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013cdd54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d7aa80);
}



/* Entry: 1013cdd64; end: 1013cdd6f; -[SCPreviewContextCardCommerceItemInfo storeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cdd64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7aa88);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7aa88))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013cdd70; end: 1013cddb7;  */

void FUN_1013cdd70(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013cddb8; end: 1013cdecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cddb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aa78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7aa80) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aa88);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cded0; end: 1013cdf6f; -[SCPreviewContextCardCommerceItemInfo initWithKey:snapItemId:storeId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cded0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7aa78);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112d7aa80) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7aa88);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013cdf70; end: 1013cdf73; -[SCPreviewContextCardCommerceItemInfo copyWithZone:] */

void FUN_1013cdf70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1013cdf74; end: 1013cdf8f; -[SCPreviewContextCardCommerceItemInfo description] */

void FUN_1013cdf74(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cdf90; end: 1013ce00b; -[SCPreviewContextCardCommerceItemInfo init] */

void FUN_1013cdf90(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCPreviewContextCardsScope/SCPreviewContextCardCommerceItemInfoWrapper.swift"
                      ,0x4c,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013cdfd8);
  (*pcVar1)();
}



/* Entry: 1013ce00c; end: 1013ce04b; -[SCPreviewContextCardCommerceItemInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013ce02c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ce030) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce00c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7aa78 + 8))
  ;
  return;
}



/* Entry: 1013ce04c; end: 1013ce06b;  */

void FUN_1013ce04c(void)

{
  func_0x000107c61168(&PTR_PTR_1127cfbf0);
  return;
}



/* Entry: 1013ce06c; end: 1013ce0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce06c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aab8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aac0);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aac8);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013ce0d8; end: 1013ce0e3; -[SCPreviewContextCardCommerceStoreInfo key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce0d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7aab8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7aab8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ce0e4; end: 1013ce0ef; -[SCPreviewContextCardCommerceStoreInfo storeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce0e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7aac0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7aac0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ce0f0; end: 1013ce137;  */

void FUN_1013ce0f0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ce138; end: 1013ce193; -[SCPreviewContextCardCommerceStoreInfo categoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce138(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7aac8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7aac8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1013ce194; end: 1013ce22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aab8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aac0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7aac8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013ce230; end: 1013ce2fb; -[SCPreviewContextCardCommerceStoreInfo initWithKey:storeId:categoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce230(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  lVar4 = param_2;
  func_0x000107c5faec();
  if (param_5 == 0) {
    param_5 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7aab8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7aac0);
  *puVar1 = param_4;
  puVar1[1] = lVar4;
  plVar2 = (long *)(param_1 + _DAT_112d7aac8);
  *plVar2 = param_5;
  plVar2[1] = lVar5;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013ce2fc; end: 1013ce2ff; -[SCPreviewContextCardCommerceStoreInfo copyWithZone:] */

void FUN_1013ce2fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1013ce300; end: 1013ce31b; -[SCPreviewContextCardCommerceStoreInfo description] */

void FUN_1013ce300(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013ce31c; end: 1013ce397; -[SCPreviewContextCardCommerceStoreInfo init] */

void FUN_1013ce31c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCPreviewContextCardsScope/SCPreviewContextCardCommerceStoreInfoWrapper.swift"
                      ,0x4d,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ce364);
  (*pcVar1)();
}



/* Entry: 1013ce398; end: 1013ce3eb; -[SCPreviewContextCardCommerceStoreInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013ce3b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ce3bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7aab8 + 8))
  ;
  return;
}



/* Entry: 1013ce3ec; end: 1013ce40b;  */

void FUN_1013ce3ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127cfcc8);
  return;
}



/* Entry: 1013ce40c; end: 1013ce44b; -[RemixCaptureStatusSendingServices statusSenderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce40c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001000bf56c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013ce44c; end: 1013ce5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1013ce44c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  puVar1 = &UNK_1103aea88;
  func_0x000107c613fc(&UNK_1103aea88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x0001000285a8(0x112d7ab00,&UNK_10d93a250);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar2 = FUN_1013ce5ec;
  func_0x0001000bdd8c(FUN_1013ce5ec,puVar1);
  *(code **)(unaff_x20 + _DAT_112d7aaf8) = pcVar2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_2);
  return puVar3;
}



/* Entry: 1013ce5ec; end: 1013ce613;  */

void FUN_1013ce5ec(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1013ce614; end: 1013ce673; -[RemixCaptureStatusSendingServices init] */

void FUN_1013ce614(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixCaptureStatusSendingServices.RemixCaptureStatusSendingServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ce640);
  (*pcVar1)();
}



/* Entry: 1013ce674; end: 1013ce683; -[RemixCaptureStatusSendingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7aaf8));
  return;
}



/* Entry: 1013ce684; end: 1013ce6a3;  */

void FUN_1013ce684(void)

{
  func_0x000107c61168(&PTR_PTR_1127cfda0);
  return;
}



/* Entry: 1013ce6a4; end: 1013ce6a7;  */

void FUN_1013ce6a4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1013ce6a8; end: 1013ce707; -[_TtC25RevShareBillboardProvider25RevShareBillboardProvider init] */

void FUN_1013ce6a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RevShareBillboardProvider.RevShareBillboardProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ce6d4);
  (*pcVar1)();
}



/* Entry: 1013ce708; end: 1013ce753; -[_TtC25RevShareBillboardProvider25RevShareBillboardProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ce708(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7ab30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7ab38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7ab40 + 8))
  ;
  return;
}



/* Entry: 1013ce754; end: 1013ce75b; -[_TtC25RevShareBillboardProvider25RevShareBillboardProvider preCheckSource] */

undefined8 FUN_1013ce754(void)

{
  return 0x30;
}



/* Entry: 1013ce75c; end: 1013ce81b;  */

void FUN_1013ce75c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1103aebd0;
  func_0x000107c613fc(&UNK_1103aebd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  uStack_40 = 0x1013cecf4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100f3eca4;
  puStack_48 = &UNK_1103aebe8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c5e06c(param_1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar2);
  return;
}



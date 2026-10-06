/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103469870; end: 1034698c3;  */

void FUN_103469870(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034698c4; end: 103469b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034698c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5b274();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ae64();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ae60();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5b28c();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = 0;
            func_0x00010345de50();
            func_0x000107c613fc();
            uVar10 = *(undefined8 *)(lVar5 + _DAT_1130829b0);
            uVar12 = *(undefined8 *)(*(long *)(lVar3 + _DAT_113038be8) + _DAT_113038cc0);
            uVar11 = *(undefined8 *)(lVar4 + _DAT_113038858);
            puVar7 = &UNK_110659210;
            func_0x000107c613fc(&UNK_110659210,0x28,7);
            *(undefined8 *)(puVar7 + 0x10) = uVar12;
            *(undefined8 *)(puVar7 + 0x18) = uVar10;
            *(undefined8 *)(puVar7 + 0x20) = uVar11;
            func_0x0001000285a8(0x112f420e8,&UNK_10db8f0b0);
            func_0x000107c613fc();
            func_0x000107c61174();
            func_0x000107c61580(uVar12,2);
            func_0x000107c61580(uVar11,2);
            func_0x000107c61174();
            pcVar8 = FUN_103469b60;
            func_0x0001000bdd8c(FUN_103469b60,puVar7);
            uVar9 = 0;
            FUN_103475eb8(0);
            func_0x000107c610f8();
            func_0x000103475dfc(pcVar8,uVar9);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61574(uVar11);
            func_0x000107c61170(uVar10);
            func_0x000107c61574(uVar12);
            *(code **)(lVar6 + 0x10) = pcVar8;
            uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f6e870);
            *(long *)(unaff_x20 + _DAT_112f6e870) = lVar6;
            func_0x000107c6157c(lVar6);
            func_0x000107c61574(uVar10);
            func_0x000107c61174(*(undefined8 *)(lVar6 + 0x10));
            func_0x000107c61574(lVar6);
            return;
          }
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar1 = lVar4;
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103469b60; end: 103469b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103469b60(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  uVar2 = 0x10345ded8;
  func_0x0001000bdd8c(0x10345ded8,uVar6);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_1130828e8);
  func_0x0001000bda74(uVar3);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  uVar5 = 0;
  func_0x000103464d44(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar6 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar7 = 0;
  FUN_103476260();
  uVar8 = uVar7;
  func_0x000107c613fc();
  FUN_103475f30(uVar2,uVar3,uVar4,uVar5,uVar6,uVar8);
  func_0x0001000834e4(auStack_78);
  param_1[3] = uVar7;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = uVar2;
  return;
}



/* Entry: 103469b6c; end: 103469bf7; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider provide] */

void FUN_103469b6c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1034698c4();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensCarouselPreviewIntegration/SCLensCarouselSnapEditorViewModelCreatingServiceProvider.swift"
                      ,0x5d,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103469bf8);
  (*pcVar1)();
}



/* Entry: 103469bf8; end: 103469c2b; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider __safeProvide] */

void FUN_103469bf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1034698c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103469c2c; end: 103469c6f; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider end] */

void FUN_103469c2c(undefined8 param_1)

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



/* Entry: 103469c70; end: 103469f57;  */

void FUN_103469c70(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x7469644570616e73;
      if (((param_2 == 0x7469644570616e73) && (param_3 == -0x109a8f909cac8d91)) ||
         (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c593c0();
      }
      else {
        uVar2 = 0xd00000000000002b;
        if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0ed9910)) ||
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f1266f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c24();
        }
        else {
          uVar2 = 0xd000000000000027;
          if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0ed98e0)) ||
             (func_0x000107c605b8(0xd000000000000027,0x800000010f126720,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c20();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffc8) || (param_3 != -0x7ffffffef0eb0f10)) &&
               (func_0x000107c605b8(0xd000000000000038,0x800000010f14f0f0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "LensCarouselPreviewIntegration/SCLensCarouselSnapEditorViewModelCreatingServiceProvider.swift"
                                  ,0x5d,2,0x3d,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103469f58);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c593d8();
          }
        }
      }
      goto LAB_103469d04;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103469d04:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103469f58; end: 10346a003; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider setValue:forIvarName:] */

void FUN_103469f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103469c70(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10346a004; end: 10346a0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346a004(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f6e848,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e850,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e858,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e860,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e868,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f6e870) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10346a0b4; end: 10346a0d3; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider init] */

void FUN_10346a0b4(void)

{
  FUN_10346a004();
  return;
}



/* Entry: 10346a0d4; end: 10346a107;  */

void FUN_10346a0d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10346a108; end: 10346a17f; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346a108(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f6e848);
  func_0x000107c61610(param_1 + _DAT_112f6e850);
  func_0x000107c61610(param_1 + _DAT_112f6e858);
  func_0x000107c61610(param_1 + _DAT_112f6e860);
  func_0x000107c61610(param_1 + _DAT_112f6e868);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6e870));
  return;
}



/* Entry: 10346a180; end: 10346a19f;  */

void FUN_10346a180(void)

{
  func_0x000107c61168(&PTR_PTR_112f6e8b8);
  return;
}



/* Entry: 10346a1a0; end: 10346a1ab; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346a1a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e938;
  func_0x000107c61428(param_1 + _DAT_112f6e938,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10346a1ac; end: 10346a1b7; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346a1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e938;
  func_0x000107c61428(param_1 + _DAT_112f6e938,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346a1b8; end: 10346a1c3; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider snapEditorScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346a1b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e940;
  func_0x000107c61428(param_1 + _DAT_112f6e940,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10346a1c4; end: 10346a207;  */

void FUN_10346a1c4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10346a208; end: 10346a213; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider setSnapEditorScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346a208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e940;
  func_0x000107c61428(param_1 + _DAT_112f6e940,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346a214; end: 10346a267;  */

void FUN_10346a214(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346a268; end: 10346a503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10346a268(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b274();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010345bc44();
      func_0x000107c613fc();
      func_0x0001000285a8(0x112f41da8,&UNK_10db8ef70);
      func_0x000107c613fc();
      pcVar1 = FUN_10345bbd4;
      func_0x0001000bdd8c(FUN_10345bbd4,0);
      uVar5 = 0;
      func_0x000103f94e34(0);
      func_0x000107c610f8();
      func_0x000103f94d78(pcVar1,uVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      *(code **)(lVar4 + 0x10) = pcVar1;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f6e948);
      *(long *)(unaff_x20 + _DAT_112f6e948) = lVar4;
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      uVar5 = *(undefined8 *)(lVar4 + 0x10);
      func_0x000107c61174(uVar5);
      func_0x000107c61574(lVar4);
      return uVar5;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensCarouselPreviewIntegration/SCLensCarouselSnapEditorContextConfiguratorServiceProvider.swift"
                      ,0x5f,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10346a3dc);
  (*pcVar1)();
}



/* Entry: 10346a504; end: 10346a537; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider provide] */

void FUN_10346a504(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10346a268();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10346a538; end: 10346a56b; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider __safeProvide] */

void FUN_10346a538(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010346a3dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10346a56c; end: 10346a5af; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider end] */

void FUN_10346a56c(undefined8 param_1)

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



/* Entry: 10346a5b0; end: 10346a753;  */

void FUN_10346a5b0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x7469644570616e73;
      if (((param_2 != 0x7469644570616e73) || (param_3 != -0x109a8f909cac8d91)) &&
         (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
         (uVar2 & 1) == 0)) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensCarouselPreviewIntegration/SCLensCarouselSnapEditorContextConfiguratorServiceProvider.swift"
                            ,0x5f,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10346a754);
        (*pcVar1)();
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c593c0();
      goto LAB_10346a6bc;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10346a6bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10346a754; end: 10346a7ff; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider setValue:forIvarName:] */

void FUN_10346a754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10346a5b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10346a800; end: 10346a873; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346a800(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f6e938,0);
  func_0x000107c61614(param_1 + _DAT_112f6e940,0);
  *(undefined8 *)(param_1 + _DAT_112f6e948) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10346a874; end: 10346a8a7;  */

void FUN_10346a874(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10346a8a8; end: 10346a8ef; -[SCLensCarouselSnapEditorContextConfiguratorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346a8a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f6e938);
  func_0x000107c61610(param_1 + _DAT_112f6e940);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6e948));
  return;
}



/* Entry: 10346a8f0; end: 10346a90f;  */

void FUN_10346a8f0(void)

{
  func_0x000107c61168(&PTR_PTR_112f6e990);
  return;
}



/* Entry: 10346a910; end: 10346abcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10346a910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f6e9f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f6ea00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f6ea08) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f6ea10) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f6ea18) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f6ea20) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f6ea28) = param_6;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar1 = param_4;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + _DAT_112f6ea30) = uVar1;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_10346abd0();
  func_0x000107c61170(puVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61170(param_5);
  return puVar2;
}



/* Entry: 10346abd0; end: 10346ace7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346abd0(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plStack_48;
  
  func_0x0001000d224c(&plStack_48);
  if (plStack_48 != (long *)0x0) {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    plVar1 = plStack_48;
    func_0x000107c3d14c();
    func_0x000107c61180();
    plVar2 = plVar1;
    func_0x0001000b637c();
    func_0x000107c61170(plVar1);
    puVar3 = &UNK_1106592f0;
    func_0x000107c613fc(&UNK_1106592f0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcVar4 = FUN_10346b200;
    puVar6 = puVar3;
    (**(code **)(*plVar2 + 0x60))(FUN_10346b200);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    pcVar5 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f6ea30),pcVar5,puVar6);
    func_0x000107c615e8(plStack_48);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 10346ace8; end: 10346adbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10346ace8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f6e9f8);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c61174(lVar2);
    uVar1 = uStack_38;
    func_0x000107c4a000(uStack_38,param_2,lVar3,1);
    if ((int)uVar1 != 0) goto LAB_10346ad9c;
    func_0x000107c61170(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f6ea20);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c61174(lVar3);
    uVar1 = uStack_38;
    func_0x000107c4a000(uStack_38,param_2,lVar2,0);
    func_0x000107c615e8(uStack_38);
    if ((uVar1 & 1) != 0) {
      return lVar3;
    }
    func_0x000107c61170(lVar2);
    return 0;
  }
LAB_10346ad9c:
  func_0x000107c615e8(uStack_38);
  return lVar2;
}



/* Entry: 10346adbc; end: 10346aed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10346adbc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  ulong uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  lVar6 = *(long *)(unaff_x20 + _DAT_112f6ea28);
  uVar7 = *(ulong *)(lVar6 + 0x10);
  if (uVar7 != 0) {
    uVar8 = 0;
    pbVar9 = (byte *)(lVar6 + 0x31);
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10346aed4);
        (*pcVar1)();
      }
      if ((*pbVar9 & 1) == 0) {
        uVar4 = *(undefined8 *)(pbVar9 + -9);
        uVar5 = *(undefined8 *)(pbVar9 + -0x11);
        func_0x000107c61434(uVar4);
        uVar2 = uVar5;
        func_0x000107c5fadc(uVar5,uVar4);
        uVar3 = uStack_68;
        func_0x000107c49fa4();
        func_0x000107c61170(uVar2);
        if ((uVar3 & 1) != 0) {
          func_0x000107c615e8(uStack_68);
          goto LAB_10346aea8;
        }
        func_0x000107c6142c(uVar4);
      }
      uVar8 = uVar8 + 1;
      pbVar9 = pbVar9 + 0x18;
    } while (uVar7 != uVar8);
  }
  func_0x000107c615e8(uStack_68);
  uVar5 = 0;
  uVar4 = 0;
LAB_10346aea8:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar5;
  return auVar10;
}



/* Entry: 10346aed4; end: 10346af47; -[SCLensPreviewActionInterceptor shouldIntercept] */

undefined8 FUN_10346aed4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_10346ace8();
  if (lVar1 == 0) {
    FUN_10346adbc();
    func_0x000107c61170(param_1);
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c6142c(0);
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
  }
  else {
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10346af48; end: 10346b00f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346af48(long param_1,long param_2)

{
  undefined8 uStack_38;
  
  FUN_10346ace8();
  if (param_1 == 0) {
    FUN_10346adbc();
    if (param_2 == 0) {
      return;
    }
    func_0x0001000d224c(&uStack_38);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c4efbc(uStack_38);
    func_0x000107c615e8(uStack_38);
  }
  else {
    func_0x0001000d224c(&uStack_38);
    func_0x000107c4efa4(uStack_38);
    func_0x000107c615e8(uStack_38);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10346b010; end: 10346b037; -[SCLensPreviewActionInterceptor triggerIntercept] */

void FUN_10346b010(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10346af48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10346b038; end: 10346b10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10346b038(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f6ea20);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_38);
    uVar3 = uStack_38;
    uVar2 = uStack_38;
    func_0x000107c4a000(uStack_38,param_2,lVar1,0);
    func_0x000107c615e8(uVar3);
    if ((int)uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x0001000d224c(&uStack_38);
      uVar3 = uStack_38;
      func_0x000107c5b0e8();
      if ((int)uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uStack_38;
        func_0x000107c4f160(uStack_38);
      }
      func_0x000107c615e8(uStack_38);
    }
    func_0x000107c61170(lVar1);
  }
  return uVar3;
}



/* Entry: 10346b110; end: 10346b143;  */

void FUN_10346b110(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10346b144; end: 10346b1db; -[SCLensPreviewActionInterceptor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010346b160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010346b180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010346b164) */
/* WARNING: Removing unreachable block (ram,0x00010346b184) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346b144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6ea00));
  return;
}



/* Entry: 10346b1dc; end: 10346b1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10346b1dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f6ea20);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_38);
    uVar3 = uStack_38;
    uVar2 = uStack_38;
    func_0x000107c4a000(uStack_38,param_2,lVar1,0);
    func_0x000107c615e8(uVar3);
    if ((int)uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x0001000d224c(&uStack_38);
      uVar3 = uStack_38;
      func_0x000107c5b0e8();
      if ((int)uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uStack_38;
        func_0x000107c4f160(uStack_38);
      }
      func_0x000107c615e8(uStack_38);
    }
    func_0x000107c61170(lVar1);
  }
  return uVar3;
}



/* Entry: 10346b1e0; end: 10346b1ff;  */

void FUN_10346b1e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128dc5a0);
  return;
}



/* Entry: 10346b200; end: 10346b27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346b200(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f6e9f8);
    *(undefined8 *)(lVar1 + _DAT_112f6e9f8) = uVar3;
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10346b280; end: 10346b5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346b280(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x000107c613fc();
  uVar2 = 0x112f6ea60;
  func_0x0001000285a8(0x112f6ea60,&UNK_10dbcbb20);
  func_0x000107c613fc();
  pcVar3 = FUN_10346b5d8;
  func_0x0001000bdd8c(FUN_10346b5d8,0);
  func_0x000107c613fc(uVar2,0x18,7);
  uVar2 = 0x10346b5f0;
  func_0x0001000bdd8c(0x10346b5f0,0);
  uVar10 = param_6;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar4 = uVar10;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  puVar5 = &UNK_1106593f8;
  func_0x000107c613fc(&UNK_1106593f8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  uVar10 = 0x112f6ea68;
  func_0x0001000285a8(0x112f6ea68,&UNK_10dbcbb28);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar6 = FUN_10346b768;
  func_0x0001000bdd8c(FUN_10346b768,puVar5);
  puVar5 = &UNK_110659420;
  func_0x000107c613fc(&UNK_110659420,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  func_0x000107c613fc(uVar10,0x18,7);
  func_0x000107c61174();
  pcVar7 = FUN_10346b854;
  func_0x0001000bdd8c(FUN_10346b854,puVar5);
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  uVar11 = *(undefined8 *)(param_2 + _DAT_1130385c0);
  uVar12 = *(undefined8 *)(param_3 + _DAT_113082420);
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  func_0x000107c61174(uVar11);
  uVar10 = param_5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar8 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  lVar9 = 0;
  func_0x00010346c550();
  func_0x000107c613fc();
  func_0x000107c61614(lVar9 + 0x18,0);
  *(undefined8 *)(lVar9 + 0x38) = 0;
  uVar10 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + 0x58) = uVar10;
  *(undefined2 *)(lVar9 + 0x60) = 0x100;
  *(undefined1 *)(lVar9 + 0x62) = 0;
  *(undefined8 *)(lVar9 + 0x10) = uVar12;
  *(undefined8 *)(lVar9 + 0x20) = uVar8;
  *(code **)(lVar9 + 0x28) = pcVar3;
  *(undefined8 *)(lVar9 + 0x30) = uVar2;
  *(code **)(lVar9 + 0x40) = pcVar6;
  *(code **)(lVar9 + 0x48) = pcVar7;
  *(bool *)(lVar9 + 0x50) = iVar1 != 0;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  FUN_10346bcc8(uVar11);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  *(long *)(unaff_x20 + 0x10) = lVar9;
  return;
}



/* Entry: 10346b5d8; end: 10346b5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346b5d8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  func_0x00010346b998();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f6eb20) = 0x3fc3333333333333;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f6eb28);
  puVar1[1] = 0x7fefffffffffffff;
  *puVar1 = 0x402e000000000000;
  plVar4 = &lStack_40;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 10346b600; end: 10346b67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346b600(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 in_register_00005028;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  func_0x00010346b998();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f6eb20) = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f6eb28);
  puVar1[1] = in_register_00005028;
  *puVar1 = param_3;
  plVar4 = &lStack_40;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 10346b680; end: 10346b767;  */

void FUN_10346b680(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 uStack_41;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_41 = (code)0x1;
    pcVar3 = (code *)&uStack_41;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar1 = param_2;
    func_0x000107c3d1a0(param_2);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    pcVar3 = (code *)0x10346b934;
    func_0x0001000bfde0(0x10346b934,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(param_2);
  }
  *param_1 = (long)pcVar3;
  return;
}



/* Entry: 10346b768; end: 10346b76f;  */

void FUN_10346b768(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined1 uStack_41;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_41 = (code)0x1;
    pcVar3 = (code *)&uStack_41;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar1 = lVar4;
    func_0x000107c3d1a0(lVar4);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    pcVar3 = (code *)0x10346b934;
    func_0x0001000bfde0(0x10346b934,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar4);
  }
  *param_1 = (long)pcVar3;
  return;
}



/* Entry: 10346b770; end: 10346b853;  */

void FUN_10346b770(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 uStack_41;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_41 = (code)0x0;
    pcVar3 = (code *)&uStack_41;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar1 = param_2;
    func_0x000107c3d168(param_2);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    pcVar3 = FUN_10346b930;
    func_0x0001000bfde0(FUN_10346b930,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(param_2);
  }
  *param_1 = pcVar3;
  return;
}



/* Entry: 10346b854; end: 10346b85b;  */

void FUN_10346b854(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined1 uStack_41;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_41 = (code)0x0;
    pcVar3 = (code *)&uStack_41;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar1 = lVar4;
    func_0x000107c3d168(lVar4);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    pcVar3 = FUN_10346b930;
    func_0x0001000bfde0(FUN_10346b930,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(lVar4);
  }
  *param_1 = pcVar3;
  return;
}



/* Entry: 10346b85c; end: 10346b87f;  */

void FUN_10346b85c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10346b880; end: 10346b90f;  */

void FUN_10346b880(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_10346ba0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10346b910; end: 10346b92f;  */

void FUN_10346b910(void)

{
  func_0x000107c61168(&PTR_PTR_112f6eac0);
  return;
}



/* Entry: 10346b930; end: 10346b937;  */

void FUN_10346b930(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10346b938; end: 10346b9b7; -[_TtC25SCLensCarouselIntegration27LCLongPressGestureProcessor init] */

void FUN_10346b938(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LCLongPressGestureProcessor",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10346b964);
  (*pcVar1)();
}



/* Entry: 10346b9b8; end: 10346ba0b; -[_TtC25SCLensCarouselIntegration27LCLongPressGestureProcessor shouldFailForOffset:timeDifference:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10346b9b8(double param_1,double param_2,double param_3,long param_4)

{
  if (*(double *)(param_4 + _DAT_112f6eb20) <= param_3) {
    return false;
  }
  if (*(double *)(param_4 + _DAT_112f6eb28) < ABS(param_1)) {
    return true;
  }
  return ((double *)(param_4 + _DAT_112f6eb28))[1] < ABS(param_2);
}



/* Entry: 10346ba0c; end: 10346bac7;  */

void FUN_10346ba0c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lStack_38;
    func_0x000107c4c18c(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    func_0x000107c615f0(lVar2);
    func_0x000100bc7fa4(lVar1);
    func_0x000107c615e8(lVar2);
  }
  *(undefined1 *)(unaff_x20 + 0x62) = 1;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c615e8();
    *(undefined1 *)(unaff_x20 + 0x62) = 2;
    FUN_10346c000();
  }
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 10346bac8; end: 10346bbdf;  */

void FUN_10346bac8(code *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    lVar5 = 0;
    cVar1 = *(char *)(unaff_x20 + 0x62);
  }
  else {
    lVar5 = lStack_48;
    func_0x000107c4c18c(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    lVar2 = lVar5;
    func_0x000107c614f0(lVar5);
    func_0x000107c615f0(lVar5);
    func_0x000100bc7fa4(lVar2);
    func_0x000107c615e8(lVar5);
    cVar1 = *(char *)(unaff_x20 + 0x62);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(unaff_x20 + 0x62) = 0;
    uVar3 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
    func_0x000107c61574(uVar4);
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      lVar2 = unaff_x20 + 0x18;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c4ff38();
        func_0x000107c615e8(lVar2);
      }
    }
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  func_0x000107c615e8(lVar5);
  return;
}



/* Entry: 10346bbe0; end: 10346bbf3;  */

bool FUN_10346bbe0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10346bbf4; end: 10346bc9f;  */

void FUN_10346bbf4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10346bca0; end: 10346bcc7;  */

byte FUN_10346bca0(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2 | param_2[1] ^ param_1[1]) ^ 0xff) & 1;
}



/* Entry: 10346bcc8; end: 10346bebb;  */

void FUN_10346bcc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  if (puStack_70 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puStack_70;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_70);
  }
  puVar1 = &UNK_110659598;
  func_0x000107c613fc(&UNK_110659598,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  pcStack_50 = FUN_10346c858;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x10346bfb8;
  puStack_58 = &UNK_1106595b0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(puVar3);
  func_0x000107c6157c();
  func_0x000107c61574(puVar1);
  func_0x000107c4db94(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(puVar3);
  return;
}



/* Entry: 10346bebc; end: 10346bfff;  */

void FUN_10346bebc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if ((param_2 == 0) && (param_1 != 0)) {
      func_0x000107c61174();
      lVar1 = param_1;
      func_0x000107c4c0b8();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c61494();
        if (lVar2 != 0) {
          func_0x000107c61174(lVar1);
        }
        func_0x000107c61604(param_3 + 0x18,lVar2);
        func_0x000107c615e8(lVar2);
        if (*(char *)(param_3 + 0x62) == '\x01') {
          lVar2 = param_3 + 0x18;
          func_0x000107c61618();
          if (lVar2 != 0) {
            func_0x000107c615e8();
            *(undefined1 *)(param_3 + 0x62) = 2;
            FUN_10346c000();
          }
        }
        func_0x000107c61170(lVar1);
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10346c000; end: 10346c237;  */

void FUN_10346c000(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  func_0x000107c61574(uVar7);
  func_0x0001000d224c(&uStack_48);
  uVar1 = uStack_48;
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_1106594f8;
  func_0x000107c613fc(&UNK_1106594f8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10346c73c;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  puVar4 = &UNK_110659520;
  func_0x000107c613fc(&UNK_110659520,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10346c744;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c();
  uVar1 = 0x10346c768;
  func_0x00010487e4e0(0x10346c768,puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_48);
  uVar7 = uStack_48;
  func_0x0001006c733c(uStack_48);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uStack_48);
  plVar5 = (long *)&UNK_110659548;
  func_0x000107c613fc(&UNK_110659548,0x20,7);
  plVar5[2] = (long)FUN_10346c78c;
  plVar5[3] = unaff_x20;
  func_0x000107c6157c();
  pcVar6 = FUN_10346c794;
  func_0x0001000bfde0(FUN_10346c794,plVar5,&UNK_110659690);
  func_0x000107c61574(uVar7);
  func_0x000107c61574();
  FUN_10346c7d4();
  func_0x000104884898();
  func_0x000107c61574(pcVar6);
  puVar3 = &UNK_110659570;
  func_0x000107c613fc(&UNK_110659570,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10346c814;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  pcVar8 = *(code **)(*plVar5 + 0x60);
  func_0x000107c6157c();
  pcVar6 = FUN_10346c820;
  puVar4 = puVar3;
  (*pcVar8)(FUN_10346c820);
  func_0x000107c61574(plVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar8 = *(code **)(puVar4 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar8)();
  func_0x000107c615e8(pcVar6);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 10346c238; end: 10346c39b;  */

void FUN_10346c238(byte param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_2 + 0x18;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 == 2) {
      param_1 = *(byte *)(param_2 + 0x60);
      *(byte *)(param_2 + 0x60) = param_1;
    }
    else {
      *(byte *)(param_2 + 0x60) = param_1 & 1;
    }
    if ((param_1 & 1) == 0) {
      uVar4 = 0;
      uVar3 = 0x7fefffffffffffff;
    }
    else {
      bVar1 = *(char *)(param_2 + 0x61) == '\0';
      uVar3 = 0x4024000000000000;
      if (bVar1) {
        uVar3 = 0x7fefffffffffffff;
      }
      uVar4 = 0x3fd3333333333333;
      if (bVar1) {
        uVar4 = 0;
      }
    }
    func_0x000107c52678(uVar3);
    func_0x000107c59d60(uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 10346c39c; end: 10346c3ff;  */

uint FUN_10346c39c(ulong param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if ((param_1 & 1) == 0) {
    uVar3 = 0;
    uVar1 = 0x100;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x10);
    if (lVar2 - 1U < 2 || lVar2 == 8) {
      uVar1 = 0x100;
      if (((param_2 & 1) == 0) && (uVar1 = 0x100, *(char *)(param_3 + 0x50) == '\0')) {
        uVar1 = 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (lVar2 == 0) {
        uVar3 = param_2 ^ 1;
      }
      uVar1 = 0x100;
    }
  }
  return uVar1 | uVar3 & 1;
}



/* Entry: 10346c400; end: 10346c4db;  */

void FUN_10346c400(uint param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_38;
  
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  *(byte *)(unaff_x20 + 0x61) = (byte)(param_1 >> 8) & 1;
  if ((param_1 & 1) == 0) {
    lStack_38 = 0;
    lVar3 = *(long *)(unaff_x20 + 0x38);
    if (lVar3 == 0) goto LAB_10346c488;
LAB_10346c454:
    lVar4 = lStack_38;
    if (lVar3 != lStack_38) {
      func_0x000107c4ff38(lVar1);
      if (lStack_38 != 0) goto LAB_10346c48c;
      goto LAB_10346c498;
    }
  }
  else {
    func_0x0001000d224c(&lStack_38);
    lVar3 = *(long *)(unaff_x20 + 0x38);
    if (lVar3 != 0) goto LAB_10346c454;
LAB_10346c488:
    lVar4 = lVar1;
    if (lStack_38 == 0) goto LAB_10346c4c0;
LAB_10346c48c:
    func_0x000107c3d6f8(lVar1,param_2,lStack_38);
    lVar4 = lStack_38;
LAB_10346c498:
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar4;
    func_0x000107c615e8(uVar2);
    func_0x000107c615f0(lVar4);
    func_0x00010346c2f4(2);
  }
  func_0x000107c615e8(lVar1);
LAB_10346c4c0:
  func_0x000107c615e8(lVar4);
  return;
}



/* Entry: 10346c4dc; end: 10346c56f;  */

void FUN_10346c4dc(void)

{
  long unaff_x20;
  
  FUN_10346c718(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10346c570; end: 10346c6d7;  */

int FUN_10346c570(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10346c5ec;
        goto LAB_10346c5d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10346c5d0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10346c5ec:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10346c6d8; end: 10346c717;  */

void FUN_10346c6d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f6ec58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcbc90;
  func_0x000107c61520(&UNK_10dbcbc90,&UNK_1106594d8);
  puRam0000000112f6ec58 = puVar1;
  return;
}



/* Entry: 10346c718; end: 10346c73b;  */

undefined8 FUN_10346c718(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10346c73c; end: 10346c743;  */

void FUN_10346c73c(byte param_1)

{
  bool bVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 == 2) {
      param_1 = *(byte *)(unaff_x20 + 0x60);
      *(byte *)(unaff_x20 + 0x60) = param_1;
    }
    else {
      *(byte *)(unaff_x20 + 0x60) = param_1 & 1;
    }
    if ((param_1 & 1) == 0) {
      uVar4 = 0;
      uVar3 = 0x7fefffffffffffff;
    }
    else {
      bVar1 = *(char *)(unaff_x20 + 0x61) == '\0';
      uVar3 = 0x4024000000000000;
      if (bVar1) {
        uVar3 = 0x7fefffffffffffff;
      }
      uVar4 = 0x3fd3333333333333;
      if (bVar1) {
        uVar4 = 0;
      }
    }
    func_0x000107c52678(uVar3);
    func_0x000107c59d60(uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 10346c744; end: 10346c78b;  */

void FUN_10346c744(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 & 1);
  return;
}



/* Entry: 10346c78c; end: 10346c793;  */

uint FUN_10346c78c(ulong param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    uVar3 = 0;
    uVar1 = 0x100;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 - 1U < 2 || lVar2 == 8) {
      uVar1 = 0x100;
      if (((param_2 & 1) == 0) && (uVar1 = 0x100, *(char *)(unaff_x20 + 0x50) == '\0')) {
        uVar1 = 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (lVar2 == 0) {
        uVar3 = param_2 ^ 1;
      }
      uVar1 = 0x100;
    }
  }
  return uVar1 | uVar3 & 1;
}



/* Entry: 10346c794; end: 10346c7d3;  */

void FUN_10346c794(byte *param_1,byte *param_2)

{
  ushort uVar1;
  long unaff_x20;
  
  uVar1 = (ushort)*param_2;
  (**(code **)(unaff_x20 + 0x10))(*param_2,param_2[1]);
  *param_1 = (byte)uVar1 & 1;
  param_1[1] = (byte)(uVar1 >> 8) & 1;
  return;
}



/* Entry: 10346c7d4; end: 10346c813;  */

void FUN_10346c7d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f6ec60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcbcc0;
  func_0x000107c61520(&UNK_10dbcbcc0,&UNK_110659690);
  puRam0000000112f6ec60 = puVar1;
  return;
}



/* Entry: 10346c814; end: 10346c81f;  */

void FUN_10346c814(uint param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_38;
  
  lVar1 = unaff_x20 + 0x18;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  *(byte *)(unaff_x20 + 0x61) = (byte)(param_1 >> 8) & 1;
  if ((param_1 & 1) == 0) {
    lStack_38 = 0;
    lVar3 = *(long *)(unaff_x20 + 0x38);
    if (lVar3 == 0) goto LAB_10346c488;
LAB_10346c454:
    lVar4 = lStack_38;
    if (lVar3 != lStack_38) {
      func_0x000107c4ff38(lVar1);
      if (lStack_38 != 0) goto LAB_10346c48c;
      goto LAB_10346c498;
    }
  }
  else {
    func_0x0001000d224c(&lStack_38);
    lVar3 = *(long *)(unaff_x20 + 0x38);
    if (lVar3 != 0) goto LAB_10346c454;
LAB_10346c488:
    lVar4 = lVar1;
    if (lStack_38 == 0) goto LAB_10346c4c0;
LAB_10346c48c:
    func_0x000107c3d6f8(lVar1,param_2,lStack_38);
    lVar4 = lStack_38;
LAB_10346c498:
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar4;
    func_0x000107c615e8(uVar2);
    func_0x000107c615f0(lVar4);
    func_0x00010346c2f4(2);
  }
  func_0x000107c615e8(lVar1);
LAB_10346c4c0:
  func_0x000107c615e8(lVar4);
  return;
}



/* Entry: 10346c820; end: 10346c857;  */

void FUN_10346c820(byte *param_1)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = 0x100;
  if (param_1[1] == 0) {
    uVar1 = 0;
  }
  (**(code **)(unaff_x20 + 0x10))(uVar1 | *param_1);
  return;
}



/* Entry: 10346c858; end: 10346c9e7;  */

void FUN_10346c858(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    ppuVar4 = &puStack_70;
    lVar2 = param_1;
    func_0x000107c615f0();
    func_0x000107c403c8();
    func_0x000107c61180();
    puVar3 = &UNK_1106595e8;
    func_0x000107c613fc(&UNK_1106595e8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,uVar1);
    uStack_50 = 0x10346c87c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_102a2a198;
    puStack_58 = &UNK_110659600;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c5dc68(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10346c9e8; end: 10346ca5f; -[_TtC25SCLensCarouselIntegration25LensCarouselCameraFeature activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346c9e8(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 10346ca60; end: 10346cabb; -[_TtC25SCLensCarouselIntegration25LensCarouselCameraFeature init] */

void FUN_10346ca60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselCameraFeature",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10346ca8c);
  (*pcVar1)();
}



/* Entry: 10346cabc; end: 10346cacb; -[_TtC25SCLensCarouselIntegration25LensCarouselCameraFeature .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346cabc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6ec68));
  return;
}



/* Entry: 10346cacc; end: 10346caeb;  */

void FUN_10346cacc(void)

{
  func_0x000107c61168(&PTR_PTR_112f6ecb0);
  return;
}



/* Entry: 10346caec; end: 10346cb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346caec(void)

{
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x000104875e28(auStack_58);
  if (lStack_40 == 0) {
    FUN_10346cb68(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x10))(lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 10346cb68; end: 10346cbaf;  */

undefined8 FUN_10346cb68(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f6ed18;
  func_0x0001000285a8(0x112f6ed18,&UNK_10dbcbd10);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10346cbb0; end: 10346cc0b; -[_TtC25SCLensCarouselIntegration41LensCarouselOnCameraFeatureProviderPlugin init] */

void FUN_10346cbb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselOnCameraFeatureProviderPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10346cbdc);
  (*pcVar1)();
}



/* Entry: 10346cc0c; end: 10346cca3; -[_TtC25SCLensCarouselIntegration41LensCarouselOnCameraFeatureProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346cc0c(long param_1)

{
  func_0x000102a3d2c4(param_1 + _DAT_112f6ed20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6ed10));
  return;
}



/* Entry: 10346cca4; end: 10346ccbf;  */

undefined8 FUN_10346cca4(void)

{
  return 1;
}



/* Entry: 10346ccc0; end: 10346d01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346ccc0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = *(long *)(lStack_68 + _DAT_1130827c8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar13 = *(undefined8 *)(lVar1 + _DAT_113082768);
  func_0x000107c6157c(uVar13);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&uStack_70);
  uVar2 = uStack_70;
  func_0x000107c4b590();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar3 = uStack_78;
  func_0x000107c4af04();
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar4 = uStack_80;
  func_0x000107c4b57c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&uStack_88);
  uVar5 = uStack_88;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_88);
  func_0x000100083b20(&lStack_90);
  uVar6 = *(undefined8 *)(lStack_90 + _DAT_113093a90);
  func_0x000107c61174();
  func_0x000107c61170(lStack_90);
  func_0x000100083b20(&pcStack_98);
  pcVar7 = pcStack_98;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(pcStack_98);
  func_0x000100083b20(&uStack_a0);
  uVar8 = uStack_a0;
  func_0x000107c4b070();
  func_0x000107c61180();
  func_0x000107c61170(uStack_a0);
  func_0x000100083b20(&uStack_a8);
  uVar9 = uStack_a8;
  func_0x000107c4af50();
  func_0x000107c61180();
  func_0x000107c61170(uStack_a8);
  lVar10 = 0;
  FUN_10346dad8();
  lVar1 = lVar10;
  func_0x000107c613fc();
  *(undefined2 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x72) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x10) = uVar13;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x38) = uVar6;
  *(char **)(lVar1 + 0x40) = pcVar7;
  *(undefined8 *)(lVar1 + 0x48) = uVar8;
  *(undefined8 *)(lVar1 + 0x50) = uVar9;
  func_0x000107c6157c(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(uVar9);
  pcVar11 = pcVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pcVar11 == (char *)0x0) {
    pcVar12 = 
    "init(lensCarouselSettings:lensesCameraViewControllerVisibilityProvider:lensCarouselRestorationStateProvider:lensesApplicationStateProvider:lensCarouselManager:appLifecycleManager:lensPerformerProvider:lensDisplayableStateProvider:lensCarouselUIActivationParameters:)"
    ;
    func_0x0001000c10c0();
  }
  else {
    pcVar12 = pcVar11;
    func_0x000107c4c18c();
  }
  func_0x000107c61180();
  *(char **)(lVar1 + 0x68) = pcVar12;
  FUN_10346d330();
  func_0x000107c61574(uVar13);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(pcVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(uVar9);
  func_0x000107c615e8(pcVar11);
  param_1[3] = lVar10;
  param_1[4] = (long)&PTR_DAT_110659840;
  *param_1 = lVar1;
  return;
}



/* Entry: 10346d020; end: 10346d04f;  */

void FUN_10346d020(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10346d050; end: 10346d0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10346d050(ulong param_1)

{
  long alStack_58 [3];
  long lStack_40;
  long lStack_38;
  
  func_0x00010485773c();
  if ((param_1 & 1) != 0) {
    func_0x000100083b20(alStack_58);
    if (alStack_58[0] != 0) {
      func_0x000104875e28(alStack_58);
      if (lStack_40 == 0) {
        func_0x000107c61170(alStack_58[0]);
        FUN_10346cb68(alStack_58);
      }
      else {
        func_0x0001000a8868(alStack_58,lStack_40);
        (**(code **)(lStack_38 + 0x10))(lStack_40,lStack_38);
        func_0x000107c61170(alStack_58[0]);
        func_0x0001000834e4(alStack_58);
      }
    }
  }
  return ZEXT816(0);
}



/* Entry: 10346d100; end: 10346d13f;  */

void FUN_10346d100(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10346d140; end: 10346d19f;  */

undefined ** FUN_10346d140(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10346d1a0; end: 10346d32f;  */

long FUN_10346d1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined2 *)(unaff_x20 + 0x70) = 0;
  *(undefined1 *)(unaff_x20 + 0x72) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(char **)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_9);
  pcVar1 = param_7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(lensCarouselSettings:lensesCameraViewControllerVisibilityProvider:lensCarouselRestorationStateProvider:lensesApplicationStateProvider:lensCarouselManager:appLifecycleManager:lensPerformerProvider:lensDisplayableStateProvider:lensCarouselUIActivationParameters:)"
    ;
    func_0x0001000c10c0();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
  }
  func_0x000107c61180();
  *(char **)(unaff_x20 + 0x68) = pcVar2;
  FUN_10346d330();
  func_0x000107c61574(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(pcVar1);
  return unaff_x20;
}



/* Entry: 10346d330; end: 10346d427;  */

void FUN_10346d330(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1 = &UNK_110659868;
  func_0x000107c613fc(&UNK_110659868,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uStack_50 = 0x10346e6c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100b5ebe4;
  puStack_58 = &UNK_110659a38;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x000107c615f0(uVar4);
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  func_0x000107c43814(puStack_70);
  func_0x000107c615e8(puVar1);
  func_0x000107c5dc68(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10346d428; end: 10346d53b;  */

void FUN_10346d428(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = uVar2;
  func_0x000107c614f0(uVar2);
  func_0x000107c615f0(uVar2);
  func_0x000100bc7fa4(uVar1);
  func_0x000107c615e8(uVar2);
  *(undefined1 *)(unaff_x20 + 0x72) = 1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = uVar2;
  func_0x000107c614f0(uVar2);
  func_0x000107c615f0(uVar2);
  func_0x000100bc7fa4(uVar1);
  func_0x000107c615e8(uVar2);
  if ((*(long *)(unaff_x20 + 0x60) != 0) && (*(char *)(unaff_x20 + 0x72) == '\x01')) {
    func_0x00010346d70c();
    FUN_10346d7b8();
    *(undefined1 *)(unaff_x20 + 0x72) = 0;
  }
  return;
}



/* Entry: 10346d53c; end: 10346d5cf;  */

void FUN_10346d53c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10346d5d0; end: 10346d60f;  */

void FUN_10346d5d0(void)

{
  FUN_10346d428();
  return;
}



/* Entry: 10346d610; end: 10346d7b7;  */

void FUN_10346d610(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        uVar1 = *(undefined8 *)(param_3 + 0x60);
        *(long *)(param_3 + 0x60) = param_1;
        func_0x000107c615f0();
        func_0x000107c615e8(uVar1);
        uVar2 = *(undefined8 *)(param_3 + 0x68);
        uVar1 = uVar2;
        func_0x000107c614f0(uVar2);
        func_0x000107c615f0(uVar2);
        func_0x000100bc7fa4(uVar1);
        func_0x000107c615e8(uVar2);
        if (*(long *)(param_3 + 0x60) == 0) {
          func_0x000107c61574(param_3);
          func_0x000107c615e8(param_1);
          return;
        }
        if ((*(byte *)(param_3 + 0x72) & 1) == 0) {
          func_0x000107c615e8(param_1);
        }
        else {
          func_0x00010346d70c();
          FUN_10346d7b8();
          func_0x000107c615e8(param_1);
          *(undefined1 *)(param_3 + 0x72) = 0;
        }
      }
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10346d7b8; end: 10346dad7;  */

void FUN_10346d7b8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = uVar8;
  func_0x000107c614f0(uVar8);
  func_0x000107c615f0(uVar8);
  func_0x000100bc7fa4(uVar3);
  func_0x000107c615e8(uVar8);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar3 = *puVar2;
    func_0x000107c61174(uVar3);
    uVar8 = 0xd00000000000002d;
    func_0x000100029b28(0xd00000000000002d,0x800000010f152bc0);
    func_0x000107c61170(uVar3);
    func_0x0001000d224c(&puStack_98);
    puVar5 = puStack_98;
    puVar4 = puStack_98;
    func_0x000107c43814();
    func_0x000107c615e8(puVar5);
    if ((int)puVar4 == 0) {
      func_0x0001000d224c(&puStack_98);
      puVar5 = puStack_98;
      func_0x000107c4ceb4();
      func_0x000107c615e8(puStack_98);
      if ((int)puVar5 != 0) {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x68);
        uVar3 = uVar9;
        func_0x000107c614f0(uVar9);
        puVar5 = &UNK_110659868;
        func_0x000107c613fc(&UNK_110659868,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        puVar4 = &UNK_1106598e0;
        func_0x000107c613fc(&UNK_1106598e0,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar5;
        *(undefined8 *)(puVar4 + 0x18) = uVar8;
        func_0x000107c615f0(uVar9);
        func_0x000107c6157c(puVar5);
        func_0x00010090569c(0x10346e708,puVar4,uVar3);
        func_0x000107c615e8(puVar1);
        func_0x000107c61574(puVar5);
        func_0x000107c615e8(uVar9);
        func_0x000107c61574(puVar4);
        return;
      }
      func_0x000100079360(0);
      uVar9 = 0;
      func_0x0001048b34d8(0,4,0x38);
      uVar6 = 0;
      func_0x0001000aad1c(0);
      func_0x0001000aad3c();
      uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar3 = uVar10;
      func_0x000107c614f0(uVar10);
      func_0x000107c615f0(uVar10);
      func_0x000100bcb214(uVar3);
      func_0x000107c615e8(uVar10);
      puVar5 = &UNK_110659868;
      func_0x000107c613fc(&UNK_110659868,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      puVar4 = &UNK_110659890;
      func_0x000107c613fc(&UNK_110659890,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar5;
      *(undefined8 *)(puVar4 + 0x18) = uVar8;
      pcStack_78 = FUN_10346e5e8;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_1106598a8;
      ppuVar7 = &puStack_98;
      puStack_70 = puVar4;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_70);
      func_0x000107c5e084(puVar1);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar6);
    }
    else {
      FUN_10346e354();
      func_0x000107c61428(puVar2,&puStack_98,0,0);
      uVar3 = *puVar2;
      func_0x000107c61174(uVar3);
      func_0x000100069b5c(uVar8);
      func_0x000107c615e8(puVar1);
    }
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10346dad8; end: 10346daf7;  */

void FUN_10346dad8(void)

{
  func_0x000107c61168(&PTR_PTR_112f6ee80);
  return;
}



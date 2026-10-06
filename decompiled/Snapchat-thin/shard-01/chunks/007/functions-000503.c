/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014529a0; end: 101452aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014529a0(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x00010008a7c8(&lStack_40);
  if (lStack_40 != 0) {
    func_0x000100083b20(&lStack_38);
    func_0x000107c61574(lStack_40);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_38 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61550();
      if (((ulong)puVar3 >> 0x3e != 0) || (((ulong)puVar2 & 1) == 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar2 = puVar3;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        FUN_101452b8c(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_101452b8c(uVar4,uVar1 + 1,1,puVar3);
        uVar4 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(long *)(uVar4 + uVar1 * 8 + 0x20) = lStack_38;
    }
  }
  return;
}



/* Entry: 101452aa8; end: 101452b07; -[_TtC40SCCremaLegacyBackdoorScopePluginRegistry39SCCremaLegacyBackdoorPluginSaberService buildSaberPlugins] */

void FUN_101452aa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014529a0();
  func_0x000107c61170(param_1);
  uVar2 = 0x112d9fd00;
  func_0x0001000285a8(0x112d9fd00,&UNK_10d942068);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101452b08; end: 101452b67; -[_TtC40SCCremaLegacyBackdoorScopePluginRegistry39SCCremaLegacyBackdoorPluginSaberService init] */

void FUN_101452b08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCremaLegacyBackdoorScopePluginRegistry.SCCremaLegacyBackdoorPluginSaberService"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101452b34);
  (*pcVar1)();
}



/* Entry: 101452b68; end: 101452b8b; -[_TtC40SCCremaLegacyBackdoorScopePluginRegistry39SCCremaLegacyBackdoorPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101452b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9fcd0));
  return;
}



/* Entry: 101452b8c; end: 101452cb3;  */

ulong FUN_101452b8c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101452cb4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101452cc4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101452cb0);
      (*pcVar1)();
    }
    FUN_101452d44(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101452cb4; end: 101452cc3;  */

undefined1  [16] FUN_101452cb4(void)

{
  return ZEXT816(0x1103bc5d0);
}



/* Entry: 101452cc4; end: 101452d43;  */

undefined * FUN_101452cc4(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101452b78();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101452d44; end: 101452e67;  */

long FUN_101452d44(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101452e64);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101452e68);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d9fd00;
        func_0x0001000285a8(0x112d9fd00,&UNK_10d942068);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d9fd00;
      func_0x0001000285a8(0x112d9fd00,&UNK_10d942068);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101452e60);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101452e68; end: 101452e97;  */

undefined1  [16] FUN_101452e68(void)

{
  return ZEXT816(0x1103bc698);
}



/* Entry: 101452e98; end: 101452f57;  */

void FUN_101452e98(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_40 = FUN_101452f68;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101452f84;
  puStack_48 = &UNK_1103bc790;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x0001000931c4(0);
  func_0x000107c610f8();
  func_0x0001032b5fb4(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 101452f58; end: 101452f67;  */

undefined1  [16] FUN_101452f58(void)

{
  return ZEXT816(0x1103bc780);
}



/* Entry: 101452f68; end: 101452f83;  */

void FUN_101452f68(void)

{
  func_0x000107c610f8(PTR_PTR_1126a7000);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101452f84; end: 101452fbb;  */

void FUN_101452f84(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101452fbc; end: 101452ff7;  */

void FUN_101452fbc(long param_1,long param_2)

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



/* Entry: 101452ff8; end: 10145304b;  */

void FUN_101452ff8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000100923498(0);
  func_0x000107c610f8();
  func_0x0001032b60ec(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10145304c; end: 101453053;  */

void FUN_10145304c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000100923498(0);
  func_0x000107c610f8();
  func_0x0001032b60ec(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101453054; end: 101453097;  */

void FUN_101453054(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_101453294();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103bc878;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101453098; end: 10145309f;  */

void FUN_101453098(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101453294();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103bc878;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1014530a0; end: 1014530cf;  */

void FUN_1014530a0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 1014530d0; end: 1014530e7;  */

void FUN_1014530d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014530e8,0,0);
  return;
}



/* Entry: 1014530e8; end: 101453167;  */

void FUN_1014530e8(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000107c4dcf8(uVar1);
    func_0x000107c61170(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101453138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101453168; end: 10145317b;  */

void FUN_101453168(void)

{
  return;
}



/* Entry: 10145317c; end: 1014531ef;  */

/* WARNING: Possible PIC construction at 0x0001014531d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014531d8) */

void FUN_10145317c(void)

{
  func_0x000107c6157c();
  func_0x0001001ca524(3,0,0x98,4,0,0,&UNK_10d9422f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 1014531f0; end: 1014531f7;  */

void FUN_1014531f0(void)

{
  return;
}



/* Entry: 1014531f8; end: 101453283;  */

void FUN_1014531f8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61574(uVar1);
  func_0x000100083b20(&uStack_28);
  func_0x000107c4dc8c(uStack_28);
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 101453284; end: 101453293;  */

undefined1  [16] FUN_101453284(void)

{
  return ZEXT816(0x1103bc8e0);
}



/* Entry: 101453294; end: 1014532b3;  */

void FUN_101453294(void)

{
  func_0x000107c61168(&PTR_PTR_112d9fd88);
  return;
}



/* Entry: 1014532b4; end: 101453307;  */

void FUN_1014532b4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101453308;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014530e8,0,0);
  return;
}



/* Entry: 101453308; end: 101453343;  */

void FUN_101453308(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101453340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101453344; end: 101453383;  */

undefined1  [16] FUN_101453344(void)

{
  return ZEXT816(0x1103bc910);
}



/* Entry: 101453384; end: 1014533a7;  */

void FUN_101453384(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014533a8; end: 10145346b;  */

long FUN_1014533a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100c8f50c();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x000100c8f52c(0);
  func_0x000107c613fc();
  FUN_100c8f56c(uVar1,FUN_100c9507c,0,uVar2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  lVar3 = 0;
  FUN_100c8f6c4();
  func_0x000107c613fc();
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x10) = puVar4;
  *(undefined1 *)(lVar3 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x28) = lVar3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return unaff_x20;
}



/* Entry: 10145346c; end: 1014534a7;  */

void FUN_10145346c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014534a8; end: 1014534b7;  */

undefined1  [16] FUN_1014534a8(void)

{
  return ZEXT816(0x1103bca18);
}



/* Entry: 1014534b8; end: 1014534e3;  */

void FUN_1014534b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014534e4; end: 10145356f;  */

long FUN_1014534e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar1 = unaff_x20;
  func_0x000100c8f54c();
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100c8f5e4();
  *(undefined **)(lVar1 + 0x18) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return unaff_x20;
}



/* Entry: 101453570; end: 1014535eb;  */

undefined1  [16] FUN_101453570(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  auVar1._8_8_ = 0x800000010ef81430;
  auVar1._0_8_ = 0xd000000000000022;
  return auVar1;
}



/* Entry: 1014535ec; end: 10145361f;  */

void FUN_1014535ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101453620; end: 10145363f;  */

void FUN_101453620(void)

{
  FUN_100c8f81c();
  return;
}



/* Entry: 101453640; end: 10145379f;  */

void FUN_101453640(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  
  func_0x0001000285a8(0x112da00d0,&UNK_10d942560);
  lVar12 = *unaff_x20;
  lVar5 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar12 || lVar1 + uVar6 * 8 <= lVar5 + 0x40U) {
      func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar7 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar12 + 0x40);
    lVar9 = lVar7;
    if (uVar6 == 0) goto LAB_101453718;
    do {
      uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar10 * 0x10);
        uVar11 = *puVar2;
        uVar3 = *(undefined1 *)(puVar2 + 1);
        *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar10 * 8);
        puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar10 * 0x10);
        *puVar2 = uVar11;
        *(undefined1 *)(puVar2 + 1) = uVar3;
        lVar9 = lVar7;
        if (uVar6 != 0) break;
LAB_101453718:
        do {
          lVar7 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014537a0);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar7) goto LAB_101453780;
          uVar6 = *(ulong *)(lVar1 + lVar7 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 - 1 & uVar6;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 * 0x40;
      }
    } while( true );
  }
LAB_101453780:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 1014537a0; end: 10145385b;  */

undefined1  [16] FUN_1014537a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar1,uVar2);
  auVar3._8_8_ = 0x800000010ef81430;
  auVar3._0_8_ = 0xd000000000000022;
  return auVar3;
}



/* Entry: 10145385c; end: 1014538bb;  */

void FUN_10145385c(void)

{
  func_0x000100c92f48();
  return;
}



/* Entry: 1014538bc; end: 1014538cb;  */

void FUN_1014538bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014538cc; end: 1014539c7;  */

void FUN_1014538cc(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined8 uStack_70;
  code *pcStack_68;
  
  lVar3 = *(long *)(param_7 + -8);
  uVar1 = param_5;
  uStack_70 = param_9;
  pcStack_68 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  FUN_1014539c8(param_4,uVar1);
  uVar1 = param_4;
  func_0x000107c60568();
  uVar2 = param_4;
  func_0x000107c6056c(param_4,param_5);
  func_0x000107c61574(param_4);
  func_0x000107c5fabc(uVar1,uVar2,param_5);
  (*pcStack_68)(param_1);
  if (unaff_x21 != 0) {
    (**(code **)(lVar3 + 0x20))
              (uStack_70,(long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7);
  }
  return;
}



/* Entry: 1014539c8; end: 101453aa7;  */

void FUN_1014539c8(undefined8 ***param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuStack_38;
  
  pppuVar1 = param_1;
  FUN_101453aa8();
  if (pppuVar1 == (undefined8 ***)0x0) {
    pppuVar1 = (undefined8 ***)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 ***)0x7fffffffffffffff < param_1) {
      pppuVar1 = param_1;
    }
    func_0x000107c611a4(pppuVar1);
    pppuVar2 = param_1;
    FUN_101453aa8(param_1,param_2);
    if (pppuVar2 == (undefined8 ***)0x0) {
      ppuStack_38 = param_1;
      func_0x000107c60328();
      func_0x000107c61434(param_1);
      puVar3 = PTR___ss12_ArrayBufferVyxGSTsMc_11034e550;
      func_0x000107c61520(PTR___ss12_ArrayBufferVyxGSTsMc_11034e550,pppuVar2);
      pppuVar4 = &ppuStack_38;
      func_0x000107c6039c(pppuVar4,param_2,pppuVar2,puVar3);
      func_0x000107c6157c();
      func_0x000107c61188(pppuVar1,PTR___swiftEmptyArrayStorage_11034f1c8,pppuVar4,1);
      pppuVar2 = pppuVar4;
    }
    func_0x000107c6157c();
    func_0x000107c611a8(pppuVar1);
    func_0x000107c61574(pppuVar2);
  }
  return;
}



/* Entry: 101453aa8; end: 101453aeb;  */

void FUN_101453aa8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_1;
  }
  func_0x000107c61134(uVar1,PTR___swiftEmptyArrayStorage_11034f1c8);
  if (uVar1 != 0) {
    func_0x000107c6157c();
    func_0x000107c60570();
  }
  return;
}



/* Entry: 101453aec; end: 101453e43;  */

void FUN_101453aec(undefined8 param_1,undefined8 param_2,ulong *param_3,long param_4,long param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uStack_78;
  ulong uStack_70;
  
  func_0x000107c61428(param_3,&uStack_78,0x21,0);
  uVar7 = *param_3;
  uVar4 = uVar7;
  func_0x000107c61558();
  *param_3 = uVar7;
  uVar5 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_100c90630(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *param_3 = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  lVar6 = uVar4 + 1;
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100c90630(uVar7,lVar6,1,uVar5);
  }
  *(long *)(uVar7 + 0x10) = lVar6;
  puVar2 = (undefined8 *)(uVar7 + 0x20 + uVar4 * 0x10);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *param_3 = uVar7;
  func_0x000107c614a8(&uStack_78);
  lVar1 = param_5 + 1;
  if (SCARRY8(param_5,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101453c94);
    (*pcVar3)();
  }
  if (*(long *)(param_4 + 0x10) <= lVar1) {
    func_0x000107c61434(uVar7);
    (*param_6)(&uStack_78,param_8,param_9,param_10,param_11,uVar7 + 0x20,lVar6);
    func_0x000107c6142c(uVar7);
    return;
  }
  if (-1 < lVar1) {
    lVar6 = param_4 + lVar1 * 0x18;
    uVar4 = *(ulong *)(lVar6 + 0x20);
    uVar5 = *(ulong *)(lVar6 + 0x28);
    if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
      func_0x000107c6030c();
      uVar7 = uVar5;
      if ((uVar5 >> 0x3c & 1) == 0) {
        func_0x000107c61434(uVar5);
      }
      else {
        FUN_100edbde8();
      }
      if ((uVar7 >> 0x3d & 1) == 0) {
        if ((uVar4 >> 0x3c & 1) == 0) {
          func_0x000107c60358(uVar4,uVar7);
        }
      }
      else {
        uStack_70 = uVar7 & 0xffffffffffffff;
        uStack_78 = uVar4;
      }
      FUN_101453aec();
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar7);
      return;
    }
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101453c9c);
      (*pcVar3)();
    }
    FUN_101453aec(uVar4,uVar5,param_3,param_4,lVar1,param_6,param_7,param_8,param_9,param_10,
                  param_11);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101453c98);
  (*pcVar3)();
}



/* Entry: 101453e44; end: 101453ec3;  */

undefined1  [16] FUN_101453e44(void)

{
  return ZEXT816(0x1103bcb58);
}



/* Entry: 101453ec4; end: 101453f17;  */

void FUN_101453ec4(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5ad14(0x4024000000000000);
  func_0x000107c615e8(uStack_38);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 101453f18; end: 101453f7b;  */

void FUN_101453f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,uVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 101453f7c; end: 101453fab;  */

undefined1  [16] FUN_101453f7c(void)

{
  return ZEXT816(0x1103bcd90);
}



/* Entry: 101453fac; end: 101454037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101453fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_1130807f0);
  func_0x000107c615f0(lVar1);
  func_0x000107c61170(lStack_38);
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c4acc4(lVar1);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 101454038; end: 10145403f;  */

void FUN_101454038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101454040; end: 1014540ab;  */

void FUN_101454040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cStack_31;
  
  func_0x000100083b20(&cStack_31);
  if (cStack_31 == '\x01') {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000106082d8c(param_1,param_2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1014540ac; end: 1014540cf;  */

void FUN_1014540ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1014540d0; end: 101454113;  */

void FUN_1014540d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1014541dc();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103bcfb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101454114; end: 10145411b;  */

void FUN_101454114(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1014541dc();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103bcfb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10145411c; end: 10145414b;  */

void FUN_10145411c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10145414c; end: 10145416f;  */

void FUN_10145414c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101454170; end: 101454183;  */

void FUN_101454170(void)

{
  return;
}



/* Entry: 101454184; end: 1014541c3;  */

void FUN_101454184(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c3dfd8(uStack_28);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 1014541c4; end: 1014541db;  */

void FUN_1014541c4(void)

{
  return;
}



/* Entry: 1014541dc; end: 1014541fb;  */

void FUN_1014541dc(void)

{
  func_0x000107c61168(&PTR_PTR_112da0200);
  return;
}



/* Entry: 1014541fc; end: 10145422b;  */

undefined1  [16] FUN_1014541fc(void)

{
  return ZEXT816(0x1103bd048);
}



/* Entry: 10145422c; end: 1014542a3; +[SCCameraAudioRecordingQualityImprovementsExperiment enableVideoRecordingModeWithCircumstanceEngine:] */

undefined8 FUN_10145422c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010ef81590);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return uVar2;
}



/* Entry: 1014542a4; end: 1014542df; -[SCCameraAudioRecordingQualityImprovementsExperiment init] */

void FUN_1014542a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014542e0; end: 101454313;  */

void FUN_1014542e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101454314; end: 101454317; -[SCCameraAudioRecordingQualityImprovementsExperiment .cxx_destruct] */

void FUN_101454314(void)

{
  return;
}



/* Entry: 101454318; end: 101454337;  */

void FUN_101454318(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7620);
  return;
}



/* Entry: 101454338; end: 101454397; +[_TtC15SCVolumeManager24SCHiddenVolumeViewHolder volumeView] */

void FUN_101454338(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  if (puRam0000000113442360 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___MPVolumeView_1126a7060;
    func_0x000107c610f8();
    func_0x000107c469a4(0,0,0,0);
    puVar1 = puRam0000000113442360;
    puRam0000000113442360 = puVar3;
    func_0x000107c61170(puVar1);
    if (puRam0000000113442360 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101454398);
      (*pcVar2)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101454398; end: 1014543ab; +[_TtC15SCVolumeManager24SCHiddenVolumeViewHolder volumeSlider] */

void FUN_101454398(void)

{
  FUN_10145441c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014543ac; end: 1014543e7; -[_TtC15SCVolumeManager24SCHiddenVolumeViewHolder init] */

void FUN_1014543ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1014545d4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014543e8; end: 101454417;  */

void FUN_1014543e8(void)

{
  FUN_1014545d4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101454418; end: 10145441b; -[_TtC15SCVolumeManager24SCHiddenVolumeViewHolder .cxx_destruct] */

void FUN_101454418(void)

{
  return;
}



/* Entry: 10145441c; end: 1014545d3;  */

ulong FUN_10145441c(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  if (uRam0000000113442368 == 0) {
    if (puRam0000000113442360 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___MPVolumeView_1126a7060;
      func_0x000107c610f8();
      func_0x000107c469a4(0,0,0,0);
      puVar3 = puRam0000000113442360;
      puRam0000000113442360 = puVar9;
      func_0x000107c61170(puVar3);
      if (puRam0000000113442360 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014545d4);
        (*pcVar2)();
      }
    }
    puVar3 = puRam0000000113442360;
    func_0x000107c61174();
    puVar9 = puVar3;
    func_0x000107c5c3b0();
    func_0x000107c61180();
    uVar4 = 0;
    func_0x000100f115fc(0);
    puVar5 = puVar9;
    func_0x000107c5fc54(puVar9,uVar4);
    func_0x000107c61170(puVar9);
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar9 = puVar5;
      }
      func_0x000107c60480();
    }
    if (puVar9 != (undefined *)0x0) {
      uVar10 = 0;
      do {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101454568);
            (*pcVar2)();
          }
          uVar6 = *(ulong *)(puVar5 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar10;
          func_0x000100f040d0(uVar10,puVar5);
        }
        puVar1 = (undefined *)(uVar10 + 1);
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101454564);
          (*pcVar2)();
        }
        puVar7 = PTR__OBJC_CLASS___UISlider_1126a7068;
        func_0x000107c61168(PTR__OBJC_CLASS___UISlider_1126a7068);
        uVar8 = uVar6;
        func_0x000107c6148c(uVar6,puVar7);
        if (uVar8 != 0) {
          func_0x000107c6142c(puVar5);
          goto LAB_10145458c;
        }
        func_0x000107c61170(uVar6);
        uVar10 = uVar10 + 1;
      } while (puVar1 != puVar9);
    }
    func_0x000107c6142c(puVar5);
    uVar8 = 0;
LAB_10145458c:
    uVar10 = uRam0000000113442368;
    uRam0000000113442368 = uVar8;
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar10);
  }
  uVar10 = uRam0000000113442368;
  func_0x000107c61174(uRam0000000113442368);
  return uVar10;
}



/* Entry: 1014545d4; end: 1014545f3;  */

void FUN_1014545d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d76d0);
  return;
}



/* Entry: 1014545f4; end: 10145462f;  */

undefined8 FUN_1014545f4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101454630(param_1);
  return unaff_x20;
}



/* Entry: 101454630; end: 1014546c3;  */

void FUN_101454630(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c57a7c();
  uVar2 = 0xd000000000000036;
  func_0x000107c5fadc(0xd000000000000036,0x800000010ef815d0);
  func_0x000107c56954(puVar1);
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1014546c4; end: 101454717;  */

void FUN_1014546c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101454718; end: 10145472f;  */

void FUN_101454718(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 101454730; end: 101454767;  */

void FUN_101454730(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x000100093674(0);
  func_0x000107c610f8();
  uVar1 = 0;
  func_0x0001040a59e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 101454768; end: 10145478f;  */

undefined1  [16] FUN_101454768(void)

{
  return ZEXT816(0x1103bd2b8);
}



/* Entry: 101454790; end: 1014547c7;  */

void FUN_101454790(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000935b4(0);
  func_0x000107c610f8();
  uVar1 = 0;
  func_0x0001040a61e0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1014547c8; end: 101454827;  */

undefined1  [16] FUN_1014547c8(void)

{
  return ZEXT816(0x1103bd378);
}



/* Entry: 101454828; end: 101454883;  */

void FUN_101454828(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7090;
  func_0x000107c610f8();
  func_0x000107c48204();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101454884);
  (*pcVar1)();
}



/* Entry: 101454884; end: 1014548db;  */

void FUN_101454884(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7090;
  func_0x000107c610f8();
  func_0x000107c48204();
  func_0x000107c61170(unaff_x20);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101454884);
  (*pcVar1)();
}



/* Entry: 1014548dc; end: 10145490b;  */

void FUN_1014548dc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10145490c; end: 10145492f;  */

void FUN_10145490c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101454930; end: 101454933;  */

void FUN_101454930(void)

{
  return;
}



/* Entry: 101454934; end: 1014549b3;  */

void FUN_101454934(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c3dfe0(uStack_28);
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 1014549b4; end: 1014549f3;  */

void FUN_1014549b4(void)

{
  return;
}



/* Entry: 1014549f4; end: 101454a47;  */

void FUN_1014549f4(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x11) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101454a48; end: 101454a77;  */

undefined1  [16] FUN_101454a48(void)

{
  return ZEXT816(0x1103bd9d0);
}



/* Entry: 101454a78; end: 101454b27;  */

void FUN_101454a78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x44);
    func_0x000107c5fb78(0xd000000000000042,0x800000010ef816c0);
    func_0x000107c614cc(param_1,auStack_48,auStack_60);
    uVar1 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c614ac(param_1);
    func_0x000107c6142c(uStack_38);
  }
  return;
}



/* Entry: 101454b28; end: 101454b57;  */

undefined1  [16] FUN_101454b28(void)

{
  return ZEXT816(0x1103bdb48);
}



/* Entry: 101454b58; end: 101454bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101454b58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  func_0x0001000285a8(0x112da05b8,&UNK_10d9433e8);
  puVar1 = &UNK_1000ebaa4;
  func_0x0001000823a8(&UNK_1000ebaa4,0);
  *(undefined **)(unaff_x20 + _DAT_112da05c0) = puVar1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return puVar2;
}



/* Entry: 101454c00; end: 101454c5f; -[_TtC36CameraHardwareServicesImplementation27DiscoverySessionDevicesImpl init] */

void FUN_101454c00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraHardwareServicesImplementation.DiscoverySessionDevicesImpl",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101454c2c);
  (*pcVar1)();
}



/* Entry: 101454c60; end: 101454cef; -[_TtC36CameraHardwareServicesImplementation27DiscoverySessionDevicesImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101454c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112da05c0));
  return;
}



/* Entry: 101454cf0; end: 101454d0f; -[SCCameraApplicationStateImpl applicationStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101454cf0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112da0628));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101454d10; end: 101454d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101454d10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da0628) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



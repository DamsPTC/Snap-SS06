/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031119f4; end: 103111a37;  */

void FUN_1031119f4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103111a38; end: 103111a43; -[SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider setLensTalkCarouselScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103111a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f41098;
  func_0x000107c61428(param_1 + _DAT_112f41098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103111a44; end: 103111a97;  */

void FUN_103111a44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103111a98; end: 103111cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103111a98(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b490();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103106b0c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f40270);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f410a0);
      *(long *)(unaff_x20 + _DAT_112f410a0) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensTalkCarouselScopeGraphBridge/SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider.swift"
                      ,0x76,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103111bc4);
  (*pcVar1)();
}



/* Entry: 103111cac; end: 103111cdf; -[SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider provide] */

void FUN_103111cac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103111a98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103111ce0; end: 103111d13; -[SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider __safeProvide] */

void FUN_103111ce0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103111bc4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103111d14; end: 103111d57; -[SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider end] */

void FUN_103111d14(undefined8 param_1)

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



/* Entry: 103111d58; end: 103111eef;  */

void FUN_103111d58(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0edaa10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1255f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensTalkCarouselScopeGraphBridge/SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider.swift"
                            ,0x76,2,0x49,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103111ef0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ea8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103111ef0; end: 103111f9b; -[SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103111ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103111d58(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103111f9c; end: 10311200f; -[SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103111f9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f41090,0);
  func_0x000107c61614(param_1 + _DAT_112f41098,0);
  *(undefined8 *)(param_1 + _DAT_112f410a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103112010; end: 103112043;  */

void FUN_103112010(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103112044; end: 10311208b; -[SCSCLensTalkCarouselScopedMiniCameraActivationStateServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103112044(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f41090);
  func_0x000107c61610(param_1 + _DAT_112f41098);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f410a0));
  return;
}



/* Entry: 10311208c; end: 1031120ab;  */

void FUN_10311208c(void)

{
  func_0x000107c61168(&PTR_PTR_112f410e8);
  return;
}



/* Entry: 1031120ac; end: 1031120f3; -[SCSCLensTalkCarouselScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031120ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f41150;
  func_0x000107c61428(param_1 + _DAT_112f41150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031120f4; end: 10311214b; -[SCSCLensTalkCarouselScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031120f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f41150;
  func_0x000107c61428(param_1 + _DAT_112f41150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10311214c; end: 103112223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311214c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_103106de0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f40170) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103112224);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f40178);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f41158);
    *(long **)(unaff_x20 + _DAT_112f41158) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103112224; end: 10311224b; -[SCSCLensTalkCarouselScopedServicesSaberEntryPoint begin] */

void FUN_103112224(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10311214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10311224c; end: 1031123c3;  */

/* WARNING: Possible PIC construction at 0x0001031122b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010311234c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031122b8) */
/* WARNING: Removing unreachable block (ram,0x000103112350) */
/* WARNING: Removing unreachable block (ram,0x000103112368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311224c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f41158);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1031123c4; end: 1031123cb;  */

void FUN_1031123c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031123cc; end: 1031123ff; -[SCSCLensTalkCarouselScopedServicesSaberEntryPoint end] */

void FUN_1031123cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10311224c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103112400; end: 10311251f;  */

void FUN_103112400(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "LensTalkCarouselScopeGraphBridge/SCSCLensTalkCarouselScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x3f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103112520);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103112520; end: 1031125cb; -[SCSCLensTalkCarouselScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103112520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103112400(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031125cc; end: 10311262b; -[SCSCLensTalkCarouselScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031125cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f41150,0);
  *(undefined8 *)(param_1 + _DAT_112f41158) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10311262c; end: 10311265f;  */

void FUN_10311262c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103112660; end: 103112697; -[SCSCLensTalkCarouselScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103112660(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f41150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f41158));
  return;
}



/* Entry: 103112698; end: 1031126b7;  */

void FUN_103112698(void)

{
  func_0x000107c61168(&PTR_PTR_1128b8cc8);
  return;
}



/* Entry: 1031126b8; end: 1031126c7;  */

void FUN_1031126b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1031126c8; end: 1031126fb;  */

void FUN_1031126c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031126fc; end: 103112763;  */

void FUN_1031126fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = 0;
  func_0x0001044f5fd8(0);
  func_0x000107c610f8();
  uVar2 = 0;
  func_0x0001044f58a0(0,0xffffffffffffffff,param_2,param_3,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 103112764; end: 103112a67;  */

long FUN_103112764(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  puVar3 = &uStack_60;
  puVar4 = &uStack_60;
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c6157c(uVar12);
  uVar1 = 0x112f413d0;
  func_0x0001000285a8(0x112f413d0,&UNK_10db8e968);
  uVar2 = 0x1031131f0;
  func_0x0001000bfde0(0x1031131f0,0,uVar1);
  func_0x000107c61574(uVar12);
  uStack_60 = 0;
  func_0x0001006c71a4(&uStack_60);
  func_0x000107c61574(uVar2);
  uVar1 = 0x112f413d8;
  func_0x0001000285a8(0x112f413d8,&UNK_10db8e970);
  pcVar13 = FUN_103112a68;
  func_0x0001000bfde0(FUN_103112a68,0,uVar1);
  uStack_60 = 0;
  uStack_58 = 1;
  func_0x0001006c71a4(&uStack_60);
  func_0x000107c61574(pcVar13);
  puVar5 = (undefined1 *)puVar4;
  func_0x0001006c733c(puVar4);
  uVar1 = 0x112f413e0;
  func_0x0001000285a8(0x112f413e0,&UNK_10db8e978);
  pcVar13 = FUN_103112a78;
  func_0x0001000d5158(FUN_103112a78,0,uVar1);
  func_0x000107c61574(puVar5);
  puVar6 = &UNK_11060fab8;
  func_0x000107c613fc(&UNK_11060fab8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,param_1);
  puVar7 = &UNK_11060fae0;
  func_0x000107c613fc(&UNK_11060fae0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103112f24;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uVar1 = 0x112f413e8;
  func_0x0001000285a8(0x112f413e8,&UNK_10db8e980);
  pcVar8 = FUN_103112f2c;
  func_0x0001000bfde0(FUN_103112f2c,puVar7,uVar1);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(puVar7);
  pcVar13 = *(code **)(param_1 + 0x60);
  if (pcVar13 == (code *)0x0) {
    pcVar9 = FUN_1031131ec;
    func_0x0001000bfde0(FUN_1031131ec,0,uVar1);
    lVar10 = 0x112f413f0;
    func_0x0001000285a8(0x112f413f0,&UNK_10db8e988);
    FUN_103112f60();
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x18) = 5;
    *(undefined8 *)(lVar10 + 0x10) = 2;
    *(code **)(lVar10 + 0x20) = pcVar9;
    *(code **)(lVar10 + 0x28) = pcVar8;
    func_0x000107c6157c(pcVar9);
    func_0x000107c6157c(pcVar8);
    lVar11 = lVar10;
    func_0x0001000c19f0(lVar10);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(pcVar8);
  }
  else {
    pcVar9 = pcVar13;
    func_0x000107c615f0();
    FUN_103113024();
    lVar10 = 0x112f413f0;
    func_0x0001000285a8(0x112f413f0,&UNK_10db8e988);
    FUN_103112f60();
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x18) = 5;
    *(undefined8 *)(lVar10 + 0x10) = 2;
    *(code **)(lVar10 + 0x20) = pcVar9;
    *(code **)(lVar10 + 0x28) = pcVar8;
    func_0x000107c6157c(pcVar8);
    func_0x000107c6157c(pcVar9);
    lVar11 = lVar10;
    func_0x0001000c19f0(lVar10);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(pcVar8);
    func_0x000107c615e8(pcVar13);
  }
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(lVar10);
  func_0x000107c61574(puVar3);
  return lVar11;
}



/* Entry: 103112a68; end: 103112a77;  */

void FUN_103112a68(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103112a78; end: 103112ad3;  */

void FUN_103112a78(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  lVar1 = *param_2;
  cVar2 = (char)param_2[2];
  if (lVar1 == 0 && cVar2 == '\x01') {
    lVar3 = 0;
    cVar2 = '\0';
    lVar1 = 1;
  }
  else {
    lVar3 = param_2[1];
    func_0x000107c61174(lVar1);
  }
  *param_1 = lVar1;
  param_1[1] = lVar3;
  *(char *)(param_1 + 2) = cVar2;
  return;
}



/* Entry: 103112ad4; end: 103112c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103112ad4(ulong param_1,undefined8 param_2,char param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_90 [2];
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    param_1 = 0xf000000000000007;
  }
  else {
    uVar3 = *(undefined8 *)(param_4 + 0x68);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(alStack_90);
    func_0x000107c61574(uVar3);
    lVar1 = alStack_90[0];
    FUN_103112c70();
    if (param_3 == '\x01') {
      param_2 = *(undefined8 *)(lVar1 + _DAT_113081a20);
    }
    uVar3 = *(undefined8 *)(param_4 + 0x68);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(alStack_90);
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(alStack_90[0] + _DAT_113081a28);
    uVar4 = *(undefined8 *)(alStack_90[0] + _DAT_113081a30);
    func_0x0001044f5fd8(0);
    func_0x000107c610f8();
    uVar2 = param_1;
    func_0x000107c61174(param_1);
    func_0x0001044f58a0(param_1,param_2,uVar3,uVar4);
    uVar3 = *(undefined8 *)(param_4 + 0x68);
    uStack_80 = param_1;
    func_0x000107c6157c(uVar3);
    func_0x000100075034(FUN_1031131a8,alStack_90,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    func_0x000107c61170(alStack_90[0]);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(param_4);
    param_1 = param_1 | 0x4000000000000000;
  }
  return param_1;
}



/* Entry: 103112c70; end: 103112df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103112c70(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&lStack_58);
  func_0x000107c61574(uVar4);
  lVar1 = _DAT_1130819d8;
  lVar3 = *(long *)(lStack_58 + _DAT_113081a18);
  if (lVar3 == 0) {
    if (param_1 != 0) {
      uVar4 = 0;
      lVar3 = 0;
      goto LAB_103112d2c;
    }
LAB_103112d88:
    lVar5 = 0;
    uVar6 = 0;
    param_1 = 0;
LAB_103112d94:
    uVar4 = 0;
    lVar3 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + _DAT_1130819d8);
    lVar5 = ((undefined8 *)(lVar3 + _DAT_1130819d8))[1];
    uVar4 = *(undefined8 *)(lVar3 + _DAT_1130819e0);
    lVar3 = ((undefined8 *)(lVar3 + _DAT_1130819e0))[1];
    func_0x000107c61434(lVar5);
    func_0x000107c61434(lVar3);
    if (lVar5 == 0) {
      if (param_1 == 0) {
        if (lVar3 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          param_1 = 0;
          goto LAB_103112d9c;
        }
        goto LAB_103112d88;
      }
LAB_103112d2c:
      uVar6 = *(undefined8 *)(param_1 + lVar1);
      lVar5 = ((undefined8 *)(param_1 + lVar1))[1];
      func_0x000107c61434(lVar5);
      if (lVar3 != 0) goto LAB_103112d04;
LAB_103112d40:
      if (param_1 == 0) goto LAB_103112d94;
      uVar4 = *(undefined8 *)(param_1 + _DAT_1130819e0);
      lVar3 = ((undefined8 *)(param_1 + _DAT_1130819e0))[1];
      func_0x000107c61434(lVar3);
    }
    else {
      if (lVar3 == 0) goto LAB_103112d40;
LAB_103112d04:
      if (param_1 == 0) goto LAB_103112d9c;
    }
    param_1 = (ulong)*(byte *)(param_1 + _DAT_1130819e8);
  }
LAB_103112d9c:
  uVar2 = 0;
  func_0x00010073ec00(0);
  func_0x000107c610f8();
  func_0x0001044f524c(uVar6,lVar5,uVar4,lVar3,param_1,uVar2);
  func_0x000107c61170(lStack_58);
  return uVar6;
}



/* Entry: 103112df4; end: 103112e03;  */

void FUN_103112df4(ulong *param_1,ulong *param_2)

{
  *param_1 = *param_2 | 0x8000000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103112e04; end: 103112ea7;  */

void FUN_103112e04(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 103112ea8; end: 103112f23;  */

undefined8 FUN_103112ea8(void)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x68);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar1);
  return uStack_28;
}



/* Entry: 103112f24; end: 103112f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103112f24(ulong param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long alStack_90 [2];
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    param_1 = 0xf000000000000007;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
    func_0x000107c6157c(uVar4);
    func_0x0001000c74f0(alStack_90);
    func_0x000107c61574(uVar4);
    lVar1 = alStack_90[0];
    FUN_103112c70();
    if (param_3 == '\x01') {
      param_2 = *(undefined8 *)(lVar1 + _DAT_113081a20);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
    func_0x000107c6157c(uVar4);
    func_0x0001000c74f0(alStack_90);
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(alStack_90[0] + _DAT_113081a28);
    uVar5 = *(undefined8 *)(alStack_90[0] + _DAT_113081a30);
    func_0x0001044f5fd8(0);
    func_0x000107c610f8();
    uVar3 = param_1;
    func_0x000107c61174(param_1);
    func_0x0001044f58a0(param_1,param_2,uVar4,uVar5);
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
    uStack_80 = param_1;
    func_0x000107c6157c(uVar4);
    func_0x000100075034(FUN_1031131a8,alStack_90,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar4);
    func_0x000107c61170(alStack_90[0]);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(lVar2);
    param_1 = param_1 | 0x4000000000000000;
  }
  return param_1;
}



/* Entry: 103112f2c; end: 103112f5f;  */

void FUN_103112f2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1],*(undefined1 *)(param_2 + 2));
  *param_1 = uVar1;
  return;
}



/* Entry: 103112f60; end: 103113023;  */

/* WARNING: Possible PIC construction at 0x000103112f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103112f94) */
/* WARNING: Removing unreachable block (ram,0x000103112f98) */

void FUN_103112f60(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112f41408;
    plVar5 = (long *)&UNK_10db8e9a0;
  }
  else {
    puVar3 = (ulong *)0x112f413f0;
    plVar5 = (long *)&UNK_10db8e988;
    unaff_x30 = 0x103112f94;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 103113024; end: 1031131a7;  */

long FUN_103113024(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  func_0x0001000285a8(0x112f413f8,&UNK_10db8e990);
  uVar1 = param_1;
  func_0x000107c4126c(param_1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112f41400,&UNK_10db8e998);
  func_0x000107c5ce50(param_1);
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  uVar1 = 0x112f413e8;
  func_0x0001000285a8(0x112f413e8,&UNK_10db8e980);
  uVar4 = 0x1031131f4;
  func_0x0001000bfde0(0x1031131f4,0,uVar1);
  func_0x000107c61574(uVar3);
  pcVar5 = FUN_103112df4;
  func_0x0001000bfde0(FUN_103112df4,0,uVar1);
  lVar6 = 0x112f413f0;
  func_0x0001000285a8(0x112f413f0,&UNK_10db8e988);
  FUN_103112f60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 5;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  *(undefined8 *)(lVar6 + 0x20) = uVar4;
  *(code **)(lVar6 + 0x28) = pcVar5;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  lVar7 = lVar6;
  func_0x0001000c19f0(lVar6);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(lVar6);
  return lVar7;
}



/* Entry: 1031131a8; end: 1031131eb;  */

void FUN_1031131a8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 1031131ec; end: 1031131f7;  */

void FUN_1031131ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1031131f8; end: 103113367;  */

void FUN_1031131f8(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103113368; end: 103113417;  */

long FUN_103113368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_11060fba0;
  func_0x000107c613fc(&UNK_11060fba0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112f41418;
  func_0x0001000285a8(0x112f41418,&UNK_10db8ea20);
  func_0x000107c613fc();
  puVar3 = &UNK_10073ed58;
  func_0x0001000bdd8c(&UNK_10073ed58,puVar1,uVar2);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return unaff_x20;
}



/* Entry: 103113418; end: 10311341f;  */

void FUN_103113418(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103113420; end: 103113443;  */

void FUN_103113420(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103113444; end: 10311348f;  */

void FUN_103113444(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010023ad48(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x00010073e418();
  *param_1 = uVar1;
  return;
}



/* Entry: 103113490; end: 10311359b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103113490(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130827c8);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  return unaff_x20;
}



/* Entry: 10311359c; end: 1031135bf;  */

/* WARNING: Possible PIC construction at 0x0001031135a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031135ac) */

void FUN_10311359c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1031135c0; end: 103113637;  */

void FUN_1031135c0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103113638; end: 10311374b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103113638(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  uVar1 = *(undefined8 *)(param_2 + _DAT_113082828);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + _DAT_112fa4128);
  func_0x000107c61174();
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return unaff_x20;
}



/* Entry: 10311374c; end: 1031139a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10311374c(void)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fa40c0);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&puStack_88);
  func_0x000107c61574(uVar7);
  pcVar3 = pcStack_68;
  puVar2 = puStack_70;
  func_0x0001000a8868(&puStack_88,puStack_70);
  (**(code **)((long)pcVar3 + 8))(puVar2,pcVar3);
  func_0x0001000834e4(&puStack_88);
  uVar7 = 0;
  func_0x00010073ec00(0);
  pcVar3 = FUN_1031139a8;
  func_0x0001000bfde0(FUN_1031139a8,0,uVar7);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081828);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&puStack_88);
  func_0x000107c61574(uVar7);
  func_0x0001000a8868(&puStack_88,puStack_70);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113082768);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&uStack_58);
  func_0x000107c61574(uVar7);
  uVar7 = uStack_58;
  func_0x000107c4aea4(uStack_58);
  func_0x000107c615e8(uStack_58);
  pcVar4 = pcVar3;
  (**(code **)((long)pcStack_68 + 8))(pcVar3,uVar7,puStack_70,pcStack_68);
  func_0x000107c61574(pcVar3);
  func_0x0001000834e4(&puStack_88);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_68 = FUN_103113a3c;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_100c7ef5c;
  puStack_70 = &UNK_11060fc38;
  ppuVar6 = &puStack_88;
  pcStack_60 = pcVar4;
  func_0x000107c60bc4(ppuVar6);
  pcVar1 = pcStack_60;
  func_0x000107c6157c(pcVar4);
  func_0x000107c61574(pcVar1);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  uVar7 = 0;
  func_0x0001005c56dc(0);
  func_0x000107c610f8();
  func_0x00010074cd20(puVar5,uVar7);
  uVar7 = 0;
  func_0x0001044f3078(0);
  func_0x000107c610f8();
  func_0x0001044f2f64(puVar5,uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  return puVar5;
}



/* Entry: 1031139a8; end: 103113a3b;  */

void FUN_1031139a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    bVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = param_2[2];
    uVar3 = param_2[3];
    uVar5 = *param_2;
    bVar6 = *(byte *)(param_2 + 4);
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar3);
  }
  uVar1 = 0;
  func_0x00010073ec00(0);
  func_0x000107c610f8();
  func_0x0001044f524c(uVar5,lVar2,uVar4,uVar3,bVar6 & 1,uVar1);
  *param_1 = uVar5;
  return;
}



/* Entry: 103113a3c; end: 103113a5f;  */

undefined8 FUN_103113a3c(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 103113a60; end: 103113a7b;  */

void FUN_103113a60(long param_1,long param_2)

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



/* Entry: 103113a7c; end: 103113a9f;  */

/* WARNING: Possible PIC construction at 0x000103113a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103113a8c) */

void FUN_103113a7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103113aa0; end: 103113af3;  */

void FUN_103113aa0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103113af4; end: 103113b73;  */

void FUN_103113af4(undefined8 param_1)

{
  if (lRam0000000112f415f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74917c);
  return;
}



/* Entry: 103113b74; end: 103113b97;  */

void FUN_103113b74(undefined8 *param_1,undefined8 param_2)

{
  FUN_10311374c();
  *param_1 = param_2;
  return;
}



/* Entry: 103113b98; end: 103113bf3;  */

void FUN_103113b98(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103113bf4; end: 103113c57;  */

undefined1  [16] FUN_103113bf4(void)

{
  undefined1 auVar1 [16];
  long *unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(*unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103113c58; end: 103113c83;  */

void FUN_103113c58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_11060fc78;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103113c84; end: 103113ccb;  */

/* WARNING: Possible PIC construction at 0x000103113cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103113cb0) */

void FUN_103113c84(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x28);
  *(undefined8 *)(*unaff_x20 + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103113ccc; end: 103113cf3;  */

void FUN_103113ccc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + 0x38));
  return;
}



/* Entry: 103113cf4; end: 103113e17;  */

bool FUN_103113cf4(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x30,auStack_68,0,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  uVar9 = uVar2 & 0xffffffffffffff8;
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)(uVar9 + 0x10);
  }
  else {
    uVar3 = uVar9;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar2);
  uVar5 = 0;
  do {
    bVar4 = uVar3 != uVar5;
    if (uVar3 == uVar5) break;
    if ((uVar2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar9 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103113e04);
        (*pcVar1)();
      }
      uVar6 = *(ulong *)(uVar2 + uVar5 * 8 + 0x20);
      func_0x000107c6157c(uVar6);
    }
    else {
      uVar6 = uVar5;
      FUN_1031141a8(uVar5,uVar2);
    }
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103113dcc);
      (*pcVar1)();
    }
    lVar8 = *(long *)(uVar6 + 0x40);
    func_0x000107c6157c(lVar8);
    func_0x000107c61574(uVar6);
    if (*(long *)(lVar8 + 0x10) != 0) {
      func_0x000107c61574(lVar8);
      bVar4 = true;
      break;
    }
    lVar7 = *(long *)(lVar8 + 0x18);
    func_0x000107c61574(lVar8);
    uVar5 = uVar5 + 1;
  } while (lVar7 == 0);
  func_0x000107c6142c(uVar2);
  return bVar4;
}



/* Entry: 103113e18; end: 103113e73;  */

void FUN_103113e18(void)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + 0x40);
  func_0x000107c6157c(uVar1);
  func_0x0001044f78a4(FUN_103114344,uVar1,0x10311434c,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103113e74; end: 103113f07;  */

uint FUN_103113e74(uint param_1)

{
  FUN_103113cf4();
  return param_1 & 1;
}



/* Entry: 103113f08; end: 10311402f;  */

ulong FUN_103113f08(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103114030);
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
  FUN_103114030(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10311402c);
      (*pcVar1)();
    }
    FUN_1031140b0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103114030; end: 1031140af;  */

undefined * FUN_103114030(undefined *param_1,undefined *param_2)

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
    func_0x000103112fc8();
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



/* Entry: 1031140b0; end: 1031141a7;  */

long FUN_1031140b0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1031141a4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1031141a8);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001031147ac(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001031147ac(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1031141a0);
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



/* Entry: 1031141a8; end: 103114343;  */

ulong FUN_1031141a8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103114278);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10311427c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001031147ac(0);
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
    func_0x0001031147ac(0);
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
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f126330);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103114344);
  (*pcVar2)();
}



/* Entry: 103114344; end: 103114353;  */

void FUN_103114344(uint param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    if (0xfffffffffffffffe < *(ulong *)(unaff_x20 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031145a8);
      (*pcVar1)();
    }
    *(ulong *)(unaff_x20 + 0x10) = *(ulong *)(unaff_x20 + 0x10) + 1;
  }
  return;
}



/* Entry: 103114354; end: 103114407;  */

void FUN_103114354(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x000107c61574(uVar4);
  func_0x000107c61428(unaff_x20 + 0x30,auStack_48,0x21,0);
  func_0x000103113e98();
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_103113f08(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_1;
  *(ulong *)(unaff_x20 + 0x30) = uVar2;
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 103114408; end: 10311458b;  */

void FUN_103114408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong *puVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar8 = (ulong *)(unaff_x20 + 0x30);
  *puVar8 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  uVar4 = param_3;
  uStack_80 = param_1;
  uStack_78 = param_2;
  func_0x000107c61174(param_3);
  func_0x000107c61438(param_2,2);
  func_0x000107c5fb78(0x7e,0xe100000000000000);
  uStack_68 = 0;
  puVar5 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  uVar3 = uStack_78;
  uVar2 = uStack_80;
  func_0x0001031147ac(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  FUN_10311468c(param_1,param_2,uVar2,uVar3,param_3);
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  func_0x000107c61428(puVar8,&uStack_80,0x21,0);
  func_0x000107c6157c(param_1);
  func_0x000103113e98();
  uVar6 = *puVar8;
  uVar7 = uVar6 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar7 + 0x10);
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_103113f08(uVar6,uVar1 + 1,1);
    uVar7 = uVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar7 + uVar1 * 8 + 0x20) = param_1;
  *(ulong *)(unaff_x20 + 0x30) = uVar6;
  func_0x000107c614a8(&uStack_80);
  return;
}



/* Entry: 10311458c; end: 1031145d3;  */

void FUN_10311458c(uint param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) == 0) {
    if (0xfffffffffffffffe < *(ulong *)(param_2 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031145a8);
      (*pcVar1)();
    }
    *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) + 1;
  }
  return;
}



/* Entry: 1031145d4; end: 1031145f3;  */

void FUN_1031145d4(void)

{
  func_0x000107c61168(&PTR_PTR_112f417b0);
  return;
}



/* Entry: 1031145f4; end: 10311462f;  */

void FUN_1031145f4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001044f78a4(param_1,0x103114654,*unaff_x20,0x103114670,*unaff_x20);
  return;
}



/* Entry: 103114630; end: 10311468b;  */

bool FUN_103114630(void)

{
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    return true;
  }
  return *(long *)(*unaff_x20 + 0x18) != 0;
}



/* Entry: 10311468c; end: 103114767;  */

void FUN_10311468c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puVar2 = &uStack_80;
  lVar1 = 0;
  FUN_1031145d4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x40) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  if (param_5 == 0) {
    func_0x0001044f5fd8(0);
    func_0x000107c610f8();
    param_5 = 0;
    func_0x0001044f58a0(0,0xffffffffffffffff,0xffffffffffffffff,0);
  }
  *(long *)(unaff_x20 + 0x30) = param_5;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_68 = 1;
  uStack_60 = 0;
  uStack_58 = 1;
  uStack_50 = 0;
  uStack_48 = 1;
  func_0x0001044f74d0(0);
  func_0x000107c610f8();
  func_0x0001044f6358();
  *(undefined8 **)(unaff_x20 + 0x38) = puVar2;
  return;
}



/* Entry: 103114768; end: 1031147cb;  */

void FUN_103114768(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031147cc; end: 10311486b;  */

undefined1  [16] FUN_1031147cc(void)

{
  undefined1 auVar1 [16];
  long *unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(*unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10311486c; end: 1031148ab;  */

void FUN_10311486c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*unaff_x20 + 0x30));
  return;
}



/* Entry: 1031148ac; end: 103114ab7;  */

undefined8 FUN_1031148ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0;
  puVar4 = &UNK_11060fd90;
  func_0x000107c613fc(&UNK_11060fd90,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_78;
  puVar5 = &UNK_11060fdb8;
  func_0x000107c613fc(&UNK_11060fdb8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_103114ab8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_103114ad8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e2fcec;
  puStack_90 = &UNK_11060fdd0;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11060fe08;
  func_0x000107c613fc(&UNK_11060fe08,0x18,7);
  *(undefined8 **)(puVar7 + 0x10) = &uStack_78;
  puVar8 = &UNK_11060fe30;
  func_0x000107c613fc(&UNK_11060fe30,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_103114b64;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_88 = (code *)0x103114b8c;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e2fcec;
  puStack_90 = &UNK_11060fe48;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c5f4();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_78;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x8c,9,0x17,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103114ab4);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x8c,0xb,0x14,1);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103114ab8);
  (*pcVar3)();
}



/* Entry: 103114ab8; end: 103114ad7;  */

void FUN_103114ab8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103114b14(param_1,*(undefined8 *)(unaff_x20 + 0x10),&SUB_1044f76f4);
  return;
}



/* Entry: 103114ad8; end: 103114af7;  */

void FUN_103114ad8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103114af8; end: 103114b13;  */

void FUN_103114af8(long param_1,long param_2)

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



/* Entry: 103114b14; end: 103114b63;  */

void FUN_103114b14(undefined8 param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100c7f35c(0);
  (*param_3)(param_1,uVar1);
  uVar1 = *param_2;
  *param_2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103114b64; end: 103114b83;  */

void FUN_103114b64(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103114b14(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_1044f77c8);
  return;
}



/* Entry: 103114b84; end: 103114b8f;  */

void FUN_103114b84(long param_1,long param_2)

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



/* Entry: 103114b90; end: 103114d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103114b90(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 auStack_a0 [2];
  long alStack_70 [4];
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f41928));
  func_0x000100bc7fa4();
  uVar4 = 0x112f41998;
  func_0x0001000285a8(0x112f41998,&UNK_10db8ece0);
  func_0x000100087bd4(alStack_70,FUN_1031164c0,auStack_a0,uVar4);
  if (alStack_70[0] != 0) {
    func_0x0001044f86dc(0);
    func_0x000107c61428(alStack_70[0] + 0x20,alStack_70,0,0);
    uVar1 = alStack_70[0] + 0x20;
    FUN_1031164e8(uVar1,auStack_a0);
    func_0x000103117754();
    func_0x000103116524(auStack_a0);
    func_0x0001044f7c48();
    uVar2 = alStack_70[0] + 0x20;
    func_0x000107c61428(uVar2,auStack_a0,0x21,0);
    func_0x000103117680();
    func_0x000107c614a8(auStack_a0);
    func_0x000100c82230();
    if ((uVar2 & 1) != 0) {
      uVar2 = alStack_70[0] + 0x20;
      FUN_1031164e8(uVar2,auStack_a0);
      func_0x000103117754();
      func_0x000103116524(auStack_a0);
      func_0x0001044f7c48(uVar2);
      uVar3 = uVar1;
      func_0x000107c60118(uVar1,uVar2);
      if ((uVar3 & 1) == 0) {
        func_0x0001044f8b48(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar2);
        func_0x000107c61174(uVar1);
        uVar4 = 0;
        func_0x0001044f8900(0,uVar1,uVar2);
        auStack_a0[0] = uVar4;
        func_0x000100087c34(auStack_a0);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar4);
        uVar1 = uVar2;
      }
      else {
        func_0x000107c61170(uVar1);
        uVar1 = uVar2;
      }
    }
    func_0x000107c61170(uVar1);
    func_0x000100087bd4(FUN_103116558,auStack_a0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(alStack_70[0]);
  }
  return;
}



/* Entry: 103114d9c; end: 10311510f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103114d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 auStack_110 [4];
  undefined8 uStack_f0;
  undefined8 auStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  long alStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  
  plVar4 = (long *)(unaff_x20 + _DAT_112f41930);
  auStack_110[2] = param_1;
  auStack_110[3] = param_3;
  uStack_f0 = param_4;
  func_0x0001000a8868(plVar4,plVar4[3]);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f41960);
  lVar8 = *plVar4;
  uVar1 = *(undefined8 *)(lVar8 + 0x10);
  uVar3 = *(undefined8 *)(lVar8 + 0x18);
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  auStack_110[1] = *(undefined8 *)(lVar8 + 0x28);
  lVar5 = 0;
  func_0x000103112e88();
  lVar8 = lVar5;
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  uVar7 = uVar2;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x20) = uVar7;
  uVar7 = 0x112f419a8;
  func_0x0001000285a8(0x112f419a8,&UNK_10db8ecf0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar8 + 0x38) = uVar7;
  func_0x0001044f5fd8(0);
  func_0x000107c610f8();
  lVar6 = 0;
  func_0x0001044f58a0(0,0xffffffffffffffff,0xffffffffffffffff,0);
  alStack_90[0] = lVar6;
  func_0x0001000285a8(0x112f419b0,&UNK_10db8ecf8);
  func_0x000107c613fc();
  plVar4 = alStack_90;
  func_0x00010006c248();
  *(long **)(lVar8 + 0x68) = plVar4;
  func_0x0001044f74d0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(plVar4);
  uVar7 = 0;
  func_0x0001044f6140(0,0,0,0,0);
  *(undefined8 *)(lVar8 + 0x70) = uVar7;
  *(undefined8 *)(lVar8 + 0x10) = param_1;
  *(undefined8 *)(lVar8 + 0x18) = param_2;
  *(undefined8 *)(lVar8 + 0x40) = uVar1;
  *(undefined8 *)(lVar8 + 0x48) = uVar3;
  *(undefined8 *)(lVar8 + 0x50) = uVar2;
  *(undefined8 *)(lVar8 + 0x58) = auStack_110[1];
  *(undefined8 *)(lVar8 + 0x60) = uVar10;
  uStack_80 = auStack_110[3];
  lStack_78 = uStack_f0;
  func_0x000107c615f0(uVar10);
  func_0x000107c61434(param_2);
  func_0x000100075034(FUN_1031165b4,alStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(plVar4);
  ppuStack_70 = &PTR_DAT_11060fa88;
  lStack_78 = lVar5;
  func_0x000107c615e8(uVar10);
  alStack_90[0] = lVar8;
  FUN_1031165cc(alStack_90,auStack_c0);
  func_0x0001000c6518(auStack_c0,lStack_a8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_a8 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)auStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar9);
  auStack_e8[0] = *puVar9;
  ppuStack_c8 = &PTR_DAT_11060fa88;
  lVar8 = 0;
  lStack_d0 = lVar5;
  func_0x00010311739c();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_e8,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar9);
  uVar7 = *puVar9;
  *(long *)(lVar8 + 0x68) = lVar5;
  *(undefined ***)(lVar8 + 0x70) = &PTR_DAT_11060fa88;
  *(undefined8 *)(lVar8 + 0x50) = uVar7;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  uVar7 = param_2;
  func_0x000107c61434();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar8 + 0x78) = uVar7;
  func_0x0001000285a8(0x112f41188,&UNK_10db8e7c0);
  func_0x000107c613fc();
  uVar7 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar8 + 0x80) = uVar7;
  *(undefined8 *)(lVar8 + 0x10) = auStack_110[2];
  *(undefined8 *)(lVar8 + 0x18) = param_2;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined1 *)(lVar8 + 0x48) = 4;
  func_0x0001000834e4(auStack_e8);
  func_0x0001000834e4(alStack_90);
  func_0x0001000834e4(auStack_c0);
  return lVar8;
}



/* Entry: 103115110; end: 10311516f; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController init] */

void FUN_103115110(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselSessionImpl.LensCarouselSessionController",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10311513c);
  (*pcVar1)();
}



/* Entry: 103115170; end: 103115217; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031151cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031151d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103115170(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f41928));
  func_0x0001000834e4(param_1 + _DAT_112f41930);
  func_0x000103116610(param_1 + _DAT_112f41938,0x112f419b8,&UNK_10db8ed08);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f41948));
  return;
}



/* Entry: 103115218; end: 103115227; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController lensCarouselLocationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103115218(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f41940);
}



/* Entry: 103115228; end: 10311525b; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController setupLensCarouselDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103115228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f41960);
  *(undefined8 *)(param_1 + _DAT_112f41960) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10311525c; end: 1031153e3; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController lensSessionId] */

void FUN_10311525c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001031152c4();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031153e4; end: 103115417; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController isSessionActive] */

uint FUN_1031153e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103115418();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103115418; end: 1031154f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103115418(void)

{
  undefined8 uVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_6f;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  uVar1 = 0x112f41998;
  func_0x0001000285a8(0x112f41998,&UNK_10db8ece0);
  func_0x000100087bd4(&lStack_38,0x103116718,&uStack_90,uVar1);
  uVar1 = 0;
  if (lStack_38 != 0) {
    func_0x000107c61428(lStack_38 + 0x20,auStack_58,0,0);
    FUN_1031164e8(lStack_38 + 0x20,&uStack_90);
    func_0x000107c61574(lStack_38);
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    bStack_98 = (byte)((ulong)uStack_6f >> 0x38);
    if (bStack_98 < 2) {
      uVar1 = 1;
    }
    else {
      if (1 < bStack_98 - 2) {
        return 0;
      }
      uVar1 = 0;
    }
    func_0x0001000834e4(&uStack_c0);
  }
  return uVar1;
}



/* Entry: 1031154f8; end: 10311552b; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController isSessionPaused] */

uint FUN_1031154f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10311552c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



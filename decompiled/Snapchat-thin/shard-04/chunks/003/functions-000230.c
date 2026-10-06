/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103373e60; end: 103373e93;  */

void FUN_103373e60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103373e94; end: 103373edb; -[SCSCLensesModularCameraScopedMiniCameraTrayNavigationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103373e94(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5d850);
  func_0x000107c61610(param_1 + _DAT_112f5d858);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5d860));
  return;
}



/* Entry: 103373edc; end: 103373efb;  */

void FUN_103373edc(void)

{
  func_0x000107c61168(&PTR_PTR_112f5d8a8);
  return;
}



/* Entry: 103373efc; end: 103373f43; -[SCSCLensesModularCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103373efc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5d910;
  func_0x000107c61428(param_1 + _DAT_112f5d910,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103373f44; end: 103373f9b; -[SCSCLensesModularCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103373f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5d910;
  func_0x000107c61428(param_1 + _DAT_112f5d910,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103373f9c; end: 103374073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103373f9c(undefined8 param_1,long param_2)

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
    FUN_10336fac8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f5d480) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103374074);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f5d488);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5d918);
    *(long **)(unaff_x20 + _DAT_112f5d918) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103374074; end: 10337409b; -[SCSCLensesModularCameraScopedServicesSaberEntryPoint begin] */

void FUN_103374074(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103373f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10337409c; end: 103374213;  */

/* WARNING: Possible PIC construction at 0x000103374104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010337419c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103374108) */
/* WARNING: Removing unreachable block (ram,0x0001033741a0) */
/* WARNING: Removing unreachable block (ram,0x0001033741b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337409c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5d918);
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



/* Entry: 103374214; end: 10337421b;  */

void FUN_103374214(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10337421c; end: 10337424f; -[SCSCLensesModularCameraScopedServicesSaberEntryPoint end] */

void FUN_10337421c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10337409c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103374250; end: 10337436f;  */

void FUN_103374250(long param_1,long param_2,long param_3)

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
                        "LensesModularCameraScopeGraphBridge/SCSCLensesModularCameraScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x34,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103374370);
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



/* Entry: 103374370; end: 10337441b; -[SCSCLensesModularCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103374370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103374250(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10337441c; end: 10337447b; -[SCSCLensesModularCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337441c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5d910,0);
  *(undefined8 *)(param_1 + _DAT_112f5d918) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10337447c; end: 1033744af;  */

void FUN_10337447c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033744b0; end: 1033744e7; -[SCSCLensesModularCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033744b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5d910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5d918));
  return;
}



/* Entry: 1033744e8; end: 103374507;  */

void FUN_1033744e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d1f70);
  return;
}



/* Entry: 103374508; end: 10337454b;  */

void FUN_103374508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10337454c; end: 10337455b;  */

void FUN_10337454c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10337455c; end: 1033746b7;  */

void FUN_10337455c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_70 [48];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd00000000000002a;
  func_0x0001000a9a18(0xd00000000000002a,0x800000010f143690);
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b3c8();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c3e6c8();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar1;
  func_0x000107c4d534(uVar1);
  func_0x000107c5b3f0();
  uVar4 = 6;
  func_0x000104509674(6,0,0,1,2,uVar3,0,1,0);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61428(param_1,auStack_70,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x0001000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1033746b8; end: 1033746eb;  */

void FUN_1033746b8(void)

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



/* Entry: 1033746ec; end: 10337470b;  */

void FUN_1033746ec(void)

{
  FUN_10337455c();
  return;
}



/* Entry: 10337470c; end: 103374713;  */

undefined8 FUN_10337470c(void)

{
  return 0;
}



/* Entry: 103374714; end: 103374733;  */

void FUN_103374714(void)

{
  func_0x000107c61168(&PTR_PTR_112f5d988);
  return;
}



/* Entry: 103374734; end: 1033747eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103374734(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f5d9f8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5d9f8))[1];
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x10))();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61574(uVar2);
  return uStack_28;
}



/* Entry: 1033747ec; end: 103374847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033747ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5d9f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103374848; end: 1033748a7; -[_TtC33SCLensesModularCameraUIEntryPoint34LensesModularCameraCameraUIService init] */

void FUN_103374848(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensesModularCameraUIEntryPoint.LensesModularCameraCameraUIService",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103374874);
  (*pcVar1)();
}



/* Entry: 1033748a8; end: 1033748b7; -[_TtC33SCLensesModularCameraUIEntryPoint34LensesModularCameraCameraUIService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033748a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f5d9f8));
  return;
}



/* Entry: 1033748b8; end: 1033748d7;  */

void FUN_1033748b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d2030);
  return;
}



/* Entry: 1033748d8; end: 103374927;  */

void FUN_1033748d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 103374928; end: 103374937;  */

void FUN_103374928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 103374938; end: 103374aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103374938(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000027;
  func_0x0001000a9a18(0xd000000000000027,0x800000010f143710);
  func_0x000107c61170(uVar3);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113071fc8);
  func_0x000107c3e6c8(uVar5);
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c4d534();
  func_0x000107c61170(uVar5);
  uVar5 = 4;
  uVar9 = 0;
  uVar10 = 0;
  func_0x0001005baa1c(4,0,0,8,2,uVar3,4,1,0);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x20));
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0;
  FUN_1033748b8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f5d9f8);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar7;
  lStack_70 = lVar6;
  func_0x000107c615f0(uVar9);
  plVar8 = &lStack_78;
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(plVar8);
  func_0x000107c61428(param_1,auStack_90,0,0);
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103374b00; end: 103374b3b;  */

void FUN_103374b00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103374b3c; end: 103374b5b;  */

void FUN_103374b3c(void)

{
  FUN_103374938();
  return;
}



/* Entry: 103374b5c; end: 103374b63;  */

undefined8 FUN_103374b5c(void)

{
  return 0;
}



/* Entry: 103374b64; end: 103374b83;  */

void FUN_103374b64(void)

{
  func_0x000107c61168(&PTR_PTR_112f5da68);
  return;
}



/* Entry: 103374b84; end: 103374bb7;  */

void FUN_103374b84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103374bb8; end: 103374dc3;  */

void FUN_103374bb8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = &uStack_80;
  lVar1 = 0;
  func_0x000100769408();
  func_0x000107c613fc();
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x0001000285a8(0x112f5db18,&UNK_10dbb8880);
  func_0x000107c613fc();
  func_0x00010042e6a0();
  *(undefined8 **)(lVar1 + 0x10) = puVar2;
  uVar3 = 0x112f5db20;
  func_0x0001000285a8(0x112f5db20,&UNK_10dbb8888);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103374dc4; end: 103374dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103374dc4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3f578();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  lVar2 = 0;
  func_0x000103377e70();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0x4059000000000000;
  *(undefined8 *)(lVar2 + 0x10) = 0x4059000000000000;
  *(undefined8 *)(lVar2 + 0x20) = 0x401e000000000000;
  *param_1 = lVar2;
  param_1[1] = (long)&PTR_DAT_1106465a8;
  return;
}



/* Entry: 103374dcc; end: 103374ebb;  */

void FUN_103374dcc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  param_1[1] = &PTR_DAT_1106464a0;
  return;
}



/* Entry: 103374ebc; end: 103374ec3;  */

void FUN_103374ebc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103374ec4; end: 103374ee7;  */

void FUN_103374ec4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103374ee8; end: 103374f0b;  */

void FUN_103374ee8(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010076919c();
  *param_1 = param_2;
  return;
}



/* Entry: 103374f0c; end: 103374f1b;  */

bool FUN_103374f0c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103374f1c; end: 103374fbf;  */

undefined8 FUN_103374f1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10337528c(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 103374fc0; end: 103375113;  */

undefined1  [16] FUN_103374fc0(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  uStack_50 = 0;
  puVar4 = &UNK_110646248;
  func_0x000107c613fc(&UNK_110646248,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_50;
  puVar5 = &UNK_110646270;
  func_0x000107c613fc(&UNK_110646270,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10337538c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_60 = FUN_103375394;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1019dec60;
  puStack_68 = &UNK_110646288;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_58;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c4c590();
  func_0x000107c60bd0(ppuVar6);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x88,0x2d,0x25,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103375114);
  (*pcVar3)();
}



/* Entry: 103375114; end: 103375187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103375114(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001007d6c28(*(long *)(unaff_x20 + 0x10) + _DAT_112fcaab8,auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x50))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return 0;
}



/* Entry: 103375188; end: 1033751ab;  */

void FUN_103375188(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033751ac; end: 1033751af;  */

void FUN_1033751ac(void)

{
  return;
}



/* Entry: 1033751b0; end: 10337528b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033751b0(void)

{
  long *unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001007d6c28(*(long *)(*unaff_x20 + 0x10) + _DAT_112fcaab8,auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x50))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return 0;
}



/* Entry: 10337528c; end: 10337536b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337528c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long unaff_x20;
  ulong uVar7;
  
  *(ulong *)(unaff_x20 + 0x10) = param_2;
  uVar7 = *(ulong *)(param_1 + _DAT_11306db00);
  uVar5 = param_2;
  func_0x000107c61174();
  uVar4 = uVar7;
  func_0x000107c5b3f0();
  if (uVar4 == 0x6d) {
    func_0x000107c61174();
    uVar4 = uVar7;
    FUN_103374fc0();
    func_0x000107c61170(uVar7);
    uVar6 = 4;
    if (uVar5 != 0) {
      func_0x000107c6142c(uVar5);
      uVar4 = uVar4 & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar4 = uVar5 >> 0x38 & 0xf;
      }
      uVar6 = 4;
      if (uVar4 != 0) {
        uVar6 = 5;
      }
    }
    lVar1 = param_2 + _DAT_112fcaab8;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    (**(code **)(lVar3 + 0x48))(uVar6,uVar2,lVar3);
  }
  return;
}



/* Entry: 10337536c; end: 10337538b;  */

void FUN_10337536c(void)

{
  func_0x000107c61168(&PTR_PTR_112f5dc40);
  return;
}



/* Entry: 10337538c; end: 103375393;  */

void FUN_10337538c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  if (param_3 == 0) {
    lVar3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c52060();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
  }
  lVar1 = plVar2[1];
  *plVar2 = lVar3;
  plVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 103375394; end: 1033753b3;  */

void FUN_103375394(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033753b4; end: 1033753cf;  */

void FUN_1033753b4(long param_1,long param_2)

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



/* Entry: 1033753d0; end: 1033754e7;  */

undefined8 FUN_1033753d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001033756ec(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1033754e8; end: 10337550b;  */

void FUN_1033754e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10337550c; end: 10337550f;  */

void FUN_10337550c(void)

{
  return;
}



/* Entry: 103375510; end: 103375587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103375510(void)

{
  long *unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001007d6c28(*(long *)(*unaff_x20 + 0x10) + _DAT_112fcaab8,auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x50))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return 0;
}



/* Entry: 103375588; end: 1033757b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103375588(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_113071fc8);
  uVar5 = uVar2;
  func_0x000107c4afb4();
  func_0x000107c61180();
  uVar3 = param_2;
  if (uVar5 == 0) {
LAB_10337561c:
    uVar5 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    uVar4 = uVar5;
    func_0x000107c4f4a8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar3 = param_2;
    if (uVar4 == 0) goto LAB_10337561c;
    uVar1 = uVar4;
    func_0x000107c4f490();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar5 = uVar1;
    func_0x000107c5faec();
    uVar3 = param_2;
    func_0x000107c61170(uVar1);
    uVar5 = uVar5 & 0xffffffffffff;
  }
  func_0x000107c4afb4();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c4f4a8();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar4 != 0) {
      uVar2 = uVar4;
      func_0x000107c50660();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar2 != 0) {
        uVar4 = uVar2;
        func_0x000107c5faec(uVar2);
        func_0x000107c61170(uVar2);
        uVar4 = uVar4 & 0xffffffffffff;
        goto LAB_1033756a0;
      }
    }
  }
  uVar4 = 0;
  uVar3 = 0xe000000000000000;
LAB_1033756a0:
  func_0x000107c6142c(param_2);
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar5 = param_2 >> 0x38 & 0xf;
  }
  func_0x000107c6142c(uVar3);
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar4 = uVar3 >> 0x38 & 0xf;
  }
  return uVar5 != 0 && uVar4 == 0;
}



/* Entry: 1033757b4; end: 1033757d3;  */

void FUN_1033757b4(void)

{
  func_0x000107c61168(&PTR_PTR_112f5dce0);
  return;
}



/* Entry: 1033757d4; end: 1033758bb;  */

undefined8 FUN_1033757d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001007d68a0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1033758bc; end: 1033758df;  */

void FUN_1033758bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033758e0; end: 1033758e3;  */

void FUN_1033758e0(void)

{
  return;
}



/* Entry: 1033758e4; end: 103375907;  */

undefined8 FUN_1033758e4(void)

{
  func_0x000103375828();
  return 0;
}



/* Entry: 103375908; end: 10337590f;  */

void FUN_103375908(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 103375910; end: 10337598b;  */

undefined8
FUN_103375910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10337598c(param_1,param_2,param_3,param_4,param_5,param_6);
  return unaff_x20;
}



/* Entry: 10337598c; end: 103375c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337598c(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  uVar10 = *unaff_x20;
  unaff_x20[2] = 0;
  func_0x0001000d224c(auStack_88);
  lVar4 = lStack_68;
  uVar3 = uStack_70;
  func_0x0001000a8868(auStack_88,uStack_70);
  (**(code **)(lVar4 + 8))(uVar3,lVar4);
  func_0x0001000834e4(auStack_88);
  if ((uVar3 & 1) == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
  }
  else {
    uVar5 = unaff_x20[2];
    unaff_x20[2] = param_4;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x0001007d6c28(param_4 + _DAT_112fcaab8,auStack_88);
    uVar6 = *(undefined8 *)(param_3 + _DAT_113082420);
    uStack_98 = 0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x20);
    func_0x000107c5fb78(0xd00000000000001e,0x800000010f1437a0);
    uStack_a0 = uVar6;
    func_0x000107c603d0(&uStack_a0,&uStack_98,&UNK_110781400,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar5 = uStack_90;
    func_0x0001007d6c6c(1,uStack_98,uStack_90,uVar10,&PTR_DAT_1106466f0);
    func_0x000107c6142c(uVar5);
    func_0x0001000a8868();
    uVar7 = *(undefined8 *)(param_5 + _DAT_112fcaa80);
    uVar9 = *(undefined8 *)(param_2 + _DAT_113081ca0);
    func_0x000107c6157c(uVar7);
    func_0x000107c4ae94();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_6 + _DAT_1130703f8);
    uVar1 = ((undefined8 *)(param_6 + _DAT_1130703f8))[1];
    uVar5 = *(undefined8 *)(param_6 + _DAT_113070400);
    uVar2 = ((undefined8 *)(param_6 + _DAT_113070400))[1];
    lVar4 = 0;
    func_0x000100768738();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar9;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar10;
    *(undefined8 *)(lVar4 + 0x30) = uVar1;
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
    *(undefined8 *)(lVar4 + 0x40) = uVar2;
    pcVar8 = *(code **)(lStack_68 + 0x20);
    func_0x000107c615f0(uVar10);
    func_0x000107c615f0(uVar5);
    (*pcVar8)(lVar4,uStack_70,lStack_68);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x0001000834e4(auStack_88);
  }
  return;
}



/* Entry: 103375c68; end: 103375cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103375c68(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001007d6c28(*(long *)(unaff_x20 + 0x10) + _DAT_112fcaab8,auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x20))(0,uStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 103375cfc; end: 103375d1f;  */

void FUN_103375cfc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103375d20; end: 103375d23;  */

void FUN_103375d20(void)

{
  return;
}



/* Entry: 103375d24; end: 103375d47;  */

undefined8 FUN_103375d24(void)

{
  FUN_103375c68();
  return 0;
}



/* Entry: 103375d48; end: 103375d67;  */

void FUN_103375d48(void)

{
  func_0x000107c61168(&PTR_PTR_112f5de40);
  return;
}



/* Entry: 103375d68; end: 103375e2b;  */

undefined8 FUN_103375d68(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001007df3bc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 103375e2c; end: 103375e4f;  */

void FUN_103375e2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103375e50; end: 103375e53;  */

void FUN_103375e50(void)

{
  return;
}



/* Entry: 103375e54; end: 103375ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103375e54(void)

{
  long *unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001007d6c28(*(long *)(*unaff_x20 + 0x10) + _DAT_112fcaab8,auStack_58);
  func_0x0001000c6518(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(0,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return 0;
}



/* Entry: 103375ed0; end: 103375f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103375ed0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_113092298);
  func_0x000107c615f0();
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x20) = param_4;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103375f74);
  (*pcVar1)();
}



/* Entry: 103375f74; end: 103375fd3;  */

void FUN_103375f74(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x0001033763c4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  func_0x000107c61614(lVar2 + 0x10,0);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106463b0;
  *param_1 = lVar2;
  return;
}



/* Entry: 103375fd4; end: 103375ff7;  */

void FUN_103375fd4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103375ff8; end: 10337606f;  */

void FUN_103375ff8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103376070; end: 1033760ab;  */

void FUN_103376070(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033760ac; end: 10337612f;  */

undefined8 FUN_1033760ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x28,auStack_38,0,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  func_0x000107c61174(uVar2);
  return uVar2;
}



/* Entry: 103376130; end: 103376133;  */

void FUN_103376130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103376134; end: 103376177;  */

void FUN_103376134(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x20);
  uStack_28 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x0001007d6d78(&uStack_28);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103376178; end: 10337619b;  */

void FUN_103376178(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x20));
  return;
}



/* Entry: 10337619c; end: 103376227;  */

void FUN_10337619c(undefined1 param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  uStack_21 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103376228; end: 1033762bb;  */

void FUN_103376228(uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = unaff_x20 + 2;
  uVar3 = *unaff_x20;
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = unaff_x20[3];
    puVar2 = puVar1;
    func_0x000107c614f0();
    (**(code **)(lVar4 + 8))(param_1 & 1,puVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar1);
    return;
  }
  func_0x000104366fc4(0xd000000000000016,0x800000010f143800,uVar3,&PTR_DAT_110646750);
  return;
}



/* Entry: 1033762bc; end: 10337639f;  */

void FUN_1033762bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = 0x676e69766f6d6572;
  if (param_1 != 0) {
    uVar1 = 0x676e6974746573;
  }
  uVar2 = 0xe800000000000000;
  if (param_1 != 0) {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x746167656c656420,0xe900000000000065);
  func_0x0001007d6c6c(1,0,0xe000000000000000,uVar3,&PTR_DAT_110646750);
  func_0x000107c6142c(0xe000000000000000);
  unaff_x20[3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + 2,param_1);
  return;
}



/* Entry: 1033763a0; end: 1033763e3;  */

void FUN_1033763a0(void)

{
  long unaff_x20;
  
  func_0x000103376424(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033763e4; end: 103376447;  */

void FUN_1033763e4(void)

{
  FUN_103376228();
  return;
}



/* Entry: 103376448; end: 1033764a3;  */

void FUN_103376448(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x28) == '\x03') {
    lVar1 = unaff_x20;
    func_0x0001033765f0();
    *(char *)(unaff_x20 + 0x28) = (char)lVar1;
  }
  return;
}



/* Entry: 1033764a4; end: 10337665b;  */

undefined * FUN_1033764a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x20;
  
  puVar1 = *(undefined **)(*unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c43bac();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    puVar3 = puVar2;
    func_0x000107c5fc54(puVar2,PTR___sSSN_11034da80);
    func_0x000107c61170(puVar2);
  }
  return puVar3;
}



/* Entry: 10337665c; end: 1033766bb;  */

uint FUN_10337665c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x19);
  if (*(byte *)(unaff_x20 + 0x19) == 2) {
    puVar1 = PTR_PTR_1126b2930;
    func_0x000107c61168();
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c49f4c();
    uVar3 = (uint)puVar2;
    func_0x000107c61170(puVar1);
    *(char *)(unaff_x20 + 0x19) = (char)puVar2;
  }
  return uVar3 & 1;
}



/* Entry: 1033766bc; end: 1033766df;  */

void FUN_1033766bc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033766e0; end: 103376703;  */

uint FUN_1033766e0(uint param_1)

{
  FUN_10337665c();
  return param_1 & 1;
}



/* Entry: 103376704; end: 103376713;  */

void FUN_103376704(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103376714; end: 10337675f;  */

void FUN_103376714(void)

{
  func_0x000107c61168(&PTR_PTR_112f5e430);
  return;
}



/* Entry: 103376760; end: 103376777;  */

undefined8 FUN_103376760(void)

{
  return 0;
}



/* Entry: 103376778; end: 10337683b;  */

long FUN_103376778(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = &uStack_70;
  func_0x000107c613fc();
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  func_0x0001000285a8(0x112f5db18,&UNK_10dbb8880);
  func_0x000107c613fc();
  func_0x00010042e6a0();
  *(undefined8 **)(unaff_x20 + 0x10) = puVar1;
  uVar2 = 0x112f5db20;
  func_0x0001000285a8(0x112f5db20,&UNK_10dbb8888);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return unaff_x20;
}



/* Entry: 10337683c; end: 1033769e7;  */

void FUN_10337683c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(FUN_1033769e8,0);
  }
  else {
    bStack_90 = param_9 & 1;
    uStack_88 = param_11;
    uStack_80 = param_12;
    uStack_c0 = param_3;
    uStack_b8 = param_4;
    lStack_b0 = param_5;
    uStack_a8 = param_6;
    uStack_a0 = param_7;
    uStack_98 = param_8;
    func_0x000107c61434(param_8);
    func_0x000107c61434(param_12);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x0001007d6d78(&uStack_c0);
    FUN_103376df4(&uStack_c0);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    lStack_b0 = param_2;
    uStack_a8 = param_1;
    func_0x000107c6157c(uVar2);
    func_0x000100087bd4(0x103376e3c,&uStack_c0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
    puVar1 = &UNK_110646460;
    func_0x000107c613fc(&UNK_110646460,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x000107c6157c(puVar1);
    func_0x0001000b6d50(FUN_103376e74,puVar1);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102664a50; end: 102664ac7; -[_TtC36MapFootstepsOnboardingImplementation28MapFootstepsOnboardingPrompt tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102664a50(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112eb2450);
  if (lVar1 == 0) {
    param_1 = 0x4082200000000000;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174(lVar1);
    FUN_102664d7c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  return param_1;
}



/* Entry: 102664ac8; end: 102664b73;  */

/* WARNING: Possible PIC construction at 0x000102664b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102664b54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102664ac8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112eb2448) = 0;
  func_0x000102663870();
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eb2418))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112eb2418));
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c54b00(*(undefined8 *)(unaff_x20 + _DAT_112eb2420));
  lVar1 = _DAT_112eb2458;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112eb2458) != 0) {
    func_0x000107c42018();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102664b74; end: 102664c0f; -[_TtC36MapFootstepsOnboardingImplementation28MapFootstepsOnboardingPrompt onTapOkay] */

void FUN_102664b74(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102664ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102664c10; end: 102664c27;  */

void FUN_102664c10(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102664c28; end: 102664caf;  */

void FUN_102664c28(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102664c74;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026645d8,lVar1,lVar3);
  return;
}



/* Entry: 102664cb0; end: 102664d1f;  */

void FUN_102664cb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102664d20;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102664d20; end: 102664d23;  */

void FUN_102664d20(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102664cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102664d24; end: 102664d7b; -[_TtC36MapFootstepsOnboardingImplementation36MapFootstepsOnboardingViewController initWithCoder:] */

void FUN_102664d24(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "MapFootstepsOnboardingImplementation/MapFootstepsOnboardingViewController.swift"
                      ,0x4f,2,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102664d7c);
  (*pcVar1)();
}



/* Entry: 102664d7c; end: 102664e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_102664d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  
  lVar1 = _DAT_112eb2490;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb2490);
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5e07c();
    func_0x000107c615e8(lVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar5 = 1.79769313486232e+308;
    func_0x000107c5b098(uVar4);
    func_0x000107c61170(uVar4);
    return dVar5 + 40.0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102664e58);
  (*pcVar2)();
}



/* Entry: 102664e58; end: 102665103;  */

/* WARNING: Possible PIC construction at 0x000102664ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102664f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102664f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102664f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102664fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102664ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102665018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010266507c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010266509c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102665080) */
/* WARNING: Removing unreachable block (ram,0x00010266501c) */
/* WARNING: Removing unreachable block (ram,0x000102665100) */
/* WARNING: Removing unreachable block (ram,0x000102665050) */
/* WARNING: Removing unreachable block (ram,0x000102664ffc) */
/* WARNING: Removing unreachable block (ram,0x000102664fac) */
/* WARNING: Removing unreachable block (ram,0x0001026650fc) */
/* WARNING: Removing unreachable block (ram,0x000102664fe0) */
/* WARNING: Removing unreachable block (ram,0x000102664f8c) */
/* WARNING: Removing unreachable block (ram,0x000102664f3c) */
/* WARNING: Removing unreachable block (ram,0x0001026650f8) */
/* WARNING: Removing unreachable block (ram,0x000102664f70) */
/* WARNING: Removing unreachable block (ram,0x000102664f1c) */
/* WARNING: Removing unreachable block (ram,0x000102664ea8) */
/* WARNING: Removing unreachable block (ram,0x0001026650f4) */
/* WARNING: Removing unreachable block (ram,0x000102664f00) */
/* WARNING: Removing unreachable block (ram,0x0001026650a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102664e58(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + _DAT_112eb2490),param_2,0);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026650f4);
  (*pcVar1)();
}



/* Entry: 102665104; end: 10266515f; -[_TtC36MapFootstepsOnboardingImplementation36MapFootstepsOnboardingViewController initWithNibName:bundle:] */

void FUN_102665104(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFootstepsOnboardingImplementation.MapFootstepsOnboardingViewController",
                      0x49,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102665130);
  (*pcVar1)();
}



/* Entry: 102665160; end: 10266516f; -[_TtC36MapFootstepsOnboardingImplementation36MapFootstepsOnboardingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102665160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb2490));
  return;
}



/* Entry: 102665170; end: 10266518f;  */

void FUN_102665170(void)

{
  func_0x000107c61168(&PTR_PTR_112856100);
  return;
}



/* Entry: 102665190; end: 102665197; -[_TtC36MapFootstepsOnboardingImplementation36MapFootstepsOnboardingViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_102665190(void)

{
  return 1;
}



/* Entry: 102665198; end: 1026653d7;  */

void FUN_102665198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb24c0,&UNK_10dac6fd0);
  puVar1 = &UNK_11052f858;
  func_0x000107c613fc(&UNK_11052f858,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_5;
  *(undefined8 *)(puVar1 + 0x58) = param_1;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1026652ac,puVar1);
  return;
}



/* Entry: 1026653d8; end: 1026653e7;  */

undefined1  [16] FUN_1026653d8(void)

{
  return ZEXT816(0x11052f880);
}



/* Entry: 1026653e8; end: 102665453;  */

void FUN_1026653e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102665454; end: 102665583;  */

void FUN_102665454(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112eb24d0,&UNK_10dac7018);
  puVar8 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  FUN_102667d04(uVar9);
  func_0x000100082720("SCCaaSCameraScopeExposerServiceProvider",0x27,2);
  FUN_102665ba0(uVar10,uVar9,uVar11,uVar4,uVar1,uVar5,uVar2,uVar6,puVar8,uVar3,uVar7);
  func_0x000100082720("MapFootstepsTrayPresenterServiceProvider",0x28,2);
  uVar11 = uVar10;
  FUN_102665860();
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar8);
  func_0x000100082720("MapFootstepsTrayPresenterEntryPointProvider",0x2b,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 102665584; end: 10266559f;  */

void FUN_102665584(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb24d8,&UNK_10dac7020);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026655f4,param_1);
  return;
}



/* Entry: 1026655a0; end: 1026655f3;  */

void FUN_1026655a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x0001026e20f8(0);
  func_0x000107c610f8();
  func_0x0001026e20bc(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1026655f4; end: 102665617;  */

void FUN_1026655f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x0001026e20f8(0);
  func_0x000107c610f8();
  func_0x0001026e20bc(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102665618; end: 1026656d3;  */

void FUN_102665618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1026656d4; end: 1026656db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026656d4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102665840();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb24e8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1026656dc; end: 102665727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026656dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb24e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102665728; end: 1026657af; -[_TtC30MapFootstepsTrayImplementation23MapFootstepsTrayBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102665728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1026657b0; end: 10266580f; -[_TtC30MapFootstepsTrayImplementation23MapFootstepsTrayBuilder init] */

void FUN_1026657b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFootstepsTrayImplementation.MapFootstepsTrayBuilder",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026657dc);
  (*pcVar1)();
}



/* Entry: 102665810; end: 10266583f; -[_TtC30MapFootstepsTrayImplementation23MapFootstepsTrayBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102665810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb24e8));
  return;
}



/* Entry: 102665840; end: 10266585f;  */

void FUN_102665840(void)

{
  func_0x000107c61168(&PTR_PTR_1128561e8);
  return;
}



/* Entry: 102665860; end: 1026658ab;  */

void FUN_102665860(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb2518,&UNK_10dac70d0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10266590c,param_1);
  return;
}



/* Entry: 1026658ac; end: 10266590b;  */

void FUN_1026658ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  FUN_102665914();
  func_0x000107c61574(uVar1);
  func_0x000100083b20(&uStack_38);
  *param_1 = uStack_38;
  return;
}



/* Entry: 10266590c; end: 102665913;  */

void FUN_10266590c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  FUN_102665914();
  func_0x000107c61574(uVar1);
  func_0x000100083b20(&uStack_38);
  *param_1 = uStack_38;
  return;
}



/* Entry: 102665914; end: 102665b9f;  */

/* WARNING: Possible PIC construction at 0x0001026659b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102665ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102665b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102665b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102665aec) */
/* WARNING: Removing unreachable block (ram,0x000102665b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102665914(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 == 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x90)) + 0x58))
              ();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c4c328();
    lVar2 = lVar1;
  }
  else {
    FUN_102666014();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x48) + _DAT_112fecfb0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 == 0) {
        puVar3 = PTR_PTR_1126a6448;
        func_0x000107c610f8(PTR_PTR_1126a6448);
        func_0x000107c49448();
        puVar4 = PTR_PTR_1126b1f18;
        func_0x000107c610f8(PTR_PTR_1126b1f18);
        func_0x000107c46f24();
        puVar5 = PTR_PTR_1126b1f08;
        func_0x000107c61168(PTR_PTR_1126b1f08);
        func_0x000107c61174(puVar3);
        func_0x000107c4abac(puVar5);
        func_0x000107c61180();
        pcStack_60 = FUN_102666228;
        uStack_58 = 0;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_10112dc70;
        puStack_68 = &UNK_11052fa08;
        ppuVar6 = &puStack_80;
        func_0x000107c60bc4();
        func_0x000107c61174(puVar4);
        func_0x000107c40bec(0x4060400000000000,0,lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        func_0x000107c61604(unaff_x20 + 0x70,lVar2);
      }
      else {
        lVar2 = lVar1;
        func_0x000107c3eca4();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        func_0x000107c54afc(lVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102665ba0; end: 102665e47;  */

void FUN_102665ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb2520,&UNK_10dac70d8);
  puVar1 = &UNK_11052f9b0;
  func_0x000107c613fc(&UNK_11052f9b0,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(FUN_102665e48,puVar1);
  return;
}



/* Entry: 102665e48; end: 102665e83;  */

void FUN_102665e48(void)

{
  long unaff_x20;
  
  func_0x000102665cc8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102665e84; end: 102665f3f;  */

long FUN_102665e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  func_0x000107c61614(unaff_x20 + 0x70,0);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined **)(unaff_x20 + 0x88) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x90) = param_9;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_10;
  *(undefined8 *)(unaff_x20 + 0x20) = param_11;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  return unaff_x20;
}



/* Entry: 102665f40; end: 102665feb;  */

/* WARNING: Possible PIC construction at 0x000102665fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102665fa8) */
/* WARNING: Removing unreachable block (ram,0x000107c61604) */
/* WARNING: Removing unreachable block (ram,0x00010bdc05cc) */

void FUN_102665f40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x70;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c50044(lVar3,param_2,lVar1,1);
    lVar1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102665fec; end: 102666013; -[_TtC30MapFootstepsTrayImplementation25MapFootstepsTrayPresenter dismiss] */

void FUN_102665fec(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_102665f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102666014; end: 102666227;  */

undefined * FUN_102666014(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      puVar4 = PTR_PTR_1126aad08;
      func_0x000107c610f8(PTR_PTR_1126aad08);
      func_0x000107c453e4();
      puVar7 = &UNK_11052fa40;
      puVar5 = puVar7;
      func_0x000107c613fc(&UNK_11052fa40,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_102667ac8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11052fb98;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c56ca8(puVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c613fc(&UNK_11052fa40,0x18,7);
      func_0x000107c61644(puVar7 + 0x10);
      pcStack_70 = (code *)0x102667ad0;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11052fbc0;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c56ef4(puVar4);
      func_0x000107c60bd0(ppuVar8);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x88);
      func_0x000107c5cb24(uVar9);
      func_0x000107c61180();
      func_0x000107c59250(puVar4);
      func_0x000107c61170(uVar9);
      puVar7 = PTR_PTR_1126aad10;
      func_0x000107c610f8(PTR_PTR_1126aad10);
      func_0x000107c61174(puVar4);
      func_0x000107c49520(puVar7);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(lVar2);
      return puVar7;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 102666228; end: 10266622f;  */

undefined8 FUN_102666228(void)

{
  return 0;
}



/* Entry: 102666230; end: 1026664a3;  */

/* WARNING: Possible PIC construction at 0x00010266638c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010266640c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102666474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102666410) */
/* WARNING: Removing unreachable block (ram,0x000102666390) */
/* WARNING: Removing unreachable block (ram,0x000102666478) */
/* WARNING: Removing unreachable block (ram,0x00010266647c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102666230(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar1 = unaff_x20 + 0x70;
  func_0x000107c61618();
  if (lVar1 == 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x90)) + 0x58))
              ();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c4c328();
  }
  else {
    lVar7 = lVar1;
    func_0x000107c4c428();
    func_0x000107c61180();
    puVar2 = &UNK_11052fa40;
    func_0x000107c613fc(&UNK_11052fa40,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_11052fa68;
    func_0x000107c613fc(&UNK_11052fa68,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = lVar1;
    uStack_60 = 0x102667a68;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1011314ac;
    puStack_68 = &UNK_11052fa80;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c615f0(lVar1);
    func_0x000107c61574(puVar2);
    lVar5 = lVar7;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar7);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
    *(long *)(unaff_x20 + 0x68) = lVar5;
    func_0x000107c61170(uVar6);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x48) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar1 = lVar7;
      func_0x000107c4c458();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c5df94(lVar1);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1026664a4; end: 102666573;  */

void FUN_1026664a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar1 = &UNK_11052fd60;
    func_0x000107c613fc(&UNK_11052fd60,0x20,7);
    *(undefined **)(puVar1 + 0x10) = &UNK_10dac7218;
    *(long *)(puVar1 + 0x18) = param_1;
    func_0x000107c6157c(param_1);
    uVar2 = 0x10;
    func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac7228,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102666574; end: 10266695b;  */

void FUN_102666574(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 0x60);
    if (lVar8 != 0) {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c61174(lVar8);
      func_0x000107c4807c();
      puVar3 = &UNK_11052fbf8;
      func_0x000107c613fc(&UNK_11052fbf8,0x18,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      puVar4 = &UNK_11052fc20;
      func_0x000107c613fc(&UNK_11052fc20,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar2;
      *(long *)(puVar4 + 0x18) = param_1;
      puVar5 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x102667ad8;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100e1779c;
      puStack_90 = &UNK_11052fc38;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar6);
      uStack_b8 = 0x102667ae4;
      puStack_d8 = puVar1;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_100e17304;
      puStack_c0 = &UNK_11052fc60;
      ppuVar7 = &puStack_d8;
      puStack_b0 = puVar4;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61174(puVar2);
      func_0x000107c6157c(param_1);
      func_0x000107c47be0();
      func_0x000107c61170(lVar8);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(puStack_b0);
      func_0x000107c61574(puStack_80);
      puVar3 = &UNK_11052fc98;
      func_0x000107c613fc(&UNK_11052fc98,0x20,7);
      *(long *)(puVar3 + 0x10) = param_1;
      *(undefined **)(puVar3 + 0x18) = puVar5;
      func_0x000107c6157c(param_1);
      func_0x000107c61174(puVar5);
      func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac71f8,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(param_1);
      func_0x000107c61170(puVar5);
      func_0x000107c61574(puVar3);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10266695c; end: 1026669db;  */

void FUN_10266695c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 2) {
    lVar1 = *(long *)(param_2 + 0x18);
    func_0x000107c4d1cc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c50044(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1026669dc; end: 102666a4b;  */

void FUN_1026669dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = param_1 + 0x70;
  func_0x000107c61604(lVar2,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(param_1 + 0x90)) + 0x58))();
  if (lVar2 != 0) {
    func_0x000107c4c328();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 102666a4c; end: 102666b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102666a4c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = param_1;
    func_0x000107c61170(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(param_1);
    func_0x000107c45a48(puVar1);
    func_0x000107c4d664(*(undefined8 *)(param_2 + 0x88));
    func_0x000107c61574(param_2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102666b0c; end: 102666ba7;  */

void FUN_102666b0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102666b58;
  plVar1[2] = param_2;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[4] = lVar2;
  plVar1[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102666ddc,lVar2,lVar3);
  return;
}



/* Entry: 102666ba8; end: 102666d6f;  */

void FUN_102666ba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x28);
  if (lVar9 != 0) {
    lVar8 = *(long *)(unaff_x22 + 0x10);
    puVar2 = PTR_PTR_1126b20d0;
    func_0x000107c610f8();
    func_0x000107c48224();
    puVar3 = PTR_PTR_1126b20d8;
    func_0x000107c610f8(PTR_PTR_1126b20d8);
    func_0x000107c453e4();
    puVar4 = puVar3;
    func_0x000107c5e47c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = PTR_PTR_1126ae6d0;
    func_0x000107c610f8(PTR_PTR_1126ae6d0);
    func_0x000107c4831c();
    puVar5 = PTR_PTR_1126b1bb0;
    func_0x000107c61168(PTR_PTR_1126b1bb0);
    func_0x000107c3e6c4();
    func_0x000107c61180();
    lVar10 = *(long *)(lVar8 + 0x50);
    lVar6 = lVar10;
    func_0x000107c5194c();
    func_0x000107c61180();
    lVar8 = 0;
    if (lVar6 != 0) {
      func_0x000107c61170();
      lVar8 = lVar10;
      func_0x000107c4ffe8(lVar10);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x58);
    func_0x0001091f3d04();
    func_0x000107c61180();
    puVar7 = puVar4;
    func_0x000107c3ecc8(puVar4);
    func_0x000107c61180();
    func_0x000107c3ed80(uVar11,param_2,puVar5,uVar1,0,lVar8,1,puVar7,0);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(lVar8);
    func_0x000107c42c1c(lVar10,param_2,uVar11);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x000102666d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102666d70; end: 102666ddb;  */

void FUN_102666d70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102666ddc,uVar1,uVar2);
  return;
}



/* Entry: 102666ddc; end: 102666ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102666ddc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x80);
  if ((lVar2 != 0) && (*(long *)(lVar2 + _DAT_112fed300) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + _DAT_112fed300) + _DAT_112fed258);
    *(undefined8 *)(unaff_x22 + 0x30) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0x38) = puVar1[1];
    if (*(long *)(lVar2 + _DAT_112fed320) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar2 + _DAT_112fed320) + _DAT_112fed350);
      *(undefined8 *)(unaff_x22 + 0x40) = *puVar1;
      uVar4 = puVar1[1];
      *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
      plVar3 = (long *)0x70;
      func_0x000107c61434();
      func_0x000107c61434(uVar4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_102666ec8;
      plVar3[0xb] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102667210,0,0);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102666ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102666ec8; end: 102666f13;  */

void FUN_102666ec8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102666f14,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 102666f14; end: 102666fff;  */

void FUN_102666f14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c6142c(uVar6);
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar7 = PTR_PTR_1126b20c8;
    func_0x000107c61168(PTR_PTR_1126b20c8);
    func_0x000107c5fadc(uVar3,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c437d4(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000102666ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar7);
  return;
}



/* Entry: 102667000; end: 1026671f7;  */

void FUN_102667000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = &UNK_11052fa40;
  func_0x000107c613fc(&UNK_11052fa40,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_4);
  puVar2 = &UNK_11052fd10;
  func_0x000107c613fc(&UNK_11052fd10,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_102667bac;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_11052fd28;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1026671f8; end: 10266720f;  */

void FUN_1026671f8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102667210,0,0);
  return;
}



/* Entry: 102667210; end: 1026672ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102667210(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x58) + 0x40) + _DAT_113072c10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1026672ac;
    func_0x000107c61448(unaff_x22 + 0x10,0);
    FUN_1026675e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001026672a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026672ac; end: 10266731f;  */

void FUN_1026672ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1026672ec,0,0);
  return;
}



/* Entry: 102667320; end: 10266740b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102667320(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar3 = lVar1;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112fcd628);
      uVar5 = ((undefined8 *)(lVar3 + _DAT_112fcd628))[1];
      func_0x000107c61434(uVar5);
      func_0x000107c61170(lVar3);
      goto LAB_1026673f4;
    }
  }
  uVar4 = 0;
  uVar5 = 0;
LAB_1026673f4:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 10266740c; end: 1026675df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10266740c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + _DAT_113072718);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      lVar3 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      param_2 = lVar3;
    }
    lVar3 = lVar1;
    func_0x000107c410e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar1);
      goto LAB_1026675c4;
    }
    func_0x000107c615e8(lVar1);
  }
  lVar2 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar3 = lVar1;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      lVar2 = 0;
      param_2 = 0;
      goto LAB_1026675c4;
    }
    lVar1 = lVar3;
    func_0x000107c5bd58();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + _DAT_113072870);
      param_2 = ((long *)(lVar1 + _DAT_113072870))[1];
      func_0x000107c61434(param_2);
      func_0x000107c61170(lVar1);
      goto LAB_1026675c4;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_1026675c4:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 1026675e0; end: 10266778f;  */

void FUN_1026675e0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  lVar3 = param_2;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar2 + -8);
  lVar7 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_102667320();
  if (lVar3 == 0) {
    FUN_10266740c();
    lVar1 = 0;
    lVar6 = lVar3;
  }
  else {
    lVar6 = lVar3;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
    FUN_10266740c();
    lVar1 = lVar7;
    lVar7 = lVar3;
  }
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar6);
  }
  func_0x0001000295c4(0);
  (**(code **)(lVar9 + 0x68))
            (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar2);
  lVar3 = lVar8;
  func_0x000107c5fff0(lVar8);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  puVar4 = &UNK_11052fcc0;
  func_0x000107c613fc(&UNK_11052fcc0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  pcStack_60 = FUN_102667b7c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10134a1dc;
  puStack_68 = &UNK_11052fcd8;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_58);
  func_0x000107c42ff4(param_2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102667790; end: 1026677fb;  */

void FUN_102667790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026677fc,uVar1,uVar2);
  return;
}



/* Entry: 1026677fc; end: 1026678ef;  */

void FUN_1026677fc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar5 = lVar4 + 0x70;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x18);
    func_0x000107c4d1cc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c50044(lVar2);
      func_0x000107c615e8(lVar5);
      lVar5 = lVar2;
    }
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(lVar5 + 0x60) = 0;
  func_0x000107c61170(uVar3);
  lVar4 = lVar4 + 0x70;
  func_0x000107c61604(lVar4,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(lVar5 + 0x90)) + 0x58))();
  if (lVar4 != 0) {
    func_0x000107c4c328();
    func_0x000107c615e8(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026678ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026678f0; end: 1026679c7;  */

void FUN_1026678f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102667928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026679c8; end: 1026679eb;  */

undefined8 FUN_1026679c8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026679ec; end: 102667a0b;  */

void FUN_1026679ec(void)

{
  func_0x00010266792c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102667a0c; end: 102667a2b;  */

undefined1  [16] FUN_102667a0c(void)

{
  return ZEXT816(0x11052f9d8);
}



/* Entry: 102667a2c; end: 102667a4b;  */

void FUN_102667a2c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb2568);
  return;
}



/* Entry: 102667a4c; end: 102667a7f;  */

void FUN_102667a4c(long param_1,long param_2)

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



/* Entry: 102667a80; end: 102667a9f;  */

void FUN_102667a80(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102667aa0; end: 102667aa7;  */

void FUN_102667aa0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = unaff_x20 + 0x70;
  func_0x000107c61604(lVar2,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x90)) + 0x58))();
  if (lVar2 != 0) {
    func_0x000107c4c328();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 102667aa8; end: 102667ac7;  */

void FUN_102667aa8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102667ac8; end: 102667aeb;  */

void FUN_102667ac8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = &UNK_11052fd60;
    func_0x000107c613fc(&UNK_11052fd60,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dac7218;
    *(long *)(puVar2 + 0x18) = lVar1;
    func_0x000107c6157c(lVar1);
    uVar3 = 0x10;
    func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac7228,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102667aec; end: 102667b17;  */

void FUN_102667aec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102667b18; end: 102667b7b;  */

void FUN_102667b18(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102667cfc;
  plVar4[2] = lVar3;
  plVar4[3] = lVar2;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  plVar4[4] = (long)plVar1;
  *plVar1 = (long)plVar4;
  plVar1[1] = 0x102666b58;
  plVar1[2] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[4] = lVar2;
  plVar1[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102666ddc,lVar2,lVar3);
  return;
}



/* Entry: 102667b7c; end: 102667bab;  */

void FUN_102667b7c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102667bac; end: 102667bb7;  */

void FUN_102667bac(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x50);
    func_0x000107c61174();
    func_0x000107c61574(lVar2);
    lVar2 = lVar5;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
      lVar3 = lVar3 + 0x10;
      func_0x000107c61648();
      if (lVar3 != 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x50);
        func_0x000107c61174(uVar6);
        func_0x000107c61574(lVar3);
        uVar4 = uVar6;
        func_0x000107c4ffe8(uVar6);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(uVar4);
      }
    }
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 102667bb8; end: 102667c3b;  */

void FUN_102667bb8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102667c00;
  plVar3[2] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[3] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026677fc,lVar1,lVar2);
  return;
}



/* Entry: 102667c3c; end: 102667cab;  */

void FUN_102667c3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102667d00;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102667cac; end: 102667d03;  */

void FUN_102667cac(long param_1,long param_2)

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



/* Entry: 102667d04; end: 102667d4f;  */

void FUN_102667d04(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102667ddc,param_1);
  return;
}



/* Entry: 102667d50; end: 102667ddb;  */

void FUN_102667d50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e99f48;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102667ddc; end: 102667df3;  */

void FUN_102667ddc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e99f48;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102667df4; end: 102668017;  */

void FUN_102667df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb2648,&UNK_10dac7260);
  puVar1 = &UNK_11052fe50;
  func_0x000107c613fc(&UNK_11052fe50,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(0x102667ef8,puVar1);
  return;
}



/* Entry: 102668018; end: 102668027;  */

undefined1  [16] FUN_102668018(void)

{
  return ZEXT816(0x11052fe78);
}



/* Entry: 102668028; end: 10266808b;  */

void FUN_102668028(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10266808c; end: 10266859f;  */

void FUN_10266808c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x0001000285a8(0x112eb2658,&UNK_10dac72d8);
  func_0x0001000838ec();
  FUN_10266d44c(uVar7);
  func_0x000100082720("SCCaaSCameraScopeExposerServiceProvider",0x27,2);
  FUN_102669b80(uVar8,uVar1,uVar7,uVar4,uVar2,uVar5,uVar3,uVar6,param_2,uVar9);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(param_2);
  func_0x000100082720("MapGenAISnapPresenterEntryPointProvider",0x27,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1026685a0; end: 10266876b;  */

void FUN_1026685a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x73746570;
  if (cVar4 != '\x01') {
    uVar3 = 0x747865746e6f63;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x73696a6f6d746962;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10266876c; end: 102668817;  */

void FUN_10266876c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x73746570;
  if (cVar4 != '\x01') {
    uVar3 = 0x747865746e6f63;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x73696a6f6d746962;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102668818; end: 10266883b;  */

void FUN_102668818(undefined1 *param_1,undefined1 param_2)

{
  FUN_102669b04();
  *param_1 = param_2;
  return;
}



/* Entry: 10266883c; end: 102668853;  */

undefined1  [16] FUN_10266883c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102668854; end: 1026688a3;  */

void FUN_102668854(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102668a50();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1026688a4; end: 102668a4f;  */

void FUN_1026688a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [13];
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112eb2660;
  func_0x0001000285a8(0x112eb2660,&UNK_10dac72e0);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102668a50();
  func_0x000107c606ec(puVar5,&UNK_1105300e8,&UNK_1105300e8,param_1,uVar2,uVar3);
  uStack_51 = 0;
  func_0x0001000285a8(0x112eb2670,&UNK_10dac72e8);
  FUN_102668a90();
  func_0x000107c60554();
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar3 = uVar2;
    func_0x000102668b40();
    puVar4 = &uStack_52;
    func_0x000107c60554(unaff_x20 + 8,puVar4,lVar1,uVar2,uVar3);
    func_0x00010266818c();
    uStack_53 = 2;
    func_0x000107c6053c();
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
    func_0x000107c6142c(puVar4);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
  return;
}



/* Entry: 102668a50; end: 102668a8f;  */

void FUN_102668a50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac75b8;
  func_0x000107c61520(&UNK_10dac75b8,&UNK_1105300e8);
  puRam0000000112eb2668 = puVar1;
  return;
}



/* Entry: 102668a90; end: 102668aff;  */

void FUN_102668a90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112eb2678 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb2670;
  func_0x00010002969c(0x112eb2670,&UNK_10dac72e8);
  uVar2 = uVar1;
  FUN_102668b00();
  puVar3 = PTR___sSayxGSEsSERzlMc_11034dce0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSEsSERzlMc_11034dce0,uVar1,&uStack_28);
  puRam0000000112eb2678 = puVar3;
  return;
}



/* Entry: 102668b00; end: 102668bbb;  */

void FUN_102668b00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7328;
  func_0x000107c61520(&UNK_10dac7328,&UNK_11052ffc0);
  puRam0000000112eb2680 = puVar1;
  return;
}



/* Entry: 102668bbc; end: 102668c67;  */

void FUN_102668bbc(void)

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



/* Entry: 102668c68; end: 102668ca3;  */

undefined1  [16] FUN_102668c68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6449656e656373;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6449726174617661;
  }
  uVar2 = 0xe700000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102668ca4; end: 102668d7b;  */

void FUN_102668ca4(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x6449726174617661;
  if ((param_2 == 0x6449726174617661 && param_3 == -0x1800000000000000) ||
     (func_0x000107c605b8(0x6449726174617661,0xe800000000000000,param_2,param_3,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x6449656e656373;
    if ((param_2 == 0x6449656e656373) && (param_3 == -0x1900000000000000)) {
      func_0x000107c6142c(0xe700000000000000);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x6449656e656373,0xe700000000000000,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102668d7c; end: 102668d93;  */

undefined1  [16] FUN_102668d7c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102668d94; end: 102668de3;  */

void FUN_102668d94(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102668f24();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102668de4; end: 102668f23;  */

void FUN_102668de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112eb2688;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112eb2688,&UNK_10dac72f8);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102668f24();
  func_0x000107c606ec(lVar5,&UNK_110530058,&UNK_110530058,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(uStack_70,uStack_68,&uStack_52,lVar3);
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 102668f24; end: 102668f7f;  */

void FUN_102668f24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac7568;
  func_0x000107c61520(&UNK_10dac7568,&UNK_110530058);
  puRam0000000112eb2690 = puVar1;
  return;
}



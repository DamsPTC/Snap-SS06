/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027922b4; end: 1027922b7; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController defaultProjectNameV2] */

void FUN_1027922b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010407010c();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027922b8; end: 10279252f;  */

void FUN_1027922b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebde68,&UNK_10dad9240);
  puVar1 = &UNK_110548d68;
  func_0x000107c613fc(&UNK_110548d68,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_10;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_11;
  *(undefined8 *)(puVar1 + 0x58) = param_12;
  *(undefined8 *)(puVar1 + 0x60) = param_5;
  *(undefined8 *)(puVar1 + 0x68) = param_7;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x1027923e4,puVar1);
  return;
}



/* Entry: 102792530; end: 10279253f;  */

undefined1  [16] FUN_102792530(void)

{
  return ZEXT816(0x110548d90);
}



/* Entry: 102792540; end: 1027925bb;  */

void FUN_102792540(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027925bc; end: 1027928c3;  */

void FUN_1027925bc(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uStack_68;
  
  uVar18 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar20 = *param_2;
  func_0x0001000285a8(0x112ebde78,&UNK_10dad9290);
  puVar8 = &uStack_68;
  uStack_68 = uVar20;
  func_0x0001000838ec();
  uVar20 = uVar18;
  FUN_1027958b4(uVar18,uVar10);
  func_0x000100082720("MemTwoPickerMultiPickModeActionHandlerServiceProvider",0x35,2);
  uVar9 = uVar18;
  FUN_102796b0c(uVar18,uVar10);
  func_0x000100082720("MemTwoPickerSinglePickModeActionHandlerServiceProvider",0x36,2);
  uVar10 = uVar18;
  FUN_102792fe0();
  func_0x000100082720("MemTwoPickerValdiComponentActionHandlerServiceProvider",0x36,2);
  uVar11 = uVar18;
  FUN_10279352c(uVar18);
  func_0x000100082720("MemTwoPickerValdiComponentCameraLauncherServiceProvider",0x37,2);
  puVar12 = puVar8;
  FUN_1027939c0(puVar8,uVar15,uVar3);
  pcVar13 = "MemTwoPickerValdiComponentDeckHierarchyServiceProvider";
  func_0x000100082720("MemTwoPickerValdiComponentDeckHierarchyServiceProvider",0x36,2);
  FUN_102793e5c();
  func_0x000100082720("MemTwoPickerValdiComponentTrimEditorLauncherServiceProvider",0x3b,2);
  puVar14 = puVar8;
  FUN_102793fc8(puVar8,uVar16,uVar18,uVar10,uVar11,uVar4,uVar17,puVar12,uVar5,uVar1,pcVar13,uVar6);
  func_0x000100082720("MemTwoPickerValdiComponentContextServiceProvider",0x30,2);
  uVar15 = uVar18;
  FUN_102793bf4(uVar18);
  func_0x000100082720("MemTwoPickerValdiComponentHeaderConfigurationServiceProvider",0x3c,2);
  uVar16 = uVar18;
  FUN_102796788(uVar18,uVar20);
  func_0x000100082720("MemTwoPickerValdiComponentMultiPickModeConfigServiceProvider",0x3c,2);
  uVar17 = uVar18;
  FUN_102797450(uVar18,uVar9);
  func_0x000100082720("MemTwoPickerValdiComponentSinglePickModeConfigServiceProvider",0x3d,2);
  FUN_102794e50(uVar18,uVar17,uVar16,uVar15,uVar2);
  func_0x000100082720("MemTwoPickerValdiComponentViewModelServiceProvider",0x32,2);
  puVar19 = puVar14;
  FUN_102794a18(puVar14,uVar18,uVar7);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(puVar8);
  func_0x000100082720("MemTwoPickerValdiComponentEntryPointProvider",0x2c,2);
  *param_1 = puVar19;
  return;
}



/* Entry: 1027928c4; end: 102792a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027928c4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x20;
  long lVar9;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar8 = &lStack_90;
  puVar3 = PTR_PTR_1126aaea0;
  func_0x000107c610f8(PTR_PTR_1126aaea0);
  func_0x000107c453e4();
  if (unaff_x20[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *unaff_x20;
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c57830(puVar3);
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126aaea8;
  func_0x000107c610f8(PTR_PTR_1126aaea8);
  func_0x000107c48174();
  func_0x000107c59d38(puVar3);
  func_0x000107c61170(puVar5);
  lVar9 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  if (lVar9 != 0) {
    lVar6 = 0;
    uStack_60 = uVar4;
    lStack_58 = lVar9;
    FUN_102792cf8();
    lVar7 = lVar6;
    func_0x000107c610f8();
    uVar2 = uStack_48;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ebde80);
    *puVar1 = uVar4;
    puVar1[1] = lVar9;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ebde88);
    puVar1[1] = uStack_48;
    *puVar1 = uStack_50;
    FUN_102792e14(&uStack_60,auStack_80);
    puVar5 = PTR_s_init_1125d9248;
    lStack_90 = lVar7;
    lStack_88 = lVar6;
    func_0x000107c61434(lVar9);
    func_0x000107c6157c(uVar2);
    func_0x000107c61154(&lStack_90,puVar5);
    func_0x000107c592fc(puVar3);
    func_0x000107c61574(uVar2);
    func_0x000107c6142c(lVar9);
    func_0x000107c61170(plVar8);
  }
  return puVar3;
}



/* Entry: 102792a28; end: 102792a83; -[_TtC40MemTwoPickerValdiComponentImplementationP33_67E7A9FD66FBAA5AC81F826A3A9E9D1429MemTwoPickerSkipConfigAdapter skipButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102792a28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ebde80))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ebde80);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102792a84; end: 102792acf; -[_TtC40MemTwoPickerValdiComponentImplementationP33_67E7A9FD66FBAA5AC81F826A3A9E9D1429MemTwoPickerSkipConfigAdapter setSkipButtonTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102792a84(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_112ebde80);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 102792ad0; end: 102792b3b;  */

void FUN_102792ad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102792b3c,uVar1,uVar2);
  return;
}



/* Entry: 102792b3c; end: 102792b73;  */

void FUN_102792b3c(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x000102792b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102792b74; end: 102792c57; -[_TtC40MemTwoPickerValdiComponentImplementationP33_67E7A9FD66FBAA5AC81F826A3A9E9D1429MemTwoPickerSkipConfigAdapter onSkipPressed] */

/* WARNING: Possible PIC construction at 0x000102792c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102792c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102792b74(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebde88);
  puVar2 = &UNK_110548e58;
  func_0x000107c613fc(&UNK_110548e58,0x20,7);
  uVar4 = puVar1[1];
  uVar5 = *puVar1;
  *(undefined8 *)(puVar2 + 0x18) = puVar1[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  puVar3 = &UNK_110548e80;
  func_0x000107c613fc(&UNK_110548e80,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dad92f8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar4);
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad9300,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102792c58; end: 102792cb7; -[_TtC40MemTwoPickerValdiComponentImplementationP33_67E7A9FD66FBAA5AC81F826A3A9E9D1429MemTwoPickerSkipConfigAdapter init] */

void FUN_102792c58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerValdiComponentImplementation.MemTwoPickerSkipConfigAdapter",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102792c84);
  (*pcVar1)();
}



/* Entry: 102792cb8; end: 102792cf7; -[_TtC40MemTwoPickerValdiComponentImplementationP33_67E7A9FD66FBAA5AC81F826A3A9E9D1429MemTwoPickerSkipConfigAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102792cb8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebde80 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebde88 + 8));
  return;
}



/* Entry: 102792cf8; end: 102792d17;  */

void FUN_102792cf8(void)

{
  func_0x000107c61168(&PTR_PTR_1128606c0);
  return;
}



/* Entry: 102792d18; end: 102792d67;  */

void FUN_102792d18(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102792d68;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102792b3c,lVar1,lVar2);
  return;
}



/* Entry: 102792d68; end: 102792da3;  */

void FUN_102792d68(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102792da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102792da4; end: 102792e13;  */

void FUN_102792da4(undefined8 param_1)

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
  plVar3[1] = (long)FUN_102792e64;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102792e14; end: 102792e63;  */

undefined8 FUN_102792e14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ebdeb8;
  func_0x0001000285a8(0x112ebdeb8,&UNK_10dad9308);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102792e64; end: 102792e67;  */

void FUN_102792e64(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102792da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102792e68; end: 102792e7b;  */

undefined4 FUN_102792e68(ulong param_1)

{
  return *(undefined4 *)(&UNK_10dad9310 + (param_1 & 0xff) * 4);
}



/* Entry: 102792e7c; end: 102792fdf;  */

undefined * FUN_102792e7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined *puVar4;
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  puVar2 = PTR_PTR_1126aaeb0;
  func_0x000107c610f8(PTR_PTR_1126aaeb0);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c49588(puVar2);
  func_0x000107c61170(uVar3);
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c5635c(puVar2);
  func_0x000107c61170(puVar4);
  if (*(char *)(unaff_x20 + 5) == '\x01') {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c56374(puVar2);
  func_0x000107c61170(puVar4);
  if (*(char *)(unaff_x20 + 7) == '\x01') {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c56368(puVar2);
  func_0x000107c61170(puVar4);
  if (*(char *)(unaff_x20 + 9) == '\x01') {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c53f8c(puVar2);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 102792fe0; end: 10279302b;  */

void FUN_102792fe0(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebdec0,&UNK_10dad9370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102793098,param_1);
  return;
}



/* Entry: 10279302c; end: 102793097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10279302c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10279339c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebdec8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102793098; end: 10279309f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102793098(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10279339c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebdec8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027930a0; end: 1027930eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027930a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebdec8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027930ec; end: 102793103;  */

void FUN_1027930ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102793104,0,0);
  return;
}



/* Entry: 102793104; end: 10279316b;  */

void FUN_102793104(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279316c,uVar1,uVar2);
  return;
}



/* Entry: 10279316c; end: 1027931a7;  */

void FUN_10279316c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c41864(*(undefined8 *)(lVar1 + 8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x0001027931a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027931a8; end: 102793267; -[_TtC40MemTwoPickerValdiComponentImplementation39MemTwoPickerValdiComponentActionHandler onBackPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027931a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_170 [320];
  
  func_0x000107c61174();
  func_0x000100083b20(auStack_170);
  puVar1 = &UNK_110548ec8;
  func_0x000107c613fc(&UNK_110548ec8,0x14b,7);
  func_0x000107c610b4(puVar1 + 0x10,auStack_170,0x13b);
  uVar2 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad93e8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102793268; end: 10279326b; -[_TtC40MemTwoPickerValdiComponentImplementation39MemTwoPickerValdiComponentActionHandler onGrantCameraRollAccessButtonClicked] */

void FUN_102793268(void)

{
  return;
}



/* Entry: 10279326c; end: 10279326f; -[_TtC40MemTwoPickerValdiComponentImplementation39MemTwoPickerValdiComponentActionHandler openSystemSettings] */

void FUN_10279326c(void)

{
  return;
}



/* Entry: 102793270; end: 102793307;  */

long FUN_102793270(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10,char param_11)

{
  func_0x000107c61574(param_2);
  if (param_11 != '\x01') {
    return param_2;
  }
  func_0x000107c61574(param_4);
  FUN_102793308(param_5,param_6,param_7);
  if (param_10 == 1) {
    return param_8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_10,param_9);
  return param_10;
}



/* Entry: 102793308; end: 10279331b;  */

void FUN_102793308(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10279331c; end: 10279337b; -[_TtC40MemTwoPickerValdiComponentImplementation39MemTwoPickerValdiComponentActionHandler init] */

void FUN_10279331c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerValdiComponentImplementation.MemTwoPickerValdiComponentActionHandler"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102793348);
  (*pcVar1)();
}



/* Entry: 10279337c; end: 10279338b;  */

undefined1  [16] FUN_10279337c(void)

{
  return ZEXT816(0x110548ea8);
}



/* Entry: 10279338c; end: 10279339b; -[_TtC40MemTwoPickerValdiComponentImplementation39MemTwoPickerValdiComponentActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10279338c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebdec8));
  return;
}



/* Entry: 10279339c; end: 10279345f;  */

void FUN_10279339c(void)

{
  func_0x000107c61168(&PTR_PTR_112860788);
  return;
}



/* Entry: 102793460; end: 1027934b3;  */

void FUN_102793460(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1027934b4;
  plVar1[2] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102793104,0,0);
  return;
}



/* Entry: 1027934b4; end: 10279352b;  */

void FUN_1027934b4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027934ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10279352c; end: 102793577;  */

void FUN_10279352c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebdef8,&UNK_10dad93f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027935e4,param_1);
  return;
}



/* Entry: 102793578; end: 1027935e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102793578(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10279399c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebdf00) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027935e4; end: 1027935eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027935e4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10279399c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebdf00) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027935ec; end: 102793637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027935ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebdf00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102793638; end: 102793753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102793638(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_2b0 [304];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [216];
  long lStack_98;
  undefined8 uStack_90;
  
  func_0x000100083b20(auStack_180);
  FUN_10278997c(auStack_170,auStack_2b0);
  func_0x000102789a90(auStack_180);
  func_0x00010278996c(lStack_98,uStack_90);
  func_0x000102789a5c(auStack_170);
  if (lStack_98 != 0) {
    puVar1 = &UNK_110548ef0;
    func_0x000107c613fc(&UNK_110548ef0,0x20,7);
    *(long *)(puVar1 + 0x10) = lStack_98;
    *(undefined8 *)(puVar1 + 0x18) = uStack_90;
    puVar2 = &UNK_110548f18;
    func_0x000107c613fc(&UNK_110548f18,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dad9400;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000107c6157c(uStack_90);
    uVar3 = 0xc1;
    func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad9410,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
    FUN_102789a4c(lStack_98,uStack_90);
  }
  return;
}



/* Entry: 102793754; end: 1027937bf;  */

void FUN_102793754(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027937c0,uVar1,uVar2);
  return;
}



/* Entry: 1027937c0; end: 1027937f7;  */

void FUN_1027937c0(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0001027937f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027937f8; end: 10279381f; -[_TtC40MemTwoPickerValdiComponentImplementation40MemTwoPickerValdiComponentCameraLauncher launchCamera] */

void FUN_1027937f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102793638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102793820; end: 10279386f;  */

void FUN_102793820(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102793870;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027937c0,lVar1,lVar2);
  return;
}



/* Entry: 102793870; end: 1027938ab;  */

void FUN_102793870(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027938a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027938ac; end: 10279391b;  */

void FUN_1027938ac(undefined8 param_1)

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
  plVar3[1] = (long)FUN_1027939bc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10279391c; end: 10279397b; -[_TtC40MemTwoPickerValdiComponentImplementation40MemTwoPickerValdiComponentCameraLauncher init] */

void FUN_10279391c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerValdiComponentImplementation.MemTwoPickerValdiComponentCameraLauncher"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102793948);
  (*pcVar1)();
}



/* Entry: 10279397c; end: 10279398b;  */

undefined1  [16] FUN_10279397c(void)

{
  return ZEXT816(0x110548f40);
}



/* Entry: 10279398c; end: 10279399b; -[_TtC40MemTwoPickerValdiComponentImplementation40MemTwoPickerValdiComponentCameraLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10279398c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebdf00));
  return;
}



/* Entry: 10279399c; end: 1027939bb;  */

void FUN_10279399c(void)

{
  func_0x000107c61168(&PTR_PTR_112860848);
  return;
}



/* Entry: 1027939bc; end: 1027939bf;  */

void FUN_1027939bc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027938a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027939c0; end: 102793bd7;  */

void FUN_1027939c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebdf30,&UNK_10dad9490);
  puVar1 = &UNK_110548f60;
  func_0x000107c613fc(&UNK_110548f60,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102793bd8,puVar1);
  return;
}



/* Entry: 102793bd8; end: 102793bf3;  */

void FUN_102793bd8(long *param_1)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = lStack_48;
  lVar3 = lStack_48;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(lVar4);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    pcVar1 = "DeckHierarchyFactory is not available";
    uVar8 = 0x17;
  }
  else {
    func_0x000100083b20(&lStack_48);
    lVar3 = lStack_48;
    lVar5 = lVar4;
    func_0x000107c409cc();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000100083b20(&lStack_48);
      lVar6 = lStack_48;
      func_0x000107c5dbd4(lStack_48);
      func_0x000107c61180();
      func_0x000107c61170(lStack_48);
      lVar7 = lVar5;
      func_0x000107c40978();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar3);
      *param_1 = lVar7;
      return;
    }
    pcVar1 = "Failed to create native DeckHierarchy";
    uVar8 = 0x1c;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,
                      (ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "MemTwoPickerValdiComponentImplementation/DeckHierarchyServiceProvider.swift",
                      0x4b,2,uVar8,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102793bd8);
  (*pcVar2)();
}



/* Entry: 102793bf4; end: 102793c3f;  */

void FUN_102793bf4(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebdf38,&UNK_10dad94e0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102793e44,param_1);
  return;
}



/* Entry: 102793c40; end: 102793e43;  */

void FUN_102793c40(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_550 [304];
  undefined1 auStack_420 [320];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [216];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  
  func_0x000100083b20(auStack_2e0);
  func_0x000107c610b4(auStack_1a0,auStack_2e0,0x13b);
  FUN_10278997c(&uStack_190,auStack_420);
  func_0x000102789a90(auStack_1a0);
  func_0x000107c61434(lStack_178);
  func_0x000107c61434(lStack_188);
  func_0x000102789a5c(&uStack_190);
  puVar1 = PTR_PTR_1126aaeb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (lStack_188 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(lStack_188);
    uVar3 = uStack_190;
    func_0x000107c5fadc(uStack_190,lStack_188);
    func_0x000107c6142c(lStack_188);
  }
  func_0x000107c550a0(puVar1);
  func_0x000107c61170(uVar3);
  if (lStack_178 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(lStack_178);
    uVar3 = uStack_180;
    func_0x000107c5fadc(uStack_180,lStack_178);
    func_0x000107c6142c(lStack_178);
  }
  func_0x000107c5509c(puVar1);
  func_0x000107c6142c(lStack_178);
  func_0x000107c6142c(lStack_188);
  func_0x000107c61170(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c541ec(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000100083b20(auStack_420);
  func_0x000107c610b4(auStack_2e0,auStack_420,0x13b);
  FUN_10278997c(auStack_2d0,auStack_550);
  func_0x000102789a90(auStack_2e0);
  func_0x00010278996c(lStack_1f8,uStack_1f0);
  func_0x000102789a5c(auStack_2d0);
  if (lStack_1f8 != 0) {
    FUN_102789a4c(lStack_1f8,uStack_1f0);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c591e8(puVar1);
  func_0x000107c61170(puVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102793e44; end: 102793e5b;  */

void FUN_102793e44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_550 [304];
  undefined1 auStack_420 [320];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [216];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  
  func_0x000100083b20(auStack_2e0);
  func_0x000107c610b4(auStack_1a0,auStack_2e0,0x13b);
  FUN_10278997c(&uStack_190,auStack_420);
  func_0x000102789a90(auStack_1a0);
  func_0x000107c61434(lStack_178);
  func_0x000107c61434(lStack_188);
  func_0x000102789a5c(&uStack_190);
  puVar1 = PTR_PTR_1126aaeb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (lStack_188 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(lStack_188);
    uVar3 = uStack_190;
    func_0x000107c5fadc(uStack_190,lStack_188);
    func_0x000107c6142c(lStack_188);
  }
  func_0x000107c550a0(puVar1);
  func_0x000107c61170(uVar3);
  if (lStack_178 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(lStack_178);
    uVar3 = uStack_180;
    func_0x000107c5fadc(uStack_180,lStack_178);
    func_0x000107c6142c(lStack_178);
  }
  func_0x000107c5509c(puVar1);
  func_0x000107c6142c(lStack_178);
  func_0x000107c6142c(lStack_188);
  func_0x000107c61170(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c541ec(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000100083b20(auStack_420);
  func_0x000107c610b4(auStack_2e0,auStack_420,0x13b);
  FUN_10278997c(auStack_2d0,auStack_550);
  func_0x000102789a90(auStack_2e0);
  func_0x00010278996c(lStack_1f8,uStack_1f0);
  func_0x000102789a5c(auStack_2d0);
  if (lStack_1f8 != 0) {
    FUN_102789a4c(lStack_1f8,uStack_1f0);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c591e8(puVar1);
  func_0x000107c61170(puVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102793e5c; end: 102793ec7;  */

void FUN_102793e5c(void)

{
  func_0x0001000285a8(0x112ebdf40,&UNK_10dad9530);
  func_0x0001000823a8(0x102793e9c,0);
  return;
}



/* Entry: 102793ec8; end: 102793f27; -[_TtC40MemTwoPickerValdiComponentImplementation44MemTwoPickerValdiComponentTrimEditorLauncher launchWithItem:remainingDurationMs:] */

void FUN_102793ec8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0x6c706d6920746f4e,0xef6465746e656d65,
                      "MemTwoPickerValdiComponentImplementation/TrimEditorLauncher.swift",0x41,2,
                      0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102793f28);
  (*pcVar1)();
}



/* Entry: 102793f28; end: 102793f63; -[_TtC40MemTwoPickerValdiComponentImplementation44MemTwoPickerValdiComponentTrimEditorLauncher init] */

void FUN_102793f28(undefined8 param_1)

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



/* Entry: 102793f64; end: 102793f97;  */

void FUN_102793f64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102793f98; end: 102793fa7;  */

undefined1  [16] FUN_102793f98(void)

{
  return ZEXT816(0x110548fc8);
}



/* Entry: 102793fa8; end: 102793fc7;  */

void FUN_102793fa8(void)

{
  func_0x000107c61168(&PTR_PTR_112860908);
  return;
}



/* Entry: 102793fc8; end: 1027940fb;  */

void FUN_102793fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebdf70,&UNK_10dad95b0);
  puVar1 = &UNK_110548fe8;
  func_0x000107c613fc(&UNK_110548fe8,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_12;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_9;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_2;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_1;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027946c8,puVar1);
  return;
}



/* Entry: 1027940fc; end: 1027946c7;  */

void FUN_1027940fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_580;
  undefined8 auStack_578 [38];
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  code *pcStack_420;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [320];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  long lStack_180;
  
  uVar1 = 0x112ebdf78;
  func_0x0001000285a8(0x112ebdf78,&UNK_10dad95f8);
  uVar2 = 0x102794a04;
  func_0x00010072927c(0x102794a04,0,uVar1);
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_198 = (code *)0x1027949f4;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0x42000000;
  puStack_1a8 = &UNK_101016bdc;
  puStack_1a0 = &UNK_110549020;
  ppuVar4 = &puStack_1b8;
  pcStack_190 = (code *)uVar2;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c46b38();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(pcStack_190);
  uVar1 = 0x112ebdf80;
  func_0x0001000285a8(0x112ebdf80,&UNK_10dad9600);
  uVar2 = 0x102794a00;
  func_0x00010072927c(0x102794a00,0,uVar1);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8();
  pcStack_198 = FUN_102794810;
  puStack_1b8 = puVar10;
  uStack_1b0 = 0x42000000;
  puStack_1a8 = &UNK_101016bdc;
  puStack_1a0 = &UNK_110549048;
  ppuVar4 = &puStack_1b8;
  pcStack_190 = (code *)uVar2;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c46b38();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(pcStack_190);
  uVar1 = 0x112ebbf68;
  func_0x0001000285a8(0x112ebbf68,&UNK_10dad5508);
  pcVar6 = FUN_102794714;
  func_0x00010072927c(FUN_102794714,0,uVar1);
  puVar7 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_198 = (code *)0x1027949f8;
  puStack_1b8 = puVar10;
  uStack_1b0 = 0x42000000;
  puStack_1a8 = &UNK_101016bdc;
  puStack_1a0 = &UNK_110549070;
  ppuVar4 = &puStack_1b8;
  pcStack_190 = pcVar6;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c46b38(puVar7);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(pcStack_190);
  func_0x000100083b20(&puStack_448);
  puVar10 = puStack_448;
  func_0x000100083b20(auStack_578);
  func_0x000100083b20(&uStack_300);
  uVar1 = uStack_300;
  func_0x000107c61174(puVar7);
  func_0x000100083b20(&uStack_308);
  uVar2 = uStack_308;
  func_0x000107c41408(uStack_308);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_308);
  func_0x000100083b20(&puStack_1b8);
  func_0x000107c610b4(auStack_2f8,&puStack_1b8,0x13b);
  func_0x000102789a90(auStack_2f8);
  FUN_102792e68(auStack_2f8[0]);
  func_0x000100083b20(&puStack_1b8);
  puVar9 = puStack_1b8;
  puVar8 = puStack_1b8;
  func_0x000107c41428();
  func_0x000107c61180();
  func_0x000107c615e8(puVar9);
  puVar9 = PTR_PTR_1126aaec0;
  func_0x000107c610f8();
  func_0x000107c454d8();
  func_0x000107c61170(puVar10);
  func_0x000107c615e8(auStack_578[0]);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(puVar8);
  func_0x000100083b20(&puStack_448);
  func_0x000107c610b4(&puStack_1b8,&puStack_448,0x13b);
  FUN_10278997c(&puStack_1a8,auStack_578);
  func_0x000102789a90(&puStack_1b8);
  lVar11 = *(long *)(lStack_180 + 0x10);
  if (lVar11 != 0) {
    puVar12 = (ulong *)(lStack_180 + 0x28);
    do {
      uVar13 = *puVar12;
      if (1 < uVar13) {
        uVar14 = puVar12[-1];
        func_0x000107c61434(uVar13);
        goto LAB_1027944d8;
      }
      puVar12 = puVar12 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  uVar14 = 0;
  uVar13 = 0;
LAB_1027944d8:
  func_0x000102789a5c(&puStack_1a8);
  func_0x000100083b20(&uStack_300);
  func_0x000100083b20(auStack_578);
  FUN_102794834(uVar14,uVar13,uStack_300,auStack_578);
  func_0x000107c61170(uStack_300);
  func_0x000107c6142c(uVar13);
  func_0x0001000834e4(auStack_578);
  func_0x000107c575f0(puVar9);
  func_0x000107c61170(uVar14);
  puVar10 = &UNK_1105490a8;
  func_0x000107c613fc(&UNK_1105490a8,0x18,7);
  func_0x000100083b20(&puStack_448);
  func_0x000107c61614(puVar10 + 0x10,puStack_448);
  func_0x000107c61170(puStack_448);
  uVar1 = 0x112ebbf50;
  func_0x0001000285a8(0x112ebbf50,&UNK_10dad54f0);
  pcVar6 = FUN_1027949a0;
  func_0x00010072927c(FUN_1027949a0,puVar10,uVar1);
  func_0x000107c61574(puVar10);
  puVar10 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_428 = 0x1027949fc;
  puStack_448 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_440 = 0x42000000;
  puStack_438 = &UNK_101016bdc;
  puStack_430 = &UNK_1105490c0;
  ppuVar4 = &puStack_448;
  pcStack_420 = pcVar6;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c46b38(puVar10);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(pcStack_420);
  func_0x000107c5308c(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000100083b20(&puStack_448);
  puVar10 = puStack_448;
  puStack_580 = PTR_DAT_11269f0a8;
  puVar8 = puStack_448;
  func_0x000107c61494(puStack_448,1,&puStack_580);
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c615e8(puVar10);
  }
  func_0x000107c55378(puVar9);
  func_0x000107c615e8(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar7);
  *param_1 = puVar9;
  return;
}



/* Entry: 1027946c8; end: 102794703;  */

void FUN_1027946c8(void)

{
  long unaff_x20;
  
  FUN_1027940fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102794704; end: 102794713;  */

undefined1  [16] FUN_102794704(void)

{
  return ZEXT816(0x110549010);
}



/* Entry: 102794714; end: 10279476b;  */

void FUN_102794714(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  uVar3 = 0x40;
  (**(code **)(lVar2 + 8))(0x40,0,0x48,3,uVar1,lVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10279476c; end: 1027947f3;  */

void FUN_10279476c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar2 = param_3;
  (**(code **)(lVar1 + 8))();
  func_0x000107c61170(param_3);
  *param_1 = lVar2;
  return;
}



/* Entry: 1027947f4; end: 10279480f;  */

void FUN_1027947f4(long param_1,long param_2)

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



/* Entry: 102794810; end: 102794833;  */

undefined8 FUN_102794810(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 102794834; end: 10279499f;  */

undefined * FUN_102794834(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_2 == 0) {
    return (undefined *)0x0;
  }
  func_0x000107c4d604();
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    lVar1 = *(long *)(param_4 + 0x20);
    func_0x0001000a8868(param_4,uVar4);
    (**(code **)(lVar1 + 8))(&uStack_88,uVar4,lVar1);
    if (lStack_58 != 0) {
      puVar3 = PTR_PTR_1126c66d8;
      func_0x000107c610f8(PTR_PTR_1126c66d8);
      func_0x000107c61434(lStack_58);
      uVar4 = uStack_88;
      func_0x000107c5fadc(uStack_88,uStack_80);
      uVar5 = uStack_60;
      func_0x000107c5fadc(uStack_60,lStack_58);
      func_0x000107c6142c(lStack_58);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c47ab0(0x4038000000000000,puVar3);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(param_1);
      FUN_1027949a8(&uStack_88);
      return puVar3;
    }
    FUN_1027949a8(&uStack_88);
    func_0x000107c615e8(lVar2);
  }
  return (undefined *)0x0;
}



/* Entry: 1027949a0; end: 1027949a7;  */

void FUN_1027949a0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = lVar2;
  (**(code **)(lVar1 + 8))();
  func_0x000107c61170(lVar2);
  *param_1 = lVar3;
  return;
}



/* Entry: 1027949a8; end: 1027949db;  */

undefined8 FUN_1027949a8(undefined8 param_1)

{
  (*(code *)&DAT_103ee94c8)();
  return param_1;
}



/* Entry: 1027949dc; end: 102794a17;  */

void FUN_1027949dc(long param_1,long param_2)

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



/* Entry: 102794a18; end: 102794aaf;  */

void FUN_102794a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebdf88,&UNK_10dad9610);
  puVar1 = &UNK_1105490f8;
  func_0x000107c613fc(&UNK_1105490f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102794ab0,puVar1);
  return;
}



/* Entry: 102794ab0; end: 102794b03;  */

void FUN_102794ab0(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_102794c50(0);
  pcVar2 = FUN_102794c44;
  func_0x00010488bc98(FUN_102794c44,auStack_50,uVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102794b04; end: 102794b13;  */

undefined1  [16] FUN_102794b04(void)

{
  return ZEXT816(0x110549120);
}



/* Entry: 102794b14; end: 102794c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102794b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_112ff82c0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_48);
  puVar1 = &UNK_110549140;
  func_0x000107c613fc(&UNK_110549140,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  pcStack_58 = FUN_102794dd8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100f0f800;
  puStack_60 = &UNK_110549158;
  ppuVar2 = &puStack_78;
  puStack_50 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar1);
  pcVar3 = "provide(componentContextLazy:componentViewModelLazy:scopedValdiRuntimeServices:)";
  func_0x0001000c10c0(
                     "provide(componentContextLazy:componentViewModelLazy:scopedValdiRuntimeServices:)"
                     );
  func_0x000107c61180();
  func_0x000107c44288(uVar4);
  func_0x000107c615e8(pcVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 102794c44; end: 102794c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102794c44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&lStack_48,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_112ff82c0);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_48);
  puVar2 = &UNK_110549140;
  func_0x000107c613fc(&UNK_110549140,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  pcStack_58 = FUN_102794dd8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100f0f800;
  puStack_60 = &UNK_110549158;
  ppuVar3 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar2);
  pcVar4 = "provide(componentContextLazy:componentViewModelLazy:scopedValdiRuntimeServices:)";
  func_0x0001000c10c0(
                     "provide(componentContextLazy:componentViewModelLazy:scopedValdiRuntimeServices:)"
                     );
  func_0x000107c61180();
  func_0x000107c44288(uVar6);
  func_0x000107c615e8(pcVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar6);
  return;
}



/* Entry: 102794c50; end: 102794c93;  */

void FUN_102794c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebdf90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aaec8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebdf90 = puVar1;
  return;
}



/* Entry: 102794c94; end: 102794da3;  */

void FUN_102794c94(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if (param_1 == 0) {
    FUN_102794e00();
    puVar1 = &UNK_110549190;
    func_0x000107c613f8(&UNK_110549190,param_1,0,0);
    uStack_48 = 1;
    puStack_50 = puVar1;
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c614ac(puVar1);
  }
  else {
    func_0x000107c615f0();
    func_0x000100083b20(&puStack_50);
    func_0x000100083b20(&uStack_58);
    puVar1 = PTR_PTR_1126aaec8;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61170(puStack_50);
    func_0x000107c61170(uStack_58);
    uStack_48 = 0;
    puStack_50 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102794da4; end: 102794dd7;  */

void FUN_102794da4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102794dd8; end: 102794dff;  */

void FUN_102794dd8(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if (param_1 == 0) {
    FUN_102794e00(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  *(undefined8 *)(unaff_x20 + 0x20));
    puVar1 = &UNK_110549190;
    func_0x000107c613f8(&UNK_110549190,param_1,0,0);
    uStack_48 = 1;
    puStack_50 = puVar1;
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c614ac(puVar1);
  }
  else {
    func_0x000107c615f0();
    func_0x000100083b20(&puStack_50);
    func_0x000100083b20(&uStack_58);
    puVar1 = PTR_PTR_1126aaec8;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61170(puStack_50);
    func_0x000107c61170(uStack_58);
    uStack_48 = 0;
    puStack_50 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102794e00; end: 102794e3f;  */

void FUN_102794e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebdf98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad966c;
  func_0x000107c61520(&UNK_10dad966c,&UNK_110549190);
  puRam0000000112ebdf98 = puVar1;
  return;
}



/* Entry: 102794e40; end: 102794e4f;  */

undefined1  [16] FUN_102794e40(void)

{
  return ZEXT816(0x110549190);
}



/* Entry: 102794e50; end: 102794f0b;  */

void FUN_102794e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebdfa0,&UNK_10dad96b0);
  puVar1 = &UNK_1105491d8;
  func_0x000107c613fc(&UNK_1105491d8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_10279540c,puVar1);
  return;
}



/* Entry: 102794f0c; end: 10279540b;  */

void FUN_102794f0c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uStack_ec0;
  undefined1 auStack_eb8 [320];
  undefined1 auStack_d78 [313];
  char cStack_c3f;
  undefined1 auStack_c38 [320];
  undefined1 auStack_af8 [320];
  undefined1 auStack_9b8 [314];
  byte bStack_87e;
  undefined1 auStack_878 [320];
  undefined1 auStack_738 [16];
  undefined1 auStack_728 [40];
  undefined8 uStack_700;
  undefined1 auStack_5f8 [304];
  undefined8 uStack_4c8;
  undefined8 auStack_4b8 [2];
  undefined1 auStack_4a8 [232];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined1 auStack_378 [320];
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  byte bStack_208;
  byte bStack_207;
  byte bStack_206;
  byte bStack_205;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1bf;
  undefined8 auStack_1a8 [2];
  undefined1 auStack_198 [136];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_cf;
  
  puVar1 = PTR_PTR_1126aaed0;
  func_0x000107c610f8();
  uVar2 = 0x112ebdfa8;
  func_0x0001000285a8(0x112ebdfa8,&UNK_10dad96f8);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar2);
  func_0x000107c465b4();
  func_0x000107c61170(puVar3);
  func_0x000100083b20(auStack_1a8);
  uVar2 = auStack_1a8[0];
  func_0x000107c592dc(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000100083b20(auStack_1a8);
  func_0x000107c567e0(puVar1);
  func_0x000107c61170(auStack_1a8[0]);
  func_0x000100083b20(auStack_378);
  func_0x000107c610b4(auStack_1a8,auStack_378,0x13b);
  FUN_10278997c(auStack_198,auStack_4b8);
  func_0x000102789a90(auStack_1a8);
  FUN_10279542c(&uStack_110,auStack_4b8);
  puVar6 = auStack_198;
  func_0x000102789a5c(puVar6);
  if (lStack_108 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_1d0 = uStack_e0;
    uStack_1bf = uStack_cf;
    uStack_1e8 = uStack_f8;
    uStack_1f0 = uStack_100;
    lStack_1f8 = lStack_108;
    uStack_200 = uStack_110;
    FUN_102792e7c();
    FUN_102795810(&uStack_110);
  }
  func_0x000107c5a514(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000100083b20(auStack_4b8);
  func_0x000107c610b4(auStack_738,auStack_4b8,0x13b);
  FUN_10278997c(auStack_728,auStack_5f8);
  func_0x000102789a90(auStack_738);
  func_0x000107c61434(uStack_700);
  func_0x000102789a5c(auStack_728);
  func_0x000100083b20(auStack_878);
  func_0x000107c610b4(auStack_5f8,auStack_878,0x13b);
  func_0x000102789a90(auStack_5f8);
  uVar2 = uStack_700;
  FUN_10279547c(uStack_700,uStack_4c8);
  func_0x000107c6142c(uStack_700);
  puVar3 = PTR_PTR_1126aaed8;
  func_0x000107c610f8();
  uVar4 = 0;
  FUN_1027956f4(0);
  func_0x000107c61174();
  uVar5 = uVar2;
  func_0x000107c5fc48(uVar2,uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c48c0c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000100083b20(auStack_4b8);
  func_0x000107c55080(puVar3);
  func_0x000107c61170(auStack_4b8[0]);
  func_0x000100083b20(auStack_878);
  func_0x000107c610b4(auStack_4b8,auStack_878,0x13b);
  FUN_10278997c(auStack_4a8,auStack_9b8);
  func_0x000102789a90(auStack_4b8);
  FUN_102795738(uStack_3c0,lStack_3b8,uStack_3b0,uStack_3a8,uStack_3a0,uStack_398,uStack_390);
  puVar6 = auStack_4a8;
  func_0x000102789a5c(puVar6);
  puVar8 = (undefined1 *)0x0;
  if (lStack_3b8 != 1) {
    bStack_208 = (byte)uStack_390 & 1;
    bStack_207 = (byte)((uint)uStack_390 >> 8) & 1;
    uStack_238 = uStack_3c0;
    lStack_230 = lStack_3b8;
    bStack_206 = (byte)((uint)uStack_390 >> 0x10) & 1;
    bStack_205 = (byte)((uint)uStack_390 >> 0x18) & 1;
    uStack_228 = uStack_3b0;
    uStack_220 = uStack_3a8;
    uStack_218 = uStack_3a0;
    uStack_210 = uStack_398;
    FUN_1027928c4();
    FUN_1027957bc(uStack_3c0,lStack_3b8,uStack_3b0,uStack_3a8,uStack_3a0,uStack_398,uStack_390);
    puVar8 = puVar6;
  }
  func_0x000107c52144(puVar3);
  func_0x000107c61170(puVar8);
  func_0x000100083b20(auStack_9b8);
  func_0x000107c610b4(auStack_af8,auStack_9b8,0x13b);
  func_0x000102789a90(auStack_af8);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59248(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000100083b20(auStack_c38);
  func_0x000107c610b4(auStack_9b8,auStack_c38,0x13b);
  func_0x000102789a90(auStack_9b8);
  if ((bStack_87e < 2) || (bStack_87e == 2)) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  func_0x000107c553f8(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000100083b20(auStack_eb8);
  func_0x000107c610b4(auStack_d78,auStack_eb8,0x13b);
  func_0x000102789a90(auStack_d78);
  if (cStack_c3f == '\x01') {
    func_0x000100083b20(&uStack_ec0);
    func_0x000107c5ad6c(uStack_ec0);
    func_0x000107c615e8(uStack_ec0);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5920c(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10279540c; end: 10279542b;  */

void FUN_10279540c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uStack_ec0;
  undefined1 auStack_eb8 [320];
  undefined1 auStack_d78 [313];
  char cStack_c3f;
  undefined1 auStack_c38 [320];
  undefined1 auStack_af8 [320];
  undefined1 auStack_9b8 [314];
  byte bStack_87e;
  undefined1 auStack_878 [320];
  undefined1 auStack_738 [16];
  undefined1 auStack_728 [40];
  undefined8 uStack_700;
  undefined1 auStack_5f8 [304];
  undefined8 uStack_4c8;
  undefined8 auStack_4b8 [2];
  undefined1 auStack_4a8 [232];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined1 auStack_378 [320];
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  byte bStack_208;
  byte bStack_207;
  byte bStack_206;
  byte bStack_205;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1bf;
  undefined8 auStack_1a8 [2];
  undefined1 auStack_198 [136];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_cf;
  
  puVar1 = PTR_PTR_1126aaed0;
  func_0x000107c610f8(PTR_PTR_1126aaed0,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar2 = 0x112ebdfa8;
  func_0x0001000285a8(0x112ebdfa8,&UNK_10dad96f8);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar2);
  func_0x000107c465b4();
  func_0x000107c61170(puVar3);
  func_0x000100083b20(auStack_1a8);
  uVar2 = auStack_1a8[0];
  func_0x000107c592dc(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000100083b20(auStack_1a8);
  func_0x000107c567e0(puVar1);
  func_0x000107c61170(auStack_1a8[0]);
  func_0x000100083b20(auStack_378);
  func_0x000107c610b4(auStack_1a8,auStack_378,0x13b);
  FUN_10278997c(auStack_198,auStack_4b8);
  func_0x000102789a90(auStack_1a8);
  FUN_10279542c(&uStack_110,auStack_4b8);
  puVar6 = auStack_198;
  func_0x000102789a5c(puVar6);
  if (lStack_108 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_1d8 = uStack_e8;
    uStack_1e0 = uStack_f0;
    uStack_1d0 = uStack_e0;
    uStack_1bf = uStack_cf;
    uStack_1e8 = uStack_f8;
    uStack_1f0 = uStack_100;
    lStack_1f8 = lStack_108;
    uStack_200 = uStack_110;
    FUN_102792e7c();
    FUN_102795810(&uStack_110);
  }
  func_0x000107c5a514(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000100083b20(auStack_4b8);
  func_0x000107c610b4(auStack_738,auStack_4b8,0x13b);
  FUN_10278997c(auStack_728,auStack_5f8);
  func_0x000102789a90(auStack_738);
  func_0x000107c61434(uStack_700);
  func_0x000102789a5c(auStack_728);
  func_0x000100083b20(auStack_878);
  func_0x000107c610b4(auStack_5f8,auStack_878,0x13b);
  func_0x000102789a90(auStack_5f8);
  uVar2 = uStack_700;
  FUN_10279547c(uStack_700,uStack_4c8);
  func_0x000107c6142c(uStack_700);
  puVar3 = PTR_PTR_1126aaed8;
  func_0x000107c610f8();
  uVar4 = 0;
  FUN_1027956f4(0);
  func_0x000107c61174();
  uVar5 = uVar2;
  func_0x000107c5fc48(uVar2,uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c48c0c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000100083b20(auStack_4b8);
  func_0x000107c55080(puVar3);
  func_0x000107c61170(auStack_4b8[0]);
  func_0x000100083b20(auStack_878);
  func_0x000107c610b4(auStack_4b8,auStack_878,0x13b);
  FUN_10278997c(auStack_4a8,auStack_9b8);
  func_0x000102789a90(auStack_4b8);
  FUN_102795738(uStack_3c0,lStack_3b8,uStack_3b0,uStack_3a8,uStack_3a0,uStack_398,uStack_390);
  puVar6 = auStack_4a8;
  func_0x000102789a5c(puVar6);
  puVar8 = (undefined1 *)0x0;
  if (lStack_3b8 != 1) {
    bStack_208 = (byte)uStack_390 & 1;
    bStack_207 = (byte)((uint)uStack_390 >> 8) & 1;
    uStack_238 = uStack_3c0;
    lStack_230 = lStack_3b8;
    bStack_206 = (byte)((uint)uStack_390 >> 0x10) & 1;
    bStack_205 = (byte)((uint)uStack_390 >> 0x18) & 1;
    uStack_228 = uStack_3b0;
    uStack_220 = uStack_3a8;
    uStack_218 = uStack_3a0;
    uStack_210 = uStack_398;
    FUN_1027928c4();
    FUN_1027957bc(uStack_3c0,lStack_3b8,uStack_3b0,uStack_3a8,uStack_3a0,uStack_398,uStack_390);
    puVar8 = puVar6;
  }
  func_0x000107c52144(puVar3);
  func_0x000107c61170(puVar8);
  func_0x000100083b20(auStack_9b8);
  func_0x000107c610b4(auStack_af8,auStack_9b8,0x13b);
  func_0x000102789a90(auStack_af8);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59248(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000100083b20(auStack_c38);
  func_0x000107c610b4(auStack_9b8,auStack_c38,0x13b);
  func_0x000102789a90(auStack_9b8);
  if ((bStack_87e < 2) || (bStack_87e == 2)) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  func_0x000107c553f8(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000100083b20(auStack_eb8);
  func_0x000107c610b4(auStack_d78,auStack_eb8,0x13b);
  func_0x000102789a90(auStack_d78);
  if (cStack_c3f == '\x01') {
    func_0x000100083b20(&uStack_ec0);
    func_0x000107c5ad6c(uStack_ec0);
    func_0x000107c615e8(uStack_ec0);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5920c(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10279542c; end: 10279547b;  */

undefined8 FUN_10279542c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ebdfb0;
  func_0x0001000285a8(0x112ebdfb0,&UNK_10dad9700);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10279547c; end: 1027956f3;  */

undefined * FUN_10279547c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  long lStack_90;
  long *plStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  plVar7 = (long *)0x0;
  func_0x000107c5eb9c();
  lStack_90 = plVar7[-1];
  plStack_88 = plVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    func_0x0001038d1a88();
    if ((*plVar7 == param_2) || (func_0x0001038d1a94(), *plVar7 == param_2)) {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ecc();
      puStack_80 = puVar8;
    }
    else {
      puStack_80 = (undefined *)0x0;
    }
    puStack_68 = puVar13;
    func_0x000102796488(0,lVar12,0);
    plVar7 = (long *)(param_1 + 0x38);
    do {
      puVar13 = puStack_68;
      lVar1 = plVar7[-3];
      lVar4 = plVar7[-2];
      lVar2 = plVar7[-1];
      lVar5 = *plVar7;
      if ((lVar4 != 0) && (lVar4 != 1)) {
        func_0x000107c61434(lVar4);
      }
      puVar8 = PTR_PTR_1126aaee0;
      func_0x000107c610f8();
      func_0x000107c61434(lVar5);
      func_0x000107c48bf0();
      if (lVar5 != 0) {
        lVar9 = lVar5;
        lStack_78 = lVar2;
        lStack_70 = lVar5;
        func_0x000107c61434(lVar5);
        puVar6 = puStack_98;
        func_0x000107c5eb88(puStack_98);
        func_0x000100e8b654();
        puVar10 = puVar6;
        puVar11 = PTR___sSSN_11034da80;
        func_0x000107c601f0(puVar6,PTR___sSSN_11034da80,lVar9);
        (**(code **)(lStack_90 + 8))(puVar6,plStack_88);
        func_0x000107c6142c(lVar5);
        uVar3 = (ulong)puVar10 & 0xffffffffffff;
        if (((ulong)puVar11 & 0x2000000000000000) != 0) {
          uVar3 = (ulong)puVar11 >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
          func_0x000107c6142c(puVar11);
        }
        else {
          func_0x000107c5fadc(puVar10,puVar11);
          func_0x000107c6142c(puVar11);
          func_0x000107c59b94(puVar8);
          func_0x000107c61170(puVar10);
        }
      }
      func_0x000107c53dfc(puVar8);
      FUN_102795858(lVar1,lVar4);
      func_0x000107c6142c(lVar5);
      uVar3 = *(ulong *)(puVar13 + 0x10);
      puStack_68 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar3) {
        func_0x000102796488(1 < *(ulong *)(puVar13 + 0x18),uVar3 + 1,1);
      }
      puVar13 = puStack_68;
      plVar7 = plVar7 + 4;
      *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
      *(undefined **)(puStack_68 + uVar3 * 8 + 0x20) = puVar8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c61170(puStack_80);
  }
  return puVar13;
}



/* Entry: 1027956f4; end: 102795737;  */

void FUN_1027956f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebdfb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aaee0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebdfb8 = puVar1;
  return;
}



/* Entry: 102795738; end: 10279578b;  */

undefined8
FUN_102795738(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  if (param_2 == 1) {
    return param_1;
  }
  func_0x000107c61434(param_2);
  if (param_4 != 0) {
    func_0x000107c61434(param_4,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_6);
    return param_6;
  }
  return param_3;
}



/* Entry: 10279578c; end: 1027957bb;  */

void FUN_10279578c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_4);
    return;
  }
  return;
}



/* Entry: 1027957bc; end: 10279580f;  */

undefined8
FUN_1027957bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  if (param_2 == 1) {
    return param_1;
  }
  func_0x000107c6142c(param_2);
  if (param_4 != 0) {
    func_0x000107c6142c(param_4,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_6);
    return param_6;
  }
  return param_3;
}



/* Entry: 102795810; end: 102795857;  */

undefined8 FUN_102795810(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ebdfb0;
  func_0x0001000285a8(0x112ebdfb0,&UNK_10dad9700);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102795858; end: 10279586b;  */

void FUN_102795858(undefined8 param_1,ulong param_2)

{
  if (param_2 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



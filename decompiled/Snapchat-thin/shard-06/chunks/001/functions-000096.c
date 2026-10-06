/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044d77c8; end: 1044d7803;  */

bool FUN_1044d77c8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044d7804; end: 1044d78d7;  */

void FUN_1044d7804(void)

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



/* Entry: 1044d78d8; end: 1044d78e3;  */

void FUN_1044d78d8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1044d78e4; end: 1044d7923;  */

void FUN_1044d78e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130805c0;
  func_0x0001000285a8(0x1130805c0,&UNK_10dd0b910);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1044d7924; end: 1044d7937;  */

ulong FUN_1044d7924(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1044d7938; end: 1044d7977;  */

void FUN_1044d7938(void)

{
  undefined *puVar1;
  
  if (puRam00000001130805c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0b918;
  _swift_getWitnessTable(&UNK_10dd0b918,&UNK_11077c3f0);
  puRam00000001130805c8 = puVar1;
  return;
}



/* Entry: 1044d7978; end: 1044d797b;  */

void FUN_1044d7978(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130805d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130805d8;
  func_0x00010002969c(0x1130805d8,&UNK_10dd0b9b8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam00000001130805d0 = puVar2;
  return;
}



/* Entry: 1044d797c; end: 1044d79cb;  */

void FUN_1044d797c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130805d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130805d8;
  func_0x00010002969c(0x1130805d8,&UNK_10dd0b9b8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam00000001130805d0 = puVar2;
  return;
}



/* Entry: 1044d79cc; end: 1044d7b43;  */

int FUN_1044d79cc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044d7a48;
        goto LAB_1044d7a2c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044d7a2c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1044d7a48:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044d7b44; end: 1044d7c1b;  */

void FUN_1044d7b44(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044d7c1c; end: 1044d7c27;  */

void FUN_1044d7c1c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044d7c28; end: 1044d7c67;  */

void FUN_1044d7c28(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113080668;
  func_0x0001000285a8(0x113080668,&UNK_10dd0ba50);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1044d7c68; end: 1044d7c7b;  */

undefined1  [16] FUN_1044d7c68(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1044d7c7c; end: 1044d7cbb;  */

void FUN_1044d7c7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ba58;
  _swift_getWitnessTable(&UNK_10dd0ba58,&UNK_11077c488);
  puRam0000000113080670 = puVar1;
  return;
}



/* Entry: 1044d7cbc; end: 1044d7cbf;  */

void FUN_1044d7cbc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113080678 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113080680;
  func_0x00010002969c(0x113080680,&UNK_10dd0baf8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113080678 = puVar2;
  return;
}



/* Entry: 1044d7cc0; end: 1044d7d0f;  */

void FUN_1044d7cc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113080678 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113080680;
  func_0x00010002969c(0x113080680,&UNK_10dd0baf8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113080678 = puVar2;
  return;
}



/* Entry: 1044d7d10; end: 1044d7d27;  */

undefined1  [16] FUN_1044d7d10(void)

{
  return ZEXT816(0x11077c488);
}



/* Entry: 1044d7d28; end: 1044d7dc7;  */

void FUN_1044d7d28(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044d7dc8; end: 1044d7dcb;  */

void FUN_1044d7dc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0bbf0;
  _swift_getWitnessTable(&UNK_10dd0bbf0,&UNK_11077c590);
  puRam0000000113080688 = puVar1;
  return;
}



/* Entry: 1044d7dcc; end: 1044d7e0b;  */

void FUN_1044d7dcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0bbf0;
  _swift_getWitnessTable(&UNK_10dd0bbf0,&UNK_11077c590);
  puRam0000000113080688 = puVar1;
  return;
}



/* Entry: 1044d7e0c; end: 1044d7f07;  */

void FUN_1044d7e0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1044d7f08; end: 1044d7f43; -[SCMemoriesExperimentServiceStaticHelpers init] */

void FUN_1044d7f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d7f44; end: 1044d7f63; +[SCMemoriesExperimentServiceStaticHelpers getCOFValueFrom:withKey:defaultValue:] */

long FUN_1044d7f44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,param_4,param_5,0);
    return param_3;
  }
  return param_5;
}



/* Entry: 1044d7f64; end: 1044d7fe3;  */

long FUN_1044d7f64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    _swift_unknownObjectRetain();
    uVar1 = 0xd000000000000047;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000047,0x800000010f203d10);
    lVar2 = param_1;
    func_0x00010bf1f440(param_1);
    _swift_unknownObjectRelease(param_1);
    _objc_release(uVar1);
  }
  return lVar2;
}



/* Entry: 1044d7fe4; end: 1044d8067; +[SCMemoriesExperimentServiceStaticHelpers shouldSnapDocManagerWriteIsEncryptedFlagWithConfigProvider:] */

long FUN_1044d7fe4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    _swift_unknownObjectRetain(param_3);
    uVar1 = 0xd000000000000047;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000047,0x800000010f203d10);
    lVar2 = param_3;
    func_0x00010bf1f440(param_3);
    _swift_unknownObjectRelease(param_3);
    _objc_release(uVar1);
    return lVar2;
  }
  return 0;
}



/* Entry: 1044d8068; end: 1044d80bb;  */

void FUN_1044d8068(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044d80bc; end: 1044d80cb; -[MemoriesExperimentServices coreConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d80bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130806d8));
  return;
}



/* Entry: 1044d80cc; end: 1044d80db; -[MemoriesExperimentServices uiConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d80cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130806e0));
  return;
}



/* Entry: 1044d80dc; end: 1044d80fb; -[MemoriesExperimentServices aserConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d80dc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130806e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044d80fc; end: 1044d828f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1044d80fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_a0;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130806b8) = param_1;
  puVar1 = PTR_PTR_1126ae720;
  _objc_opt_self();
  puStack_70 = &UNK_1008571dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1008571a0;
  puStack_78 = &UNK_11077c620;
  ppuVar2 = &puStack_90;
  uStack_68 = param_1;
  __Block_copy(ppuVar2);
  uVar3 = uStack_68;
  _swift_retain_n(param_1,2);
  _swift_release(uVar3);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar2);
  *(undefined **)(unaff_x20 + _DAT_1130806d0) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_1130806c0) = param_2;
  uVar3 = param_2;
  _swift_retain();
  func_0x0001000bf56c();
  *(undefined8 *)(unaff_x20 + _DAT_1130806d8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130806c8) = param_3;
  uVar3 = param_3;
  _swift_retain();
  func_0x0001000bf56c();
  *(undefined8 *)(unaff_x20 + _DAT_1130806e0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130806e8) = param_4;
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  _swift_release(param_1);
  _swift_release(param_2);
  _swift_release(param_3);
  return puVar4;
}



/* Entry: 1044d8290; end: 1044d82ef; -[MemoriesExperimentServices init] */

void FUN_1044d8290(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesExperimentServices.MemoriesExperimentServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d82bc);
  (*pcVar1)();
}



/* Entry: 1044d82f0; end: 1044d8377; -[MemoriesExperimentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d82f0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130806b8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130806c0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130806c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130806d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130806d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130806e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_1130806e8));
  return;
}



/* Entry: 1044d8378; end: 1044d8387; -[_TtC26MemoriesExperimentServices34SCLegacyMemoriesExperimentServices uiConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d8378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080718));
  return;
}



/* Entry: 1044d8388; end: 1044d8413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d8388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080718) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113080720) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113080728) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113080730) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d8414; end: 1044d84c3; -[_TtC26MemoriesExperimentServices34SCLegacyMemoriesExperimentServices initWithUIConfigProvider:coreConfigProvider:aserConfigProvider:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d8414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113080718) = param_3;
  *(undefined8 *)(param_1 + _DAT_113080720) = param_4;
  *(undefined8 *)(param_1 + _DAT_113080728) = param_5;
  *(undefined8 *)(param_1 + _DAT_113080730) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1044d84c4; end: 1044d8523; -[_TtC26MemoriesExperimentServices34SCLegacyMemoriesExperimentServices init] */

void FUN_1044d84c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesExperimentServices.SCLegacyMemoriesExperimentServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d84f0);
  (*pcVar1)();
}



/* Entry: 1044d8524; end: 1044d85bf; -[_TtC26MemoriesExperimentServices34SCLegacyMemoriesExperimentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d8524(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113080718));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113080720));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113080728));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113080730));
  return;
}



/* Entry: 1044d85c0; end: 1044d870f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044d85c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  _objc_allocWithZone();
  func_0x0001044d857c(param_1,unaff_x20 + _DAT_113080760);
  func_0x0001044d857c(param_2,unaff_x20 + _DAT_113080768);
  *(undefined8 *)(unaff_x20 + _DAT_113080770) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1044d8710; end: 1044d876f; -[AppStateMonitoringServices init] */

void FUN_1044d8710(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AppStateMonitoringServices.AppStateMonitoringServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d873c);
  (*pcVar1)();
}



/* Entry: 1044d8770; end: 1044d87b7; -[AppStateMonitoringServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d8770(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_113080760);
  func_0x0001000834e4(param_1 + _DAT_113080768);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113080770));
  return;
}



/* Entry: 1044d87b8; end: 1044d87cb;  */

bool FUN_1044d87b8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044d87cc; end: 1044d8877;  */

void FUN_1044d87cc(void)

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



/* Entry: 1044d8878; end: 1044d887b;  */

void FUN_1044d8878(void)

{
  undefined *puVar1;
  
  if (puRam00000001130807a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0bdc0;
  _swift_getWitnessTable(&UNK_10dd0bdc0,&UNK_11077c770);
  puRam00000001130807a0 = puVar1;
  return;
}



/* Entry: 1044d887c; end: 1044d88bb;  */

void FUN_1044d887c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130807a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0bdc0;
  _swift_getWitnessTable(&UNK_10dd0bdc0,&UNK_11077c770);
  puRam00000001130807a0 = puVar1;
  return;
}



/* Entry: 1044d88bc; end: 1044d8a33;  */

int FUN_1044d88bc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044d8938;
        goto LAB_1044d891c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044d891c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1044d8938:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044d8a34; end: 1044d8adf;  */

void FUN_1044d8a34(void)

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



/* Entry: 1044d8ae0; end: 1044d8b0b;  */

void FUN_1044d8ae0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1044d8b0c; end: 1044d8bab;  */

void FUN_1044d8b0c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044d8bac; end: 1044d8baf;  */

void FUN_1044d8bac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130807a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0be50;
  _swift_getWitnessTable(&UNK_10dd0be50,&UNK_11077c838);
  puRam00000001130807a8 = puVar1;
  return;
}



/* Entry: 1044d8bb0; end: 1044d8bef;  */

void FUN_1044d8bb0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130807a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0be50;
  _swift_getWitnessTable(&UNK_10dd0be50,&UNK_11077c838);
  puRam00000001130807a8 = puVar1;
  return;
}



/* Entry: 1044d8bf0; end: 1044d8bf3;  */

void FUN_1044d8bf0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130807b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0bef0;
  _swift_getWitnessTable(&UNK_10dd0bef0,&UNK_11077c8c8);
  puRam00000001130807b0 = puVar1;
  return;
}



/* Entry: 1044d8bf4; end: 1044d8c33;  */

void FUN_1044d8bf4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130807b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0bef0;
  _swift_getWitnessTable(&UNK_10dd0bef0,&UNK_11077c8c8);
  puRam00000001130807b0 = puVar1;
  return;
}



/* Entry: 1044d8c34; end: 1044d8e93;  */

void FUN_1044d8c34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1044d8e94; end: 1044d8edb;  */

uint FUN_1044d8e94(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1044d8edc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044d8edc; end: 1044d9037;  */

undefined8 FUN_1044d8edc(int *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 4);
  lVar1 = *(long *)(param_2 + 4);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 2);
    if ((uVar3 != *(ulong *)(param_2 + 2) || lVar2 != lVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar2,*(ulong *)(param_2 + 2),lVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return 1;
    }
  }
  else if (lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 6);
    if ((uVar3 == *(ulong *)(param_2 + 6)) && (lVar2 == lVar1)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar2,*(ulong *)(param_2 + 6),lVar1,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1044d9038; end: 1044d90ab;  */

undefined8 * FUN_1044d9038(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1044d90ac; end: 1044d90f7;  */

undefined8 * FUN_1044d90ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1044d90f8; end: 1044d91d7;  */

int FUN_1044d90f8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044d91d8; end: 1044d9217;  */

void FUN_1044d91d8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130807b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0c074;
  _swift_getWitnessTable(&UNK_10dd0c074,&UNK_11077ca80);
  puRam00000001130807b8 = puVar1;
  return;
}



/* Entry: 1044d9218; end: 1044d92c3;  */

void FUN_1044d9218(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044d92c4; end: 1044d930f;  */

void FUN_1044d92c4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044d9310; end: 1044d93e7;  */

void FUN_1044d9310(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044d93e8; end: 1044d9407;  */

void FUN_1044d93e8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044d9408; end: 1044d9447;  */

void FUN_1044d9408(void)

{
  undefined *puVar1;
  
  if (puRam00000001130807c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0c120;
  _swift_getWitnessTable(&UNK_10dd0c120,&UNK_11077caf8);
  puRam00000001130807c0 = puVar1;
  return;
}



/* Entry: 1044d9448; end: 1044d9457;  */

undefined1  [16] FUN_1044d9448(void)

{
  return ZEXT816(0x11077caf8);
}



/* Entry: 1044d9458; end: 1044d94a3; +[SCCrashServiceEvents appNotResponding] */

void FUN_1044d9458(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f203e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044d94a4; end: 1044d94df; -[SCCrashServiceEvents init] */

void FUN_1044d94a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001044d9484();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d94e0; end: 1044d950f;  */

void FUN_1044d94e0(void)

{
  func_0x0001044d9484();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044d9510; end: 1044d9513; -[SCCrashServiceEvents .cxx_destruct] */

void FUN_1044d9510(void)

{
  return;
}



/* Entry: 1044d9514; end: 1044d9523; -[_TtC15SCCrashServices15SCCrashServices blizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d9514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130807f8));
  return;
}



/* Entry: 1044d9524; end: 1044d9533; -[_TtC15SCCrashServices15SCCrashServices transcodingInProgressTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d9524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080800));
  return;
}



/* Entry: 1044d9534; end: 1044d95bf; -[_TtC15SCCrashServices15SCCrashServices lastSessionWasMemoryCrash] */

uint FUN_1044d9534(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001044d9568();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1044d95c0; end: 1044d972f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1044d95c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130807f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130807f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113080810) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113080800) = param_4;
  puVar1 = &UNK_11077cb70;
  _swift_allocObject(&UNK_11077cb70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  func_0x0001000285a8(0x113080818,&UNK_10dd0c1e8);
  _swift_allocObject();
  _objc_retain(param_4);
  _swift_retain(param_6);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = &UNK_1001c8a18;
  func_0x0001000bdd8c(&UNK_1001c8a18,puVar1);
  *(undefined **)(unaff_x20 + _DAT_113080808) = puVar2;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_release(param_6);
  return puVar3;
}



/* Entry: 1044d9730; end: 1044d9737;  */

void FUN_1044d9730(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1044d9738; end: 1044d9893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044d9738(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar1 = param_1;
  func_0x0001000a06bc();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_1130807f0) = param_1;
  *(undefined8 *)(lVar2 + _DAT_1130807f8) = param_2;
  *(undefined8 *)(lVar2 + _DAT_113080810) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113080800) = param_4;
  func_0x0001000285a8(0x113080818,&UNK_10dd0c1e8);
  _swift_allocObject();
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar3 = FUN_1044d9730;
  func_0x0001000bdd8c(FUN_1044d9730,0);
  *(code **)(lVar2 + _DAT_113080808) = pcVar3;
  lStack_70 = lVar2;
  lStack_68 = lVar1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)plVar4;
}



/* Entry: 1044d9894; end: 1044d990b; -[_TtC15SCCrashServices15SCCrashServices initWithCrashLogger:blizzardCrashLogger:memoryUsageMetadataListener:transcodingInProgressTracker:] */

void FUN_1044d9894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_1044d9738(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1044d990c; end: 1044d9967; -[_TtC15SCCrashServices15SCCrashServices init] */

void FUN_1044d990c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCCrashServices.SCCrashServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d9938);
  (*pcVar1)();
}



/* Entry: 1044d9968; end: 1044d99cf; -[_TtC15SCCrashServices15SCCrashServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d9968(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130807f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130807f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113080810));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113080800));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113080808));
  return;
}



/* Entry: 1044d99d0; end: 1044d99f3;  */

ulong FUN_1044d99d0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar7 = *param_1;
  uVar2 = param_1[1];
  uVar8 = param_1[2];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar9 = param_2[2];
  bVar4 = (byte)param_2[3];
  bVar5 = (byte)param_1[3];
  bVar6 = bVar5 >> 6;
  if (bVar6 < 2) {
    if (bVar6 == 0) {
      if (bVar4 < 0x40) {
        uVar10 = (uint)uVar1 ^ (uint)uVar7 ^ 1;
        goto LAB_1044d9b48;
      }
    }
    else if ((bVar4 & 0xc0) == 0x40) {
      if ((uVar7 != uVar1) || (uVar2 != uVar3)) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,uVar2,uVar1,uVar3,0);
        uVar10 = 0;
        if ((uVar7 & 1) == 0) goto LAB_1044d9b48;
      }
      func_0x000101058cd4(uVar8,uVar9);
      uVar10 = 0;
      if ((uVar8 & 1) != 0) {
        uVar10 = (bVar4 ^ bVar5) ^ 1;
      }
      goto LAB_1044d9b48;
    }
  }
  else if (bVar6 == 2) {
    if ((char)bVar4 < -0x40) {
      if ((uVar7 != uVar1) || (uVar2 != uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(uVar7,uVar2,uVar1,uVar3,0);
        return uVar7;
      }
      goto LAB_1044d9b3c;
    }
  }
  else if (((uVar8 == 0 && uVar2 == 0) && uVar7 == 0) && (bVar5 == 0xc0)) {
    if (((0xbf < bVar4) && ((uVar9 == 0 && uVar3 == 0) && uVar1 == 0)) && (bVar4 == 0xc0)) {
LAB_1044d9b3c:
      uVar10 = 1;
      goto LAB_1044d9b48;
    }
  }
  else if ((0xbf < bVar4) && (((bVar4 == 0xc0 && (uVar1 == 1)) && (uVar9 == 0 && uVar3 == 0))))
  goto LAB_1044d9b3c;
  uVar10 = 0;
LAB_1044d9b48:
  return (ulong)(uVar10 & 1);
}



/* Entry: 1044d99f4; end: 1044d9b5b;  */

ulong FUN_1044d99f4(ulong param_1,long param_2,ulong param_3,uint param_4,ulong param_5,long param_6
                   ,long param_7,uint param_8)

{
  uint uVar1;
  
  uVar1 = param_4 >> 6 & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      if ((param_8 & 0xff) < 0x40) {
        uVar1 = (uint)param_5 ^ (uint)param_1 ^ 1;
        goto LAB_1044d9b48;
      }
    }
    else if ((param_8 & 0xc0) == 0x40) {
      if ((param_1 != param_5) || (param_2 != param_6)) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_5,param_6,0);
        uVar1 = 0;
        if ((param_1 & 1) == 0) goto LAB_1044d9b48;
      }
      func_0x000101058cd4(param_3,param_7);
      uVar1 = 0;
      if ((param_3 & 1) != 0) {
        uVar1 = param_8 ^ param_4 ^ 1;
      }
      goto LAB_1044d9b48;
    }
  }
  else if (uVar1 == 2) {
    if ((char)param_8 < -0x40) {
      if ((param_1 != param_5) || (param_2 != param_6)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(param_1,param_2,param_5,param_6,0);
        return param_1;
      }
      goto LAB_1044d9b3c;
    }
  }
  else if (((param_3 == 0 && param_2 == 0) && param_1 == 0) && ((param_4 & 0xff) == 0xc0)) {
    if (((0xbf < (param_8 & 0xff)) && ((param_7 == 0 && param_6 == 0) && param_5 == 0)) &&
       ((param_8 & 0xff) == 0xc0)) {
LAB_1044d9b3c:
      uVar1 = 1;
      goto LAB_1044d9b48;
    }
  }
  else if ((0xbf < (param_8 & 0xff)) &&
          ((((param_8 & 0xff) == 0xc0 && (param_5 == 1)) && (param_7 == 0 && param_6 == 0))))
  goto LAB_1044d9b3c;
  uVar1 = 0;
LAB_1044d9b48:
  return (ulong)(uVar1 & 1);
}



/* Entry: 1044d9b5c; end: 1044d9bcf;  */

long FUN_1044d9b5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044d9bd0; end: 1044d9be3;  */

/* WARNING: Possible PIC construction at 0x0001014c6e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c6e54) */

undefined8 FUN_1044d9bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if ((*(byte *)(param_1 + 3) >> 6 != 2) && (*(byte *)(param_1 + 3) >> 6 != 1)) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,uVar1,param_1[2]);
  return uVar1;
}



/* Entry: 1044d9be4; end: 1044d9cab;  */

undefined8 * FUN_1044d9be4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x0001044d9b88(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 1044d9cac; end: 1044d9cf7;  */

undefined8 * FUN_1044d9cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x0001014c6e28(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 1044d9cf8; end: 1044d9e13;  */

int FUN_1044d9cf8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7c < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0x7d;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 6) >> 6) | (*(byte *)(param_1 + 6) >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7b < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044d9e14; end: 1044d9e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d9e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080848) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080850);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080858);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d9ea0; end: 1044d9f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d9ea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080848) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080850);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080858);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d9f10; end: 1044d9f43; -[SCAbnormalExitResult hash] */

undefined8 FUN_1044d9f10(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044d9f44();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044d9f44; end: 1044da01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d9f44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113080848));
  if (((undefined8 *)(unaff_x20 + _DAT_113080850))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113080850);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113080858))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113080858);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044da01c; end: 1044da1b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044da01c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_113080848);
      iVar2 = *(int *)(lStack_68 + _DAT_113080848);
      lVar5 = ((long *)(unaff_x20 + _DAT_113080850))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113080850))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113080850);
        if (lVar4 == *(long *)(lStack_68 + _DAT_113080850) && lVar5 == lVar6) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_113080858))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_113080858))[1];
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 == 0) {
LAB_1044da1a0:
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar6);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar6 != 0) {
          lVar4 = *(long *)(unaff_x20 + _DAT_113080858);
          if (lVar4 == *(long *)(lStack_68 + _DAT_113080858) && lVar5 == lVar6) {
            _objc_release(lStack_68);
            goto LAB_1044da1a0;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar4;
        }
        _objc_release(lStack_68);
      }
      if (iVar1 == iVar2) {
        uVar7 = uVar7 & uVar8;
        goto LAB_1044da0f4;
      }
    }
  }
  uVar7 = 0;
LAB_1044da0f4:
  return uVar7 & 1;
}



/* Entry: 1044da1b4; end: 1044da233; -[SCAbnormalExitResult isEqual:] */

uint FUN_1044da1b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1044da01c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044da234; end: 1044da237; -[SCAbnormalExitResult copyWithZone:] */

void FUN_1044da234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044da238; end: 1044da253; -[SCAbnormalExitResult description] */

void FUN_1044da238(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044da254; end: 1044da2cf; -[SCAbnormalExitResult init] */

void FUN_1044da254(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCrashServices/SCAbnormalExitResultWrapper.swift",0x31,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044da29c);
  (*pcVar1)();
}



/* Entry: 1044da2d0; end: 1044da3e3; -[SCAbnormalExitResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044da2d0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080850 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113080858 + 8))
  ;
  return;
}



/* Entry: 1044da3e4; end: 1044da403;  */

void FUN_1044da3e4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1044da404; end: 1044da6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044da404(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_50 [8];
  
  puVar5 = auStack_90;
  uVar3 = (uint)param_4 >> 6 & 3;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_113080888) = 3;
      *(undefined1 *)(unaff_x20 + _DAT_113080890) = 2;
      plVar2 = (long *)(unaff_x20 + _DAT_113080898);
      *plVar2 = param_1;
      plVar2[1] = param_2;
      *(long *)(unaff_x20 + _DAT_1130808a0) = param_3;
      *(byte *)(unaff_x20 + _DAT_1130808a8) = (byte)param_4 & 1;
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130808b0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar4 = PTR_s_init_1125d9248;
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_3);
      _objc_msgSendSuper2(auStack_60,puVar4);
      func_0x0001014c6e28(param_1,param_2,param_3,param_4);
      return;
    }
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113080888) = 1;
    *(byte *)(unaff_x20 + _DAT_113080890) = (byte)param_1 & 1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080898);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(unaff_x20 + _DAT_1130808a0) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_1130808a8) = 2;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130808b0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar5 = auStack_80;
  }
  else if (uVar3 == 2) {
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113080888) = 4;
    *(undefined1 *)(unaff_x20 + _DAT_113080890) = 2;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080898);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(unaff_x20 + _DAT_1130808a0) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_1130808a8) = 2;
    plVar2 = (long *)(unaff_x20 + _DAT_1130808b0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    puVar5 = auStack_50;
  }
  else if (((param_3 == 0 && param_2 == 0) && param_1 == 0) && (((uint)param_4 & 0xff) == 0xc0)) {
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113080888) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_113080890) = 2;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080898);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(unaff_x20 + _DAT_1130808a0) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_1130808a8) = 2;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130808b0);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113080888) = 2;
    *(undefined1 *)(unaff_x20 + _DAT_113080890) = 2;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080898);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(unaff_x20 + _DAT_1130808a0) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_1130808a8) = 2;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130808b0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar5 = auStack_70;
  }
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044da6ec; end: 1044da713; -[SCThreadCaptureOption description] */

void FUN_1044da6ec(void)

{
  _objc_retain();
  FUN_1044dafe4();
  func_0x0001014c6e28();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044da714; end: 1044da717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1044da714(long param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  bVar1 = *(byte *)(param_1 + _DAT_113080888);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      _objc_release();
      uVar5 = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + _DAT_113080890);
      if (bVar1 == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db140);
        (*pcVar2)();
      }
      _objc_release();
      uVar5 = (ulong)bVar1 & 1;
    }
  }
  else if (bVar1 == 2) {
    _objc_release();
    uVar5 = 1;
  }
  else if (bVar1 == 3) {
    uVar3 = ((ulong *)(param_1 + _DAT_113080898))[1];
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db138);
      (*pcVar2)();
    }
    lVar4 = *(long *)(param_1 + _DAT_1130808a0);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db144);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + _DAT_1130808a8) == '\x02') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db148);
      (*pcVar2)();
    }
    uVar5 = *(ulong *)(param_1 + _DAT_113080898);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(lVar4);
    _objc_release(param_1);
  }
  else {
    uVar3 = ((ulong *)(param_1 + _DAT_1130808b0))[1];
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044db13c);
      (*pcVar2)();
    }
    uVar5 = *(ulong *)(param_1 + _DAT_1130808b0);
    _swift_bridgeObjectRetain(uVar3);
    _objc_release(param_1);
  }
  return uVar5;
}



/* Entry: 1044da718; end: 1044da75f; -[SCThreadCaptureOption init] */

void FUN_1044da718(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCrashServices/ThreadCaptureOptionWrapper.swift",0x30,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044da760);
  (*pcVar1)();
}



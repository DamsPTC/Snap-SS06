/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10403199c; end: 1040319db;  */

void FUN_10403199c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc5140;
  _swift_getWitnessTable(&UNK_10dcc5140,&UNK_110737450);
  puRam0000000113049e48 = puVar1;
  return;
}



/* Entry: 1040319dc; end: 1040319df;  */

void FUN_1040319dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc51e0;
  _swift_getWitnessTable(&UNK_10dcc51e0,&UNK_110737470);
  puRam0000000113049e50 = puVar1;
  return;
}



/* Entry: 1040319e0; end: 104031a1f;  */

void FUN_1040319e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc51e0;
  _swift_getWitnessTable(&UNK_10dcc51e0,&UNK_110737470);
  puRam0000000113049e50 = puVar1;
  return;
}



/* Entry: 104031a20; end: 104031a3f;  */

undefined1  [16] FUN_104031a20(void)

{
  return ZEXT816(0x110737450);
}



/* Entry: 104031a40; end: 104031a5f;  */

void FUN_104031a40(void)

{
  _objc_opt_self(&PTR_PTR_11297fcc8);
  return;
}



/* Entry: 104031a60; end: 104031b07;  */

int FUN_104031a60(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  iVar1 = *(byte *)(param_1 + 2) - 2;
  if (*(byte *)(param_1 + 2) < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 104031b08; end: 104031b5f;  */

void FUN_104031b08(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104032144;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040304e4,0,0);
  return;
}



/* Entry: 104031b60; end: 104031b6b;  */

void FUN_104031b60(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 104031b6c; end: 104031bc3;  */

void FUN_104031b6c(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x104032148;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f428,0,0);
  return;
}



/* Entry: 104031bc4; end: 104031c07;  */

void FUN_104031bc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___SCSensitivityAnalyzer_1126adb50;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000113049e90 = puVar1;
  return;
}



/* Entry: 104031c08; end: 104031c7f;  */

void FUN_104031c08(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104031c80;
  plVar3[0x14] = lVar4;
  plVar3[0x15] = unaff_x20 + 0x28;
  plVar3[0x12] = lVar1;
  plVar3[0x13] = lVar2;
  plVar3[0x11] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10403042c,0,0);
  return;
}



/* Entry: 104031c80; end: 104031cbb;  */

void FUN_104031c80(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104031cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104031cbc; end: 104031d2b;  */

void FUN_104031cbc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x104032150;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1040317e0;
                    /* WARNING: Could not recover jumptable at 0x0001040317dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 104031d2c; end: 104031d6b;  */

undefined8 FUN_104031d2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104031d6c; end: 104031db7;  */

void FUN_104031d6c(void)

{
  func_0x000104031d94();
  return;
}



/* Entry: 104031db8; end: 104031e13;  */

void FUN_104031db8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(uVar2);
  func_0x000100403b00(auStack_40,uVar1,uVar2);
  _swift_bridgeObjectRelease(uStack_38);
  return;
}



/* Entry: 104031e14; end: 104031f7b;  */

int FUN_104031e14(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104031e90;
        goto LAB_104031e74;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104031e74:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104031e90:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104031f7c; end: 104031fbb;  */

void FUN_104031f7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc53a0;
  _swift_getWitnessTable(&UNK_10dcc53a0,&UNK_110737698);
  puRam0000000113049ea0 = puVar1;
  return;
}



/* Entry: 104031fbc; end: 104031fcf;  */

bool FUN_104031fbc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104031fd0; end: 104031fe3;  */

void FUN_104031fd0(void)

{
  func_0x000104031d80();
  return;
}



/* Entry: 104031fe4; end: 104031feb;  */

void FUN_104031fe4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104031b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 104031fec; end: 104031fff;  */

void FUN_104031fec(void)

{
  FUN_10402fa70();
  return;
}



/* Entry: 104032000; end: 104032007;  */

void FUN_104032000(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104032008; end: 104032093;  */

void FUN_104032008(void)

{
  func_0x000100db19d0();
  return;
}



/* Entry: 104032094; end: 10403209b;  */

void FUN_104032094(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000107c60690(param_1,*unaff_x20);
  return;
}



/* Entry: 10403209c; end: 1040320ff;  */

void FUN_10403209c(void)

{
  FUN_104031270();
  return;
}



/* Entry: 104032100; end: 104032107;  */

void FUN_104032100(void)

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



/* Entry: 104032108; end: 10403211b;  */

void FUN_104032108(void)

{
  FUN_104031d6c();
  return;
}



/* Entry: 10403211c; end: 104032153;  */

void FUN_10403211c(ulong *param_1,ulong *param_2)

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



/* Entry: 104032154; end: 10403223f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104032154(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_113049ea8);
  if (lVar2 != 0) {
    FUN_104031a40(0);
    lVar1 = lVar2;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (lVar1 == 0) {
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 104032240; end: 104032353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104032240(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_113049ea8);
    if (lVar5 != 0) {
      FUN_104031a40(0);
      lVar2 = lVar5;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if ((lVar2 != 0) && (*(char *)(lVar2 + _DAT_113049df8) == '\x01')) {
        puVar3 = &UNK_110737710;
        _swift_allocObject(&UNK_110737710,0x18,7);
        *(long *)(puVar3 + 0x10) = lVar2;
        _swift_unknownObjectRetain(lVar5);
        uVar4 = 8;
        func_0x0001001ca524(8,0,0x5c,4,0,0,&UNK_10dcc53c8,puVar3,PTR___sytN_11034f1b0 + 8);
        _swift_release(puVar3);
        _swift_release(uVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
      return;
    }
  }
  return;
}



/* Entry: 104032354; end: 1040323ab;  */

void FUN_104032354(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1040323ac;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402f428,0,0);
  return;
}



/* Entry: 1040323ac; end: 1040323e7;  */

void FUN_1040323ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040323e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040323e8; end: 104032447; -[_TtC3SCW23SCWAnalyzerBridgeHandle init] */

void FUN_1040323e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCW.SCWAnalyzerBridgeHandle",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104032414);
  (*pcVar1)();
}



/* Entry: 104032448; end: 104032457; -[_TtC3SCW23SCWAnalyzerBridgeHandle .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104032448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113049ea8));
  return;
}



/* Entry: 104032458; end: 10403247b;  */

void FUN_104032458(void)

{
  long unaff_x20;
  
  FUN_1040330c8(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10403247c; end: 1040324d3;  */

void FUN_10403247c(void)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x0001000285a8(0x113049fd0,&UNK_10dcc5458);
  _swift_allocObject();
  puVar1 = &uStack_28;
  func_0x00010006c248();
  puRam0000000113049ee0 = puVar1;
  return;
}



/* Entry: 1040324d4; end: 104032577;  */

void FUN_1040324d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (lRam0000000113049ed8 != -1) {
    _swift_once(0x113049ed8,FUN_10403247c);
  }
  uVar1 = uRam0000000113049ee0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _swift_retain(uRam0000000113049ee0);
  func_0x000100075034(FUN_1040325f0,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(uVar1);
  return;
}



/* Entry: 104032578; end: 1040325ef;  */

void FUN_104032578(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _swift_release(*param_1);
  lVar1 = 0;
  FUN_104033088();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  _swift_unknownObjectWeakInit(lVar1 + 0x10,0);
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  _swift_unknownObjectWeakAssign(lVar1 + 0x10,param_2);
  *param_1 = lVar1;
  return;
}



/* Entry: 1040325f0; end: 104032607;  */

void FUN_1040325f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104032578(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104032608; end: 104032693;  */

undefined1 FUN_104032608(void)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  if (lRam0000000113049ed8 != -1) {
    _swift_once(0x113049ed8,FUN_10403247c);
  }
  uVar1 = uRam0000000113049ee0;
  _swift_retain(uRam0000000113049ee0);
  func_0x000100075034(&uStack_31,FUN_104032694,0,PTR___sSbN_11034dd40);
  _swift_release(uVar1);
  return uStack_31;
}



/* Entry: 104032694; end: 1040326df;  */

void FUN_104032694(undefined8 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*param_2 != 0) {
    lVar1 = *param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    bVar2 = lVar1 != 0;
    if (bVar2) {
      _swift_unknownObjectRelease();
    }
  }
  *(bool *)param_1 = bVar2;
  return;
}



/* Entry: 1040326e0; end: 10403280f;  */

undefined8 FUN_1040326e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  long lStack_60;
  long lStack_58;
  
  if (lRam0000000113049ed8 != -1) {
    _swift_once(0x113049ed8,FUN_10403247c);
  }
  uVar1 = uRam0000000113049ee0;
  _swift_retain(uRam0000000113049ee0);
  uVar4 = 0x113049ee8;
  func_0x0001000285a8(0x113049ee8,&UNK_10dcc53f0);
  func_0x000100075034(&lStack_60,0x104033100,0,uVar4);
  _swift_release(uVar1);
  if (lStack_60 == 0) {
LAB_1040327d8:
    uVar4 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10) + 1;
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) {
        _swift_unknownObjectRelease(lStack_60);
        goto LAB_1040327d8;
      }
      uVar3 = puVar5[-1];
      uVar4 = *puVar5;
      lVar2 = lStack_60;
      _swift_getObjectType(lStack_60);
      pcVar7 = *(code **)(lStack_58 + 0x18);
      _swift_bridgeObjectRetain(uVar4);
      (*pcVar7)(uVar3,uVar4,lVar2,lStack_58);
      _swift_bridgeObjectRelease(uVar4);
      puVar5 = puVar5 + 2;
    } while ((uVar3 & 1) == 0);
    _swift_unknownObjectRelease(lStack_60);
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 104032810; end: 1040328f3;  */

uint FUN_104032810(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lStack_40;
  long lStack_38;
  
  if (lRam0000000113049ed8 != -1) {
    _swift_once(0x113049ed8,FUN_10403247c);
  }
  uVar1 = uRam0000000113049ee0;
  _swift_retain(uRam0000000113049ee0);
  uVar2 = 0x113049ee8;
  func_0x0001000285a8(0x113049ee8,&UNK_10dcc53f0);
  func_0x000100075034(&lStack_40,FUN_1040330ec,0,uVar2);
  _swift_release(uVar1);
  if (lStack_40 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = lStack_40;
    _swift_getObjectType(lStack_40);
    (**(code **)(lStack_38 + 0x20))(param_1,param_2,lVar3,lStack_38);
    uVar4 = (uint)param_1;
    _swift_unknownObjectRelease(lStack_40);
  }
  return uVar4 & 1;
}



/* Entry: 1040328f4; end: 104032a67;  */

undefined8 FUN_1040328f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lStack_70;
  long lStack_68;
  
  if (lRam0000000113049ed8 != -1) {
    _swift_once(0x113049ed8,FUN_10403247c);
  }
  uVar1 = uRam0000000113049ee0;
  _swift_retain(uRam0000000113049ee0);
  uVar5 = 0x113049ee8;
  func_0x0001000285a8(0x113049ee8,&UNK_10dcc53f0);
  func_0x000100075034(&lStack_70,0x104033114,0,uVar5);
  _swift_release(uVar1);
  if (lStack_70 != 0) {
    _swift_unknownObjectRelease();
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(param_1 + 0x28);
      do {
        uVar2 = uRam0000000113049ee0;
        uVar7 = puVar9[-1];
        uVar1 = *puVar9;
        _swift_bridgeObjectRetain(uVar1);
        _swift_retain(uVar2);
        func_0x000100075034(&lStack_70,FUN_1040330ec,0,uVar5);
        _swift_release(uVar2);
        lVar4 = lStack_68;
        lVar3 = lStack_70;
        if (lStack_70 == 0) {
          _swift_bridgeObjectRelease(uVar1);
        }
        else {
          lVar6 = lStack_70;
          _swift_getObjectType(lStack_70);
          (**(code **)(lVar4 + 0x20))(uVar7,uVar1,lVar6,lVar4);
          _swift_unknownObjectRelease(lVar3);
          _swift_bridgeObjectRelease(uVar1);
          if ((uVar7 & 1) != 0) {
            return 1;
          }
        }
        puVar9 = puVar9 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return 0;
}



/* Entry: 104032a68; end: 104032ab7;  */

void FUN_104032a68(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar1 = 0;
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    lVar2 = *(long *)(lVar2 + 0x18);
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 104032ab8; end: 104032b3f;  */

void FUN_104032ab8(void)

{
  if (lRam0000000113049fc0 != -1) {
    _swift_once(0x113049fc0,FUN_104032b40);
  }
  uRam0000000113813090 = uRam0000000113049fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 104032b40; end: 104032bef;  */

void FUN_104032b40(void)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x0001000285a8(0x112e65788,&UNK_10da70730);
  _swift_allocObject();
  puVar1 = &uStack_28;
  func_0x00010042e6a0();
  puRam0000000113049fc8 = puVar1;
  return;
}



/* Entry: 104032bf0; end: 104032c0b;  */

void FUN_104032bf0(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *param_2 + 1;
  if (!SCARRY8(*param_2,1)) {
    *param_2 = lVar1;
    *param_1 = lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104032c0c);
  (*pcVar2)();
}



/* Entry: 104032c0c; end: 104032c47; -[SCWChatMediaActionGateObjC init] */

void FUN_104032c0c(undefined8 param_1)

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



/* Entry: 104032c48; end: 104032d43; +[SCWChatMediaActionGateObjC isSaveRestrictedForMediaID:] */

uint FUN_104032c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lStack_40;
  long lStack_38;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (lRam0000000113049ed8 != -1) {
    _swift_once(0x113049ed8,FUN_10403247c);
  }
  uVar1 = uRam0000000113049ee0;
  _swift_retain(uRam0000000113049ee0);
  uVar2 = 0x113049ee8;
  func_0x0001000285a8(0x113049ee8,&UNK_10dcc53f0);
  func_0x000100075034(&lStack_40,FUN_1040330ec,0,uVar2);
  _swift_release(uVar1);
  if (lStack_40 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar4 = 0;
  }
  else {
    lVar3 = lStack_40;
    _swift_getObjectType(lStack_40);
    (**(code **)(lStack_38 + 0x20))(param_3,param_2,lVar3,lStack_38);
    uVar4 = (uint)param_3;
    _swift_unknownObjectRelease(lStack_40);
    _swift_bridgeObjectRelease(param_2);
  }
  return uVar4 & 1;
}



/* Entry: 104032d44; end: 104032d4f; +[SCWChatMediaActionGateObjC isActionGatedForMediaIDs:] */

uint FUN_104032d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  uVar1 = param_3;
  FUN_104032dd4();
  _swift_bridgeObjectRelease(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 104032d50; end: 104032d5b; +[SCWChatMediaActionGateObjC isSaveRestrictedForMediaIDs:] */

uint FUN_104032d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  uVar1 = param_3;
  FUN_104032f04();
  _swift_bridgeObjectRelease(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 104032d5c; end: 104032d9f;  */

uint FUN_104032d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  uVar1 = param_3;
  (*param_4)();
  _swift_bridgeObjectRelease(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 104032da0; end: 104032dd3;  */

void FUN_104032da0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104032dd4; end: 104032f03;  */

undefined8 FUN_104032dd4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  long lStack_60;
  long lStack_58;
  
  if (lRam0000000113049ed8 != -1) {
    _swift_once(0x113049ed8,FUN_10403247c);
  }
  uVar1 = uRam0000000113049ee0;
  _swift_retain(uRam0000000113049ee0);
  uVar4 = 0x113049ee8;
  func_0x0001000285a8(0x113049ee8,&UNK_10dcc53f0);
  func_0x000100075034(&lStack_60,0x104033100,0,uVar4);
  _swift_release(uVar1);
  if (lStack_60 == 0) {
LAB_104032ecc:
    uVar4 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10) + 1;
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) {
        _swift_unknownObjectRelease(lStack_60);
        goto LAB_104032ecc;
      }
      uVar3 = puVar5[-1];
      uVar4 = *puVar5;
      lVar2 = lStack_60;
      _swift_getObjectType(lStack_60);
      pcVar7 = *(code **)(lStack_58 + 0x18);
      _swift_bridgeObjectRetain(uVar4);
      (*pcVar7)(uVar3,uVar4,lVar2,lStack_58);
      _swift_bridgeObjectRelease(uVar4);
      puVar5 = puVar5 + 2;
    } while ((uVar3 & 1) == 0);
    _swift_unknownObjectRelease(lStack_60);
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 104032f04; end: 104033077;  */

undefined8 FUN_104032f04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lStack_70;
  long lStack_68;
  
  if (lRam0000000113049ed8 != -1) {
    _swift_once(0x113049ed8,FUN_10403247c);
  }
  uVar1 = uRam0000000113049ee0;
  _swift_retain(uRam0000000113049ee0);
  uVar5 = 0x113049ee8;
  func_0x0001000285a8(0x113049ee8,&UNK_10dcc53f0);
  func_0x000100075034(&lStack_70,0x104033114,0,uVar5);
  _swift_release(uVar1);
  if (lStack_70 != 0) {
    _swift_unknownObjectRelease();
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(param_1 + 0x28);
      do {
        uVar2 = uRam0000000113049ee0;
        uVar7 = puVar9[-1];
        uVar1 = *puVar9;
        _swift_bridgeObjectRetain(uVar1);
        _swift_retain(uVar2);
        func_0x000100075034(&lStack_70,FUN_1040330ec,0,uVar5);
        _swift_release(uVar2);
        lVar4 = lStack_68;
        lVar3 = lStack_70;
        if (lStack_70 == 0) {
          _swift_bridgeObjectRelease(uVar1);
        }
        else {
          lVar6 = lStack_70;
          _swift_getObjectType(lStack_70);
          (**(code **)(lVar4 + 0x20))(uVar7,uVar1,lVar6,lVar4);
          _swift_unknownObjectRelease(lVar3);
          _swift_bridgeObjectRelease(uVar1);
          if ((uVar7 & 1) != 0) {
            return 1;
          }
        }
        puVar9 = puVar9 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return 0;
}



/* Entry: 104033078; end: 104033087;  */

undefined1  [16] FUN_104033078(void)

{
  return ZEXT816(0x110737738);
}



/* Entry: 104033088; end: 1040330c7;  */

void FUN_104033088(void)

{
  _objc_opt_self(&PTR_PTR_113049f38);
  return;
}



/* Entry: 1040330c8; end: 1040330eb;  */

undefined8 FUN_1040330c8(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1040330ec; end: 104033127;  */

void FUN_1040330ec(void)

{
  func_0x000100db1ccc();
  return;
}



/* Entry: 104033128; end: 10403313b; -[SCWDescriptiveRevealViewController onContinue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104033128(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_113049fe8);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1107379c8;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10403313c; end: 1040331f7; -[SCWDescriptiveRevealViewController setOnContinue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403313c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1107379b0;
    _swift_allocObject(&UNK_1107379b0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x104036194;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113049fe8);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 1040331f8; end: 10403320b; -[SCWDescriptiveRevealViewController onGoBack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040331f8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_113049ff0);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110737978;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10403320c; end: 1040332c7; -[SCWDescriptiveRevealViewController setOnGoBack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403320c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_110737960;
    _swift_allocObject(&UNK_110737960,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x10403618c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113049ff0);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 1040332c8; end: 1040332db; -[SCWDescriptiveRevealViewController onReport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040332c8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_113049ff8);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110737928;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1040332dc; end: 104033383;  */

void FUN_1040332dc(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    ppuVar3 = &puStack_78;
    uStack_60 = param_4;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104033384; end: 10403345b; -[SCWDescriptiveRevealViewController setOnReport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104033384(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_110737910;
    _swift_allocObject(&UNK_110737910,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_104035d1c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113049ff8);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x000100b64c10(pcVar5,puVar4);
  func_0x00010058d43c(uVar2,uVar3);
  FUN_104033548();
  _objc_release(param_1);
  func_0x00010058d43c(pcVar5,puVar4);
  return;
}



/* Entry: 10403345c; end: 104033547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403345c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_113049ff8);
  _swift_beginAccess(plVar1,auStack_68,1,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = param_1;
  plVar1[1] = param_2;
  func_0x000100b64c10(param_1,param_2);
  func_0x00010058d43c(lVar2,lVar3);
  if (*plVar1 != 0) {
    if ((long)*(ulong *)(unaff_x20 + _DAT_11304a010) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104033544);
      (*pcVar4)();
    }
    if (*(ulong *)(*(long *)(unaff_x20 + _DAT_11304a008) + 0x10) <=
        *(ulong *)(unaff_x20 + _DAT_11304a010)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104033548);
      (*pcVar4)();
    }
  }
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_11304a000));
  func_0x00010058d43c(param_1,param_2);
  return;
}



/* Entry: 104033548; end: 1040335f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104033548(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113049ff8;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11304a000);
  _swift_beginAccess(unaff_x20 + _DAT_113049ff8,auStack_48,0,0);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    if ((long)*(ulong *)(unaff_x20 + _DAT_11304a010) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1040335f0);
      (*pcVar2)();
    }
    if (*(ulong *)(*(long *)(unaff_x20 + _DAT_11304a008) + 0x10) <=
        *(ulong *)(unaff_x20 + _DAT_11304a010)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1040335f4);
      (*pcVar2)();
    }
  }
  func_0x000107c550d8(uVar3);
  return;
}



/* Entry: 1040335f4; end: 104033963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1040335f4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113049fe8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113049ff0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113049ff8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_11304a008;
  lVar3 = 0x1130498f8;
  func_0x0001000285a8(0x1130498f8,&UNK_10dcc5480);
  uVar12 = 0xc0;
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  lVar4 = lVar3;
  FUN_104039208();
  lVar5 = 0x113049900;
  func_0x0001000285a8(0x113049900,&UNK_10dcc4bb0);
  uVar13 = 0xb0;
  lVar6 = lVar5;
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 6;
  *(undefined8 *)(lVar6 + 0x10) = 3;
  lVar7 = lVar6;
  func_0x0001040392c4();
  lVar8 = lVar7;
  uVar14 = uVar13;
  func_0x000104039380();
  *(undefined8 *)(lVar6 + 0x20) = 0xb1939ff0;
  *(undefined8 *)(lVar6 + 0x28) = 0xa400000000000000;
  *(long *)(lVar6 + 0x30) = lVar7;
  *(undefined8 *)(lVar6 + 0x38) = uVar13;
  *(long *)(lVar6 + 0x40) = lVar8;
  *(undefined8 *)(lVar6 + 0x48) = uVar14;
  func_0x00010403943c();
  lVar7 = lVar8;
  uVar13 = uVar14;
  func_0x0001040394f8();
  *(undefined8 *)(lVar6 + 0x50) = 0x8d949ff0;
  *(undefined8 *)(lVar6 + 0x58) = 0xa400000000000000;
  *(long *)(lVar6 + 0x60) = lVar8;
  *(undefined8 *)(lVar6 + 0x68) = uVar14;
  *(long *)(lVar6 + 0x70) = lVar7;
  *(undefined8 *)(lVar6 + 0x78) = uVar13;
  func_0x0001040395b4();
  lVar8 = lVar7;
  uVar14 = uVar13;
  func_0x000104039670();
  *(undefined8 *)(lVar6 + 0x80) = 0x95949ff0;
  *(undefined8 *)(lVar6 + 0x88) = 0xa400000000000000;
  *(long *)(lVar6 + 0x90) = lVar7;
  *(undefined8 *)(lVar6 + 0x98) = uVar13;
  *(long *)(lVar6 + 0xa0) = lVar8;
  *(undefined8 *)(lVar6 + 0xa8) = uVar14;
  func_0x000104039b94();
  lVar7 = lVar8;
  uVar13 = uVar14;
  func_0x000104039c50();
  *(undefined8 *)(lVar3 + 0x20) = 0x92949ff0;
  *(undefined8 *)(lVar3 + 0x28) = 0xa400000000000000;
  *(long *)(lVar3 + 0x30) = lVar4;
  *(undefined8 *)(lVar3 + 0x38) = uVar12;
  *(long *)(lVar3 + 0x40) = lVar6;
  *(long *)(lVar3 + 0x48) = lVar8;
  *(undefined8 *)(lVar3 + 0x50) = uVar14;
  *(long *)(lVar3 + 0x58) = lVar7;
  *(undefined8 *)(lVar3 + 0x60) = uVar13;
  *(undefined1 *)(lVar3 + 0x68) = 0;
  func_0x00010403972c();
  uVar12 = 0xb0;
  _swift_allocObject(lVar5,0xb0,7);
  *(undefined8 *)(lVar5 + 0x18) = 6;
  *(undefined8 *)(lVar5 + 0x10) = 3;
  lVar4 = lVar5;
  func_0x0001040397e8();
  *(undefined8 *)(lVar5 + 0x20) = 0x88999ff0;
  *(undefined8 *)(lVar5 + 0x28) = 0xa400000000000000;
  *(long *)(lVar5 + 0x30) = lVar4;
  *(undefined8 *)(lVar5 + 0x38) = uVar12;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  func_0x0001040398a4();
  lVar6 = lVar4;
  uVar14 = uVar12;
  func_0x000104039960();
  *(undefined8 *)(lVar5 + 0x50) = 0x90a49ff0;
  *(undefined8 *)(lVar5 + 0x58) = 0xa400000000000000;
  *(long *)(lVar5 + 0x60) = lVar4;
  *(undefined8 *)(lVar5 + 0x68) = uVar12;
  *(long *)(lVar5 + 0x70) = lVar6;
  *(undefined8 *)(lVar5 + 0x78) = uVar14;
  func_0x000104039a1c();
  lVar4 = lVar6;
  uVar12 = uVar14;
  func_0x000104039ad8();
  *(undefined8 *)(lVar5 + 0x80) = 0xa99a9ff0;
  *(undefined8 *)(lVar5 + 0x88) = 0xa400000000000000;
  *(long *)(lVar5 + 0x90) = lVar6;
  *(undefined8 *)(lVar5 + 0x98) = uVar14;
  *(long *)(lVar5 + 0xa0) = lVar4;
  *(undefined8 *)(lVar5 + 0xa8) = uVar12;
  func_0x000104039d0c();
  lVar6 = lVar4;
  uVar14 = uVar12;
  func_0x000104039dc8();
  *(undefined8 *)(lVar3 + 0x70) = 0x94a49ff0;
  *(undefined8 *)(lVar3 + 0x78) = 0xa400000000000000;
  *(long *)(lVar3 + 0x80) = lVar7;
  *(undefined8 *)(lVar3 + 0x88) = uVar13;
  *(long *)(lVar3 + 0x90) = lVar5;
  *(long *)(lVar3 + 0x98) = lVar4;
  *(undefined8 *)(lVar3 + 0xa0) = uVar12;
  *(long *)(lVar3 + 0xa8) = lVar6;
  *(undefined8 *)(lVar3 + 0xb0) = uVar14;
  *(undefined1 *)(lVar3 + 0xb8) = 1;
  *(long *)(unaff_x20 + lVar2) = lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11304a010) = 0;
  lVar3 = _DAT_11304a018;
  puVar9 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_self();
  puVar10 = puVar9;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar3) = puVar10;
  lVar3 = _DAT_11304a020;
  puVar10 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar10;
  lVar3 = _DAT_11304a028;
  puVar10 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar10;
  lVar3 = _DAT_11304a030;
  puVar10 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar3) = puVar10;
  lVar3 = _DAT_11304a038;
  puVar10 = puVar9;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar3) = puVar10;
  lVar3 = _DAT_11304a040;
  puVar10 = puVar9;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar3) = puVar10;
  lVar3 = _DAT_11304a000;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar3) = puVar9;
  puVar11 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar11,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c5677c();
  return puVar11;
}



/* Entry: 104033964; end: 104033983; -[SCWDescriptiveRevealViewController init] */

void FUN_104033964(void)

{
  FUN_1040335f4();
  return;
}



/* Entry: 104033984; end: 1040339ab; -[SCWDescriptiveRevealViewController initWithCoder:] */

void FUN_104033984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1040359b4();
  return;
}



/* Entry: 1040339ac; end: 104033abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040339ac(void)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_e0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_viewDidLoad_112684cd8);
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104033abc);
    (*pcVar1)();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5c5e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52b50(lVar4);
  _objc_release(lVar4);
  _objc_release(puVar2);
  FUN_104033abc();
  uVar3 = *(ulong *)(unaff_x20 + _DAT_11304a010);
  if (-1 < (long)uVar3) {
    if (uVar3 < *(ulong *)(*(long *)(unaff_x20 + _DAT_11304a008) + 0x10)) {
      lVar4 = *(long *)(unaff_x20 + _DAT_11304a008) + uVar3 * 0x50;
      uStack_78 = *(undefined8 *)(lVar4 + 0x28);
      uStack_80 = *(undefined8 *)(lVar4 + 0x20);
      uStack_68 = *(undefined8 *)(lVar4 + 0x38);
      uStack_70 = *(undefined8 *)(lVar4 + 0x30);
      uStack_58 = *(undefined8 *)(lVar4 + 0x48);
      uStack_60 = *(undefined8 *)(lVar4 + 0x40);
      uStack_50 = *(undefined8 *)(lVar4 + 0x50);
      uStack_3f = *(undefined8 *)(lVar4 + 0x61);
      uStack_40 = (undefined1)((ulong)*(undefined8 *)(lVar4 + 0x59) >> 0x38);
      uStack_48 = (undefined1)*(undefined8 *)(lVar4 + 0x58);
      uStack_47 = (undefined7)((ulong)*(undefined8 *)(lVar4 + 0x58) >> 8);
      FUN_104034eb8(&uStack_80,auStack_e0);
      FUN_104034bb4(&uStack_80);
      func_0x000104034eec(&uStack_80);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104033ab8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104033ab4);
  (*pcVar1)();
}



/* Entry: 104033abc; end: 104034bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104033abc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar16 = *(long *)(unaff_x20 + _DAT_11304a018);
  func_0x000104039f40();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  uVar13 = 0x20b980e2;
  uVar10 = 0xa400000000000000;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x20b980e2,0xa400000000000000);
  _swift_bridgeObjectRelease(0xa400000000000000);
  func_0x000107c59e1c(lVar16);
  _objc_release(uVar13);
  lVar2 = lVar16;
  func_0x000107c5cac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_opt_self(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c4eca4();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c54adc(lVar2);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5c5f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59e34(lVar16);
  _objc_release(puVar4);
  func_0x00010befbd60(lVar16);
  func_0x000107c5a050(lVar16);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11304a020);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_self(PTR__OBJC_CLASS___UIFont_1126aec38);
  puVar5 = puVar4;
  func_0x000107c5c5fc(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c54adc(uVar13);
  _objc_release(puVar5);
  func_0x000107c59c74(uVar13);
  func_0x000107c55528(uVar13);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_11304a028);
  puVar5 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
  func_0x00010bfeeae0();
  puVar6 = puVar4;
  func_0x00010bf1eda0(0x403e000000000000,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x000107c51840(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  func_0x000107c54adc(uVar14);
  _objc_release(puVar7);
  func_0x000107c52518(uVar14);
  puVar5 = puVar3;
  func_0x000107c4a954(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59c78(uVar14);
  _objc_release(puVar5);
  func_0x000107c59c74(uVar14);
  func_0x000107c56ba8(uVar14);
  func_0x000107c52100(uVar14);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11304a030);
  func_0x000107c52b2c(uVar15);
  func_0x000107c52610(uVar15);
  func_0x000107c59594(0x4034000000000000,uVar15);
  lVar17 = *(long *)(unaff_x20 + _DAT_11304a038);
  lVar2 = lVar17;
  func_0x000107c5cac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
    _objc_allocWithZone(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
    func_0x00010bfeeae0();
    puVar6 = puVar4;
    func_0x00010bf1eda0(0x4031000000000000,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x000107c51840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    func_0x000107c54adc(lVar2);
    _objc_release(lVar2);
    _objc_release(puVar7);
  }
  lVar2 = lVar17;
  func_0x000107c5cac0(lVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52518();
  _objc_release(lVar2);
  puVar5 = puVar3;
  func_0x000107c5c5f0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52b50(lVar17);
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x000107c5e2ac(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59e34(lVar17);
  _objc_release(puVar5);
  func_0x000107c53810(0x4028000000000000,0x4030000000000000,0x4028000000000000,0x4030000000000000,
                      lVar17);
  lVar2 = lVar17;
  func_0x000107c4aba4(lVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c539d4(0x4038000000000000);
  _objc_release(lVar2);
  func_0x00010befbd60(lVar17);
  lVar8 = *(long *)(unaff_x20 + _DAT_11304a040);
  lVar2 = lVar8;
  func_0x000107c5cac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
    _objc_allocWithZone(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
    func_0x00010bfeeae0();
    puVar6 = puVar4;
    func_0x00010bf1eda0(0x4031000000000000,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x000107c51840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    func_0x000107c54adc(lVar2);
    _objc_release(lVar2);
    _objc_release(puVar7);
  }
  lVar2 = lVar8;
  func_0x000107c5cac0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52518();
  _objc_release(lVar2);
  puVar5 = puVar3;
  func_0x000107c5c5f0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59e34(lVar8);
  _objc_release(puVar5);
  lVar2 = lVar8;
  func_0x00010befbd60(lVar8);
  lVar18 = *(long *)(unaff_x20 + _DAT_11304a000);
  func_0x000104039e84();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar10);
  func_0x000107c59e1c(lVar18);
  _objc_release(lVar2);
  lVar2 = lVar18;
  func_0x000107c5cac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
    _objc_allocWithZone(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
    func_0x00010bfeeae0();
    func_0x00010bf1eda0(0x4031000000000000,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000107c51840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x000107c54adc(lVar2);
    _objc_release(lVar2);
    _objc_release(puVar6);
  }
  lVar2 = lVar18;
  func_0x000107c5cac0(lVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52518();
  _objc_release(lVar2);
  func_0x000107c5c5f0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59e34(lVar18);
  _objc_release(puVar3);
  lVar2 = lVar18;
  func_0x00010befbd60();
  func_0x0001008479c8();
  lVar9 = lVar2;
  _swift_allocObject();
  *(undefined8 *)(lVar9 + 0x18) = 7;
  *(undefined8 *)(lVar9 + 0x10) = 3;
  *(undefined8 *)(lVar9 + 0x20) = uVar13;
  *(undefined8 *)(lVar9 + 0x28) = uVar14;
  *(undefined8 *)(lVar9 + 0x30) = uVar15;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  uVar10 = 0;
  FUN_104036134(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_retain(uVar13);
  _objc_retain(uVar14);
  _objc_retain(uVar15);
  lVar11 = lVar9;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar9,uVar10);
  _swift_release(lVar9);
  func_0x00010bff3fe0();
  _objc_release(lVar11);
  func_0x000107c52b2c(puVar3);
  func_0x000107c52610(puVar3);
  func_0x000107c59594(0x4038000000000000,puVar3);
  func_0x000107c53d1c(0x4030000000000000,puVar3);
  _objc_retain();
  func_0x000107c5a050();
  puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_allocWithZone();
  func_0x00010bfee200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5a050();
  func_0x00010befbb60(puVar4);
  _swift_allocObject(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x18,
                     *(ushort *)(lVar2 + 0x34) | 7);
  *(undefined8 *)(lVar2 + 0x18) = 7;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  *(long *)(lVar2 + 0x20) = lVar17;
  *(long *)(lVar2 + 0x28) = lVar8;
  *(long *)(lVar2 + 0x30) = lVar18;
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  _objc_retain();
  _objc_retain(lVar8);
  _objc_retain(lVar18);
  lVar8 = lVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar10);
  _swift_release(lVar2);
  func_0x00010bff3fe0();
  _objc_release(lVar8);
  func_0x000107c52b2c(puVar5);
  func_0x000107c52610(puVar5);
  func_0x000107c59594(0x4028000000000000,puVar5);
  _objc_retain();
  func_0x000107c5a050();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104034b90);
    (*pcVar1)();
  }
  func_0x00010befbb60();
  _objc_release(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104034b94);
    (*pcVar1)();
  }
  func_0x00010befbb60();
  _objc_release(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104034b98);
    (*pcVar1)();
  }
  func_0x00010befbb60();
  _objc_release();
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 0x1f;
  *(undefined8 *)(lVar2 + 0x10) = 0xf;
  lVar8 = lVar16;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104034b9c);
    (*pcVar1)();
  }
  lVar9 = lVar18;
  func_0x000107c4ac04();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = lVar9;
  func_0x000107c4acb0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar18);
  *(long *)(lVar2 + 0x20) = lVar9;
  lVar8 = lVar16;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104034ba0);
    (*pcVar1)();
  }
  lVar9 = lVar18;
  func_0x000107c515ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = lVar9;
  func_0x000107c5cbe4(lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar8;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar18);
  *(long *)(lVar2 + 0x28) = lVar9;
  puVar6 = puVar4;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar16);
  *(undefined **)(lVar2 + 0x30) = puVar7;
  puVar6 = puVar4;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104034ba4);
    (*pcVar1)();
  }
  lVar8 = lVar16;
  func_0x000107c4ac04();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  lVar16 = lVar8;
  func_0x000107c4acb0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puVar7 = puVar6;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar16);
  *(undefined **)(lVar2 + 0x38) = puVar7;
  puVar6 = puVar4;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 != 0) {
    lVar8 = lVar16;
    func_0x000107c4ac04();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    lVar16 = lVar8;
    func_0x000107c5ce8c(lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puVar7 = puVar6;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar16);
    *(undefined **)(lVar2 + 0x40) = puVar7;
    puVar6 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar7 = puVar5;
    func_0x000107c5cbe4(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar6;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar7);
    *(undefined **)(lVar2 + 0x48) = puVar12;
    puVar6 = puVar3;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf4c920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf493c0(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar12);
    *(undefined **)(lVar2 + 0x50) = puVar7;
    puVar6 = puVar3;
    func_0x000107c4acb0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf4c920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x000107c4acb0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar12);
    *(undefined **)(lVar2 + 0x58) = puVar7;
    puVar6 = puVar3;
    func_0x000107c5ce8c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf4c920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x000107c5ce8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar12);
    *(undefined **)(lVar2 + 0x60) = puVar7;
    puVar6 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf4c920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar12);
    *(undefined **)(lVar2 + 0x68) = puVar7;
    puVar6 = puVar3;
    func_0x000107c5e308();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar7 = puVar4;
    func_0x00010bfb6da0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x000107c5e308();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar12);
    *(undefined **)(lVar2 + 0x70) = puVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar17;
    func_0x00010bf494e0(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    *(long *)(lVar2 + 0x78) = lVar16;
    puVar6 = puVar5;
    func_0x000107c4acb0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = unaff_x20;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104034bac);
      (*pcVar1)();
    }
    lVar17 = lVar16;
    func_0x000107c4ac04();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    lVar16 = lVar17;
    func_0x000107c4acb0(lVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    puVar7 = puVar6;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar16);
    *(undefined **)(lVar2 + 0x80) = puVar7;
    puVar6 = puVar5;
    func_0x000107c5ce8c();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = unaff_x20;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    if (lVar16 != 0) {
      lVar17 = lVar16;
      func_0x000107c4ac04();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      lVar16 = lVar17;
      func_0x000107c5ce8c(lVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar17);
      puVar7 = puVar6;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar16);
      *(undefined **)(lVar2 + 0x88) = puVar7;
      puVar6 = puVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x000107c5de64();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x20 != 0) {
        puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar16 = unaff_x20;
        func_0x000107c515ac(unaff_x20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x20);
        lVar17 = lVar16;
        func_0x00010bf1ff80(lVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
        puVar12 = puVar6;
        func_0x00010bf493c0(0xc030000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(lVar17);
        *(undefined **)(lVar2 + 0x90) = puVar12;
        uVar13 = 0;
        FUN_104036134(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar16 = lVar2;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar13);
        _swift_release(lVar2);
        func_0x00010beef8c0(puVar7);
        _objc_release(puVar3);
        _objc_release(puVar4);
        _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar16);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104034bb4);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104034bb0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104034ba8);
  (*pcVar1)();
}



/* Entry: 104034bb4; end: 104034eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104034bb4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = _DAT_11304a010;
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_11304a018),param_2,
                      *(long *)(unaff_x20 + _DAT_11304a010) == 0);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11304a020);
  uVar8 = *param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,param_1[1]);
  func_0x000107c59c6c(uVar7);
  _objc_release(uVar8);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11304a028);
  uVar8 = param_1[2];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,param_1[3]);
  func_0x000107c59c6c(uVar7);
  _objc_release(uVar8);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11304a038);
  uVar8 = param_1[5];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,param_1[6]);
  func_0x000107c59e1c(uVar7);
  _objc_release(uVar8);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11304a040);
  uVar8 = param_1[7];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,param_1[8]);
  func_0x000107c59e1c(uVar7);
  _objc_release(uVar8);
  lVar9 = _DAT_113049ff8;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11304a000);
  _swift_beginAccess(unaff_x20 + _DAT_113049ff8,auStack_c8,0,0);
  if (*(long *)(unaff_x20 + lVar9) != 0) {
    if ((long)*(ulong *)(unaff_x20 + lVar1) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104034eb0);
      (*pcVar2)();
    }
    if (*(ulong *)(*(long *)(unaff_x20 + _DAT_11304a008) + 0x10) <= *(ulong *)(unaff_x20 + lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104034eb4);
      (*pcVar2)();
    }
  }
  func_0x000107c550d8(uVar8);
  uVar6 = *(ulong *)(unaff_x20 + _DAT_11304a030);
  uVar10 = uVar6;
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  FUN_104036134(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar3 = uVar10;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar8);
  _objc_release(uVar10);
  if (uVar3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar10 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar10 != 0) {
    if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104034eb8);
      (*pcVar2)();
    }
    uVar12 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar12 * 8 + 0x20);
        _objc_retain(uVar4);
      }
      else {
        uVar4 = uVar12;
        func_0x000100f040d0(uVar12,uVar3);
      }
      uVar12 = uVar12 + 1;
      func_0x000107c4ff34();
      _objc_release(uVar4);
    } while (uVar10 != uVar12);
  }
  _swift_bridgeObjectRelease(uVar3);
  lVar9 = *(long *)(param_1[4] + 0x10);
  if (lVar9 != 0) {
    puVar11 = (undefined8 *)(param_1[4] + 0x20);
    do {
      uStack_a8 = puVar11[1];
      uStack_b0 = *puVar11;
      uStack_98 = puVar11[3];
      uStack_a0 = puVar11[2];
      uStack_68 = puVar11[3];
      uStack_70 = puVar11[2];
      uStack_88 = puVar11[5];
      uStack_90 = puVar11[4];
      uStack_58 = puVar11[5];
      uStack_60 = puVar11[4];
      uStack_80 = uStack_b0;
      uStack_78 = uStack_a8;
      func_0x000100402194(&uStack_80,auStack_d8);
      func_0x000100402194(&uStack_70,auStack_d8);
      func_0x000101223174(&uStack_60,auStack_d8);
      puVar5 = &uStack_b0;
      FUN_104035d24(puVar5);
      func_0x000100bcb1dc(&uStack_80);
      func_0x000100bcb1dc(&uStack_70);
      func_0x000101994d34(&uStack_60);
      func_0x00010bef6d60(uVar6);
      _objc_release(puVar5);
      puVar11 = puVar11 + 6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 104034eb8; end: 104034f17;  */

undefined8 FUN_104034eb8(undefined8 param_1,undefined8 param_2)

{
  FUN_104035718(param_2,param_1,&UNK_110737838);
  return param_2;
}



/* Entry: 104034f18; end: 104034f3f; -[SCWDescriptiveRevealViewController viewDidLoad] */

void FUN_104034f18(undefined8 param_1)

{
  _objc_retain();
  FUN_1040339ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104034f40; end: 1040350d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104034f40(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_11304a010) + 1;
  if (SCARRY8(*(long *)(unaff_x20 + _DAT_11304a010),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040350d4);
    (*pcVar3)();
  }
  if (lVar1 < *(long *)(*(long *)(unaff_x20 + _DAT_11304a008) + 0x10)) {
    *(long *)(unaff_x20 + _DAT_11304a010) = lVar1;
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040350d8);
      (*pcVar3)();
    }
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1107378c0;
    _swift_allocObject(&UNK_1107378c0,0x20,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    *(long *)(puVar6 + 0x18) = lVar1;
    uStack_50 = 0x1040361a4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1107378d8;
    puStack_48 = puVar6;
    __Block_copy(&puStack_70);
    puVar6 = puStack_48;
    _objc_retain();
    _swift_release(puVar6);
    func_0x000107c5cf68(0x3fc999999999999a,puVar5);
    __Block_release(ppuVar7);
    _objc_release(lVar4);
    _UIAccessibilityPostNotification
              (*(undefined4 *)PTR__UIAccessibilityScreenChangedNotification_110345908,
               *(undefined8 *)(unaff_x20 + _DAT_11304a028));
  }
  else {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_113049fe8);
    _swift_beginAccess(puVar2,&puStack_70,0,0);
    pcVar3 = (code *)*puVar2;
    if (pcVar3 != (code *)0x0) {
      uVar8 = puVar2[1];
      _swift_retain(uVar8);
      (*pcVar3)();
      func_0x00010058d43c(pcVar3,uVar8);
    }
  }
  return;
}



/* Entry: 1040350d8; end: 104035163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040350d8(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_c0 [80];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104035160);
    (*pcVar1)();
  }
  if (param_2 < *(ulong *)(*(long *)(param_1 + _DAT_11304a008) + 0x10)) {
    lVar2 = *(long *)(param_1 + _DAT_11304a008) + param_2 * 0x50;
    uStack_68 = *(undefined8 *)(lVar2 + 0x28);
    uStack_70 = *(undefined8 *)(lVar2 + 0x20);
    uStack_58 = *(undefined8 *)(lVar2 + 0x38);
    uStack_60 = *(undefined8 *)(lVar2 + 0x30);
    uStack_48 = *(undefined8 *)(lVar2 + 0x48);
    uStack_50 = *(undefined8 *)(lVar2 + 0x40);
    uStack_40 = *(undefined8 *)(lVar2 + 0x50);
    uStack_2f = *(undefined8 *)(lVar2 + 0x61);
    uStack_30 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0x59) >> 0x38);
    uStack_38 = (undefined1)*(undefined8 *)(lVar2 + 0x58);
    uStack_37 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 8);
    FUN_104034eb8(&uStack_70,auStack_c0);
    FUN_104034bb4(&uStack_70);
    func_0x000104034eec(&uStack_70);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104035164);
  (*pcVar1)();
}



/* Entry: 104035164; end: 10403518b; -[SCWDescriptiveRevealViewController continueTapped] */

void FUN_104035164(undefined8 param_1)

{
  _objc_retain();
  FUN_104034f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10403518c; end: 104035197; -[SCWDescriptiveRevealViewController goBackTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403518c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113049ff0);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    _objc_retain(param_1);
    func_0x000100b64c10(pcVar2,uVar3);
    (*pcVar2)();
    _objc_release(param_1);
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 104035198; end: 1040351a3; -[SCWDescriptiveRevealViewController reportTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104035198(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113049ff8);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    _objc_retain(param_1);
    func_0x000100b64c10(pcVar2,uVar3);
    (*pcVar2)();
    _objc_release(param_1);
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 1040351a4; end: 10403522b;  */

void FUN_1040351a4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    _objc_retain(param_1);
    func_0x000100b64c10(pcVar2,uVar3);
    (*pcVar2)();
    _objc_release(param_1);
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 10403522c; end: 104035353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403522c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_11304a010) = 0;
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_110737870;
    _swift_allocObject(&UNK_110737870,0x20,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    uStack_50 = 0x104035990;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110737888;
    puStack_48 = puVar4;
    __Block_copy(&puStack_70);
    puVar4 = puStack_48;
    _objc_retain();
    _swift_release(puVar4);
    func_0x000107c5cf68(0x3fc999999999999a,puVar3);
    __Block_release(ppuVar5);
    _objc_release(lVar2);
    _UIAccessibilityPostNotification
              (*(undefined4 *)PTR__UIAccessibilityScreenChangedNotification_110345908,
               *(undefined8 *)(unaff_x20 + _DAT_11304a028));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104035354);
  (*pcVar1)();
}



/* Entry: 104035354; end: 10403537b; -[SCWDescriptiveRevealViewController backTapped] */

void FUN_104035354(undefined8 param_1)

{
  _objc_retain();
  FUN_10403522c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10403537c; end: 1040353db; -[SCWDescriptiveRevealViewController initWithNibName:bundle:] */

void FUN_10403537c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCW.SCWDescriptiveRevealViewController",0x26,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040353a8);
  (*pcVar1)();
}



/* Entry: 1040353dc; end: 1040354af; -[SCWDescriptiveRevealViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040353dc(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_113049fe8),
                      ((undefined8 *)(param_1 + _DAT_113049fe8))[1]);
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_113049ff0),
                      ((undefined8 *)(param_1 + _DAT_113049ff0))[1]);
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_113049ff8),
                      ((undefined8 *)(param_1 + _DAT_113049ff8))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11304a008));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a018));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a020));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a028));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a030));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a038));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a040));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11304a000));
  return;
}



/* Entry: 1040354b0; end: 1040354cf;  */

void FUN_1040354b0(void)

{
  _objc_opt_self(&PTR_PTR_11297ff40);
  return;
}



/* Entry: 1040354d0; end: 1040354ff;  */

void FUN_1040354d0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104035500; end: 1040355df;  */

undefined8 * FUN_104035500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1040355e0; end: 104035633;  */

undefined8 * FUN_1040355e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 104035634; end: 1040356d7;  */

int FUN_104035634(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040356d8; end: 104035717;  */

void FUN_1040356d8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 104035718; end: 10403579b;  */

undefined8 * FUN_104035718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar4 = param_2[8];
  param_1[8] = uVar4;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 10403579c; end: 104035867;  */

undefined8 * FUN_10403579c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 104035868; end: 1040358e3;  */

undefined8 * FUN_104035868(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 1040358e4; end: 1040359b3;  */

int FUN_1040358e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040359b4; end: 104035d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040359b4(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113049fe8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113049ff0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113049ff8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_11304a008;
  lVar4 = 0x1130498f8;
  func_0x0001000285a8(0x1130498f8,&UNK_10dcc5480);
  uVar12 = 0xc0;
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x10) = 2;
  *(undefined8 *)(lVar4 + 0x18) = 4;
  lVar5 = lVar4;
  FUN_104039208();
  lVar6 = 0x113049900;
  func_0x0001000285a8(0x113049900,&UNK_10dcc4bb0);
  uVar13 = 0xb0;
  lVar7 = lVar6;
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x10) = 3;
  *(undefined8 *)(lVar7 + 0x18) = 6;
  lVar8 = lVar7;
  func_0x0001040392c4();
  lVar9 = lVar8;
  uVar14 = uVar13;
  func_0x000104039380();
  *(undefined8 *)(lVar7 + 0x20) = 0xb1939ff0;
  *(undefined8 *)(lVar7 + 0x28) = 0xa400000000000000;
  *(long *)(lVar7 + 0x30) = lVar8;
  *(undefined8 *)(lVar7 + 0x38) = uVar13;
  *(long *)(lVar7 + 0x40) = lVar9;
  *(undefined8 *)(lVar7 + 0x48) = uVar14;
  func_0x00010403943c();
  lVar8 = lVar9;
  uVar13 = uVar14;
  func_0x0001040394f8();
  *(undefined8 *)(lVar7 + 0x50) = 0x8d949ff0;
  *(undefined8 *)(lVar7 + 0x58) = 0xa400000000000000;
  *(long *)(lVar7 + 0x60) = lVar9;
  *(undefined8 *)(lVar7 + 0x68) = uVar14;
  *(long *)(lVar7 + 0x70) = lVar8;
  *(undefined8 *)(lVar7 + 0x78) = uVar13;
  func_0x0001040395b4();
  lVar9 = lVar8;
  uVar14 = uVar13;
  func_0x000104039670();
  *(undefined8 *)(lVar7 + 0x80) = 0x95949ff0;
  *(undefined8 *)(lVar7 + 0x88) = 0xa400000000000000;
  *(long *)(lVar7 + 0x90) = lVar8;
  *(undefined8 *)(lVar7 + 0x98) = uVar13;
  *(long *)(lVar7 + 0xa0) = lVar9;
  *(undefined8 *)(lVar7 + 0xa8) = uVar14;
  func_0x000104039b94();
  lVar8 = lVar9;
  uVar13 = uVar14;
  func_0x000104039c50();
  *(undefined8 *)(lVar4 + 0x20) = 0x92949ff0;
  *(undefined8 *)(lVar4 + 0x28) = 0xa400000000000000;
  *(long *)(lVar4 + 0x30) = lVar5;
  *(undefined8 *)(lVar4 + 0x38) = uVar12;
  *(long *)(lVar4 + 0x40) = lVar7;
  *(long *)(lVar4 + 0x48) = lVar9;
  *(undefined8 *)(lVar4 + 0x50) = uVar14;
  *(long *)(lVar4 + 0x58) = lVar8;
  *(undefined8 *)(lVar4 + 0x60) = uVar13;
  *(undefined1 *)(lVar4 + 0x68) = 0;
  func_0x00010403972c();
  uVar12 = 0xb0;
  _swift_allocObject(lVar6,0xb0,7);
  *(undefined8 *)(lVar6 + 0x10) = 3;
  *(undefined8 *)(lVar6 + 0x18) = 6;
  lVar5 = lVar6;
  func_0x0001040397e8();
  *(undefined8 *)(lVar6 + 0x20) = 0x88999ff0;
  *(undefined8 *)(lVar6 + 0x28) = 0xa400000000000000;
  *(long *)(lVar6 + 0x30) = lVar5;
  *(undefined8 *)(lVar6 + 0x38) = uVar12;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  func_0x0001040398a4();
  lVar7 = lVar5;
  uVar14 = uVar12;
  func_0x000104039960();
  *(undefined8 *)(lVar6 + 0x50) = 0x90a49ff0;
  *(undefined8 *)(lVar6 + 0x58) = 0xa400000000000000;
  *(long *)(lVar6 + 0x60) = lVar5;
  *(undefined8 *)(lVar6 + 0x68) = uVar12;
  *(long *)(lVar6 + 0x70) = lVar7;
  *(undefined8 *)(lVar6 + 0x78) = uVar14;
  func_0x000104039a1c();
  lVar5 = lVar7;
  uVar12 = uVar14;
  func_0x000104039ad8();
  *(undefined8 *)(lVar6 + 0x80) = 0xa99a9ff0;
  *(undefined8 *)(lVar6 + 0x88) = 0xa400000000000000;
  *(long *)(lVar6 + 0x90) = lVar7;
  *(undefined8 *)(lVar6 + 0x98) = uVar14;
  *(long *)(lVar6 + 0xa0) = lVar5;
  *(undefined8 *)(lVar6 + 0xa8) = uVar12;
  func_0x000104039d0c();
  lVar7 = lVar5;
  uVar14 = uVar12;
  func_0x000104039dc8();
  *(undefined8 *)(lVar4 + 0x70) = 0x94a49ff0;
  *(undefined8 *)(lVar4 + 0x78) = 0xa400000000000000;
  *(long *)(lVar4 + 0x80) = lVar8;
  *(undefined8 *)(lVar4 + 0x88) = uVar13;
  *(long *)(lVar4 + 0x90) = lVar6;
  *(long *)(lVar4 + 0x98) = lVar5;
  *(undefined8 *)(lVar4 + 0xa0) = uVar12;
  *(long *)(lVar4 + 0xa8) = lVar7;
  *(undefined8 *)(lVar4 + 0xb0) = uVar14;
  *(undefined1 *)(lVar4 + 0xb8) = 1;
  *(long *)(unaff_x20 + lVar2) = lVar4;
  *(undefined8 *)(unaff_x20 + _DAT_11304a010) = 0;
  lVar4 = _DAT_11304a018;
  puVar10 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_self();
  puVar11 = puVar10;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar4) = puVar11;
  lVar4 = _DAT_11304a020;
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar4) = puVar11;
  lVar4 = _DAT_11304a028;
  puVar11 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar4) = puVar11;
  lVar4 = _DAT_11304a030;
  puVar11 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar4) = puVar11;
  lVar4 = _DAT_11304a038;
  puVar11 = puVar10;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar4) = puVar11;
  lVar4 = _DAT_11304a040;
  puVar11 = puVar10;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar4) = puVar11;
  lVar4 = _DAT_11304a000;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + lVar4) = puVar10;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
             "SCW/SCWDescriptiveRevealViewController.swift",0x2c,2,0x69,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104035d1c);
  (*pcVar3)();
}



/* Entry: 104035d1c; end: 104035d23;  */

void FUN_104035d1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



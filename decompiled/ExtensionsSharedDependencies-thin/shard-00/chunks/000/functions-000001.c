/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00016844; end: 00016867;  */

void FUN_00016844(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00016868; end: 00016887;  */

void FUN_00016868(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 00016888; end: 000168ab;  */

void FUN_00016888(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x80000000008b5120);
  _objc_release();
  (*pcVar1)();
  return;
}



/* Entry: 000168ac; end: 0001692b;  */

undefined8 FUN_000168ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 0001692c; end: 0001694f;  */

void FUN_0001692c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00016950; end: 00016977;  */

void FUN_00016950(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00016978; end: 000169bb;  */

long FUN_00016978(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000169bc; end: 000169df;  */

void FUN_000169bc(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000169e0; end: 00016a13;  */

void FUN_000169e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001a548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 00016a14; end: 00016abb;  */

void FUN_00016a14(undefined1 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  long unaff_x22;
  
  __s12CoreLocation16CLLocationUpdateV19authorizationDeniedSbvg();
  if (((ulong)param_1 & 1) == 0) {
    __s12CoreLocation16CLLocationUpdateV15accuracyLimitedSbvg();
    if (((ulong)param_1 & 1) == 0) {
      __s12CoreLocation16CLLocationUpdateV8locationSo0C0CSgvg();
      if (param_1 != (undefined1 *)0x0) {
        **(ulong **)(unaff_x22 + 0x10) = (ulong)param_1;
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_00016aa8;
      }
      uVar1 = 2;
      param_1 = (undefined1 *)0x0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  func_0x00016d48();
  _swift_allocError(&UNK_0099c920,param_1,0,0);
  *param_1 = uVar1;
  _swift_willThrow();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_00016aa8:
                    /* WARNING: Could not recover jumptable at 0x00016ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 00016abc; end: 00016acb;  */

void FUN_00016abc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00016acc; end: 00016aeb;  */

void FUN_00016acc(void)

{
  _objc_opt_self(&PTR_PTR_00ae61e8);
  return;
}



/* Entry: 00016aec; end: 00016c23;  */

void FUN_00016aec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  __s12CoreLocation16CLLocationUpdateV7UpdatesVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s12CoreLocation16CLLocationUpdateV17LiveConfigurationOMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)
                    PTR___s12CoreLocation16CLLocationUpdateV17LiveConfigurationO7defaultyA2EmFWC_0099bc18
             ,lVar2);
  __s12CoreLocation16CLLocationUpdateV11liveUpdatesyAC0F0VAC17LiveConfigurationOFZ(puVar5,lVar6);
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  uVar3 = 0xae6240;
  func_0x000115a8(0xae6240,&UNK_007cce38);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_00016c24();
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  func_0x00016cc8(param_1);
  uVar4 = 0;
  FUN_00013960(0);
  uVar3 = uVar4;
  FUN_00016d04();
  __ss24AsyncThrowingMapSequenceV_9transformAByxq_Gx_q_7ElementQzYaKctcfC
            (param_1,puVar5,&UNK_007cce30,0,lVar1,uVar4,uVar3);
  return;
}



/* Entry: 00016c24; end: 00016c73;  */

void FUN_00016c24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae6248 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae6240;
  FUN_00016c74(0xae6240,&UNK_007cce38);
  puVar2 = PTR___ss24AsyncThrowingMapSequenceVyxq_GScisMc_0099c000;
  _swift_getWitnessTable(PTR___ss24AsyncThrowingMapSequenceVyxq_GScisMc_0099c000,uVar1);
  puRam0000000000ae6248 = puVar2;
  return;
}



/* Entry: 00016c74; end: 00016d03;  */

ulong FUN_00016c74(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState
            (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Entry: 00016d04; end: 00016d87;  */

void FUN_00016d04(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae6250 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s12CoreLocation16CLLocationUpdateV7UpdatesVMa(0xff);
  puVar2 = PTR___s12CoreLocation16CLLocationUpdateV7UpdatesVSciAAMc_0099bc40;
  _swift_getWitnessTable(PTR___s12CoreLocation16CLLocationUpdateV7UpdatesVSciAAMc_0099bc40,uVar1);
  puRam0000000000ae6250 = puVar2;
  return;
}



/* Entry: 00016d88; end: 00016e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00016d88(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_00ae6298);
    if (lVar3 == 0) {
      _objc_release();
    }
    else {
      _swift_retain(lVar3);
      _objc_release(lVar1);
      __sScT6cancelyyF(lVar3,PTR___sytN_0099b8e0 + 8,PTR___ss5NeverON_0099b788,
                       PTR___ss5NeverOs5ErrorsWP_0099b790);
      _swift_release(lVar3);
    }
  }
  _swift_beginAccess(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_00ae6298);
    *(undefined8 *)(param_2 + _DAT_00ae6298) = 0;
    _objc_release();
    _swift_release(uVar2);
  }
  return;
}



/* Entry: 00016e64; end: 00016f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00016e64(code *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (*(char *)(unaff_x20 + _DAT_00ae6260) == '\x01') {
    plVar1 = (long *)(unaff_x20 + _DAT_00ae6270);
    FUN_0001393c(plVar1,plVar1[3]);
    puVar2 = &UNK_0099cd68;
    _swift_allocObject(&UNK_0099cd68,0x20,7);
    *(code **)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    uVar5 = *(undefined8 *)(*plVar1 + 0x18);
    puVar3 = &UNK_0099cd90;
    _swift_allocObject(&UNK_0099cd90,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x1a520;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uStack_50 = 0x1a524;
    puStack_70 = PTR___NSConcreteStackBlock_00999f30;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_0001d1e4;
    puStack_58 = &UNK_0099cda8;
    puStack_48 = puVar3;
    __Block_copy(&puStack_70);
    puVar3 = puStack_48;
    _swift_retain(param_2);
    _swift_retain(puVar2);
    _swift_release(puVar3);
    func_0x00783880(uVar5);
    __Block_release(ppuVar4);
    _swift_release(puVar2);
  }
  else {
    (*param_1)();
  }
  return;
}



/* Entry: 00016f98; end: 00016fb3;  */

void FUN_00016f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = param_4;
  *(undefined8 *)(unaff_x22 + 0x140) = param_1;
  *(undefined8 *)(unaff_x22 + 0x148) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00016fb4,0,0);
  return;
}



/* Entry: 00016fb4; end: 000170f7;  */

void FUN_00016fb4(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  dword *pdVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar2 = &UNK_0099cc78;
  _swift_allocObject(&UNK_0099cc78,0x18,7);
  *(undefined **)(unaff_x22 + 0x160) = puVar2;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,uVar5);
  *(undefined **)(unaff_x22 + 0x120) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar6;
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_0099bfd8
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x168) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_000170f8;
    puVar2 = PTR___sytN_0099b8e0 + 8;
                    /* WARNING: Could not recover jumptable at 0x00778d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_0099bfd0
    )(plVar3,*(undefined8 *)(unaff_x22 + 0x140),puVar2,puVar2,0,0,&UNK_007ccf00,unaff_x22 + 0x110,
      puVar2,puVar2);
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___sytN_0099b8e0 + 8);
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x10;
  pdVar4 = &section_00000068.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x170) = pdVar4;
  *(long *)pdVar4 = unaff_x22;
  *(code **)(pdVar4 + 2) = FUN_0001713c;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(pdVar4 + 0x1e) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(pdVar4 + 0x20) = uVar5;
  *(long *)(pdVar4 + 0x1a) = unaff_x22 + 0x138;
  *(undefined **)(pdVar4 + 0x1c) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00017250,0,0);
  return;
}



/* Entry: 000170f8; end: 0001713b;  */

void FUN_000170f8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x160);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x168));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00017138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 0001713c; end: 000171af;  */

void FUN_0001713c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x170));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_0099be18 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x178) = plVar1;
  func_0x000115a8(0xae62e8,&UNK_007cd020);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_000171b0;
                    /* WARNING: Could not recover jumptable at 0x0077877c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_0099be10)();
  return;
}



/* Entry: 000171b0; end: 00017233;  */

void FUN_000171b0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x171f8,0,0);
  return;
}



/* Entry: 00017234; end: 0001724f;  */

void FUN_00017234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00017250,0,0);
  return;
}



/* Entry: 00017250; end: 000174ff;  */

void FUN_00017250(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0x70);
  lVar3 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  uVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  lVar3 = 0;
  __sScPMa();
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  pcVar9 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar9)(uVar2,1,1,lVar3);
  puVar4 = &UNK_0099cc78;
  _swift_allocObject(&UNK_0099cc78,0x18,7);
  _swift_beginAccess(lVar7 + 0x10,unaff_x22 + 0x38,0,0);
  lVar3 = lVar7 + 0x10;
  _swift_unknownObjectWeakLoadStrong(lVar3);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,lVar3);
  _objc_release(lVar3);
  puVar5 = &UNK_0099cde0;
  _swift_allocObject(&UNK_0099cde0,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  *(undefined8 *)(puVar5 + 0x28) = uVar11;
  _swift_retain(uVar10);
  FUN_0001a54c(uVar2,&UNK_007ccf20,puVar5);
  FUN_0001a378(uVar2,0xae62f0,&UNK_007ccf10);
  _swift_task_dealloc(uVar2);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (*pcVar9)();
  puVar4 = &UNK_0099cc78;
  _swift_allocObject(&UNK_0099cc78,0x18,7);
  _swift_beginAccess(lVar7 + 0x10,unaff_x22 + 0x50,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_unknownObjectWeakLoadStrong(lVar7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,lVar7);
  _objc_release(lVar7);
  puVar5 = &UNK_0099ce08;
  _swift_allocObject(&UNK_0099ce08,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  FUN_0001a54c(uVar6,&UNK_007ccf30,puVar5);
  FUN_0001a378(uVar6,0xae62f0,&UNK_007ccf10);
  _swift_task_dealloc(uVar6);
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScG4next9isolationxSgScA_pSgYi_tYaFTu_0099be28 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar8;
    uVar10 = 0xae62e8;
    func_0x000115a8(0xae62e8,&UNK_007cd020);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_00017500;
                    /* WARNING: Could not recover jumptable at 0x00778788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG4next9isolationxSgScA_pSgYi_tYaF_0099be20)(unaff_x22 + 0x98,0,0,uVar10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_0099c0a8)
            (unaff_x22 + 0x98,**(undefined8 **)(unaff_x22 + 0x68),FUN_00017548,unaff_x22 + 0x10);
  return;
}



/* Entry: 00017500; end: 00017547;  */

void FUN_00017500(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00017570,0,0);
  return;
}



/* Entry: 00017548; end: 0001756f;  */

void FUN_00017548(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x90) = unaff_x20;
  if (unaff_x20 == 0) {
    pcVar1 = FUN_00017570;
  }
  else {
    pcVar1 = FUN_000175b0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 00017570; end: 000175af;  */

void FUN_00017570(void)

{
  long unaff_x22;
  
  __sScG9cancelAllyyF(**(undefined8 **)(unaff_x22 + 0x68),PTR___sytN_0099b8e0 + 8);
                    /* WARNING: Could not recover jumptable at 0x000175ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000175b0; end: 000175e7;  */

void FUN_000175b0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0077b620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unexpectedError_0099bb70)
            (*(undefined8 *)(unaff_x22 + 0x90),"_Concurrency/arm64e-apple-ios.swiftinterface",0x2c,1
             ,0xb9b);
  return;
}



/* Entry: 000175e8; end: 00017793;  */

void FUN_000175e8(void)

{
  undefined8 uVar1;
  dword *pdVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)(unaff_x22 + 0x40) = lVar5;
  if (lVar5 != 0) {
    pdVar2 = &section_00000158.reserved2;
    _swift_task_alloc();
    *(dword **)(unaff_x22 + 0x48) = pdVar2;
    *(long *)pdVar2 = unaff_x22;
    *(undefined8 *)(pdVar2 + 2) = 0x17674;
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(pdVar2 + 0x40) = *(undefined8 *)(unaff_x22 + 0x38);
    *(long *)(pdVar2 + 0x42) = lVar5;
    *(undefined8 *)(pdVar2 + 0x3e) = uVar1;
    lVar5 = 0xae60c8;
    func_0x000115a8(0xae60c8,&UNK_007cccd0);
    uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pdVar2 + 0x44) = uVar3;
    lVar5 = 0;
    __s10Foundation4DateVMa();
    *(long *)(pdVar2 + 0x46) = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    *(long *)(pdVar2 + 0x48) = lVar5;
    uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pdVar2 + 0x4a) = uVar4;
    uVar4 = uVar3 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pdVar2 + 0x4c) = uVar4;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pdVar2 + 0x4e) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00017794,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00017670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00017794; end: 00017a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00017794(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar3 = *(long *)(unaff_x22 + 0x120);
  lVar9 = *(long *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x80000000008b5010);
  _objc_release();
  lVar2 = _DAT_00ae62a0;
  _swift_beginAccess(lVar9 + _DAT_00ae62a0,unaff_x22 + 200,0,0);
  FUN_000138a4(lVar9 + lVar2,uVar7);
  (**(code **)(lVar3 + 0x30))(uVar7,1,uVar1);
  if ((int)uVar7 == 1) {
    FUN_0001a378(*(undefined8 *)(unaff_x22 + 0x110),0xae60c8,&UNK_007cccd0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00017874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x108);
  (**(code **)(*(long *)(unaff_x22 + 0x120) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x110),
             *(undefined8 *)(unaff_x22 + 0x118));
  FUN_0001393c(lVar3 + _DAT_00ae6288,*(undefined8 *)(lVar3 + _DAT_00ae6288 + 0x18));
  FUN_00016acc(0);
  FUN_00016aec(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_0001393c(unaff_x22 + 0xa0,lVar2);
  lVar9 = *(long *)(lVar2 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (**(code **)(lVar9 + 0x10))();
  puVar4 = PTR___sSciTL_0099bfb8;
  uVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,lVar2,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar8;
  uVar7 = uVar1;
  _swift_getAssociatedConformanceWitness
            (uVar1,lVar2,uVar8,puVar4,PTR___sSci13AsyncIteratorSci_ScITn_0099bfa8);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar7;
  lVar9 = unaff_x22 + 0x78;
  func_0x00016cc8(lVar9);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar9,lVar2,uVar1);
  _swift_task_dealloc(uVar5);
  FUN_00011670(unaff_x22 + 0xa0);
  uVar1 = _DAT_00ae6278;
  lVar2 = _DAT_00ae6268;
  *(undefined8 *)(unaff_x22 + 0x140) = _DAT_00ae6280;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar1;
  lVar9 = _DAT_00ae6260;
  *(long *)(unaff_x22 + 0x150) = _DAT_00ae6260;
  lVar9 = lVar3 + lVar9;
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(lVar3 + lVar2);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(lVar9 + 8);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(lVar9 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(lVar9 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(lVar9 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(lVar9 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x188) = 0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  FUN_000115f8(unaff_x22 + 0x78,uVar1);
  plVar6 = (long *)(ulong)*(uint *)(
                                   PTR___sScI4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTjTu_0099be60
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_00017a3c;
                    /* WARNING: Could not recover jumptable at 0x007787c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTj_0099be58)
            (plVar6,unaff_x22 + 0xe0,0,0,unaff_x22 + 0xe8,uVar1,uVar7);
  return;
}



/* Entry: 00017a3c; end: 00017a93;  */

void FUN_00017a3c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 400));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_00017a94;
  }
  else {
    pcVar1 = FUN_00017e9c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 00017a94; end: 00017e9b;  */

void FUN_00017a94(double param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  double dVar15;
  
  lVar9 = *(long *)(unaff_x22 + 0xe0);
  if (lVar9 != 0) {
    __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
    if ((param_2 & 1) == 0) {
      lVar6 = *(long *)(unaff_x22 + 0x188);
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x17e84);
        (*pcVar14)();
      }
      uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar11 = *(long *)(unaff_x22 + 0x120);
      plVar5 = (long *)(*(long *)(unaff_x22 + 0x108) + *(long *)(unaff_x22 + 0x148));
      puVar2 = (undefined8 *)(*(long *)(unaff_x22 + 0x108) + *(long *)(unaff_x22 + 0x140));
      FUN_0001393c(puVar2,puVar2[3]);
      _objc_retain();
      func_0x00787b60(uVar13);
      FUN_00019888(lVar9,uVar13,*puVar2);
      _objc_release(lVar9);
      FUN_0001393c(plVar5,plVar5[3]);
      __s10Foundation4DateVACycfC(uVar8);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar1);
      pcVar14 = *(code **)(lVar11 + 8);
      (*pcVar14)(uVar8,uVar10);
      lVar11 = *plVar5;
      puVar3 = PTR_PTR_00ac27d8;
      _objc_allocWithZone(PTR_PTR_00ac27d8);
      func_0x007849a0();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar12);
      func_0x0078f380(puVar3);
      _objc_release(uVar4);
      func_0x007903c0(puVar3);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x17e88);
        (*pcVar14)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x17e8c);
        (*pcVar14)();
      }
      dVar15 = 9.223372036854776e+18;
      if (param_1 < 9.223372036854776e+18) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
        func_0x0078dbe0(puVar3);
        func_0x00791b00(lVar9);
        func_0x00791220(puVar3);
        func_0x00784480(lVar9);
        func_0x0078ec80(puVar3);
        __s10Foundation4DateVACycfC(uVar8);
        lVar7 = lVar9;
        func_0x00792a20(lVar9);
        _objc_retainAutoreleasedReturnValue();
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(uVar4);
        _objc_release(lVar7);
        __s10Foundation4DateV17timeIntervalSinceySdACF(uVar4);
        (*pcVar14)(uVar4,uVar10);
        (*pcVar14)(uVar8,uVar10);
        dVar15 = dVar15 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x17e94);
          (*pcVar14)();
        }
        if (-9.223372036854778e+18 < dVar15) {
          if (dVar15 < 9.223372036854776e+18) {
            lVar7 = *(long *)(unaff_x22 + 0x178);
            func_0x0078ecc0(puVar3);
            if (6 < lVar7 - 1U) {
              if (*(long *)(unaff_x22 + 0x178) != 0) {
                uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4);
                func_0x0078e6a0(puVar3);
                _objc_release(uVar4);
              }
              if (0 < *(long *)(unaff_x22 + 0x180)) {
                func_0x00790c60(puVar3);
              }
            }
            func_0x00788ac0(*(undefined8 *)(lVar11 + 0x10));
            func_0x00783860(*(undefined8 *)(lVar11 + 0x10));
            _objc_release(puVar3);
            _objc_release(lVar9);
            *(long *)(unaff_x22 + 0x188) = lVar6 + 1;
            uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
            FUN_000115f8(unaff_x22 + 0x78,uVar4);
            plVar5 = (long *)(ulong)*(uint *)(
                                             PTR___sScI4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTjTu_0099be60
                                             + 4);
            _swift_task_alloc();
            *(long **)(unaff_x22 + 400) = plVar5;
            *plVar5 = unaff_x22;
            plVar5[1] = (long)FUN_00017a3c;
                    /* WARNING: Could not recover jumptable at 0x007787c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___sScI4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTj_0099be58)
                      (plVar5,(long *)(unaff_x22 + 0xe0),0,0,unaff_x22 + 0xe8,uVar4,uVar8);
            return;
          }
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x17e9c);
          (*pcVar14)();
        }
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x17e98);
        (*pcVar14)();
      }
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x17e90);
      (*pcVar14)();
    }
    _objc_release(lVar9);
  }
  FUN_00011670(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar6 = *(long *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar9 = *(long *)(unaff_x22 + 0x108) + *(long *)(unaff_x22 + 0x140);
  FUN_00018800(*(undefined8 *)(unaff_x22 + 0x188),uVar4);
  FUN_0001393c(lVar9,*(undefined8 *)(lVar9 + 0x18));
  FUN_000240a4(0);
  FUN_00016e64(uVar12,uVar10);
  (**(code **)(lVar6 + 8))(uVar4,uVar8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00017b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00017e9c; end: 00018087;  */

void FUN_00017e9c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  FUN_00011670(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
  _swift_errorRetain(uVar5);
  uVar6 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  uVar4 = unaff_x22 + 0x198;
  _swift_dynamicCast(uVar4,(undefined8 *)(unaff_x22 + 0xf0),uVar6,&UNK_0099c920,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
    lVar3 = *(long *)(unaff_x22 + 0x120);
    lVar2 = *(long *)(unaff_x22 + 0x108) + *(long *)(unaff_x22 + 0x148);
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x108) + *(long *)(unaff_x22 + 0x150));
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xf0));
    FUN_0001393c(lVar2,*(undefined8 *)(lVar2 + 0x18));
    uVar13 = puVar1[3];
    uVar12 = puVar1[2];
    uVar11 = puVar1[5];
    uVar9 = puVar1[4];
    uVar14 = *puVar1;
    *(undefined8 *)(unaff_x22 + 0x18) = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
    uVar12 = puVar1[9];
    uVar11 = puVar1[8];
    uVar9 = puVar1[0xb];
    dVar10 = (double)puVar1[10];
    uVar14 = puVar1[7];
    uVar13 = puVar1[6];
    *(undefined8 *)(unaff_x22 + 0x70) = puVar1[0xc];
    *(undefined8 *)(unaff_x22 + 0x58) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
    *(double *)(unaff_x22 + 0x60) = dVar10;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar13;
    __s10Foundation4DateVACycfC(uVar6);
    __s10Foundation4DateV17timeIntervalSinceySdACF(uVar8);
    (**(code **)(lVar3 + 8))(uVar6,uVar7);
    FUN_0001eddc(dVar10 * 1000.0,(undefined8 *)(unaff_x22 + 0x10),3);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
    _swift_errorRelease(uVar5);
    FUN_000184ec(*(undefined1 *)(unaff_x22 + 0x198),uVar6);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  }
  _swift_errorRelease(uVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar3 = *(long *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar2 = *(long *)(unaff_x22 + 0x108) + *(long *)(unaff_x22 + 0x140);
  FUN_00018800(*(undefined8 *)(unaff_x22 + 0x188),uVar6);
  FUN_0001393c(lVar2,*(undefined8 *)(lVar2 + 0x18));
  FUN_000240a4(0);
  FUN_00016e64(uVar8,uVar7);
  (**(code **)(lVar3 + 8))(uVar6,uVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00018084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00018088; end: 0001809f;  */

void FUN_00018088(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000180a0,0,0);
  return;
}



/* Entry: 000180a0; end: 00018223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000180a0(double param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)(unaff_x22 + 0x30) = lVar4;
  if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x00789000(*(undefined8 *)(lVar4 + _DAT_00ae6268));
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x18188);
    (*pcVar2)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1818c);
    (*pcVar2)();
  }
  if (param_1 < 1.8446744073709552e+19) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)param_1;
    if (SUB168(auVar1 * ZEXT816(1000000000),8) == 0) {
      plVar3 = (long *)(ulong)*(uint *)(
                                       PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_0099bf78
                                       + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x38) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = 0x18194;
                    /* WARNING: Could not recover jumptable at 0x00778914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_0099bf70)
                ((long)param_1 * 1000000000);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x18194);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x18190);
  (*pcVar2)();
}



/* Entry: 00018224; end: 00018277; -[_TtC19LocationPushHandler36CLLocationUpdateStreamingPushHandler processWithCompletion:] */

void FUN_00018224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __Block_copy(param_3);
  __Block_copy();
  _objc_retain(param_1);
  FUN_00019c84();
  __Block_release(param_3);
  __Block_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00018278; end: 000184c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00018278(double param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar7 - extraout_x12;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x80000000008b4f40);
  _objc_release();
  lVar2 = _DAT_00ae6298;
  lVar9 = *(long *)(unaff_x20 + _DAT_00ae6298);
  if (lVar9 == 0) {
    uVar4 = 0;
  }
  else {
    _swift_retain(lVar9);
    __sScT6cancelyyF();
    _swift_release(lVar9);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  _swift_release(uVar4);
  lVar2 = _DAT_00ae62a0;
  _swift_beginAccess(unaff_x20 + _DAT_00ae62a0,auStack_78,0,0);
  FUN_000138a4(unaff_x20 + lVar2,puVar8);
  puVar5 = puVar8;
  (**(code **)(lVar10 + 0x30))(puVar8,1,lVar3);
  if ((int)puVar5 == 1) {
    FUN_0001a378(puVar8,0xae60c8,&UNK_007cccd0);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar6,puVar8,lVar3);
    FUN_0001393c(unaff_x20 + _DAT_00ae6270,*(undefined8 *)(unaff_x20 + _DAT_00ae6270 + 0x18));
    __s10Foundation4DateVACycfC(lVar7);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar6);
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(lVar7,lVar3);
    lVar2 = unaff_x20 + _DAT_00ae6260;
    puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6290);
    FUN_0001ffa4(param_1 * 1000.0,*puVar1,*(undefined8 *)(lVar2 + 0x38),
                 *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48),
                 *(undefined8 *)(puVar1 + 2),*(undefined1 *)(puVar1 + 4));
    (*pcVar11)(lVar6,lVar3);
  }
  return;
}



/* Entry: 000184c4; end: 000184eb; -[_TtC19LocationPushHandler36CLLocationUpdateStreamingPushHandler forceComplete] */

void FUN_000184c4(undefined8 param_1)

{
  _objc_retain();
  FUN_00018278();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000184ec; end: 000187ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000184ec(double param_1,byte param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  double dVar9;
  undefined4 uVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_0001393c(unaff_x20 + _DAT_00ae6270,*(undefined8 *)(unaff_x20 + _DAT_00ae6270 + 0x18));
  __s10Foundation4DateVACycfC(lVar5);
  __s10Foundation4DateV17timeIntervalSinceySdACF(param_3);
  pcVar8 = *(code **)(lVar6 + 8);
  (*pcVar8)(lVar5,lVar3);
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6290);
  uVar10 = *puVar1;
  uVar7 = *(undefined8 *)(puVar1 + 2);
  uVar2 = *(undefined1 *)(puVar1 + 4);
  FUN_0001f63c(param_1 * 1000.0,uVar10,uVar7,uVar2,param_2 < 2);
  if (param_2 == 0) {
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_00ae6280);
    FUN_0001393c(puVar4,puVar4[3]);
    FUN_000195cc(uVar10,0x100000002,uVar7,uVar2,*puVar4);
    FUN_0001393c(unaff_x20 + _DAT_00ae6278,*(undefined8 *)(unaff_x20 + _DAT_00ae6278 + 0x18));
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_00ae6260);
    uStack_98 = puVar4[9];
    uStack_a0 = puVar4[8];
    uStack_88 = puVar4[0xb];
    uStack_90 = puVar4[10];
    uStack_80 = puVar4[0xc];
    uStack_d8 = puVar4[1];
    uStack_e0 = *puVar4;
    uStack_c8 = puVar4[3];
    uStack_d0 = puVar4[2];
    uStack_b8 = puVar4[5];
    uStack_c0 = puVar4[4];
    uStack_a8 = puVar4[7];
    dVar9 = (double)puVar4[6];
    dStack_b0 = dVar9;
    __s10Foundation4DateVACycfC(lVar5);
    __s10Foundation4DateV17timeIntervalSinceySdACF(param_3);
    (*pcVar8)(lVar5,lVar3);
    dVar9 = dVar9 * 1000.0;
    uVar7 = 2;
  }
  else if (param_2 == 1) {
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_00ae6280);
    FUN_0001393c(puVar4,puVar4[3]);
    FUN_000195cc(uVar10,3,uVar7,uVar2,*puVar4);
    FUN_0001393c(unaff_x20 + _DAT_00ae6278,*(undefined8 *)(unaff_x20 + _DAT_00ae6278 + 0x18));
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_00ae6260);
    uStack_98 = puVar4[9];
    uStack_a0 = puVar4[8];
    uStack_88 = puVar4[0xb];
    uStack_90 = puVar4[10];
    uStack_80 = puVar4[0xc];
    uStack_d8 = puVar4[1];
    uStack_e0 = *puVar4;
    uStack_c8 = puVar4[3];
    uStack_d0 = puVar4[2];
    uStack_b8 = puVar4[5];
    uStack_c0 = puVar4[4];
    uStack_a8 = puVar4[7];
    dVar9 = (double)puVar4[6];
    dStack_b0 = dVar9;
    __s10Foundation4DateVACycfC(lVar5);
    __s10Foundation4DateV17timeIntervalSinceySdACF(param_3);
    (*pcVar8)(lVar5,lVar3);
    dVar9 = dVar9 * 1000.0;
    uVar7 = 1;
  }
  else {
    FUN_0001393c(unaff_x20 + _DAT_00ae6278,*(undefined8 *)(unaff_x20 + _DAT_00ae6278 + 0x18));
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_00ae6260);
    uStack_98 = puVar4[9];
    uStack_a0 = puVar4[8];
    uStack_88 = puVar4[0xb];
    uStack_90 = puVar4[10];
    uStack_80 = puVar4[0xc];
    uStack_d8 = puVar4[1];
    uStack_e0 = *puVar4;
    uStack_c8 = puVar4[3];
    uStack_d0 = puVar4[2];
    uStack_b8 = puVar4[5];
    uStack_c0 = puVar4[4];
    uStack_a8 = puVar4[7];
    dVar9 = (double)puVar4[6];
    dStack_b0 = dVar9;
    __s10Foundation4DateVACycfC(lVar5);
    __s10Foundation4DateV17timeIntervalSinceySdACF(param_3);
    (*pcVar8)(lVar5,lVar3);
    dVar9 = dVar9 * 1000.0;
    uVar7 = 3;
  }
  FUN_0001eddc(dVar9,&uStack_e0,uVar7);
  return;
}



/* Entry: 00018800; end: 00018b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00018800(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  plVar3 = (long *)(unaff_x20 + _DAT_00ae6270);
  FUN_0001393c(plVar3,plVar3[3]);
  __s10Foundation4DateVACycfC(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV17timeIntervalSinceySdACF(param_3);
  (**(code **)(lVar11 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  lVar11 = *(long *)(unaff_x20 + _DAT_00ae6260 + 0x40);
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6290);
  uVar4 = *(undefined8 *)(puVar1 + 2);
  lVar2 = *plVar3;
  FUN_0001f134(*puVar1,uVar4,*(undefined1 *)(puVar1 + 4));
  if (lVar11 < 4) {
    if (lVar11 == 1) {
      uVar9 = 0xe700000000000000;
      uVar10 = 0x6e776f6e6b6e75;
      goto LAB_00018a08;
    }
    if (lVar11 == 2) {
      uVar9 = 0xef6369646f697265;
      uVar10 = 0x705f726572616873;
      goto LAB_00018a08;
    }
    if (lVar11 == 3) {
      uVar9 = 0x80000000008b4ca0;
      uVar10 = 0xd000000000000011;
      goto LAB_00018a08;
    }
LAB_0001899c:
    uVar9 = 0xef7375636f665f6e;
    uVar10 = 0x72616873;
  }
  else {
    if (5 < lVar11) {
      if (lVar11 == 6) {
        uVar9 = 0x616d5f6e;
        goto LAB_000189cc;
      }
      if (lVar11 == 7) {
        uVar9 = 0x80000000008b4c80;
        uVar10 = 0xd000000000000012;
        goto LAB_00018a08;
      }
      goto LAB_0001899c;
    }
    if (lVar11 != 4) {
      if (lVar11 == 5) {
        uVar9 = 0xef6e65706f5f7061;
        uVar10 = 0x6d5f726577656976;
        goto LAB_00018a08;
      }
      goto LAB_0001899c;
    }
    uVar9 = 0x70615f6e;
LAB_000189cc:
    uVar9 = uVar9 | 0xed00007000000000;
    uVar10 = 0x77656976;
  }
  uVar10 = uVar10 | 0x695f726500000000;
LAB_00018a08:
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uStack_68 = uVar4;
  FUN_000203d0(uVar10,uVar9,0x7079745f68737570,0xe900000000000065,uVar5);
  uVar5 = uStack_68;
  puVar6 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  uVar4 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
  uVar7 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b4c60);
  uVar8 = uVar5;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar5,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  func_0x00786420(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar8);
  func_0x0077e920(param_1 * 1000.0,*(undefined8 *)(lVar2 + 0x18));
  func_0x0077e640(*(undefined8 *)(lVar2 + 0x18));
  func_0x00784860(*(undefined8 *)(lVar2 + 0x18));
  _swift_release(uVar5);
  _objc_release(puVar6);
  return;
}



/* Entry: 00018b50; end: 00018baf; -[_TtC19LocationPushHandler36CLLocationUpdateStreamingPushHandler init] */

void FUN_00018b50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LocationPushHandler.CLLocationUpdateStreamingPushHandler",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x18b7c);
  (*pcVar1)();
}



/* Entry: 00018bb0; end: 00018ca3; -[_TtC19LocationPushHandler36CLLocationUpdateStreamingPushHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00018bb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + _DAT_00ae6260;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  uVar4 = *(undefined8 *)(lVar1 + 0x48);
  uVar5 = *(undefined8 *)(lVar1 + 0x60);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
  func_0x00013b20(uVar2,uVar3,uVar4);
  _objc_release(uVar5);
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae6268));
  FUN_00011670(param_1 + _DAT_00ae6270);
  FUN_00011670(param_1 + _DAT_00ae6278);
  FUN_00011670(param_1 + _DAT_00ae6280);
  FUN_00011670(param_1 + _DAT_00ae6288);
  _swift_release(*(undefined8 *)(param_1 + _DAT_00ae6298));
  FUN_0001a378(param_1 + _DAT_00ae62a0,0xae60c8,&UNK_007cccd0);
  if (*(long *)(param_1 + _DAT_00ae62a8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(((long *)(param_1 + _DAT_00ae62a8))[1]);
    return;
  }
  return;
}



/* Entry: 00018ca4; end: 00018cab;  */

void FUN_00018ca4(void)

{
  if (lRam0000000000ae62d8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_0083d99c);
  return;
}



/* Entry: 00018cac; end: 00018ce3;  */

void FUN_00018cac(undefined8 param_1)

{
  if (lRam0000000000ae62d8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0083d99c);
  return;
}



/* Entry: 00018ce4; end: 00018d93;  */

void FUN_00018ce4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_68 = PTR___sBOWV_0099ae70 + 0x40;
  puStack_70 = &UNK_007cce68;
  puStack_60 = &UNK_007cce80;
  puStack_58 = &UNK_007cce80;
  puStack_50 = &UNK_007cce80;
  puStack_48 = &UNK_007cce80;
  puStack_40 = &UNK_007cce98;
  puStack_38 = &UNK_007cceb0;
  lVar1 = 0x13f;
  func_0x00012d7c();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_007ccec8;
    _swift_updateClassMetadata2(param_1,0x100,10,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 00018d94; end: 00019307;  */

undefined8 FUN_00018d94(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    FUN_0001a480(0);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        _objc_retain();
        uVar5 = uVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) {
          _objc_release(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          _objc_retain();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
    uStack_68 = *unaff_x20;
    _objc_retain();
    func_0x00018fbc();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    _objc_retain();
    _swift_bridgeObjectRetain(uVar7);
    uVar6 = param_2;
    __ss10__CocoaSetV6member3foryXlSgyXl_tF(param_2,uVar3);
    _objc_release(param_2);
    if (uVar6 != 0) {
      _swift_bridgeObjectRelease(uVar7);
      _objc_release(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      FUN_0001a480(0);
      _swift_dynamicCast(param_1,&uStack_68,PTR___syXlN_0099b8d0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    __ss10__CocoaSetV5countSivg();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x18fbc);
      (*pcVar1)();
    }
    FUN_00024824(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      _objc_retain(param_2);
    }
    else {
      _objc_retain(param_2);
      FUN_00024b60(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_00024d8c(param_2,uVar3);
    _swift_bridgeObjectRelease(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 00019308; end: 000195cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019308(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  puStack_60 = &UNK_0099d538;
  ppuStack_58 = &PTR_DAT_0099d550;
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  auStack_78[0] = param_1;
  _swift_retain(uVar9);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar9);
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 == 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x80000000008b5050);
  }
  else {
    uStack_98 = 0;
    uStack_90 = 0xe000000000000000;
    _objc_retain();
    __ss11_StringGutsV4growyySiF(0x30);
    __sSS6appendyySSF(0xd00000000000002e,0x80000000008b5090);
    uVar9 = 0xae6190;
    func_0x000115a8(0xae6190,&UNK_007ccde8);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (auStack_78,&uStack_98,uVar9,PTR___ss26DefaultStringInterpolationVN_0099b698,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
    uVar9 = uStack_90;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
    _objc_release();
    _swift_bridgeObjectRelease(uVar9);
    puVar3 = PTR_PTR_00ac27e0;
    _objc_allocWithZone(PTR_PTR_00ac27e0);
    func_0x007849a0();
    func_0x00790420();
    puVar4 = PTR_PTR_00ac2970;
    _objc_allocWithZone();
    func_0x007849a0();
    func_0x0078f340();
    _objc_release(puVar3);
    _swift_beginAccess(param_2 + 0x30,&uStack_98,0x21,0);
    _objc_retain();
    FUN_00018d94(&uStack_80,puVar4);
    _swift_endAccess(&uStack_98);
    _objc_release(uStack_80);
    puVar3 = &UNK_0099ce30;
    _swift_allocObject(&UNK_0099ce30,0x18,7);
    _swift_weakInit(puVar3 + 0x10,param_2);
    puVar5 = &UNK_0099ced0;
    _swift_allocObject(&UNK_0099ced0,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    lVar6 = 0;
    FUN_00023c18();
    lVar7 = lVar6;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar7 + _DAT_00ae65b0);
    *puVar1 = 0x1a52c;
    puVar1[1] = puVar5;
    puVar3 = PTR_s_init_00abbf70;
    lStack_a8 = lVar7;
    lStack_a0 = lVar6;
    _objc_retain(puVar4);
    plVar8 = &lStack_a8;
    _objc_msgSendSuper2(plVar8,puVar3);
    puVar3 = PTR_PTR_00ac27e0;
    _objc_allocWithZone(PTR_PTR_00ac27e0);
    func_0x007849a0();
    func_0x00790420();
    _objc_allocWithZone(PTR_PTR_00ac2970);
    func_0x007849a0();
    func_0x0078f340();
    _objc_release(puVar3);
    func_0x0078c5e0(lVar2);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(plVar8);
  }
  _objc_release();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _swift_retain(uVar9);
  func_0x001d46c8();
  _swift_release(uVar9);
  FUN_00011670(auStack_78);
  return;
}



/* Entry: 000195cc; end: 00019887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000195cc(undefined8 param_1,ulong param_2,undefined8 param_3,byte param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined *apuStack_88 [3];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  puStack_70 = &UNK_0099d388;
  ppuStack_68 = &PTR_DAT_0099d310;
  puVar2 = &UNK_0099ce80;
  _swift_allocObject(&UNK_0099ce80,0x30,7);
  *(int *)(puVar2 + 0x10) = (int)param_2;
  puVar2[0x14] = (byte)(param_2 >> 0x20) & 1;
  *(int *)(puVar2 + 0x18) = (int)param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar2[0x28] = param_4;
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  apuStack_88[0] = puVar2;
  _swift_retain(uVar9);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar9);
  lVar3 = *(long *)(param_5 + 0x28);
  if (lVar3 == 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x80000000008b5050);
  }
  else {
    uStack_a8 = 0;
    uStack_a0 = 0xe000000000000000;
    _objc_retain();
    __ss11_StringGutsV4growyySiF(0x30);
    __sSS6appendyySSF(0xd00000000000002e,0x80000000008b5090);
    uVar9 = 0xae6190;
    func_0x000115a8(0xae6190,&UNK_007ccde8);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (apuStack_88,&uStack_a8,uVar9,PTR___ss26DefaultStringInterpolationVN_0099b698,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
    uVar9 = uStack_a0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a8,uStack_a0);
    _objc_release();
    _swift_bridgeObjectRelease(uVar9);
    uVar4 = param_2 & 0x1ffffffff;
    FUN_00020d78(param_1,uVar4,param_3,param_4 & 1);
    _swift_beginAccess(param_5 + 0x30,&uStack_a8,0x21,0);
    _objc_retain();
    FUN_00018d94(&uStack_90,uVar4);
    _swift_endAccess(&uStack_a8);
    _objc_release(uStack_90);
    puVar2 = &UNK_0099ce30;
    _swift_allocObject(&UNK_0099ce30,0x18,7);
    _swift_weakInit(puVar2 + 0x10,param_5);
    puVar5 = &UNK_0099cea8;
    _swift_allocObject(&UNK_0099cea8,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    *(ulong *)(puVar5 + 0x18) = uVar4;
    lVar6 = 0;
    FUN_00023c18();
    lVar7 = lVar6;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar7 + _DAT_00ae65b0);
    *puVar1 = 0x1a528;
    puVar1[1] = puVar5;
    puVar2 = PTR_s_init_00abbf70;
    lStack_b8 = lVar7;
    lStack_b0 = lVar6;
    _objc_retain(uVar4);
    plVar8 = &lStack_b8;
    _objc_msgSendSuper2(plVar8,puVar2);
    FUN_00020d78(param_1,param_2 & 0x1ffffffff,param_3,param_4 & 1);
    func_0x0078c5e0(lVar3);
    _objc_release(lVar3);
    _objc_release(uVar4);
    _objc_release(plVar8);
  }
  _objc_release();
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  _swift_retain(uVar9);
  func_0x001d46c8();
  _swift_release(uVar9);
  FUN_00011670(apuStack_88);
  return;
}



/* Entry: 00019888; end: 00019aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019888(undefined8 param_1,byte param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  puStack_60 = &UNK_0099d4f8;
  ppuStack_58 = &PTR_DAT_0099d510;
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  uStack_78 = param_1;
  bStack_70 = param_2;
  _objc_retain();
  _swift_retain(uVar8);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar8);
  lVar2 = *(long *)(param_3 + 0x28);
  if (lVar2 == 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x80000000008b5050);
  }
  else {
    uStack_98 = 0;
    uStack_90 = 0xe000000000000000;
    _objc_retain();
    __ss11_StringGutsV4growyySiF(0x30);
    __sSS6appendyySSF(0xd00000000000002e,0x80000000008b5090);
    uVar8 = 0xae6190;
    func_0x000115a8(0xae6190,&UNK_007ccde8);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&uStack_78,&uStack_98,uVar8,PTR___ss26DefaultStringInterpolationVN_0099b698,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
    uVar8 = uStack_90;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
    _objc_release();
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_1;
    FUN_00021358(param_1,param_2 & 1);
    _swift_beginAccess(param_3 + 0x30,&uStack_98,0x21,0);
    _objc_retain();
    FUN_00018d94(&uStack_80,uVar8);
    _swift_endAccess(&uStack_98);
    _objc_release(uStack_80);
    puVar3 = &UNK_0099ce30;
    _swift_allocObject(&UNK_0099ce30,0x18,7);
    _swift_weakInit(puVar3 + 0x10,param_3);
    puVar4 = &UNK_0099ce58;
    _swift_allocObject(&UNK_0099ce58,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar8;
    lVar5 = 0;
    FUN_00023c18();
    lVar6 = lVar5;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar6 + _DAT_00ae65b0);
    *puVar1 = 0x1a478;
    puVar1[1] = puVar4;
    puVar3 = PTR_s_init_00abbf70;
    lStack_a8 = lVar6;
    lStack_a0 = lVar5;
    _objc_retain(uVar8);
    plVar7 = &lStack_a8;
    _objc_msgSendSuper2(plVar7,puVar3);
    FUN_00021358(param_1,param_2 & 1);
    func_0x0078c5e0(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar8);
    _objc_release(plVar7);
  }
  _objc_release();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  _swift_retain(uVar8);
  func_0x001d46c8();
  _swift_release(uVar8);
  FUN_00011670(&uStack_78);
  return;
}



/* Entry: 00019b00; end: 00019c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019b00(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  puVar2 = &UNK_0099ccc8;
  _swift_allocObject(&UNK_0099ccc8,0x18,7);
  *(long *)(puVar2 + 0x10) = param_2;
  cVar1 = *(char *)(param_1 + _DAT_00ae6260);
  __Block_copy(param_2);
  if (cVar1 == '\x01') {
    plVar3 = (long *)(param_1 + _DAT_00ae6270);
    FUN_0001393c(plVar3,plVar3[3]);
    puVar4 = &UNK_0099ccf0;
    _swift_allocObject(&UNK_0099ccf0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x1a514;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    uVar7 = *(undefined8 *)(*plVar3 + 0x18);
    puVar5 = &UNK_0099cd18;
    _swift_allocObject(&UNK_0099cd18,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_0001a204;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_50 = FUN_0001a224;
    puStack_70 = PTR___NSConcreteStackBlock_00999f30;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_0001d1e4;
    puStack_58 = &UNK_0099cd30;
    puStack_48 = puVar5;
    __Block_copy(&puStack_70);
    puVar5 = puStack_48;
    _swift_retain(puVar2);
    _swift_retain(puVar4);
    _swift_release(puVar5);
    func_0x00783880(uVar7);
    __Block_release(ppuVar6);
    _swift_release(puVar2);
    _swift_release(puVar4);
    return;
  }
  (**(code **)(param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar2);
  return;
}



/* Entry: 00019c84; end: 0001a0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019c84(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined4 uVar13;
  double dVar14;
  long alStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lVar5 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_110 + -extraout_x8;
  puVar4 = &UNK_0099cc50;
  _swift_allocObject(&UNK_0099cc50,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  uStack_f0 = 0;
  uStack_e8 = 0xe000000000000000;
  __Block_copy(param_2);
  __ss11_StringGutsV4growyySiF(0x2d);
  uStack_108 = uStack_f0;
  uStack_100 = uStack_e8;
  __sSS6appendyySSF(0xd00000000000002b,0x80000000008b4f70);
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae6260);
  uStack_e8 = puVar1[1];
  uStack_f0 = *puVar1;
  uStack_e0 = puVar1[2];
  dVar12 = (double)puVar1[3];
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  dVar14 = (double)puVar1[10];
  uStack_98 = puVar1[0xb];
  lVar5 = puVar1[0xc];
  dStack_d8 = dVar12;
  dStack_a0 = dVar14;
  lStack_90 = lVar5;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_f0,&uStack_108,&UNK_0099d660,PTR___ss26DefaultStringInterpolationVN_0099b698,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
  uVar10 = uStack_100;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_108,uStack_100);
  _objc_release();
  _swift_bridgeObjectRelease(uVar10);
  FUN_0001393c(param_1 + _DAT_00ae6270,*(undefined8 *)(param_1 + _DAT_00ae6270 + 0x18));
  dVar12 = dVar12 - dVar14;
  puVar2 = (undefined4 *)(param_1 + _DAT_00ae6290);
  uVar13 = *puVar2;
  uVar10 = *(undefined8 *)(puVar2 + 2);
  uVar3 = *(undefined1 *)(puVar2 + 4);
  func_0x00789a00();
  FUN_0001ef54(dVar12,uVar13,uVar10,uVar3,(double)lVar5 * 1000.0 < dVar12);
  FUN_0001393c(param_1 + _DAT_00ae6278,*(undefined8 *)(param_1 + _DAT_00ae6278 + 0x18));
  uVar11 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  uStack_98 = puVar1[0xb];
  dVar12 = (double)puVar1[10];
  lVar9 = puVar1[0xc];
  uStack_e8 = puVar1[1];
  uStack_f0 = *puVar1;
  dVar14 = (double)puVar1[3];
  uStack_e0 = puVar1[2];
  dStack_d8 = dVar14;
  uStack_c8 = uVar11;
  dStack_a0 = dVar12;
  lStack_90 = lVar9;
  FUN_0001ea08(uVar13,&uStack_f0,uVar10,uVar3);
  __s10Foundation4DateVACycfC(puVar8);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar8,0,1,lVar5);
  lVar5 = _DAT_00ae62a0;
  _swift_beginAccess(param_1 + _DAT_00ae62a0,&uStack_108,0x21,0);
  FUN_00013a14(puVar8,param_1 + lVar5);
  _swift_endAccess(&uStack_108);
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae6280);
  FUN_0001393c(puVar1,puVar1[3]);
  puVar7 = &UNK_0099cc78;
  _swift_allocObject(&UNK_0099cc78,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10,param_1);
  _swift_retain(puVar7);
  FUN_00023c38(FUN_0001a104,puVar7);
  _swift_release_n(puVar7,2);
  puVar6 = puVar1;
  FUN_0001393c(puVar1,puVar1[3]);
  FUN_00019308(uVar11,*puVar6);
  func_0x00789a00();
  if (dVar14 - dVar12 <= (double)lVar9 * 1000.0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_00ae62a8);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    *puVar1 = FUN_0001a0d8;
    puVar1[1] = puVar4;
    FUN_00013a64(uVar10,uVar11);
    puVar7 = &UNK_0099cca0;
    _swift_allocObject(&UNK_0099cca0,0x28,7);
    *(long *)(puVar7 + 0x10) = param_1;
    *(code **)(puVar7 + 0x18) = FUN_0001a0d8;
    *(undefined **)(puVar7 + 0x20) = puVar4;
    _swift_retain_n(puVar4,2);
    _objc_retain();
    *(undefined **)((long)alStack_120 + -extraout_x8) = PTR___sytN_0099b8e0 + 8;
    uVar10 = 0x22;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (0x22,0,0x3c,4,0,0,&UNK_007ccef0,puVar7);
    _swift_release(puVar7);
    puVar7 = *(undefined **)(param_1 + _DAT_00ae6298);
    *(undefined8 *)(param_1 + _DAT_00ae6298) = uVar10;
    _swift_release(puVar4);
  }
  else {
    FUN_0001393c(puVar1,puVar1[3]);
    FUN_000240a4(0);
    __Block_copy(param_2);
    FUN_00019b00(param_1,param_2);
    __Block_release(param_2);
    puVar7 = puVar4;
  }
  _swift_release(puVar7);
  return;
}



/* Entry: 0001a0b4; end: 0001a0d7;  */

void FUN_0001a0b4(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a0d8; end: 0001a0df;  */

void FUN_0001a0d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001a548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 0001a0e0; end: 0001a103;  */

void FUN_0001a0e0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a104; end: 0001a10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001a104(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_00ae6298);
    if (lVar3 == 0) {
      _objc_release();
    }
    else {
      _swift_retain(lVar3);
      _objc_release(lVar1);
      __sScT6cancelyyF(lVar3,PTR___sytN_0099b8e0 + 8,PTR___ss5NeverON_0099b788,
                       PTR___ss5NeverOs5ErrorsWP_0099b790);
      _swift_release(lVar3);
    }
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_00ae6298);
    *(undefined8 *)(lVar1 + _DAT_00ae6298) = 0;
    _objc_release();
    _swift_release(uVar2);
  }
  return;
}



/* Entry: 0001a10c; end: 0001a137;  */

void FUN_0001a10c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a138; end: 0001a1a3;  */

void FUN_0001a138(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  qword *pqVar3;
  long unaff_x20;
  undefined8 uVar4;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  pqVar3 = &section_00000158.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar3;
  *pqVar3 = unaff_x22;
  pqVar3[1] = (qword)FUN_0001a1a4;
  pqVar3[0x2a] = uVar2;
  pqVar3[0x2b] = uVar4;
  pqVar3[0x28] = param_1;
  pqVar3[0x29] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00016fb4,0,0);
  return;
}



/* Entry: 0001a1a4; end: 0001a203;  */

void FUN_0001a1a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001a1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0001a204; end: 0001a223;  */

void FUN_0001a204(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 0001a224; end: 0001a247;  */

void FUN_0001a224(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x80000000008b5120);
  _objc_release();
  (*pcVar1)();
  return;
}



/* Entry: 0001a248; end: 0001a2c3;  */

void FUN_0001a248(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dword *pdVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  pdVar3 = &section_00000068.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar3;
  *(long *)pdVar3 = unaff_x22;
  *(undefined8 *)(pdVar3 + 2) = 0x1a530;
  *(undefined8 *)(pdVar3 + 0x1e) = uVar2;
  *(undefined8 *)(pdVar3 + 0x20) = uVar4;
  *(undefined8 *)(pdVar3 + 0x1a) = param_2;
  *(undefined8 *)(pdVar3 + 0x1c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00017250,0,0);
  return;
}



/* Entry: 0001a2c4; end: 0001a2f7;  */

void FUN_0001a2c4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a2f8; end: 0001a377;  */

void FUN_0001a2f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  qword *pqVar3;
  long unaff_x20;
  undefined8 uVar4;
  qword unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pqVar3 = &segment_command_00000020.filesize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar3;
  *pqVar3 = unaff_x22;
  pqVar3[1] = 0x1a534;
  pqVar3[6] = uVar2;
  pqVar3[7] = uVar4;
  pqVar3[5] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000175e8,0,0);
  return;
}



/* Entry: 0001a378; end: 0001a3b7;  */

undefined8 FUN_0001a378(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 0001a3b8; end: 0001a3e3;  */

void FUN_0001a3b8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a3e4; end: 0001a44f;  */

void FUN_0001a3e4(void)

{
  qword *pqVar1;
  long unaff_x20;
  undefined8 uVar2;
  qword unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  pqVar1 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar1;
  *pqVar1 = unaff_x22;
  pqVar1[1] = 0x1a538;
  pqVar1[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000180a0,0,0);
  return;
}



/* Entry: 0001a450; end: 0001a473;  */

void FUN_0001a450(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a474; end: 0001a47f;  */

void FUN_0001a474(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a480; end: 0001a4c3;  */

void FUN_0001a480(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae62f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_00ac2970;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae62f8 = puVar1;
  return;
}



/* Entry: 0001a4c4; end: 0001a4d3;  */

void FUN_0001a4c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a4d4; end: 0001a4ff;  */

void FUN_0001a4d4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a500; end: 0001a54b;  */

void FUN_0001a500(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0001a54c; end: 0001a943;  */

void FUN_0001a54c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  FUN_0001e8cc(param_1,puVar4,0xae62f0,&UNK_007ccf10);
  lVar1 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar8 + 0x30))(puVar4,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_0001e7f4(puVar4,0xae62f0,&UNK_007ccf10);
    puVar6 = &UNK_00003100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar8 + 8))(puVar4,lVar1);
    puVar6 = (undefined *)((ulong)puVar2 & 0xff | 0x3100);
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    lVar8 = lVar1;
    _swift_getObjectType();
    _swift_unknownObjectRetain(lVar1);
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar1);
  }
  uVar5 = *unaff_x20;
  puVar3 = &UNK_0099d100;
  _swift_allocObject(&UNK_0099d100,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(long *)(puVar3 + 0x18) = param_3;
  puStack_80 = (undefined8 *)0x0;
  if (lVar7 != 0 || lVar8 != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_80 = &uStack_70;
    lStack_60 = lVar8;
    lStack_58 = lVar7;
  }
  uStack_88 = 1;
  uStack_78 = uVar5;
  _swift_task_create(puVar6,&uStack_88,PTR___sytN_0099b8e0 + 8,&UNK_007cd058,puVar3);
  _swift_release();
  return;
}



/* Entry: 0001a944; end: 0001a95f;  */

void FUN_0001a944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = param_4;
  *(undefined8 *)(unaff_x22 + 0x140) = param_1;
  *(undefined8 *)(unaff_x22 + 0x148) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001a960,0,0);
  return;
}



/* Entry: 0001a960; end: 0001aaa3;  */

void FUN_0001a960(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  dword *pdVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  puVar2 = &UNK_0099d088;
  _swift_allocObject(&UNK_0099d088,0x18,7);
  *(undefined **)(unaff_x22 + 0x160) = puVar2;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,uVar5);
  *(undefined **)(unaff_x22 + 0x120) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar6;
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_0099bfd8
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x168) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_0001aaa4;
    puVar2 = PTR___sytN_0099b8e0 + 8;
                    /* WARNING: Could not recover jumptable at 0x00778d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_0099bfd0
    )(plVar3,*(undefined8 *)(unaff_x22 + 0x140),puVar2,puVar2,0,0,&UNK_007cd018,unaff_x22 + 0x110,
      puVar2,puVar2);
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___sytN_0099b8e0 + 8);
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x10;
  pdVar4 = &section_00000068.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x170) = pdVar4;
  *(long *)pdVar4 = unaff_x22;
  *(code **)(pdVar4 + 2) = FUN_0001aae8;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(pdVar4 + 0x1e) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(pdVar4 + 0x20) = uVar5;
  *(long *)(pdVar4 + 0x1a) = unaff_x22 + 0x138;
  *(undefined **)(pdVar4 + 0x1c) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001abfc,0,0);
  return;
}



/* Entry: 0001aaa4; end: 0001aae7;  */

void FUN_0001aaa4(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x160);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x168));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 0001aae8; end: 0001ab5b;  */

void FUN_0001aae8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x170));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_0099be18 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x178) = plVar1;
  func_0x000115a8(0xae62e8,&UNK_007cd020);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_0001ab5c;
                    /* WARNING: Could not recover jumptable at 0x0077877c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_0099be10)();
  return;
}



/* Entry: 0001ab5c; end: 0001abdf;  */

void FUN_0001ab5c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x1aba4,0,0);
  return;
}



/* Entry: 0001abe0; end: 0001abfb;  */

void FUN_0001abe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001abfc,0,0);
  return;
}



/* Entry: 0001abfc; end: 0001aeab;  */

void FUN_0001abfc(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0x70);
  lVar3 = 0xae62f0;
  func_0x000115a8(0xae62f0,&UNK_007ccf10);
  uVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  lVar3 = 0;
  __sScPMa();
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  pcVar9 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar9)(uVar2,1,1,lVar3);
  puVar4 = &UNK_0099d088;
  _swift_allocObject(&UNK_0099d088,0x18,7);
  _swift_beginAccess(lVar7 + 0x10,unaff_x22 + 0x38,0,0);
  lVar3 = lVar7 + 0x10;
  _swift_unknownObjectWeakLoadStrong(lVar3);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,lVar3);
  _objc_release(lVar3);
  puVar5 = &UNK_0099d0b0;
  _swift_allocObject(&UNK_0099d0b0,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  *(undefined8 *)(puVar5 + 0x28) = uVar11;
  _swift_retain(uVar10);
  FUN_0001a54c(uVar2,&UNK_007cd038,puVar5);
  FUN_0001e7f4(uVar2,0xae62f0,&UNK_007ccf10);
  _swift_task_dealloc(uVar2);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (*pcVar9)();
  puVar4 = &UNK_0099d088;
  _swift_allocObject(&UNK_0099d088,0x18,7);
  _swift_beginAccess(lVar7 + 0x10,unaff_x22 + 0x50,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_unknownObjectWeakLoadStrong(lVar7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,lVar7);
  _objc_release(lVar7);
  puVar5 = &UNK_0099d0d8;
  _swift_allocObject(&UNK_0099d0d8,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  FUN_0001a54c(uVar6,&UNK_007cd048,puVar5);
  FUN_0001e7f4(uVar6,0xae62f0,&UNK_007ccf10);
  _swift_task_dealloc(uVar6);
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR___sScG4next9isolationxSgScA_pSgYi_tYaFTu_0099be28 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar8;
    uVar10 = 0xae62e8;
    func_0x000115a8(0xae62e8,&UNK_007cd020);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_0001aeac;
                    /* WARNING: Could not recover jumptable at 0x00778788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG4next9isolationxSgScA_pSgYi_tYaF_0099be20)(unaff_x22 + 0x98,0,0,uVar10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_0099c0a8)
            (unaff_x22 + 0x98,**(undefined8 **)(unaff_x22 + 0x68),FUN_0001aef4,unaff_x22 + 0x10);
  return;
}



/* Entry: 0001aeac; end: 0001aef3;  */

void FUN_0001aeac(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001af1c,0,0);
  return;
}



/* Entry: 0001aef4; end: 0001af1b;  */

void FUN_0001aef4(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x90) = unaff_x20;
  if (unaff_x20 == 0) {
    pcVar1 = FUN_0001af1c;
  }
  else {
    pcVar1 = FUN_0001af5c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 0001af1c; end: 0001af5b;  */

void FUN_0001af1c(void)

{
  long unaff_x22;
  
  __sScG9cancelAllyyF(**(undefined8 **)(unaff_x22 + 0x68),PTR___sytN_0099b8e0 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001af58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0001af5c; end: 0001af93;  */

void FUN_0001af5c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0077b620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unexpectedError_0099bb70)
            (*(undefined8 *)(unaff_x22 + 0x90),"_Concurrency/arm64e-apple-ios.swiftinterface",0x2c,1
             ,0xb9b);
  return;
}



/* Entry: 0001af94; end: 0001b157;  */

void FUN_0001af94(void)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)(unaff_x22 + 0x40) = lVar5;
  if (lVar5 != 0) {
    pcVar2 = section_00000158.segname + 8;
    _swift_task_alloc();
    *(char **)(unaff_x22 + 0x48) = pcVar2;
    *(long *)pcVar2 = unaff_x22;
    *(qword *)(pcVar2 + 8) = 0x1b020;
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(pcVar2 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x38);
    *(long *)(pcVar2 + 0xb8) = lVar5;
    *(undefined8 *)(pcVar2 + 0xa8) = uVar1;
    lVar5 = 0;
    __s10Foundation4DateVMa();
    *(long *)(pcVar2 + 0xc0) = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    *(long *)(pcVar2 + 200) = lVar5;
    uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
    uVar3 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar2 + 0xd0) = uVar3;
    uVar3 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar2 + 0xd8) = uVar3;
    uVar4 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar2 + 0xe0) = uVar4;
    lVar5 = 0xae60c8;
    func_0x000115a8(0xae60c8,&UNK_007cccd0);
    uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
    uVar3 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar2 + 0xe8) = uVar3;
    uVar3 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar2 + 0xf0) = uVar3;
    uVar4 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar2 + 0xf8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001b158,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001b01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0001b158; end: 0001b36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b158(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar10 = *(long *)(unaff_x22 + 200);
  lVar9 = *(long *)(unaff_x22 + 0xb8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x80000000008b5010);
  _objc_release();
  __s10Foundation4DateVACycfC(uVar8);
  pcVar7 = *(code **)(lVar10 + 0x38);
  *(code **)(unaff_x22 + 0x100) = pcVar7;
  (*pcVar7)(uVar8,0,1,uVar1);
  lVar10 = _DAT_00b647a8;
  *(long *)(unaff_x22 + 0x108) = _DAT_00b647a8;
  _swift_beginAccess(lVar9 + lVar10,unaff_x22 + 0x60,0x21,0);
  FUN_00013a14(uVar8,lVar9 + lVar10);
  _swift_endAccess(unaff_x22 + 0x60);
  FUN_0001393c(lVar9 + _DAT_00ae6330,*(undefined8 *)(lVar9 + _DAT_00ae6330 + 0x18));
  FUN_00016acc(0);
  FUN_00016aec(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_0001393c(unaff_x22 + 0x38,lVar2);
  lVar10 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar10 + 0x10))();
  puVar3 = PTR___sSciTL_0099bfb8;
  uVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar1,lVar2,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  uVar8 = uVar1;
  _swift_getAssociatedConformanceWitness
            (uVar1,lVar2,uVar5,puVar3,PTR___sSci13AsyncIteratorSci_ScITn_0099bfa8);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
  lVar10 = unaff_x22 + 0x10;
  func_0x00016cc8(lVar10);
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar10,lVar2,uVar1);
  _swift_task_dealloc(uVar4);
  FUN_00011670(unaff_x22 + 0x38);
  uVar1 = _DAT_00ae6338;
  *(undefined8 *)(unaff_x22 + 0x110) = _DAT_00ae6318;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(lVar9 + _DAT_00ae6310);
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_000115f8(unaff_x22 + 0x10,uVar1);
  plVar6 = (long *)(ulong)*(uint *)(
                                   PTR___sScI4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTjTu_0099be60
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x130) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_0001b370;
                    /* WARNING: Could not recover jumptable at 0x007787c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTj_0099be58)
            (plVar6,unaff_x22 + 0x90,0,0,unaff_x22 + 0x98,uVar1,uVar8);
  return;
}



/* Entry: 0001b370; end: 0001b3cb;  */

void FUN_0001b370(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_0001b3cc;
  }
  else {
    pcVar1 = FUN_0001b9ec;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 0001b3cc; end: 0001b8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b3cc(double param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined4 uVar21;
  
  lVar16 = *(long *)(unaff_x22 + 0x90);
  if (lVar16 != 0) {
    __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
    if ((param_2 & 1) == 0) {
      lVar6 = *(long *)(unaff_x22 + 0x128);
      lVar18 = lVar16;
      if (lVar6 == 0) {
        lVar6 = *(long *)(unaff_x22 + 0x108);
        uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
        lVar17 = *(long *)(unaff_x22 + 200);
        lVar19 = *(long *)(unaff_x22 + 0xb8);
        plVar10 = (long *)(lVar19 + *(long *)(unaff_x22 + 0x110));
        FUN_0001393c(plVar10,plVar10[3]);
        FUN_0001e8cc(lVar19 + lVar6,uVar15,0xae60c8,&UNK_007cccd0);
        (**(code **)(lVar17 + 0x30))(uVar15,1,uVar14);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
        if ((int)uVar15 == 1) {
          _objc_retain(lVar16);
          FUN_0001e7f4(uVar14,0xae60c8,&UNK_007cccd0);
          dVar20 = 0.0;
          dVar13 = param_1;
        }
        else {
          uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
          uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
          lVar6 = *(long *)(unaff_x22 + 200);
          (**(code **)(lVar6 + 0x20))(uVar9,uVar14,uVar8);
          _objc_retain(lVar16);
          __s10Foundation4DateVACycfC(uVar15);
          __s10Foundation4DateV17timeIntervalSinceySdACF(uVar9);
          pcVar4 = *(code **)(lVar6 + 8);
          (*pcVar4)(uVar15,uVar8);
          (*pcVar4)(uVar9,uVar8);
          dVar13 = 1000.0;
          dVar20 = param_1 * 1000.0;
        }
        puVar1 = (undefined4 *)(*(long *)(unaff_x22 + 0xb8) + *(long *)(unaff_x22 + 0x118));
        uVar21 = *puVar1;
        uVar15 = *(undefined8 *)(puVar1 + 2);
        uVar3 = *(undefined1 *)(puVar1 + 4);
        func_0x00784480(lVar16);
        lVar6 = *plVar10;
        FUN_0001f134(uVar21,uVar15,uVar3);
        puVar7 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
        _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
        uVar8 = 0xd00000000000001f;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40)
        ;
        uVar9 = 0xd000000000000017;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x80000000008b5100)
        ;
        uVar14 = uVar15;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (uVar15,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
        func_0x00786420(puVar7);
        _objc_release(uVar14);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _swift_bridgeObjectRelease(uVar15);
        func_0x0077e920(dVar20,*(undefined8 *)(lVar6 + 0x18));
        if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1b8c8);
          (*pcVar4)();
        }
        if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1b8cc);
          (*pcVar4)();
        }
        dVar20 = 9.223372036854776e+18;
        if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1b8d0);
          (*pcVar4)();
        }
        func_0x0077e640(*(undefined8 *)(lVar6 + 0x18));
        _objc_release(puVar7);
        lVar6 = lVar16;
      }
      else {
        _objc_retain();
        func_0x00784480();
        dVar13 = param_1;
        func_0x00784480(lVar16);
        dVar20 = dVar13;
        _objc_release(lVar6);
        if (dVar13 < param_1) {
          _objc_release(lVar6);
          lVar6 = lVar16;
          _objc_retain(lVar16);
        }
        else {
          lVar18 = *(long *)(unaff_x22 + 0x128);
        }
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x120);
      _objc_retain();
      func_0x00784480();
      dVar13 = dVar20;
      func_0x00781ec0(uVar14);
      _objc_release(lVar16);
      _objc_release(lVar6);
      if (dVar13 <= dVar20) {
        *(long *)(unaff_x22 + 0x128) = lVar18;
        uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
        FUN_000115f8(unaff_x22 + 0x10,uVar14);
        plVar10 = (long *)(ulong)*(uint *)(
                                          PTR___sScI4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTjTu_0099be60
                                          + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x130) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_0001b370;
                    /* WARNING: Could not recover jumptable at 0x007787c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScI4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTj_0099be58)
                  (plVar10,(long *)(unaff_x22 + 0x90),0,0,unaff_x22 + 0x98,uVar14,uVar15);
        return;
      }
      goto LAB_0001b41c;
    }
    _objc_release(lVar16);
  }
  lVar18 = *(long *)(unaff_x22 + 0x128);
LAB_0001b41c:
  FUN_00011670(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x140) = lVar18;
  lVar17 = *(long *)(unaff_x22 + 0x138);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
  pcVar4 = *(code **)(unaff_x22 + 0x100);
  lVar16 = *(long *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  __s10Foundation4DateVACycfC(uVar14);
  (*pcVar4)(uVar14,0,1,uVar15);
  lVar6 = _DAT_00b647b0;
  _swift_beginAccess(lVar16 + _DAT_00b647b0,unaff_x22 + 0x78,0x21,0);
  FUN_00013a14(uVar14,lVar16 + lVar6);
  _swift_endAccess(unaff_x22 + 0x78);
  if (lVar17 == 0) {
    if (lVar18 != 0) {
      pcVar5 = section_00000108.sectname + 8;
      _swift_task_alloc();
      *(char **)(unaff_x22 + 0x148) = pcVar5;
      *(long *)pcVar5 = unaff_x22;
      *(code **)(pcVar5 + 8) = FUN_0001b8d0;
      uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
      *(long *)(pcVar5 + 0x98) = lVar18;
      *(undefined8 *)(pcVar5 + 0xa0) = uVar14;
      lVar16 = 0xae60c8;
      func_0x000115a8(0xae60c8,&UNK_007cccd0);
      uVar12 = *(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xf;
      uVar11 = uVar12 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar5 + 0xa8) = uVar11;
      uVar12 = uVar12 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar5 + 0xb0) = uVar12;
      lVar16 = 0;
      __s10Foundation4DateVMa();
      *(long *)(pcVar5 + 0xb8) = lVar16;
      lVar16 = *(long *)(lVar16 + -8);
      *(long *)(pcVar5 + 0xc0) = lVar16;
      uVar12 = *(long *)(lVar16 + 0x40) + 0xf;
      uVar11 = uVar12 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar5 + 200) = uVar11;
      uVar12 = uVar12 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar5 + 0xd0) = uVar12;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001c5e4,0,0);
      return;
    }
    func_0x0001a70c(3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),0);
  }
  else {
    func_0x0001a70c(0,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),0);
    _objc_release(lVar18);
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001b504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0001b8d0; end: 0001b91f;  */

void FUN_0001b8d0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x150) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x148));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001b920,0,0);
  return;
}



/* Entry: 0001b920; end: 0001b9eb;  */

void FUN_0001b920(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = 5;
  }
  uVar3 = uVar5;
  _objc_retain(uVar5);
  func_0x0001a70c(uVar1,uVar6,uVar2,uVar5);
  _objc_release(uVar3);
  _swift_errorRelease(lVar4);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001b9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0001b9ec; end: 0001bd4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b9ec(double param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  FUN_00011670(unaff_x22 + 0x10);
  puVar11 = (undefined8 *)(unaff_x22 + 0xa0);
  *puVar11 = uVar13;
  _swift_errorRetain(uVar13);
  uVar6 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  uVar9 = unaff_x22 + 0x168;
  _swift_dynamicCast(uVar9,puVar11,uVar6,&UNK_0099c920,0);
  if ((uVar9 & 1) != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x108);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar12 = *(long *)(unaff_x22 + 200);
    lVar16 = *(long *)(unaff_x22 + 0xb8);
    lVar10 = lVar16 + *(long *)(unaff_x22 + 0x110);
    _swift_errorRelease(uVar13);
    bVar5 = *(byte *)(unaff_x22 + 0x168);
    FUN_0001393c(lVar10,*(undefined8 *)(lVar10 + 0x18));
    FUN_0001e8cc(lVar16 + lVar2,uVar14,0xae60c8,&UNK_007cccd0);
    (**(code **)(lVar12 + 0x30))(uVar14,1,uVar6);
    if ((int)uVar14 == 1) {
      FUN_0001e7f4(*(undefined8 *)(unaff_x22 + 0xe8),0xae60c8,&UNK_007cccd0);
      param_1 = 0.0;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      lVar10 = *(long *)(unaff_x22 + 200);
      (**(code **)(lVar10 + 0x20))(uVar6,*(undefined8 *)(unaff_x22 + 0xe8),uVar13);
      __s10Foundation4DateVACycfC(uVar14);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar6);
      pcVar15 = *(code **)(lVar10 + 8);
      (*pcVar15)(uVar14,uVar13);
      (*pcVar15)(uVar6,uVar13);
      param_1 = param_1 * 1000.0;
    }
    puVar1 = (undefined4 *)(*(long *)(unaff_x22 + 0xb8) + *(long *)(unaff_x22 + 0x118));
    FUN_0001f63c(param_1,*puVar1,*(undefined8 *)(puVar1 + 2),*(undefined1 *)(puVar1 + 4),bVar5 < 2);
    if (bVar5 == 0) {
      pcVar7 = section_00000068.sectname + 8;
      _swift_task_alloc();
      *(char **)(unaff_x22 + 0x158) = pcVar7;
      *(long *)pcVar7 = unaff_x22;
      *(code **)(pcVar7 + 8) = FUN_0001bd50;
      uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar6 = 0x100000002;
    }
    else {
      if (bVar5 != 1) {
        uVar13 = *puVar11;
        goto LAB_0001bc04;
      }
      pcVar7 = section_00000068.sectname + 8;
      _swift_task_alloc();
      *(char **)(unaff_x22 + 0x160) = pcVar7;
      *(long *)pcVar7 = unaff_x22;
      *(code **)(pcVar7 + 8) = FUN_0001beec;
      uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar6 = 3;
    }
    *(undefined8 *)(pcVar7 + 0x50) = uVar6;
    *(undefined8 *)(pcVar7 + 0x58) = uVar13;
    pcVar15 = FUN_0001c348;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar15,0,0);
    return;
  }
  _swift_errorRelease(*puVar11);
LAB_0001bc04:
  _swift_errorRelease(uVar13);
  lVar12 = *(long *)(unaff_x22 + 0x128);
  *(long *)(unaff_x22 + 0x140) = lVar12;
  lVar16 = *(long *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  pcVar15 = *(code **)(unaff_x22 + 0x100);
  lVar10 = *(long *)(unaff_x22 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  __s10Foundation4DateVACycfC(uVar6);
  (*pcVar15)(uVar6,0,1,uVar13);
  lVar2 = _DAT_00b647b0;
  _swift_beginAccess(lVar10 + _DAT_00b647b0,unaff_x22 + 0x78,0x21,0);
  FUN_00013a14(uVar6,lVar10 + lVar2);
  _swift_endAccess(unaff_x22 + 0x78);
  if (lVar16 == 0) {
    if (lVar12 != 0) {
      pcVar7 = section_00000108.sectname + 8;
      _swift_task_alloc();
      *(char **)(unaff_x22 + 0x148) = pcVar7;
      *(long *)pcVar7 = unaff_x22;
      *(code **)(pcVar7 + 8) = FUN_0001b8d0;
      uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
      *(long *)(pcVar7 + 0x98) = lVar12;
      *(undefined8 *)(pcVar7 + 0xa0) = uVar6;
      lVar10 = 0xae60c8;
      func_0x000115a8(0xae60c8,&UNK_007cccd0);
      uVar9 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xf;
      uVar8 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xa8) = uVar8;
      uVar9 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xb0) = uVar9;
      lVar10 = 0;
      __s10Foundation4DateVMa();
      *(long *)(pcVar7 + 0xb8) = lVar10;
      lVar10 = *(long *)(lVar10 + -8);
      *(long *)(pcVar7 + 0xc0) = lVar10;
      uVar9 = *(long *)(lVar10 + 0x40) + 0xf;
      uVar8 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 200) = uVar8;
      uVar9 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xd0) = uVar9;
      pcVar15 = FUN_0001c5e4;
      goto _swift_task_switch;
    }
    func_0x0001a70c(3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),0);
  }
  else {
    func_0x0001a70c(6,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),0);
    _objc_release(lVar12);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001bce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0001bd50; end: 0001bd97;  */

void FUN_0001bd50(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001bd98,0,0);
  return;
}



/* Entry: 0001bd98; end: 0001beeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001bd98(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xa0));
  lVar11 = *(long *)(unaff_x22 + 0x128);
  *(long *)(unaff_x22 + 0x140) = lVar11;
  lVar13 = *(long *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  pcVar2 = *(code **)(unaff_x22 + 0x100);
  lVar10 = *(long *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  __s10Foundation4DateVACycfC(uVar12);
  (*pcVar2)(uVar12,0,1,uVar3);
  lVar6 = _DAT_00b647b0;
  _swift_beginAccess(lVar10 + _DAT_00b647b0,unaff_x22 + 0x78,0x21,0);
  FUN_00013a14(uVar12,lVar10 + lVar6);
  _swift_endAccess(unaff_x22 + 0x78);
  if (lVar13 == 0) {
    if (lVar11 != 0) {
      pcVar7 = section_00000108.sectname + 8;
      _swift_task_alloc();
      *(char **)(unaff_x22 + 0x148) = pcVar7;
      *(long *)pcVar7 = unaff_x22;
      *(code **)(pcVar7 + 8) = FUN_0001b8d0;
      uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
      *(long *)(pcVar7 + 0x98) = lVar11;
      *(undefined8 *)(pcVar7 + 0xa0) = uVar12;
      lVar10 = 0xae60c8;
      func_0x000115a8(0xae60c8,&UNK_007cccd0);
      uVar9 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xf;
      uVar8 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xa8) = uVar8;
      uVar9 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xb0) = uVar9;
      lVar10 = 0;
      __s10Foundation4DateVMa();
      *(long *)(pcVar7 + 0xb8) = lVar10;
      lVar10 = *(long *)(lVar10 + -8);
      *(long *)(pcVar7 + 0xc0) = lVar10;
      uVar9 = *(long *)(lVar10 + 0x40) + 0xf;
      uVar8 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 200) = uVar8;
      uVar9 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xd0) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001c5e4,0,0);
      return;
    }
    func_0x0001a70c(3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),0);
  }
  else {
    func_0x0001a70c(8,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),0);
    _objc_release(lVar11);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001be8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0001beec; end: 0001bf33;  */

void FUN_0001beec(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001bf34,0,0);
  return;
}



/* Entry: 0001bf34; end: 0001c087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001bf34(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xa0));
  lVar11 = *(long *)(unaff_x22 + 0x128);
  *(long *)(unaff_x22 + 0x140) = lVar11;
  lVar13 = *(long *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  pcVar2 = *(code **)(unaff_x22 + 0x100);
  lVar10 = *(long *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  __s10Foundation4DateVACycfC(uVar12);
  (*pcVar2)(uVar12,0,1,uVar3);
  lVar6 = _DAT_00b647b0;
  _swift_beginAccess(lVar10 + _DAT_00b647b0,unaff_x22 + 0x78,0x21,0);
  FUN_00013a14(uVar12,lVar10 + lVar6);
  _swift_endAccess(unaff_x22 + 0x78);
  if (lVar13 == 0) {
    if (lVar11 != 0) {
      pcVar7 = section_00000108.sectname + 8;
      _swift_task_alloc();
      *(char **)(unaff_x22 + 0x148) = pcVar7;
      *(long *)pcVar7 = unaff_x22;
      *(code **)(pcVar7 + 8) = FUN_0001b8d0;
      uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
      *(long *)(pcVar7 + 0x98) = lVar11;
      *(undefined8 *)(pcVar7 + 0xa0) = uVar12;
      lVar10 = 0xae60c8;
      func_0x000115a8(0xae60c8,&UNK_007cccd0);
      uVar9 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xf;
      uVar8 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xa8) = uVar8;
      uVar9 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xb0) = uVar9;
      lVar10 = 0;
      __s10Foundation4DateVMa();
      *(long *)(pcVar7 + 0xb8) = lVar10;
      lVar10 = *(long *)(lVar10 + -8);
      *(long *)(pcVar7 + 0xc0) = lVar10;
      uVar9 = *(long *)(lVar10 + 0x40) + 0xf;
      uVar8 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 200) = uVar8;
      uVar9 = uVar9 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar7 + 0xd0) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001c5e4,0,0);
      return;
    }
    func_0x0001a70c(3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),0);
  }
  else {
    func_0x0001a70c(7,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),0);
    _objc_release(lVar11);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001c028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0001c088; end: 0001c09f;  */

void FUN_0001c088(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0001c0a0,0,0);
  return;
}



/* Entry: 0001c0a0; end: 0001c223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001c0a0(double param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)(unaff_x22 + 0x30) = lVar4;
  if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001c180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x00788fc0(*(undefined8 *)(lVar4 + _DAT_00ae6310));
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1c188);
    (*pcVar2)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1c18c);
    (*pcVar2)();
  }
  if (param_1 < 1.8446744073709552e+19) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)param_1;
    if (SUB168(auVar1 * ZEXT816(1000000000),8) == 0) {
      plVar3 = (long *)(ulong)*(uint *)(
                                       PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_0099bf78
                                       + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x38) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = 0x1c194;
                    /* WARNING: Could not recover jumptable at 0x00778914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_0099bf70)
                ((long)param_1 * 1000000000);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1c194);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1c190);
  (*pcVar2)();
}



/* Entry: 0001c224; end: 0001c277; -[_TtC19LocationPushHandler32CLLocationUpdateUnaryPushHandler processWithCompletion:] */

void FUN_0001c224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __Block_copy(param_3);
  __Block_copy();
  _objc_retain(param_1);
  FUN_0001e250();
  __Block_release(param_3);
  __Block_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0001c278; end: 0001c307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001c278(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x80000000008b4f40);
  _objc_release();
  lVar1 = _DAT_00ae6340;
  lVar3 = *(long *)(unaff_x20 + _DAT_00ae6340);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_retain(lVar3);
    __sScT6cancelyyF();
    _swift_release(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c91e40; end: 104c91e93; -[SCBillboardUILatencyLogger .cxx_destruct] */

void FUN_104c91e40(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c91e94; end: 104c91f07; -[SCGrapheneBillboardUiLatencyMetric2 init] */

undefined1 * FUN_104c91e94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3818;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c91f08; end: 104c921c7;  */

/* WARNING: Removing unreachable block (ram,0x000104c92190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_104c91f08(undefined8 param_1,long param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  char *unaff_x24;
  char *pcStack_120;
  undefined *puStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_4;
  pcVar6 = param_5;
  pcVar7 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110845048,acStack_c0,param_6);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar8 = 0;
    pcVar1 = pcVar2;
    pcVar6 = param_6;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar8 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    ppcVar4 = &pcStack_120;
    _objc_retain(pcVar1);
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    _objc_release(puVar3);
    puStack_118 = PTR_PTR_1126e3820;
    pcStack_120 = pcVar2;
    _objc_msgSendSuper2(0,0,param_1,0x4057800000000000,&pcStack_120,PTR_s_initWithFrame__1125e2948);
    if (ppcVar4 != (char **)0x0) {
      _objc_storeWeak((char *)((long)ppcVar4 + (long)_DAT_11270fd98),pcVar7);
      lVar8 = (long)_DAT_11270fd9c;
      _objc_retain(pcVar1);
      uVar5 = *(undefined8 *)((long)ppcVar4 + lVar8);
      *(char **)((long)ppcVar4 + lVar8) = pcVar1;
      _objc_release(uVar5);
      func_0x00010c2226c0(ppcVar4);
      func_0x00010beaae20(ppcVar4);
      func_0x00010bee3200(ppcVar4);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    return (char *)ppcVar4;
  }
  return pcVar2;
}



/* Entry: 104c921c8; end: 104c922f3; -[SCFeedHeaderPromptViewV2 initWithValdiRuntimeProvider:viewModel:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104c921c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  puStack_58 = PTR_PTR_1126e3820;
  uStack_60 = param_2;
  _objc_msgSendSuper2(0,0,param_1,0x4057800000000000,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_11270fd98),param_6);
    lVar4 = (long)_DAT_11270fd9c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    func_0x00010c2226c0(puVar2);
    func_0x00010beaae20(puVar2);
    func_0x00010bee3200(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 104c922f4; end: 104c925ff; -[SCFeedHeaderPromptViewV2 setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c922f4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11270fda0;
  puVar5 = *(undefined **)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(puVar5);
  puVar1 = param_3;
  if (param_3 != puVar5) {
    if (puVar5 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      func_0x00010c071ae0(param_3,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(param_3);
      if (((ulong)puVar1 & 1) != 0) goto LAB_104c925d8;
    }
    puVar1 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126aea18;
    _objc_alloc_init();
    puVar2 = param_3;
    func_0x00010bfe7e40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104c92600;
    puStack_80 = &UNK_1108450c8;
    _objc_retain(puVar1);
    puStack_c0 = puVar5;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104c9260c;
    puStack_a8 = &UNK_1108450f8;
    puStack_78 = puVar1;
    _objc_retain(puVar1);
    puStack_e8 = puVar5;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x104c926b0;
    puStack_d0 = &UNK_110845128;
    puStack_a0 = puVar1;
    _objc_retain(puVar1);
    puStack_110 = puVar5;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_104c92768;
    puStack_f8 = &UNK_1108450c8;
    puStack_f0 = puVar1;
    puStack_c8 = puVar1;
    _objc_retain(puVar1);
    func_0x00010c0c10e0(puVar2,param_2,&puStack_98,&puStack_c0,&puStack_e8,&puStack_110);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126aea30;
    _objc_alloc(PTR_PTR_1126aea30);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c260dc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0511e0(puVar2,param_2,uVar4);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126aea38;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c2711a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf2c780(uVar3);
    func_0x00010c01af00(puVar5,param_2,puVar1,uVar4,puVar2,uVar3);
    lVar7 = (long)_DAT_11270fda4;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar5;
    _objc_release(uVar3);
    _objc_release(uVar4);
    puVar5 = param_3;
    func_0x00010bf9e800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199940(*(undefined8 *)(param_1 + lVar7),param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010c201a00(*(undefined8 *)(param_1 + lVar7),param_2,PTR____kCFBooleanFalse_11034ab60);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c294ee0(uVar4);
    func_0x00010c0df840(puVar5,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21fd20(*(undefined8 *)(param_1 + lVar7),param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010bee3200(param_1);
    _objc_release(puVar2);
    _objc_release(puStack_f0);
    _objc_release(puStack_c8);
    _objc_release(puStack_a0);
    puVar5 = puStack_78;
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
LAB_104c925d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c92600; end: 104c9260b;  */

void FUN_104c92600(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b75b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLargeImageUrl__11264b790,param_2);
  return;
}



/* Entry: 104c9260c; end: 104c92767;  */

void FUN_104c9260c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aea20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff6140();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c1fbc60(puVar1);
  _objc_release(param_4);
  func_0x00010c171440(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c92768; end: 104c92773;  */

void FUN_104c92768(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c194790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setEmojiString__112642c00,param_2);
  return;
}



/* Entry: 104c92774; end: 104c928d7; -[SCFeedHeaderPromptViewV2 updateHeightWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c92774(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  func_0x00010bfb68e0(param_2);
  _CGRectGetWidth();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11270fd9c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aea40;
  _objc_opt_class(PTR_PTR_1126aea40);
  uVar4 = uVar2;
  func_0x00010bf55740(uVar2,param_3,puVar3,*(undefined8 *)(param_2 + _DAT_11270fda4),
                      *(undefined8 *)(param_2 + _DAT_11270fda8));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = param_2;
  func_0x00010c279540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219560(uVar4,param_3,lVar5);
  _objc_release(lVar5);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104c928d8;
  puStack_78 = &UNK_110845188;
  lStack_70 = param_2;
  uStack_68 = uVar4;
  uStack_60 = param_4;
  uStack_58 = param_1;
  _objc_retain(param_4);
  _objc_retain(uVar4);
  func_0x00010c2a15a0(uVar4,param_3,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(uVar4);
  return;
}



/* Entry: 104c928d8; end: 104c929bf;  */

void FUN_104c928d8(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104c929c0;
  puStack_58 = &UNK_110845158;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104c929c0; end: 104c92ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c929c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = 1.79769313486232e+308;
  func_0x00010c0c3ec0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_11270fda4);
    func_0x00010c294ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067ec0();
    uVar1 = (int)uVar4 - 1;
    if (uVar1 < 4) {
      dVar7 = *(double *)(&UNK_10dd8acf0 + (ulong)uVar1 * 8);
    }
    else {
      dVar7 = 94.0;
    }
    _objc_release(uVar3);
    dVar5 = (double)(long)dVar6;
    dVar6 = dVar5;
    if (dVar5 <= dVar7) {
      dVar6 = dVar7;
    }
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
    _CGRectGetMinX();
    dVar7 = dVar5;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
    _CGRectGetMinY();
    func_0x00010c19f0e0(dVar5,dVar7,*(undefined8 *)(param_1 + 0x40),dVar6,
                        *(undefined8 *)(param_1 + 0x28));
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104c92ab4; end: 104c92eeb; -[SCFeedHeaderPromptViewV2 _setupBillboardPromptComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c92ab4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_a8,param_1);
  puVar1 = PTR_PTR_1126aea48;
  _objc_alloc();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104c92eec;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c0311e0();
  lVar14 = (long)_DAT_11270fda8;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar12);
  puStack_f8 = puVar2;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x104c92f18;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_a8);
  func_0x00010c1d2380(*(undefined8 *)(param_1 + lVar14));
  _objc_copyWeak(auStack_100,auStack_a8);
  func_0x00010c1d2040(*(undefined8 *)(param_1 + lVar14));
  puVar2 = PTR_PTR_1126aea40;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11270fd9c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar15 = (long)_DAT_11270fdac;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar2;
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_a0 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_98 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  uStack_90 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  puVar11 = auStack_a8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(puVar11);
  puVar11 = puVar11 + 0x20;
  _objc_loadWeakRetained(puVar11);
  func_0x00010be00b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 104c92eec; end: 104c92f6f;  */

void FUN_104c92eec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c92f70; end: 104c93017; -[SCFeedHeaderPromptViewV2 _updateValdiViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c92f70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_11270fdac) != 0) {
    func_0x00010c2226c0(*(long *)(param_1 + _DAT_11270fdac),param_2,
                        *(undefined8 *)(param_1 + _DAT_11270fda4));
    lVar2 = (long)_DAT_11270fda0;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010beecec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010beecf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104c93018; end: 104c93053; -[SCFeedHeaderPromptViewV2 _didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c93018(long param_1)

{
  param_1 = param_1 + _DAT_11270fd98;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfdfd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c93054; end: 104c9308f; -[SCFeedHeaderPromptViewV2 _didTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c93054(long param_1)

{
  param_1 = param_1 + _DAT_11270fd98;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfdfd80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c93090; end: 104c930cb; -[SCFeedHeaderPromptViewV2 _didTapExtraButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c93090(long param_1)

{
  param_1 = param_1 + _DAT_11270fd98;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfdfda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c930cc; end: 104c93147; -[SCFeedHeaderPromptViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c930cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270fd9c,0);
  _objc_storeStrong(param_1 + _DAT_11270fda8,0);
  _objc_storeStrong(param_1 + _DAT_11270fda4,0);
  _objc_storeStrong(param_1 + _DAT_11270fdac,0);
  _objc_storeStrong(param_1 + _DAT_11270fda0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fd98);
  return;
}



/* Entry: 104c93148; end: 104c931cb; -[SCFeedHeaderPromptDismissButton pointInside:withEvent:] */

void FUN_104c93148(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010bf20c00();
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar1 + -6.0,dVar2 + -6.0,param_3 + 12.0,param_4 + 12.0,param_1,param_2);
  return;
}



/* Entry: 104c931cc; end: 104c932cf; -[SCFeedHeaderPromptView initWithViewModel:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104c931cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  puStack_48 = PTR_PTR_1126e3828;
  uStack_50 = param_2;
  _objc_msgSendSuper2(0,0,param_1,0x10000000000000,&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_11270fdb0),param_5);
    lVar4 = (long)_DAT_11270fdb4;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    func_0x00010beb0340(puVar2);
    func_0x00010bed8640(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 104c932d0; end: 104c9343b; -[SCFeedHeaderPromptView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c932d0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11270fdb4;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_104c93424;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    lVar5 = param_1;
    func_0x00010be1ecc0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11270fdb8),param_2,lVar5);
    _objc_release(lVar5);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11270fdbc;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c260dc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11270fdc0;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c165e00(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010c165e00(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010bed8640(param_1);
  }
LAB_104c93424:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c9343c; end: 104c935e7; -[SCFeedHeaderPromptView _getEmojiString:] */

void FUN_104c9343c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104c935e8;
  uStack_60 = 0x104c935f8;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010bfe7e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0c10e0(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c935e8; end: 104c9360b;  */

void FUN_104c935e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104c9360c; end: 104c93643;  */

void FUN_104c9360c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c93644; end: 104c94057; -[SCFeedHeaderPromptView _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c93644(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar16 = (long)_DAT_11270fdb8;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  func_0x00010c165e00(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar16),param_2,2);
  lVar15 = (long)_DAT_11270fdb4;
  lVar13 = param_1;
  func_0x00010be1ecc0(param_1,param_2,*(undefined8 *)(param_1 + lVar15));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar16),param_2,lVar13);
  _objc_release(lVar13);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf493c0(0x402e000000000000,uVar2,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_90 = uVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea60;
  func_0x00010bf25cc0(PTR_PTR_1126aea60,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11270fdc4;
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dacb58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar14,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar18),param_2,param_1,PTR_s__didDismiss_11255ce98,
                      0x40);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf493c0(0xc02e000000000000,uVar2,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  uStack_b0 = uVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_a8 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uStack_a0 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf49420(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar17 = (long)_DAT_11270fdbc;
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar14);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar17),param_2,0x16);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2711a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar17),param_2,uVar14);
  _objc_release(uVar14);
  func_0x00010c165e00(*(undefined8 *)(param_1 + lVar17),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar17),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar17),param_2,4);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar9;
  func_0x00010bf493c0(0x402e000000000000,uVar9,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  uStack_c8 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0xc02e000000000000,uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  uStack_c0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493c0(0x402e000000000000,uVar7,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(lVar13);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(uVar9);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar19 = (long)_DAT_11270fdc0;
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar14);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar19),param_2,6);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar19),param_2,uVar14);
  _objc_release(uVar14);
  func_0x00010c165e00(*(undefined8 *)(param_1 + lVar19),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar19),param_2,4);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar19));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493c0(0x402e000000000000,uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  uStack_e8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493c0(0xc02e000000000000,uVar5,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  uStack_e0 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010bf493c0(0xc02e000000000000,uVar10,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar19);
  uStack_d8 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befbd60(param_1,param_2,param_1,PTR_s__didTap_11255dc68,0x40);
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010beecec0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_1,param_2,uVar14);
  _objc_release(uVar14);
  lVar13 = *(long *)(param_1 + lVar15);
  func_0x00010beecf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1,param_2,lVar13);
  _objc_release(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = lVar13 + _DAT_11270fdb0;
  _objc_loadWeakRetained(lVar13);
  func_0x00010bfdfd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar13);
  return;
}



/* Entry: 104c94058; end: 104c94093; -[SCFeedHeaderPromptView _didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c94058(long param_1)

{
  param_1 = param_1 + _DAT_11270fdb0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfdfd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c94094; end: 104c940cf; -[SCFeedHeaderPromptView _didTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c94094(long param_1)

{
  param_1 = param_1 + _DAT_11270fdb0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfdfd80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c940d0; end: 104c941bb; -[SCFeedHeaderPromptView _updateFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c940d0(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010c08cdc0();
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar2 = param_1 + -60.0 + -28.0 + -14.0;
  dVar1 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar2,*(undefined8 *)(param_2 + _DAT_11270fdbc));
  dVar3 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar2,*(undefined8 *)(param_2 + _DAT_11270fdc0));
  dVar2 = 20.0;
  if (20.0 <= dVar1 + dVar3) {
    dVar2 = dVar1 + dVar3;
  }
  dVar1 = (double)(float)(int)dVar2;
  dVar3 = dVar1 + 30.0;
  func_0x00010bfb68e0(param_2);
  _CGRectGetMinX();
  dVar2 = dVar1;
  func_0x00010bfb68e0(param_2);
  _CGRectGetMinY();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar1,dVar2,param_1,dVar3,param_2,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 104c941bc; end: 104c94237; -[SCFeedHeaderPromptView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c941bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270fdc4,0);
  _objc_storeStrong(param_1 + _DAT_11270fdb8,0);
  _objc_storeStrong(param_1 + _DAT_11270fdc0,0);
  _objc_storeStrong(param_1 + _DAT_11270fdbc,0);
  _objc_storeStrong(param_1 + _DAT_11270fdb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fdb0);
  return;
}



/* Entry: 104c94238; end: 104c94243; +[SCCCreateBillboardLogSession modulePath] */

undefined ** FUN_104c94238(void)

{
  return &PTR____CFConstantStringClassReference_110dacb78;
}



/* Entry: 104c94244; end: 104c9424b; +[SCCCreateBillboardLogSession asyncStrictMode] */

undefined8 FUN_104c94244(void)

{
  return 0;
}



/* Entry: 104c9424c; end: 104c942c7; -[SCCCreateBillboardLogSession createBillboardLogSessionWithConfig:dispose:] */

void FUN_104c9424c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x000104c94640();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104c94600();
  _objc_release(param_3);
  func_0x000104c94638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c942c8; end: 104c94447; +[SCCCreateBillboardLogSession invokeWithJSRuntimeProvider:config:dispose:completionHandler:] */

void FUN_104c942c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x000104c94640();
  _objc_retain(param_6);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104c943c0;
  puStack_58 = &UNK_1108451b8;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_6);
  func_0x000104c94640();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  func_0x000104c94638();
  _objc_release(param_5);
  func_0x000104c94600();
  _objc_release(param_3);
  return;
}



/* Entry: 104c94448; end: 104c94493;  */

void FUN_104c94448(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  return;
}



/* Entry: 104c94494; end: 104c944b7; +[SCCCreateBillboardLogSession valdiMarshallableObjectDescriptor] */

void FUN_104c94494(undefined8 *param_1)

{
  *param_1 = &PTR_s_createBillboardLogSession_1108451e8;
  param_1[1] = &PTR_s_SCCBillboardLogConfig_110845218;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 104c944b8; end: 104c944c3; +[SCCBillboardFeedHeaderPromptComponent componentPath] */

undefined ** FUN_104c944b8(void)

{
  return &PTR____CFConstantStringClassReference_110dacb98;
}



/* Entry: 104c944c4; end: 104c944e7; -[SCCBillboardFeedHeaderPromptComponent initWithViewModel:componentContext:runtime:] */

void FUN_104c944c4(void)

{
  func_0x000104c94608(PTR_PTR_1126e3830);
  return;
}



/* Entry: 104c944e8; end: 104c9451b; -[SCCBillboardFeedHeaderPromptComponent setViewModel:] */

void FUN_104c944e8(void)

{
  func_0x000104c9461c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104c9462c();
  func_0x000104c94600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104c9451c; end: 104c9455b; -[SCCBillboardFeedHeaderPromptComponent viewModel] */

void FUN_104c9451c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_104c94600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c9455c; end: 104c94567; +[SCCBillboardPromptComponent componentPath] */

undefined ** FUN_104c9455c(void)

{
  return &PTR____CFConstantStringClassReference_110dacbb8;
}



/* Entry: 104c94568; end: 104c9458b; -[SCCBillboardPromptComponent initWithViewModel:componentContext:runtime:] */

void FUN_104c94568(void)

{
  func_0x000104c94608(PTR_PTR_1126e3838);
  return;
}



/* Entry: 104c9458c; end: 104c945bf; -[SCCBillboardPromptComponent setViewModel:] */

void FUN_104c9458c(void)

{
  func_0x000104c9461c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104c9462c();
  func_0x000104c94600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104c945c0; end: 104c945ff; -[SCCBillboardPromptComponent viewModel] */

void FUN_104c945c0(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_104c94600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c94600; end: 104c94647;  */

void FUN_104c94600(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104c94648; end: 104c94673; +[SCCBillboardLogSession valdiMarshallableObjectDescriptor] */

void FUN_104c94648(undefined8 *param_1)

{
  *param_1 = &PTR_s_onForceTweakEnabled_1108452a8;
  param_1[1] = &PTR_s_SCCBillboardLog_110845470;
  param_1[2] = &PTR_s_oobo_v_110845230;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104c94674; end: 104c946a3;  */

undefined8 FUN_104c94674(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1,param_2[3]);
  return 0;
}



/* Entry: 104c946a4; end: 104c946f3;  */

void FUN_104c946a4(void)

{
  func_0x000104c94970();
  func_0x000104c9493c();
  func_0x000104c94914(FUN_104c9485c);
  func_0x000104c94978();
  func_0x000104c94930();
  func_0x000104c94960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c946f4; end: 104c9471f;  */

undefined8 FUN_104c946f4(void)

{
  code *extraout_x8;
  
  func_0x000104c9494c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 104c94720; end: 104c9476f;  */

void FUN_104c94720(void)

{
  func_0x000104c94970();
  func_0x000104c9493c();
  func_0x000104c94914(0x104c94888);
  func_0x000104c94978();
  func_0x000104c94930();
  func_0x000104c94960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c94770; end: 104c94793;  */

undefined8 FUN_104c94770(void)

{
  code *extraout_x8;
  
  func_0x000104c9494c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 104c94794; end: 104c947e3;  */

void FUN_104c94794(void)

{
  func_0x000104c94970();
  func_0x000104c9493c();
  func_0x000104c94914(0x104c948bc);
  func_0x000104c94978();
  func_0x000104c94930();
  func_0x000104c94960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c947e4; end: 104c9480b;  */

undefined8 FUN_104c947e4(void)

{
  code *extraout_x8;
  
  func_0x000104c9494c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 104c9480c; end: 104c9485b;  */

void FUN_104c9480c(void)

{
  func_0x000104c94970();
  func_0x000104c9493c();
  func_0x000104c94914(0x104c948e8);
  func_0x000104c94978();
  func_0x000104c94930();
  func_0x000104c94960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c9485c; end: 104c94913;  */

void FUN_104c9485c(void)

{
  func_0x000104c94980();
  return;
}



/* Entry: 104c94914; end: 104c94987;  */

void FUN_104c94914(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104c94988; end: 104c9498f; -[SCCV3LayoutVariant__Enum init] */

void FUN_104c94988(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 104c94990; end: 104c949d7; -[SCCBillboardFeedHeaderPromptContext initWithOnClick:] */

void FUN_104c94990(void)

{
  func_0x000104c94c8c();
  func_0x000104c94c68();
  func_0x000104c94c50(&stack0xffffffffffffffd0);
  func_0x000104c94c80();
  return;
}



/* Entry: 104c949d8; end: 104c949e7; +[SCCBillboardFeedHeaderPromptContext valdiMarshallableObjectDescriptor] */

void FUN_104c949d8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onClick_110845540;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c949e8; end: 104c94a1b; -[SCCBillboardFeedHeaderPromptViewModel initWithIcon:title:descriptionText:canDismiss:] */

void FUN_104c949e8(void)

{
  func_0x000104c94c58(PTR_PTR_1126e3848);
  func_0x000104c94c40();
  return;
}



/* Entry: 104c94a1c; end: 104c94a2f; +[SCCBillboardFeedHeaderPromptViewModel valdiMarshallableObjectDescriptor] */

void FUN_104c94a1c(undefined8 *param_1)

{
  *param_1 = &PTR_s_icon_1108455a0;
  param_1[1] = &PTR_s_SCCBillboardPromptIconConfig_110845660;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94a30; end: 104c94a5b; -[SCCBillboardPromptBitmojiSceneConfig initWithAvatarId:sceneId:] */

void FUN_104c94a30(void)

{
  func_0x000104c94c58(PTR_PTR_1126e3850);
  func_0x000104c94c40();
  return;
}



/* Entry: 104c94a5c; end: 104c94a6f; +[SCCBillboardPromptBitmojiSceneConfig valdiMarshallableObjectDescriptor] */

void FUN_104c94a5c(undefined8 *param_1)

{
  *param_1 = &PTR_s_avatarId_110845680;
  param_1[1] = &PTR_s_SCComposerBitmoji3DRenderStyle_1108456e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94a70; end: 104c94a9b; -[SCCBillboardPromptBitmojiSelfieConfig initWithAvatarId:userId:] */

void FUN_104c94a70(void)

{
  func_0x000104c94c58(PTR_PTR_1126e3858);
  func_0x000104c94c40();
  return;
}



/* Entry: 104c94a9c; end: 104c94aab; +[SCCBillboardPromptBitmojiSelfieConfig valdiMarshallableObjectDescriptor] */

void FUN_104c94a9c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_avatarId_1108456f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94aac; end: 104c94af3; -[SCCBillboardPromptContext initWithOnClick:] */

void FUN_104c94aac(void)

{
  func_0x000104c94c8c();
  func_0x000104c94c68();
  func_0x000104c94c50(&stack0xffffffffffffffd0);
  func_0x000104c94c80();
  return;
}



/* Entry: 104c94af4; end: 104c94b03; +[SCCBillboardPromptContext valdiMarshallableObjectDescriptor] */

void FUN_104c94af4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onClick_110845750;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94b04; end: 104c94b37; -[SCCBillboardPromptIconConfig init] */

void FUN_104c94b04(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3868;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104c94b38; end: 104c94b4b; +[SCCBillboardPromptIconConfig valdiMarshallableObjectDescriptor] */

void FUN_104c94b38(undefined8 *param_1)

{
  *param_1 = &PTR_s_largeImageUrl_1108457c8;
  param_1[1] = &PTR_s_SCCBillboardPromptBitmojiSelfieC_110845840;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94b4c; end: 104c94b7f; -[SCCBillboardPromptLinkConfig initWithTag:link:] */

void FUN_104c94b4c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3870;
  uStack_20 = param_1;
  func_0x000104c94c68();
  func_0x000104c94c50(&uStack_20);
  return;
}



/* Entry: 104c94b80; end: 104c94b8f; +[SCCBillboardPromptLinkConfig valdiMarshallableObjectDescriptor] */

void FUN_104c94b80(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_tag_110845858;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94b90; end: 104c94bc3; -[SCCBillboardPromptTextConfig initWithText:] */

void FUN_104c94b90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3878;
  uStack_20 = param_1;
  func_0x000104c94c68();
  func_0x000104c94c50(&uStack_20);
  return;
}



/* Entry: 104c94bc4; end: 104c94bd7; +[SCCBillboardPromptTextConfig valdiMarshallableObjectDescriptor] */

void FUN_104c94bc4(undefined8 *param_1)

{
  *param_1 = &PTR_s_text_1108458a0;
  param_1[1] = &PTR_s_SCCBillboardPromptLinkConfig_1108458e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94bd8; end: 104c94c0f; -[SCCBillboardPromptViewModel initWithIcon:title:descriptionText:canDismiss:enableDynamicFont:] */

void FUN_104c94bd8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000104c94c58(PTR_PTR_1126e3880);
  func_0x000104c94c50(auStack_20);
  return;
}



/* Entry: 104c94c10; end: 104c94c97; +[SCCBillboardPromptViewModel valdiMarshallableObjectDescriptor] */

void FUN_104c94c10(undefined8 *param_1)

{
  *param_1 = &PTR_s_icon_1108458f8;
  param_1[1] = &PTR_s_SCCBillboardPromptIconConfig_1108459a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94c98; end: 104c94d0b; -[SCCBillboardLogSurface__Enum init] */

void FUN_104c94c98(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  
  func_0x000104c94e4c();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dab4b8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dab6f8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dabdb8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x000104c94e24();
  func_0x000104c94e6c();
  func_0x000104c94e34();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_48 = FUN_104c94d0c;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000104c94e4c();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dacbd8;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110dacbf8;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000104c94e24();
    func_0x000104c94e6c();
    func_0x000104c94e34();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcStack_88 = FUN_104c94d74;
      puStack_98 = PTR_PTR_1126e3888;
      puStack_a0 = puVar1;
      ppuStack_90 = &puStack_50;
      _objc_msgSendSuper2(&puStack_a0,PTR_s_initWithFieldValues__1125e24b8,0);
    }
  }
  return;
}



/* Entry: 104c94d0c; end: 104c94d73; -[SCCBillboardLogType__Enum init] */

void FUN_104c94d0c(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  
  func_0x000104c94e4c();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dacbd8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dacbf8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104c94e24();
  func_0x000104c94e6c();
  func_0x000104c94e34();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_48 = FUN_104c94d74;
    puStack_58 = PTR_PTR_1126e3888;
    puStack_60 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_60,PTR_s_initWithFieldValues__1125e24b8,0);
  }
  return;
}



/* Entry: 104c94d74; end: 104c94daf; -[SCCBillboardLog initWithType:message:] */

void FUN_104c94d74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3888;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104c94db0; end: 104c94dc3; +[SCCBillboardLog valdiMarshallableObjectDescriptor] */

void FUN_104c94db0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108459b8;
  param_1[1] = &PTR_s_SCCBillboardLogType_110845a18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94dc4; end: 104c94dff; -[SCCBillboardLogConfig initWithSurface:] */

void FUN_104c94dc4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3890;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104c94e00; end: 104c94e77; +[SCCBillboardLogConfig valdiMarshallableObjectDescriptor] */

void FUN_104c94e00(undefined8 *param_1)

{
  *param_1 = &PTR_s_surface_110845a28;
  param_1[1] = &PTR_s_SCCBillboardLogSurface_110845a70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104c94e78; end: 104c94edf; +[SCBillboardPbHoldoutElementList descriptor] */

void FUN_104c94e78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b88f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f1400,
                        &PTR____CFConstantStringClassReference_110dacc18,
                        &PTR_s_com_snapchat_billboard_1130ab1c0,&PTR_s_categoriesArray_1130ab1d8,2,
                        0x18,0x1c);
    puRam00000001136b88f8 = puVar1;
  }
  return;
}



/* Entry: 104c94ee0; end: 104c9508f; -[SCBillboardProfileActivityCardEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c94ee0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aea88;
  _objc_alloc(PTR_PTR_1126aea88);
  lVar3 = param_1 + _DAT_11270fdc8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11270fdcc;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f0920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f960(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  param_1 = param_1 + _DAT_11270fdd0;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104c95090; end: 104c950cf;  */

void FUN_104c95090(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc43c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c950d0; end: 104c951c3; -[SCBillboardProfileActivityCardEntryPoint _actionHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c950d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  if (param_1 == 0) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11270fdd4;
    _objc_loadWeakRetained();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11270fdd8);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104c95210;
  puStack_48 = &UNK_110844e40;
  lStack_40 = lVar3;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(lVar3);
  func_0x00010bf9d5c0(uVar4,param_2,&PTR___NSConcreteGlobalBlock_110845a80,&puStack_60);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(lStack_40);
  _objc_release(puVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c951c4; end: 104c9520f;  */

void FUN_104c951c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae9f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c95210; end: 104c95277;  */

void FUN_104c95210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_2);
  _objc_release(uVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c95278; end: 104c952d7; -[SCBillboardProfileActivityCardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c95278(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270fdd8,0);
  _objc_destroyWeak(param_1 + _DAT_11270fdc8);
  _objc_destroyWeak(param_1 + _DAT_11270fdd4);
  _objc_destroyWeak(param_1 + _DAT_11270fdcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fdd0);
  return;
}



/* Entry: 104c952d8; end: 104c95343; -[SCBillboardProfileActivityCardSectionActionHandler initWithDelegate:] */

undefined1 * FUN_104c952d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3898;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c95344; end: 104c95483; -[SCBillboardProfileActivityCardSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_104c95344(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar6 = 0;
      goto LAB_104c95464;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  uVar3 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  if ((int)uVar2 == 0) {
    func_0x00010bf83c20();
  }
  else {
    func_0x00010c2690a0();
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar6 = 1;
LAB_104c95464:
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 104c95484; end: 104c9549b; -[SCBillboardProfileActivityCardSectionActionHandler presentingViewController] */

void FUN_104c95484(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c9549c; end: 104c954a7; -[SCBillboardProfileActivityCardSectionActionHandler setPresentingViewController:] */

void FUN_104c9549c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104c954a8; end: 104c954cf; -[SCBillboardProfileActivityCardSectionActionHandler .cxx_destruct] */

void FUN_104c954a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104c954d0; end: 104c95587; -[SCBillboardProfileActivityCardSectionDataProvider initWithResourceDownloader:delegate:] */

undefined1 *
FUN_104c954d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e38a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    puVar3 = PTR_PTR_1126aea90;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c95588; end: 104c95593; +[SCBillboardProfileActivityCardSectionDataProvider announcerIdentifier] */

undefined ** FUN_104c95588(void)

{
  return &PTR____CFConstantStringClassReference_110daccb8;
}



/* Entry: 104c95594; end: 104c9559b; -[SCBillboardProfileActivityCardSectionDataProvider addListener:] */

void FUN_104c95594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104c9559c; end: 104c955a3; -[SCBillboardProfileActivityCardSectionDataProvider removeListener:] */

void FUN_104c9559c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104c955a4; end: 104c9561b; -[SCBillboardProfileActivityCardSectionDataProvider setSectionDataModel:] */

void FUN_104c955a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar2);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c09bcc0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf96740(uVar2,param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104c9561c; end: 104c95623; -[SCBillboardProfileActivityCardSectionDataProvider numberOfItemsInSection:] */

void FUN_104c9561c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_count_1125b2420);
  return;
}



/* Entry: 104c95624; end: 104c956b7; -[SCBillboardProfileActivityCardSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104c95624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    func_0x00010bdcfca0(param_1);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104c956b8;
  puStack_30 = &UNK_110845ab0;
  uVar1 = param_3;
  lStack_28 = param_1;
  func_0x000100504554(param_3,&puStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c956b8; end: 104c9587f;  */

void FUN_104c956b8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0840e0(param_2);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar10;
    func_0x00010c077da0();
    bVar2 = (int)lVar3 == 0;
    uVar12 = 0x4045000000000000;
    if (bVar2) {
      uVar12 = 0x4038000000000000;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dacc98;
    if (bVar2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dacc78;
    }
    _objc_retain(ppuVar1);
    lVar3 = lVar10;
    func_0x00010c2711a0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c260dc0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010c08e780(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c22e200(lVar10);
    lVar7 = lVar10;
    func_0x00010beecec0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010bf2bea0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x000108f637e0(uVar12,lVar3,lVar4,lVar5,lVar6,
                        &PTR____CFConstantStringClassReference_110dacc38,
                        &PTR____CFConstantStringClassReference_110dacc58,lVar7,lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar11 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
    _objc_release(ppuVar1);
    _objc_release(lVar9);
  }
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



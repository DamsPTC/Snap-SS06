/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10857722c; end: 1085775b7; -[SCVideoTranscodingRequestScheduler submitVideoTranscodingRequestWithInput:output:outputHandler:progressHandler:statusHandler:] */

void FUN_10857722c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    _objc_retain(0);
LAB_108577554:
    _objc_retain(0);
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 8);
    _objc_retain(lVar6);
    if (lVar6 == 0) goto LAB_108577554;
    lVar7 = *(long *)(lVar6 + 8);
    _objc_retain(lVar7);
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + 8);
      goto LAB_1085772b8;
    }
  }
  lVar8 = 0;
LAB_1085772b8:
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x20);
  }
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    if (param_3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_3 + 0x10);
    }
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf58060();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_68,param_1 + 0x10);
      lVar6 = param_1;
      func_0x00010be4b100();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_70,param_1);
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,auStack_70);
      _objc_retain(param_3);
      _objc_retain(lVar6);
      _objc_retain(param_7);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_4);
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(uVar3);
      func_0x00010c0f88c0(param_1);
      _objc_release(param_1);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_78);
      _objc_release(param_4);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_7);
      _objc_release(lVar6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_70);
      _objc_release(lVar6);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085775b8; end: 108577857;  */

void FUN_1085775b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  ppuVar8 = &puStack_e0;
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c29bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108577858;
  puStack_78 = &UNK_110a557b8;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  lStack_70 = lVar2;
  _objc_retain(uVar10);
  lVar4 = lVar3;
  uStack_68 = uVar10;
  func_0x00010bf04920();
  _objc_release(lVar3);
  _objc_release(lVar5);
  if ((int)lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      lVar5 = *(long *)(param_1 + 0x40);
      uStack_b0 = 0;
      if (lVar5 != 0) {
        puVar6 = PTR_PTR_1126da000;
        _objc_alloc(PTR_PTR_1126da000);
        puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(puVar7);
        func_0x00010c035860(0,puVar6);
        (**(code **)(lVar5 + 0x10))(lVar5,puVar6);
        _objc_release(puVar6);
        uStack_b0 = *(undefined8 *)(param_1 + 0x40);
      }
      puStack_e0 = puVar1;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_1085778a0;
      puStack_c8 = &UNK_110a557e8;
      _objc_retain(uStack_b0);
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar10);
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      uStack_a8 = uVar10;
      _objc_retain(uVar9);
      uStack_a0 = uVar9;
      _objc_copyWeak(auStack_98,param_1 + 0x58);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar10);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      uStack_c0 = uVar10;
      _objc_retain(uVar9);
      uStack_b8 = uVar9;
      _objc_retainBlock(&puStack_e0);
      lVar5 = lVar2;
      func_0x00010c0f7a60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(lVar5);
      _objc_release(ppuVar8);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      _objc_destroyWeak(auStack_98);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      goto LAB_108577814;
    }
  }
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a6ea0();
  _objc_release(param_1);
  func_0x00010be0be80(lVar2);
LAB_108577814:
  _objc_release(uStack_68);
  _objc_release(lVar2);
  return;
}



/* Entry: 108577858; end: 10857789f;  */

bool FUN_108577858(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be4b100(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 1085778a0; end: 10857796f;  */

void FUN_1085778a0(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010c25f900(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar1 = 1;
    FUN_108577970(1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,1,0,0);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108577924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(0x3f800000);
    return;
  }
  return;
}



/* Entry: 108577970; end: 108577a23;  */

void FUN_108577970(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  
  uVar5 = 9;
  if (param_1 != 1) {
    uVar5 = 7;
  }
  uVar1 = 8;
  if (param_1 != 2) {
    uVar1 = uVar5;
  }
  puVar2 = PTR_PTR_1126da000;
  _objc_alloc(PTR_PTR_1126da000);
  dVar4 = 0.0;
  uVar5 = 0x3ff0000000000000;
  if (param_1 != 0) {
    uVar5 = 0;
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  func_0x00010c035860(uVar5,puVar2,param_2,uVar1,0,(long)(dVar4 * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108577a24; end: 108577aa7;  */

void FUN_108577a24(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  _objc_copyWeak(param_1 + 0x58,param_2 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 108577aa8; end: 108577ba3; -[SCVideoTranscodingRequestScheduler cancelRequestWithInput:] */

void FUN_108577aa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108577ba4; end: 108577c8b;  */

void FUN_108577ba4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c29bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf2dba0(lVar2);
  lVar1 = param_1;
  func_0x00010c0f7a60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,1);
    lVar1 = param_1;
    func_0x00010c0f7a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108577c8c; end: 108577f23; -[SCVideoTranscodingRequestScheduler _executeWithInput:processor:outputHandler:progressHandler:statusHandler:] */

void FUN_108577c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
  _objc_copyWeak(auStack_68,param_1 + 0x10);
  lVar3 = param_1;
  func_0x00010c29bae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar3);
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010c0bb760(lVar3);
  _objc_initWeak(auStack_70,param_1);
  _objc_retain(lVar3);
  _objc_retain(puVar4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(lVar1);
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_78,auStack_68);
  func_0x00010c1156e0(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108577f24; end: 108578077;  */

void FUN_108577f24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0bb740(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uVar1 = param_2;
    FUN_108577970(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3,param_4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_48,param_1 + 0x58);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108578078; end: 1085781a7;  */

void FUN_108578078(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c29bae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c0f7a60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = lVar1;
    func_0x00010c0f7a60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0f7a60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(lVar2);
    (**(code **)(lVar3 + 0x10))(lVar3,0);
    _objc_release(lVar3);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75ca0();
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085781a8; end: 108578273;  */

void FUN_1085781a8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  _objc_copyWeak(param_1 + 0x50,param_2 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 108578274; end: 10857835f; -[SCVideoTranscodingRequestScheduler _lensIdsFromInput:] */

void FUN_108578274(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(0);
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 8);
    _objc_retain(lVar2);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      goto LAB_1085782a8;
    }
  }
  lVar3 = 0;
LAB_1085782a8:
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bfb2660(lVar3,param_2,&PTR___NSConcreteGlobalBlock_110a55898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = lVar1;
  if (lVar2 == 0) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(param_3 + 0x10);
    }
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bfb2660(lVar2,param_2,&PTR___NSConcreteGlobalBlock_110a55918);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108578360; end: 1085783b7;  */

void FUN_108578360(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
  }
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bfb2660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085783b8; end: 1085784d7;  */

void FUN_1085783b8(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x000107c318f8(param_2,PTR_DAT_1126a5af8);
  puVar1 = param_2;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010c094660(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085784d8; end: 1085784df;  */

void FUN_1085784d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 1085784e0; end: 1085784e7; -[SCVideoTranscodingRequestScheduler performer] */

undefined8 FUN_1085784e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085784e8; end: 108578517; -[SCVideoTranscodingRequestScheduler setPerformer:] */

void FUN_1085784e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108578518; end: 10857851f; -[SCVideoTranscodingRequestScheduler videoTranscodingProcessors] */

undefined8 FUN_108578518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108578520; end: 10857854f; -[SCVideoTranscodingRequestScheduler setVideoTranscodingProcessors:] */

void FUN_108578520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108578550; end: 108578557; -[SCVideoTranscodingRequestScheduler pendingTranscodingRequests] */

undefined8 FUN_108578550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108578558; end: 108578587; -[SCVideoTranscodingRequestScheduler setPendingTranscodingRequests:] */

void FUN_108578558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108578588; end: 1085785e3; -[SCVideoTranscodingRequestScheduler .cxx_destruct] */

void FUN_108578588(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085785e4; end: 108578727; -[SCVideoTranscodingTaskItem initWithTaskId:videoAsset:assetAudioMix:outputURL:assetReaderCompositionOutputBuilder:processedReason:] */

undefined1 *
FUN_1085785e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fcd38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108578728; end: 108578827; -[SCVideoTranscodingTaskItem initStaticImageTaskWithTaskId:inputImage:inputImageFrameRate:inputImageDuration:outputURL:processedReason:] */

undefined1 *
FUN_108578728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fcd38;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    *(undefined8 *)((long)puVar1 + 0x48) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108578828; end: 10857882f; -[SCVideoTranscodingTaskItem taskId] */

undefined8 FUN_108578828(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108578830; end: 108578837; -[SCVideoTranscodingTaskItem videoAsset] */

undefined8 FUN_108578830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108578838; end: 10857883f; -[SCVideoTranscodingTaskItem assetAudioMix] */

undefined8 FUN_108578838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108578840; end: 108578847; -[SCVideoTranscodingTaskItem outputURL] */

undefined8 FUN_108578840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108578848; end: 10857884f; -[SCVideoTranscodingTaskItem assetReaderCompositionOutputBuilder] */

undefined8 FUN_108578848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108578850; end: 108578857; -[SCVideoTranscodingTaskItem processedReason] */

undefined8 FUN_108578850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108578858; end: 10857885f; -[SCVideoTranscodingTaskItem inputImage] */

undefined8 FUN_108578858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108578860; end: 108578867; -[SCVideoTranscodingTaskItem inputImageFrameRate] */

undefined8 FUN_108578860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108578868; end: 10857886f; -[SCVideoTranscodingTaskItem inputImageDuration] */

undefined8 FUN_108578868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108578870; end: 1085788cf; -[SCVideoTranscodingTaskItem .cxx_destruct] */

void FUN_108578870(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085788d0; end: 108578977; -[SCVideoTranscodingSegmentPreprocessSegmentReverse initWithTranscodingConfiguration:transcodingLogger:] */

undefined1 *
FUN_1085788d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fcd40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108578978; end: 108578bbf; -[SCVideoTranscodingSegmentPreprocessSegmentReverse processSegments:onCompletion:] */

void FUN_108578978(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _dispatch_group_create();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_108578bc0;
  uStack_88 = 0x108578bd0;
  uStack_80 = 0;
  puStack_a0 = &uStack_a8;
  for (uVar6 = 0; uVar4 = param_3, func_0x00010bf529e0(), uVar6 < uVar4; uVar6 = uVar6 + 1) {
    uVar4 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar4 != 0) && (*(double *)(uVar4 + 0x30) < 0.0)) {
      _dispatch_group_enter(puVar3);
      puStack_f0 = puVar1;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_108578bd8;
      puStack_d8 = &UNK_110a55958;
      uStack_d0 = param_1;
      _objc_retain(puVar2);
      uStack_b0 = (undefined4)uVar6;
      puStack_c8 = puVar2;
      puStack_b8 = &uStack_a8;
      _objc_retain(puVar3);
      puStack_c0 = puVar3;
      func_0x00010be972c0(param_1);
      _objc_release(puStack_c0);
      _objc_release(puStack_c8);
    }
    _objc_release(uVar4);
  }
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_108578c80;
  puStack_110 = &UNK_110883360;
  puStack_f8 = &uStack_a8;
  puStack_108 = puVar2;
  uStack_100 = param_4;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  func_0x000100bc0718(puVar3,uVar5,&puStack_128);
  _objc_release(uVar5);
  _objc_release(puStack_108);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 108578bc0; end: 108578bd7;  */

void FUN_108578bc0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108578bd8; end: 108578c7f;  */

void FUN_108578bd8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _os_unfair_lock_lock(*(long *)(param_1 + 0x20) + 8);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    if (*(long *)(lVar2 + 0x28) == 0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
      *(long *)(lVar2 + 0x28) = param_3;
      _objc_release(uVar1);
    }
  }
  else {
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x28));
  }
  _os_unfair_lock_unlock(*(long *)(param_1 + 0x20) + 8);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108578c80; end: 108578cab;  */

void FUN_108578c80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108578c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108578ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108578cac; end: 108578e4f; -[SCVideoTranscodingSegmentPreprocessSegmentReverse _reverseSegmentMedia:completionHandler:] */

void FUN_108578cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e04938);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126da198;
  _objc_alloc(PTR_PTR_1126da198);
  func_0x00010c043940();
  _objc_release(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108578e50;
  puStack_70 = &UNK_110a55988;
  puStack_68 = puVar4;
  uStack_60 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(puVar4);
  func_0x00010c1156a0(puVar3,param_2,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(puStack_68);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 108578e50; end: 108578f23;  */

void FUN_108578e50(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar4 = *(long *)(param_1 + 0x30);
    pcVar6 = *(code **)(lVar4 + 0x10);
    lVar5 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f5800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf0e880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad040();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x30);
    pcVar6 = *(code **)(lVar4 + 0x10);
    param_3 = 0;
    lVar5 = param_2;
  }
  (*pcVar6)(lVar4,lVar5,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108578f24; end: 108578f53; -[SCVideoTranscodingSegmentPreprocessSegmentReverse .cxx_destruct] */

void FUN_108578f24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108578f54; end: 108578ff7; -[SCImageProcessCommandProviderRequestInnerMapper initWithRequest:mapper:] */

undefined1 *
FUN_108578f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fcd48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108578ff8; end: 10857900f; -[SCImageProcessCommandProviderRequestInnerMapper commandForFilterName:filterConfig:fallbackImageProcessCommand:] */

void FUN_108578ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_commandForRequest_filterName_fil_1125ae0b8,
             *(undefined8 *)(param_1 + 8),param_3,param_4,param_5);
  return;
}



/* Entry: 108579010; end: 10857901f; -[SCImageProcessCommandProviderRequestInnerMapper commandForLensId:] */

void FUN_108579010(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_commandForRequest_lensId__1125ae0c8,
             *(undefined8 *)(param_1 + 8),param_3);
  return;
}



/* Entry: 108579020; end: 10857902f; -[SCImageProcessCommandProviderRequestInnerMapper commandForImageProcessCommand:] */

void FUN_108579020(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_commandForRequest_imageProcessCo_1125ae0c0,
             *(undefined8 *)(param_1 + 8),param_3);
  return;
}



/* Entry: 108579030; end: 108579037; -[SCImageProcessCommandProviderRequestInnerMapper request] */

undefined8 FUN_108579030(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108579038; end: 108579067; -[SCImageProcessCommandProviderRequestInnerMapper setRequest:] */

void FUN_108579038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108579068; end: 10857906f; -[SCImageProcessCommandProviderRequestInnerMapper mapper] */

undefined8 FUN_108579068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108579070; end: 10857909f; -[SCImageProcessCommandProviderRequestInnerMapper setMapper:] */

void FUN_108579070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085790a0; end: 1085790cf; -[SCImageProcessCommandProviderRequestInnerMapper .cxx_destruct] */

void FUN_1085790a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085790d0; end: 10857927b; -[SCImageProcessCommandProviderRequest mappedCommandsWithMapper:] */

void FUN_1085790d0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da1a0;
  _objc_alloc();
  func_0x00010c03ec60();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar2 = param_1;
  func_0x00010bf96fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar3,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x00010bf96fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar4 = *(long *)(lStack_128 + lVar7 * 8);
        func_0x00010bfc6460(lVar4,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010befa120(puVar3,param_2,lVar4);
        }
        _objc_release(lVar4);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_6);
    _objc_retain(puVar5);
    _objc_alloc(param_3);
    func_0x00010c055ac0();
    _objc_release(param_6);
    _objc_release(puVar5);
    puVar3 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10857927c; end: 108579307; +[SCImageProcessCommandProviderRequest videoRequestWithEntries:isSpectacles:isSnapEditor:lensCommandMetadata:isExportMode:] */

void FUN_10857927c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c055ac0();
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108579308; end: 10857936f; +[SCImageProcessCommandProviderRequest videoThumbnailRequestWithEntries:isSpectacles:] */

void FUN_108579308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c055ac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108579370; end: 1085793cb; +[SCImageProcessCommandProviderRequest imageRequestWithEntries:] */

void FUN_108579370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c055ac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085793cc; end: 108579427; +[SCImageProcessCommandProviderRequest imageExportRequestWithEntries:] */

void FUN_1085793cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c055ac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108579428; end: 1085794a3; +[SCImageProcessCommandProviderRequest imageRequestWithEntries:isSpectacles:lensCommandMetadata:] */

void FUN_108579428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c055ac0();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085794a4; end: 108579593; -[SCImageProcessCommandProviderRequestDictionaryCommand initWithFilterName:filterConfig:fallbackImageProcessCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1085794a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fcd50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127766a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127766a4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127766a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127766a8) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127766ac;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108579594; end: 1085795bb; -[SCImageProcessCommandProviderRequestDictionaryCommand getImageProcessCommandUsingMapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579594(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_commandForFilterName_filterConfi_1125ae098,
             *(undefined8 *)(param_1 + _DAT_1127766a4),*(undefined8 *)(param_1 + _DAT_1127766a8),
             *(undefined8 *)(param_1 + _DAT_1127766ac));
  return;
}



/* Entry: 1085795bc; end: 1085795cb; -[SCImageProcessCommandProviderRequestDictionaryCommand filterName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085795bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127766a4);
}



/* Entry: 1085795cc; end: 1085795d7; -[SCImageProcessCommandProviderRequestDictionaryCommand setFilterName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085795cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085795d8; end: 1085795e7; -[SCImageProcessCommandProviderRequestDictionaryCommand filterConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085795d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127766a8);
}



/* Entry: 1085795e8; end: 1085795f3; -[SCImageProcessCommandProviderRequestDictionaryCommand setFilterConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085795e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085795f4; end: 108579603; -[SCImageProcessCommandProviderRequestDictionaryCommand fallbackImageProcessCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085795f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127766ac);
}



/* Entry: 108579604; end: 108579643; -[SCImageProcessCommandProviderRequestDictionaryCommand setFallbackImageProcessCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127766ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108579644; end: 108579693; -[SCImageProcessCommandProviderRequestDictionaryCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579644(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127766ac,0);
  _objc_storeStrong(param_1 + _DAT_1127766a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127766a4,0);
  return;
}



/* Entry: 108579694; end: 10857972b; -[SCImageProcessCommandProviderRequestLensCommand initWithLensId:needWarmUp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108579694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fcd58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127766b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127766b0) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127766b4) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10857972c; end: 108579743; -[SCImageProcessCommandProviderRequestLensCommand getImageProcessCommandUsingMapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857972c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_commandForLensId__1125ae0a8,*(undefined8 *)(param_1 + _DAT_1127766b0));
  return;
}



/* Entry: 108579744; end: 108579753; -[SCImageProcessCommandProviderRequestLensCommand lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108579744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127766b0);
}



/* Entry: 108579754; end: 10857975f; -[SCImageProcessCommandProviderRequestLensCommand setLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579754(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108579760; end: 10857976f; -[SCImageProcessCommandProviderRequestLensCommand needWarmUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108579760(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127766b4);
}



/* Entry: 108579770; end: 10857977f; -[SCImageProcessCommandProviderRequestLensCommand setNeedWarmUp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579770(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127766b4) = param_3;
  return;
}



/* Entry: 108579780; end: 108579793; -[SCImageProcessCommandProviderRequestLensCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127766b0,0);
  return;
}



/* Entry: 108579794; end: 108579817; -[SCImageProcessCommandProviderRequestStaticCommand initWithImageProcessCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108579794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fcd60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127766a0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108579818; end: 10857982f; -[SCImageProcessCommandProviderRequestStaticCommand getImageProcessCommandUsingMapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579818(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_commandForImageProcessCommand__1125ae0a0,
             *(undefined8 *)(param_1 + _DAT_1127766a0));
  return;
}



/* Entry: 108579830; end: 10857983f; -[SCImageProcessCommandProviderRequestStaticCommand imageProcessCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108579830(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127766a0);
}



/* Entry: 108579840; end: 10857987f; -[SCImageProcessCommandProviderRequestStaticCommand setImageProcessCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127766a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108579880; end: 108579893; -[SCImageProcessCommandProviderRequestStaticCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108579880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127766a0,0);
  return;
}



/* Entry: 108579894; end: 10857989b; +[SCImageProcessCommandProviderRequestEntry entryWithFilterName:] */

void FUN_108579894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_entryWithFilterName_filterConfig_1125c37f0,param_3,0);
  return;
}



/* Entry: 10857989c; end: 10857990b; +[SCImageProcessCommandProviderRequestEntry entryWithFilterName:filterConfig:] */

void FUN_10857989c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da1a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013200();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10857990c; end: 10857995b; +[SCImageProcessCommandProviderRequestEntry entryWithLensId:] */

void FUN_10857990c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da1b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c024840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10857995c; end: 1085799b7; +[SCImageProcessCommandProviderRequestEntry entryWithLensId:needWarmUp:] */

void FUN_10857995c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da1b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c024840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085799b8; end: 108579a03; +[SCImageProcessCommandProviderRequestEntry entryWithImageProcessCommand:] */

void FUN_1085799b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da1b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01cc20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108579a04; end: 108579a73; +[SCImageProcessCommandProviderRequestEntry entryWithFilterName:fallbackImageProcessCommand:] */

void FUN_108579a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da1a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013200();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108579a74; end: 108579a7b; -[SCImageProcessCommandProviderRequestEntry getImageProcessCommandUsingMapper:] */

undefined8 FUN_108579a74(void)

{
  return 0;
}



/* Entry: 108579a7c; end: 108579d67; -[SCNGSMEBasePlayer initWithPlayerModel:playerProvider:audioSession:circumstanceEngine:firstFrameImage:playbackLogger:preparePerformer:] */

undefined1 *
FUN_108579a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fcd68;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x138);
    *(undefined8 *)((long)puVar1 + 0x138) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = param_4;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 0x138) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)((long)puVar1 + 0x138) + 0x18);
    }
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x7c) = 0x3f800000;
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = uRam000000011332ebe8;
    *(undefined8 *)((long)puVar1 + 0x160) = uRam000000011332ebf0;
    *(undefined8 *)((long)puVar1 + 0x158) = uVar2;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined8 *)((long)puVar1 + 200) = param_6;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x110) = (char)uVar2;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar4;
    _objc_release(uVar2);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010be0aec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined1 **)((long)puVar1 + 0xd0) = puVar5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x140);
    *(undefined8 *)((long)puVar1 + 0x140) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xe1) = 0;
    puVar4 = PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + 0xf8) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar1 + 0xf0) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x100) = *(undefined8 *)(puVar4 + 0x10);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x108);
    *(undefined8 *)((long)puVar1 + 0x108) = param_9;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x118);
    *(undefined **)((long)puVar1 + 0x118) = puVar4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x120) = 0;
    puVar4 = PTR_PTR_1126da1c0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x128);
    *(undefined **)((long)puVar1 + 0x128) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108579d68; end: 108579ddb; -[SCNGSMEBasePlayer dealloc] */

void FUN_108579d68(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c0ac5c0(*(undefined8 *)(param_1 + 0x140));
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c12eb40(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c12eb40(*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
  puStack_28 = PTR_PTR_1126fcd68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108579ddc; end: 108579e3b; -[SCNGSMEBasePlayer _currentStatus] */

undefined8 FUN_108579ddc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x98) == 2) {
    return 5;
  }
  if (*(long *)(param_1 + 0x90) == 1) {
    return 3;
  }
  if (*(long *)(param_1 + 0x88) == 2) {
    return 4;
  }
  if (*(long *)(param_1 + 0x88) == 1) {
    uVar1 = 2;
    if (*(float *)(param_1 + 0xa0) == 0.0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 108579e3c; end: 108579f33; -[SCNGSMEBasePlayer _generateAndPublishCurrentStateWithTimestamp:] */

void FUN_108579e3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = param_1;
  func_0x00010bdf7220();
  lVar3 = *(long *)(param_1 + 0xe8);
  *(long *)(param_1 + 0xe8) = lVar1;
  if (((*(byte *)(param_1 + 0xe1) & 1) == 0) && (lVar1 == 2)) {
    lVar2 = param_1;
    func_0x00010c0ff700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac5e0();
    _objc_release(lVar2);
    func_0x00010be87900(param_1);
    *(undefined1 *)(param_1 + 0xe1) = 1;
    func_0x00010be841e0(param_1);
  }
  uStack_48 = lVar1 != lVar3;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108579f34;
  puStack_78 = &UNK_1108e73d8;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  lStack_70 = param_1;
  lStack_68 = lVar1;
  func_0x000107c312cc("APPSTORE",&puStack_90);
  return;
}



/* Entry: 108579f34; end: 10857a053;  */

void FUN_108579f34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = 0x20;
  if (1 < *(long *)(param_1 + 0x28) - 5U) {
    lVar4 = 8;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010bf987e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR_PTR_1126bf5d8;
  _objc_alloc(PTR_PTR_1126bf5d8);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined4 *)(lVar4 + 0xa0);
  func_0x00010be0af20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar7;
  func_0x00010be7f780(uVar5);
  func_0x00010be18f20(*(undefined8 *)(param_1 + 0x20));
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010af1f234(uVar8,uVar7,puVar3,uVar1,&uStack_80,lVar4,uVar5);
  func_0x00010be84480(uVar6);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 10857a054; end: 10857a09b; -[SCNGSMEBasePlayer _generateAndPublishCurrentState] */

void FUN_10857a054(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bdd88a0(&uStack_38);
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  func_0x00010be1a900(param_1,param_2,&uStack_50);
  return;
}



/* Entry: 10857a09c; end: 10857a0ef; -[SCNGSMEBasePlayer _calculatePublishTime] */

void FUN_10857a09c(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010bf60480(auStack_38);
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeMaximum(param_1,auStack_38,&uStack_50);
  return;
}



/* Entry: 10857a0f0; end: 10857a14b; -[SCNGSMEBasePlayer _publishState:] */

void FUN_10857a0f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0xa8));
  if ((uVar1 & 1) == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(ulong *)(param_1 + 0xa8) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10857a14c; end: 10857a267; -[SCNGSMEBasePlayer _errorDomainPrefix] */

void FUN_10857a14c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c100cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_retain(uVar2);
  func_0x00010bf97e80(uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(puStack_38 + 3) == '\x01') {
    func_0x00010bf070e0(puVar1);
  }
  __Block_object_dispose(&uStack_40,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10857a268; end: 10857a377;  */

void FUN_10857a268(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
  }
  _objc_retain(uVar1);
  func_0x00010bf97e80(uVar1);
  _objc_release(uVar1);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
    *param_4 = 1;
  }
  return;
}



/* Entry: 10857a378; end: 10857a463; -[SCNGSMEBasePlayer _errorForRawError:] */

void FUN_10857a378(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf3ec40(param_3);
    _objc_release(param_3);
    func_0x00010bf99260(puVar5,param_2,puVar2,lVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    puVar6 = puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10857a464; end: 10857a853; -[SCNGSMEBasePlayer _observePlayerAndItem] */

void FUN_10857a464(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _CMTimeMake(auStack_98,0x411a,1000000);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10857a854;
  puStack_a8 = &UNK_1108d04a8;
  _objc_copyWeak(auStack_a0,auStack_80);
  func_0x00010befa7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar2;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10857a888;
  puStack_d0 = &UNK_110929a90;
  _objc_copyWeak(auStack_c8,auStack_80);
  func_0x00010c0e0780(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar2;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x10857a9d4;
  puStack_f8 = &UNK_11086ffc8;
  _objc_copyWeak(auStack_f0,auStack_80);
  func_0x00010c0e0780(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar2;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x10857ab20;
  puStack_120 = &UNK_11086ffc8;
  _objc_copyWeak(auStack_118,auStack_80);
  func_0x00010c0e0780(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_140,auStack_80);
  func_0x00010c0e0780(uVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 10857a854; end: 10857a887;  */

void FUN_10857a854(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be1a8e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857a888; end: 10857adf3;  */

void FUN_10857a888(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_3,*(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500;
    uVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    if (uVar1 == uVar2) {
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      if (uVar2 == 0) {
        _objc_release();
        _objc_release(uVar1);
      }
      else {
        uVar3 = uVar1;
        func_0x00010c071ae0(uVar1,param_3,uVar2);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) != 0) goto LAB_10857a9b4;
      }
      uVar1 = param_5;
      func_0x00010c0e00e0(param_5,param_3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      *(undefined4 *)(param_2 + 0xa0) = param_1;
      _objc_release(uVar1);
      func_0x00010be1a8e0(param_2);
    }
  }
LAB_10857a9b4:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



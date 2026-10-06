/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105852f0c; end: 105852f6f;  */

void FUN_105852f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105852f70; end: 1058532f3;  */

void FUN_105852f70(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfb8160(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100504554();
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010c29f740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fd80();
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c2bf200(param_4);
  uVar6 = (ulong)(uint)(float)param_1;
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010c29f740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227aa0(uVar6);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bf330;
  _objc_alloc_init(PTR_PTR_1126bf330);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010c29f740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16fbe0();
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bc210;
  _objc_alloc_init(PTR_PTR_1126bc210);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010c29f740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf178c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7ca0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010c2644a0(param_4);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010c29f740(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf178c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f07a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9120(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010c2644a0(param_4);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  uVar5 = param_2;
  func_0x00010c29f740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf178c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f07a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5e0(param_2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bc210;
  _objc_alloc_init(PTR_PTR_1126bc210);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010c29f740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf178c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7cc0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010c0d6e80(param_4);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010c29f740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf178c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f07c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9120(param_2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0d6e80(param_4);
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010c29f740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf178c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0f07c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5e0(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058532f4; end: 105853357;  */

void FUN_1058532f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105853358; end: 105853777;  */

void FUN_105853358(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_4);
  func_0x00010bf51c80(param_4);
  dVar3 = (double)(ulong)(uint)(float)param_2;
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010bfc15a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a7c0(dVar3);
  _objc_release(uVar1);
  func_0x00010bf51c80(param_4);
  dVar3 = (double)(ulong)(uint)(float)dVar3;
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010bfc15a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a7a0(dVar3);
  _objc_release(uVar1);
  func_0x00010c11ef80(param_4);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010bfc15a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6e60((float)dVar3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c2709c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010bfc15a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215dc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c28b680();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  func_0x00010bfc15a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105853778; end: 10585384f;  */

void FUN_105853778(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126bf338;
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_alloc_init(puVar4);
    func_0x00010bfeba60(param_1);
    func_0x00010c166e00(puVar4);
    lVar1 = param_1;
    func_0x00010bfb8220(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100504554();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    func_0x00010c19fd80(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1353a0(param_1);
    _objc_release(param_1);
    func_0x00010c1ebbe0(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105853850; end: 1058538b3;  */

void FUN_105853850(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058538b4; end: 1058539d7;  */

void FUN_1058538b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  puVar3 = (undefined *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bfb7dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1058539d8;
    puStack_60 = &UNK_1108b7c50;
    _objc_retain(param_2);
    lVar2 = lVar1;
    lStack_58 = param_2;
    func_0x000100504554(lVar1,&puStack_78);
    puVar3 = PTR_PTR_1126bf280;
    _objc_alloc(PTR_PTR_1126bf280);
    func_0x00010c261740(param_1);
    func_0x00010c1348c0(param_1);
    _objc_release(param_1);
    func_0x00010c0154e0(puVar3);
    _objc_release(lVar2);
    _objc_release(lStack_58);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058539d8; end: 1058539e7;  */

void FUN_1058539d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b9750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_mapPersonLocationClusterWithCurr_11260bfe8,
             *(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1058539e8; end: 105853a5f;  */

void FUN_1058539e8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b7e50,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105853a60; end: 105853ad7;  */

void FUN_105853a60(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b7ea0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105853ad8; end: 105853b4f;  */

void FUN_105853ad8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b7ef0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105853b50; end: 105853bc7;  */

void FUN_105853b50(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b7f40,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105853bc8; end: 105853cdf;  */

void FUN_105853bc8(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f301e6e;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f301e73;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108b7f90;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108b7f90,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_105853ce0;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_1108b7fe0,&uStack_b0,param_2);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 105853ce0; end: 105853d57;  */

void FUN_105853ce0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b7fe0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105853d58; end: 105853dcf;  */

void FUN_105853d58(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b8030,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105853dd0; end: 105853ee7;  */

void FUN_105853dd0(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  long *plStack_100;
  undefined1 **ppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar4 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f301e6e;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f301e73;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108b8080;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108b8080,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar4;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar4;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_105853ee8;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puStack_80 = &stack0xfffffffffffffff0;
  if (ppuVar2 != (undefined1 **)0x0) {
    unaff_x20 = (long *)ppuVar2[1];
    puVar1 = &UNK_10f301e6e;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f301e73;
    }
    func_0x00010002b838(appuStack_c0,puVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
    param_2 = &UNK_1108b80d0;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108b80d0,&uStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  ppuVar2 = ppuVar3;
  __Unwind_Resume();
  puStack_108 = (undefined1 *)&uStack_120;
  pcStack_e8 = FUN_105854000;
  if (ppuVar2 != (undefined1 **)0x0) {
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    plStack_100 = unaff_x20;
    ppuStack_f8 = ppuVar3;
    ppuStack_f0 = &puStack_80;
    (**(code **)(*(long *)ppuVar2[1] + 0x18))(ppuVar2[1],&UNK_1108b8120,&uStack_120,param_2);
    func_0x00010007e5dc(&puStack_108);
  }
  return;
}



/* Entry: 105853ee8; end: 105853fff;  */

void FUN_105853ee8(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f301e6e;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f301e73;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108b80d0;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108b80d0,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_105854000;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_1108b8120,&uStack_b0,param_2);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 105854000; end: 105854077;  */

void FUN_105854000(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b8120,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105854078; end: 1058540ef;  */

void FUN_105854078(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b8170,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058540f0; end: 105854167;  */

void FUN_1058540f0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b81c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105854168; end: 1058541df;  */

void FUN_105854168(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b8210,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058541e0; end: 105854257;  */

void FUN_1058541e0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b8260,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105854258; end: 1058543cb;  */

void FUN_105854258(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f301f19;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108b82b0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108b82b0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1058543cc;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1108b8300,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1058543cc; end: 105854443;  */

void FUN_1058543cc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108b8300,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105854444; end: 1058544b7; -[UNISCVSValisPreferences initWithUnifiedGrpcService:] */

undefined1 * FUN_105854444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea9c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058544b8; end: 10585459b; -[UNISCVSValisPreferences getLocationSharingPreferencesWithRequest:callOptionsBuilder:handler:] */

void FUN_1058544b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf340;
  _objc_opt_class(PTR_PTR_1126bf340);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e080b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10585459c; end: 10585467f; -[UNISCVSValisPreferences setLocationSharingPreferencesWithRequest:callOptionsBuilder:handler:] */

void FUN_10585459c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf348;
  _objc_opt_class(PTR_PTR_1126bf348);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e080d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854680; end: 105854763; -[UNISCVSValisPreferences canRequestLocationWithRequest:callOptionsBuilder:handler:] */

void FUN_105854680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf350;
  _objc_opt_class(PTR_PTR_1126bf350);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e080f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854764; end: 105854847; -[UNISCVSValisPreferences locRequestFeedbackWithRequest:callOptionsBuilder:handler:] */

void FUN_105854764(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf358;
  _objc_opt_class(PTR_PTR_1126bf358);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08118,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854848; end: 10585492b; -[UNISCVSValisPreferences getLocRequestStatusWithRequest:callOptionsBuilder:handler:] */

void FUN_105854848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf360;
  _objc_opt_class(PTR_PTR_1126bf360);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08138,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10585492c; end: 105854a0f; -[UNISCVSValisPreferences getMutedFriendsWithRequest:callOptionsBuilder:handler:] */

void FUN_10585492c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf368;
  _objc_opt_class(PTR_PTR_1126bf368);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08158,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854a10; end: 105854af3; -[UNISCVSValisPreferences muteFriendWithRequest:callOptionsBuilder:handler:] */

void FUN_105854a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf370;
  _objc_opt_class(PTR_PTR_1126bf370);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08178,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854af4; end: 105854bd7; -[UNISCVSValisPreferences unmuteFriendWithRequest:callOptionsBuilder:handler:] */

void FUN_105854af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf378;
  _objc_opt_class(PTR_PTR_1126bf378);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08198,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854bd8; end: 105854cbb; -[UNISCVSValisPreferences shareLocationWithRequest:callOptionsBuilder:handler:] */

void FUN_105854bd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf380;
  _objc_opt_class(PTR_PTR_1126bf380);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e081b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854cbc; end: 105854cc7; -[UNISCVSValisPreferences .cxx_destruct] */

void FUN_105854cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105854cc8; end: 105854d3b; -[UNISCVSValisPreferencesBackend initWithUnifiedGrpcService:] */

undefined1 * FUN_105854cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea9d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105854d3c; end: 105854e1f; -[UNISCVSValisPreferencesBackend getBatchLocSharingPreferencesWithRequest:callOptionsBuilder:handler:] */

void FUN_105854d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf388;
  _objc_opt_class(PTR_PTR_1126bf388);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e081d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854e20; end: 105854f03; -[UNISCVSValisPreferencesBackend setLocSharingPreferencesWithRequest:callOptionsBuilder:handler:] */

void FUN_105854e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf390;
  _objc_opt_class(PTR_PTR_1126bf390);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e081f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854f04; end: 105854fe7; -[UNISCVSValisPreferencesBackend locationRequestFeedbackWithRequest:callOptionsBuilder:handler:] */

void FUN_105854f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf398;
  _objc_opt_class(PTR_PTR_1126bf398);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08218,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105854fe8; end: 1058550cb; -[UNISCVSValisPreferencesBackend locationRequestedWithRequest:callOptionsBuilder:handler:] */

void FUN_105854fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3a0;
  _objc_opt_class(PTR_PTR_1126bf3a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08238,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058550cc; end: 1058551af; -[UNISCVSValisPreferencesBackend fsnCanRequestLocationWithRequest:callOptionsBuilder:handler:] */

void FUN_1058550cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3a8;
  _objc_opt_class(PTR_PTR_1126bf3a8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08258,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058551b0; end: 105855293; -[UNISCVSValisPreferencesBackend getChangeHistoryWithRequest:callOptionsBuilder:handler:] */

void FUN_1058551b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3b0;
  _objc_opt_class(PTR_PTR_1126bf3b0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08278,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105855294; end: 105855377; -[UNISCVSValisPreferencesBackend getMutedFriendListWithRequest:callOptionsBuilder:handler:] */

void FUN_105855294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3b8;
  _objc_opt_class(PTR_PTR_1126bf3b8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08298,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105855378; end: 10585545b; -[UNISCVSValisPreferencesBackend isSharingLocationWithUserWithRequest:callOptionsBuilder:handler:] */

void FUN_105855378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3c0;
  _objc_opt_class(PTR_PTR_1126bf3c0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e082b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10585545c; end: 10585553f; -[UNISCVSValisPreferencesBackend friendlinkUpdateWithRequest:callOptionsBuilder:handler:] */

void FUN_10585545c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3c8;
  _objc_opt_class(PTR_PTR_1126bf3c8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e082d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105855540; end: 105855623; -[UNISCVSValisPreferencesBackend getLocationSharingFriendListWithRequest:callOptionsBuilder:handler:] */

void FUN_105855540(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3d0;
  _objc_opt_class(PTR_PTR_1126bf3d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e082f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105855624; end: 10585562f; -[UNISCVSValisPreferencesBackend .cxx_destruct] */

void FUN_105855624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105855630; end: 1058556ab;  */

undefined * FUN_105855630(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0c80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e08318,
                        &UNK_10ddbf5d4,&UNK_10ddbf5e8,2,FUN_1058556ac,0);
    do {
      if (puRam00000001136c0c80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0c80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0c80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0c80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0c80;
}



/* Entry: 1058556ac; end: 1058556b7;  */

bool FUN_1058556ac(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1058556b8; end: 105855733;  */

undefined * FUN_1058556b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0c88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e08338,
                        &UNK_10ddbf5f0,&UNK_10ddbf630,5,FUN_105855734,0);
    do {
      if (puRam00000001136c0c88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0c88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0c88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0c88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0c88;
}



/* Entry: 105855734; end: 10585573f;  */

bool FUN_105855734(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105855740; end: 1058557a7; +[SCMTCanRequestLocationRequest descriptor] */

void FUN_105855740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72910,
                        &PTR____CFConstantStringClassReference_110e08358,
                        &PTR_s_snapchat_map_113105ab0,&PTR_s_friendId_113105ac8,2,0x10,0x1c);
    puRam00000001136c0c90 = puVar1;
  }
  return;
}



/* Entry: 1058557a8; end: 10585580f; +[SCMTCanRequestLocationResponse descriptor] */

void FUN_1058557a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72960,
                        &PTR____CFConstantStringClassReference_110e08378,
                        &PTR_s_snapchat_map_113105ab0,&PTR_DAT_113105b48,3,8,0x1c);
    puRam00000001136c0c98 = puVar1;
  }
  return;
}



/* Entry: 105855810; end: 105855877; +[SCMTLocationRequestFeedbackRequest descriptor] */

void FUN_105855810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a729b0,
                        &PTR____CFConstantStringClassReference_110e08398,
                        &PTR_s_snapchat_map_113105ab0,&PTR_s_friendId_113105b08,2,0x10,0x1c);
    puRam00000001136c0ca0 = puVar1;
  }
  return;
}



/* Entry: 105855878; end: 10585596f; +[SCMTLocationRequestFeedbackResponse descriptor] */

void FUN_105855878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72a00,
                        &PTR____CFConstantStringClassReference_110e083b8,
                        &PTR_s_snapchat_map_113105ab0,0,0,4,0x1c);
    puRam00000001136c0ca8 = puVar1;
  }
  return;
}



/* Entry: 105855970; end: 10585598b;  */

uint FUN_105855970(ulong param_1)

{
  return (uint)((uint)param_1 < 0x29) & (uint)(0x1ffc7f0ffff >> (param_1 & 0x3f));
}



/* Entry: 10585598c; end: 105855a07;  */

undefined * FUN_10585598c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0cb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e083f8,
                        &UNK_10ddbf9e4,&UNK_10ddbfa58,4,FUN_105855a08,0);
    do {
      if (puRam00000001136c0cb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0cb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0cb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0cb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0cb8;
}



/* Entry: 105855a08; end: 105855a13;  */

bool FUN_105855a08(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105855a14; end: 105855a8f;  */

undefined * FUN_105855a14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0cc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e08418,
                        &UNK_10ddbfa68,&UNK_10ddbfa90,4,FUN_105855a90,0);
    do {
      if (puRam00000001136c0cc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0cc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0cc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0cc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0cc0;
}



/* Entry: 105855a90; end: 105855a9b;  */

bool FUN_105855a90(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105855a9c; end: 105855b17;  */

undefined * FUN_105855a9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0cc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e08438,
                        &UNK_10ddbfaa0,&UNK_10ddbfac4,3,FUN_105855b18,0);
    do {
      if (puRam00000001136c0cc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0cc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0cc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0cc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0cc8;
}



/* Entry: 105855b18; end: 105855b23;  */

bool FUN_105855b18(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105855b24; end: 105855b9f;  */

undefined * FUN_105855b24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0cd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e08458,
                        &UNK_10ddbfad0,&UNK_10ddbfae8,3,FUN_105855ba0,0);
    do {
      if (puRam00000001136c0cd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0cd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0cd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0cd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0cd0;
}



/* Entry: 105855ba0; end: 105855bab;  */

bool FUN_105855ba0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105855bac; end: 105855c13; +[SCVSGetChangeHistoryRequest descriptor] */

void FUN_105855bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72aa0,
                        &PTR____CFConstantStringClassReference_110e08478,&PTR_DAT_113105bb8,
                        &PTR_s_userId_113106410,5,0x20,0x1c);
    puRam00000001136c0cd8 = puVar1;
  }
  return;
}



/* Entry: 105855c14; end: 105855c7b; +[SCVSGetChangeHistoryResponse descriptor] */

void FUN_105855c14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72af0,
                        &PTR____CFConstantStringClassReference_110e08498,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105cb0,2,0x18,0x1c);
    puRam00000001136c0ce0 = puVar1;
  }
  return;
}



/* Entry: 105855c7c; end: 105855ce3; +[SCVSGetLocationSharingPreferencesRequest descriptor] */

void FUN_105855c7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72b40,
                        &PTR____CFConstantStringClassReference_110e084b8,&PTR_DAT_113105bb8,0,0,4,
                        0x1c);
    puRam00000001136c0ce8 = puVar1;
  }
  return;
}



/* Entry: 105855ce4; end: 105855d4b; +[SCVSGetLocationSharingPreferencesResponse descriptor] */

void FUN_105855ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72b90,
                        &PTR____CFConstantStringClassReference_110e084d8,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105cf0,2,0x18,0x1c);
    puRam00000001136c0cf0 = puVar1;
  }
  return;
}



/* Entry: 105855d4c; end: 105855db3; +[SCVSLocationPreferencesMetadata descriptor] */

void FUN_105855d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72be0,
                        &PTR____CFConstantStringClassReference_110e084f8,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105bd0,1,8,0x1c);
    puRam00000001136c0cf8 = puVar1;
  }
  return;
}



/* Entry: 105855db4; end: 105855e1b; +[SCVSSetLocationSharingPreferencesRequest descriptor] */

void FUN_105855db4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72c30,
                        &PTR____CFConstantStringClassReference_110e08518,&PTR_DAT_113105bb8,
                        &PTR_DAT_113106290,4,0x28,0x1c);
    puRam00000001136c0d00 = puVar1;
  }
  return;
}



/* Entry: 105855e1c; end: 105855e83; +[SCVSSetLocationSharingPreferencesResponse descriptor] */

void FUN_105855e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72c80,
                        &PTR____CFConstantStringClassReference_110e08538,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105d30,2,0x18,0x1c);
    puRam00000001136c0d08 = puVar1;
  }
  return;
}



/* Entry: 105855e84; end: 105855f0f; +[SCVSShareLocationRequest descriptor] */

undefined * FUN_105855e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72cd0,
                        &PTR____CFConstantStringClassReference_110e08558,&PTR_DAT_113105bb8,
                        &PTR_DAT_1131064b0,5,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c0d10 = puVar1;
  }
  return puRam00000001136c0d10;
}



/* Entry: 105855f10; end: 105855f77; +[SCVSFriendSharingAction descriptor] */

void FUN_105855f10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72d20,
                        &PTR____CFConstantStringClassReference_110e08578,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105d70,2,0x10,0x1c);
    puRam00000001136c0d18 = puVar1;
  }
  return;
}



/* Entry: 105855f78; end: 105855fdf; +[SCVSGhostModeAction descriptor] */

void FUN_105855f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72d70,
                        &PTR____CFConstantStringClassReference_110e08598,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105db0,2,0x10,0x1c);
    puRam00000001136c0d20 = puVar1;
  }
  return;
}



/* Entry: 105855fe0; end: 105856047; +[SCVSShareLocationResponse descriptor] */

void FUN_105855fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72dc0,
                        &PTR____CFConstantStringClassReference_110e085b8,&PTR_DAT_113105bb8,
                        &PTR_DAT_113106550,5,0x28,0x1c);
    puRam00000001136c0d28 = puVar1;
  }
  return;
}



/* Entry: 105856048; end: 1058560af; +[SCVSGetBatchLocSharingPreferencesRequest descriptor] */

void FUN_105856048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72e10,
                        &PTR____CFConstantStringClassReference_110e085d8,&PTR_DAT_113105bb8,
                        &PTR_s_userIdsArray_113105bf0,1,0x10,0x1c);
    puRam00000001136c0d30 = puVar1;
  }
  return;
}



/* Entry: 1058560b0; end: 105856117; +[SCVSGetBatchLocSharingPreferencesResponse descriptor] */

void FUN_1058560b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72e60,
                        &PTR____CFConstantStringClassReference_110e085f8,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105df0,2,0x18,0x1c);
    puRam00000001136c0d38 = puVar1;
  }
  return;
}



/* Entry: 105856118; end: 10585617f; +[SCVSSetLocSharingPreferencesRequest descriptor] */

void FUN_105856118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72eb0,
                        &PTR____CFConstantStringClassReference_110e08618,&PTR_DAT_113105bb8,
                        &PTR_s_userId_113106310,4,0x28,0x1c);
    puRam00000001136c0d40 = puVar1;
  }
  return;
}



/* Entry: 105856180; end: 1058561e7; +[SCVSSetLocSharingPreferencesResponse descriptor] */

void FUN_105856180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72f00,
                        &PTR____CFConstantStringClassReference_110e08638,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105e30,2,0x18,0x1c);
    puRam00000001136c0d48 = puVar1;
  }
  return;
}



/* Entry: 1058561e8; end: 10585624f; +[SCVSLambdaPreferencesUpdate descriptor] */

void FUN_1058561e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72f50,
                        &PTR____CFConstantStringClassReference_110e08658,&PTR_DAT_113105bb8,
                        &PTR_s_userId_113105e70,2,0x18,0x1c);
    puRam00000001136c0d50 = puVar1;
  }
  return;
}



/* Entry: 105856250; end: 1058562b7; +[SCVSLocRequestFeedbackRequest descriptor] */

void FUN_105856250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72fa0,
                        &PTR____CFConstantStringClassReference_110e08678,&PTR_DAT_113105bb8,
                        &PTR_DAT_113106170,3,0x18,0x1c);
    puRam00000001136c0d58 = puVar1;
  }
  return;
}



/* Entry: 1058562b8; end: 105856333; +[SCVSLocRequestFeedbackRequest_Cancellation descriptor] */

undefined * FUN_1058562b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a72ff0,
                        &PTR____CFConstantStringClassReference_110e08698,&PTR_DAT_113105bb8,
                        &PTR_s_friendId_113105eb0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c0d60 = puVar1;
  }
  return puRam00000001136c0d60;
}



/* Entry: 105856334; end: 10585639b; +[SCVSLocRequestFeedbackResponse descriptor] */

void FUN_105856334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73040,
                        &PTR____CFConstantStringClassReference_110e086b8,&PTR_DAT_113105bb8,0,0,4,
                        0x1c);
    puRam00000001136c0d68 = puVar1;
  }
  return;
}



/* Entry: 10585639c; end: 105856403; +[SCVSGetLocRequestStatusRequest descriptor] */

void FUN_10585639c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73090,
                        &PTR____CFConstantStringClassReference_110e086d8,&PTR_DAT_113105bb8,
                        &PTR_DAT_1131061d0,3,0x18,0x1c);
    puRam00000001136c0d70 = puVar1;
  }
  return;
}



/* Entry: 105856404; end: 10585646b; +[SCVSGetLocRequestStatusResponse descriptor] */

void FUN_105856404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a730e0,
                        &PTR____CFConstantStringClassReference_110e086f8,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105c10,1,4,0x1c);
    puRam00000001136c0d78 = puVar1;
  }
  return;
}



/* Entry: 10585646c; end: 1058564d3; +[SCVSLocationRequestedRequest descriptor] */

void FUN_10585646c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73130,
                        &PTR____CFConstantStringClassReference_110e08718,&PTR_DAT_113105bb8,
                        &PTR_DAT_113106230,3,0x18,0x1c);
    puRam00000001136c0d80 = puVar1;
  }
  return;
}



/* Entry: 1058564d4; end: 10585653b; +[SCVSLocationRequestedResponse descriptor] */

void FUN_1058564d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73180,
                        &PTR____CFConstantStringClassReference_110e08738,&PTR_DAT_113105bb8,0,0,4,
                        0x1c);
    puRam00000001136c0d88 = puVar1;
  }
  return;
}



/* Entry: 10585653c; end: 1058565a3; +[SCVSFsnCanRequestLocationRequest descriptor] */

void FUN_10585653c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a731d0,
                        &PTR____CFConstantStringClassReference_110e08758,&PTR_DAT_113105bb8,
                        &PTR_s_friendId_113105ef0,2,0x18,0x1c);
    puRam00000001136c0d90 = puVar1;
  }
  return;
}



/* Entry: 1058565a4; end: 10585660b; +[SCVSFsnCanRequestLocationResponse descriptor] */

void FUN_1058565a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0d98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73220,
                        &PTR____CFConstantStringClassReference_110e08778,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105f30,2,4,0x1c);
    puRam00000001136c0d98 = puVar1;
  }
  return;
}



/* Entry: 10585660c; end: 105856673; +[SCVSGetMutedFriendsRequest descriptor] */

void FUN_10585660c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0da0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73270,
                        &PTR____CFConstantStringClassReference_110e08798,&PTR_DAT_113105bb8,0,0,4,
                        0x1c);
    puRam00000001136c0da0 = puVar1;
  }
  return;
}



/* Entry: 105856674; end: 1058566db; +[SCVSGetMutedFriendsResponse descriptor] */

void FUN_105856674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0da8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a732c0,
                        &PTR____CFConstantStringClassReference_110e087b8,&PTR_DAT_113105bb8,
                        &PTR_s_friendIdsArray_113105f70,2,0x18,0x1c);
    puRam00000001136c0da8 = puVar1;
  }
  return;
}



/* Entry: 1058566dc; end: 105856743; +[SCVSMuteFriendRequest descriptor] */

void FUN_1058566dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0db0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73310,
                        &PTR____CFConstantStringClassReference_110e087d8,&PTR_DAT_113105bb8,
                        &PTR_s_friendIdsArray_113105fb0,2,0x18,0x1c);
    puRam00000001136c0db0 = puVar1;
  }
  return;
}



/* Entry: 105856744; end: 1058567ab; +[SCVSMuteFriendResponse descriptor] */

void FUN_105856744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0db8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73360,
                        &PTR____CFConstantStringClassReference_110e087f8,&PTR_DAT_113105bb8,
                        &PTR_s_friendIdsArray_113105ff0,2,0x18,0x1c);
    puRam00000001136c0db8 = puVar1;
  }
  return;
}



/* Entry: 1058567ac; end: 105856813; +[SCVSUnmuteFriendRequest descriptor] */

void FUN_1058567ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0dc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a733b0,
                        &PTR____CFConstantStringClassReference_110e08818,&PTR_DAT_113105bb8,
                        &PTR_s_friendIdsArray_113106030,2,0x18,0x1c);
    puRam00000001136c0dc0 = puVar1;
  }
  return;
}



/* Entry: 105856814; end: 10585687b; +[SCVSUnmuteFriendResponse descriptor] */

void FUN_105856814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0dc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73400,
                        &PTR____CFConstantStringClassReference_110e08838,&PTR_DAT_113105bb8,
                        &PTR_s_friendIdsArray_113106070,2,0x18,0x1c);
    puRam00000001136c0dc8 = puVar1;
  }
  return;
}



/* Entry: 10585687c; end: 1058568e3; +[SCVSMutedFriends descriptor] */

void FUN_10585687c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0dd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73450,
                        &PTR____CFConstantStringClassReference_110e08858,&PTR_DAT_113105bb8,
                        &PTR_s_friendIdsArray_1131060b0,2,0x18,0x1c);
    puRam00000001136c0dd0 = puVar1;
  }
  return;
}



/* Entry: 1058568e4; end: 10585694b; +[SCVSGetMutedFriendListRequest descriptor] */

void FUN_1058568e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0dd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a734a0,
                        &PTR____CFConstantStringClassReference_110e08878,&PTR_DAT_113105bb8,
                        &PTR_s_userId_113105c30,1,0x10,0x1c);
    puRam00000001136c0dd8 = puVar1;
  }
  return;
}



/* Entry: 10585694c; end: 1058569b3; +[SCVSGetMutedFriendListResponse descriptor] */

void FUN_10585694c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0de0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a734f0,
                        &PTR____CFConstantStringClassReference_110e08898,&PTR_DAT_113105bb8,
                        &PTR_s_friendIdsArray_1131060f0,2,0x18,0x1c);
    puRam00000001136c0de0 = puVar1;
  }
  return;
}



/* Entry: 1058569b4; end: 105856a1b; +[SCVSIsSharingLocationWithUserRequest descriptor] */

void FUN_1058569b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0de8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73540,
                        &PTR____CFConstantStringClassReference_110e088b8,&PTR_DAT_113105bb8,
                        &PTR_s_userId_113106130,2,0x18,0x1c);
    puRam00000001136c0de8 = puVar1;
  }
  return;
}



/* Entry: 105856a1c; end: 105856a83; +[SCVSIsSharingLocationWithUserResponse descriptor] */

void FUN_105856a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73590,
                        &PTR____CFConstantStringClassReference_110e088d8,&PTR_DAT_113105bb8,
                        &PTR_DAT_113105c50,1,4,0x1c);
    puRam00000001136c0df0 = puVar1;
  }
  return;
}



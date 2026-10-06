/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10864cfcc; end: 10864cfd7;  */

void FUN_10864cfcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864cfd8; end: 10864d04f; -[SCNE2eeSessionScopedStorageDelegateCppProxy initWithCpp:] */

undefined1 * FUN_10864cfd8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10864e010();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010864d894(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10864d050; end: 10864d0fb; -[SCNE2eeSessionScopedStorageDelegateCppProxy storeRootWrappingKey:] */

void FUN_10864d050(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_60 [48];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108648ab0(auStack_60,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_60);
  func_0x00010864d6ec(auStack_60);
  func_0x00010864e080();
  return;
}



/* Entry: 10864d0fc; end: 10864d32b; -[SCNE2eeSessionScopedStorageDelegateCppProxy readRootWrappingKey] */

void FUN_10864d0fc(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  int extraout_w10;
  long unaff_x21;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010864e250();
  func_0x00010864e1f0();
  func_0x00010864e16c();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864e1a8();
  func_0x00010864e230();
  FUN_10864d764(auStack_60,auStack_e0,auStack_70);
  func_0x00010864e1c0();
  func_0x00010864d714(auStack_60);
  func_0x00010864e10c();
  func_0x000107c27b48(&uStack_78);
  func_0x000107c27b4c(auStack_60,uStack_78);
  func_0x00010864e17c();
  lStack_b0 = unaff_x21 + 0x70;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar3 = unaff_x21;
  func_0x00010864d8bc();
  if ((int)lVar3 == 0) {
    uVar1 = 0x18;
    __Znwm();
    func_0x00010864e25c(&PTR_FUN_110a5fef0);
    lVar3 = *(long *)(unaff_x21 + 0xb8);
    *(undefined8 *)(unaff_x21 + 0xb8) = uVar1;
    if (lVar3 != 0) {
      func_0x00010864e15c();
    }
    lVar3 = 0;
  }
  else {
    FUN_10864d798(&lStack_a0,auStack_50);
    lVar3 = lStack_a0;
  }
  func_0x00010864e14c();
  if (lVar3 != 0) {
    lStack_a8 = lStack_98;
    lStack_b0 = lVar3;
    if (lStack_98 != 0) {
      do {
        func_0x00010864e010();
      } while (extraout_w10 != 0);
    }
    FUN_10864d8fc(auStack_90,lVar3);
    func_0x00010864d714(&lStack_b0);
  }
  func_0x00010864e23c();
  func_0x00010864d714();
  puVar2 = auStack_90;
  func_0x00010864dc40();
  func_0x00010864e124();
  func_0x00010864e210();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010864e038();
  }
  func_0x00010864e0d0();
  func_0x000107c27b58(auStack_c0);
  _objc_release(0);
  func_0x00010864e080();
  func_0x00010864e0e0();
  func_0x00010864e134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864d32c; end: 10864d563; -[SCNE2eeSessionScopedStorageDelegateCppProxy loadTemporaryIdentityKey] */

void FUN_10864d32c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  int extraout_w10;
  long unaff_x21;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010864e250();
  func_0x00010864e1f0();
  func_0x00010864e16c();
  _objc_alloc_init(PTR_PTR_1126b8058);
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864e1a8();
  func_0x00010864e230();
  FUN_10864d7f0(auStack_60,auStack_e0,auStack_70);
  func_0x00010864e1b4();
  func_0x00010864d73c(auStack_60);
  func_0x00010864e114();
  func_0x000107c27b48(&uStack_78);
  func_0x000107c27b4c(auStack_60,uStack_78);
  func_0x00010864e17c();
  lStack_b0 = unaff_x21 + 0xa8;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar3 = unaff_x21;
  func_0x00010864dc64();
  if ((int)lVar3 == 0) {
    uVar1 = 0x18;
    __Znwm();
    func_0x00010864e25c(&PTR_FUN_110a5ff40);
    lVar3 = *(long *)(unaff_x21 + 0xf0);
    *(undefined8 *)(unaff_x21 + 0xf0) = uVar1;
    if (lVar3 != 0) {
      func_0x00010864e15c();
    }
    lVar3 = 0;
  }
  else {
    FUN_10864d824(&lStack_a0,auStack_50);
    lVar3 = lStack_a0;
  }
  func_0x00010864e14c();
  if (lVar3 != 0) {
    lStack_a8 = lStack_98;
    lStack_b0 = lVar3;
    if (lStack_98 != 0) {
      do {
        func_0x00010864e010();
      } while (extraout_w10 != 0);
    }
    FUN_10864dca4(auStack_90,lVar3);
    func_0x00010864d73c(&lStack_b0);
  }
  func_0x00010864e23c();
  func_0x00010864d73c();
  puVar2 = auStack_90;
  func_0x00010864dfec();
  func_0x00010864e124();
  func_0x00010864e210();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010864e038();
  }
  func_0x00010864e11c();
  func_0x000107c27b58(auStack_c0);
  _objc_release(0);
  func_0x00010864e080();
  func_0x00010864e0e8();
  func_0x00010864d73c(auStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864d564; end: 10864d5bb; -[SCNE2eeSessionScopedStorageDelegateCppProxy clearTemporaryIdentityKey] */

void FUN_10864d564(void)

{
  long extraout_x8;
  
  func_0x00010864e250();
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 10864d5bc; end: 10864d657; -[SCNE2eeSessionScopedStorageDelegateCppProxy destroy] */

void FUN_10864d5bc(void)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010864e250();
  func_0x00010864e1f0();
  func_0x00010864e16c();
  FUN_108646b18(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010864e204();
  func_0x000107c27b58(auStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864d658; end: 10864d6ab; -[SCNE2eeSessionScopedStorageDelegateCppProxy .cxx_destruct] */

void FUN_10864d658(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5fed0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010864d894((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10864d6ac; end: 10864d763; -[SCNE2eeSessionScopedStorageDelegateCppProxy .cxx_construct] */

undefined8 * FUN_10864d6ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10864e010();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10864d764; end: 10864d797;  */

void FUN_10864d764(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x00010864e0a8();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x00010864e054();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10864d798; end: 10864d7cf;  */

undefined8 * FUN_10864d798(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010864e0e0();
  return param_1;
}



/* Entry: 10864d7d0; end: 10864d7ef;  */

void FUN_10864d7d0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010864d6ec();
  }
  return;
}



/* Entry: 10864d7f0; end: 10864d823;  */

void FUN_10864d7f0(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x00010864e0a8();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x00010864e054();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10864d824; end: 10864d8fb;  */

undefined8 * FUN_10864d824(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010864e0e8();
  return param_1;
}



/* Entry: 10864d8fc; end: 10864dbb7;  */

void FUN_10864d8fc(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [8];
  ulong *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  ulong *puStack_60;
  undefined1 uStack_58;
  ulong *puStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      FUN_10864e010();
    } while (extraout_w10 != 0);
    do {
      FUN_10864e010();
    } while (extraout_w10_00 != 0);
  }
  uStack_d0 = param_2;
  lStack_c8 = param_3;
  func_0x00010864e230();
  FUN_10864d764(&puStack_60,&uStack_d0,auStack_70);
  func_0x00010864e1c0();
  func_0x00010864d714(&puStack_60);
  func_0x00010864e10c();
  puStack_60 = puStack_50 + 0xe;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_80 = puStack_50;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      FUN_10864e010();
    } while (extraout_w10_01 != 0);
  }
  while (puVar2 = puStack_50, func_0x00010864d8bc(), ((ulong)puVar2 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puStack_50 + 8,&puStack_60);
  }
  func_0x00010864d714(&puStack_80);
  if (puStack_50[0x16] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10864da88);
    (*pcVar1)();
  }
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_90 = 0;
  if ((char)puStack_50[6] == '\x01') {
    uStack_b8 = puStack_50[1];
    uStack_c0 = *puStack_50;
    uStack_b0 = puStack_50[2];
    puStack_50[1] = 0;
    puStack_50[2] = 0;
    *puStack_50 = 0;
    uStack_a0 = puStack_50[4];
    uStack_a8 = puStack_50[3];
    uStack_98 = puStack_50[5];
    puStack_50[3] = 0;
    puStack_50[4] = 0;
    puStack_50[5] = 0;
    uStack_90 = 1;
    func_0x00010864e0d8();
    func_0x00010864e0d0();
    FUN_108648b88(&uStack_c0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010864e0d8();
    func_0x00010864e0d0();
  }
  func_0x00010864e194();
  func_0x00010864e04c();
  FUN_10864d7d0(&uStack_c0);
  func_0x00010864d714(&uStack_d0);
  func_0x00010864e134();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10864dbb8; end: 10864dbbb;  */

undefined8 * FUN_10864dbb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fef0;
  func_0x00010864dc40(param_1 + 1);
  return param_1;
}



/* Entry: 10864dbbc; end: 10864dbcf;  */

void FUN_10864dbbc(void)

{
  FUN_10864dc14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10864dbd0; end: 10864dc13;  */

void FUN_10864dbd0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010864e21c();
  if (param_3 != 0) {
    do {
      func_0x00010864e010();
    } while (extraout_w10 != 0);
  }
  FUN_10864d8fc(param_1 + 8);
  func_0x00010864e0e0();
  return;
}



/* Entry: 10864dc14; end: 10864dca3;  */

undefined8 * FUN_10864dc14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fef0;
  func_0x00010864dc40(param_1 + 1);
  return param_1;
}



/* Entry: 10864dca4; end: 10864df63;  */

void FUN_10864dca4(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [80];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  uStack_118 = param_2;
  lStack_110 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10864e010();
    } while (extraout_w10 != 0);
    do {
      FUN_10864e010();
    } while (extraout_w10_00 != 0);
  }
  uStack_108 = param_2;
  lStack_100 = param_3;
  func_0x00010864e230();
  FUN_10864d7f0(&lStack_60,&uStack_108,auStack_70);
  func_0x00010864e1b4();
  func_0x00010864d73c(&lStack_60);
  func_0x00010864e114();
  lStack_60 = uStack_50 + 0xa8;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  uStack_80 = uStack_50;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      FUN_10864e010();
    } while (extraout_w10_01 != 0);
  }
  while (uVar3 = uStack_50, func_0x00010864dc64(), (uVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uStack_50 + 0x78,&lStack_60);
  }
  func_0x00010864d73c(&uStack_80);
  if (*(long *)(uStack_50 + 0xe8) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10864de28);
    (*pcVar1)();
  }
  auStack_f8[0] = 0;
  cStack_90 = 0;
  bVar2 = *(char *)(uStack_50 + 0x68) == '\x01';
  if (bVar2) {
    FUN_108647d30(auStack_f8,uStack_50);
    uStack_a0 = *(undefined8 *)(uStack_50 + 0x58);
    uStack_a8 = *(undefined8 *)(uStack_50 + 0x50);
    uStack_98 = *(undefined8 *)(uStack_50 + 0x60);
    *(undefined8 *)(uStack_50 + 0x50) = 0;
    *(undefined8 *)(uStack_50 + 0x58) = 0;
    *(undefined8 *)(uStack_50 + 0x60) = 0;
  }
  cStack_90 = bVar2;
  func_0x00010864e0d8();
  func_0x00010864e11c();
  if (cStack_90 == '\x01') {
    FUN_10864ab9c(auStack_f8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010864e194();
  func_0x00010864e04c();
  func_0x00010864d85c(auStack_f8);
  func_0x00010864d73c(&uStack_108);
  func_0x00010864d73c(&uStack_118);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10864df64; end: 10864df67;  */

undefined8 * FUN_10864df64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ff40;
  func_0x00010864dfec(param_1 + 1);
  return param_1;
}



/* Entry: 10864df68; end: 10864df7b;  */

void FUN_10864df68(void)

{
  FUN_10864dfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10864df7c; end: 10864dfbf;  */

void FUN_10864df7c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010864e21c();
  if (param_3 != 0) {
    do {
      func_0x00010864e010();
    } while (extraout_w10 != 0);
  }
  FUN_10864dca4(param_1 + 8);
  func_0x00010864e0e8();
  return;
}



/* Entry: 10864dfc0; end: 10864e00f;  */

undefined8 * FUN_10864dfc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ff40;
  func_0x00010864dfec(param_1 + 1);
  return param_1;
}



/* Entry: 10864e010; end: 10864e26f;  */

void FUN_10864e010(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10864e270; end: 10864e2df;  */

void FUN_10864e270(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000107c27914(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10864e2e0; end: 10864e33f;  */

void FUN_10864e2e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c05b8;
  _objc_alloc(PTR_PTR_1126c05b8);
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b1c0(puVar1,param_2,param_1);
  FUN_10864e340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10864e340; end: 10864e34b;  */

void FUN_10864e340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864e34c; end: 10864e41f;  */

void FUN_10864e34c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(&uStack_50);
  func_0x00010c08a800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x000106e4d99c();
  uVar1 = uStack_40;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  _objc_release(param_2);
  func_0x000107c27914(&uStack_50);
  FUN_10864e4b8();
  func_0x00010864e4c0();
  return;
}



/* Entry: 10864e420; end: 10864e4b7;  */

void FUN_10864e420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dad30;
  _objc_alloc(PTR_PTR_1126dad30);
  lVar2 = param_1;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x000106e4daa8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008400(puVar1,param_2,lVar2,param_1);
  FUN_10864e4b8();
  func_0x00010864e4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10864e4b8; end: 10864e4c7;  */

void FUN_10864e4b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864e4c8; end: 10864e4fb;  */

void FUN_10864e4c8(void)

{
  _objc_alloc(PTR_PTR_1126dad38);
  func_0x00010c019e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864e4fc; end: 10864e56b;  */

void FUN_10864e4fc(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar2 = PTR_PTR_1126dad40;
  _objc_alloc(PTR_PTR_1126dad40);
  puVar3 = param_1 + 2;
  uVar1 = *param_1;
  func_0x000107c28138(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff68e0(puVar2,param_2,uVar1,puVar3);
  FUN_10864e56c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10864e56c; end: 10864e577;  */

void FUN_10864e56c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864e578; end: 10864e6b7;  */

void FUN_10864e578(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = PTR_PTR_1126dad48;
  _objc_alloc(PTR_PTR_1126dad48);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (long)(param_1[3] - param_1[2]) / 0x18);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1[3];
  for (lVar7 = param_1[2]; lVar7 != lVar3; lVar7 = lVar7 + 0x18) {
    lVar6 = lVar7;
    func_0x00010bcc3af0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5,param_2,lVar6);
    _objc_release(lVar6);
  }
  func_0x00010bf51e00(puVar5);
  FUN_10864e6b8();
  uVar8 = param_1[5];
  param_1 = param_1 + 6;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b240(puVar4,param_2,uVar1,uVar2,puVar5,uVar8,param_1);
  FUN_10864e6b8();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10864e6b8; end: 10864e6bf;  */

void FUN_10864e6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10864e6c0; end: 10864e737; -[SCNNotificationCenterNotificationCenterManager initWithCpp:] */

undefined1 * FUN_10864e6c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd360;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10865009c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000104be5d84(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10864e738; end: 10864e97f; -[SCNNotificationCenterNotificationCenterManager fetchBadge] */

void FUN_10864e738(long param_1)

{
  long *plVar1;
  long lVar2;
  long **pplVar3;
  long lVar4;
  int extraout_w10;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [32];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  long alStack_50 [2];
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x10))(auStack_d0);
  func_0x00010865015c();
  func_0x0001086503b0();
  _objc_alloc_init();
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108650360();
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052c16b4(auStack_60,auStack_e0,&uStack_70);
  func_0x0001052c16dc(alStack_50,auStack_60);
  func_0x0001052c1970(auStack_60);
  func_0x0001052c1970(&uStack_70);
  func_0x00010865038c();
  func_0x000107c27b4c(auStack_60,uStack_78);
  uStack_88 = uStack_78;
  uStack_78 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  plStack_90 = plVar1;
  func_0x000108650350(alStack_50[0] + 0x40);
  __ZNSt3__15mutex4lockEv();
  lVar2 = alStack_50[0];
  func_0x0001052c1700();
  if ((int)lVar2 == 0) {
    func_0x0001086502e4();
    func_0x0001086501f4(&PTR_FUN_110a5ffa0);
    lVar4 = *(long *)(alStack_50[0] + 0x88);
    *(long *)(alStack_50[0] + 0x88) = lVar2;
    if (lVar4 != 0) {
      func_0x000108650108();
    }
  }
  else {
    func_0x0001052c16dc(&lStack_a0,alStack_50);
  }
  func_0x0001086501ec();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010865009c();
      } while (extraout_w10 != 0);
    }
    FUN_10864f5c4(&plStack_90);
    func_0x0001052c1970(&lStack_b0);
  }
  func_0x00010865039c();
  func_0x0001052c1970();
  pplVar3 = &plStack_90;
  FUN_10864f850();
  func_0x000108650338();
  func_0x00010865032c();
  if (pplVar3 != (long **)0x0) {
    func_0x0001086500c4();
  }
  func_0x0001052c1970(alStack_50);
  func_0x000108650394();
  func_0x000108650340();
  func_0x000108650180();
  func_0x00010865030c();
  func_0x0001052c1970(auStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864e980; end: 10864ea13; -[SCNNotificationCenterNotificationCenterManager syncNotificationCenter] */

void FUN_10864e980(long param_1)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  func_0x00010865015c();
  FUN_10864ea14(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108650150();
  func_0x0001086501d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864ea14; end: 10864ec33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10864ea14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long alStack_68 [5];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x0001086503b0();
  _objc_alloc_init();
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108650360();
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  func_0x0001052c1d5c(alStack_68 + 3,param_1,alStack_68 + 1);
  func_0x0001052c1d84(&puStack_40,alStack_68 + 3);
  func_0x0001052c2004(alStack_68 + 3);
  func_0x0001052c2004(alStack_68 + 1);
  func_0x000107c27b48(alStack_68);
  func_0x000107c27b4c(alStack_68 + 3,alStack_68[0]);
  lStack_78 = alStack_68[0];
  alStack_68[0] = 0;
  puStack_90 = (undefined8 *)0x0;
  lStack_88 = 0;
  puStack_a0 = puStack_40 + 8;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  uStack_80 = uVar1;
  __ZNSt3__15mutex4lockEv();
  puVar2 = puStack_40;
  func_0x0001052c1da8();
  if ((int)puVar2 == 0) {
    func_0x0001086502e4();
    lVar3 = lStack_78;
    uVar1 = uStack_80;
    *puVar2 = &PTR_FUN_110a5ffe0;
    uStack_80 = 0;
    lStack_78 = 0;
    puVar2[2] = lVar3;
    puVar2[1] = uVar1;
    lVar3 = puStack_40[0x11];
    puStack_40[0x11] = puVar2;
    if (lVar3 != 0) {
      func_0x000108650108();
    }
  }
  else {
    func_0x0001052c1d84(&puStack_90,&puStack_40);
  }
  func_0x000107c2798c(&puStack_a0);
  if (puStack_90 != (undefined8 *)0x0) {
    puStack_a0 = puStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010865009c();
      } while (extraout_w10 != 0);
    }
    FUN_10864f870(&uStack_80);
    func_0x0001086501d0();
  }
  uStack_a8 = alStack_68[4];
  uStack_b0 = alStack_68[3];
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  func_0x0001052c2004(&puStack_90);
  func_0x00010864fad0(&uStack_80);
  func_0x000107c27b58(alStack_68 + 3);
  lVar3 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar3 != 0) {
    func_0x0001086500c4();
  }
  func_0x0001052c2004(&puStack_40);
  func_0x000107c27b58(&uStack_b0);
  func_0x000108650340();
  func_0x000108650180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864ec34; end: 10864eefb; -[SCNNotificationCenterNotificationCenterManager fetchNotifications:numberOfNotifications:] */

void FUN_10864ec34(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int extraout_w10;
  long *plVar6;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [2];
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  plVar6 = *(long **)(param_1 + 0x18);
  func_0x000108650384();
  func_0x000107c28124(param_4);
  (**(code **)(*plVar6 + 0x20))(auStack_e0,plVar6,uVar1,param_2 & 0xff,param_4 & 0xffffffffff);
  func_0x00010865015c();
  func_0x0001086503b0();
  _objc_alloc_init();
  plVar2 = plVar6;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(plVar6);
  alStack_60[0] = 0;
  alStack_60[1] = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0001052c21e4(&uStack_70,auStack_f0,&uStack_80);
  func_0x0001052c220c(alStack_60,&uStack_70);
  func_0x0001052c2468(&uStack_70);
  func_0x0001052c2468(&uStack_80);
  func_0x00010865038c();
  func_0x000107c27b4c(&uStack_70,uStack_88);
  uStack_98 = uStack_88;
  uStack_88 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  plStack_a0 = plVar6;
  func_0x000108650350(alStack_60[0] + 0x58);
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_60[0];
  func_0x0001052c2230();
  if ((int)lVar3 == 0) {
    func_0x0001086502e4();
    func_0x0001086501f4(&PTR_FUN_110a60020);
    lVar5 = *(long *)(alStack_60[0] + 0xa0);
    *(long *)(alStack_60[0] + 0xa0) = lVar3;
    if (lVar5 != 0) {
      func_0x000108650108();
    }
  }
  else {
    func_0x0001052c220c(&lStack_b0,alStack_60);
  }
  func_0x0001086501ec();
  if (lStack_b0 != 0) {
    lStack_c0 = lStack_b0;
    lStack_b8 = lStack_a8;
    if (lStack_a8 != 0) {
      do {
        func_0x00010865009c();
      } while (extraout_w10 != 0);
    }
    FUN_10864faf0(&plStack_a0);
    func_0x0001052c2468(&lStack_c0);
  }
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052c2468(&lStack_b0);
  FUN_10864fe0c(&plStack_a0);
  puVar4 = &uStack_70;
  func_0x000107c27b58();
  func_0x00010865032c();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x0001086500c4();
  }
  func_0x0001052c2468(alStack_60);
  func_0x000108650394();
  func_0x000108650340();
  func_0x0001086501b8();
  func_0x000108650314();
  func_0x0001086502f4();
  func_0x000108650248();
  func_0x000108650180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 10864eefc; end: 10864f157; -[SCNNotificationCenterNotificationCenterManager fetchBadgedItemSummary:] */

void FUN_10864eefc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined1 auStack_e0 [48];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  long alStack_50 [2];
  
  func_0x000108650124();
  func_0x000108650384();
  func_0x00010865025c();
  func_0x00010865015c();
  func_0x0001086503b0();
  _objc_alloc_init();
  uVar1 = param_1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052c2884(auStack_60,auStack_e0,&uStack_70);
  func_0x0001052c28ac(alStack_50,auStack_60);
  func_0x0001052c2af4(auStack_60);
  func_0x0001052c2af4(&uStack_70);
  func_0x00010865038c();
  func_0x000107c27b4c(auStack_60,uStack_78);
  uStack_88 = uStack_78;
  uStack_78 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = param_1;
  func_0x000108650350(alStack_50[0] + 0x58);
  __ZNSt3__15mutex4lockEv();
  lVar2 = alStack_50[0];
  func_0x0001052c28d0();
  if ((int)lVar2 == 0) {
    func_0x0001086502e4();
    func_0x0001086501f4(&PTR_FUN_110a60060);
    lVar4 = *(long *)(alStack_50[0] + 0xa0);
    *(long *)(alStack_50[0] + 0xa0) = lVar2;
    if (lVar4 != 0) {
      func_0x000108650108();
    }
  }
  else {
    func_0x0001052c28ac(&lStack_a0,alStack_50);
  }
  func_0x0001086501ec();
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010865009c();
      } while (extraout_w10 != 0);
    }
    FUN_10864fe2c(&uStack_90);
    func_0x0001052c2af4(&lStack_b0);
  }
  func_0x00010865039c();
  func_0x0001052c2af4();
  puVar3 = &uStack_90;
  func_0x00010865007c();
  func_0x000108650338();
  func_0x00010865032c();
  if (puVar3 != (undefined8 *)0x0) {
    func_0x0001086500c4();
  }
  func_0x0001052c2af4(alStack_50);
  func_0x000108650394();
  func_0x000108650340();
  func_0x000108650248();
  func_0x000108650304();
  func_0x0001086502ec();
  func_0x000108650180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10864f158; end: 10864f21b; -[SCNNotificationCenterNotificationCenterManager clearNotificationBadge:] */

void FUN_10864f158(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108650124();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10861e7a8(auStack_58);
  func_0x0001086502bc();
  func_0x0001006573e4(auStack_58);
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10864ea14(&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086500ec();
  func_0x0001086502d4();
  func_0x000108650180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10864f21c; end: 10864f2b3; -[SCNNotificationCenterNotificationCenterManager clearNotification:] */

void FUN_10864f21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x38))(auStack_30,*(long **)(param_1 + 0x18),param_3);
  func_0x00010865015c();
  FUN_10864ea14(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108650150();
  func_0x0001086501d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864f2b4; end: 10864f377; -[SCNNotificationCenterNotificationCenterManager enterNotificationCenter:] */

void FUN_10864f2b4(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108650124();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001008fef48(auStack_58);
  func_0x0001086502bc();
  func_0x000107c27914(auStack_58);
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10864ea14(&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086500ec();
  func_0x0001086502d4();
  func_0x000108650180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10864f378; end: 10864f423; -[SCNNotificationCenterNotificationCenterManager exitNotificationCenter:] */

void FUN_10864f378(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000108650124();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108650384();
  func_0x00010865025c();
  func_0x00010865015c();
  FUN_10864ea14(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086500ec();
  func_0x0001086501d0();
  func_0x000108650180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10864f424; end: 10864f44f;  */

void FUN_10864f424(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10864f4e4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864f450; end: 10864f4a3; -[SCNNotificationCenterNotificationCenterManager .cxx_destruct] */

void FUN_10864f450(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5ff80;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000104be5d84((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10864f4a4; end: 10864f4e3; -[SCNNotificationCenterNotificationCenterManager .cxx_construct] */

undefined8 * FUN_10864f4a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10865009c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10864f4e4; end: 10864f557;  */

void FUN_10864f4e4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5ff80;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10865009c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10864f558);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086501e0();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864f558; end: 10864f5c3;  */

void FUN_10864f558(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dad50;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10865009c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000104be5d84(&uStack_30);
  return;
}



/* Entry: 10864f5c4; end: 10864f797;  */

void FUN_10864f5c4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_50;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (uint)param_2;
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10865009c();
    } while (extraout_w10 != 0);
    do {
      FUN_10865009c();
    } while (extraout_w10_00 != 0);
  }
  uStack_68 = CONCAT44(uVar3,uVar2);
  puVar1 = &uStack_68;
  lStack_60 = param_3;
  func_0x0001052c1a1c();
  uStack_50 = (undefined1)uVar2;
  puStack_58 = puVar1;
  if ((uVar2 & 1) == 0) {
    FUN_10864f820();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108650250();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001052c1aec(&puStack_58);
    FUN_10864e4c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108650220();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108650188();
  func_0x00010865019c();
  func_0x0001086501b8();
  func_0x0001052c1970(&uStack_68);
  func_0x0001052c1970(&uStack_78);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10864f798; end: 10864f79b;  */

undefined8 * FUN_10864f798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ffa0;
  FUN_10864f850(param_1 + 1);
  return param_1;
}



/* Entry: 10864f79c; end: 10864f7af;  */

void FUN_10864f79c(void)

{
  FUN_10864f7f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10864f7b0; end: 10864f7f3;  */

void FUN_10864f7b0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010865016c();
  if (param_3 != 0) {
    do {
      func_0x00010865009c();
    } while (extraout_w10 != 0);
  }
  FUN_10864f5c4(param_1 + 8);
  func_0x00010865030c();
  return;
}



/* Entry: 10864f7f4; end: 10864f81f;  */

undefined8 * FUN_10864f7f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ffa0;
  FUN_10864f850(param_1 + 1);
  return param_1;
}



/* Entry: 10864f820; end: 10864f84f;  */

void FUN_10864f820(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864f850; end: 10864f86f;  */

void FUN_10864f850(void)

{
  func_0x000108650190();
  func_0x000108650348();
  return;
}



/* Entry: 10864f870; end: 10864fa47;  */

void FUN_10864f870(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10865009c();
    } while (extraout_w10 != 0);
    do {
      FUN_10865009c();
    } while (extraout_w10_00 != 0);
  }
  puVar1 = &uStack_68;
  uStack_68 = param_2;
  lStack_60 = param_3;
  func_0x0001052c20ac();
  uStack_58 = SUB84(puVar1,0);
  uStack_54 = (undefined1)((ulong)puVar1 >> 0x20);
  if (((ulong)puVar1 >> 0x20 & 1) == 0) {
    FUN_10864f820();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108650250();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001052c2178(&uStack_58);
    func_0x00010bccc9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108650220();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108650188();
  func_0x00010865019c();
  func_0x0001086501b8();
  func_0x0001052c2004(&uStack_68);
  func_0x0001052c2004(&uStack_78);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10864fa48; end: 10864fa4b;  */

undefined8 * FUN_10864fa48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ffe0;
  func_0x00010864fad0(param_1 + 1);
  return param_1;
}



/* Entry: 10864fa4c; end: 10864fa5f;  */

void FUN_10864fa4c(void)

{
  FUN_10864faa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10864fa60; end: 10864faa3;  */

void FUN_10864fa60(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010865016c();
  if (param_3 != 0) {
    do {
      func_0x00010865009c();
    } while (extraout_w10 != 0);
  }
  FUN_10864f870(param_1 + 8);
  func_0x0001052c2004(auStack_30);
  return;
}



/* Entry: 10864faa4; end: 10864faef;  */

undefined8 * FUN_10864faa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ffe0;
  func_0x00010864fad0(param_1 + 1);
  return param_1;
}



/* Entry: 10864faf0; end: 10864fccf;  */

void FUN_10864faf0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 auStack_60 [8];
  
  if (param_3 != 0) {
    do {
      FUN_10865009c();
    } while (extraout_w10 != 0);
    do {
      FUN_10865009c();
    } while (extraout_w10_00 != 0);
  }
  uStack_70 = param_2;
  lStack_68 = param_3;
  func_0x0001052c2514(auStack_60,&uStack_70);
  func_0x0001086503bc();
  if ((bool)in_ZR) {
    func_0x0001052c26b0(auStack_60);
    FUN_10864fd58();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108650220();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10864f820(auStack_60[0]);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108650250();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108650188();
  func_0x00010865019c();
  func_0x0001086501b8();
  func_0x0001052c2774(auStack_60);
  func_0x0001052c2468(&uStack_70);
  func_0x0001086502f4();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10864fcd0; end: 10864fcd3;  */

undefined8 * FUN_10864fcd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60020;
  FUN_10864fe0c(param_1 + 1);
  return param_1;
}



/* Entry: 10864fcd4; end: 10864fce7;  */

void FUN_10864fcd4(void)

{
  FUN_10864fd2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10864fce8; end: 10864fd2b;  */

void FUN_10864fce8(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010865016c();
  if (param_3 != 0) {
    do {
      func_0x00010865009c();
    } while (extraout_w10 != 0);
  }
  FUN_10864faf0(param_1 + 8);
  func_0x000108650314();
  return;
}



/* Entry: 10864fd2c; end: 10864fd57;  */

undefined8 * FUN_10864fd2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60020;
  FUN_10864fe0c(param_1 + 1);
  return param_1;
}



/* Entry: 10864fd58; end: 10864fe0b;  */

void FUN_10864fd58(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x48);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    lVar3 = lVar4;
    FUN_10864e578(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    func_0x0001086501b8();
  }
  func_0x00010bf51e00(puVar2);
  func_0x000108650180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10864fe0c; end: 10864fe2b;  */

void FUN_10864fe0c(void)

{
  func_0x000108650190();
  func_0x000108650348();
  return;
}



/* Entry: 10864fe2c; end: 10864fff3;  */

void FUN_10864fe2c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 auStack_60 [8];
  
  if (param_3 != 0) {
    do {
      FUN_10865009c();
    } while (extraout_w10 != 0);
    do {
      FUN_10865009c();
    } while (extraout_w10_00 != 0);
  }
  uStack_70 = param_2;
  lStack_68 = param_3;
  func_0x0001052c2ba0(auStack_60,&uStack_70);
  func_0x0001086503bc();
  if ((bool)in_ZR) {
    func_0x0001052c2c6c(auStack_60);
    FUN_10864e4fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108650220();
    func_0x00010bfbaec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10864f820(auStack_60[0]);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108650250();
    func_0x00010bfbaba0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000108650188();
  func_0x00010865019c();
  func_0x0001086501b8();
  func_0x0001052c2af4(&uStack_70);
  func_0x0001086502ec();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10864fff4; end: 10864fff7;  */

undefined8 * FUN_10864fff4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60060;
  func_0x00010865007c(param_1 + 1);
  return param_1;
}



/* Entry: 10864fff8; end: 10865000b;  */

void FUN_10864fff8(void)

{
  FUN_108650050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865000c; end: 10865004f;  */

void FUN_10865000c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010865016c();
  if (param_3 != 0) {
    do {
      func_0x00010865009c();
    } while (extraout_w10 != 0);
  }
  FUN_10864fe2c(param_1 + 8);
  func_0x000108650304();
  return;
}



/* Entry: 108650050; end: 10865009b;  */

undefined8 * FUN_108650050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60060;
  func_0x00010865007c(param_1 + 1);
  return param_1;
}



/* Entry: 10865009c; end: 1086503cf;  */

void FUN_10865009c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1086503d0; end: 108650487;  */

void FUN_1086503d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a600d8;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108650488);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1086507b8(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108650488; end: 108650587;  */

void FUN_108650488(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a60118;
  puVar4[3] = &PTR_DAT_1107e8e08;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a60168;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1086507b8(&uStack_50);
  return;
}



/* Entry: 108650588; end: 10865058b;  */

void FUN_108650588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60118;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10865058c; end: 10865059f;  */

void FUN_10865058c(void)

{
  FUN_1086507a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086505a0; end: 1086505ab;  */

long FUN_1086505a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a600d8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1086505ac; end: 1086505eb;  */

void FUN_1086505ac(void)

{
  func_0x00010865081c();
  return;
}



/* Entry: 1086505ec; end: 10865063b;  */

void FUN_1086505ec(void)

{
  func_0x0001086507f8();
  func_0x00010865080c();
  FUN_10864e4c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2a60();
  func_0x0001086507f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10865063c; end: 10865068b;  */

void FUN_10865063c(void)

{
  func_0x0001086507f8();
  func_0x00010865080c();
  FUN_10864fd58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5580();
  func_0x0001086507f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10865068c; end: 1086506db;  */

void FUN_10865068c(void)

{
  func_0x0001086507f8();
  func_0x00010865080c();
  FUN_10864fd58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5560();
  func_0x0001086507f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 1086506dc; end: 108650713;  */

void FUN_1086506dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e5540(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108650714; end: 1086507a7;  */

long FUN_108650714(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a600d8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1086507a8; end: 1086507b7;  */

void FUN_1086507a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60118;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086507b8; end: 1086507e3;  */

long FUN_1086507b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1086507e4; end: 108650827;  */

void FUN_1086507e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108650828; end: 108650997;  */

void FUN_108650828(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  _objc_retain();
  func_0x00010bf12ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_60);
  func_0x00010c15ade0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_80);
  func_0x00010c14fa80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_a0);
  func_0x00010bf14060(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_c0);
  func_0x0001052bee48(param_1,auStack_60,auStack_80,auStack_a0,auStack_c0);
  func_0x000107c279a4(auStack_c0);
  _objc_release(param_2);
  func_0x000107c279a4(auStack_a0);
  func_0x000108650a90();
  func_0x000107c279a4(auStack_80);
  func_0x000108650a88();
  func_0x000107c279a4(auStack_60);
  func_0x000108650aa0();
  func_0x000108650a98();
  return;
}



/* Entry: 108650998; end: 108650a87;  */

void FUN_108650998(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ba6b8;
  _objc_alloc(PTR_PTR_1126ba6b8);
  lVar2 = param_1;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  func_0x0001006a7df8(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x40;
  func_0x0001006a7df8(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x60;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6120(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  func_0x000108650a90();
  func_0x000108650a88();
  func_0x000108650aa0();
  func_0x000108650a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108650a88; end: 108650aa7;  */

void FUN_108650a88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108650aa8; end: 108650c1f;  */

void FUN_108650aa8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_128 [136];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008fef48(auStack_68);
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_80);
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_a0);
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108650c20(auStack_128);
  func_0x0001052bf288(param_1,auStack_68,auStack_80,auStack_a0,auStack_128);
  func_0x000104be4be4(auStack_128);
  _objc_release(param_2);
  func_0x000107c279a4(auStack_a0);
  func_0x000108650da4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000108650d9c();
  func_0x000107c27914(auStack_68);
  func_0x000108650dac();
  func_0x000108650d94();
  return;
}



/* Entry: 108650c20; end: 108650c8f;  */

void FUN_108650c20(undefined1 *param_1,long param_2)

{
  undefined1 auStack_a0 [128];
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x80] = 0;
  }
  else {
    FUN_108650828(auStack_a0,param_2);
    func_0x0001052bf324(param_1,auStack_a0);
    func_0x000104be4c04(auStack_a0);
  }
  FUN_108650d94();
  return;
}



/* Entry: 108650c90; end: 108650d93;  */

void FUN_108650c90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ba6c0;
  _objc_alloc(PTR_PTR_1126ba6c0);
  lVar2 = param_1;
  func_0x00010bcc3af0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x000107c27f28(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  func_0x0001006a7df8(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    param_1 = param_1 + 0x50;
    FUN_108650998(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c05c020(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  func_0x000108650da4();
  func_0x000108650d9c();
  func_0x000108650dac();
  func_0x000108650d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108650d94; end: 108650db3;  */

void FUN_108650d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108650db4; end: 108650eb3;  */

void FUN_108650db4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a60230;
  puVar4[3] = &PTR_DAT_110a602a8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a60280;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108651050(&uStack_50);
  return;
}



/* Entry: 108650eb4; end: 108650eb7;  */

void FUN_108650eb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60230;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108650eb8; end: 108650ecb;  */

void FUN_108650eb8(void)

{
  FUN_108651040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



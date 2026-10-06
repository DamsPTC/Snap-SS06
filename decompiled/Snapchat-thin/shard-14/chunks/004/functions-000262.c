/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1a3cac; end: 10b1a3d43;  */

long FUN_10b1a3cac(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b1257d4(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10b1a3d44; end: 10b1a3da7;  */

void FUN_10b1a3d44(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar3 = *(long **)(param_1 + 0x48);
    plVar1 = *(long **)(*(long *)(param_1 + 0x40) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x50) = 0;
    while (plVar3 != (long *)(param_1 + 0x40)) {
      plVar3 = (long *)plVar3[1];
      FUN_10b1a3da8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b1a3da8; end: 10b1a3dc7;  */

void FUN_10b1a3da8(void)

{
  func_0x00010b1aa77c();
  func_0x000107c27938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a3dc8; end: 10b1a3de7;  */

void FUN_10b1a3dc8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b1a3de8();
  }
  return;
}



/* Entry: 10b1a3de8; end: 10b1a3f9b;  */

void FUN_10b1a3de8(long param_1)

{
  func_0x00010b1aac80();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1a3f9c; end: 10b1a3fbb;  */

void FUN_10b1a3f9c(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_10b12ec28();
  }
  return;
}



/* Entry: 10b1a3fbc; end: 10b1a3fc7;  */

undefined1 FUN_10b1a3fbc(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam000000011336c428 & 1) == 0) {
    iVar2 = 0x1336c428;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = 0x38;
      func_0x000107c2be10();
      uRam000000011336c420 = uVar1;
      ___cxa_guard_release(0x11336c428);
    }
  }
  return uRam000000011336c420;
}



/* Entry: 10b1a3fc8; end: 10b1a4047;  */

undefined1 FUN_10b1a3fc8(undefined1 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam000000011336c428 & 1) == 0) {
    iVar2 = 0x1336c428;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = param_1;
      func_0x000107c2be10();
      uRam000000011336c420 = uVar1;
      ___cxa_guard_release(0x11336c428);
    }
  }
  return uRam000000011336c420;
}



/* Entry: 10b1a4048; end: 10b1a4073;  */

undefined8 FUN_10b1a4048(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b1a4074(&uStack_28);
  return param_1;
}



/* Entry: 10b1a4074; end: 10b1a408b;  */

void FUN_10b1a4074(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a408c; end: 10b1a40d7;  */

/* WARNING: Possible PIC construction at 0x00010b1a40c8: Changing call to branch */

long * FUN_10b1a408c(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0xfffffffffffffff;
    }
    return plVar2;
  }
  func_0x00010b1aa350();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    param_4 = 0;
  }
  else {
    func_0x00010b1a4120();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + (long)param_2 * 0x10;
  return param_1;
}



/* Entry: 10b1a40d8; end: 10b1a4143;  */

long * FUN_10b1a40d8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b1a4120();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b1a4144; end: 10b1a415f;  */

long * FUN_10b1a4144(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10b1a418c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1a4160; end: 10b1a418b;  */

long * FUN_10b1a4160(long *param_1)

{
  FUN_10b1a418c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1a418c; end: 10b1a41af;  */

void FUN_10b1a418c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b1a41b0; end: 10b1a41d3;  */

void FUN_10b1a41b0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b1a3de8();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10b1a41d4; end: 10b1a41d7;  */

void FUN_10b1a41d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2960;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a41d8; end: 10b1a41eb;  */

void FUN_10b1a41d8(void)

{
  FUN_10b1a421c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a41ec; end: 10b1a421b;  */

void FUN_10b1a41ec(long param_1)

{
  func_0x000107c281bc(param_1 + 0x88);
  FUN_10b1a422c(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b1a421c; end: 10b1a422b;  */

void FUN_10b1a421c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a422c; end: 10b1a4267;  */

void FUN_10b1a422c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010b1a424c();
  }
  return;
}



/* Entry: 10b1a4268; end: 10b1a4467;  */

void FUN_10b1a4268(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 extraout_w8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  uStack_90 = param_2;
  lStack_88 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  uStack_80 = param_2;
  lStack_78 = param_3;
  __ZNSt3__115recursive_mutex4lockEv(*param_1);
  FUN_10b10e164(&uStack_50,&uStack_80);
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x68) == '\x01') {
    if (*(char *)(lVar1 + 0x60) == '\x01') {
      *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_44,uStack_48);
      *(undefined8 *)(lVar1 + 0x40) = uStack_50;
      *(undefined8 *)(lVar1 + 0x54) = uStack_3c;
      *(ulong *)(lVar1 + 0x4c) = CONCAT44(uStack_40,uStack_44);
    }
    else {
      __ZNSt13exception_ptrD1Ev(lVar1 + 0x40);
      func_0x00010b1ab130();
    }
  }
  else {
    func_0x00010b1ab130();
    *(undefined1 *)(lVar1 + 0x68) = extraout_w8;
  }
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0x70);
  uStack_60 = *(undefined8 *)(lVar1 + 0x80);
  puVar3 = *(undefined8 **)(lVar1 + 0x78);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  puStack_70 = puVar2;
  puStack_68 = puVar3;
  func_0x00010b1aaf28();
  for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)*puVar2)();
  }
  func_0x000107c281bc(&puStack_70);
  func_0x0001052b7ddc(&uStack_80);
  func_0x0001052b7ddc(&uStack_90);
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b1a4468; end: 10b1a446b;  */

undefined8 * FUN_10b1a4468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc29b0;
  FUN_10b1a4518(param_1 + 1);
  return param_1;
}



/* Entry: 10b1a446c; end: 10b1a447f;  */

void FUN_10b1a446c(void)

{
  FUN_10b1a44d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a4480; end: 10b1a44d3;  */

void FUN_10b1a4480(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = *param_2;
  lStack_28 = param_2[1];
  if (lStack_28 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  FUN_10b1a4268(param_1 + 8);
  func_0x0001052b7ddc(&uStack_30);
  return;
}



/* Entry: 10b1a44d4; end: 10b1a44ff;  */

undefined8 * FUN_10b1a44d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc29b0;
  FUN_10b1a4518(param_1 + 1);
  return param_1;
}



/* Entry: 10b1a4500; end: 10b1a4517;  */

void FUN_10b1a4500(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b1a4518; end: 10b1a453b;  */

long FUN_10b1a4518(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1aa77c();
  func_0x000107c27b70();
  lVar1 = unaff_x19;
  func_0x00010b1aac80();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1a453c; end: 10b1a45c3;  */

void FUN_10b1a453c(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b1aa63c();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      func_0x00010b1aafb0();
      lVar1 = unaff_x21;
    }
    func_0x00010b1aa418();
  }
  return;
}



/* Entry: 10b1a45c4; end: 10b1a461b;  */

long * FUN_10b1a45c4(long *param_1)

{
  long lVar1;
  code *extraout_x8;
  long lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00010b1aaa24(param_1[3]);
    (*extraout_x8)();
  }
  func_0x0001052a9ef8(param_1 + 3);
  func_0x00010007e5dc(&stack0xffffffffffffffd8);
  return param_1;
}



/* Entry: 10b1a461c; end: 10b1a463f;  */

void FUN_10b1a461c(void)

{
  func_0x00010b1aa788();
  func_0x00010b1a2304();
  return;
}



/* Entry: 10b1a4640; end: 10b1a466f;  */

long FUN_10b1a4640(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_10b1a3808(param_1 + 0x10);
  }
  return param_1;
}



/* Entry: 10b1a4670; end: 10b1a46c7;  */

void FUN_10b1a4670(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1aa568();
  FUN_10b1a46c8();
  FUN_10b17dc44(param_1 + 0x50,unaff_x20 + 0x50);
  FUN_10b17d8dc(unaff_x19 + 0x68,unaff_x20 + 0x68);
  return;
}



/* Entry: 10b1a46c8; end: 10b1a4727;  */

void FUN_10b1a46c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b1ab1c4();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 10b1a4728; end: 10b1a4757;  */

undefined8 FUN_10b1a4728(undefined8 param_1,long param_2,long param_3)

{
  func_0x00010b1ab040(param_1,param_2,param_2 + param_3 * 0x98,param_3);
  FUN_10b1a4758();
  return param_1;
}



/* Entry: 10b1a4758; end: 10b1a47cb;  */

void FUN_10b1a4758(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010b1ab158();
    FUN_10b1a47cc();
    FUN_10b1a4814();
  }
  uStack_38 = 1;
  FUN_10b1a48ec(&uStack_40);
  return;
}



/* Entry: 10b1a47cc; end: 10b1a4813;  */

void FUN_10b1a47cc(long param_1,ulong param_2)

{
  long lVar1;
  long *unaff_x19;
  
  if (param_2 < 0x1af286bca1af287) {
    func_0x00010b1aa77c();
    func_0x00010b17dad4();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x98;
  }
  else {
    FUN_10b17da7c();
    lVar1 = param_1 + 0x10;
    FUN_10b1a4848();
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10b1a4814; end: 10b1a4847;  */

void FUN_10b1a4814(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10b1a4848();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b1a4848; end: 10b1a485b;  */

void FUN_10b1a4848(void)

{
  FUN_10b1a485c();
  return;
}



/* Entry: 10b1a485c; end: 10b1a48eb;  */

long FUN_10b1a485c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_10b17dbf4(param_4,param_2);
    param_4 = lStack_38 + 0x98;
  }
  uStack_48 = 1;
  FUN_10b17dd94(&uStack_60);
  return param_4;
}



/* Entry: 10b1a48ec; end: 10b1a4917;  */

long FUN_10b1a48ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010b17def4(param_1);
  }
  return param_1;
}



/* Entry: 10b1a4918; end: 10b1a4937;  */

void FUN_10b1a4918(long param_1)

{
  if (*(char *)(param_1 + 0x180) == '\x01') {
    FUN_10b1213b8();
  }
  return;
}



/* Entry: 10b1a4938; end: 10b1a4997;  */

undefined8 FUN_10b1a4938(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b1a4964(&uStack_28);
  return param_1;
}



/* Entry: 10b1a4998; end: 10b1a499f;  */

void FUN_10b1a4998(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1aa574(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x80) {
    FUN_10b1a3808(lVar1 + -0x70);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1a49a0; end: 10b1a49df;  */

void FUN_10b1a49a0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1aa574();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x80) {
    FUN_10b1a3808(lVar1 + -0x70);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1a49e0; end: 10b1a49fb;  */

void FUN_10b1a49e0(long param_1)

{
  FUN_10b1a49fc();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 10b1a49fc; end: 10b1a4a57;  */

undefined8 * FUN_10b1a49fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x00010b1a4a24(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10b1a4a58; end: 10b1a4a8f;  */

void FUN_10b1a4a58(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b1a461c();
  }
  return;
}



/* Entry: 10b1a4a90; end: 10b1a4b93;  */

void FUN_10b1a4a90(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1aa63c();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x10;
      FUN_10b0fb81c();
    }
    func_0x00010b1aa418();
  }
  return;
}



/* Entry: 10b1a4b94; end: 10b1a4bbb;  */

void FUN_10b1a4b94(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 != *(char *)(param_2 + 0xf)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xf) == '\x01') {
        func_0x00010529fe04();
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      return;
    }
    FUN_10b121fd0();
    *(undefined1 *)(param_1 + 0xf) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b198df4();
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    func_0x000107c27d2c(param_1 + 4,param_2 + 4);
    func_0x000107c27c5c(unaff_x20 + 0x38,unaff_x19 + 0x38);
    func_0x000107c27c5c(unaff_x20 + 0x58,unaff_x19 + 0x58);
    return;
  }
  return;
}



/* Entry: 10b1a4bbc; end: 10b1a4bdf;  */

void FUN_10b1a4bbc(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00010529fe04();
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}



/* Entry: 10b1a4be0; end: 10b1a4c13;  */

undefined1 * FUN_10b1a4be0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x78] = 0;
  FUN_10b1a4c14();
  return param_1;
}



/* Entry: 10b1a4c14; end: 10b1a4c27;  */

void FUN_10b1a4c14(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_10b121fd0();
    *(undefined1 *)(param_1 + 0x78) = 1;
    return;
  }
  return;
}



/* Entry: 10b1a4c28; end: 10b1a4c4f;  */

void FUN_10b1a4c28(void)

{
  long unaff_x19;
  
  func_0x00010b1ab1b8();
  FUN_10b14bab0();
  func_0x00010b129c40(unaff_x19 + 8);
  return;
}



/* Entry: 10b1a4c50; end: 10b1a4e5f;  */

void FUN_10b1a4c50(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar6;
  undefined1 auStack_408 [48];
  undefined8 uStack_3d8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  undefined1 auStack_3c0 [64];
  undefined1 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined **ppuStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined1 auStack_310 [632];
  undefined1 auStack_98 [48];
  char cStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  char cStack_48;
  undefined8 uStack_38;
  
  func_0x00010b1aa2b8();
  lVar1 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  uStack_38 = extraout_x8;
  FUN_10b19af84(auStack_360,lVar3);
  uVar6 = *(undefined8 *)(lVar1 + 0xe0);
  func_0x00010b1aaea0();
  FUN_10b1f6c64(auStack_310,uVar6,lVar1 + 0xf0,lVar3 + 0x20);
  FUN_10b1151e4(lVar1 + 0xf0,auStack_310);
  FUN_10b19cf4c(lVar1,&UNK_10f7315f8,0x16,&UNK_10f73160f,0x1a);
  uVar2 = cStack_68 == '\x01';
  if ((bool)uVar2) {
    puVar4 = &uStack_350;
    FUN_10b16a0a0(puVar4,auStack_98);
    *(code **)(lVar1 + 0x680) = FUN_10b1a4e60;
    ppuStack_60 = &PTR_FUN_110cc2a48;
    func_0x00010b1aa704();
    FUN_10b16a0a0();
    puStack_58 = puVar4;
    func_0x000107c2816c(lVar1 + 0x688,&ppuStack_60);
    (*(code *)*ppuStack_60)(&ppuStack_60);
    func_0x000107c281f0(&uStack_350);
    auStack_3c0[0] = 0;
    uStack_380 = 0;
  }
  else {
    func_0x00010b1aa928();
    func_0x000107c278b8(&uStack_378);
    func_0x000105c3d724(&ppuStack_60,&UNK_10f73162a);
    uStack_340 = uStack_368;
    uStack_348 = uStack_370;
    uStack_350 = uStack_378;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_378 = 0;
    uStack_338 = 4;
    ppuStack_330 = (undefined **)((ulong)ppuStack_330 & 0xffffffffffffff00);
    uVar2 = cStack_48 == '\x01';
    if ((bool)uVar2) {
      puStack_328 = puStack_58;
      ppuStack_330 = ppuStack_60;
      uStack_320 = uStack_50;
      puStack_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      ppuStack_60 = (undefined **)0x0;
    }
    uStack_318 = uVar2;
    func_0x0001052b8c70(auStack_3c0,&uStack_350);
    func_0x0001052a03ac(&uStack_350);
    func_0x000107c279a4(&ppuStack_60);
    func_0x00010b1aaa90();
  }
  FUN_10b1a4f18(auStack_310);
  func_0x00010b1aaa60();
  FUN_10b14bc84(unaff_x19 + 0x28,auStack_3c0);
  func_0x0001052a038c(auStack_3c0);
  func_0x00010b1aa28c(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1aaa90();
  FUN_10b1a4f18(auStack_310);
  func_0x00010b1aaa60();
  func_0x00010b1aa3d8();
  pcStack_3c8 = FUN_10b1a4e60;
  puStack_3d0 = &stack0xfffffffffffffff0;
  func_0x00010b1aa2f0();
  func_0x00010b1aaab0();
  puVar5 = auStack_408;
  func_0x000107c281f0();
  func_0x00010b1aa28c(uStack_3d8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar5 + 8) != 0) {
    func_0x000107c281f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a4e60; end: 10b1a4e93;  */

void FUN_10b1a4e60(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [48];
  undefined8 uStack_18;
  
  func_0x00010b1aa2f0();
  func_0x00010b1aaab0();
  puVar1 = auStack_48;
  func_0x000107c281f0();
  func_0x00010b1aa28c(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 8) != 0) {
    func_0x000107c281f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a4e94; end: 10b1a4ebb;  */

void FUN_10b1a4e94(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c281f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a4ebc; end: 10b1a4ebf;  */

void FUN_10b1a4ebc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1a4ec0; end: 10b1a4f07;  */

undefined8 * FUN_10b1a4ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110cc2a60;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  param_1[3] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_10b14bbfc(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 10b1a4f08; end: 10b1a4f17;  */

void FUN_10b1a4f08(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1ab1b8(param_1 + 8);
  FUN_10b14bab0();
  func_0x00010b129c40(unaff_x19 + 8);
  return;
}



/* Entry: 10b1a4f18; end: 10b1a4f57;  */

void FUN_10b1a4f18(long param_1)

{
  if (*(char *)(param_1 + 0x2a8) == '\x01') {
    func_0x000107c281f0(param_1 + 0x278);
  }
  func_0x00010b121b30(param_1 + 0x1d8);
  func_0x00010b12186c(param_1 + 0x1c8);
  FUN_10b121bd4(param_1 + 0x180);
  func_0x00010b135e7c();
  func_0x00010b135e84();
  func_0x00010b135f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1a4f58; end: 10b1a4f63;  */

void FUN_10b1a4f58(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  func_0x00010b1aa350();
  lVar1 = *(long *)(param_1 + 8);
  while( true ) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (lVar1 == *(long *)(*plVar2 + 8)) {
      return;
    }
    if ((char)plVar2[3] == '\x01') {
      *(undefined1 *)(plVar2 + 3) = 0;
    }
    lVar1 = lVar1 + 0x10;
    FUN_10b1a4fec();
    plVar2[1] = lVar1;
    plVar2[2] = param_2;
    *(undefined1 *)(plVar2 + 3) = 1;
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    *(long *)(param_1 + 0x10) = lVar1;
    if (plVar2[1] + param_2 != lVar1) break;
    lVar1 = *(long *)(param_1 + 8) + 0x20;
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10b1a4f64; end: 10b1a4feb;  */

void FUN_10b1a4f64(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while( true ) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (lVar1 == *(long *)(*plVar2 + 8)) {
      return;
    }
    if ((char)plVar2[3] == '\x01') {
      *(undefined1 *)(plVar2 + 3) = 0;
    }
    lVar1 = lVar1 + 0x10;
    FUN_10b1a4fec();
    plVar2[1] = lVar1;
    plVar2[2] = param_2;
    *(undefined1 *)(plVar2 + 3) = 1;
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    *(long *)(param_1 + 0x10) = lVar1;
    if (plVar2[1] + param_2 != lVar1) break;
    lVar1 = *(long *)(param_1 + 8) + 0x20;
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10b1a4fec; end: 10b1a503f;  */

undefined1  [16] FUN_10b1a4fec(long *param_1)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined1 auVar3 [16];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010b1aa6d0();
    (*extraout_x8)();
    lVar2 = *param_1;
    if (lVar2 != 0) {
      func_0x00010b1aa5b4();
      (*extraout_x8_00)();
      goto LAB_10b1a5030;
    }
  }
  lVar2 = 0;
LAB_10b1a5030:
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 10b1a5040; end: 10b1a5087;  */

void FUN_10b1a5040(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1aa63c();
  if (unaff_x20 != 0) {
    for (lVar1 = *(long *)(unaff_x19 + 8); lVar1 != unaff_x20; lVar1 = lVar1 + -0x20) {
      func_0x000107c27d78(lVar1 + -0x10);
    }
    func_0x00010b1aa418();
  }
  return;
}



/* Entry: 10b1a5088; end: 10b1a530b;  */

void FUN_10b1a5088(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 extraout_w8;
  long lVar7;
  ulong extraout_x8;
  ulong extraout_x9;
  int extraout_w10;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  puVar3 = (undefined8 *)0x80;
  __Znwm();
  *puVar3 = FUN_10b1a958c;
  puVar3[1] = FUN_10b1a9678;
  func_0x0001052b7b6c(puVar3 + 2);
  puVar10 = puVar3 + 7;
  *(undefined1 *)puVar10 = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  func_0x0001052b7b20(param_1,puVar3 + 2);
  puVar4 = param_2;
  FUN_10b1a530c();
  uVar5 = *param_2;
  if ((int)puVar4 == 0) {
    lVar7 = param_2[1];
    puVar3[0xd] = uVar5;
    puVar3[0xe] = lVar7;
    if (lVar7 != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10 != 0);
    }
    puVar4 = puVar3 + 0xd;
    FUN_10b1a530c();
    if (((ulong)puVar4 & 1) == 0) {
      *(undefined1 *)(puVar3 + 0xf) = 0;
      uVar5 = puVar3[0xd];
      __ZNSt3__115recursive_mutex4lockEv(uVar5);
      lVar7 = puVar3[0xd];
      if ((*(byte *)(lVar7 + 0x68) & 1) != 0) {
        __ZNSt3__115recursive_mutex6unlockEv(uVar5);
        (*(code *)*puVar3)(puVar3);
        return;
      }
      puVar4 = *(undefined8 **)(lVar7 + 0x78);
      if (puVar4 < *(undefined8 **)(lVar7 + 0x80)) {
        puVar10 = puVar4 + 1;
        *puVar4 = puVar3;
      }
      else {
        lVar8 = *(long *)(lVar7 + 0x70);
        lVar9 = (long)puVar4 - lVar8 >> 3;
        if (lVar9 + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b1a529c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1a52a0);
          (*pcVar2)();
        }
        func_0x00010b1ab0e4((long)*(undefined8 **)(lVar7 + 0x80) - lVar8);
        uVar1 = extraout_x9;
        if (0x7ffffffffffffff7 < extraout_x8) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar6 = 0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1a529c;
          }
          lVar6 = uVar1 << 3;
          __Znwm();
        }
        puVar4 = (undefined8 *)(lVar6 + ((long)puVar4 - lVar8));
        puVar10 = puVar4 + 1;
        *puVar4 = puVar3;
        func_0x00010b1aaf7c(puVar4 + -lVar9);
        *(undefined8 **)(lVar7 + 0x70) = puVar4 + -lVar9;
        *(undefined8 **)(lVar7 + 0x78) = puVar10;
        *(ulong *)(lVar7 + 0x80) = lVar6 + uVar1 * 8;
        if (lVar8 != 0) {
          func_0x00010b1aaee0();
        }
      }
      *(undefined8 **)(lVar7 + 0x78) = puVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar5);
      return;
    }
    uVar5 = puVar3[0xd];
    FUN_10b1a533c(uVar5);
    FUN_10b1a5388(puVar10,uVar5);
    func_0x00010b1aaf20();
  }
  else {
    FUN_10b1a533c();
    FUN_10b1a5388(puVar10,uVar5);
  }
  func_0x00010b1aa598();
  *(undefined1 *)(puVar3 + 0xf) = extraout_w8;
  if (*(char *)(puVar3 + 0xb) == '\x01') {
    puStack_68 = puVar10;
    func_0x00010b1ab098();
    func_0x0001052b80c8();
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_70,puVar10);
    puStack_68 = &uStack_70;
    func_0x00010b1ab098();
    func_0x0001052b7f08();
    __ZNSt13exception_ptrD1Ev(&uStack_70);
  }
  func_0x00010b1aae80();
  func_0x00010b1aa42c();
  return;
}



/* Entry: 10b1a530c; end: 10b1a533b;  */

undefined1 FUN_10b1a530c(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b1aa63c();
  __ZNSt3__115recursive_mutex4lockEv();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x68);
  func_0x00010b1aaf28();
  return uVar1;
}



/* Entry: 10b1a533c; end: 10b1a5387;  */

long FUN_10b1a533c(long param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return param_1 + 0x40;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,param_1 + 0x40);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1a537c);
  (*pcVar1)();
}



/* Entry: 10b1a5388; end: 10b1a53bb;  */

void FUN_10b1a5388(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b1aa574();
  FUN_10b1a53bc();
  uVar1 = *unaff_x19;
  uVar3 = unaff_x19[3];
  uVar2 = unaff_x19[2];
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar3;
  unaff_x20[2] = uVar2;
  *(undefined1 *)(unaff_x20 + 4) = 1;
  *(undefined1 *)(unaff_x20 + 5) = 1;
  return;
}



/* Entry: 10b1a53bc; end: 10b1a53df;  */

void FUN_10b1a53bc(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010b1a424c();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b1a53e0; end: 10b1a5407;  */

long FUN_10b1a53e0(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  FUN_10b1a422c(param_1 + 0x28);
  func_0x0001052b8464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x0001052b7e74(unaff_x19,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052b7ddc(unaff_x19 + 0x18);
  func_0x0001052b7ddc((long *)(param_1 + 8));
  return unaff_x19;
}



/* Entry: 10b1a5408; end: 10b1a543b;  */

void FUN_10b1a5408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_2 + 4) == '\x01') {
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}



/* Entry: 10b1a543c; end: 10b1a5447;  */

long FUN_10b1a543c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1aa350();
  func_0x00010b1aa77c();
  FUN_10b1a3dc8();
  lVar1 = unaff_x19;
  func_0x00010b1aac80();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1a5448; end: 10b1a54db;  */

long FUN_10b1a5448(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1aa77c();
  FUN_10b1a3dc8();
  lVar1 = unaff_x19;
  func_0x00010b1aac80();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1a54dc; end: 10b1a55eb;  */

void FUN_10b1a54dc(undefined8 param_1,long *param_2)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar2;
  long extraout_x10;
  long *plVar3;
  long extraout_x10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  long *unaff_x19;
  long lStack_48;
  
  func_0x00010b1aa480();
  FUN_10b1a3910();
  plVar3 = unaff_x19 + 1;
  if (param_2 != plVar3) {
    func_0x00010b1ab0d8(*(undefined8 *)(lStack_48 + 0x20));
    uVar2 = extraout_w11;
    if (extraout_x10 != extraout_x8) {
      uVar2 = (uint)(extraout_x10 < extraout_x8);
    }
    if ((uVar2 & 1) != 0) {
      while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
        while( true ) {
          func_0x00010b1ab0d8();
          uVar2 = extraout_w11_00;
          if (extraout_x10_00 != extraout_x8_00) {
            uVar2 = (uint)(extraout_x10_00 < extraout_x8_00);
          }
          if (uVar2 != 1) break;
          plVar3 = (long *)plVar3[1];
          if (plVar3 == (long *)0x0) goto LAB_10b1a55d0;
        }
      }
      goto LAB_10b1a55d0;
    }
  }
  if (param_2 != (long *)*unaff_x19) {
    func_0x000107c27bdc();
    bVar1 = *(long *)(lStack_48 + 0x28) < param_2[5];
    if (*(long *)(lStack_48 + 0x20) != param_2[4]) {
      bVar1 = *(long *)(lStack_48 + 0x20) < param_2[4];
    }
    if (bVar1) {
      FUN_10b1a3954();
    }
  }
LAB_10b1a55d0:
  FUN_10b1a39a8();
  func_0x00010b1aad60();
  FUN_10b1a3a10();
  return;
}



/* Entry: 10b1a55ec; end: 10b1a5667;  */

undefined1  [16] FUN_10b1a55ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  undefined1 auVar3 [16];
  
  func_0x00010b1ab158();
  FUN_10b1a5668();
  lVar1 = param_1;
  while ((lVar2 = unaff_x22 + 0x10, lVar1 != unaff_x22 + 0x10 &&
         (lVar2 = lVar1, *(long *)(lVar1 + 0x20) < *(long *)(unaff_x21 + 8)))) {
    FUN_10b1a56e8(param_3);
    func_0x000107c27be0();
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b1a5668; end: 10b1a56e7;  */

long FUN_10b1a5668(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long alStack_40 [2];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1 + 0x10;
  }
  else {
    alStack_40[0] = *param_2;
    alStack_40[1] = 0x8000000000000000;
    lVar1 = param_1 + 8;
    func_0x00010b1a573c(lVar1,alStack_40);
    lVar2 = lVar1;
    if ((*(long *)(param_1 + 8) != lVar1) &&
       (func_0x00010b1a5734(), *(long *)(lVar2 + 0x28) <= *param_2)) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



/* Entry: 10b1a56e8; end: 10b1a5733;  */

void FUN_10b1a56e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [128];
  
  uVar1 = *param_1;
  func_0x00010b1a59e4(auStack_a0);
  func_0x00010b1a5800(uVar1,auStack_a0);
  func_0x00010b1aa814();
  return;
}



/* Entry: 10b1a5734; end: 10b1a5787;  */

undefined8 FUN_10b1a5734(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10b1a57b4(&uStack_18,0xffffffffffffffff);
  return uStack_18;
}



/* Entry: 10b1a5788; end: 10b1a57b3;  */

undefined8 FUN_10b1a5788(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10b1a57b4(&uStack_18,-param_2);
  return uStack_18;
}



/* Entry: 10b1a57b4; end: 10b1a585f;  */

void FUN_10b1a57b4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b1aa574();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      uVar1 = *unaff_x20;
      func_0x000107c27bdc();
      *unaff_x20 = uVar1;
    }
  }
  else {
    while (0 < unaff_x19) {
      uVar1 = *unaff_x20;
      func_0x000107c27be0();
      *unaff_x20 = uVar1;
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 10b1a5860; end: 10b1a598b;  */

long * FUN_10b1a5860(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 7) + 1;
  if (uVar1 >> 0x39 == 0) {
    plStack_58 = param_1 + 2;
    uVar6 = *plStack_58 - *param_1;
    uVar7 = (long)uVar6 >> 6;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffff7f < uVar6) {
      uVar7 = 0x1ffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x39 != 0) goto LAB_10b1a5988;
      lVar4 = uVar7 << 7;
      __Znwm();
    }
    lVar8 = lVar4 + lVar8;
    FUN_10b1a49fc(lVar8,param_2);
    lVar10 = *param_1;
    lVar3 = param_1[1];
    lVar2 = lVar8 + (lVar10 - lVar3);
    lVar5 = lVar2;
    for (lVar9 = lVar10; lVar9 != lVar3; lVar9 = lVar9 + 0x80) {
      FUN_10b1a49fc(lVar5,lVar9);
      lVar5 = lVar5 + 0x80;
    }
    for (; lVar10 != lVar3; lVar10 = lVar10 + 0x80) {
      FUN_10b1a3808(lVar10 + 0x10);
    }
    lStack_78 = *param_1;
    *param_1 = lVar2;
    param_1[1] = lVar8 + 0x80;
    lStack_60 = param_1[2];
    param_1[2] = lVar4 + uVar7 * 0x80;
    lStack_70 = lStack_78;
    lStack_68 = lStack_78;
    FUN_10b1a5998(&lStack_78);
    return (long *)(lVar8 + 0x80);
  }
  FUN_10b1a598c();
LAB_10b1a5988:
  func_0x000104bd35f4();
  func_0x00010b1aa350();
  lVar8 = param_1[1];
  while (lVar4 = param_1[2], lVar8 != lVar4) {
    param_1[2] = lVar4 + -0x80;
    FUN_10b1a3808(lVar4 + -0x70);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1a598c; end: 10b1a5997;  */

long * FUN_10b1a598c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010b1aa350();
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x80;
    FUN_10b1a3808(lVar1 + -0x70);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1a5998; end: 10b1a5a2f;  */

long * FUN_10b1a5998(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x80;
    FUN_10b1a3808(lVar1 + -0x70);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1a5a30; end: 10b1a5a7f;  */

void FUN_10b1a5a30(undefined8 param_1,long *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  __ZNSt3__17promiseIvE9set_valueEv(param_1);
  func_0x00010787b3fc(&uStack_28);
  return;
}



/* Entry: 10b1a5a80; end: 10b1a5a83;  */

void FUN_10b1a5a80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1a5a84; end: 10b1a5a97;  */

void FUN_10b1a5a84(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a5a98; end: 10b1a5ab3;  */

void FUN_10b1a5a98(long param_1)

{
  FUN_10b1a5a30(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10b1a5ab4; end: 10b1a5ae3;  */

long FUN_10b1a5ab4(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1aab34();
  func_0x00010b1aa858();
  lVar1 = unaff_x19 + 0x20;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10b1a5ae4; end: 10b1a5ae7;  */

void FUN_10b1a5ae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1a5ae8; end: 10b1a5b27;  */

undefined8 FUN_10b1a5ae8(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1ab0c4();
  func_0x00010b124c0c();
  return param_1;
}



/* Entry: 10b1a5b28; end: 10b1a5bff;  */

void FUN_10b1a5b28(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long alStack_58 [2];
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  func_0x00010b11fabc(alStack_58,param_1 + 0x10);
  if (alStack_58[0] != 0) {
    func_0x00010b1aaf30(auStack_30);
    if (*(char *)(alStack_58[0] + 0x589) == '\x01') {
      FUN_10b1a21f4(alStack_58[0] + 0x720);
    }
    else {
      puVar1 = *(undefined8 **)(alStack_58[0] + 0x720);
      uStack_38 = *(undefined8 *)(alStack_58[0] + 0x730);
      puVar2 = *(undefined8 **)(alStack_58[0] + 0x728);
      *(undefined8 *)(alStack_58[0] + 0x720) = 0;
      *(undefined8 *)(alStack_58[0] + 0x728) = 0;
      *(undefined8 *)(alStack_58[0] + 0x730) = 0;
      puStack_48 = puVar1;
      puStack_40 = puVar2;
      FUN_10b1a21f4(alStack_58[0] + 0x720);
      for (; puVar1 != puVar2; puVar1 = puVar1 + 5) {
        FUN_10b1a353c(*puVar1,puVar1 + 2);
      }
      func_0x00010b1a3c58(&puStack_48);
    }
    func_0x00010b1aa648();
  }
  func_0x00010b129c40(alStack_58);
  return;
}



/* Entry: 10b1a5c00; end: 10b1a5c13;  */

void FUN_10b1a5c00(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b1a5c14; end: 10b1a5c63;  */

long * FUN_10b1a5c14(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_10b0faf98(lVar1);
    func_0x00010b1aa5e0();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1a5c64; end: 10b1a5c9b;  */

void FUN_10b1a5c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1a5c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10b1a5c9c; end: 10b1a5ea7;  */

void FUN_10b1a5c9c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010b1aa568();
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
    uVar3 = *unaff_x20;
    puVar2[1] = unaff_x20[1];
    *puVar2 = uVar3;
    puVar2 = puVar2 + 2;
  }
  else {
    plVar1 = unaff_x19;
    FUN_10b1a408c();
    FUN_10b1a40d8(auStack_58,plVar1,unaff_x19[1] - *unaff_x19 >> 4,(ulong *)(param_1 + 0x10));
    uVar3 = *unaff_x20;
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar3;
    puStack_48 = puStack_48 + 2;
    func_0x00010b1ab060();
    func_0x00010b1a5d44();
    puVar2 = (undefined8 *)unaff_x19[1];
    FUN_10b1a4160(auStack_58);
  }
  unaff_x19[1] = (long)puVar2;
  return;
}



/* Entry: 10b1a5ea8; end: 10b1a5edf;  */

void FUN_10b1a5ea8(undefined8 *param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1aa63c();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    func_0x00010b1ab000();
    if ((bool)in_ZR) {
      FUN_10b0fb81c(unaff_x20 + 0x30);
    }
    func_0x00010b1aa5e0();
  }
  return;
}



/* Entry: 10b1a5ee0; end: 10b1a607f;  */

void FUN_10b1a5ee0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10b1a6080(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10b1a6080(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a6080; end: 10b1a6097;  */

void FUN_10b1a6080(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1a6098; end: 10b1a60cf;  */

void FUN_10b1a6098(undefined8 *param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1aa63c();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    func_0x00010b1ab000();
    if ((bool)in_ZR) {
      FUN_10b0faf98(unaff_x20 + 0x18);
    }
    func_0x00010b1aa5e0();
  }
  return;
}



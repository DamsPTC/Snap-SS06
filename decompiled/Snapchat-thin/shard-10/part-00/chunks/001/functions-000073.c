/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10742a118; end: 10742a15b;  */

void FUN_10742a118(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_CY;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010742af70();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 != (undefined8 *)0x0) {
    func_0x00010742bafc();
    if ((bool)in_CY) {
      func_0x000104bd35f4();
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[4] = 0;
      uVar1 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
      param_1[6] = param_2[6];
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      return;
    }
    func_0x00010742bc50();
  }
  func_0x00010742b3a8(0x38);
  return;
}



/* Entry: 10742a15c; end: 10742a187;  */

void FUN_10742a15c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 10742a188; end: 10742a1cf;  */

long * FUN_10742a188(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x38;
    func_0x000107425a2c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10742a1d0; end: 10742a1db;  */

void FUN_10742a1d0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  
  func_0x00010742ae94();
  func_0x00010742b1d0();
  func_0x00010742b688();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x38) {
    FUN_10742a284();
  }
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000107425a78(unaff_x21);
  }
  *(undefined8 *)(unaff_x19 + 8) = unaff_x24;
  uVar1 = *unaff_x20;
  *unaff_x20 = unaff_x24;
  unaff_x20[1] = uVar1;
  func_0x00010742ad40();
  return;
}



/* Entry: 10742a1dc; end: 10742a23f;  */

void FUN_10742a1dc(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  
  func_0x00010742b1d0();
  func_0x00010742b688();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x38) {
    FUN_10742a284();
  }
  for (; unaff_x21 != unaff_x23; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000107425a78(unaff_x21);
  }
  *(undefined8 *)(unaff_x19 + 8) = unaff_x24;
  uVar1 = *unaff_x20;
  *unaff_x20 = unaff_x24;
  unaff_x20[1] = uVar1;
  func_0x00010742ad40();
  return;
}



/* Entry: 10742a240; end: 10742a283;  */

void FUN_10742a240(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 in_CY;
  undefined8 uVar2;
  
  func_0x00010742af70();
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = param_4;
  if (param_2 != (undefined4 *)0x0) {
    func_0x00010742bafc();
    if ((bool)in_CY) {
      func_0x000104bd35f4();
      uVar1 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      *param_1 = uVar1;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      uVar2 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = uVar2;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 10) = 0;
      *(undefined8 *)(param_2 + 0xc) = 0;
      return;
    }
    func_0x00010742bc50();
  }
  func_0x00010742b3a8(0x38);
  return;
}



/* Entry: 10742a284; end: 10742a2bf;  */

void FUN_10742a284(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  return;
}



/* Entry: 10742a2c0; end: 10742a307;  */

long * FUN_10742a2c0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x38;
    func_0x000107425a78();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10742a308; end: 10742a337;  */

void FUN_10742a308(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  uVar5 = param_1[1] - *param_1 >> 2;
  uVar2 = uVar5 <= param_2;
  uVar3 = param_2 == uVar5;
  if (!(bool)uVar2 || (bool)uVar3) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return;
  }
  func_0x00010742b258(param_1,param_2 - uVar5);
  func_0x00010742bae4();
  if (!(bool)uVar2 || (bool)uVar3) {
    puVar4 = *(undefined4 **)(unaff_x19 + 8);
    puVar1 = puVar4;
    for (lVar6 = unaff_x20 << 2; lVar6 != 0; lVar6 = lVar6 + -4) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(unaff_x19 + 8) = puVar4 + unaff_x20;
    return;
  }
  func_0x00010742be60();
  FUN_1073b5434();
  func_0x00010742b52c();
  FUN_1073b531c(auStack_58);
  puVar1 = puStack_48 + unaff_x20;
  for (lVar6 = unaff_x20 << 2; lVar6 != 0; lVar6 = lVar6 + -4) {
    *puStack_48 = 0;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x00010742bb50();
  FUN_1073b52fc();
  func_0x0001073b5364(auStack_58);
  return;
}



/* Entry: 10742a338; end: 10742a3a3;  */

void FUN_10742a338(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,ulong param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_b8 [16];
  undefined4 *puStack_a8;
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_5[2] - *param_5 >> 4) < param_6) {
    if (param_6 >> 0x3c != 0) {
      FUN_10742a500();
      puVar1 = (undefined4 *)param_5[1];
      if (puVar1 < (undefined4 *)param_5[2]) {
        *puVar1 = param_1;
        puVar1[1] = param_2;
        puVar2 = puVar1 + 4;
        puVar1[2] = param_3;
        puVar1[3] = param_4;
      }
      else {
        FUN_10742a5d8(param_5,((long)puVar1 - *param_5 >> 4) + 1);
        func_0x00010742b52c();
        func_0x00010742a548(auStack_b8);
        *puStack_a8 = param_1;
        puStack_a8[1] = param_2;
        puStack_a8[2] = param_3;
        puStack_a8[3] = param_4;
        puStack_a8 = puStack_a8 + 4;
        func_0x00010742bb50();
        func_0x00010742a50c();
        puVar2 = (undefined4 *)param_5[1];
        FUN_10742a59c(auStack_b8);
      }
      param_5[1] = (long)puVar2;
      return;
    }
    func_0x00010742a548(auStack_48,param_6,param_5[1] - *param_5 >> 4);
    func_0x00010742bb50();
    func_0x00010742a50c();
    FUN_10742a59c(auStack_48);
  }
  return;
}



/* Entry: 10742a3a4; end: 10742a463;  */

void FUN_10742a3a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [16];
  undefined4 *puStack_58;
  
  puVar1 = (undefined4 *)param_5[1];
  if (puVar1 < (undefined4 *)param_5[2]) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar2 = puVar1 + 4;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
  }
  else {
    FUN_10742a5d8(param_5,((long)puVar1 - *param_5 >> 4) + 1);
    func_0x00010742b52c();
    func_0x00010742a548(auStack_68);
    *puStack_58 = param_1;
    puStack_58[1] = param_2;
    puStack_58[2] = param_3;
    puStack_58[3] = param_4;
    puStack_58 = puStack_58 + 4;
    func_0x00010742bb50();
    func_0x00010742a50c();
    puVar2 = (undefined4 *)param_5[1];
    FUN_10742a59c(auStack_68);
  }
  param_5[1] = (long)puVar2;
  return;
}



/* Entry: 10742a464; end: 10742a4ff;  */

void FUN_10742a464(void)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  func_0x00010742b258();
  func_0x00010742bae4();
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar2 = *(undefined4 **)(unaff_x19 + 8);
    puVar1 = puVar2;
    for (lVar3 = unaff_x20 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(unaff_x19 + 8) = puVar2 + unaff_x20;
    return;
  }
  func_0x00010742be60();
  FUN_1073b5434();
  func_0x00010742b52c();
  FUN_1073b531c(auStack_58);
  puVar1 = puStack_48 + unaff_x20;
  for (lVar3 = unaff_x20 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puStack_48 = 0;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x00010742bb50();
  FUN_1073b52fc();
  func_0x0001073b5364(auStack_58);
  return;
}



/* Entry: 10742a500; end: 10742a50b;  */

void FUN_10742a500(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010742ae94();
  func_0x00010742b1d0();
  func_0x00010742b004();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010742ad40();
  return;
}



/* Entry: 10742a50c; end: 10742a59b;  */

void FUN_10742a50c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010742b1d0();
  func_0x00010742b004();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010742ad40();
  return;
}



/* Entry: 10742a59c; end: 10742a5d7;  */

void FUN_10742a59c(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010742b828();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x10;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10742a5d8; end: 10742a637;  */

long * FUN_10742a5d8(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_10742a500();
  if ((char)param_1[7] == '\x01') {
    func_0x000107425a78();
  }
  return param_1;
}



/* Entry: 10742a638; end: 10742a63b;  */

void FUN_10742a638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109af2f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10742a63c; end: 10742a64f;  */

void FUN_10742a63c(void)

{
  func_0x00010742a65c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10742a650; end: 10742a66b;  */

undefined8 FUN_10742a650(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c2f714(param_1 + 0xc0);
  FUN_1074259f0(param_1 + 0xa8);
  FUN_107425aac(param_1 + 0x90);
  FUN_107425af4(param_1 + 0x78);
  func_0x000107425b30(param_1 + 0x60);
  func_0x00010731e26c(param_1 + 0x48);
  func_0x000107425e6c(param_1 + 0x30);
  func_0x00010742b198(param_1 + 0x18);
  func_0x000107425ec8();
  return unaff_x19;
}



/* Entry: 10742a66c; end: 10742a72f;  */

long * FUN_10742a66c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10742a730; end: 10742a757;  */

long FUN_10742a730(long param_1)

{
  func_0x00010742aa94(param_1 + 8);
  return param_1;
}



/* Entry: 10742a758; end: 10742a7a7;  */

long * FUN_10742a758(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10742a7a8(lVar1);
    func_0x00010742bd8c();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10742a7a8; end: 10742a7d3;  */

long FUN_10742a7a8(long param_1)

{
  func_0x00010742ac14(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 10742a7d4; end: 10742a7f7;  */

undefined8 FUN_10742a7d4(undefined8 param_1)

{
  FUN_10742a7f8();
  return param_1;
}



/* Entry: 10742a7f8; end: 10742a853;  */

void FUN_10742a7f8(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x40);
  if (*(int *)(param_1 + 0x40) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        func_0x00010742b084((&PTR_FUN_1109af1a8)[*(uint *)(param_1 + 0x40)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_1109af330)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10742a854; end: 10742a863;  */

void FUN_10742a854(long *param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  
  if (*(int *)(*param_1 + 0x40) != 0) {
    func_0x00010742bdd8();
    FUN_10742a940();
    return;
  }
  func_0x00010742b258(param_2,param_3);
  if (((ulong)*param_2 * (ulong)param_2[1] & 0x3fffffffffffffff) != 0) {
    lVar4 = (ulong)param_2[1] * (ulong)*unaff_x19;
    lVar5 = lVar4 * 4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + lVar4 * -4;
      }
    } while (cVar2 != '\0');
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = (long)(0x1f - (int)LZCOUNT((int)lVar5));
    }
    piVar1 = (int *)(lVar4 * 4 + 0x113823db8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 *)unaff_x19 = *unaff_x20;
  func_0x0001073c8268(unaff_x19 + 2,unaff_x20 + 1);
  *(undefined2 *)(unaff_x19 + 4) = *(undefined2 *)(unaff_x20 + 2);
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x20 + 2) = 1;
  return;
}



/* Entry: 10742a864; end: 10742a893;  */

void FUN_10742a864(long param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010742bdd8();
    FUN_10742a940();
    return;
  }
  func_0x00010742b258(param_2,param_3);
  if (((ulong)*param_2 * (ulong)param_2[1] & 0x3fffffffffffffff) != 0) {
    lVar4 = (ulong)param_2[1] * (ulong)*unaff_x19;
    lVar5 = lVar4 * 4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + lVar4 * -4;
      }
    } while (cVar2 != '\0');
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = (long)(0x1f - (int)LZCOUNT((int)lVar5));
    }
    piVar1 = (int *)(lVar4 * 4 + 0x113823db8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 *)unaff_x19 = *unaff_x20;
  func_0x0001073c8268(unaff_x19 + 2,unaff_x20 + 1);
  *(undefined2 *)(unaff_x19 + 4) = *(undefined2 *)(unaff_x20 + 2);
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x20 + 2) = 1;
  return;
}



/* Entry: 10742a894; end: 10742a93f;  */

void FUN_10742a894(uint *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010742b258();
  if (((ulong)*param_1 * (ulong)param_1[1] & 0x3fffffffffffffff) != 0) {
    lVar4 = (ulong)param_1[1] * (ulong)*unaff_x19;
    lVar5 = lVar4 * 4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + lVar4 * -4;
      }
    } while (cVar2 != '\0');
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = (long)(0x1f - (int)LZCOUNT((int)lVar5));
    }
    piVar1 = (int *)(lVar4 * 4 + 0x113823db8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 *)unaff_x19 = *unaff_x20;
  func_0x0001073c8268(unaff_x19 + 2,unaff_x20 + 1);
  *(undefined2 *)(unaff_x19 + 4) = *(undefined2 *)(unaff_x20 + 2);
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x20 + 2) = 1;
  return;
}



/* Entry: 10742a940; end: 10742a94b;  */

void FUN_10742a940(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100171ec4(*param_1,param_1[1]);
  FUN_107425f68();
  func_0x00010742b998();
  FUN_10739f390();
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  return;
}



/* Entry: 10742a94c; end: 10742a973;  */

void FUN_10742a94c(void)

{
  long unaff_x20;
  
  func_0x000100171ec4();
  FUN_107425f68();
  func_0x00010742b998();
  FUN_10739f390();
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  return;
}



/* Entry: 10742a974; end: 10742a97b;  */

void FUN_10742a974(long *param_1,long param_2,long param_3)

{
  if (*(int *)(*param_1 + 0x40) == 1) {
    if (param_2 != param_3) {
      func_0x00010725b5b0();
      func_0x0001073c8e34();
    }
    return;
  }
  func_0x00010742bdd8();
  FUN_10742a9b0();
  return;
}



/* Entry: 10742a97c; end: 10742a9af;  */

void FUN_10742a97c(long param_1,long param_2,long param_3)

{
  if (*(int *)(param_1 + 0x40) == 1) {
    if (param_2 != param_3) {
      func_0x00010725b5b0();
      func_0x0001073c8e34();
    }
    return;
  }
  func_0x00010742bdd8();
  FUN_10742a9b0();
  return;
}



/* Entry: 10742a9b0; end: 10742a9bb;  */

void FUN_10742a9b0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100171ec4(*param_1,param_1[1]);
  FUN_107425f68();
  func_0x00010742b998();
  func_0x0001073c8e34();
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 10742a9bc; end: 10742a9e7;  */

void FUN_10742a9bc(void)

{
  long unaff_x20;
  
  func_0x000100171ec4();
  FUN_107425f68();
  func_0x00010742b998();
  func_0x0001073c8e34();
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 10742a9e8; end: 10742aa3f;  */

long FUN_10742a9e8(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  func_0x000104c2f64c(param_1 + 0x58);
  return param_1;
}



/* Entry: 10742aa40; end: 10742aa83;  */

void FUN_10742aa40(long param_1)

{
  if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
    func_0x00010742b084((&PTR_FUN_1109af340)[*(uint *)(param_1 + 0x48)]);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 10742aa84; end: 10742aa9f;  */

void FUN_10742aa84(undefined8 param_1,long param_2)

{
  if (*(uint *)(param_2 + 0x40) != 0xffffffff) {
    func_0x00010742b084((&PTR_FUN_1109af1a8)[*(uint *)(param_2 + 0x40)]);
  }
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10742aaa0; end: 10742aacf;  */

long FUN_10742aaa0(long param_1,long param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x00010742bdd8();
    FUN_10742aad0();
    return param_1;
  }
  FUN_10742a7f8(param_2,param_3);
  return param_2;
}



/* Entry: 10742aad0; end: 10742aadb;  */

void FUN_10742aad0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100171ec4(*param_1,param_1[1]);
  FUN_10742aa40();
  func_0x00010742b998();
  FUN_107427e64();
  *(undefined4 *)(unaff_x20 + 0x48) = 0;
  return;
}



/* Entry: 10742aadc; end: 10742ab03;  */

void FUN_10742aadc(void)

{
  long unaff_x20;
  
  func_0x000100171ec4();
  FUN_10742aa40();
  func_0x00010742b998();
  FUN_107427e64();
  *(undefined4 *)(unaff_x20 + 0x48) = 0;
  return;
}



/* Entry: 10742ab04; end: 10742ab1b;  */

void FUN_10742ab04(long *param_1,long param_2)

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



/* Entry: 10742ab1c; end: 10742ab57;  */

void FUN_10742ab1c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010742baa8();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      FUN_10742a7a8(unaff_x20 + 0x10);
    }
    func_0x00010742bd8c();
  }
  return;
}



/* Entry: 10742ab58; end: 10742ab67;  */

long FUN_10742ab58(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x48) != 0) {
    func_0x00010742bdd8();
    FUN_10742aad0();
    return lVar1;
  }
  FUN_10742a7f8(param_2,param_3);
  return param_2;
}



/* Entry: 10742ab68; end: 10742ab9b;  */

void FUN_10742ab68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x48) == 1) {
    func_0x000100171ec4(param_2,param_3);
    FUN_1073c8358();
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    return;
  }
  func_0x00010742bdd8();
  FUN_10742abc4();
  return;
}



/* Entry: 10742ab9c; end: 10742abc3;  */

void FUN_10742ab9c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100171ec4();
  FUN_1073c8358();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10742abc4; end: 10742abcf;  */

void FUN_10742abc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000100171ec4(*param_1,param_1[1]);
  FUN_10742aa40();
  uVar2 = *unaff_x19;
  *(undefined8 *)((long)unaff_x20 + 5) = *(undefined8 *)((long)unaff_x19 + 5);
  *unaff_x20 = uVar2;
  uVar2 = unaff_x19[2];
  uVar1 = unaff_x19[3];
  unaff_x19[2] = 0;
  unaff_x20[2] = uVar2;
  unaff_x20[3] = uVar1;
  *(undefined4 *)(unaff_x20 + 9) = 1;
  return;
}



/* Entry: 10742abd0; end: 10742ac3f;  */

void FUN_10742abd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000100171ec4();
  FUN_10742aa40();
  uVar2 = *unaff_x19;
  *(undefined8 *)((long)unaff_x20 + 5) = *(undefined8 *)((long)unaff_x19 + 5);
  *unaff_x20 = uVar2;
  uVar2 = unaff_x19[2];
  uVar1 = unaff_x19[3];
  unaff_x19[2] = 0;
  unaff_x20[2] = uVar2;
  unaff_x20[3] = uVar1;
  *(undefined4 *)(unaff_x20 + 9) = 1;
  return;
}



/* Entry: 10742ac40; end: 10742ac43;  */

void FUN_10742ac40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109af370;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10742ac44; end: 10742ac57;  */

void FUN_10742ac44(void)

{
  func_0x00010742ac64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10742ac58; end: 10742ac73;  */

long * FUN_10742ac58(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x18);
  func_0x000104c2f714(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x28);
  while (plVar3 != (long *)0x0) {
    lVar2 = (long)(plVar3 + 2);
    plVar3 = (long *)*plVar3;
    FUN_10742a7a8(lVar2);
    func_0x00010742bd8c();
  }
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10742ac74; end: 10742acc3;  */

long FUN_10742ac74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10742acc4; end: 10742ad07;  */

void FUN_10742acc4(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x00010742b084((&PTR_FUN_1109af3b0)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10742ad08; end: 10742b2a3;  */

long FUN_10742ad08(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_2;
}



/* Entry: 10742b2a4; end: 10742b2bb;  */

void FUN_10742b2a4(void)

{
  FUN_1074279b0();
  return;
}



/* Entry: 10742b2bc; end: 10742bf23;  */

void FUN_10742b2bc(void)

{
  return;
}



/* Entry: 10742bf24; end: 10742bfc3;  */

long FUN_10742bf24(void)

{
  ulong uVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  long lVar2;
  long unaff_x23;
  
  func_0x00010742c858();
  FUN_10742c8b4();
  lVar2 = *(long *)(unaff_x21 + 0x10);
  if (lVar2 != 0) {
    if (*(long *)(unaff_x21 + 0x18) != 0) {
      do {
        func_0x00010742c814();
      } while (extraout_w10 != 0);
    }
    func_0x00010742c880();
  }
  if (unaff_x23 != 0) {
    lVar2 = *(long *)(unaff_x23 + 0x48);
  }
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
    uVar1 = unaff_x21 + 0x20;
    func_0x000104c2d614();
    lVar2 = unaff_x19;
    if ((uVar1 & 1) == 0) {
      func_0x00010742c90c();
      func_0x0001072bb3b4();
      func_0x0001003a91d4(&UNK_10f4154ea);
      func_0x00010742c804();
      func_0x00010742c824();
      func_0x00010742c888();
    }
  }
  return lVar2;
}



/* Entry: 10742bfc4; end: 10742bfcb;  */

long FUN_10742bfc4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  param_1 = (long *)*param_1;
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    func_0x000104c2fe38();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 10742bfcc; end: 10742c193;  */

long FUN_10742bfcc(void)

{
  ulong uVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  long lVar2;
  long unaff_x23;
  
  func_0x00010742c858();
  FUN_10742c8b4();
  lVar2 = *(long *)(unaff_x21 + 0xa8);
  if (lVar2 != 0) {
    if (*(long *)(unaff_x21 + 0xb0) != 0) {
      do {
        func_0x00010742c814();
      } while (extraout_w10 != 0);
    }
    func_0x00010742c880();
  }
  if (unaff_x23 != 0) {
    lVar2 = *(long *)(unaff_x23 + 0x48);
  }
  if (lVar2 == 0) {
    uVar1 = unaff_x21 + 0xb8;
    func_0x000104c2d614();
    lVar2 = unaff_x19;
    if ((uVar1 & 1) == 0) {
      func_0x00010742c90c();
      func_0x0001072bb3b4();
      func_0x0001003a91d4(&UNK_10f415532);
      func_0x00010742c804();
      func_0x00010742c824();
      func_0x00010742c888();
    }
  }
  return lVar2;
}



/* Entry: 10742c194; end: 10742c1ff;  */

undefined1 * FUN_10742c194(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_560 [160];
  undefined8 uStack_4c0;
  undefined4 uStack_430;
  undefined1 uStack_42c;
  undefined1 auStack_2b0 [160];
  undefined8 uStack_210;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  
  puVar1 = auStack_2b0;
  func_0x00010742c838();
  FUN_10742c4ec();
  func_0x00010742c8f8();
  uStack_210 = 0x3f570a3d00000000;
  uStack_180 = 0;
  uStack_17c = 0;
  func_0x00010742c8d4();
  func_0x00010742c870();
  func_0x00010742c890();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010742c870();
  func_0x00010742c8cc();
  puVar1 = auStack_560;
  func_0x00010742c838();
  FUN_10742c4ec();
  func_0x00010742c8f8();
  uStack_4c0 = NEON_fmov(0x3f800000,4);
  uStack_430 = 0;
  uStack_42c = 0;
  func_0x00010742c8d4();
  func_0x00010742c870();
  func_0x00010742c890();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010742c870();
  func_0x00010742c8cc();
  if ((((puVar1[0x90] != '\x01') || (*(long *)(puVar1 + 0x10) != 0)) &&
      ((puVar1[0x128] != '\x01' || (*(long *)(puVar1 + 0xa8) != 0)))) &&
     ((puVar1[0x1c8] != '\x01' || (*(long *)(puVar1 + 0x148) != 0)))) {
    return (undefined1 *)0x1;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10742c200; end: 10742c267;  */

undefined1 * FUN_10742c200(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_2b0 [160];
  undefined8 uStack_210;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  
  puVar1 = auStack_2b0;
  func_0x00010742c838();
  FUN_10742c4ec();
  func_0x00010742c8f8();
  uStack_210 = NEON_fmov(0x3f800000,4);
  uStack_180 = 0;
  uStack_17c = 0;
  func_0x00010742c8d4();
  func_0x00010742c870();
  func_0x00010742c890();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010742c870();
  func_0x00010742c8cc();
  if ((((puVar1[0x90] != '\x01') || (*(long *)(puVar1 + 0x10) != 0)) &&
      ((puVar1[0x128] != '\x01' || (*(long *)(puVar1 + 0xa8) != 0)))) &&
     ((puVar1[0x1c8] != '\x01' || (*(long *)(puVar1 + 0x148) != 0)))) {
    return (undefined1 *)0x1;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10742c268; end: 10742c2b3;  */

undefined8 FUN_10742c268(long param_1)

{
  if ((((*(char *)(param_1 + 0x90) != '\x01') || (*(long *)(param_1 + 0x10) != 0)) &&
      ((*(char *)(param_1 + 0x128) != '\x01' || (*(long *)(param_1 + 0xa8) != 0)))) &&
     ((*(char *)(param_1 + 0x1c8) != '\x01' || (*(long *)(param_1 + 0x148) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10742c2b4; end: 10742c3d7;  */

void FUN_10742c2b4(long param_1)

{
  long unaff_x20;
  
  func_0x00010742c8ec();
  func_0x00010742c2e8(param_1 + 0x10);
  func_0x00010742c878(unaff_x20 + 0x20);
  func_0x000107265974(unaff_x20 + 0x58);
  return;
}



/* Entry: 10742c3d8; end: 10742c403;  */

undefined4 FUN_10742c3d8(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x26c) == 2) {
    puVar1 = (undefined4 *)(param_1 + 0x268);
    FUN_10742c6fc(0);
    uVar2 = *puVar1;
  }
  return uVar2;
}



/* Entry: 10742c404; end: 10742c4eb;  */

void FUN_10742c404(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1[0x4f] == 0) {
    (**(code **)(*param_2 + 0xa8))(&lStack_28,param_2,0x30);
    uStack_30 = 0x30;
    func_0x000107308d88(&uStack_60,&uStack_30);
    func_0x000107308dac(param_1 + 0x4f,&uStack_60);
    func_0x00010730b284(&uStack_60);
    lVar2 = lStack_28;
    lStack_28 = 0;
    if (lVar2 != 0) {
      func_0x00010742c8e0();
    }
  }
  uStack_34 = 0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_50 = param_1[0x27];
  uStack_44 = 0;
  uVar3 = NEON_rev64(param_1[0x14],4);
  uStack_40 = uVar3;
  FUN_10742c3d8(param_1);
  uStack_38 = (undefined4)uVar3;
  plVar1 = (long *)((undefined8 *)param_1[0x4f])[1];
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_60,*(undefined8 *)param_1[0x4f]);
  return;
}



/* Entry: 10742c4ec; end: 10742c583;  */

long FUN_10742c4ec(long param_1)

{
  FUN_10742c584(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_10742c584(param_1 + 0xa8);
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FUN_10742c584(param_1 + 0x148);
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  FUN_10742c584(param_1 + 0x1d8);
  *(undefined1 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  return param_1;
}



/* Entry: 10742c584; end: 10742c5bf;  */

undefined8 * FUN_10742c584(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000104c2f64c(param_1 + 2);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return param_1;
}



/* Entry: 10742c5c0; end: 10742c68f;  */

undefined8 * FUN_10742c5c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_10742c690(param_1 + 2,param_2 + 2);
  uVar3 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar3;
  FUN_10742c690(param_1 + 0x15,param_2 + 0x15);
  uVar4 = param_2[0x27];
  uVar3 = param_2[0x26];
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  param_1[0x27] = uVar4;
  param_1[0x26] = uVar3;
  FUN_10742c690(param_1 + 0x29,param_2 + 0x29);
  uVar1 = *(undefined4 *)(param_2 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x1d4) = *(undefined1 *)((long)param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x3a) = uVar1;
  FUN_10742c690(param_1 + 0x3b,param_2 + 0x3b);
  uVar4 = param_2[0x4d];
  uVar3 = param_2[0x4c];
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
  param_1[0x4d] = uVar4;
  param_1[0x4c] = uVar3;
  param_1[0x4f] = param_2[0x4f];
  lVar2 = param_2[0x50];
  param_1[0x50] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010742c814();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10742c690; end: 10742c6fb;  */

undefined8 * FUN_10742c690(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010742c814();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(param_1 + 2,param_2 + 2);
  func_0x000107263b58(param_1 + 9,param_2 + 9);
  return param_1;
}



/* Entry: 10742c6fc; end: 10742c717;  */

long * FUN_10742c6fc(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*(int *)((long)param_1 + 4) == 2) {
    return param_1;
  }
  func_0x00010563ab98();
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    func_0x000104c2fe38();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return (long *)0x0;
}



/* Entry: 10742c718; end: 10742c7ef;  */

long FUN_10742c718(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    func_0x000104c2fe38();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 10742c7f0; end: 10742c8b3;  */

void FUN_10742c7f0(void)

{
  return;
}



/* Entry: 10742c8b4; end: 10742c8cb;  */

void FUN_10742c8b4(void)

{
  undefined8 in_x3;
  
  FUN_10742bfc4(in_x3);
  return;
}



/* Entry: 10742c8cc; end: 10742c917;  */

void FUN_10742c8cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10742c918; end: 10742c96f;  */

void FUN_10742c918(void)

{
  func_0x00010742cb14();
  func_0x00010742cae4();
  func_0x00010742cad4();
  return;
}



/* Entry: 10742c970; end: 10742c9d7;  */

undefined8 * FUN_10742c970(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x90);
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  while( true ) {
    if (puVar5 == puVar1) {
      return (undefined8 *)0x0;
    }
    lVar4 = (long)*(char *)((long)puVar5 + 0x17);
    puVar3 = puVar5;
    if (lVar4 < 0) {
      lVar4 = puVar5[1];
      puVar3 = (undefined8 *)*puVar5;
    }
    uVar2 = param_2;
    func_0x0001000633dc(param_2,param_3,puVar3,lVar4);
    if ((uVar2 & 1) != 0) break;
    puVar5 = puVar5 + 7;
  }
  return puVar5;
}



/* Entry: 10742c9d8; end: 10742ca43;  */

bool FUN_10742c9d8(long param_1)

{
  func_0x00010742cb14();
  func_0x00010742cae4();
  func_0x00010742cad4();
  return param_1 != 0;
}



/* Entry: 10742ca44; end: 10742ca5f;  */

long FUN_10742ca44(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x20) != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
}



/* Entry: 10742ca60; end: 10742caa7;  */

long FUN_10742ca60(undefined8 param_1,long param_2)

{
  return *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
}



/* Entry: 10742caa8; end: 10742cac3;  */

long FUN_10742caa8(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x20) != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return param_2;
}



/* Entry: 10742cac4; end: 10742cb1b;  */

undefined8 FUN_10742cac4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10742cb1c; end: 10742d023;  */

void FUN_10742cb1c(long param_1,long *param_2,long param_3,long *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  char cVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  double *pdVar21;
  long lVar22;
  ulong uVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  undefined1 uStack_c0;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  float afStack_6c [3];
  
  uVar19 = (*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) / 400;
  puVar2 = (undefined8 *)param_4[1];
  uVar16 = (long)puVar2 - *param_4 >> 7;
  if (uVar16 < uVar19) {
    uVar23 = uVar19 - uVar16;
    plVar9 = param_4 + 2;
    if ((ulong)(*plVar9 - (long)puVar2 >> 7) < uVar23) {
      plVar8 = param_4;
      func_0x00010742d054(param_4,uVar19);
      lVar13 = *param_4;
      lVar20 = param_4[1];
      plVar10 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        FUN_10742d0a0();
        plVar10 = plVar9;
      }
      puVar2 = (undefined8 *)((long)plVar10 + (lVar20 - lVar13));
      puVar7 = puVar2;
      for (lVar13 = uVar19 * 0x80 + uVar16 * -0x80; lVar13 != 0; lVar13 = lVar13 + -0x80) {
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7 = puVar7 + 0x10;
      }
      lVar20 = (long)puVar2 - (param_4[1] - *param_4);
      _memcpy(lVar20);
      lVar13 = *param_4;
      *param_4 = lVar20;
      param_4[1] = (long)(puVar2 + uVar23 * 0x10);
      param_4[2] = (long)(plVar10 + (long)plVar8 * 0x10);
      if (lVar13 != 0) {
        __ZdlPv();
      }
    }
    else {
      puVar7 = puVar2;
      for (lVar13 = uVar19 * 0x80 + uVar16 * -0x80; lVar13 != 0; lVar13 = lVar13 + -0x80) {
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7 = puVar7 + 0x10;
      }
      param_4[1] = (long)(puVar2 + uVar23 * 0x10);
    }
  }
  else if (uVar19 < uVar16) {
    param_4[1] = *param_4 + uVar19 * 0x80;
  }
  plVar9 = param_4 + 3;
  lVar13 = *plVar9;
  dStack_110 = (double)((ulong)dStack_110 & 0xffffffffffffff00);
  uStack_c0 = 0;
  if ((ulong)((param_4[5] - lVar13) / 0x58) < uVar19) {
    FUN_10742d144(plVar9);
    plVar8 = plVar9;
    FUN_10742d1c8(plVar9,uVar19);
    func_0x00010742d178(plVar9,plVar8);
    uVar23 = uVar19;
  }
  else {
    uVar16 = (param_4[4] - lVar13) / 0x58;
    uVar23 = uVar16;
    if (uVar19 <= uVar16) {
      uVar23 = uVar19;
    }
    for (; uVar23 != 0; uVar23 = uVar23 - 1) {
      _memcpy(lVar13,&dStack_110,0x51);
      lVar13 = lVar13 + 0x58;
    }
    uVar23 = uVar19 - uVar16;
    if (uVar19 < uVar16 || uVar23 == 0) {
      param_4[4] = param_4[3] + uVar19 * 0x58;
      goto LAB_10742cd0c;
    }
  }
  FUN_10742d0e0(plVar9,uVar23,&dStack_110);
LAB_10742cd0c:
  plVar8 = param_2 + param_3 * 2;
  do {
    if (param_2 == plVar8) {
      lVar18 = 0;
      lVar20 = 0;
      lVar13 = 0;
      for (; uVar19 != 0; uVar19 = uVar19 - 1) {
        lVar22 = *(long *)(param_1 + 0x78);
        lVar12 = *plVar9 + lVar20;
        if (*(char *)(lVar12 + 0x50) == '\x01') {
          func_0x000107878bfc(&dStack_110,lVar12,lVar12 + 0x18,lVar12 + 0x38);
        }
        else {
          _memcpy(&dStack_110,lVar22 + lVar13 + 0xb8,0x80);
        }
        uVar5 = *(uint *)(lVar22 + lVar13 + 0xb0);
        lVar12 = *param_4;
        if ((int)uVar5 < 0) {
          _memcpy(lVar12 + lVar18,&dStack_110,0x80);
        }
        else {
          func_0x000107877034(lVar12 + lVar18,lVar12 + (ulong)uVar5 * 0x80,&dStack_110);
        }
        lVar13 = lVar13 + 400;
        lVar20 = lVar20 + 0x58;
        lVar18 = lVar18 + 0x80;
      }
      return;
    }
    lVar13 = *param_2;
    if (lVar13 != 0) {
      puVar3 = *(uint **)(lVar13 + 0x28);
      for (puVar17 = *(uint **)(lVar13 + 0x20); puVar17 != puVar3; puVar17 = puVar17 + 0xe) {
        uVar16 = (ulong)*puVar17;
        if (uVar16 < uVar19) {
          pfVar11 = *(float **)(puVar17 + 2);
          pfVar14 = *(float **)(puVar17 + 4);
          if ((pfVar11 != pfVar14) &&
             (lVar13 = *(long *)(param_1 + 0x78) + uVar16 * 400, *(char *)(lVar13 + 0x188) == '\x01'
             )) {
            pdVar21 = (double *)(*plVar9 + uVar16 * 0x58);
            if (((ulong)pdVar21[10] & 1) == 0) {
              _memcpy(pdVar21,lVar13 + 0x138,0x50);
              *(undefined1 *)(pdVar21 + 10) = 1;
              pfVar11 = *(float **)(puVar17 + 2);
              pfVar14 = *(float **)(puVar17 + 4);
            }
            fVar24 = 0.0;
            if (pfVar11 == pfVar14) {
              fVar28 = 0.0;
              fVar32 = 0.0;
              fVar33 = 0.0;
            }
            else {
              pfVar1 = *(float **)(puVar17 + 8);
              pfVar4 = *(float **)(puVar17 + 10);
              fVar28 = 0.0;
              fVar32 = 0.0;
              fVar33 = 0.0;
              uVar34 = 0;
              if (pfVar1 != pfVar4) {
                fVar24 = *(float *)(param_2 + 1);
                if (fVar24 <= *pfVar11) {
                  fVar24 = *pfVar1;
                  fVar28 = pfVar1[1];
                  fVar32 = pfVar1[2];
                  fVar33 = pfVar1[3];
                }
                else if (pfVar14[-1] <= fVar24) {
                  fVar24 = pfVar4[-4];
                  fVar28 = pfVar4[-3];
                  fVar32 = pfVar4[-2];
                  fVar33 = pfVar4[-1];
                }
                else {
                  uVar16 = (long)pfVar14 - (long)pfVar11 >> 2;
                  pfVar14 = pfVar11;
                  while (uVar16 != 0) {
                    uVar15 = uVar16 >> 1;
                    uVar23 = uVar16 + (uVar16 >> 1 ^ 0xffffffffffffffff);
                    uVar16 = uVar15;
                    if (pfVar14[uVar15] <= fVar24) {
                      uVar16 = uVar23;
                      pfVar14 = pfVar14 + uVar15 + 1;
                    }
                  }
                  lVar13 = (long)pfVar14 - (long)pfVar11 >> 2;
                  dVar26 = (double)(ulong)(uint)*pfVar14;
                  afStack_6c[0] =
                       (fVar24 - pfVar11[lVar13 + -1]) / (*pfVar14 - pfVar11[lVar13 + -1]);
                  pfVar11 = pfVar1 + (lVar13 + -1) * 4;
                  if ((char)puVar17[1] == '\x01') {
                    dStack_110 = (double)(float)*(undefined8 *)pfVar11;
                    dStack_108 = (double)(float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
                    dStack_100 = (double)(float)*(undefined8 *)(pfVar11 + 2);
                    dStack_f8 = (double)(float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
                    uVar29 = *(undefined8 *)(pfVar1 + lVar13 * 4);
                    dStack_90 = (double)(float)uVar29;
                    dStack_88 = (double)(float)((ulong)uVar29 >> 0x20);
                    uVar29 = *(undefined8 *)(pfVar1 + lVar13 * 4 + 2);
                    dVar30 = (double)(float)uVar29;
                    dStack_78 = (double)(float)((ulong)uVar29 >> 0x20);
                    dVar25 = (double)afStack_6c[0];
                    dStack_80 = dVar30;
                    func_0x000107878a14(&dStack_110,&dStack_90);
                    fVar24 = (float)dVar25;
                    fVar28 = (float)dVar30;
                    fVar32 = (float)dVar26;
                    fVar33 = (float)(double)CONCAT44(uVar34,fVar33);
                  }
                  else {
                    uVar27 = *(undefined8 *)(pfVar1 + lVar13 * 4 + 2);
                    uVar29 = *(undefined8 *)(pfVar1 + lVar13 * 4);
                    uVar31 = *(undefined8 *)pfVar11;
                    dVar25 = (double)CONCAT44((float)((ulong)uVar29 >> 0x20) -
                                              (float)((ulong)uVar31 >> 0x20),
                                              (float)uVar29 - (float)uVar31);
                    dStack_88 = (double)CONCAT44((float)((ulong)uVar27 >> 0x20) -
                                                 (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20
                                                        ),(float)uVar27 -
                                                          (float)*(undefined8 *)(pfVar11 + 2));
                    dStack_90 = dVar25;
                    func_0x0001073b5d6c(&dStack_90,afStack_6c);
                    fVar24 = SUB84(dVar25,0);
                    fVar28 = (float)uVar31;
                    dStack_110 = (double)CONCAT44(fVar28,fVar24);
                    fVar32 = SUB84(dVar26,0);
                    dStack_108 = (double)CONCAT44(fVar33,fVar32);
                    func_0x0001073b5d3c(pfVar11,&dStack_110);
                  }
                }
              }
            }
            cVar6 = (char)puVar17[1];
            dVar26 = (double)fVar24;
            if (cVar6 == '\x02') {
              pdVar21[7] = dVar26;
              lVar13 = 0x40;
              lVar20 = 0x48;
              fVar33 = fVar32;
            }
            else if (cVar6 == '\x01') {
              pdVar21[3] = dVar26;
              pdVar21[4] = (double)fVar28;
              lVar13 = 0x28;
              lVar20 = 0x30;
              fVar28 = fVar32;
            }
            else {
              if (cVar6 != '\0') goto LAB_10742cf58;
              *pdVar21 = dVar26;
              lVar13 = 8;
              lVar20 = 0x10;
              fVar33 = fVar32;
            }
            *(double *)((long)pdVar21 + lVar13) = (double)fVar28;
            *(double *)((long)pdVar21 + lVar20) = (double)fVar33;
          }
        }
LAB_10742cf58:
      }
    }
    param_2 = param_2 + 2;
  } while( true );
}



/* Entry: 10742d024; end: 10742d09f;  */

void FUN_10742d024(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_1;
  FUN_10742cb1c(param_2,&uStack_20,1,param_4);
  return;
}



/* Entry: 10742d0a0; end: 10742d0c3;  */

void FUN_10742d0a0(void)

{
  FUN_10742d0c4();
  return;
}



/* Entry: 10742d0c4; end: 10742d0df;  */

void FUN_10742d0c4(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 >> 0x39 != 0) {
    func_0x000104bd35f4();
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = param_2 * 0x58;
    lVar1 = lVar2 + lVar3;
    for (; lVar3 != 0; lVar3 = lVar3 + -0x58) {
      _memcpy(lVar2,param_3,0x58);
      lVar2 = lVar2 + 0x58;
    }
    *(long *)(param_1 + 8) = lVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 7);
  return;
}



/* Entry: 10742d0e0; end: 10742d143;  */

void FUN_10742d0e0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  param_2 = param_2 * 0x58;
  lVar1 = lVar2 + param_2;
  for (; param_2 != 0; param_2 = param_2 + -0x58) {
    _memcpy(lVar2,param_3,0x58);
    lVar2 = lVar2 + 0x58;
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10742d144; end: 10742d1c7;  */

void FUN_10742d144(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10742d1c8; end: 10742d233;  */

/* WARNING: Possible PIC construction at 0x00010742d224: Changing call to branch */

undefined1  [16] FUN_10742d1c8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (0x2e8ba2e8ba2e8ba < param_2) {
    FUN_10742d288();
    FUN_10742d258();
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    uVar2 = 0x2e8ba2e8ba2e8ba;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 10742d234; end: 10742d257;  */

void FUN_10742d234(void)

{
  FUN_10742d258();
  return;
}



/* Entry: 10742d258; end: 10742d287;  */

/* WARNING: Possible PIC construction at 0x000104bd4808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104bd480c) */

void FUN_10742d258(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC2EPKc();
  *plVar1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 10742d288; end: 10742d293;  */

/* WARNING: Possible PIC construction at 0x000104bd4808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104bd480c) */

void FUN_10742d288(void)

{
  long *plVar1;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC2EPKc();
  *plVar1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 10742d294; end: 10742d737;  */

void FUN_10742d294(long param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  ulong uVar10;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar11;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  long extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong uVar12;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long *extraout_x12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x23;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x26;
  long alStack_330 [3];
  long lStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined1 auStack_300 [64];
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2a8;
  long lStack_2a0;
  undefined1 auStack_270 [24];
  long *plStack_258;
  undefined1 auStack_250 [80];
  long alStack_200 [63];
  undefined8 uStack_8;
  
  func_0x00010743c598();
  func_0x00010743b2e8();
  uStack_8 = extraout_x8;
  FUN_10742d738();
  uVar12 = param_2;
  FUN_1074350a8();
  uVar15 = *(ulong *)(param_1 + 0x30);
  uVar11 = uVar12;
  if (uVar15 != 0) {
    func_0x00010743bce4();
    if ((bool)in_ZR) {
      unaff_x26 = extraout_x8_00 & uVar12;
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar12 - uVar15) < 0;
      in_ZR = uVar12 == uVar15;
      unaff_x26 = uVar12;
      if (uVar15 <= uVar12) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = uVar12 / uVar15;
        }
        unaff_x26 = uVar12 - uVar14 * uVar15;
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x28) + unaff_x26 * 8);
    uVar14 = extraout_x8_00;
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10742d354;
          uVar10 = plVar16[1];
          if (uVar10 != uVar12) break;
          in_NG = (long)(plVar16[2] - param_2) < 0;
          in_ZR = false;
          if (plVar16[2] == param_2) goto LAB_10742d544;
        }
        if ((uVar15 & uVar14) == 0) {
          uVar10 = uVar10 & uVar14;
        }
        else if (uVar15 <= uVar10) {
          func_0x00010743bccc();
          uVar14 = extraout_x8_01;
          uVar10 = extraout_x9;
        }
        in_NG = (long)(uVar10 - unaff_x26) < 0;
        in_ZR = uVar10 == unaff_x26;
      } while ((bool)in_ZR);
    }
  }
LAB_10742d354:
  unaff_x23 = (long *)(param_1 + 0x38);
  func_0x00010743bf54();
  func_0x00010743ba70();
  func_0x00010743baa8(*(undefined8 *)(param_1 + 0x40));
  if ((uVar15 == 0) || (func_0x00010743b688(), (bool)in_NG)) {
    func_0x00010743b2f8();
    bVar3 = 2 < uVar15;
    bVar4 = uVar15 == 3;
    func_0x00010743b2c0();
    uVar14 = extraout_x8_02;
    if (!bVar3 || bVar4) {
      uVar14 = extraout_x9_00;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar11 = uVar14;
    }
    uVar15 = *(ulong *)(param_1 + 0x30);
    uVar5 = uVar14 == uVar15;
    if (uVar15 < uVar14) {
LAB_10742d3bc:
      if (uVar14 >> 0x3d != 0) goto LAB_10742d6cc;
      lVar6 = uVar14 << 3;
      __Znwm(lVar6);
      FUN_1074350c0(param_1 + 0x28,lVar6);
      uVar11 = 0;
      *(ulong *)(param_1 + 0x30) = uVar14;
      while (uVar5 = uVar14 == uVar11, !(bool)uVar5) {
        func_0x00010743baf0();
        uVar11 = extraout_x9_01;
      }
      uVar15 = uVar14;
      if (*unaff_x23 != 0) {
        func_0x00010743c518();
        func_0x00010743c4d8();
        lVar6 = extraout_x8_03;
        uVar11 = extraout_x9_02;
        plVar16 = extraout_x10;
        uVar10 = extraout_x11;
        while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
          uVar13 = plVar16[1];
          if ((uVar14 & uVar11) == 0) {
            uVar13 = uVar13 & uVar11;
          }
          else if (uVar14 <= uVar13) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar13 / uVar14;
            }
            uVar13 = uVar13 - uVar1 * uVar14;
          }
          uVar5 = uVar13 == uVar10;
          if (!(bool)uVar5) {
            if (*(long *)(lVar6 + uVar13 * 8) == 0) {
              func_0x00010743bc98();
              lVar6 = extraout_x8_05;
              uVar11 = extraout_x9_04;
              plVar16 = extraout_x12;
              uVar10 = extraout_x11_01;
            }
            else {
              func_0x00010743b22c();
              lVar6 = extraout_x8_04;
              uVar11 = extraout_x9_03;
              plVar16 = extraout_x10_00;
              uVar10 = extraout_x11_00;
            }
          }
        }
      }
    }
    else if (uVar14 < uVar15) {
      func_0x00010743bafc((float)*(ulong *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
      if ((uVar15 < 3) || (func_0x00010743bdec(), extraout_x8_06 != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010743b20c();
      }
      if (uVar14 <= uVar11) {
        uVar14 = uVar11;
      }
      uVar5 = uVar14 == uVar15;
      if (uVar14 < uVar15) {
        if (uVar14 != 0) goto LAB_10742d3bc;
        FUN_1074350c0(param_1 + 0x28,0);
        *(undefined8 *)(param_1 + 0x30) = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)(param_1 + 0x30);
      }
    }
    func_0x00010743bce4();
    if ((bool)uVar5) {
      in_ZR = 1;
      unaff_x26 = extraout_x8_07 & uVar12;
    }
    else {
      in_ZR = uVar12 == uVar15;
      unaff_x26 = uVar12;
      if (uVar15 <= uVar12) {
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = uVar12 / uVar15;
        }
        unaff_x26 = uVar12 - uVar11 * uVar15;
      }
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x28) + unaff_x26 * 8) == 0) {
    func_0x00010743c138();
    if (extraout_x9_05 != 0) {
      func_0x00010743b678();
      lVar6 = extraout_x8_08;
      if ((bool)in_ZR) {
        uVar12 = extraout_x9_06 & extraout_x10_01;
      }
      else {
        uVar12 = extraout_x9_06;
        if (uVar15 <= extraout_x9_06) {
          func_0x00010743bccc();
          lVar6 = extraout_x8_09;
          uVar12 = extraout_x9_07;
        }
      }
      *(long *)(lVar6 + uVar12 * 8) = alStack_200[0];
    }
  }
  else {
    func_0x00010743bfec();
  }
  alStack_200[0] = 0;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  FUN_1074350d8(alStack_200);
LAB_10742d544:
  plVar16 = alStack_330;
  func_0x00010743bc74();
  lStack_318 = param_1;
  func_0x00010743b898();
  plVar7 = plVar16;
  func_0x00010743b770(&PTR_SUB_1109af620);
  plStack_258 = plVar7;
  func_0x00010743bc48();
  func_0x00010743b898();
  func_0x00010743b78c(&PTR_SUB_1109af6b0);
  func_0x00010743bf10();
LAB_10742d588:
  unaff_x23 = (long *)*unaff_x23;
  lVar6 = lStack_2a8;
  if (unaff_x23 != (long *)0x0) {
    lVar6 = param_1 + 0xb8;
    FUN_10743a040(lVar6,unaff_x23 + 2);
    if (lVar6 != 0) goto code_r0x00010742d5a4;
    goto LAB_10742d5e0;
  }
  for (; uVar5 = lVar6 == lStack_2a0, lVar8 = lStack_2c0, !(bool)uVar5; lVar6 = lVar6 + 0x38) {
    lVar8 = param_1 + 0xb8;
    FUN_10743a040(lVar8,lVar6);
    if ((lVar8 != 0) && (func_0x00010743c4a8(), (bool)uVar5)) {
      func_0x00010743c2e8(*(undefined8 *)(*plVar16 + 0x30));
    }
  }
  for (; uVar5 = lVar8 == lStack_2b8, !(bool)uVar5; lVar8 = lVar8 + 0x38) {
    func_0x00010743b924();
    func_0x00010724b12c(auStack_300);
    puVar9 = auStack_250;
    func_0x00010724b2ac();
    uStack_310 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    puStack_308 = puVar9;
    func_0x00010743bd64();
    lVar6 = param_1 + 0xb8;
    FUN_1074306fc(lVar6,lVar8);
    if (*(int *)(lVar6 + 0x10) == 0) {
      func_0x00010743c2d0();
      func_0x00010743c488();
      if (lVar6 != 0) {
        func_0x00010743b2a4();
      }
    }
    else {
      FUN_10743422c(lVar6);
      func_0x00010743c494();
    }
    func_0x00010743bf2c();
  }
  func_0x00010743bf00();
  func_0x00010743bed8();
  func_0x00010743bac8();
  func_0x000107435414(auStack_270);
  func_0x00010743bc7c();
  func_0x00010743b264(uStack_8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10742d6cc:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10742d6d4);
  (*pcVar2)();
code_r0x00010742d5a4:
  if (*(int *)(lVar6 + 0x58) != 0) {
    if (*(int *)(lVar6 + 0x58) == 1) {
      FUN_1074306c0(alStack_200,lVar6 + 0x48);
      lVar6 = alStack_200[0];
      func_0x0001073b4a44(alStack_200);
      if (lVar6 != 0) {
        func_0x00010743bf08(uVar15 + 0x18);
        goto LAB_10742d588;
      }
      func_0x00010743c304();
    }
LAB_10742d5e0:
    func_0x00010743bf08(&lStack_2c0);
  }
  goto LAB_10742d588;
}



/* Entry: 10742d738; end: 10742d75b;  */

void FUN_10742d738(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x00010743a6a8(param_1 + 0x28,&uStack_18);
  return;
}



/* Entry: 10742d75c; end: 10742dccf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010742d9b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10742d75c(undefined8 param_1,undefined8 *param_2,long *****param_3,undefined8 param_4,
                  int param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar8;
  long *****ppppplVar9;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 *puVar10;
  long *****ppppplVar11;
  long *****unaff_x24;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****unaff_x26;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 *puStack_f8;
  long ***appplStack_f0 [3];
  undefined8 *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined ***pppuStack_b8;
  long ****pppplStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long ****pppplStack_70;
  undefined8 uStack_68;
  
  func_0x00010743b2e8();
  uStack_68 = extraout_x8;
  if (param_5 == 0) {
    func_0x0001072638b4(&pppplStack_b0,param_4);
    ppppplVar11 = param_3;
    FUN_107435cd4();
    ppppplVar13 = (long *****)param_2[0xb];
    if (ppppplVar13 != (long *****)0x0) {
      uVar7 = (long)ppppplVar13 - 1;
      if (((ulong)ppppplVar13 & uVar7) == 0) {
        unaff_x24 = (long *****)(uVar7 & (ulong)ppppplVar11);
        in_ZR = true;
        in_NG = false;
      }
      else {
        in_NG = (long)ppppplVar11 - (long)ppppplVar13 < 0;
        in_ZR = ppppplVar11 == ppppplVar13;
        unaff_x24 = ppppplVar11;
        if (ppppplVar13 <= ppppplVar11) {
          uVar3 = 0;
          if (ppppplVar13 != (long *****)0x0) {
            uVar3 = (ulong)ppppplVar11 / (ulong)ppppplVar13;
          }
          unaff_x24 = (long *****)((long)ppppplVar11 - uVar3 * (long)ppppplVar13);
        }
      }
      ppppplVar12 = *(long ******)(param_2[10] + (long)unaff_x24 * 8);
      if (ppppplVar12 != (long *****)0x0) {
        do {
          while( true ) {
            ppppplVar12 = (long *****)*ppppplVar12;
            if (ppppplVar12 == (long *****)0x0) goto LAB_10742d970;
            ppppplVar9 = (long *****)ppppplVar12[1];
            if (ppppplVar9 != ppppplVar11) break;
            in_NG = (long)ppppplVar12[2] - (long)param_3 < 0;
            in_ZR = (long *****)ppppplVar12[2] == param_3;
            plVar6 = plStack_a0;
            if ((bool)in_ZR) goto joined_r0x00010742dba4;
          }
          if (((ulong)ppppplVar13 & uVar7) == 0) {
            ppppplVar9 = (long *****)((ulong)ppppplVar9 & uVar7);
          }
          else if (ppppplVar13 <= ppppplVar9) {
            uVar3 = 0;
            if (ppppplVar13 != (long *****)0x0) {
              uVar3 = (ulong)ppppplVar9 / (ulong)ppppplVar13;
            }
            ppppplVar9 = (long *****)((long)ppppplVar9 - uVar3 * (long)ppppplVar13);
          }
          in_NG = (long)ppppplVar9 - (long)unaff_x24 < 0;
          in_ZR = ppppplVar9 == unaff_x24;
        } while ((bool)in_ZR);
      }
    }
LAB_10742d970:
    ppppplVar12 = ppppplVar11;
    func_0x00010743bf54();
    puVar1 = param_2 + 0xc;
    uStack_78 = 1;
    *ppppplVar12 = (long ****)0x0;
    ppppplVar12[1] = (long ****)ppppplVar11;
    ppppplVar12[2] = (long ****)param_3;
    ppppplVar12[4] = (long ****)0x0;
    ppppplVar12[3] = (long ****)0x0;
    ppppplVar12[6] = (long ****)0x0;
    ppppplVar12[5] = (long ****)0x0;
    *(undefined4 *)(ppppplVar12 + 7) = 0x3f800000;
    pppplStack_88 = (long ****)ppppplVar12;
    puStack_80 = puVar1;
    func_0x00010743baa8(param_2[0xd]);
    if ((ppppplVar13 == (long *****)0x0) ||
       (func_0x00010743ba9c(param_1,*(undefined4 *)(param_2 + 0xe),(float)ppppplVar13), (bool)in_NG)
       ) {
      bVar4 = (long *****)0x2 < ppppplVar13;
      bVar5 = ppppplVar13 == (long *****)0x3;
      func_0x00010743b2c0((long)ppppplVar13 << 1);
      uVar2 = extraout_x8_01;
      if (!bVar4 || bVar5) {
        uVar2 = extraout_x9_00;
      }
      FUN_107435cec(param_2 + 10,uVar2);
      ppppplVar13 = (long *****)param_2[0xb];
      if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
        in_ZR = 1;
        unaff_x24 = (long *****)((long)ppppplVar13 - 1U & (ulong)ppppplVar11);
      }
      else {
        in_ZR = ppppplVar11 == ppppplVar13;
        unaff_x24 = ppppplVar11;
        if (ppppplVar13 <= ppppplVar11) {
          uVar7 = 0;
          if (ppppplVar13 != (long *****)0x0) {
            uVar7 = (ulong)ppppplVar11 / (ulong)ppppplVar13;
          }
          unaff_x24 = (long *****)((long)ppppplVar11 - uVar7 * (long)ppppplVar13);
        }
      }
    }
    ppppplVar12 = (long *****)pppplStack_88;
    lVar8 = param_2[10];
    if (*(long *)(lVar8 + (long)unaff_x24 * 8) == 0) {
      *pppplStack_88 = (long ***)*puVar1;
      *puVar1 = pppplStack_88;
      *(undefined8 **)(lVar8 + (long)unaff_x24 * 8) = puVar1;
      if ((long ****)*pppplStack_88 != (long ****)0x0) {
        ppppplVar11 = (long *****)(*pppplStack_88)[1];
        if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
          ppppplVar11 = (long *****)((ulong)ppppplVar11 & (long)ppppplVar13 - 1U);
          in_ZR = true;
        }
        else {
          in_ZR = ppppplVar11 == ppppplVar13;
          if (ppppplVar13 <= ppppplVar11) {
            uVar7 = 0;
            if (ppppplVar13 != (long *****)0x0) {
              uVar7 = (ulong)ppppplVar11 / (ulong)ppppplVar13;
            }
            ppppplVar11 = (long *****)((long)ppppplVar11 - uVar7 * (long)ppppplVar13);
          }
        }
        *(long *****)(lVar8 + (long)ppppplVar11 * 8) = pppplStack_88;
      }
    }
    else {
      func_0x00010743bfec();
    }
    pppplStack_88 = (long ****)0x0;
    param_2[0xd] = param_2[0xd] + 1;
    FUN_107435e84(&pppplStack_88);
    plVar6 = plStack_a0;
joined_r0x00010742dba4:
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      ppppplVar11 = ppppplVar12 + 3;
      func_0x0001072e89a4(ppppplVar11,plVar6 + 2);
      func_0x00010743bb8c();
      *(undefined1 *)ppppplVar11 = param_6;
    }
    pppplStack_88 = (long ****)&PTR_FUN_1109afa60;
    pppplStack_70 = (long ****)&pppplStack_88;
    ppuStack_d0 = &PTR_DAT_1109afae0;
    pppuStack_b8 = &ppuStack_d0;
    plVar6 = param_2 + 0x1c;
    puStack_c8 = param_2;
    puStack_80 = param_2;
    FUN_10742df30(&pppplStack_b0,plVar6,7,&pppplStack_88,&ppuStack_d0);
    FUN_107435ca0(&ppuStack_d0);
    FUN_1074363c0(&pppplStack_88);
    func_0x00010726ea70(&pppplStack_b0);
  }
  else {
    FUN_10742dcd0(param_2,param_3);
    ppppplVar11 = param_3;
    FUN_107435cd4();
    ppppplVar13 = (long *****)param_2[0xb];
    if (ppppplVar13 != (long *****)0x0) {
      uVar7 = (long)ppppplVar13 - 1;
      if (((ulong)ppppplVar13 & uVar7) == 0) {
        unaff_x26 = (long *****)(uVar7 & (ulong)ppppplVar11);
        in_ZR = true;
        in_NG = false;
      }
      else {
        in_NG = (long)ppppplVar11 - (long)ppppplVar13 < 0;
        in_ZR = ppppplVar11 == ppppplVar13;
        unaff_x26 = ppppplVar11;
        if (ppppplVar13 <= ppppplVar11) {
          uVar3 = 0;
          if (ppppplVar13 != (long *****)0x0) {
            uVar3 = (ulong)ppppplVar11 / (ulong)ppppplVar13;
          }
          unaff_x26 = (long *****)((long)ppppplVar11 - uVar3 * (long)ppppplVar13);
        }
      }
      ppppplVar12 = *(long ******)(param_2[10] + (long)unaff_x26 * 8);
      if (ppppplVar12 != (long *****)0x0) {
        do {
          while( true ) {
            ppppplVar12 = (long *****)*ppppplVar12;
            if (ppppplVar12 == (long *****)0x0) goto LAB_10742d884;
            ppppplVar9 = (long *****)ppppplVar12[1];
            if (ppppplVar9 != ppppplVar11) break;
            in_NG = (long)ppppplVar12[2] - (long)param_3 < 0;
            in_ZR = (long *****)ppppplVar12[2] == param_3;
            if ((bool)in_ZR) goto LAB_10742daf8;
          }
          if (((ulong)ppppplVar13 & uVar7) == 0) {
            ppppplVar9 = (long *****)((ulong)ppppplVar9 & uVar7);
          }
          else if (ppppplVar13 <= ppppplVar9) {
            uVar3 = 0;
            if (ppppplVar13 != (long *****)0x0) {
              uVar3 = (ulong)ppppplVar9 / (ulong)ppppplVar13;
            }
            ppppplVar9 = (long *****)((long)ppppplVar9 - uVar3 * (long)ppppplVar13);
          }
          in_NG = (long)ppppplVar9 - (long)unaff_x26 < 0;
          in_ZR = ppppplVar9 == unaff_x26;
        } while ((bool)in_ZR);
      }
    }
LAB_10742d884:
    puVar1 = param_2 + 0xc;
    ppppplVar12 = ppppplVar11;
    func_0x00010743bf54();
    plStack_a0 = (long *)0x1;
    *ppppplVar12 = (long ****)0x0;
    ppppplVar12[1] = (long ****)ppppplVar11;
    ppppplVar12[2] = (long ****)param_3;
    pppplStack_b0 = (long ****)ppppplVar12;
    puStack_a8 = puVar1;
    func_0x0001072638b4(ppppplVar12 + 3,param_4);
    func_0x00010743baa8(param_2[0xd]);
    if ((ppppplVar13 == (long *****)0x0) ||
       (func_0x00010743ba9c(param_1,*(undefined4 *)(param_2 + 0xe),(float)ppppplVar13), (bool)in_NG)
       ) {
      bVar4 = (long *****)0x2 < ppppplVar13;
      bVar5 = ppppplVar13 == (long *****)0x3;
      func_0x00010743b2c0((long)ppppplVar13 << 1);
      uVar2 = extraout_x8_00;
      if (!bVar4 || bVar5) {
        uVar2 = extraout_x9;
      }
      FUN_107435cec(param_2 + 10,uVar2);
      ppppplVar13 = (long *****)param_2[0xb];
      if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
        in_ZR = 1;
        unaff_x26 = (long *****)((long)ppppplVar13 - 1U & (ulong)ppppplVar11);
      }
      else {
        in_ZR = ppppplVar11 == ppppplVar13;
        unaff_x26 = ppppplVar11;
        if (ppppplVar13 <= ppppplVar11) {
          uVar7 = 0;
          if (ppppplVar13 != (long *****)0x0) {
            uVar7 = (ulong)ppppplVar11 / (ulong)ppppplVar13;
          }
          unaff_x26 = (long *****)((long)ppppplVar11 - uVar7 * (long)ppppplVar13);
        }
      }
    }
    ppppplVar12 = (long *****)pppplStack_b0;
    lVar8 = param_2[10];
    puVar10 = *(undefined8 **)(lVar8 + (long)unaff_x26 * 8);
    if (puVar10 == (undefined8 *)0x0) {
      *pppplStack_b0 = (long ***)*puVar1;
      *puVar1 = pppplStack_b0;
      *(undefined8 **)(lVar8 + (long)unaff_x26 * 8) = puVar1;
      if ((long ****)*pppplStack_b0 != (long ****)0x0) {
        ppppplVar11 = (long *****)(*pppplStack_b0)[1];
        if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
          ppppplVar11 = (long *****)((ulong)ppppplVar11 & (long)ppppplVar13 - 1U);
          in_ZR = true;
        }
        else {
          in_ZR = ppppplVar11 == ppppplVar13;
          if (ppppplVar13 <= ppppplVar11) {
            uVar7 = 0;
            if (ppppplVar13 != (long *****)0x0) {
              uVar7 = (ulong)ppppplVar11 / (ulong)ppppplVar13;
            }
            ppppplVar11 = (long *****)((long)ppppplVar11 - uVar7 * (long)ppppplVar13);
          }
        }
        *(long *****)(lVar8 + (long)ppppplVar11 * 8) = pppplStack_b0;
      }
    }
    else {
      *pppplStack_b0 = (long ***)*puVar10;
      *puVar10 = pppplStack_b0;
    }
    pppplStack_b0 = (long ****)0x0;
    param_2[0xd] = param_2[0xd] + 1;
    ppppplVar11 = &pppplStack_b0;
    FUN_107435e84();
LAB_10742daf8:
    ppppplVar13 = ppppplVar12 + 5;
    while (ppppplVar13 = (long *****)*ppppplVar13, ppppplVar13 != (long *****)0x0) {
      func_0x00010743bb8c();
      *(undefined1 *)ppppplVar11 = param_6;
    }
    ppppplVar11 = (long *****)appplStack_f0;
    func_0x00010743bc74();
    puStack_d8 = param_2;
    func_0x00010743b898();
    func_0x00010743b770(&PTR_FUN_1109af840);
    pppplStack_98 = (long ****)ppppplVar11;
    func_0x00010743bc48();
    puStack_f8 = param_2;
    func_0x00010743b898();
    func_0x00010743b78c(&PTR_SUB_1109af8e0);
    plVar6 = param_2 + 0x1c;
    pppplStack_70 = (long ****)ppppplVar11;
    FUN_10742df30(ppppplVar12 + 3,plVar6,7,&pppplStack_b0,&pppplStack_88);
    FUN_107435ca0(&pppplStack_88);
    func_0x00010743bac8();
    FUN_1074363c0(&pppplStack_b0);
    func_0x00010743bc7c();
  }
  func_0x00010743b264(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_107435e84(&pppplStack_88);
    ppppplVar11 = &pppplStack_b0;
    func_0x00010726ea70(ppppplVar11);
    func_0x00010743b660();
    pcStack_118 = FUN_10742dcd0;
    plStack_128 = plVar6;
    puStack_120 = &stack0xfffffffffffffff0;
    FUN_10743a8c0(ppppplVar11 + 10,&plStack_128);
    return;
  }
  return;
}



/* Entry: 10742dcd0; end: 10742dcf3;  */

void FUN_10742dcd0(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10743a8c0(param_1 + 0x50,&uStack_18);
  return;
}



/* Entry: 10742dcf4; end: 10742df2f;  */

long * FUN_10742dcf4(ulong param_1)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong uVar5;
  long *extraout_x10;
  long *plVar6;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  
  func_0x00010743c39c();
  func_0x00010743b648();
  func_0x00010743c1a4();
  if (unaff_x24 != 0) {
    func_0x00010743c3fc();
    if ((bool)in_ZR) {
      unaff_x25 = unaff_x23 & unaff_x21;
    }
    else {
      func_0x00010743c06c();
      if ((bool)in_CY) {
        func_0x00010743bad8();
      }
    }
    func_0x00010743c060();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_10742dd7c;
          func_0x00010743c048();
          if (!(bool)in_ZR) break;
          func_0x00010743b818();
          if ((param_1 & 1) != 0) goto LAB_10742df10;
        }
        if ((unaff_x24 & unaff_x23) == 0) {
          uVar5 = extraout_x8 & unaff_x23;
        }
        else {
          uVar5 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x00010743c03c();
            uVar5 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
        in_ZR = uVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10742dd7c:
  func_0x00010743c1d4();
  func_0x00010743b288();
  *(undefined1 *)(unaff_x20 + 9) = 0;
  func_0x00010743b584();
  if ((unaff_x24 != 0) && (func_0x00010743b688(), !(bool)in_NG)) goto LAB_10742ded0;
  func_0x00010743b2f8();
  uVar2 = 2 < unaff_x24;
  uVar3 = unaff_x24 == 3;
  func_0x00010743b2c0();
  func_0x00010743c1c8();
  if ((bool)uVar3) {
    unaff_x22 = 2;
  }
  else {
    uVar3 = (unaff_x22 & extraout_x8_01) == 0;
    uVar2 = 0;
    if (!(bool)uVar3) {
      func_0x00010743bd94();
      unaff_x22 = param_1;
    }
  }
  func_0x00010743c078();
  if (!(bool)uVar2 || (bool)uVar3) {
    if (!(bool)uVar2) {
      func_0x00010743b35c();
      if (((bool)uVar2) && (func_0x00010743bdec(), extraout_x8_04 == 0)) {
        func_0x00010743b20c();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010743ba24();
      if ((bool)uVar2) {
        unaff_x24 = *(ulong *)(unaff_x19 + 8);
      }
      else {
        if (unaff_x22 != 0) goto LAB_10742ddd4;
        func_0x00010743c108();
        FUN_107435038();
        func_0x00010743c150();
      }
    }
  }
  else {
LAB_10742ddd4:
    if (unaff_x22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10742df24);
      (*pcVar1)();
    }
    __Znwm(unaff_x22 << 3);
    FUN_107435038();
    func_0x00010743b9f8();
    uVar5 = extraout_x9;
    while (uVar3 = unaff_x22 == uVar5, !(bool)uVar3) {
      func_0x00010743baf0();
      uVar5 = extraout_x9_00;
    }
    unaff_x24 = unaff_x22;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010743b618();
      func_0x00010743b604();
      plVar6 = extraout_x10;
      while (*plVar6 != 0) {
        func_0x00010743c180();
        lVar4 = extraout_x8_02;
        plVar6 = extraout_x12;
        uVar5 = extraout_x11;
        if ((bool)uVar3) {
          uVar7 = extraout_x13 & extraout_x9_01;
        }
        else {
          uVar7 = extraout_x13;
          if (unaff_x22 <= extraout_x13) {
            func_0x00010743c1bc();
            lVar4 = extraout_x8_03;
            uVar5 = extraout_x11_00;
            plVar6 = extraout_x12_00;
            uVar7 = extraout_x13_00;
          }
        }
        uVar3 = uVar7 == uVar5;
        if (!(bool)uVar3) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            func_0x00010743bc98();
            plVar6 = extraout_x12_01;
          }
          else {
            func_0x00010743b22c();
            plVar6 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x00010743bce4();
  if ((bool)uVar3) {
    in_ZR = 1;
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x00010743bad8();
    }
  }
LAB_10742ded0:
  func_0x00010743c054();
  if (extraout_x9_02 == 0) {
    func_0x00010743b4bc();
    if (extraout_x9_03 != 0) {
      func_0x00010743b678();
      lVar4 = extraout_x8_05;
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar5 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010743bccc();
          lVar4 = extraout_x8_06;
          uVar5 = extraout_x9_05;
        }
      }
      *(long **)(lVar4 + uVar5 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010743b7a8();
  }
  func_0x00010743b4d4();
  FUN_107435050();
LAB_10742df10:
  return unaff_x20 + 9;
}



/* Entry: 10742df30; end: 10742e15b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010742e238 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10742df30(undefined8 param_1,long param_2,long *******param_3,uint param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  long ******pppppplVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long ******pppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar14;
  long *******extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long *******ppppppplVar15;
  long *******extraout_x9;
  long *******extraout_x9_00;
  long *******ppppppplVar16;
  long *******extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  long extraout_x9_05;
  long *******extraout_x9_06;
  long *******extraout_x9_07;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long *******extraout_x11;
  long *******extraout_x11_00;
  long *******extraout_x11_01;
  long *extraout_x12;
  long *******ppppppplVar17;
  long lVar18;
  long *******ppppppplVar19;
  long *plVar20;
  long *******ppppppplVar21;
  long *****ppppplVar22;
  long *******unaff_x26;
  undefined8 in_stack_00000050;
  long alStack_600 [3];
  long ******pppppplStack_5e8;
  undefined8 uStack_5e0;
  undefined1 *puStack_5d8;
  undefined1 auStack_5d0 [64];
  long lStack_590;
  long lStack_588;
  long lStack_578;
  long lStack_570;
  undefined1 auStack_540 [24];
  long *plStack_528;
  undefined1 auStack_520 [80];
  long alStack_4d0 [63];
  undefined8 uStack_2d8;
  long *****ppppplStack_2d0;
  long *****ppppplStack_2c8;
  undefined1 auStack_2c0 [56];
  undefined1 uStack_288;
  long ******pppppplStack_280;
  long ******pppppplStack_278;
  undefined8 uStack_270;
  long ******pppppplStack_268;
  long ******pppppplStack_260;
  undefined8 uStack_258;
  long ****apppplStack_250 [9];
  undefined1 uStack_208;
  long ******apppppplStack_200 [63];
  undefined8 uStack_8;
  
  func_0x00010743c598();
  ppppppplVar17 = param_3;
  func_0x00010743b2e8();
  pppppplStack_268 = (long ******)0x0;
  uStack_270 = 0;
  uStack_258 = 0;
  pppppplStack_260 = (long ******)0x0;
  pppppplStack_278 = (long ******)0x0;
  pppppplStack_280 = (long ******)0x0;
  plVar20 = (long *)(param_2 + 0x10);
  uStack_8 = extraout_x8;
LAB_10742df74:
  pppppplVar8 = pppppplStack_260;
  plVar20 = (long *)*plVar20;
  ppppppplVar19 = (long *******)pppppplStack_268;
  if (plVar20 != (long *)0x0) {
    ppppppplVar17 = (long *******)(plVar20 + 2);
    ppppppplVar19 = param_3;
    FUN_107436130();
    if (ppppppplVar19 != (long *******)0x0) goto code_r0x00010742df90;
    goto LAB_10742dfd8;
  }
  for (; pppppplVar2 = pppppplStack_278, uVar6 = ppppppplVar19 == (long *******)pppppplVar8,
      ppppppplVar9 = (long *******)pppppplStack_280, !(bool)uVar6; ppppppplVar19 = ppppppplVar19 + 7
      ) {
    ppppppplVar9 = param_3;
    ppppppplVar17 = ppppppplVar19;
    FUN_107436130();
    if ((ppppppplVar9 != (long *******)0x0) && (func_0x00010743c4a8(), (bool)uVar6)) {
      plVar20 = *(long **)(param_5 + 0x18);
      if (plVar20 == (long *)0x0) {
        func_0x000104bfeb48();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10742e11c);
        (*pcVar3)();
      }
      ppppppplVar17 = ppppppplVar9 + 9;
      (**(code **)(*plVar20 + 0x30))(plVar20);
    }
  }
  while( true ) {
    uVar5 = (long)ppppppplVar9 - (long)pppppplVar2 < 0;
    uVar6 = ppppppplVar9 == (long *******)pppppplVar2;
    if ((bool)uVar6) break;
    apppplStack_250[0]._0_1_ = 0;
    uStack_208 = 0;
    auStack_2c0[0] = 0;
    uStack_288 = 0;
    func_0x00010724aea8(apppppplStack_200,param_4 & 0xff,ppppppplVar9,apppplStack_250,3,auStack_2c0)
    ;
    func_0x00010724b12c(auStack_2c0);
    pppppplVar8 = (long ******)apppplStack_250;
    func_0x00010724b2ac();
    ppppplStack_2d0 = (long *****)0x0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    ppppplStack_2c8 = (long *****)pppppplVar8;
    FUN_107435168(*(undefined8 *)(param_6 + 0x18),&ppppplStack_2d0,apppppplStack_200,ppppppplVar9);
    ppppppplVar19 = param_3;
    ppppppplVar17 = ppppppplVar9;
    FUN_107435ef0();
    if (*(int *)(ppppppplVar19 + 2) == 0) {
      ppppppplVar10 = ppppppplVar19;
      ppppppplVar17 = (long *******)&ppppplStack_2d0;
      FUN_107435184();
      func_0x00010743c18c();
      if (ppppppplVar10 != (long *******)0x0) {
        func_0x00010743b2a4();
      }
    }
    else {
      FUN_107434c84(ppppppplVar19);
      ppppplVar22 = ppppplStack_2d0;
      ppppplStack_2d0 = (long *****)0x0;
      *ppppppplVar19 = (long ******)ppppplVar22;
      ppppppplVar19[1] = (long ******)ppppplStack_2c8;
      *(undefined4 *)(ppppppplVar19 + 2) = 0;
    }
    func_0x00010724b374(apppppplStack_200);
    ppppppplVar9 = ppppppplVar9 + 7;
  }
  func_0x000107435144(&pppppplStack_280);
  func_0x00010743b264(uStack_8);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  ppppppplVar9 = &pppppplStack_280;
  func_0x000107435144();
  func_0x00010743b660();
  pcVar3 = FUN_10742e15c;
  func_0x00010743c598();
  pppppplStack_280 = (long ******)&stack0x00000050;
  pppppplStack_278 = (long ******)pcVar3;
  func_0x00010743b2e8();
  uStack_2d8 = extraout_x8_00;
  FUN_10742e608();
  ppppppplVar10 = ppppppplVar17;
  FUN_107437190();
  ppppppplVar21 = (long *******)ppppppplVar9[0x10];
  ppppppplVar16 = ppppppplVar10;
  if (ppppppplVar21 != (long *******)0x0) {
    func_0x00010743bce4();
    if ((bool)uVar6) {
      unaff_x26 = (long *******)(extraout_x8_01 & (ulong)ppppppplVar10);
      uVar6 = true;
    }
    else {
      uVar5 = (long)ppppppplVar10 - (long)ppppppplVar21 < 0;
      uVar6 = ppppppplVar10 == ppppppplVar21;
      unaff_x26 = ppppppplVar10;
      if (ppppppplVar21 <= ppppppplVar10) {
        uVar14 = 0;
        if (ppppppplVar21 != (long *******)0x0) {
          uVar14 = (ulong)ppppppplVar10 / (ulong)ppppppplVar21;
        }
        unaff_x26 = (long *******)((long)ppppppplVar10 - uVar14 * (long)ppppppplVar21);
      }
    }
    ppppplVar22 = ppppppplVar9[0xf][(long)unaff_x26];
    uVar14 = extraout_x8_01;
    if (ppppplVar22 != (long *****)0x0) {
      do {
        while( true ) {
          ppppplVar22 = (long *****)*ppppplVar22;
          if (ppppplVar22 == (long *****)0x0) goto LAB_10742e21c;
          ppppppplVar15 = (long *******)ppppplVar22[1];
          if (ppppppplVar15 != ppppppplVar10) break;
          uVar5 = (long)ppppplVar22[2] - (long)ppppppplVar17 < 0;
          uVar6 = false;
          if ((long *******)ppppplVar22[2] == ppppppplVar17) goto LAB_10742e40c;
        }
        if (((ulong)ppppppplVar21 & uVar14) == 0) {
          ppppppplVar15 = (long *******)((ulong)ppppppplVar15 & uVar14);
        }
        else if (ppppppplVar21 <= ppppppplVar15) {
          func_0x00010743bccc();
          uVar14 = extraout_x8_02;
          ppppppplVar15 = extraout_x9;
        }
        uVar5 = (long)ppppppplVar15 - (long)unaff_x26 < 0;
        uVar6 = ppppppplVar15 == unaff_x26;
      } while ((bool)uVar6);
    }
  }
LAB_10742e21c:
  ppppppplVar19 = ppppppplVar9 + 0x11;
  func_0x00010743bf54();
  func_0x00010743ba70();
  func_0x00010743baa8(ppppppplVar9[0x12]);
  if ((ppppppplVar21 == (long *******)0x0) ||
     (func_0x00010743b688(param_1,*(undefined4 *)(ppppppplVar9 + 0x13)), (bool)uVar5)) {
    func_0x00010743b2f8();
    bVar4 = (long *******)0x2 < ppppppplVar21;
    bVar7 = ppppppplVar21 == (long *******)0x3;
    func_0x00010743b2c0();
    ppppppplVar17 = extraout_x8_03;
    if (!bVar4 || bVar7) {
      ppppppplVar17 = extraout_x9_00;
    }
    if ((undefined1 *)((long)ppppppplVar17 - 1U) == (undefined1 *)0x0) {
      ppppppplVar17 = (long *******)0x2;
    }
    else if (((ulong)ppppppplVar17 & (long)ppppppplVar17 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      ppppppplVar16 = ppppppplVar17;
    }
    ppppppplVar21 = (long *******)ppppppplVar9[0x10];
    uVar6 = ppppppplVar17 == ppppppplVar21;
    if (ppppppplVar21 < ppppppplVar17) {
LAB_10742e284:
      if ((ulong)ppppppplVar17 >> 0x3d != 0) goto LAB_10742e59c;
      lVar11 = (long)ppppppplVar17 << 3;
      __Znwm(lVar11);
      FUN_1074371a8(ppppppplVar9 + 0xf,lVar11);
      ppppppplVar16 = (long *******)0x0;
      ppppppplVar9[0x10] = (long ******)ppppppplVar17;
      while (uVar6 = ppppppplVar17 == ppppppplVar16, !(bool)uVar6) {
        func_0x00010743baf0();
        ppppppplVar16 = extraout_x9_01;
      }
      ppppppplVar21 = ppppppplVar17;
      if (*ppppppplVar19 != (long ******)0x0) {
        func_0x00010743c518();
        func_0x00010743c4d8();
        lVar11 = extraout_x8_04;
        uVar14 = extraout_x9_02;
        plVar20 = extraout_x10;
        ppppppplVar16 = extraout_x11;
        while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
          ppppppplVar15 = (long *******)plVar20[1];
          if (((ulong)ppppppplVar17 & uVar14) == 0) {
            ppppppplVar15 = (long *******)((ulong)ppppppplVar15 & uVar14);
          }
          else if (ppppppplVar17 <= ppppppplVar15) {
            uVar1 = 0;
            if (ppppppplVar17 != (long *******)0x0) {
              uVar1 = (ulong)ppppppplVar15 / (ulong)ppppppplVar17;
            }
            ppppppplVar15 = (long *******)((long)ppppppplVar15 - uVar1 * (long)ppppppplVar17);
          }
          uVar6 = ppppppplVar15 == ppppppplVar16;
          if (!(bool)uVar6) {
            if (*(long *)(lVar11 + (long)ppppppplVar15 * 8) == 0) {
              func_0x00010743bc98();
              lVar11 = extraout_x8_06;
              uVar14 = extraout_x9_04;
              plVar20 = extraout_x12;
              ppppppplVar16 = extraout_x11_01;
            }
            else {
              func_0x00010743b22c();
              lVar11 = extraout_x8_05;
              uVar14 = extraout_x9_03;
              plVar20 = extraout_x10_00;
              ppppppplVar16 = extraout_x11_00;
            }
          }
        }
      }
    }
    else if (ppppppplVar17 < ppppppplVar21) {
      func_0x00010743bafc(param_1,*(undefined4 *)(ppppppplVar9 + 0x13));
      if ((ppppppplVar21 < (long *******)0x3) || (func_0x00010743bdec(), extraout_x8_07 != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010743b20c();
      }
      if (ppppppplVar17 <= ppppppplVar16) {
        ppppppplVar17 = ppppppplVar16;
      }
      uVar6 = ppppppplVar17 == ppppppplVar21;
      if (ppppppplVar17 < ppppppplVar21) {
        if (ppppppplVar17 != (long *******)0x0) goto LAB_10742e284;
        FUN_1074371a8(ppppppplVar9 + 0xf,0);
        ppppppplVar9[0x10] = (long ******)0x0;
        ppppppplVar21 = (long *******)0x0;
      }
      else {
        ppppppplVar21 = (long *******)ppppppplVar9[0x10];
      }
    }
    func_0x00010743bce4();
    if ((bool)uVar6) {
      uVar6 = 1;
      unaff_x26 = (long *******)(extraout_x8_08 & (ulong)ppppppplVar10);
    }
    else {
      uVar6 = ppppppplVar10 == ppppppplVar21;
      unaff_x26 = ppppppplVar10;
      if (ppppppplVar21 <= ppppppplVar10) {
        uVar14 = 0;
        if (ppppppplVar21 != (long *******)0x0) {
          uVar14 = (ulong)ppppppplVar10 / (ulong)ppppppplVar21;
        }
        unaff_x26 = (long *******)((long)ppppppplVar10 - uVar14 * (long)ppppppplVar21);
      }
    }
  }
  if (ppppppplVar9[0xf][(long)unaff_x26] == (long *****)0x0) {
    func_0x00010743c138();
    if (extraout_x9_05 != 0) {
      func_0x00010743b678();
      lVar11 = extraout_x8_09;
      if ((bool)uVar6) {
        ppppppplVar17 = (long *******)((ulong)extraout_x9_06 & extraout_x10_01);
      }
      else {
        ppppppplVar17 = extraout_x9_06;
        if (ppppppplVar21 <= extraout_x9_06) {
          func_0x00010743bccc();
          lVar11 = extraout_x8_10;
          ppppppplVar17 = extraout_x9_07;
        }
      }
      *(long *)(lVar11 + (long)ppppppplVar17 * 8) = alStack_4d0[0];
    }
  }
  else {
    func_0x00010743bfec();
  }
  alStack_4d0[0] = 0;
  ppppppplVar9[0x12] = (long ******)((long)ppppppplVar9[0x12] + 1);
  FUN_1074371c0(alStack_4d0);
LAB_10742e40c:
  plVar20 = alStack_600;
  func_0x00010743bc74();
  pppppplStack_5e8 = (long ******)ppppppplVar9;
  func_0x00010743b898();
  plVar12 = plVar20;
  func_0x00010743b770(&PTR_FUN_1109afc60);
  plStack_528 = plVar12;
  func_0x00010743bc48();
  func_0x00010743b898();
  func_0x00010743b78c(&PTR_SUB_1109afcf0);
  func_0x00010743bf10();
LAB_10742e450:
  ppppppplVar19 = (long *******)*ppppppplVar19;
  lVar11 = lStack_578;
  if (ppppppplVar19 != (long *******)0x0) {
    ppppppplVar17 = ppppppplVar9 + 0x26;
    FUN_10743746c(ppppppplVar17,ppppppplVar19 + 2);
    if (ppppppplVar17 != (long *******)0x0) goto code_r0x00010742e46c;
    goto LAB_10742e4b0;
  }
  for (; uVar6 = lVar11 == lStack_570, lVar18 = lStack_590, !(bool)uVar6; lVar11 = lVar11 + 0x38) {
    ppppppplVar17 = ppppppplVar9 + 0x26;
    FUN_10743746c(ppppppplVar17,lVar11);
    if ((ppppppplVar17 != (long *******)0x0) && (func_0x00010743c4a8(), (bool)uVar6)) {
      func_0x00010743c2e8(*(undefined8 *)(*plVar20 + 0x30));
    }
  }
  for (; uVar6 = lVar18 == lStack_588, !(bool)uVar6; lVar18 = lVar18 + 0x38) {
    func_0x00010743b924();
    func_0x00010724b12c(auStack_5d0);
    puVar13 = auStack_520;
    func_0x00010724b2ac();
    uStack_5e0 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    puStack_5d8 = puVar13;
    func_0x00010743bd64();
    ppppppplVar17 = ppppppplVar9 + 0x26;
    FUN_10743722c(ppppppplVar17,lVar18);
    if (*(int *)(ppppppplVar17 + 2) == 0) {
      func_0x00010743c2d0();
      func_0x00010743c488();
      if (ppppppplVar17 != (long *******)0x0) {
        func_0x00010743b2a4();
      }
    }
    else {
      FUN_107434edc(ppppppplVar17);
      func_0x00010743c494();
    }
    func_0x00010743bf2c();
  }
  func_0x00010743bf00();
  func_0x00010743bed8();
  func_0x00010743bac8();
  func_0x000107437680(auStack_540);
  func_0x00010743bc7c();
  func_0x00010743b264(uStack_2d8);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10742e59c:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10742e5a4);
  (*pcVar3)();
code_r0x00010742df90:
  if (*(int *)(ppppppplVar19 + 0xb) != 0) {
    if (*(int *)(ppppppplVar19 + 0xb) == 1) {
      FUN_107434ad0(apppppplStack_200,ppppppplVar19 + 9);
      unaff_x26 = (long *******)apppppplStack_200[0];
      func_0x000107435084(apppppplStack_200);
      if (unaff_x26 != (long *******)0x0) {
        ppppppplVar17 = (long *******)(plVar20 + 2);
        func_0x0001072d17f4(&pppppplStack_268);
        goto LAB_10742df74;
      }
      FUN_107434b3c(param_3,ppppppplVar19);
    }
LAB_10742dfd8:
    ppppppplVar17 = (long *******)(plVar20 + 2);
    func_0x0001072d17f4(&pppppplStack_280);
  }
  goto LAB_10742df74;
code_r0x00010742e46c:
  if (*(int *)(ppppppplVar17 + 0xb) != 0) {
    if (*(int *)(ppppppplVar17 + 0xb) == 1) {
      func_0x000107434d58(alStack_4d0,ppppppplVar17 + 9);
      lVar11 = alStack_4d0[0];
      FUN_10742ac74(alStack_4d0);
      if (lVar11 != 0) {
        func_0x00010743bf08(ppppppplVar21 + 3);
        goto LAB_10742e450;
      }
      func_0x000107434d94(ppppppplVar9 + 0x26,ppppppplVar17);
    }
LAB_10742e4b0:
    func_0x00010743bf08(&lStack_590);
  }
  goto LAB_10742e450;
}



/* Entry: 10742e15c; end: 10742e607;  */

void FUN_10742e15c(long param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  ulong uVar10;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar11;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  long extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong uVar12;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long *extraout_x12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x23;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x26;
  long alStack_330 [3];
  long lStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined1 auStack_300 [64];
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2a8;
  long lStack_2a0;
  undefined1 auStack_270 [24];
  long *plStack_258;
  undefined1 auStack_250 [80];
  long alStack_200 [63];
  undefined8 uStack_8;
  
  func_0x00010743c598();
  func_0x00010743b2e8();
  uStack_8 = extraout_x8;
  FUN_10742e608();
  uVar12 = param_2;
  FUN_107437190();
  uVar15 = *(ulong *)(param_1 + 0x80);
  uVar11 = uVar12;
  if (uVar15 != 0) {
    func_0x00010743bce4();
    if ((bool)in_ZR) {
      unaff_x26 = extraout_x8_00 & uVar12;
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar12 - uVar15) < 0;
      in_ZR = uVar12 == uVar15;
      unaff_x26 = uVar12;
      if (uVar15 <= uVar12) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = uVar12 / uVar15;
        }
        unaff_x26 = uVar12 - uVar14 * uVar15;
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x78) + unaff_x26 * 8);
    uVar14 = extraout_x8_00;
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10742e21c;
          uVar10 = plVar16[1];
          if (uVar10 != uVar12) break;
          in_NG = (long)(plVar16[2] - param_2) < 0;
          in_ZR = false;
          if (plVar16[2] == param_2) goto LAB_10742e40c;
        }
        if ((uVar15 & uVar14) == 0) {
          uVar10 = uVar10 & uVar14;
        }
        else if (uVar15 <= uVar10) {
          func_0x00010743bccc();
          uVar14 = extraout_x8_01;
          uVar10 = extraout_x9;
        }
        in_NG = (long)(uVar10 - unaff_x26) < 0;
        in_ZR = uVar10 == unaff_x26;
      } while ((bool)in_ZR);
    }
  }
LAB_10742e21c:
  unaff_x23 = (long *)(param_1 + 0x88);
  func_0x00010743bf54();
  func_0x00010743ba70();
  func_0x00010743baa8(*(undefined8 *)(param_1 + 0x90));
  if ((uVar15 == 0) || (func_0x00010743b688(), (bool)in_NG)) {
    func_0x00010743b2f8();
    bVar3 = 2 < uVar15;
    bVar4 = uVar15 == 3;
    func_0x00010743b2c0();
    uVar14 = extraout_x8_02;
    if (!bVar3 || bVar4) {
      uVar14 = extraout_x9_00;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar11 = uVar14;
    }
    uVar15 = *(ulong *)(param_1 + 0x80);
    uVar5 = uVar14 == uVar15;
    if (uVar15 < uVar14) {
LAB_10742e284:
      if (uVar14 >> 0x3d != 0) goto LAB_10742e59c;
      lVar6 = uVar14 << 3;
      __Znwm(lVar6);
      FUN_1074371a8(param_1 + 0x78,lVar6);
      uVar11 = 0;
      *(ulong *)(param_1 + 0x80) = uVar14;
      while (uVar5 = uVar14 == uVar11, !(bool)uVar5) {
        func_0x00010743baf0();
        uVar11 = extraout_x9_01;
      }
      uVar15 = uVar14;
      if (*unaff_x23 != 0) {
        func_0x00010743c518();
        func_0x00010743c4d8();
        lVar6 = extraout_x8_03;
        uVar11 = extraout_x9_02;
        plVar16 = extraout_x10;
        uVar10 = extraout_x11;
        while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
          uVar13 = plVar16[1];
          if ((uVar14 & uVar11) == 0) {
            uVar13 = uVar13 & uVar11;
          }
          else if (uVar14 <= uVar13) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar13 / uVar14;
            }
            uVar13 = uVar13 - uVar1 * uVar14;
          }
          uVar5 = uVar13 == uVar10;
          if (!(bool)uVar5) {
            if (*(long *)(lVar6 + uVar13 * 8) == 0) {
              func_0x00010743bc98();
              lVar6 = extraout_x8_05;
              uVar11 = extraout_x9_04;
              plVar16 = extraout_x12;
              uVar10 = extraout_x11_01;
            }
            else {
              func_0x00010743b22c();
              lVar6 = extraout_x8_04;
              uVar11 = extraout_x9_03;
              plVar16 = extraout_x10_00;
              uVar10 = extraout_x11_00;
            }
          }
        }
      }
    }
    else if (uVar14 < uVar15) {
      func_0x00010743bafc((float)*(ulong *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
      if ((uVar15 < 3) || (func_0x00010743bdec(), extraout_x8_06 != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010743b20c();
      }
      if (uVar14 <= uVar11) {
        uVar14 = uVar11;
      }
      uVar5 = uVar14 == uVar15;
      if (uVar14 < uVar15) {
        if (uVar14 != 0) goto LAB_10742e284;
        FUN_1074371a8(param_1 + 0x78,0);
        *(undefined8 *)(param_1 + 0x80) = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)(param_1 + 0x80);
      }
    }
    func_0x00010743bce4();
    if ((bool)uVar5) {
      in_ZR = 1;
      unaff_x26 = extraout_x8_07 & uVar12;
    }
    else {
      in_ZR = uVar12 == uVar15;
      unaff_x26 = uVar12;
      if (uVar15 <= uVar12) {
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = uVar12 / uVar15;
        }
        unaff_x26 = uVar12 - uVar11 * uVar15;
      }
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x78) + unaff_x26 * 8) == 0) {
    func_0x00010743c138();
    if (extraout_x9_05 != 0) {
      func_0x00010743b678();
      lVar6 = extraout_x8_08;
      if ((bool)in_ZR) {
        uVar12 = extraout_x9_06 & extraout_x10_01;
      }
      else {
        uVar12 = extraout_x9_06;
        if (uVar15 <= extraout_x9_06) {
          func_0x00010743bccc();
          lVar6 = extraout_x8_09;
          uVar12 = extraout_x9_07;
        }
      }
      *(long *)(lVar6 + uVar12 * 8) = alStack_200[0];
    }
  }
  else {
    func_0x00010743bfec();
  }
  alStack_200[0] = 0;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  FUN_1074371c0(alStack_200);
LAB_10742e40c:
  plVar16 = alStack_330;
  func_0x00010743bc74();
  lStack_318 = param_1;
  func_0x00010743b898();
  plVar7 = plVar16;
  func_0x00010743b770(&PTR_FUN_1109afc60);
  plStack_258 = plVar7;
  func_0x00010743bc48();
  func_0x00010743b898();
  func_0x00010743b78c(&PTR_SUB_1109afcf0);
  func_0x00010743bf10();
LAB_10742e450:
  unaff_x23 = (long *)*unaff_x23;
  lVar6 = lStack_2a8;
  if (unaff_x23 != (long *)0x0) {
    lVar6 = param_1 + 0x130;
    FUN_10743746c(lVar6,unaff_x23 + 2);
    if (lVar6 != 0) goto code_r0x00010742e46c;
    goto LAB_10742e4b0;
  }
  for (; uVar5 = lVar6 == lStack_2a0, lVar8 = lStack_2c0, !(bool)uVar5; lVar6 = lVar6 + 0x38) {
    lVar8 = param_1 + 0x130;
    FUN_10743746c(lVar8,lVar6);
    if ((lVar8 != 0) && (func_0x00010743c4a8(), (bool)uVar5)) {
      func_0x00010743c2e8(*(undefined8 *)(*plVar16 + 0x30));
    }
  }
  for (; uVar5 = lVar8 == lStack_2b8, !(bool)uVar5; lVar8 = lVar8 + 0x38) {
    func_0x00010743b924();
    func_0x00010724b12c(auStack_300);
    puVar9 = auStack_250;
    func_0x00010724b2ac();
    uStack_310 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    puStack_308 = puVar9;
    func_0x00010743bd64();
    lVar6 = param_1 + 0x130;
    FUN_10743722c(lVar6,lVar8);
    if (*(int *)(lVar6 + 0x10) == 0) {
      func_0x00010743c2d0();
      func_0x00010743c488();
      if (lVar6 != 0) {
        func_0x00010743b2a4();
      }
    }
    else {
      FUN_107434edc(lVar6);
      func_0x00010743c494();
    }
    func_0x00010743bf2c();
  }
  func_0x00010743bf00();
  func_0x00010743bed8();
  func_0x00010743bac8();
  func_0x000107437680(auStack_270);
  func_0x00010743bc7c();
  func_0x00010743b264(uStack_8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10742e59c:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10742e5a4);
  (*pcVar2)();
code_r0x00010742e46c:
  if (*(int *)(lVar6 + 0x58) != 0) {
    if (*(int *)(lVar6 + 0x58) == 1) {
      func_0x000107434d58(alStack_200,lVar6 + 0x48);
      lVar8 = alStack_200[0];
      FUN_10742ac74(alStack_200);
      if (lVar8 != 0) {
        func_0x00010743bf08(uVar15 + 0x18);
        goto LAB_10742e450;
      }
      func_0x000107434d94(param_1 + 0x130,lVar6);
    }
LAB_10742e4b0:
    func_0x00010743bf08(&lStack_2c0);
  }
  goto LAB_10742e450;
}



/* Entry: 10742e608; end: 10742e62b;  */

void FUN_10742e608(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10743aad8(param_1 + 0x78,&uStack_18);
  return;
}



/* Entry: 10742e62c; end: 10742e673;  */

void FUN_10742e62c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  param_2 = param_2 + 0x158;
  FUN_107437e34();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x588);
    uVar2 = *(undefined8 *)(param_2 + 0x580);
    param_1[1] = *(undefined8 *)(param_2 + 0x588);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010743b4a0();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10742e674; end: 10742fc1b;  */

void FUN_10742e674(undefined8 param_1,undefined4 param_2,float param_3,long *param_4,long *param_5,
                  long *param_6,long *param_7,long *param_8,undefined8 param_9,undefined8 param_10,
                  undefined8 param_11,byte param_12)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar13;
  long *plVar14;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  undefined8 extraout_x8_08;
  long *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  ulong uVar15;
  ulong extraout_x9;
  long extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long *plVar16;
  long lVar17;
  long *extraout_x9_06;
  long *extraout_x9_07;
  ulong extraout_x9_08;
  ulong extraout_x9_09;
  ulong extraout_x9_10;
  int extraout_w10;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  ulong uVar18;
  ulong extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long *extraout_x11_03;
  long *extraout_x11_04;
  long *extraout_x11_05;
  long extraout_x12;
  long *extraout_x12_00;
  long extraout_x12_01;
  long *plVar19;
  long *extraout_x12_02;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long *unaff_x20;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long lVar29;
  long *unaff_x26;
  long *unaff_x28;
  long *plVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  long *plStack_1280;
  long *plStack_1278;
  undefined8 uStack_1270;
  undefined1 auStack_1248 [56];
  long *plStack_1210;
  undefined8 uStack_1208;
  long *plStack_1200;
  undefined8 *puStack_11f8;
  long *plStack_11f0;
  long *plStack_11e8;
  undefined8 *puStack_11e0;
  long lStack_11d8;
  long *plStack_11d0;
  long *plStack_11c8;
  long *plStack_11c0;
  long *plStack_11b8;
  undefined1 *puStack_11b0;
  code *pcStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  long lStack_1190;
  undefined8 uStack_1188;
  long *plStack_1178;
  undefined8 uStack_1170;
  long *plStack_1168;
  uint uStack_115c;
  undefined4 uStack_1158;
  uint uStack_1154;
  undefined8 *puStack_1150;
  undefined8 *puStack_1148;
  long *plStack_1140;
  long *plStack_1138;
  long *plStack_1130;
  long *plStack_1128;
  long alStack_1120 [4];
  undefined4 uStack_1100;
  long alStack_10f8 [12];
  long lStack_1098;
  undefined1 uStack_1090;
  long lStack_1088;
  long lStack_1080;
  undefined1 auStack_1078 [64];
  undefined1 auStack_1038 [88];
  undefined1 auStack_fe0 [88];
  undefined1 auStack_f88 [88];
  undefined1 auStack_f30 [96];
  undefined1 auStack_ed0 [64];
  undefined1 auStack_e90 [8];
  undefined1 uStack_e88;
  long *plStack_e80;
  long lStack_e78;
  undefined8 auStack_e70 [5];
  undefined1 uStack_e48;
  undefined8 uStack_e40;
  undefined8 auStack_bc8 [9];
  undefined1 auStack_b80 [120];
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined1 auStack_a98 [120];
  undefined8 auStack_a20 [10];
  undefined1 auStack_9d0 [56];
  undefined8 uStack_998;
  undefined1 auStack_990 [56];
  undefined8 auStack_958 [2];
  undefined8 *puStack_948;
  undefined8 *puStack_940;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 uStack_920;
  undefined4 uStack_91f;
  undefined3 uStack_91b;
  undefined1 auStack_8f8 [16];
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined1 auStack_8e0 [24];
  undefined1 auStack_8c8 [32];
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  float fStack_8a0;
  undefined1 auStack_870 [56];
  undefined1 auStack_838 [8];
  undefined1 auStack_830 [56];
  undefined1 auStack_7f8 [32];
  undefined1 auStack_7d8 [56];
  undefined1 uStack_7a0;
  undefined1 auStack_788 [8];
  undefined1 auStack_780 [48];
  uint uStack_750;
  undefined1 auStack_6e8 [824];
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  long *plStack_338;
  undefined1 auStack_330 [144];
  undefined1 auStack_2a0 [152];
  undefined1 auStack_208 [88];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_118 [104];
  undefined8 uStack_b0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_115c = (uint)param_6;
  uStack_1154 = (uint)param_12;
  plVar16 = param_7;
  uStack_11a0 = param_10;
  uStack_1198 = param_11;
  plStack_1178 = param_8;
  uStack_1170 = param_9;
  plStack_1140 = param_5;
  func_0x00010743b2e8();
  plVar25 = param_4 + 0x2d;
  plVar28 = (long *)param_4[0x2d];
  plStack_1138 = plVar16;
  plStack_1130 = plVar25;
  plStack_1128 = param_4;
  uStack_b0 = extraout_x8;
LAB_10742e6e8:
  if (plVar28 != (long *)0x0) {
    plVar30 = (long *)*plStack_1140;
    plVar24 = (long *)plVar30[1];
    if ((plVar24 != (long *)0x0) && (unaff_x20 = plVar30 + 3, *unaff_x20 != 0)) {
      func_0x00010726364c(unaff_x20,plVar28 + 2);
      unaff_x25 = (long *)((long)plVar24 + -1);
      if (((ulong)plVar24 & (ulong)unaff_x25) == 0) {
        plVar25 = (long *)((ulong)unaff_x20 & (ulong)unaff_x25);
      }
      else {
        plVar25 = unaff_x20;
        if (plVar24 <= unaff_x20) {
          uVar13 = 0;
          if (plVar24 != (long *)0x0) {
            uVar13 = (ulong)unaff_x20 / (ulong)plVar24;
          }
          plVar25 = (long *)((long)unaff_x20 - uVar13 * (long)plVar24);
        }
      }
      unaff_x28 = *(long **)(*plVar30 + (long)plVar25 * 8);
      if (unaff_x28 != (long *)0x0) {
        do {
          while( true ) {
            unaff_x28 = (long *)*unaff_x28;
            if (unaff_x28 == (long *)0x0) goto LAB_10742e798;
            plVar30 = (long *)unaff_x28[1];
            in_NG = (long)unaff_x20 - (long)plVar30 < 0;
            in_ZR = unaff_x20 == plVar30;
            if (!(bool)in_ZR) break;
            plVar30 = unaff_x28 + 2;
            func_0x000104c32db4(plVar30,plVar28 + 2);
            if (((ulong)plVar30 & 1) != 0) {
              param_7 = plStack_1138;
              plVar28 = (long *)*plVar28;
              goto LAB_10742e6e8;
            }
          }
          if (((ulong)plVar24 & (ulong)unaff_x25) == 0) {
            plVar30 = (long *)((ulong)plVar30 & (ulong)unaff_x25);
          }
          else if (plVar24 <= plVar30) {
            uVar13 = 0;
            if (plVar24 != (long *)0x0) {
              uVar13 = (ulong)plVar30 / (ulong)plVar24;
            }
            plVar30 = (long *)((long)plVar30 - uVar13 * (long)plVar24);
          }
        } while (plVar30 == plVar25);
      }
    }
LAB_10742e798:
    plVar24 = (long *)(plStack_1128[0x3f] + 0x20);
    while (plVar30 = plStack_1128, plVar25 = plStack_1130, param_7 = plStack_1138,
          plVar24 = (long *)*plVar24, plVar24 != (long *)0x0) {
      lVar26 = plVar24[9];
      lVar17 = lVar26;
      while (lVar26 != plVar24[10]) {
        lVar12 = lVar26;
        func_0x000104c32db4(lVar26,plVar28 + 2);
        if ((int)lVar12 == 0) {
          lVar26 = lVar26 + 0x78;
          lVar17 = lVar17 + 0x78;
        }
        else {
          unaff_x24 = (undefined8 *)plVar24[9];
          unaff_x26 = (long *)plVar24[10];
          for (lVar12 = (long)unaff_x24 + lVar17; unaff_x25 = (long *)(lVar12 - (long)unaff_x24),
              unaff_x25 + 0xf != unaff_x26; lVar12 = lVar12 + 0x78) {
            func_0x000104c2f1f0(unaff_x25);
            func_0x000104c2f1f0(unaff_x25 + 7,unaff_x25 + 0x16);
            unaff_x25[0xe] = unaff_x25[0x1d];
          }
          FUN_107432afc(plVar24 + 9,lVar12 - (long)unaff_x24);
        }
      }
    }
    uVar15 = plStack_1128[0x2c];
    unaff_x20 = (long *)*plVar28;
    uVar13 = plVar28[1];
    uVar18 = uVar15 - 1;
    if ((uVar15 & uVar18) == 0) {
      uVar13 = uVar18 & uVar13;
    }
    else if (uVar15 <= uVar13) {
      func_0x00010743c114();
      uVar13 = extraout_x8_00;
      uVar15 = extraout_x9;
      uVar18 = extraout_x11;
    }
    lVar26 = plVar30[0x2b];
    plVar24 = *(long **)(lVar26 + uVar13 * 8);
    do {
      plVar14 = plVar24;
      plVar24 = (long *)*plVar14;
    } while ((long *)*plVar14 != plVar28);
    in_NG = (long)plVar14 - (long)plVar25 < 0;
    in_ZR = true;
    plVar24 = unaff_x20;
    if (plVar14 == plVar25) {
LAB_10742e8b4:
      if (unaff_x20 == (long *)0x0) {
LAB_10742e8ec:
        *(undefined8 *)(lVar26 + uVar13 * 8) = 0;
        plVar24 = (long *)*plVar28;
        goto LAB_10742e8f4;
      }
      uVar20 = unaff_x20[1];
      if ((uVar15 & uVar18) == 0) {
        uVar23 = uVar20 & uVar18;
      }
      else {
        uVar23 = uVar20;
        if (uVar15 <= uVar20) {
          uVar23 = 0;
          if (uVar15 != 0) {
            uVar23 = uVar20 / uVar15;
          }
          uVar23 = uVar20 - uVar23 * uVar15;
        }
      }
      in_NG = (long)(uVar23 - uVar13) < 0;
      in_ZR = uVar23 == uVar13;
      if (!(bool)in_ZR) goto LAB_10742e8ec;
LAB_10742e8fc:
      if ((uVar15 & uVar18) == 0) {
        uVar20 = uVar20 & uVar18;
      }
      else if (uVar15 <= uVar20) {
        uVar18 = 0;
        if (uVar15 != 0) {
          uVar18 = uVar20 / uVar15;
        }
        uVar20 = uVar20 - uVar18 * uVar15;
      }
      in_NG = (long)(uVar20 - uVar13) < 0;
      in_ZR = uVar20 == uVar13;
      if (!(bool)in_ZR) {
        *(long **)(lVar26 + uVar20 * 8) = plVar14;
        plVar24 = (long *)*plVar28;
      }
    }
    else {
      uVar20 = plVar14[1];
      if ((uVar15 & uVar18) == 0) {
        uVar20 = uVar20 & uVar18;
      }
      else if (uVar15 <= uVar20) {
        uVar23 = 0;
        if (uVar15 != 0) {
          uVar23 = uVar20 / uVar15;
        }
        uVar20 = uVar20 - uVar23 * uVar15;
      }
      in_NG = (long)(uVar20 - uVar13) < 0;
      in_ZR = uVar20 == uVar13;
      if (!(bool)in_ZR) goto LAB_10742e8b4;
LAB_10742e8f4:
      if (plVar24 != (long *)0x0) {
        uVar20 = plVar24[1];
        goto LAB_10742e8fc;
      }
    }
    *plVar14 = (long)plVar24;
    *plVar28 = 0;
    plVar30[0x2e] = plVar30[0x2e] + -1;
    uStack_928 = plVar25;
    uStack_920 = 1;
    uStack_91f = 0;
    uStack_91b = 0;
    uStack_930 = plVar28;
    FUN_107437ed4(&uStack_930);
    unaff_x28 = (long *)0x0;
    plVar28 = unaff_x20;
    goto LAB_10742e6e8;
  }
  plVar28 = (long *)(*plStack_1140 + 0x10);
  plStack_1140 = auStack_bc8;
  alStack_1120[1] = 0;
  alStack_1120[0] = 0;
  alStack_1120[3] = 0;
  alStack_1120[2] = 0;
  puStack_1148 = auStack_a20;
  puStack_1150 = auStack_958;
  uStack_1100 = 0x3f800000;
  plStack_1168 = param_7 + 1;
  auVar35 = NEON_fmov(0x3f800000,4);
  uStack_1188 = auVar35._8_8_;
  lStack_1190 = auVar35._0_8_;
LAB_10742e9c4:
  plVar24 = plStack_1128;
  plVar28 = (long *)*plVar28;
  if (plVar28 != (long *)0x0) {
    unaff_x28 = plStack_1128 + 0x2b;
    FUN_107437e34(unaff_x28,plVar28 + 2);
    if (unaff_x28 == (long *)0x0) {
      plVar25 = (long *)plVar28[9];
      lStack_e78 = plVar28[10];
      plStack_e80 = plVar25;
      if (lStack_e78 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10 != 0);
      }
      FUN_107438188(auStack_208,plVar25);
      func_0x00010743bd00();
      func_0x00010743b05c();
      plVar30 = plStack_1130;
      plVar24 = &uStack_930;
      FUN_1073243b8(auStack_330,plVar25 + 0xf);
      func_0x00010743b084(&uStack_1b0,&plStack_338);
      func_0x00010727d614(auStack_fe0,plVar25 + 0x22);
      func_0x00010743b0a8(&lStack_1098,auStack_fe0);
      func_0x00010727d614(auStack_1038,plVar25 + 0x2e);
      func_0x00010743b0a8(alStack_10f8,auStack_1038);
      FUN_1073243b8(&uStack_3a8,plVar25 + 0x3b);
      func_0x00010743b084(auStack_2a0,&plStack_3b0);
      FUN_1074383dc(auStack_f88,plVar25 + 0x4e);
      func_0x00010743b0d0(auStack_f30,auStack_f88);
      param_6 = &uStack_1b0;
      plVar16 = &lStack_1098;
      param_8 = alStack_10f8;
      FUN_107438484(auStack_e70,auStack_118);
      FUN_107433a58(auStack_f30);
      FUN_1073e64d8(auStack_f88);
      func_0x00010743be3c();
      func_0x00010743c234();
      func_0x000107410c2c(alStack_10f8);
      func_0x000107266a30(auStack_1038);
      func_0x000107410c2c(&lStack_1098);
      func_0x000107266a30(auStack_fe0);
      func_0x00010743be54();
      FUN_10732442c(auStack_330);
      func_0x00010743b858();
      FUN_107432d98(auStack_208);
      plStack_1140[8] = 0;
      plStack_1140[5] = 0;
      plStack_1140[4] = 0;
      plStack_1140[7] = 0;
      plStack_1140[6] = 0;
      plStack_1140[1] = 0;
      *plStack_1140 = 0;
      plStack_1140[3] = 0;
      plStack_1140[2] = 0;
      func_0x0001073e94b8(auStack_b80);
      uStack_ab0 = 0;
      uStack_ab8 = 0;
      uStack_aa0 = 0;
      uStack_aa8 = 0;
      uStack_ad0 = 0;
      uStack_ad8 = 0;
      uStack_ac0 = 0;
      uStack_ac8 = 0;
      uStack_af0 = 0;
      uStack_af8 = 0;
      uStack_ae0 = 0;
      uStack_ae8 = 0;
      uStack_b00 = 0;
      uStack_b08 = 0;
      FUN_1073dd420(auStack_a98);
      puStack_1148[7] = 0;
      puStack_1148[6] = 0;
      puStack_1148[9] = 0;
      puStack_1148[8] = 0;
      puStack_1148[3] = 0;
      puStack_1148[2] = 0;
      puStack_1148[5] = 0;
      puStack_1148[4] = 0;
      puStack_1148[1] = 0;
      *puStack_1148 = 0;
      func_0x000104c2f64c(auStack_9d0);
      uStack_998 = 0;
      func_0x000104c2f64c(auStack_990);
      *(undefined4 *)(puStack_1150 + 1) = 0;
      *puStack_1150 = 0;
      puVar10 = (undefined8 *)0x2a0;
      __Znwm();
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar1 = puVar10 + 3;
      *puVar10 = &PTR_FUN_1109b00b0;
      _bzero(puVar1,0x288);
      FUN_10742c4ec(puVar1);
      puStack_948 = puVar1;
      puStack_940 = puVar10;
      func_0x000104c2fe00(&uStack_930,plVar28 + 2);
      unaff_x24 = &uStack_930;
      func_0x000107432b54(auStack_8f8,&plStack_e80);
      plVar25 = plStack_1128;
      param_7 = plStack_1128 + 0x2e;
      func_0x00010726364c(param_7,&uStack_930);
      unaff_x26 = (long *)plVar25[0x2c];
      uVar7 = in_NG;
      if (unaff_x26 != (long *)0x0) {
        unaff_x20 = (long *)((long)unaff_x26 + -1);
        if (((ulong)unaff_x26 & (ulong)unaff_x20) == 0) {
          plVar24 = (long *)((ulong)unaff_x20 & (ulong)param_7);
          in_ZR = true;
          in_NG = false;
        }
        else {
          in_NG = (long)param_7 - (long)unaff_x26 < 0;
          in_ZR = param_7 == unaff_x26;
          plVar24 = param_7;
          if (unaff_x26 <= param_7) {
            uVar13 = 0;
            if (unaff_x26 != (long *)0x0) {
              uVar13 = (ulong)param_7 / (ulong)unaff_x26;
            }
            plVar24 = (long *)((long)param_7 - uVar13 * (long)unaff_x26);
          }
        }
        plVar25 = *(long **)(plStack_1128[0x2b] + (long)plVar24 * 8);
        uVar7 = in_NG;
        plVar30 = plStack_1130;
        if (plVar25 != (long *)0x0) {
          do {
            while( true ) {
              plVar25 = (long *)*plVar25;
              uVar7 = in_NG;
              plVar30 = plStack_1130;
              if (plVar25 == (long *)0x0) goto LAB_10742ec84;
              plVar14 = (long *)plVar25[1];
              in_NG = (long)plVar14 - (long)param_7 < 0;
              in_ZR = plVar14 == param_7;
              if (!(bool)in_ZR) break;
              plVar30 = plVar25 + 2;
              func_0x000104c32db4(plVar30,&uStack_930);
              if (((ulong)plVar30 & 1) != 0) goto LAB_10742eefc;
            }
            if (((ulong)unaff_x26 & (ulong)unaff_x20) == 0) {
              plVar14 = (long *)((ulong)plVar14 & (ulong)unaff_x20);
            }
            else if (unaff_x26 <= plVar14) {
              uVar13 = 0;
              if (unaff_x26 != (long *)0x0) {
                uVar13 = (ulong)plVar14 / (ulong)unaff_x26;
              }
              plVar14 = (long *)((long)plVar14 - uVar13 * (long)unaff_x26);
            }
            in_NG = (long)plVar14 - (long)plVar24 < 0;
            in_ZR = plVar14 == plVar24;
            uVar7 = in_NG;
          } while ((bool)in_ZR);
        }
      }
LAB_10742ec84:
      unaff_x20 = (long *)0x590;
      __Znwm();
      uStack_1a0 = 1;
      *unaff_x20 = 0;
      unaff_x20[1] = (long)param_7;
      uStack_1b0 = unaff_x20;
      uStack_1a8 = plVar30;
      func_0x000104c2fe00(unaff_x20 + 2,&uStack_930);
      plVar25 = unaff_x20 + 9;
      func_0x000107432b54(plVar25,auStack_8f8);
      func_0x00010743baa8(plStack_1128[0x2e]);
      param_2 = *(undefined4 *)(extraout_x9_00 + 0x178);
      if (unaff_x26 == (long *)0x0) {
LAB_10742ecd8:
        bVar6 = (long *)0x2 < unaff_x26;
        bVar8 = unaff_x26 == (long *)0x3;
        func_0x00010743b2c0((long)unaff_x26 << 1);
        plVar24 = extraout_x8_01;
        if (!bVar6 || bVar8) {
          plVar24 = extraout_x9_01;
        }
        if ((long)plVar24 - 1U == 0) {
          plVar24 = (long *)0x2;
        }
        else if (((ulong)plVar24 & (long)plVar24 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar25 = plVar24;
        }
        unaff_x26 = (long *)plStack_1128[0x2c];
        if (unaff_x26 < plVar24) {
LAB_10742ed30:
          if ((ulong)plVar24 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10742f8c4);
            (*pcVar5)();
          }
          lVar26 = (long)plVar24 << 3;
          __Znwm(lVar26);
          plVar25 = plStack_1128;
          FUN_107437f08(plStack_1128 + 0x2b,lVar26);
          plVar14 = (long *)0x0;
          plVar25[0x2c] = (long)plVar24;
          while (bVar8 = plVar14 <= plVar24, plVar24 != plVar14) {
            func_0x00010743baf0();
            plVar14 = extraout_x9_02;
          }
          unaff_x26 = plVar24;
          if (*plVar30 != 0) {
            func_0x00010743c504();
            plVar25 = extraout_x11_00;
            if (bVar8) {
              plVar25 = (long *)((long)extraout_x11_00 - extraout_x12 * (long)plVar24);
            }
            if (((ulong)plVar24 & extraout_x9_03) == 0) {
              plVar25 = (long *)((ulong)extraout_x11_00 & extraout_x9_03);
            }
            *(long **)(extraout_x8_02 + (long)plVar25 * 8) = plVar30;
            lVar26 = extraout_x8_02;
            uVar13 = extraout_x9_03;
            plVar14 = extraout_x10;
            while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
              plVar21 = (long *)plVar14[1];
              if (((ulong)plVar24 & uVar13) == 0) {
                plVar21 = (long *)((ulong)plVar21 & uVar13);
              }
              else if (plVar24 <= plVar21) {
                uVar15 = 0;
                if (plVar24 != (long *)0x0) {
                  uVar15 = (ulong)plVar21 / (ulong)plVar24;
                }
                plVar21 = (long *)((long)plVar21 - uVar15 * (long)plVar24);
              }
              if (plVar21 != plVar25) {
                if (*(long *)(lVar26 + (long)plVar21 * 8) == 0) {
                  func_0x00010743bc98();
                  lVar26 = extraout_x8_04;
                  uVar13 = extraout_x9_05;
                  plVar14 = extraout_x12_00;
                  plVar25 = extraout_x11_02;
                }
                else {
                  func_0x00010743b22c();
                  lVar26 = extraout_x8_03;
                  uVar13 = extraout_x9_04;
                  plVar14 = extraout_x10_00;
                  plVar25 = extraout_x11_01;
                }
              }
            }
          }
        }
        else if (plVar24 < unaff_x26) {
          param_2 = (undefined4)plStack_1128[0x2f];
          func_0x00010743bafc();
          if ((unaff_x26 < (long *)0x3) || (((ulong)unaff_x26 & (long)unaff_x26 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x00010743b20c();
          }
          plVar14 = plStack_1128;
          if (plVar24 <= plVar25) {
            plVar24 = plVar25;
          }
          if (plVar24 < unaff_x26) {
            if (plVar24 != (long *)0x0) goto LAB_10742ed30;
            FUN_107437f08(plStack_1128 + 0x2b,0);
            plVar14[0x2c] = 0;
            unaff_x26 = (long *)0x0;
          }
          else {
            unaff_x26 = (long *)plStack_1128[0x2c];
          }
        }
        if (((ulong)unaff_x26 & (long)unaff_x26 - 1U) == 0) {
          in_ZR = 1;
          in_NG = false;
          plVar24 = (long *)((long)unaff_x26 - 1U & (ulong)param_7);
        }
        else {
          in_NG = (long)param_7 - (long)unaff_x26 < 0;
          in_ZR = param_7 == unaff_x26;
          plVar24 = param_7;
          if (unaff_x26 <= param_7) {
            uVar13 = 0;
            if (unaff_x26 != (long *)0x0) {
              uVar13 = (ulong)param_7 / (ulong)unaff_x26;
            }
            plVar24 = (long *)((long)param_7 - uVar13 * (long)unaff_x26);
          }
        }
      }
      else {
        param_3 = (float)unaff_x26;
        func_0x00010743ba9c();
        in_NG = false;
        if ((bool)uVar7) goto LAB_10742ecd8;
      }
      lVar26 = plStack_1128[0x2b];
      if (*(long *)(lVar26 + (long)plVar24 * 8) == 0) {
        *unaff_x20 = *plVar30;
        *plVar30 = (long)unaff_x20;
        *(long **)(lVar26 + (long)plVar24 * 8) = plVar30;
        if (*unaff_x20 != 0) {
          plVar25 = *(long **)(*unaff_x20 + 8);
          if (((ulong)unaff_x26 & (long)unaff_x26 - 1U) == 0) {
            plVar25 = (long *)((ulong)plVar25 & (long)unaff_x26 - 1U);
            in_ZR = true;
            in_NG = false;
          }
          else {
            in_NG = (long)plVar25 - (long)unaff_x26 < 0;
            in_ZR = plVar25 == unaff_x26;
            if (unaff_x26 <= plVar25) {
              uVar13 = 0;
              if (unaff_x26 != (long *)0x0) {
                uVar13 = (ulong)plVar25 / (ulong)unaff_x26;
              }
              plVar25 = (long *)((long)plVar25 - uVar13 * (long)unaff_x26);
            }
          }
          *(long **)(lVar26 + (long)plVar25 * 8) = unaff_x20;
        }
      }
      else {
        func_0x00010743b7a8();
      }
      uStack_1b0 = (long *)0x0;
      plStack_1128[0x2e] = plStack_1128[0x2e] + 1;
      FUN_107437ed4(&uStack_1b0);
      plVar25 = plVar30;
LAB_10742eefc:
      FUN_107433274(&uStack_930);
      func_0x000107433298(&plStack_e80);
    }
    unaff_x25 = (long *)plStack_1128[0x2c];
    if ((unaff_x25 != (long *)0x0) && (plStack_1128[0x2e] != 0)) {
      unaff_x20 = plStack_1128 + 0x2e;
      func_0x00010726364c(unaff_x20,plVar28 + 2);
      unaff_x26 = (long *)((long)unaff_x25 + -1);
      if (((ulong)unaff_x25 & (ulong)unaff_x26) == 0) {
        plVar25 = (long *)((ulong)unaff_x20 & (ulong)unaff_x26);
        in_ZR = true;
        in_NG = false;
      }
      else {
        in_NG = (long)unaff_x20 - (long)unaff_x25 < 0;
        in_ZR = unaff_x20 == unaff_x25;
        plVar25 = unaff_x20;
        if (unaff_x25 <= unaff_x20) {
          uVar13 = 0;
          if (unaff_x25 != (long *)0x0) {
            uVar13 = (ulong)unaff_x20 / (ulong)unaff_x25;
          }
          plVar25 = (long *)((long)unaff_x20 - uVar13 * (long)unaff_x25);
        }
      }
      param_7 = *(long **)(plStack_1128[0x2b] + (long)plVar25 * 8);
      if (param_7 != (long *)0x0) {
        do {
          while( true ) {
            param_7 = (long *)*param_7;
            if (param_7 == (long *)0x0) goto LAB_10742e9c4;
            func_0x00010743c564();
            if ((bool)in_ZR) break;
            if (((ulong)unaff_x25 & (ulong)unaff_x26) == 0) {
              plVar24 = (long *)((ulong)extraout_x8_05 & (ulong)unaff_x26);
            }
            else {
              plVar24 = extraout_x8_05;
              if (unaff_x25 <= extraout_x8_05) {
                uVar13 = 0;
                if (unaff_x25 != (long *)0x0) {
                  uVar13 = (ulong)extraout_x8_05 / (ulong)unaff_x25;
                }
                plVar24 = (long *)((long)extraout_x8_05 - uVar13 * (long)unaff_x25);
              }
            }
            in_NG = (long)plVar24 - (long)plVar25 < 0;
            in_ZR = plVar24 == plVar25;
            if (!(bool)in_ZR) goto LAB_10742e9c4;
          }
          plVar24 = param_7 + 2;
          func_0x000104c32db4(plVar24,plVar28 + 2);
          plVar30 = plStack_1138;
        } while (((ulong)plVar24 & 1) == 0);
        unaff_x26 = &uStack_1b0;
        if ((((uStack_115c & 1) == 0) && (unaff_x28 != (long *)0x0)) &&
           ((((char)param_7[0x19] == '\0' && (char)param_7[0xc] == '\0') &&
            ((char)param_7[0x2c] == '\0' && (char)param_7[0x37] == '\0')) &&
            ((char)param_7[0x42] == '\0' && (char)param_7[0x55] == '\0'))) {
          if ((int)param_7[0x68] == 0) {
            auStack_e70[0] = CONCAT44(auStack_e70[0]._4_4_,1);
          }
          else {
            uStack_930 = (long *)((ulong)uStack_930 & 0xffffffffffffff00);
            uStack_7a0 = 0;
            func_0x0001077b1090(&plStack_e80,param_7 + 0x60,&uStack_930);
            FUN_1074332fc(&uStack_930);
          }
          func_0x00010743bb78();
          func_0x00010743bcd8();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10742f0d4;
          FUN_107433380(&uStack_930);
          FUN_10743331c(&plStack_e80,param_7 + 0x69);
          func_0x000104c2f714(&uStack_930);
          func_0x00010743bb78();
          func_0x00010743bcd8();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10742f0d4;
          FUN_107433384(&uStack_930,param_7 + 0x78);
          func_0x00010743c220();
          func_0x00010743c364();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10742f0d4;
          FUN_107433384(&uStack_930,param_7 + 0x7f);
          func_0x00010743c220();
          func_0x00010743c364();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10742f0d4;
          FUN_1074333ec(&uStack_930);
          FUN_10743331c(&plStack_e80,param_7 + 0x86);
          func_0x000104c2f714(&uStack_930);
          func_0x00010743bb78();
          func_0x00010743bcd8();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10742f0d4;
          in_NG = param_7[9] - plVar28[9] < 0;
          in_ZR = param_7[9] == plVar28[9];
          if (!(bool)in_ZR) goto LAB_10742f0d4;
          unaff_x20 = (long *)0x0;
          plVar25 = plStack_1128;
        }
        else {
LAB_10742f0d4:
          FUN_1074333f0(param_7 + 9,plVar28 + 9);
          lVar26 = param_7[9];
          func_0x00010743bd00();
          func_0x000107432c64();
          FUN_107437f20(&plStack_3b0,lVar26,plVar30,auStack_118);
          func_0x000107432e2c(&uStack_1b0,param_7 + 0x18);
          FUN_107437ff8(&plStack_e80,lVar26 + 0x70,plVar30,&uStack_1b0);
          func_0x000107432f04(auStack_f88,param_7 + 0x2b);
          FUN_1074380d4(auStack_208,lVar26 + 0x110,plVar30,auStack_f88);
          func_0x000107432f04(auStack_1038,param_7 + 0x36);
          FUN_1074380d4(auStack_fe0,lVar26 + 0x170,plVar30,auStack_1038);
          plVar25 = plStack_1128;
          func_0x000107432e2c(&plStack_338,param_7 + 0x41);
          FUN_107437ff8(auStack_2a0,lVar26 + 0x1d0,plVar30,&plStack_338);
          func_0x000107432fcc(alStack_10f8,param_7 + 0x54);
          FUN_1074383dc(auStack_ed0,lVar26 + 0x270);
          func_0x000107432fcc(auStack_f30,alStack_10f8);
          plVar16 = (long *)(lVar26 + 0x2b0);
          if (*(char *)(lVar26 + 0x2b8) == '\0') {
            plVar16 = plStack_1168;
          }
          lStack_1080 = *plVar16;
          uVar3 = *(uint *)(plVar16 + 1);
          plVar16 = (long *)(lVar26 + 0x2b0);
          if (*(char *)(lVar26 + 0x2c8) == '\0') {
            plVar16 = plStack_1168;
          }
          lStack_1088 = plVar16[2];
          uVar4 = *(uint *)(plVar16 + 3);
          lStack_1098._0_1_ = 0;
          uStack_1090 = 0;
          if ((uVar4 & 1) == 0) {
            lStack_1088 = 0;
          }
          lStack_1088 = lStack_1088 + *plVar30;
          if ((uVar3 & 1) == 0) {
            lStack_1080 = 0;
          }
          lStack_1080 = lStack_1088 + lStack_1080;
          FUN_107433094(auStack_1078,auStack_ed0);
          if (((uVar3 & 1) != 0) || ((uVar4 & 1) != 0)) {
            FUN_10743306c(auStack_e90,auStack_f30);
            uStack_e88 = 1;
            FUN_107433988(&lStack_1098,auStack_e90);
            FUN_107433a80(auStack_e90);
          }
          FUN_107433a58(auStack_f30);
          FUN_1073e64d8(auStack_ed0);
          FUN_107438484(&uStack_930,&plStack_3b0,&plStack_e80,auStack_208,auStack_fe0,auStack_2a0,
                        &lStack_1098);
          FUN_107433a58(&lStack_1098);
          FUN_107433a58(alStack_10f8);
          func_0x00010743be3c();
          FUN_1074338c4(&plStack_338);
          func_0x000107410c2c(auStack_fe0);
          func_0x000107410c2c(auStack_1038);
          func_0x000107410c2c(auStack_208);
          func_0x000107410c2c(auStack_f88);
          FUN_1074338c4(&plStack_e80);
          func_0x00010743be54();
          FUN_1074335c8(&plStack_3b0);
          func_0x00010743b858();
          func_0x00010743344c(param_7 + 0xb,&uStack_930);
          func_0x000107433474(param_7 + 0x18,auStack_8c8);
          func_0x0001074334a8(param_7 + 0x2b,auStack_830);
          func_0x0001074334a8(param_7 + 0x36,auStack_7d8);
          func_0x000107433474(param_7 + 0x41,auStack_780);
          func_0x0001074334d0(param_7 + 0x54,auStack_6e8);
          func_0x000107433c98(&uStack_930);
          plVar16 = plStack_1178;
          plStack_e80 = plStack_1178;
          auStack_e70[0] = uStack_1188;
          lStack_e78 = lStack_1190;
          FUN_1074384fc(auStack_2a0,param_7 + 0xb,&plStack_e80,plStack_1178[2]);
          uVar34 = uStack_1170;
          FUN_107433380(&plStack_338);
          uStack_1b0 = plVar16;
          func_0x000104c318bc(&uStack_1a8,&plStack_338);
          FUN_107438b40(&plStack_e80,param_7 + 0x18,&uStack_1b0,plVar16[2]);
          func_0x000104c2f714(&uStack_1a8);
          func_0x00010743c350();
          uStack_1b0 = plVar16;
          uStack_1a8._0_4_ = 0x3f800000;
          FUN_107438e4c(auStack_118,param_7 + 0x2b,&uStack_1b0,plVar16[2]);
          uStack_1b0 = plVar16;
          uStack_1a8 = (long *)((ulong)uStack_1a8._4_4_ << 0x20);
          FUN_107438e4c(auStack_f30,param_7 + 0x36,&uStack_1b0,plVar16[2]);
          FUN_1074333ec(&plStack_3b0);
          plStack_338 = plVar16;
          func_0x000104c318bc(auStack_330,&plStack_3b0);
          FUN_107438b40(&uStack_1b0,param_7 + 0x41,&plStack_338,plVar16[2]);
          func_0x000104c2f714(auStack_330);
          func_0x000104c2f714(&plStack_3b0);
          plStack_3b0 = plVar16;
          uStack_3a8 = 0;
          uStack_3a0 = 0;
          FUN_107438ffc(&plStack_338,param_7 + 0x54,&plStack_3b0,plVar16[2]);
          FUN_107433134(&uStack_930,auStack_2a0);
          unaff_x24 = &uStack_930;
          FUN_1073ddccc(auStack_8e0,&lStack_e78);
          FUN_1073dd9b0(auStack_870,auStack_118);
          FUN_1073dd9b0(auStack_838,auStack_f30);
          FUN_1073ddccc(auStack_7f8,&uStack_1a8);
          FUN_1074331ac(auStack_788,&plStack_338);
          FUN_107433214(&plStack_338);
          unaff_x26 = &uStack_930;
          FUN_1073dd470(&uStack_1a8);
          FUN_1073dd4c4(auStack_f30);
          func_0x00010743bd00();
          FUN_1073dd4c4();
          func_0x00010743c2fc();
          FUN_1073debc4(auStack_2a0);
          FUN_107433ce0(param_7 + 0x60,&uStack_930);
          FUN_1073de0e0(param_7 + 0x6a,auStack_8e0);
          FUN_1073ddf7c(param_7 + 0x78,auStack_870);
          FUN_1073ddf7c(param_7 + 0x7f,auStack_838);
          FUN_1073de0e0(param_7 + 0x87,auStack_7f8);
          bVar8 = (int)param_7[0x9c] == -1;
          in_ZR = bVar8 && uStack_750 == 0xffffffff;
          in_NG = bVar8 && (int)(uStack_750 + 1) < 0;
          if (!bVar8 || uStack_750 != 0xffffffff) {
            in_NG = (int)(uStack_750 + 1) < 0;
            in_ZR = uStack_750 == 0xffffffff;
            if ((bool)in_ZR) {
              func_0x00010743c2bc();
            }
            else {
              plStack_e80 = param_7 + 0x95;
              (*(code *)(&PTR_DAT_1109af560)[uStack_750])(&plStack_e80,param_7 + 0x95,auStack_788);
            }
          }
          func_0x000107433ec8(&uStack_930);
          plStack_e80 = (long *)((ulong)plStack_e80 & 0xffffffffffffff00);
          uStack_e48 = 0;
          uStack_e40 = 0;
          if ((int)param_7[0x68] == 0) {
            uVar31 = (undefined4)param_7[0x60];
            uVar38 = *(undefined4 *)((long)param_7 + 0x304);
            fVar39 = *(float *)(param_7 + 0x61);
            uVar36 = *(undefined4 *)((long)param_7 + 0x30c);
          }
          else {
            param_2 = 0x3f800000;
            param_3 = 1.0;
            uVar36 = 0x3f800000;
            uVar31 = FUN_1074388a0(param_7 + 0x60,uVar34,&plStack_e80);
            uVar38 = param_2;
            fVar39 = param_3;
          }
          FUN_107433380(&uStack_1b0);
          func_0x00010743c2c4(auStack_2a0);
          uStack_1158 = uVar36;
          func_0x000104c2f714(&uStack_1b0);
          uStack_1b0._0_4_ = 0x3f800000;
          uVar36 = func_0x00010743c2b0();
          uStack_1b0 = (long *)((ulong)uStack_1b0._4_4_ << 0x20);
          uVar32 = func_0x00010743c2b0();
          FUN_1074333ec(&uStack_1b0);
          func_0x00010743c2c4(&plStack_338);
          func_0x000104c2f714(&uStack_1b0);
          if ((int)param_7[0x9c] == 0) {
            uVar33 = (undefined4)param_7[0x95];
            uVar40 = *(undefined4 *)((long)param_7 + 0x4ac);
            fVar37 = *(float *)(param_7 + 0x96);
          }
          else {
            func_0x00010743bfac();
            func_0x00010743bdd4();
            uVar33 = FUN_10743933c();
            uVar40 = param_2;
            fVar37 = param_3;
          }
          uStack_930 = (long *)CONCAT44(uVar38,uVar31);
          uStack_928 = (long *)CONCAT44(uStack_1158,fVar39);
          func_0x000104c318bc(&uStack_920,auStack_2a0);
          uStack_8e8 = uVar36;
          uStack_8e4 = uVar32;
          func_0x000104c318bc(auStack_8e0,&plStack_338);
          uStack_8a8 = uVar33;
          uStack_8a4 = uVar40;
          fStack_8a0 = fVar37;
          func_0x00010743c350();
          func_0x000104c2f714(auStack_2a0);
          param_7[0x9e] = (long)uStack_928;
          param_7[0x9d] = (long)uStack_930;
          func_0x000104c2f1f0(param_7 + 0x9f,&uStack_920);
          param_7[0xa6] = CONCAT44(uStack_8e4,uStack_8e8);
          func_0x000104c2f1f0(param_7 + 0xa7,auStack_8e0);
          param_7[0xae] = CONCAT44(uStack_8a4,uStack_8a8);
          *(float *)(param_7 + 0xaf) = fStack_8a0;
          func_0x000107433f14(&uStack_930);
          func_0x00010724b3d8(&plStack_e80);
          unaff_x20 = (long *)0x1;
        }
        unaff_x25 = (long *)0x10404;
        plVar16 = (long *)param_7[0xb0];
        lVar26 = param_7[0x9d];
        plVar16[1] = param_7[0x9e];
        *plVar16 = lVar26;
        FUN_10742fc1c(param_7 + 0x9f,plVar28 + 2,param_7[0xb0] + 0x10,plVar25[0x3f],alStack_1120);
        lVar26 = param_7[0xb0];
        *(undefined1 *)(lVar26 + 0x9c) = 0;
        *(undefined4 *)(lVar26 + 0x98) = 0x10404;
        lVar26 = param_7[0xb0];
        *(int *)(lVar26 + 0xa4) = (int)param_7[0xa6];
        *(undefined4 *)(lVar26 + 0xa0) = *(undefined4 *)((long)param_7 + 0x534);
        plVar16 = (long *)plVar25[0x3f];
        param_6 = (long *)(lVar26 + 0xa8);
        param_8 = alStack_1120;
        FUN_10742fc1c(param_7 + 0xa7,plVar28 + 2);
        lVar26 = param_7[0xb0];
        *(undefined1 *)(lVar26 + 0x134) = 0;
        *(undefined4 *)(lVar26 + 0x130) = 0x10404;
        lVar26 = param_7[0xb0];
        lVar17 = param_7[0xae];
        *(int *)(lVar26 + 0x140) = (int)param_7[0xaf];
        *(long *)(lVar26 + 0x138) = lVar17;
        if ((uStack_1154 != 0) && (((int)unaff_x20 != 0 || (*(long *)(param_7[0xb0] + 0x278) == 0)))
           ) {
          FUN_10742c404(param_7[0xb0],uStack_1198);
        }
      }
    }
    goto LAB_10742e9c4;
  }
  if ((uStack_1154 & 1) != 0) {
    if (plStack_1128[0x48] == 0) {
      func_0x00010743c440();
      func_0x00010743c32c();
      plStack_e80 = (long *)0x30;
      func_0x00010743c2a4();
      unaff_x20 = plVar24 + 0x48;
      func_0x00010743c214();
      func_0x00010730b284(&uStack_930);
      lVar26 = lStack_e78;
      lStack_e78 = 0;
      if (lVar26 != 0) {
        func_0x00010743b2a4();
      }
      FUN_10742c194(&uStack_930);
      func_0x00010743b9b8();
      (*extraout_x8_06)();
      func_0x00010743c29c();
    }
    if (plVar24[0x4a] == 0) {
      func_0x00010743c440();
      func_0x00010743c32c();
      plStack_e80 = (long *)0x30;
      func_0x00010743c2a4();
      unaff_x20 = plVar24 + 0x4a;
      func_0x00010743c214();
      func_0x00010730b284(&uStack_930);
      lVar26 = lStack_e78;
      lStack_e78 = 0;
      if (lVar26 != 0) {
        func_0x00010743b2a4();
      }
      FUN_10742c200(&uStack_930);
      func_0x00010743b9b8();
      (*extraout_x8_07)();
      func_0x00010743c29c();
    }
  }
  if (alStack_1120[3] != 0) {
    param_6 = alStack_1120;
    plVar16 = (long *)0x0;
    param_8 = (long *)0x0;
    FUN_10742d75c(plVar24,plVar24[0x3f],param_6,0,0);
  }
  plVar24 = alStack_1120;
  func_0x00010726ea70();
  func_0x00010743b264(uStack_b0);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1073ebb78(&plStack_e80);
  func_0x00010726ea70(alStack_1120);
  func_0x00010743b660();
  pcStack_11a8 = FUN_10742fc1c;
  plVar30 = param_6;
  plStack_1200 = unaff_x28;
  puStack_11f8 = &uStack_b08;
  plStack_11f0 = unaff_x26;
  plStack_11e8 = unaff_x25;
  puStack_11e0 = unaff_x24;
  lStack_11d8 = (long)plVar28;
  plStack_11d0 = plVar25;
  plStack_11c8 = param_7;
  plStack_11c0 = unaff_x20;
  plStack_11b8 = plVar24;
  puStack_11b0 = &stack0xfffffffffffffff0;
  func_0x00010743bf90();
  func_0x00010743b2e8();
  uVar7 = (int)(*(byte *)(plVar30 + 0x10) - 1) < 0;
  uVar9 = *(byte *)(plVar30 + 0x10) == 1;
  uStack_1208 = extraout_x8_08;
  if ((bool)uVar9) {
    plVar25 = param_6 + 9;
    func_0x000107262f24(plVar25,param_7);
    if ((int)plVar25 != 0) goto LAB_10742fc70;
LAB_1074300e4:
    func_0x00010743b264(uStack_1208);
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_10742fc70:
    plVar25 = param_7;
    func_0x000104c2d614();
    if ((int)plVar25 != 0) {
      func_0x000107265974(param_6 + 9);
      plStack_1280 = (long *)0x0;
      plStack_1278 = (long *)0x0;
      func_0x000107433f40(param_6,&plStack_1280);
      func_0x0001073bca64(&plStack_1280);
      goto LAB_1074300e4;
    }
    func_0x0001072e89a4(param_8,param_7);
    func_0x00010725ffdc(param_6 + 9,param_7);
    plVar25 = plVar16 + 5;
    func_0x00010726364c(plVar25,param_7);
    plVar24 = (long *)plVar16[3];
    plVar28 = plVar25;
    if (plVar24 != (long *)0x0) {
      uVar13 = (long)plVar24 - 1;
      if (((ulong)plVar24 & uVar13) == 0) {
        unaff_x25 = (long *)(uVar13 & (ulong)plVar25);
        uVar7 = false;
      }
      else {
        uVar7 = (long)plVar25 - (long)plVar24 < 0;
        unaff_x25 = plVar25;
        if (plVar24 <= plVar25) {
          uVar15 = 0;
          if (plVar24 != (long *)0x0) {
            uVar15 = (ulong)plVar25 / (ulong)plVar24;
          }
          unaff_x25 = (long *)((long)plVar25 - uVar15 * (long)plVar24);
        }
      }
      plVar30 = *(long **)(plVar16[2] + (long)unaff_x25 * 8);
      if (plVar30 != (long *)0x0) {
        do {
          while( true ) {
            plVar30 = (long *)*plVar30;
            if (plVar30 == (long *)0x0) goto LAB_10742fd58;
            plVar14 = (long *)plVar30[1];
            uVar7 = (long)plVar14 - (long)plVar25 < 0;
            if (plVar14 != plVar25) break;
            plVar28 = plVar30 + 2;
            func_0x000104c32db4(plVar28,param_7);
            if (((ulong)plVar28 & 1) != 0) goto LAB_10742ffb0;
          }
          if (((ulong)plVar24 & uVar13) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar13);
          }
          else if (plVar24 <= plVar14) {
            uVar15 = 0;
            if (plVar24 != (long *)0x0) {
              uVar15 = (ulong)plVar14 / (ulong)plVar24;
            }
            plVar14 = (long *)((long)plVar14 - uVar15 * (long)plVar24);
          }
          uVar7 = (long)plVar14 - (long)unaff_x25 < 0;
        } while (plVar14 == unaff_x25);
      }
    }
LAB_10742fd58:
    plVar30 = plVar16 + 4;
    func_0x00010743ba58();
    uStack_1270 = 1;
    plVar14 = plVar28 + 2;
    *plVar28 = 0;
    plVar28[1] = (long)plVar25;
    plStack_1280 = plVar28;
    plStack_1278 = plVar30;
    func_0x000104c2fe00(plVar14,param_7);
    plVar28[9] = 0;
    plVar28[10] = 0;
    plVar28[0xb] = 0;
    uVar34 = func_0x00010743baa8(plVar16[5]);
    if ((plVar24 == (long *)0x0) ||
       (func_0x00010743ba9c(uVar34,(int)plVar16[6],(float)plVar24), (bool)uVar7)) {
      bVar6 = (long *)0x2 < plVar24;
      bVar8 = plVar24 == (long *)0x3;
      func_0x00010743b2c0((long)plVar24 << 1);
      plVar21 = extraout_x8_09;
      if (!bVar6 || bVar8) {
        plVar21 = extraout_x9_06;
      }
      if ((long)plVar21 - 1U == 0) {
        plVar21 = (long *)0x2;
      }
      else if (((ulong)plVar21 & (long)plVar21 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar14 = plVar21;
      }
      plVar24 = (long *)plVar16[3];
      if (plVar24 < plVar21) {
LAB_10742fdf4:
        if ((ulong)plVar21 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_107430128;
        }
        lVar26 = (long)plVar21 << 3;
        __Znwm(lVar26);
        FUN_107433f7c(plVar16 + 2,lVar26);
        plVar24 = (long *)0x0;
        plVar16[3] = (long)plVar21;
        while (bVar8 = plVar24 <= plVar21, plVar21 != plVar24) {
          func_0x00010743baf0();
          plVar24 = extraout_x9_07;
        }
        plVar24 = plVar21;
        if (*plVar30 != 0) {
          func_0x00010743c504();
          plVar14 = extraout_x11_03;
          if (bVar8) {
            plVar14 = (long *)((long)extraout_x11_03 - extraout_x12_01 * (long)plVar21);
          }
          if (((ulong)plVar21 & extraout_x9_08) == 0) {
            plVar14 = (long *)((ulong)extraout_x11_03 & extraout_x9_08);
          }
          *(long **)(extraout_x8_10 + (long)plVar14 * 8) = plVar30;
          lVar26 = extraout_x8_10;
          uVar13 = extraout_x9_08;
          plVar19 = extraout_x10_01;
          while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
            plVar22 = (long *)plVar19[1];
            if (((ulong)plVar21 & uVar13) == 0) {
              plVar22 = (long *)((ulong)plVar22 & uVar13);
            }
            else if (plVar21 <= plVar22) {
              uVar15 = 0;
              if (plVar21 != (long *)0x0) {
                uVar15 = (ulong)plVar22 / (ulong)plVar21;
              }
              plVar22 = (long *)((long)plVar22 - uVar15 * (long)plVar21);
            }
            if (plVar22 != plVar14) {
              if (*(long *)(lVar26 + (long)plVar22 * 8) == 0) {
                func_0x00010743bc98();
                lVar26 = extraout_x8_12;
                uVar13 = extraout_x9_10;
                plVar19 = extraout_x12_02;
                plVar14 = extraout_x11_05;
              }
              else {
                func_0x00010743b22c();
                lVar26 = extraout_x8_11;
                uVar13 = extraout_x9_09;
                plVar19 = extraout_x10_02;
                plVar14 = extraout_x11_04;
              }
            }
          }
        }
      }
      else if (plVar21 < plVar24) {
        func_0x00010743bafc((float)(ulong)plVar16[5],(int)plVar16[6]);
        if ((plVar24 < (long *)0x3) || (((ulong)plVar24 & (long)plVar24 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010743b20c();
        }
        if (plVar21 <= plVar14) {
          plVar21 = plVar14;
        }
        if (plVar21 < plVar24) {
          if (plVar21 != (long *)0x0) goto LAB_10742fdf4;
          FUN_107433f7c(plVar16 + 2,0);
          plVar16[3] = 0;
          plVar24 = (long *)0x0;
        }
        else {
          plVar24 = (long *)plVar16[3];
        }
      }
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        unaff_x25 = (long *)((long)plVar24 - 1U & (ulong)plVar25);
      }
      else {
        unaff_x25 = plVar25;
        if (plVar24 <= plVar25) {
          uVar13 = 0;
          if (plVar24 != (long *)0x0) {
            uVar13 = (ulong)plVar25 / (ulong)plVar24;
          }
          unaff_x25 = (long *)((long)plVar25 - uVar13 * (long)plVar24);
        }
      }
    }
    lVar26 = plVar16[2];
    plVar25 = *(long **)(lVar26 + (long)unaff_x25 * 8);
    if (plVar25 == (long *)0x0) {
      *plVar28 = *plVar30;
      *plVar30 = (long)plVar28;
      *(long **)(lVar26 + (long)unaff_x25 * 8) = plVar30;
      if (*plVar28 != 0) {
        plVar25 = *(long **)(*plVar28 + 8);
        if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
          plVar25 = (long *)((ulong)plVar25 & (long)plVar24 - 1U);
        }
        else if (plVar24 <= plVar25) {
          uVar13 = 0;
          if (plVar24 != (long *)0x0) {
            uVar13 = (ulong)plVar25 / (ulong)plVar24;
          }
          plVar25 = (long *)((long)plVar25 - uVar13 * (long)plVar24);
        }
        *(long **)(lVar26 + (long)plVar25 * 8) = plVar28;
      }
    }
    else {
      *plVar28 = *plVar25;
      *plVar25 = (long)plVar28;
    }
    plStack_1280 = (long *)0x0;
    plVar16[5] = plVar16[5] + 1;
    FUN_107433f94(&plStack_1280);
    plVar30 = plVar28;
LAB_10742ffb0:
    func_0x00010743ba50(&plStack_1280);
    func_0x000104c2fe00(auStack_1248,param_7);
    uVar13 = plVar30[10];
    uVar15 = plVar30[0xb];
    uVar9 = uVar13 == uVar15;
    plStack_1210 = param_6;
    if (uVar13 < uVar15) {
      FUN_107434054(uVar13,&plStack_1280);
      lVar26 = uVar13 + 0x78;
LAB_1074300d8:
      plVar30[10] = lVar26;
      func_0x000107432b30(&plStack_1280);
      goto LAB_1074300e4;
    }
    lVar26 = uVar13 - plVar30[9];
    uVar13 = lVar26 / 0x78 + 1;
    if (uVar13 < 0x222222222222223) {
      uVar18 = (long)(uVar15 - plVar30[9]) / 0x78;
      uVar15 = uVar18 * 2;
      if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
        uVar15 = uVar13;
      }
      if (0x111111111111110 < uVar18) {
        uVar15 = 0x222222222222222;
      }
      if (uVar15 == 0) {
        lVar17 = 0;
      }
      else {
        if (0x222222222222222 < uVar15) {
          func_0x000104bd35f4();
          goto LAB_107430128;
        }
        lVar17 = uVar15 * 0x78;
        __Znwm();
      }
      lVar26 = lVar17 + lVar26;
      FUN_107434054(lVar26,&plStack_1280);
      lVar27 = plVar30[9];
      lVar2 = plVar30[10];
      lVar29 = lVar26 + ((lVar2 - lVar27) / -0x78) * 0x78;
      lVar11 = lVar29;
      for (lVar12 = lVar27; lVar12 != lVar2; lVar12 = lVar12 + 0x78) {
        FUN_107434054(lVar11,lVar12);
        lVar11 = lVar11 + 0x78;
      }
      for (; uVar9 = lVar27 == lVar2, !(bool)uVar9; lVar27 = lVar27 + 0x78) {
        func_0x000107432b30(lVar27);
      }
      lVar26 = lVar26 + 0x78;
      lVar12 = plVar30[9];
      plVar30[9] = lVar29;
      plVar30[10] = lVar26;
      plVar30[0xb] = lVar17 + uVar15 * 0x78;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      goto LAB_1074300d8;
    }
  }
  FUN_107434088();
LAB_107430128:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10743012c);
  (*pcVar5)();
}



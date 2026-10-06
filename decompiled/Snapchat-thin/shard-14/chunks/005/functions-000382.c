/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4e2628; end: 10b4e262b;  */

void FUN_10b4e2628(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4e46b8();
  func_0x00010b4e4488(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x00010b4e4670();
  }
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x29) = 1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e45c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e262c; end: 10b4e2703;  */

void FUN_10b4e262c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4e46b8();
  func_0x00010b4e4488(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x00010b4e4670();
  }
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x29) = 1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e45c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e2704; end: 10b4e2773;  */

void FUN_10b4e2704(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*(char *)(param_2 + 0x1e) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e2774; end: 10b4e2797;  */

undefined8 FUN_10b4e2774(undefined8 param_1)

{
  func_0x00010b4e44ac();
  return param_1;
}



/* Entry: 10b4e2798; end: 10b4e279b;  */

undefined8 FUN_10b4e2798(undefined8 param_1)

{
  func_0x00010b4e44ac();
  return param_1;
}



/* Entry: 10b4e279c; end: 10b4e27af;  */

void FUN_10b4e279c(void)

{
  FUN_10b4e2774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e27b0; end: 10b4e27d3;  */

undefined ** FUN_10b4e27b0(void)

{
  return &PTR_DAT_110cf2338;
}



/* Entry: 10b4e27d4; end: 10b4e28fb;  */

long * FUN_10b4e27d4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b4e4500();
  plVar3 = param_1;
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    func_0x00010b4e43e4();
    plVar3 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b4e43d8();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    func_0x00010b4e43e4();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    plVar4 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar3);
    param_4 = (long *)((long)plVar4 + 4);
    *(undefined4 *)plVar4 = uVar1;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b4e43e4();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
    plVar3 = (long *)0x1d;
    func_0x000107c280a8(0x1d,plVar4);
    param_4 = (long *)((long)plVar3 + 4);
    *(undefined4 *)plVar3 = uVar1;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b4e43e4();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
    plVar4 = (long *)0x25;
    func_0x000107c280a8(0x25,plVar3);
    param_4 = (long *)((long)plVar4 + 4);
    *(undefined4 *)plVar4 = uVar1;
  }
  plVar3 = plVar4;
  if (*(char *)(unaff_x20 + 0x1d) == '\x01') {
    func_0x00010b4e43e4();
    plVar3 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar4);
    func_0x00010b4e43d8();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x1e) == '\x01') {
    func_0x00010b4e43e4();
    func_0x00010b4e4640();
    func_0x00010b4e43d8();
    param_4 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e44bc();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar2 = iVar6 - iVar7;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4e28fc; end: 10b4e296b;  */

long FUN_10b4e28fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x1c) * 2 + (ulong)*(byte *)(param_1 + 0x1d) * 2 +
          (ulong)*(byte *)(param_1 + 0x1e) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b4e296c; end: 10b4e29fb;  */

void FUN_10b4e296c(void)

{
  FUN_10b4e3af0();
  FUN_10b4e438c();
  return;
}



/* Entry: 10b4e29fc; end: 10b4e2a0b;  */

void FUN_10b4e29fc(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b4e2a0c; end: 10b4e2a8f;  */

long FUN_10b4e2a0c(long param_1)

{
  func_0x00010b4e44ac();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b4e2190();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b4e2774();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b588020();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b588020();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4e2a90; end: 10b4e2a93;  */

long FUN_10b4e2a90(long param_1)

{
  func_0x00010b4e44ac();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b4e2190();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b4e2774();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b588020();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b588020();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4e2a94; end: 10b4e2aa7;  */

void FUN_10b4e2a94(void)

{
  FUN_10b4e2a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e2aa8; end: 10b4e2ab3;  */

undefined ** FUN_10b4e2aa8(void)

{
  return &PTR_DAT_110cf2378;
}



/* Entry: 10b4e2ab4; end: 10b4e2b53;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e2ab4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4e21d8(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4e27bc(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b58809c(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b58809c(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b4e2b54; end: 10b4e2d2f;  */

long * FUN_10b4e2b54(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  lVar2 = param_1[0xb];
  plVar3 = param_3;
  if (lVar2 != 0) {
    param_2 = param_1;
    func_0x00010b4e4664();
  }
  func_0x00010b4e44a0(param_1[3]);
  if (lVar2 < 0) {
    lVar2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e2ba8;
  }
  else if ((int)lVar2 != 0) {
LAB_10b4e2ba8:
    func_0x00010b4e4450();
    lVar2 = 2;
    param_2 = param_3;
    func_0x00010b4e4428();
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    lVar2 = param_1[7];
    plVar3 = (long *)(ulong)*(uint *)(lVar2 + 0x28);
    param_2 = (long *)0x3;
    func_0x00010b4e443c();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    lVar2 = param_1[8];
    plVar3 = (long *)(ulong)*(uint *)(lVar2 + 0x20);
    param_2 = (long *)0x4;
    func_0x00010b4e443c();
  }
  func_0x00010b4e44a0(param_1[4]);
  if (lVar2 < 0) {
    lVar2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e2c24;
  }
  else if ((int)lVar2 != 0) {
LAB_10b4e2c24:
    func_0x00010b4e4450();
    lVar2 = 5;
    param_2 = param_3;
    func_0x00010b4e4428();
  }
  func_0x00010b4e44a0(param_1[5]);
  if (lVar2 < 0) {
    lVar2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e2c64;
  }
  else if ((int)lVar2 != 0) {
LAB_10b4e2c64:
    func_0x00010b4e4450();
    lVar2 = 6;
    param_2 = param_3;
    func_0x00010b4e4428();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    lVar2 = param_1[9];
    plVar3 = (long *)(ulong)*(uint *)(lVar2 + 0x30);
    param_2 = (long *)0x7;
    func_0x00010b4e443c();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    lVar2 = param_1[10];
    plVar3 = (long *)(ulong)*(uint *)(lVar2 + 0x30);
    param_2 = (long *)0x8;
    func_0x00010b4e443c();
  }
  func_0x00010b4e44a0(param_1[6]);
  if (lVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4e2cf8;
  }
  else if ((int)lVar2 == 0) goto LAB_10b4e2cf8;
  func_0x00010b4e4450();
  param_2 = param_3;
  func_0x00010b4e4428(param_3,9);
LAB_10b4e2cf8:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b4e44bc();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar3) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar2,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar3);
}



/* Entry: 10b4e2d30; end: 10b4e2e57;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b4e2d30(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar3;
  long extraout_x9;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar3 + 1;
  }
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e4444();
  }
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e4444();
  }
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e4444();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4e2984(*(undefined8 *)(param_1 + 0x38));
      func_0x00010b4e4444();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4e29b4(*(undefined8 *)(param_1 + 0x40));
      func_0x00010b4e4444();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b4e29cc(*(undefined8 *)(param_1 + 0x48));
      func_0x00010b4e4444();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b4e29cc(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b4e4444();
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010b4e45e4();
    lVar4 = extraout_x8_03 + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4e4548();
    lVar3 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b4e2e58; end: 10b4e2ff7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e2e58(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4e44f0();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x38);
      if (lVar3 == 0) {
        func_0x00010b4e4628();
        *(long *)(unaff_x21 + 0x38) = lVar3;
      }
      else {
        FUN_10b4e215c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x40);
      if (lVar3 == 0) {
        func_0x00010b4e4620();
        *(long *)(unaff_x21 + 0x40) = lVar3;
      }
      else {
        FUN_10b4e2704();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x48);
      if (lVar3 == 0) {
        func_0x00010b4e45bc();
        *(long *)(unaff_x21 + 0x48) = lVar3;
      }
      else {
        FUN_10b5882b8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x50);
      if (lVar3 == 0) {
        func_0x00010b4e45bc();
        *(long *)(unaff_x21 + 0x50) = lVar3;
      }
      else {
        FUN_10b5882b8();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  func_0x00010b4e44d4();
  if ((extraout_x8_03 & 1) != 0) {
    func_0x00010b4e44c8();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e2ff8; end: 10b4e30f3;  */

void FUN_10b4e2ff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  
  func_0x00010b4e46a4();
  *unaff_x19 = &PTR_FUN_110cf2238;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4e4410();
  }
  func_0x00010b4e451c();
  unaff_x19[6] = 0;
  unaff_x19[7] = 0;
  unaff_x19[8] = unaff_x21;
  FUN_10b4e3704(unaff_x19 + 6,unaff_x20 + 0x30);
  lVar2 = unaff_x20 + 0x48;
  func_0x00010b4e44e8();
  unaff_x19[9] = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_10b4e41f0();
  }
  unaff_x19[10] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4e4614();
  }
  unaff_x19[0xb] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_10b4e4280();
  }
  unaff_x19[0xc] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000108c6f470();
  }
  unaff_x19[0xd] = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x80);
  unaff_x19[0xf] = uVar4;
  unaff_x19[0xe] = uVar3;
  return;
}



/* Entry: 10b4e30f4; end: 10b4e311f;  */

undefined8 FUN_10b4e30f4(undefined8 param_1)

{
  func_0x00010b4e44ac();
  FUN_10b4e3120(param_1);
  return param_1;
}



/* Entry: 10b4e3120; end: 10b4e3187;  */

long FUN_10b4e3120(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b4e22f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b4e2190();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b4e2774();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  FUN_10b4e3e5c(param_1 + 0x30);
  FUN_10b4e3e2c(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b4e3188; end: 10b4e318b;  */

undefined8 FUN_10b4e3188(undefined8 param_1)

{
  func_0x00010b4e44ac();
  FUN_10b4e3120(param_1);
  return param_1;
}



/* Entry: 10b4e318c; end: 10b4e319f;  */

void FUN_10b4e318c(void)

{
  FUN_10b4e30f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e31a0; end: 10b4e31ab;  */

undefined ** FUN_10b4e31a0(void)

{
  return &PTR_DAT_110cf23b0;
}



/* Entry: 10b4e31ac; end: 10b4e324b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e31ac(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b4e4678();
  if (0 < *(int *)(unaff_x19 + 0x38)) {
    func_0x0001053936e4(unaff_x19 + 0x30);
  }
  func_0x000107c3025c(unaff_x19 + 0x48);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4e2374(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4e21d8(*(undefined8 *)(unaff_x19 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b4e27bc(*(undefined8 *)(unaff_x19 + 0x60));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(unaff_x19 + 0x68));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined4 *)(unaff_x19 + 0x80) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b4e324c; end: 10b4e3443;  */

long * FUN_10b4e324c(long *param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar8;
  long unaff_x22;
  undefined8 uVar9;
  int iVar10;
  
  func_0x00010b4e45d4();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x34);
    param_1 = (long *)0x1;
    func_0x00010b4e43b4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x28);
    param_1 = (long *)0x2;
    func_0x00010b4e43b4();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x20);
    param_1 = (long *)0x3;
    func_0x00010b4e43b4();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    func_0x00010b4e43c0();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b4e4468();
    unaff_x21 = plVar3;
  }
  plVar5 = *(long **)(unaff_x20 + 0x70);
  if (plVar5 != (long *)0x0) {
    plVar3 = unaff_x19;
    func_0x000107c282c4();
    param_3 = unaff_x21;
    unaff_x21 = plVar3;
  }
  func_0x00010b4e44a0(*(undefined8 *)(unaff_x20 + 0x48));
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4e333c;
  }
  else if ((int)plVar5 == 0) goto LAB_10b4e333c;
  func_0x00010b4e4450();
  plVar5 = (long *)0x6;
  plVar3 = unaff_x19;
  func_0x00010b4e43cc();
  unaff_x21 = plVar3;
LAB_10b4e333c:
  iVar10 = *(int *)(unaff_x20 + 0x20);
  for (iVar8 = 0; iVar10 != iVar8; iVar8 = iVar8 + 1) {
    uVar7 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + (long)iVar8 * 8 + 7);
    }
    plVar5 = (long *)*puVar1;
    param_3 = (long *)(ulong)*(uint *)(plVar5 + 6);
    plVar3 = (long *)0x7;
    func_0x00010b4e43b4();
    unaff_x21 = plVar3;
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x00010b4e43c0();
    uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
    puVar4 = (undefined8 *)0x41;
    func_0x000107c280a8();
    unaff_x21 = puVar4 + 1;
    *puVar4 = uVar9;
    plVar5 = plVar3;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    plVar5 = *(long **)(unaff_x20 + 0x68);
    param_3 = (long *)(ulong)*(uint *)(plVar5 + 4);
    unaff_x21 = (long *)0x9;
    func_0x00010b4e43b4();
  }
  iVar10 = *(int *)(unaff_x20 + 0x38);
  for (iVar8 = 0; iVar10 != iVar8; iVar8 = iVar8 + 1) {
    func_0x00010b4e45a0();
    param_3 = (long *)(ulong)*(uint *)(plVar5 + 4);
    unaff_x21 = (long *)0xf;
    func_0x00010b4e43b4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e44bc();
    if ((long)param_3 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
      while( true ) {
        iVar10 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
        iVar8 = (int)param_3;
        uVar2 = iVar8 - iVar10;
        param_3 = (long *)(ulong)uVar2;
        if (uVar2 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        unaff_x21 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x21 + (long)iVar8);
    }
    _memcpy(unaff_x21,lVar6,(ulong)param_3 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10b4e3444; end: 10b4e35a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e3444(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  long extraout_x9;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar5 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  uVar4 = param_1;
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_10b4e296c();
    lVar5 = uVar4 + lVar5;
    puVar1 = puVar1 + 1;
  }
  lVar5 = lVar5 + *(int *)(param_1 + 0x38);
  iVar3 = (int)lVar5;
  func_0x00010b4e4690();
  for (lVar6 = 0; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    func_0x00010b4e29e4();
    lVar5 = uVar4 + lVar5;
    iVar3 = (int)lVar5;
    puVar1 = puVar1 + 1;
  }
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x48));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e4444();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xf) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010b4e299c(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b4e4444();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00010b4e2984(*(undefined8 *)(param_1 + 0x58));
      func_0x00010b4e4444();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x00010b4e29b4(*(undefined8 *)(param_1 + 0x60));
      func_0x00010b4e4444();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x000108c6cd50(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b4e4444();
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x70)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    iVar3 = iVar3 + 9;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4e4548();
    lVar5 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar5 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b4e35a8; end: 10b4e35ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e35a8(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b4e44f0();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x00010b4e4648();
  lVar3 = unaff_x20 + 0x30;
  FUN_10b4e3704(unaff_x21 + 0x30);
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        uVar2 = uVar5;
        FUN_10b4e41f0();
        *(ulong *)(unaff_x21 + 0x50) = uVar2;
      }
      else {
        FUN_10b4e262c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x58);
      if (lVar3 == 0) {
        func_0x00010b4e4628();
        *(long *)(unaff_x21 + 0x58) = lVar3;
      }
      else {
        FUN_10b4e215c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x60);
      if (lVar3 == 0) {
        func_0x00010b4e4620();
        *(long *)(unaff_x21 + 0x60) = lVar3;
      }
      else {
        FUN_10b4e2704();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x68) == 0) {
        func_0x000108c6f470();
        *(ulong *)(unaff_x21 + 0x68) = uVar5;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  func_0x00010b4e44d4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b4e44c8();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e35ac; end: 10b4e3703;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e35ac(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b4e44f0();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x00010b4e4648();
  lVar3 = unaff_x20 + 0x30;
  FUN_10b4e3704(unaff_x21 + 0x30);
  func_0x00010b4e4488(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        uVar2 = uVar5;
        FUN_10b4e41f0();
        *(ulong *)(unaff_x21 + 0x50) = uVar2;
      }
      else {
        FUN_10b4e262c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x58);
      if (lVar3 == 0) {
        func_0x00010b4e4628();
        *(long *)(unaff_x21 + 0x58) = lVar3;
      }
      else {
        FUN_10b4e215c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x60);
      if (lVar3 == 0) {
        func_0x00010b4e4620();
        *(long *)(unaff_x21 + 0x60) = lVar3;
      }
      else {
        FUN_10b4e2704();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x68) == 0) {
        func_0x000108c6f470();
        *(ulong *)(unaff_x21 + 0x68) = uVar5;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  func_0x00010b4e44d4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b4e44c8();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e3704; end: 10b4e3713;  */

void FUN_10b4e3704(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b4e3714; end: 10b4e3763;  */

void FUN_10b4e3714(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x00010b4e46b8();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110cf2008;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010b4e4410();
  }
  param_3 = param_3 + 0x10;
  func_0x00010b4e4540();
  unaff_x19[2] = param_3;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  return;
}



/* Entry: 10b4e3764; end: 10b4e378f;  */

long FUN_10b4e3764(long param_1)

{
  func_0x00010b4e44ac();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4e3790; end: 10b4e3793;  */

long FUN_10b4e3790(long param_1)

{
  func_0x00010b4e44ac();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4e3794; end: 10b4e37a7;  */

void FUN_10b4e3794(void)

{
  FUN_10b4e3764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e37a8; end: 10b4e37b3;  */

undefined ** FUN_10b4e37a8(void)

{
  return &PTR_DAT_110cf23f0;
}



/* Entry: 10b4e37b4; end: 10b4e37df;  */

void FUN_10b4e37b4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4e4510();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4e37e0; end: 10b4e3877;  */

long * FUN_10b4e37e0(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010b4e4684();
  func_0x00010b4e44a0(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b4e3840;
  }
  else if ((int)param_2 == 0) goto LAB_10b4e3840;
  func_0x00010b4e4450();
  unaff_x19 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar3 = unaff_x22;
LAB_10b4e3840:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00010b4e44bc();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x19 + (long)iVar4;
      unaff_x19 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar2);
  }
  _memcpy(unaff_x19,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar3);
}



/* Entry: 10b4e3878; end: 10b4e38d7;  */

void FUN_10b4e3878(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4e4548();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b4e38d8; end: 10b4e38db;  */

void FUN_10b4e38d8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4e46b8();
  func_0x00010b4e4488(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x00010b4e4670();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e45c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e38dc; end: 10b4e397f;  */

void FUN_10b4e38dc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4e46b8();
  func_0x00010b4e4488(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x00010b4e4670();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e45c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e3980; end: 10b4e39b3;  */

long FUN_10b4e3980(long param_1)

{
  func_0x00010b4e44ac();
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x00010b4e392c(param_1);
  }
  return param_1;
}



/* Entry: 10b4e39b4; end: 10b4e39b7;  */

long FUN_10b4e39b4(long param_1)

{
  func_0x00010b4e44ac();
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x00010b4e392c(param_1);
  }
  return param_1;
}



/* Entry: 10b4e39b8; end: 10b4e39cb;  */

void FUN_10b4e39b8(void)

{
  FUN_10b4e3980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e39cc; end: 10b4e39db;  */

undefined8 FUN_10b4e39cc(undefined8 param_1)

{
  func_0x00010b4e44ac();
  return param_1;
}



/* Entry: 10b4e39dc; end: 10b4e3a13;  */

void FUN_10b4e39dc(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  func_0x00010b4e392c();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4e3a14; end: 10b4e3aef;  */

long * FUN_10b4e3a14(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b4e4500();
  if ((int)param_1[2] != 0) {
    func_0x00010b4e4534();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b4e4534();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x34) == 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_1 = (long *)0x3;
    func_0x00010b4e443c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b4e4534();
    func_0x0001088bdd44();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b4e4534();
    func_0x0001088b96ec();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x00010b4e43e4();
    func_0x00010b4e4640();
    func_0x00010b4e43d8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e44bc();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4e3af0; end: 10b4e3bbf;  */

long FUN_10b4e3af0(long param_1)

{
  long lVar1;
  int extraout_w8;
  int extraout_w8_00;
  int iVar2;
  long extraout_x8;
  ulong uVar3;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long lVar4;
  
  iVar2 = -9;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x00010b4e45fc();
    uVar3 = extraout_x9;
    iVar2 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x00010b4e45fc();
    uVar3 = extraout_x9_00;
    iVar2 = extraout_w8_00;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * iVar2 + 0x2c0U >> 6) + uVar3;
  }
  lVar4 = uVar3 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x34) == 3) {
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_10b4e3d6c();
    lVar4 = lVar4 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4e4548();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9_01 + 0x10);
    }
    lVar4 = lVar1 + lVar4;
  }
  *(int *)(param_1 + 0x30) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b4e3bc0; end: 10b4e3c9b;  */

void FUN_10b4e3bc0(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar2;
  
  func_0x00010b4e44f0();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x20 + 0x10);
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    *(int *)(unaff_x21 + 0x14) = *(int *)(unaff_x20 + 0x14);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x21 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)(unaff_x21 + 0x34) == iVar1) {
      if (iVar1 == 3) {
        FUN_10b4e3c9c(*(undefined8 *)(unaff_x21 + 0x28));
      }
    }
    else {
      if (*(int *)(unaff_x21 + 0x34) != 0) {
        func_0x00010b4e392c();
      }
      *(int *)(unaff_x21 + 0x34) = iVar1;
      if (iVar1 == 3) {
        FUN_10b4e4324();
        *(ulong *)(unaff_x21 + 0x28) = uVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e44c8();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e3c9c; end: 10b4e3cb7;  */

void FUN_10b4e3c9c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e3cb8; end: 10b4e3cdb;  */

undefined8 FUN_10b4e3cb8(undefined8 param_1)

{
  func_0x00010b4e44ac();
  return param_1;
}



/* Entry: 10b4e3cdc; end: 10b4e3cef;  */

void FUN_10b4e3cdc(void)

{
  FUN_10b4e3cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e3cf0; end: 10b4e3d0f;  */

undefined ** FUN_10b4e3cf0(void)

{
  return &PTR_DAT_110cf2478;
}



/* Entry: 10b4e3d10; end: 10b4e3d6b;  */

long * FUN_10b4e3d10(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b4e4500();
  if ((int)param_1[2] != 0) {
    func_0x00010b4e4534();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b4e44bc();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b4e3d6c; end: 10b4e3dff;  */

ulong FUN_10b4e3d6c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b4e3e00; end: 10b4e3e2b;  */

undefined8 * FUN_10b4e3e00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b4e29fc(param_1,param_3);
  return param_1;
}



/* Entry: 10b4e3e2c; end: 10b4e3e5b;  */

long * FUN_10b4e3e2c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4e3e5c; end: 10b4e3e8b;  */

long * FUN_10b4e3e5c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4e3e8c; end: 10b4e416b;  */

long FUN_10b4e3e8c(long param_1)

{
  FUN_10b4e3e5c(param_1 + 0x20);
  FUN_10b4e3e2c(param_1 + 8);
  return param_1;
}



/* Entry: 10b4e416c; end: 10b4e417f;  */

void FUN_10b4e416c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b4e4180; end: 10b4e41ef;  */

undefined8 * FUN_10b4e4180(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  
  func_0x00010b4e4684();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = unaff_x21;
    FUN_10b4d80e0();
  }
  *puVar1 = &PTR_FUN_110cf2148;
  puVar1[1] = unaff_x21;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_10b4e215c();
  return puVar1;
}



/* Entry: 10b4e41f0; end: 10b4e427f;  */

undefined8 * FUN_10b4e41f0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4e4570();
  }
  else {
    func_0x00010b4e4578();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110cf1fb8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4e4410();
  }
  lVar3 = param_2 + 0x10;
  func_0x00010b4e4540();
  puVar2[2] = lVar3;
  lVar3 = param_2 + 0x18;
  func_0x00010b4e4540();
  puVar2[3] = lVar3;
  lVar3 = param_2 + 0x20;
  func_0x00010b4e4540();
  puVar2[4] = lVar3;
  *(undefined4 *)((long)puVar2 + 0x34) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  puVar2[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(puVar2 + 6) = uVar1;
  return puVar2;
}



/* Entry: 10b4e4280; end: 10b4e42e7;  */

undefined8 * FUN_10b4e4280(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b4e4684();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4e4554();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4e455c();
  }
  *param_1 = &PTR_FUN_110cf20a8;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  FUN_10b4e2704();
  return param_1;
}



/* Entry: 10b4e42e8; end: 10b4e4323;  */

undefined8 * FUN_10b4e42e8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b4e4570();
  }
  else {
    func_0x00010b4e4578();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d0eea0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b588350(puVar1 + 2,param_1,param_2 + 0x10);
  param_2 = param_2 + 0x28;
  func_0x000107c2809c(param_2,param_1);
  puVar1[5] = param_2;
  *(undefined4 *)(puVar1 + 6) = 0;
  return puVar1;
}



/* Entry: 10b4e4324; end: 10b4e438b;  */

undefined8 * FUN_10b4e4324(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  
  func_0x00010b4e4684();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = unaff_x21;
    FUN_10b4d80e0();
  }
  *puVar1 = &PTR_FUN_110cf2058;
  puVar1[1] = unaff_x21;
  puVar1[2] = 0;
  FUN_10b4e3c9c();
  return puVar1;
}



/* Entry: 10b4e438c; end: 10b4e46db;  */

long FUN_10b4e438c(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4e46dc; end: 10b4e46f3;  */

void FUN_10b4e46dc(void)

{
  FUN_10b4e48ec();
  FUN_10b4e4a70();
  return;
}



/* Entry: 10b4e46f4; end: 10b4e4737;  */

void FUN_10b4e46f4(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e4738; end: 10b4e4767;  */

void FUN_10b4e4738(void)

{
  FUN_10b4e2d30();
  FUN_10b4e4a70();
  return;
}



/* Entry: 10b4e4768; end: 10b4e4777;  */

void FUN_10b4e4768(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b4e4778; end: 10b4e479f;  */

long FUN_10b4e4778(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b4e47a0; end: 10b4e47ef;  */

undefined8 * FUN_10b4e47a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf25a0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  FUN_10b4e46f4(param_1,param_3);
  return param_1;
}



/* Entry: 10b4e47f0; end: 10b4e47f3;  */

long FUN_10b4e47f0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b4e47f4; end: 10b4e4807;  */

void FUN_10b4e47f4(void)

{
  FUN_10b4e4778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e4808; end: 10b4e4813;  */

undefined ** FUN_10b4e4808(void)

{
  return &PTR_DAT_110cf25e0;
}



/* Entry: 10b4e4814; end: 10b4e48eb;  */

long * FUN_10b4e4814(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_1;
  if (param_1[2] != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,param_1[2],param_2);
    param_2 = plVar1;
  }
  plVar6 = plVar1;
  if ((int)param_1[3] != 0) {
    func_0x00010b4e4aac();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 3);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x000107c280b8(plVar6,uVar2);
    param_2 = plVar6;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    func_0x00010b4e4aac();
    param_2 = (long *)(ulong)*(byte *)((long)param_1 + 0x1c);
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280a8(param_2,uVar2);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b4e48ec; end: 10b4e4967;  */

long FUN_10b4e48ec(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = uVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x1c) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b4e4968; end: 10b4e4997;  */

long * FUN_10b4e4968(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4e4998; end: 10b4e4a1f;  */

void FUN_10b4e4998(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf25a0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = 0;
  *(undefined8 *)((long)puVar1 + 0x15) = 0;
  return;
}



/* Entry: 10b4e4a20; end: 10b4e4a33;  */

void FUN_10b4e4a20(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b4e4a34; end: 10b4e4a6f;  */

undefined8 * FUN_10b4e4a34(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  
  func_0x00010b4e4aa0();
  if (param_1 == 0) {
    __Znwm(0x88);
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b4e4a94();
  func_0x00010b4e46a4();
  *unaff_x19 = &PTR_FUN_110cf2238;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4e4410();
  }
  func_0x00010b4e451c();
  unaff_x19[6] = 0;
  unaff_x19[7] = 0;
  unaff_x19[8] = unaff_x21;
  FUN_10b4e3704(unaff_x19 + 6,unaff_x20 + 0x30);
  lVar2 = unaff_x20 + 0x48;
  func_0x00010b4e44e8();
  unaff_x19[9] = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_10b4e41f0();
  }
  unaff_x19[10] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4e4614();
  }
  unaff_x19[0xb] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_10b4e4280();
  }
  unaff_x19[0xc] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000108c6f470();
  }
  unaff_x19[0xd] = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x80);
  unaff_x19[0xf] = uVar4;
  unaff_x19[0xe] = uVar3;
  return unaff_x19;
}



/* Entry: 10b4e4a70; end: 10b4e4ab7;  */

long FUN_10b4e4a70(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4e4ab8; end: 10b4e4b37;  */

undefined8 * FUN_10b4e4ab8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf2648;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x28);
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 5) = uVar1;
  return param_1;
}



/* Entry: 10b4e4b38; end: 10b4e4b67;  */

long FUN_10b4e4b38(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e4b68(param_1);
  return param_1;
}



/* Entry: 10b4e4b68; end: 10b4e4b8f;  */

/* WARNING: Possible PIC construction at 0x00010b4e4b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4e4b80) */

void FUN_10b4e4b68(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b4e4b90; end: 10b4e4b93;  */

long FUN_10b4e4b90(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e4b68(param_1);
  return param_1;
}



/* Entry: 10b4e4b94; end: 10b4e4ba7;  */

void FUN_10b4e4b94(void)

{
  FUN_10b4e4b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e4ba8; end: 10b4e4bb3;  */

undefined ** FUN_10b4e4ba8(void)

{
  return &PTR_DAT_110cf2688;
}



/* Entry: 10b4e4bb4; end: 10b4e4bff;  */

void FUN_10b4e4bb4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4e4c00; end: 10b4e4d3f;  */

long * FUN_10b4e4c00(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  plVar1 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10b4e4c44;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10b4e4c44:
    func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f774c14);
    param_2 = param_3;
    func_0x00010b4e4f24(param_3,1);
    plVar1 = param_2;
  }
  puVar8 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b4e4cac;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b4e4cac;
  func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f774c48);
  plVar1 = param_3;
  func_0x00010b4e4f24(param_3,2);
  param_2 = plVar1;
LAB_10b4e4cac:
  plVar2 = plVar1;
  if (param_1[4] != 0) {
    func_0x00010b4e4f30();
    lVar4 = param_1[4];
    plVar2 = (long *)0x19;
    func_0x000107c280a8(0x19,plVar1);
    param_2 = plVar2 + 1;
    *plVar2 = lVar4;
  }
  if ((int)param_1[5] != 0) {
    func_0x00010b4e4f30();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 5);
    uVar3 = 0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c280b8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b4e4d40; end: 10b4e4dff;  */

void FUN_10b4e4d40(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b4e4d78;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b4e4d78:
    iVar1 = 0;
    goto LAB_10b4e4d7c;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b4e4d7c:
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)uVar2 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}



/* Entry: 10b4e4e00; end: 10b4e4e03;  */

void FUN_10b4e4e00(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e4e04; end: 10b4e4ebf;  */

void FUN_10b4e4e04(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e4ec0; end: 10b4e4ec7;  */

void FUN_10b4e4ec0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110cf2648;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b4e4ec8; end: 10b4e4f17;  */

void FUN_10b4e4ec8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cf2648;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b4e4f18; end: 10b4e4f43;  */

void FUN_10b4e4f18(void)

{
  return;
}



/* Entry: 10b4e4f44; end: 10b4e4fc3;  */

undefined8 * FUN_10b4e4f44(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf2700;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b4e532c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  uVar2 = *(undefined2 *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)(param_3 + 0x22);
  *(undefined2 *)(param_1 + 4) = uVar2;
  return param_1;
}



/* Entry: 10b4e4fc4; end: 10b4e4ff3;  */

long FUN_10b4e4fc4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e4ff4(param_1);
  return param_1;
}



/* Entry: 10b4e4ff4; end: 10b4e500f;  */

void FUN_10b4e4ff4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4f8e94();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e5010; end: 10b4e5013;  */

long FUN_10b4e5010(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e4ff4(param_1);
  return param_1;
}



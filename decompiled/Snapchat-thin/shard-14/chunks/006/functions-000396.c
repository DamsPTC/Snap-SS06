/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b50b024; end: 10b50b057;  */

void FUN_10b50b024(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b50d234();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b50b058; end: 10b50b12b;  */

long * FUN_10b50b058(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  int iVar4;
  long *unaff_x22;
  long *plVar5;
  int iVar6;
  
  plVar3 = param_2;
  plVar5 = param_3;
  func_0x00010b50d0f4(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar3 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b50b0ac;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar3 == 0) goto LAB_10b50b0ac;
  func_0x00010b50d0b4();
  func_0x00010b50d144();
  param_2 = unaff_x22;
LAB_10b50b0ac:
  plVar3 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar3 = param_3;
    func_0x00010598f43c();
    plVar5 = param_2;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,plVar3);
    plVar3 = *(long **)(param_1 + 0x18);
    func_0x00010b50d240();
    func_0x000107c280ac(plVar3,plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b50d184();
    if ((long)plVar5 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar3 < (long)(int)plVar5) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar4 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
        if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)plVar3 + (long)iVar6;
        plVar3 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar4);
    }
    _memcpy(plVar3,lVar2,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)plVar5);
  }
  return plVar3;
}



/* Entry: 10b50b12c; end: 10b50b227;  */

void FUN_10b50b12c(long param_1)

{
  int iVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long lVar4;
  int extraout_w9;
  long extraout_x9;
  
  lVar4 = param_1;
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar4 + 1;
  }
  iVar2 = -9;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b50d120();
    iVar1 = extraout_w9 + iVar1;
    iVar2 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * iVar2 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b50d178();
    lVar4 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar4 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10b50b228; end: 10b50b253;  */

undefined8 FUN_10b50b228(undefined8 param_1)

{
  func_0x000107c39d08();
  FUN_10b50b254(param_1);
  return param_1;
}



/* Entry: 10b50b254; end: 10b50b27b;  */

undefined8 FUN_10b50b254(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x40);
  FUN_10b50cad4(param_1 + 0x28);
  func_0x000107c39d14(param_1 + 0x10);
  if (extraout_x8 != 0) {
    func_0x000107c39d10();
  }
  return unaff_x19;
}



/* Entry: 10b50b27c; end: 10b50b27f;  */

undefined8 FUN_10b50b27c(undefined8 param_1)

{
  func_0x000107c39d08();
  FUN_10b50b254(param_1);
  return param_1;
}



/* Entry: 10b50b280; end: 10b50b293;  */

void FUN_10b50b280(void)

{
  FUN_10b50b228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50b294; end: 10b50b29f;  */

undefined ** FUN_10b50b294(void)

{
  return &PTR_DAT_110cf7fc8;
}



/* Entry: 10b50b2a0; end: 10b50b307;  */

void FUN_10b50b2a0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  func_0x000107c3025c(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 10b50b308; end: 10b50b76f;  */

long * FUN_10b50b308(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  func_0x00010b50d1e0();
  if ((int)param_1[9] != 0) {
    func_0x00010b50d0bc();
    func_0x000107c282e4();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x00010b50d0bc();
    func_0x00010598f43c();
    unaff_x21 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    func_0x00010b50cfdc();
    func_0x00010b50d240();
    func_0x00010b50cff8();
    unaff_x21 = param_1;
  }
  uVar4 = (ulong)*(uint *)(unaff_x20 + 0x50);
  if (*(uint *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b50d0bc();
    func_0x0001088bdd44();
    unaff_x21 = param_1;
  }
  iVar7 = *(int *)(unaff_x20 + 0x18);
  for (puVar8 = (undefined8 *)0x0; iVar7 != (int)puVar8;
      puVar8 = (undefined8 *)(ulong)((int)puVar8 + 1)) {
    func_0x00010b50d054();
    param_3 = (ulong)*(uint *)(uVar4 + 0x14);
    param_1 = (long *)0x5;
    func_0x00010b50d02c();
    unaff_x21 = param_1;
  }
  plVar5 = (long *)(ulong)*(uint *)(unaff_x20 + 0x54);
  if (*(uint *)(unaff_x20 + 0x54) != 0) {
    func_0x00010b50d0bc();
    func_0x0001089f53c8();
    unaff_x21 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x00010b50cfdc();
    plVar2 = (long *)0x38;
    func_0x000107c280a8();
    func_0x00010b50d248();
    plVar5 = param_1;
    unaff_x21 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x61) == '\x01') {
    func_0x00010b50cfdc();
    plVar3 = (long *)0x40;
    func_0x000107c280a8();
    func_0x00010b50cff8();
    plVar5 = plVar2;
    unaff_x21 = plVar3;
  }
  func_0x00010b50d0f4(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)plVar5 < 0) {
    if (puVar8[1] == 0) goto LAB_10b50b450;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if ((int)plVar5 == 0) goto LAB_10b50b450;
  func_0x00010b50d0b4(puVar8);
  plVar3 = unaff_x19;
  func_0x00010b50d010();
  unaff_x21 = plVar3;
LAB_10b50b450:
  plVar5 = plVar3;
  if (*(char *)(unaff_x20 + 0x62) == '\x01') {
    func_0x00010b50cfdc();
    plVar5 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x00010b50cff8();
    unaff_x21 = plVar5;
  }
  plVar2 = plVar5;
  if (*(char *)(unaff_x20 + 99) == '\x01') {
    func_0x00010b50cfdc();
    plVar2 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar5);
    func_0x00010b50cff8();
    unaff_x21 = plVar2;
  }
  plVar5 = plVar2;
  if (*(char *)(unaff_x20 + 100) == '\x01') {
    func_0x00010b50cfdc();
    plVar5 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar2);
    func_0x00010b50cff8();
    unaff_x21 = plVar5;
  }
  plVar2 = plVar5;
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x00010b50cfdc();
    plVar2 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar5);
    func_0x00010b50d248();
    unaff_x21 = plVar2;
  }
  plVar5 = (long *)(ulong)*(uint *)(unaff_x20 + 0x70);
  if (*(uint *)(unaff_x20 + 0x70) != 0) {
    func_0x00010b50d0bc();
    func_0x0001089f5440();
    unaff_x21 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x65) == '\x01') {
    func_0x00010b50cfdc();
    plVar3 = (long *)0x78;
    func_0x000107c280a8();
    func_0x00010b50cff8();
    plVar5 = plVar2;
    unaff_x21 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x00010b50cfdc();
    unaff_x21 = (long *)0x80;
    func_0x000107c280a8();
    func_0x00010b50d004();
    plVar5 = plVar3;
  }
  iVar9 = *(int *)(unaff_x20 + 0x30);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    func_0x00010b50d054();
    param_3 = (ulong)*(uint *)((long)plVar5 + 0x24);
    unaff_x21 = (long *)0x11;
    func_0x00010b50d02c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50d184();
    if ((long)param_3 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
      while( true ) {
        iVar9 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
        iVar7 = (int)param_3;
        uVar1 = iVar7 - iVar9;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        unaff_x21 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x21 + (long)iVar7);
    }
    _memcpy(unaff_x21,lVar6,param_3 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10b50b770; end: 10b50b773;  */

void FUN_10b50b770(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b50d274();
  FUN_10b50b8a0(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x00010b50b8b0();
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x19 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x19 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  if (*(char *)(unaff_x20 + 0x61) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x61) = 1;
  }
  if (*(char *)(unaff_x20 + 0x62) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x62) = 1;
  }
  if (*(char *)(unaff_x20 + 99) == '\x01') {
    *(undefined1 *)(unaff_x19 + 99) = 1;
  }
  if (*(char *)(unaff_x20 + 100) == '\x01') {
    *(undefined1 *)(unaff_x19 + 100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x65) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x65) = 1;
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x19 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50d134();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10b50b774; end: 10b50b89f;  */

void FUN_10b50b774(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b50d274();
  FUN_10b50b8a0(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x00010b50b8b0();
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x19 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x19 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  if (*(char *)(unaff_x20 + 0x61) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x61) = 1;
  }
  if (*(char *)(unaff_x20 + 0x62) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x62) = 1;
  }
  if (*(char *)(unaff_x20 + 99) == '\x01') {
    *(undefined1 *)(unaff_x19 + 99) = 1;
  }
  if (*(char *)(unaff_x20 + 100) == '\x01') {
    *(undefined1 *)(unaff_x19 + 100) = 1;
  }
  if (*(char *)(unaff_x20 + 0x65) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x65) = 1;
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x19 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50d134();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10b50b8a0; end: 10b50b8cf;  */

void FUN_10b50b8a0(long *param_1,long param_2)

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



/* Entry: 10b50b8d0; end: 10b50b967;  */

void FUN_10b50b8d0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b51dca0(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b50acf4(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b50b2a0(*(undefined8 *)(param_1 + 0x58));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
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



/* Entry: 10b50b968; end: 10b50bc4b;  */

byte * FUN_10b50b968(byte *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  int iVar10;
  uint uVar11;
  long unaff_x22;
  int *piVar12;
  int iVar13;
  
  func_0x00010b50d1e0();
  func_0x00010b50d0f4(*(undefined8 *)(param_1 + 0x30));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b50b9a4;
  }
  else if ((int)param_2 != 0) {
LAB_10b50b9a4:
    func_0x00010b50d0b4();
    param_1 = unaff_x19;
    func_0x00010b50d010();
    unaff_x21 = param_1;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_1 = (byte *)0x2;
    func_0x00010b50d02c(2,*(long *)(unaff_x20 + 0x48),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x48) + 0x18));
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_1 = (byte *)0x3;
    func_0x00010b50d02c(3,*(long *)(unaff_x20 + 0x50),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x50) + 0x14));
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    func_0x00010b50d0bc();
    func_0x000107c282e8();
    unaff_x21 = param_1;
  }
  uVar7 = *(ulong *)(unaff_x20 + 0x38) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar7 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar7 + 8);
  }
  if (lVar8 != 0) {
    param_1 = unaff_x19;
    func_0x000107c280a0();
    unaff_x21 = param_1;
  }
  pbVar6 = (byte *)(ulong)*(uint *)(unaff_x20 + 0x68);
  if (*(uint *)(unaff_x20 + 0x68) != 0) {
    func_0x00010b50d0bc();
    func_0x0001089f53c8();
    unaff_x21 = param_1;
  }
  pbVar4 = param_1;
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    func_0x00010b50cfdc();
    pbVar4 = (byte *)0x38;
    func_0x000107c280a8();
    func_0x00010b50d004();
    pbVar6 = param_1;
    unaff_x21 = pbVar4;
  }
  func_0x00010b50d0f4(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)pbVar6 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b50baac;
  }
  else if ((int)pbVar6 == 0) goto LAB_10b50baac;
  func_0x00010b50d0b4();
  pbVar4 = unaff_x19;
  func_0x00010b50d010();
  unaff_x21 = pbVar4;
LAB_10b50baac:
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    func_0x00010b50d0bc();
    func_0x000108b3207c();
    unaff_x21 = pbVar4;
  }
  pbVar6 = pbVar4;
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    func_0x00010b50cfdc();
    pbVar6 = (byte *)0x50;
    func_0x000107c280a8(0x50,pbVar4);
    func_0x00010b50cff8();
    unaff_x21 = pbVar6;
  }
  uVar11 = *(uint *)(unaff_x20 + 0x28);
  if (uVar11 != 0) {
    func_0x00010b50cfdc();
    pbVar4 = pbVar6 + 2;
    *pbVar6 = 0x5a;
    for (; 0x7f < uVar11; uVar11 = uVar11 >> 7) {
      pbVar4[-1] = (byte)uVar11 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar11;
    piVar12 = *(int **)(unaff_x20 + 0x20);
    piVar1 = piVar12 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x00010b50cfdc();
      uVar9 = (ulong)*piVar12;
      pbVar4 = pbVar6;
      while( true ) {
        unaff_x21 = pbVar4 + 1;
        if (uVar9 < 0x80) break;
        *pbVar4 = (byte)uVar9 | 0x80;
        uVar9 = uVar9 >> 7;
        pbVar4 = unaff_x21;
      }
      piVar12 = piVar12 + 1;
      *pbVar4 = (byte)uVar9;
    } while (piVar12 < piVar1);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x00010b50d0bc();
    func_0x000108b320a8();
    unaff_x21 = pbVar6;
  }
  pbVar4 = pbVar6;
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    func_0x00010b50cfdc();
    pbVar4 = (byte *)0x68;
    func_0x000107c280a8(0x68,pbVar6);
    func_0x00010b50d004();
    unaff_x21 = pbVar4;
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    func_0x00010b50d0bc();
    func_0x0001089f5440();
    unaff_x21 = pbVar4;
  }
  pbVar6 = pbVar4;
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    func_0x00010b50cfdc();
    pbVar6 = (byte *)0x78;
    func_0x000107c280a8(0x78,pbVar4);
    func_0x00010b50cff8();
    unaff_x21 = pbVar6;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    uVar7 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x78);
    pbVar6 = (byte *)0x10;
    func_0x00010b50d02c();
    unaff_x21 = pbVar6;
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    func_0x00010b50cfdc();
    uVar3 = *(undefined4 *)(unaff_x20 + 0x84);
    puVar5 = (undefined4 *)0x95;
    func_0x000107c280a8(0x95,pbVar6);
    unaff_x21 = (byte *)(puVar5 + 1);
    *puVar5 = uVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50d184();
    if ((long)uVar7 < 0) {
      lVar8 = *(long *)(extraout_x8 + 8);
      uVar7 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar8 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)unaff_x21 < (long)(int)uVar7) {
      while( true ) {
        iVar13 = ((int)*(undefined8 *)unaff_x19 - (int)unaff_x21) + 0x10;
        iVar10 = (int)uVar7;
        uVar2 = iVar10 - iVar13;
        uVar7 = (ulong)uVar2;
        if (uVar2 == 0 || iVar10 < iVar13) break;
        func_0x00010b4d5738();
        unaff_x21 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return unaff_x21 + iVar10;
    }
    _memcpy(unaff_x21,lVar8,uVar7 & 0xffffffff);
    return unaff_x21 + (int)uVar7;
  }
  return unaff_x21;
}



/* Entry: 10b50bc4c; end: 10b50be7f;  */

void FUN_10b50bc4c(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  long extraout_x9;
  long lVar5;
  int iVar6;
  
  lVar4 = 0;
  lVar3 = 0;
  for (lVar5 = (long)*(int *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar4 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar3;
    lVar4 = lVar4 + 0x100000000;
  }
  iVar2 = (int)lVar3;
  if (lVar3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar2 + ((int)LZCOUNT((long)iVar2) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  lVar3 = param_1;
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x00010b50d210();
  }
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c28098();
    func_0x00010b50d210();
  }
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x00010b50d210();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4f6568(*(undefined8 *)(param_1 + 0x48));
      func_0x00010b50d210();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b50ae5c(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b50d210();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x58);
      func_0x00010b50b5b4();
      func_0x00010b50d084();
      iVar6 = iVar6 + iVar2 + extraout_w8 + 2;
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    iVar6 = ((int)LZCOUNT(*(long *)(param_1 + 0x60)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar6 = iVar6 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x6c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x70)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x74)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  iVar2 = iVar6 + (uint)*(byte *)(param_1 + 0x78) * 2 + (uint)*(byte *)(param_1 + 0x79) * 2;
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x7c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar2 = iVar2 + 6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b50d178();
    lVar3 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b50be80; end: 10b50be83;  */

void FUN_10b50be80(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b50d1f0();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  func_0x000107c282d0();
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x000107c30418();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_10b51dfcc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b50cd5c();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        FUN_10b50af08();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b50ce28();
        *(ulong **)(unaff_x21 + 0x58) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b50b774();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    *(int *)(unaff_x21 + 0x84) = *(int *)(unaff_x20 + 0x84);
  }
  func_0x00010b50d254();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00010b50d200();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b50be84; end: 10b50c057;  */

void FUN_10b50be84(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b50d1f0();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  func_0x000107c282d0();
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x000107c30418();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_10b51dfcc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b50cd5c();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        FUN_10b50af08();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b50ce28();
        *(ulong **)(unaff_x21 + 0x58) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b50b774();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    *(int *)(unaff_x21 + 0x84) = *(int *)(unaff_x20 + 0x84);
  }
  func_0x00010b50d254();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00010b50d200();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b50c058; end: 10b50c113;  */

void FUN_10b50c058(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b50b8d0();
  func_0x00010b50d1f0(param_1,param_2);
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  func_0x000107c282d0();
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x000107c30418();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_10b51dfcc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b50cd5c();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        FUN_10b50af08();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b50ce28();
        *(ulong **)(unaff_x21 + 0x58) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b50b774();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    *(int *)(unaff_x21 + 0x84) = *(int *)(unaff_x20 + 0x84);
  }
  func_0x00010b50d254();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00010b50d200();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b50c114; end: 10b50c117;  */

undefined8 FUN_10b50c114(undefined8 param_1)

{
  func_0x0001002a1a84();
  func_0x0001002a1ad4(param_1);
  return param_1;
}



/* Entry: 10b50c118; end: 10b50c12b;  */

void FUN_10b50c118(void)

{
  func_0x000107c3042c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50c12c; end: 10b50c1ef;  */

long * FUN_10b50c12c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  plVar1 = param_2;
  plVar3 = param_3;
  func_0x00010b50d0f4(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)unaff_x22[1];
    if (plVar1 == (long *)0x0) goto LAB_10b50c184;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10b50c184;
  func_0x00010b50d0b4();
  func_0x00010b50d144();
  param_2 = unaff_x22;
LAB_10b50c184:
  iVar5 = *(int *)(param_1 + 0x18);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010b50d054();
    plVar3 = (long *)(ulong)*(uint *)((long)plVar1 + 0x14);
    param_2 = (long *)0x2;
    func_0x00010b50d07c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b50d184();
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
  return param_2;
}



/* Entry: 10b50c1f0; end: 10b50c26f;  */

long FUN_10b50c1f0(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010b50d09c();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b50a448();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b50d1b0();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b50d178();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b50c270; end: 10b50c2d7;  */

void FUN_10b50c270(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b50d274();
  if (*(int *)(param_2 + 0x18) != 0) {
    param_1 = (ulong *)(unaff_x19 + 0x10);
    param_2 = unaff_x20 + 0x10;
    func_0x000107c303c4();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50d134();
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



/* Entry: 10b50c2d8; end: 10b50c303;  */

undefined8 FUN_10b50c2d8(undefined8 param_1)

{
  func_0x000107c39d08();
  FUN_10b50c304(param_1);
  return param_1;
}



/* Entry: 10b50c304; end: 10b50c347;  */

void FUN_10b50c304(long param_1)

{
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}



/* Entry: 10b50c348; end: 10b50c34b;  */

undefined8 FUN_10b50c348(undefined8 param_1)

{
  func_0x000107c39d08();
  FUN_10b50c304(param_1);
  return param_1;
}



/* Entry: 10b50c34c; end: 10b50c35f;  */

void FUN_10b50c34c(void)

{
  FUN_10b50c2d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50c360; end: 10b50c36b;  */

undefined ** FUN_10b50c360(void)

{
  return &PTR_DAT_110cf80a0;
}



/* Entry: 10b50c36c; end: 10b50c3bb;  */

void FUN_10b50c36c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b50d234();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x44) = 0;
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



/* Entry: 10b50c3bc; end: 10b50c5cb;  */

long * FUN_10b50c3bc(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  func_0x00010b50d1e0();
  plVar4 = (long *)(ulong)*(uint *)(param_1 + 6);
  if (*(uint *)(param_1 + 6) != 0) {
    func_0x00010b50d0bc();
    func_0x000107c282e4();
    unaff_x21 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    func_0x00010b50cfdc();
    plVar2 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b50d004();
    plVar4 = param_1;
    unaff_x21 = plVar2;
  }
  func_0x00010b50d0f4(*(undefined8 *)(unaff_x20 + 0x10));
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b50c42c;
  }
  else if ((int)plVar4 != 0) {
LAB_10b50c42c:
    func_0x00010b50d0b4();
    plVar4 = (long *)0x3;
    plVar2 = unaff_x19;
    func_0x00010b50d010();
    unaff_x21 = plVar2;
  }
  func_0x00010b50d0f4(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b50c46c;
  }
  else if ((int)plVar4 != 0) {
LAB_10b50c46c:
    func_0x00010b50d0b4();
    plVar4 = (long *)0x4;
    plVar2 = unaff_x19;
    func_0x00010b50d010();
    unaff_x21 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x44) == 5) {
    func_0x00010b50cfdc();
    plVar3 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b50d004();
    plVar4 = plVar2;
    unaff_x21 = plVar3;
  }
  func_0x00010b50d0f4(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)plVar4 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b50c4e8;
  }
  else if ((int)plVar4 != 0) {
LAB_10b50c4e8:
    func_0x00010b50d0b4();
    plVar3 = unaff_x19;
    func_0x00010b50d010();
    unaff_x21 = plVar3;
  }
  uVar5 = (ulong)*(uint *)(unaff_x20 + 0x38);
  if (*(uint *)(unaff_x20 + 0x38) != 0) {
    func_0x00010b50d0bc();
    func_0x00010598f468();
    unaff_x21 = plVar3;
  }
  func_0x00010b50d0f4(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)uVar5 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b50c558;
  }
  else if ((int)uVar5 == 0) goto LAB_10b50c558;
  func_0x00010b50d0b4();
  plVar3 = unaff_x19;
  func_0x00010b50d010();
  unaff_x21 = plVar3;
LAB_10b50c558:
  if (*(int *)(unaff_x20 + 0x44) == 9) {
    func_0x00010b50cfdc();
    unaff_x21 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar3);
    func_0x00010b50cff8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b50d184();
  if ((long)param_3 < 0) {
    lVar6 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar6 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)unaff_x21) {
    _memcpy(unaff_x21,lVar6,param_3 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)param_3);
  }
  while( true ) {
    iVar8 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
    iVar7 = (int)param_3;
    uVar1 = iVar7 - iVar8;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    unaff_x21 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x21 + (long)iVar7);
}



/* Entry: 10b50c5cc; end: 10b50c6d7;  */

long FUN_10b50c5cc(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b50d1b0();
  }
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b50d1b0();
  }
  func_0x00010b50d0e8(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b50d1b0();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010b50d120(0xfffffff7);
    lVar3 = extraout_x9 + lVar3;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x00010b50d038();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x00010b50d120();
    lVar3 = extraout_x9_00 + lVar3;
  }
  if (*(int *)(param_1 + 0x44) == 9) {
    lVar3 = lVar3 + 2;
  }
  else if (*(int *)(param_1 + 0x44) == 5) {
    func_0x00010b50d1c4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b50d178();
    lVar2 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar2 = *(long *)(extraout_x9_01 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x40) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b50c6d8; end: 10b50c6db;  */

void FUN_10b50c6d8(ulong *param_1,long param_2)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b50d274();
  func_0x00010b50d0dc(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 != 0) {
    if (*(int *)(unaff_x19 + 0x44) != iVar1) {
      *(int *)(unaff_x19 + 0x44) = iVar1;
    }
    if (iVar1 == 9) {
      *(undefined1 *)(unaff_x19 + 0x3c) = *(undefined1 *)(unaff_x20 + 0x3c);
    }
    else if (iVar1 == 5) {
      *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(unaff_x20 + 0x3c);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50d134();
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



/* Entry: 10b50c6dc; end: 10b50c807;  */

void FUN_10b50c6dc(ulong *param_1,long param_2)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b50d274();
  func_0x00010b50d0dc(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b50d0dc(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b50d0d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x19 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  iVar1 = *(int *)(unaff_x20 + 0x44);
  if (iVar1 != 0) {
    if (*(int *)(unaff_x19 + 0x44) != iVar1) {
      *(int *)(unaff_x19 + 0x44) = iVar1;
    }
    if (iVar1 == 9) {
      *(undefined1 *)(unaff_x19 + 0x3c) = *(undefined1 *)(unaff_x20 + 0x3c);
    }
    else if (iVar1 == 5) {
      *(undefined4 *)(unaff_x19 + 0x3c) = *(undefined4 *)(unaff_x20 + 0x3c);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50d134();
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



/* Entry: 10b50c808; end: 10b50c833;  */

undefined8 FUN_10b50c808(undefined8 param_1)

{
  func_0x000107c39d08();
  FUN_10b50c834(param_1);
  return param_1;
}



/* Entry: 10b50c834; end: 10b50c873;  */

undefined8 FUN_10b50c834(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c30570();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b50c2d8();
  }
  __ZdlPv();
  func_0x000107c39d14(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000107c39d10();
  }
  return unaff_x19;
}



/* Entry: 10b50c874; end: 10b50c877;  */

undefined8 FUN_10b50c874(undefined8 param_1)

{
  func_0x000107c39d08();
  FUN_10b50c834(param_1);
  return param_1;
}



/* Entry: 10b50c878; end: 10b50c88b;  */

void FUN_10b50c878(void)

{
  FUN_10b50c808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50c88c; end: 10b50c897;  */

undefined ** FUN_10b50c88c(void)

{
  return &PTR_DAT_110cf8100;
}



/* Entry: 10b50c898; end: 10b50c9cb;  */

long * FUN_10b50c898(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_x8;
  int iVar8;
  int iVar9;
  
  plVar4 = param_1;
  plVar6 = param_3;
  if ((int)param_1[8] != 0) {
    plVar3 = param_1;
    func_0x00010b50d114();
    plVar4 = (long *)0x8;
    func_0x000107c280a8(8,plVar3);
    func_0x00010b50d004();
    param_2 = plVar4;
  }
  lVar5 = param_1[4];
  for (iVar8 = 0; (int)lVar5 != iVar8; iVar8 = iVar8 + 1) {
    uVar7 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + (long)iVar8 * 8 + 7);
    }
    plVar6 = (long *)(ulong)*(uint *)(*puVar1 + 0x14);
    plVar4 = (long *)0x2;
    func_0x00010b50d07c();
    param_2 = plVar4;
  }
  if (*(int *)((long)param_1 + 0x44) != 0) {
    func_0x00010b50d114();
    func_0x00010b50d240();
    func_0x00010b50d004();
    param_2 = plVar4;
  }
  if ((int)param_1[9] != 0) {
    func_0x00010b50d114();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar4);
    func_0x00010b50d004();
  }
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[6] + 0x18);
    param_2 = (long *)0x5;
    func_0x00010b50d07c();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[7] + 0x40);
    param_2 = (long *)0x6;
    func_0x00010b50d07c();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b50d184();
    if ((long)plVar6 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar5,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  return param_2;
}



/* Entry: 10b50c9cc; end: 10b50ca8f;  */

long FUN_10b50c9cc(long param_1)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b50d09c();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    FUN_10b50ae5c();
    unaff_x20 = lVar2 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4f6568(*(undefined8 *)(param_1 + 0x30));
      func_0x00010b50d1b0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      FUN_10b50c5cc();
      func_0x00010b50d084();
      unaff_x20 = unaff_x20 + lVar2 + extraout_x8 + 1;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010b50d038(0xfffffff7);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x00010b50d038();
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x00010b50d1c4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b50d178();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar2 + unaff_x20;
  }
  *(int *)(param_1 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b50ca90; end: 10b50cad3;  */

void FUN_10b50ca90(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010b50d1f0();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  FUN_10b50ca90();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x30);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x000107c30418();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
      }
      else {
        FUN_10b51dfcc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b50cf0c();
        *(ulong **)(unaff_x21 + 0x38) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_10b50c6dc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  func_0x00010b50d254();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50d200();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b50cad4; end: 10b50cafb;  */

void FUN_10b50cad4(void)

{
  long extraout_x8;
  
  func_0x000107c39d14();
  if (extraout_x8 != 0) {
    func_0x000107c39d10();
  }
  return;
}



/* Entry: 10b50cafc; end: 10b50cb23;  */

void FUN_10b50cafc(void)

{
  long extraout_x8;
  
  func_0x000107c39d14();
  if (extraout_x8 != 0) {
    func_0x000107c39d10();
  }
  return;
}



/* Entry: 10b50cb24; end: 10b50cb4b;  */

undefined8 FUN_10b50cb24(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_10b50cad4(param_1 + 0x18);
  func_0x000107c39d14(param_1);
  if (extraout_x8 != 0) {
    func_0x000107c39d10();
  }
  return unaff_x19;
}



/* Entry: 10b50cb4c; end: 10b50cb73;  */

void FUN_10b50cb4c(void)

{
  long extraout_x8;
  
  func_0x000107c39d14();
  if (extraout_x8 != 0) {
    func_0x000107c39d10();
  }
  return;
}



/* Entry: 10b50cb74; end: 10b50cd5b;  */

void FUN_10b50cb74(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b50d228();
  }
  *puVar1 = &PTR_FUN_110cf7ce0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  return;
}



/* Entry: 10b50cd5c; end: 10b50ce27;  */

undefined8 * FUN_10b50cd5c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110cf7d80;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b50d070();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  FUN_10b50ca90(puVar2 + 3,param_2 + 0x18);
  puVar3 = (undefined8 *)0x0;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) != 0) {
    puVar3 = param_1;
    func_0x000107c30418(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b50cf0c(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  puVar2[7] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48);
  puVar2[8] = uVar4;
  return puVar2;
}



/* Entry: 10b50ce28; end: 10b50cf0b;  */

undefined8 * FUN_10b50ce28(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x80;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x80);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf7e20;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b50d070();
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  FUN_10b50b8a0(puVar1 + 2,param_2 + 0x10);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  func_0x00010b50b8b0(puVar1 + 5,param_2 + 0x28);
  lVar2 = param_2 + 0x40;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[8] = lVar2;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  puVar1[0xe] = *(undefined8 *)(param_2 + 0x70);
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
  puVar1[9] = uVar3;
  return puVar1;
}



/* Entry: 10b50cf0c; end: 10b50cfdb;  */

undefined8 * FUN_10b50cf0c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110cf7d30;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b50d070();
  }
  lVar3 = param_2 + 0x10;
  func_0x000107c39d0c();
  puVar2[2] = lVar3;
  lVar3 = param_2 + 0x18;
  func_0x000107c39d0c();
  puVar2[3] = lVar3;
  lVar3 = param_2 + 0x20;
  func_0x000107c39d0c();
  puVar2[4] = lVar3;
  lVar3 = param_2 + 0x28;
  func_0x000107c39d0c();
  puVar2[5] = lVar3;
  *(undefined4 *)(puVar2 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x44);
  *(int *)((long)puVar2 + 0x44) = iVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38);
  puVar2[6] = uVar4;
  if (iVar1 == 9) {
    *(undefined1 *)((long)puVar2 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  }
  else if (iVar1 == 5) {
    *(undefined4 *)((long)puVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  }
  return puVar2;
}



/* Entry: 10b50cfdc; end: 10b50d2a7;  */

ulong * FUN_10b50cfdc(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b50d2a8; end: 10b50d2cf;  */

long FUN_10b50d2a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b50d2d0; end: 10b50d317;  */

undefined8 * FUN_10b50d2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf8208;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b50d280(param_1,param_3);
  return param_1;
}



/* Entry: 10b50d318; end: 10b50d31b;  */

long FUN_10b50d318(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b50d31c; end: 10b50d32f;  */

void FUN_10b50d31c(void)

{
  FUN_10b50d2a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50d330; end: 10b50d34f;  */

undefined ** FUN_10b50d330(void)

{
  return &PTR_DAT_110cf8248;
}



/* Entry: 10b50d350; end: 10b50d3e7;  */

long * FUN_10b50d350(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b50d3e8; end: 10b50d43f;  */

long FUN_10b50d3e8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b50d440; end: 10b50d483;  */

void FUN_10b50d440(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cf8208;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b50d484; end: 10b50d4d7;  */

void FUN_10b50d484(void)

{
  return;
}



/* Entry: 10b50d4d8; end: 10b50d4ff;  */

long FUN_10b50d4d8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b50d500; end: 10b50d54f;  */

undefined8 * FUN_10b50d500(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf82b8;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  func_0x00010b50d48c(param_1,param_3);
  return param_1;
}



/* Entry: 10b50d550; end: 10b50d553;  */

long FUN_10b50d550(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b50d554; end: 10b50d567;  */

void FUN_10b50d554(void)

{
  FUN_10b50d4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50d568; end: 10b50d58b;  */

undefined ** FUN_10b50d568(void)

{
  return &PTR_DAT_110cf82f8;
}



/* Entry: 10b50d58c; end: 10b50d667;  */

long * FUN_10b50d58c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar2 = param_1;
    func_0x00010b50d710();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b50d704();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x11) == '\x01') {
    func_0x00010b50d710();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b50d704();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x12) == '\x01') {
    func_0x00010b50d710();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b50d704();
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
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b50d668; end: 10b50d6b7;  */

long FUN_10b50d668(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10) +
                  (uint)*(byte *)(param_1 + 0x12)) & 7) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b50d6b8; end: 10b50d703;  */

void FUN_10b50d6b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cf82b8;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  return;
}



/* Entry: 10b50d704; end: 10b50d723;  */

void FUN_10b50d704(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b50d724; end: 10b50d783;  */

undefined8 * FUN_10b50d724(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf83b8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b50dc94(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b50d784; end: 10b50d7b3;  */

long FUN_10b50d784(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b50dcc0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b50d7b4; end: 10b50d7b7;  */

long FUN_10b50d7b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b50dcc0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b50d7b8; end: 10b50d7cb;  */

void FUN_10b50d7b8(void)

{
  FUN_10b50d784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50d7cc; end: 10b50d7d7;  */

undefined ** FUN_10b50d7cc(void)

{
  return &PTR_DAT_110cf83f8;
}



/* Entry: 10b50d7d8; end: 10b50d81b;  */

void FUN_10b50d7d8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
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



/* Entry: 10b50d81c; end: 10b50d8d3;  */

long * FUN_10b50d81c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b50d8d4; end: 10b50d94b;  */

long FUN_10b50d8d4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b50d94c();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b50d94c; end: 10b50d977;  */

long FUN_10b50d94c(long param_1)

{
  FUN_10b50db74();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b50d978; end: 10b50d97b;  */

void FUN_10b50d978(long param_1,long param_2)

{
  FUN_10b50d9c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b50d97c; end: 10b50d9c3;  */

void FUN_10b50d97c(long param_1,long param_2)

{
  FUN_10b50d9c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b50d9c4; end: 10b50d9d3;  */

void FUN_10b50d9c4(long *param_1,long param_2)

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



/* Entry: 10b50d9d4; end: 10b50da03;  */

long FUN_10b50d9d4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b50da04; end: 10b50da07;  */

long FUN_10b50da04(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b50da08; end: 10b50da1b;  */

void FUN_10b50da08(void)

{
  FUN_10b50d9d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50da1c; end: 10b50da27;  */

undefined ** FUN_10b50da1c(void)

{
  return &PTR_DAT_110cf8438;
}



/* Entry: 10b50da28; end: 10b50da67;  */

void FUN_10b50da28(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
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



/* Entry: 10b50da68; end: 10b50db73;  */

long * FUN_10b50da68(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  plVar2 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_10b50dad4;
    puVar1 = (undefined8 *)*puVar9;
  }
  else {
    puVar1 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b50dad4;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f7766bc);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = plVar2;
LAB_10b50dad4:
  plVar7 = plVar2;
  if ((int)param_1[3] != 0) {
    func_0x00010b50ddb0();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 3);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(plVar7,uVar3);
    param_2 = plVar7;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    func_0x00010b50ddb0();
    param_2 = (long *)(ulong)*(byte *)((long)param_1 + 0x1c);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar7);
    func_0x000107c280a8(param_2,uVar3);
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
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b50db74; end: 10b50dc83;  */

void FUN_10b50db74(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  iVar1 = 0;
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)uVar2 + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x1c) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}



/* Entry: 10b50dc84; end: 10b50dc93;  */

void FUN_10b50dc84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110cf8368;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  return;
}



/* Entry: 10b50dc94; end: 10b50dcbf;  */

undefined8 * FUN_10b50dc94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b50d9c4(param_1,param_3);
  return param_1;
}



/* Entry: 10b50dcc0; end: 10b50dcef;  */

long * FUN_10b50dcc0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b50dcf0; end: 10b50dd93;  */

void FUN_10b50dcf0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8368;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  return;
}



/* Entry: 10b50dd94; end: 10b50dde3;  */

void FUN_10b50dd94(void)

{
  return;
}



/* Entry: 10b50dde4; end: 10b50de0b;  */

long FUN_10b50dde4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b50de0c; end: 10b50de0f;  */

long FUN_10b50de0c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b50de10; end: 10b50de23;  */

void FUN_10b50de10(void)

{
  FUN_10b50dde4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50de24; end: 10b50de43;  */

undefined ** FUN_10b50de24(void)

{
  return &PTR_DAT_110cf8550;
}



/* Entry: 10b50de44; end: 10b50deaf;  */

long * FUN_10b50de44(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b50deb0; end: 10b50deff;  */

ulong FUN_10b50deb0(long param_1)

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



/* Entry: 10b50df00; end: 10b50df6f;  */

undefined8 * FUN_10b50df00(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf8510;
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
    FUN_10b50e250(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



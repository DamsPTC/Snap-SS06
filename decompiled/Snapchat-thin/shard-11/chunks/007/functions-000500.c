/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088c7ef0; end: 1088c7efb;  */

undefined ** FUN_1088c7ef0(void)

{
  return &PTR_DAT_110a83f48;
}



/* Entry: 1088c7efc; end: 1088c7f83;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088c7efc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088c7680(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088c78d4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088c7a4c(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1088c7370(*(undefined8 *)(param_1 + 0x30));
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_1088c7ec0(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088c7f84; end: 1088c81e3;  */

long * FUN_1088c7f84(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  plVar2 = param_1;
  plVar5 = param_3;
  if ((int)param_1[7] != 0) {
    FUN_1088c88d8();
    func_0x0001088c8a1c();
    func_0x0001088c893c();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    FUN_1088c88d8();
    func_0x0001088c8a3c();
    func_0x0001088c893c();
    param_2 = plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[3] + 0x20);
    plVar2 = (long *)0x4;
    func_0x0001088c8928();
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[4] + 0x18);
    plVar2 = (long *)0x5;
    func_0x0001088c8928();
    param_2 = plVar2;
  }
  if ((int)param_1[10] == 7) {
    FUN_1088c88d8();
    plVar3 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x0001088c88e4();
    param_2 = plVar3;
  }
  else {
    plVar3 = plVar2;
    if ((int)param_1[10] == 6) {
      puVar7 = (undefined8 *)(param_1[9] & 0xfffffffffffffffc);
      lVar4 = (long)*(char *)((long)puVar7 + 0x17);
      if (lVar4 < 0) {
        lVar4 = puVar7[1];
        puVar7 = (undefined8 *)*puVar7;
      }
      func_0x0001088c8a14(puVar7,lVar4);
      plVar3 = param_3;
      func_0x0001088c896c(param_3,6);
      param_2 = plVar3;
    }
  }
  plVar2 = plVar3;
  if ((char)param_1[8] == '\x01') {
    FUN_1088c88d8();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar3);
    func_0x0001088c88e4();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)((long)param_1 + 0x41) == '\x01') {
    FUN_1088c88d8();
    plVar3 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x0001088c88e4();
    param_2 = plVar3;
  }
  if (*(char *)((long)param_1 + 0x42) == '\x01') {
    FUN_1088c88d8();
    param_2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x0001088c88e4();
    plVar3 = param_2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[5] + 0x2c);
    plVar3 = (long *)0xb;
    func_0x0001088c8928();
    param_2 = plVar3;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[6] + 0x18);
    plVar3 = (long *)0xc;
    func_0x0001088c8928();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x44) != 0) {
    FUN_1088c88d8();
    plVar2 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar3);
    func_0x0001088c88e4();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x43) == '\x01') {
    FUN_1088c88d8();
    param_2 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar2);
    func_0x0001088c88e4();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0001088c8a08();
  if ((long)plVar5 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)plVar5 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar4,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar5);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar6 = (int)plVar5;
    plVar5 = (long *)(ulong)(uint)(iVar6 - iVar8);
    if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
    func_0x00010b4d5738();
    lVar4 = (long)param_2 + (long)iVar8;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar4);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar6);
}



/* Entry: 1088c81e4; end: 1088c836f;  */

long FUN_1088c81e4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x9;
  long lVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    lVar5 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
      FUN_1088c8370();
      lVar5 = lVar5 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088c7974(*(undefined8 *)(param_1 + 0x20));
      func_0x0001088c88fc();
      func_0x0001088c89c8();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088c7bac(*(undefined8 *)(param_1 + 0x28));
      func_0x0001088c88fc();
      func_0x0001088c89c8();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1088c7458(*(undefined8 *)(param_1 + 0x30));
      func_0x0001088c88fc();
      func_0x0001088c89c8();
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x280U >> 6) + 1;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = (ushort)(byte)((uint)uVar6 >> 8) * 2;
  lVar5 = ((ulong)CONCAT24(uVar2,(uint)(ushort)((ushort)(byte)uVar6 * 2)) & 0xff) +
          (ulong)(byte)((char)((uint)uVar6 >> 0x10) * '\x02') +
          ((ulong)uVar2 & 0xff) + (ulong)(byte)((char)((uint)uVar6 >> 0x18) * '\x02') + lVar5;
  if (*(int *)(param_1 + 0x44) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x44)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x50) == 7) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x48)) * -9 + 0x1a0U >> 6);
  }
  else if (*(int *)(param_1 + 0x50) == 6) {
    uVar3 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
    func_0x000107c282a0();
    lVar5 = lVar5 + uVar3 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088c8a64();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar5 = lVar4 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 1088c8370; end: 1088c838b;  */

long FUN_1088c8370(long param_1)

{
  long extraout_x8;
  
  func_0x0001088c774c();
  func_0x0001088c88fc();
  return param_1 + extraout_x8;
}



/* Entry: 1088c838c; end: 1088c838f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088c838c(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c8a50();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 0xf) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar5 = unaff_x22;
        func_0x0001088c8704(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar5;
      }
      else {
        FUN_1088c77d4();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar5 = unaff_x22;
        FUN_1088c8748(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar5;
      }
      else {
        FUN_1088c7858();
      }
    }
    if ((uVar2 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        uVar5 = unaff_x22;
        func_0x0001088c87b8(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = uVar5;
      }
      else {
        FUN_1088c7c74();
      }
    }
    if ((uVar2 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar5 = unaff_x22;
        func_0x0001088c8844(unaff_x22,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar5;
      }
      else {
        FUN_1088c74e0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  if (*(char *)(unaff_x20 + 0x41) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x41) = 1;
  }
  if (*(char *)(unaff_x20 + 0x42) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x42) = 1;
  }
  if (*(char *)(unaff_x20 + 0x43) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x43) = 1;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar2;
  iVar3 = *(int *)(unaff_x20 + 0x50);
  if (iVar3 != 0) {
    iVar4 = *(int *)(unaff_x21 + 0x50);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_1088c7ec0();
      }
      *(int *)(unaff_x21 + 0x50) = iVar3;
    }
    if (iVar3 == 7) {
      *(undefined4 *)(unaff_x21 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
    }
    else if (iVar3 == 6) {
      if (iVar4 != 6) {
        *(undefined **)(unaff_x21 + 0x48) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x48) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x50) != 6) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(unaff_x21 + 0x48,puVar1,unaff_x22);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c8390; end: 1088c8573;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088c8390(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c8a50();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 0xf) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar5 = unaff_x22;
        func_0x0001088c8704(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar5;
      }
      else {
        FUN_1088c77d4();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar5 = unaff_x22;
        FUN_1088c8748(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar5;
      }
      else {
        FUN_1088c7858();
      }
    }
    if ((uVar2 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        uVar5 = unaff_x22;
        func_0x0001088c87b8(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = uVar5;
      }
      else {
        FUN_1088c7c74();
      }
    }
    if ((uVar2 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar5 = unaff_x22;
        func_0x0001088c8844(unaff_x22,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar5;
      }
      else {
        FUN_1088c74e0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  if (*(char *)(unaff_x20 + 0x41) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x41) = 1;
  }
  if (*(char *)(unaff_x20 + 0x42) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x42) = 1;
  }
  if (*(char *)(unaff_x20 + 0x43) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x43) = 1;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar2;
  iVar3 = *(int *)(unaff_x20 + 0x50);
  if (iVar3 != 0) {
    iVar4 = *(int *)(unaff_x21 + 0x50);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_1088c7ec0();
      }
      *(int *)(unaff_x21 + 0x50) = iVar3;
    }
    if (iVar3 == 7) {
      *(undefined4 *)(unaff_x21 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
    }
    else if (iVar3 == 6) {
      if (iVar4 != 6) {
        *(undefined **)(unaff_x21 + 0x48) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x48) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x50) != 6) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(unaff_x21 + 0x48,puVar1,unaff_x22);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c8574; end: 1088c859b;  */

void FUN_1088c8574(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110a83c78;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1088c859c; end: 1088c8747;  */

void FUN_1088c859c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a83c78;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1088c8748; end: 1088c87b7;  */

undefined8 * FUN_1088c8748(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088c8980();
  }
  else {
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110a83cc8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  FUN_1088c7858();
  return puVar1;
}



/* Entry: 1088c87b8; end: 1088c88d7;  */

undefined8 * FUN_1088c87b8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110a83d18;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088c891c();
  }
  lVar3 = param_2 + 0x10;
  func_0x0001088c8990();
  puVar2[2] = lVar3;
  lVar3 = param_2 + 0x18;
  func_0x0001088c8990();
  puVar2[3] = lVar3;
  *(undefined4 *)((long)puVar2 + 0x2c) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  puVar2[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(puVar2 + 5) = uVar1;
  return puVar2;
}



/* Entry: 1088c88d8; end: 1088c8a7b;  */

ulong * FUN_1088c88d8(void)

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



/* Entry: 1088c8a7c; end: 1088c8ad7;  */

void FUN_1088c8a7c(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a855f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dda78();
  FUN_1088d94a8();
  lVar1 = unaff_x21 + 0x28;
  func_0x0001088dd464();
  *(long *)(unaff_x19 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 1088c8ad8; end: 1088c8b03;  */

undefined8 FUN_1088c8ad8(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088c8b04(param_1);
  return param_1;
}



/* Entry: 1088c8b04; end: 1088c8b23;  */

long FUN_1088c8b04(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001088ddbec();
  func_0x0001088dda20(unaff_x19 + 0x10);
  if (extraout_x8 != 0) {
    func_0x0001088dd838();
  }
  return unaff_x19;
}



/* Entry: 1088c8b24; end: 1088c8b27;  */

undefined8 FUN_1088c8b24(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088c8b04(param_1);
  return param_1;
}



/* Entry: 1088c8b28; end: 1088c8b3b;  */

void FUN_1088c8b28(void)

{
  FUN_1088c8ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c8b3c; end: 1088c8b47;  */

undefined ** FUN_1088c8b3c(void)

{
  return &PTR_DAT_110a85ea8;
}



/* Entry: 1088c8b48; end: 1088c8b8b;  */

void FUN_1088c8b48(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x0001088dd614();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088c8b8c; end: 1088c8c37;  */

long * FUN_1088c8b8c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dcfe8();
  func_0x0001088dd33c(param_1[5]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088c8bdc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088c8bdc;
  param_4 = (long *)&UNK_10f4ea742;
  func_0x0001088dd2ec();
  func_0x0001088dcd10();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088c8bdc:
  iVar2 = *(int *)(unaff_x21 + 0x18);
  while (iVar2 != 0) {
    func_0x0001088dd094();
    func_0x0001088dd790();
    func_0x0001088dcfb4();
    func_0x0001088ddb2c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001088dd348();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088dd474();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar3);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 1088c8c38; end: 1088c8cab;  */

void FUN_1088c8c38(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001088dd8a4();
  func_0x0001088dcf1c();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    param_1 = *unaff_x21;
    FUN_1088c8cac();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0001088dd1bc();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088ddaf0();
  return;
}



/* Entry: 1088c8cac; end: 1088c8cc3;  */

void FUN_1088c8cac(void)

{
  func_0x0001088c9128();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088c8cc4; end: 1088c8cc7;  */

void FUN_1088c8cc4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dd2c8();
  FUN_1088c8d18();
  func_0x0001088dd1ac();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd828();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c8cc8; end: 1088c8d17;  */

void FUN_1088c8cc8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dd2c8();
  FUN_1088c8d18();
  func_0x0001088dd1ac();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd828();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c8d18; end: 1088c8d4f;  */

void FUN_1088c8d18(long *param_1,long param_2)

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



/* Entry: 1088c8d50; end: 1088c8d73;  */

undefined8 FUN_1088c8d50(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088c8d74; end: 1088c8d77;  */

undefined8 FUN_1088c8d74(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088c8d78; end: 1088c8d8b;  */

void FUN_1088c8d78(void)

{
  FUN_1088c8d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c8d8c; end: 1088c8dab;  */

undefined ** FUN_1088c8d8c(void)

{
  return &PTR_DAT_110a85ee0;
}



/* Entry: 1088c8dac; end: 1088c8e2b;  */

long * FUN_1088c8dac(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if ((int)param_1[2] != 0) {
    func_0x0001088dd014();
    func_0x0001088dd5d4();
    func_0x0001088dd164();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd670();
    func_0x0001088dd164();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
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



/* Entry: 1088c8e2c; end: 1088c8e8f;  */

ulong FUN_1088c8e2c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 1088c8e90; end: 1088c8feb;  */

void FUN_1088c8e90(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088c8f8c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c9570();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088c8f8c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c9674();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088c8f8c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c9778();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088c8f8c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c98e0();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088c8f8c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c9a0c();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088c8f8c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c9af8();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_1088c8f8c;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c9c20();
    }
    break;
  default:
    goto LAB_1088c8f8c;
  }
  __ZdlPv();
LAB_1088c8f8c:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1088c8fec; end: 1088c902f;  */

long FUN_1088c8fec(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c8d50();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1088c8e90(param_1);
  }
  return param_1;
}



/* Entry: 1088c9030; end: 1088c9033;  */

long FUN_1088c9030(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c8d50();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1088c8e90(param_1);
  }
  return param_1;
}



/* Entry: 1088c9034; end: 1088c9047;  */

void FUN_1088c9034(void)

{
  FUN_1088c8fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c9048; end: 1088c906f;  */

undefined8 FUN_1088c9048(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088c9070; end: 1088c91fb;  */

void FUN_1088c9070(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c8d98(unaff_x19[3]);
  }
  FUN_1088c8e90();
  func_0x0001088dd43c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088c91fc; end: 1088c93f3;  */

void FUN_1088c91fc(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd6c4();
    if (param_1 == (ulong *)0x0) {
      FUN_1088dac78();
      unaff_x21[3] = (ulong)unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x0001088c8d28();
    }
  }
  func_0x0001088dcfd8();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[5];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_1088c8e90();
      }
      *(int *)(unaff_x21 + 5) = iVar1;
    }
    switch(iVar1) {
    case 2:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088dd968();
        func_0x0001088c93f4();
        goto LAB_1088c93d8;
      }
      func_0x0001088dd3d0();
      FUN_1088dacd0();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        func_0x0001088c9410();
        goto LAB_1088c93d8;
      }
      func_0x0001088dd3d0();
      FUN_1088dad24();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c942c();
        goto LAB_1088c93d8;
      }
      func_0x0001088dd3d0();
      func_0x0001088dad78();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c9484();
        goto LAB_1088c93d8;
      }
      func_0x0001088dd3d0();
      func_0x0001088dadc4();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c94dc();
        goto LAB_1088c93d8;
      }
      func_0x0001088dd3d0();
      FUN_1088dae20();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c94fc();
        goto LAB_1088c93d8;
      }
      func_0x0001088dd3d0();
      FUN_1088dae78();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0001088dcf98();
        FUN_1088c9554();
        goto LAB_1088c93d8;
      }
      func_0x0001088dd3d0();
      FUN_1088daed4();
      break;
    default:
      goto LAB_1088c93d8;
    }
    unaff_x21[4] = (ulong)param_1;
  }
LAB_1088c93d8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dcf5c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c93f4; end: 1088c942b;  */

void FUN_1088c93f4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c942c; end: 1088c9483;  */

void FUN_1088c942c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dcd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b0();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c9484; end: 1088c94db;  */

void FUN_1088c9484(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd6a8();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c94dc; end: 1088c94fb;  */

void FUN_1088c94dc(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c94fc; end: 1088c9553;  */

void FUN_1088c94fc(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd6a8();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c9554; end: 1088c956f;  */

void FUN_1088c9554(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c9570; end: 1088c9593;  */

undefined8 FUN_1088c9570(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088c9594; end: 1088c95a7;  */

void FUN_1088c9594(void)

{
  FUN_1088c9570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c95a8; end: 1088c95c7;  */

undefined ** FUN_1088c95a8(void)

{
  return &PTR_DAT_110a85f68;
}



/* Entry: 1088c95c8; end: 1088c962f;  */

long * FUN_1088c95c8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if ((int)param_1[2] != 0) {
    func_0x0001088dd014();
    func_0x0001088dd670();
    func_0x0001088dd088();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
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



/* Entry: 1088c9630; end: 1088c9673;  */

long FUN_1088c9630(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x0001088dd498((long)*(int *)(param_1 + 0x10));
  lVar1 = 0;
  if (extraout_w8 != 0) {
    lVar1 = extraout_x9 + 1;
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



/* Entry: 1088c9674; end: 1088c9697;  */

undefined8 FUN_1088c9674(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088c9698; end: 1088c96ab;  */

void FUN_1088c9698(void)

{
  FUN_1088c9674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c96ac; end: 1088c96cb;  */

undefined ** FUN_1088c96ac(void)

{
  return &PTR_DAT_110a85fb0;
}



/* Entry: 1088c96cc; end: 1088c9733;  */

long * FUN_1088c96cc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if ((int)param_1[2] != 0) {
    func_0x0001088dd014();
    func_0x0001088dd670();
    func_0x0001088dd088();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
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



/* Entry: 1088c9734; end: 1088c9777;  */

long FUN_1088c9734(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x0001088dd498((long)*(int *)(param_1 + 0x10));
  lVar1 = 0;
  if (extraout_w8 != 0) {
    lVar1 = extraout_x9 + 1;
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



/* Entry: 1088c9778; end: 1088c979f;  */

undefined8 FUN_1088c9778(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  return param_1;
}



/* Entry: 1088c97a0; end: 1088c97b3;  */

void FUN_1088c97a0(void)

{
  FUN_1088c9778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c97b4; end: 1088c97bf;  */

undefined ** FUN_1088c97b4(void)

{
  return &PTR_DAT_110a85ff8;
}



/* Entry: 1088c97c0; end: 1088c97ef;  */

void FUN_1088c97c0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088c97f0; end: 1088c988b;  */

long * FUN_1088c97f0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dccf4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088c9834;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088c9834;
  param_4 = (long *)&UNK_10f4ea75f;
  func_0x0001088dd2ec();
  func_0x0001088dcce0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088c9834:
  if (*(char *)(unaff_x21 + 0x18) == '\x01') {
    func_0x0001088dd130();
    func_0x0001088dd6dc();
    func_0x0001088dd808();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088c988c; end: 1088c98db;  */

void FUN_1088c988c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dcdac();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  iVar1 = (int)param_1;
  func_0x0001088ddc10();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 1088c98dc; end: 1088c98df;  */

void FUN_1088c98dc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dcd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b0();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c98e0; end: 1088c9913;  */

long FUN_1088c98e0(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c9914; end: 1088c9927;  */

void FUN_1088c9914(void)

{
  FUN_1088c98e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c9928; end: 1088c9933;  */

undefined ** FUN_1088c9928(void)

{
  return &PTR_DAT_110a86040;
}



/* Entry: 1088c9934; end: 1088c9a07;  */

void FUN_1088c9934(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dd588();
  }
  func_0x0001088dd43c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088c9a08; end: 1088c9a0b;  */

void FUN_1088c9a08(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd6a8();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c9a0c; end: 1088c9a2f;  */

undefined8 FUN_1088c9a0c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088c9a30; end: 1088c9a43;  */

void FUN_1088c9a30(void)

{
  FUN_1088c9a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c9a44; end: 1088c9a63;  */

undefined ** FUN_1088c9a44(void)

{
  return &PTR_DAT_110a86088;
}



/* Entry: 1088c9a64; end: 1088c9abf;  */

long * FUN_1088c9a64(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd9a4();
    func_0x0001088ddae4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
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



/* Entry: 1088c9ac0; end: 1088c9af7;  */

long FUN_1088c9ac0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088c9af8; end: 1088c9b2b;  */

long FUN_1088c9af8(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c9b2c; end: 1088c9b3f;  */

void FUN_1088c9b2c(void)

{
  FUN_1088c9af8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c9b40; end: 1088c9b4b;  */

undefined ** FUN_1088c9b40(void)

{
  return &PTR_DAT_110a860d0;
}



/* Entry: 1088c9b4c; end: 1088c9c1b;  */

void FUN_1088c9b4c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dd588();
  }
  func_0x0001088dd43c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088c9c1c; end: 1088c9c1f;  */

void FUN_1088c9c1c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd6a8();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c9c20; end: 1088c9c43;  */

undefined8 FUN_1088c9c20(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088c9c44; end: 1088c9c57;  */

void FUN_1088c9c44(void)

{
  FUN_1088c9c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c9c58; end: 1088c9c77;  */

undefined ** FUN_1088c9c58(void)

{
  return &PTR_DAT_110a86128;
}



/* Entry: 1088c9c78; end: 1088c9cd7;  */

long * FUN_1088c9c78(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  if ((int)param_1[2] != 0) {
    func_0x0001088dd014();
    func_0x0001088dd5d4();
    func_0x0001088dd088();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
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



/* Entry: 1088c9cd8; end: 1088c9d1b;  */

long FUN_1088c9cd8(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x0001088dd498((long)*(int *)(param_1 + 0x10));
  lVar1 = 0;
  if (extraout_w8 != 0) {
    lVar1 = extraout_x9 + 1;
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



/* Entry: 1088c9d1c; end: 1088c9d5b;  */

void FUN_1088c9d1c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_FUN_110a85d78);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dda78();
  FUN_1088d94f0();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 1088c9d5c; end: 1088c9d87;  */

long FUN_1088c9d5c(long param_1)

{
  func_0x0001088dd2fc();
  FUN_10879b6fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088c9d88; end: 1088c9d8b;  */

long FUN_1088c9d88(long param_1)

{
  func_0x0001088dd2fc();
  FUN_10879b6fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088c9d8c; end: 1088c9d9f;  */

void FUN_1088c9d8c(void)

{
  FUN_1088c9d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c9da0; end: 1088c9dab;  */

undefined ** FUN_1088c9da0(void)

{
  return &PTR_DAT_110a86170;
}



/* Entry: 1088c9dac; end: 1088c9ddb;  */

void FUN_1088c9dac(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd48c();
  func_0x00010879b6e8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088c9ddc; end: 1088c9e4b;  */

long * FUN_1088c9ddc(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x0001088dd1cc();
    func_0x0001088dd114();
    func_0x0001088ddc6c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
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



/* Entry: 1088c9e4c; end: 1088c9ea7;  */

void FUN_1088c9e4c(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001088dd8a4();
  func_0x0001088dcf1c();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    func_0x0001088c5ca8(*unaff_x21);
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088dd7a8();
  return;
}



/* Entry: 1088c9ea8; end: 1088c9eab;  */

void FUN_1088c9ea8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001088dd2c8();
  FUN_1088c9edc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c9eac; end: 1088c9edb;  */

void FUN_1088c9eac(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001088dd2c8();
  FUN_1088c9edc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088c9edc; end: 1088c9eeb;  */

void FUN_1088c9edc(long *param_1,long param_2)

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



/* Entry: 1088c9eec; end: 1088c9f77;  */

void FUN_1088c9eec(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x0001088dd70c();
  if (extraout_w8 == 3) {
    func_0x0001088dd46c();
    goto LAB_1088c9f54;
  }
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088c9f54;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088ca73c();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_1088c9f54;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088c9f54;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088ca424();
    }
  }
  __ZdlPv();
LAB_1088c9f54:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c9f78; end: 1088c9ff3;  */

void FUN_1088c9f78(void)

{
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_DAT_110a85918);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dda38();
  if (extraout_w8 == 3) {
    unaff_x20 = unaff_x21 + 0x10;
    func_0x0001088dd464();
  }
  else if (extraout_w8 == 2) {
    func_0x0001088dafb4();
  }
  else {
    if (extraout_w8 != 1) {
      return;
    }
    FUN_1088daf28();
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x20;
  return;
}



/* Entry: 1088c9ff4; end: 1088ca01f;  */

undefined8 FUN_1088c9ff4(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088ca020(param_1);
  return param_1;
}



/* Entry: 1088ca020; end: 1088ca033;  */

void FUN_1088ca020(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001088dd70c();
  if (extraout_w8 == 3) {
    func_0x0001088dd46c();
    goto LAB_1088c9f54;
  }
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088c9f54;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088ca73c();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_1088c9f54;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088c9f54;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088ca424();
    }
  }
  __ZdlPv();
LAB_1088c9f54:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088ca034; end: 1088ca047;  */

void FUN_1088ca034(void)

{
  FUN_1088c9ff4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ca048; end: 1088ca05b;  */

undefined8 FUN_1088ca048(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088ca450(param_1);
  return param_1;
}



/* Entry: 1088ca05c; end: 1088ca08b;  */

void FUN_1088ca05c(long param_1)

{
  ulong *puVar1;
  
  FUN_1088c9eec();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088ca08c; end: 1088ca13b;  */

long * FUN_1088ca08c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dcfe8();
  iVar2 = *(int *)((long)param_1 + 0x1c);
  if (iVar2 == 3) {
    func_0x0001088dd33c(*(undefined8 *)(unaff_x21 + 0x10));
    if (param_2 < 0) {
      unaff_x22 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f4ea787;
    func_0x0001088dd2ec();
    func_0x0001088dcd24();
    unaff_x20 = unaff_x22;
  }
  else {
    if (iVar2 == 2) {
      func_0x0001088dd790();
    }
    else {
      unaff_x22 = param_1;
      if (iVar2 != 1) goto LAB_1088ca108;
      param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x10) + 0x38);
      param_1 = (long *)0x1;
    }
    func_0x0001088dcfb4();
    unaff_x22 = param_1;
    unaff_x20 = param_1;
  }
LAB_1088ca108:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
  if (*unaff_x22 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*unaff_x22 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = unaff_x22;
      func_0x000107c303e4(unaff_x22,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



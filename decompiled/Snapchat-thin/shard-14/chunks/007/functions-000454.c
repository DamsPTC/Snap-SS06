/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5a225c; end: 10b5a227b;  */

undefined ** FUN_10b5a225c(void)

{
  return &PTR_DAT_110d13d28;
}



/* Entry: 10b5a227c; end: 10b5a2327;  */

long * FUN_10b5a227c(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = param_1;
  if (param_1[2] != 0) {
    puVar2 = param_1;
    func_0x00010b5a23cc();
    uVar6 = param_1[2];
    puVar1 = (undefined8 *)0x9;
    func_0x000107c280a8(9,puVar2);
    param_2 = puVar1 + 1;
    *puVar1 = uVar6;
  }
  if (param_1[3] != 0) {
    func_0x00010b5a23cc();
    uVar6 = param_1[3];
    puVar2 = (undefined8 *)0x11;
    func_0x000107c280a8(0x11,puVar1);
    param_2 = puVar2 + 1;
    *puVar2 = uVar6;
  }
  if ((param_1[1] & 1) != 0) {
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



/* Entry: 10b5a2328; end: 10b5a237b;  */

long FUN_10b5a2328(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
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



/* Entry: 10b5a237c; end: 10b5a23c3;  */

void FUN_10b5a237c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d13ce8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5a23c4; end: 10b5a243f;  */

void FUN_10b5a23c4(void)

{
  return;
}



/* Entry: 10b5a2440; end: 10b5a2467;  */

long FUN_10b5a2440(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a2468; end: 10b5a24b3;  */

undefined8 * FUN_10b5a2468(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d13d88;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5a23d8(param_1,param_3);
  return param_1;
}



/* Entry: 10b5a24b4; end: 10b5a24b7;  */

long FUN_10b5a24b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a24b8; end: 10b5a24cb;  */

void FUN_10b5a24b8(void)

{
  FUN_10b5a2440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a24cc; end: 10b5a24eb;  */

undefined ** FUN_10b5a24cc(void)

{
  return &PTR_DAT_110d13dc8;
}



/* Entry: 10b5a24ec; end: 10b5a2607;  */

long * FUN_10b5a24ec(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_3;
    func_0x000107c282e4(param_3,(int)param_1[2],param_2);
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    FUN_10b5a26cc();
    plVar1 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b5a26d8();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x15) == '\x01') {
    FUN_10b5a26cc();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x00010b5a26d8();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x16) == '\x01') {
    FUN_10b5a26cc();
    plVar1 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b5a26d8();
    param_2 = plVar1;
  }
  if (*(char *)((long)param_1 + 0x17) == '\x01') {
    FUN_10b5a26cc();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar1);
    func_0x00010b5a26d8();
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



/* Entry: 10b5a2608; end: 10b5a2683;  */

long FUN_10b5a2608(long param_1)

{
  undefined4 uVar1;
  uint7 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  bVar6 = (byte)((uint)uVar1 >> 0x10);
  uVar2 = CONCAT52((uint5)(((uint6)(byte)((char)((uint)uVar1 >> 0x18) * '\x02') << 0x20) >> 0x10),
                   (ushort)bVar6 + (ushort)bVar6) & 0xffffffffff00ff;
  lVar3 = uVar5 + ((uint)(byte)((char)uVar1 * '\x02') +
                   (uint)(byte)((char)((uint)uVar1 >> 8) * '\x02') +
                  (uint)(ushort)uVar2 + (uint)(byte)(uVar2 >> 0x20));
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x18) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5a2684; end: 10b5a26cb;  */

void FUN_10b5a2684(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d13d88;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5a26cc; end: 10b5a26eb;  */

ulong * FUN_10b5a26cc(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b5a26ec; end: 10b5a270f;  */

undefined8 FUN_10b5a26ec(undefined8 param_1)

{
  func_0x00010b5a31ac();
  return param_1;
}



/* Entry: 10b5a2710; end: 10b5a2713;  */

undefined8 FUN_10b5a2710(undefined8 param_1)

{
  func_0x00010b5a31ac();
  return param_1;
}



/* Entry: 10b5a2714; end: 10b5a2727;  */

void FUN_10b5a2714(void)

{
  FUN_10b5a26ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a2728; end: 10b5a2747;  */

undefined ** FUN_10b5a2728(void)

{
  return &PTR_DAT_110d13f68;
}



/* Entry: 10b5a2748; end: 10b5a27c3;  */

long * FUN_10b5a2748(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b5a31c4();
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar3 = unaff_x19;
    func_0x000107c28094();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    puVar4 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,plVar3);
    param_4 = (long *)(puVar4 + 1);
    *puVar4 = uVar1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5a31f4();
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



/* Entry: 10b5a27c4; end: 10b5a282b;  */

long FUN_10b5a27c4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
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



/* Entry: 10b5a282c; end: 10b5a286b;  */

long FUN_10b5a282c(long param_1)

{
  func_0x00010b5a31ac();
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5a286c; end: 10b5a286f;  */

long FUN_10b5a286c(long param_1)

{
  func_0x00010b5a31ac();
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5a2870; end: 10b5a2883;  */

void FUN_10b5a2870(void)

{
  FUN_10b5a282c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a2884; end: 10b5a288f;  */

undefined ** FUN_10b5a2884(void)

{
  return &PTR_DAT_110d13fb8;
}



/* Entry: 10b5a2890; end: 10b5a28d7;  */

void FUN_10b5a2890(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c3025c(param_1 + 0x28);
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



/* Entry: 10b5a28d8; end: 10b5a2a67;  */

long * FUN_10b5a28d8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_x8;
  int iVar6;
  long *plVar7;
  int iVar8;
  
  plVar7 = (long *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar7 + 0x17);
  plVar4 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar7[1];
    if (lVar3 == 0) goto LAB_10b5a2948;
    plVar2 = (long *)*plVar7;
  }
  else {
    plVar2 = plVar7;
    if (*(char *)((long)plVar7 + 0x17) == '\0') goto LAB_10b5a2948;
  }
  func_0x000107c303d4(plVar2,lVar3,1,&UNK_10f77dab0);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,plVar7,param_2);
  plVar4 = plVar7;
  param_2 = plVar2;
LAB_10b5a2948:
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar8 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    plVar4 = (long *)(ulong)*(uint *)(*puVar1 + 0x14);
    param_2 = (long *)0x2;
    func_0x000107c303cc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5a31f4();
    if ((long)plVar4 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  return param_2;
}



/* Entry: 10b5a2a68; end: 10b5a2ae7;  */

void FUN_10b5a2a68(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
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



/* Entry: 10b5a2ae8; end: 10b5a2b13;  */

long FUN_10b5a2ae8(long param_1)

{
  func_0x00010b5a31ac();
  FUN_10b5a2f70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a2b14; end: 10b5a2b17;  */

long FUN_10b5a2b14(long param_1)

{
  func_0x00010b5a31ac();
  FUN_10b5a2f70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a2b18; end: 10b5a2b2b;  */

void FUN_10b5a2b18(void)

{
  FUN_10b5a2ae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a2b2c; end: 10b5a2b37;  */

undefined ** FUN_10b5a2b2c(void)

{
  return &PTR_DAT_110d14010;
}



/* Entry: 10b5a2b38; end: 10b5a2b77;  */

void FUN_10b5a2b38(long param_1)

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



/* Entry: 10b5a2b78; end: 10b5a2c03;  */

long * FUN_10b5a2b78(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b5a31c4();
  lVar4 = param_1[3];
  puVar1 = (ulong *)(param_1 + 2);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x30);
    func_0x00010b5a31e8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a31f4();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar3 = iVar6 - iVar7;
        param_3 = (ulong)uVar3;
        if (uVar3 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5a2c04; end: 10b5a2c5f;  */

long FUN_10b5a2c04(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5a3164();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b5a2c60();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b5a2c60; end: 10b5a2c77;  */

void FUN_10b5a2c60(void)

{
  func_0x00010b5a29cc();
  func_0x00010b5a3190();
  return;
}



/* Entry: 10b5a2c78; end: 10b5a2c7b;  */

void FUN_10b5a2c78(long param_1,long param_2)

{
  FUN_10b5a2cc4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5a2c7c; end: 10b5a2cc3;  */

void FUN_10b5a2c7c(long param_1,long param_2)

{
  FUN_10b5a2cc4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5a2cc4; end: 10b5a2cd3;  */

void FUN_10b5a2cc4(long *param_1,long param_2)

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



/* Entry: 10b5a2cd4; end: 10b5a2d3b;  */

undefined8 * FUN_10b5a2cd4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d13f28;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5a31d4();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5a30c8(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b5a2d3c; end: 10b5a2d67;  */

undefined8 FUN_10b5a2d3c(undefined8 param_1)

{
  func_0x00010b5a31ac();
  FUN_10b5a2d68(param_1);
  return param_1;
}



/* Entry: 10b5a2d68; end: 10b5a2d83;  */

void FUN_10b5a2d68(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5a2ae8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a2d84; end: 10b5a2d87;  */

undefined8 FUN_10b5a2d84(undefined8 param_1)

{
  func_0x00010b5a31ac();
  FUN_10b5a2d68(param_1);
  return param_1;
}



/* Entry: 10b5a2d88; end: 10b5a2d9b;  */

void FUN_10b5a2d88(void)

{
  FUN_10b5a2d3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a2d9c; end: 10b5a2da7;  */

undefined ** FUN_10b5a2d9c(void)

{
  return &PTR_DAT_110d14068;
}



/* Entry: 10b5a2da8; end: 10b5a2e9f;  */

void FUN_10b5a2da8(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5a2b38(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b5a2ea0; end: 10b5a2eb7;  */

void FUN_10b5a2ea0(void)

{
  FUN_10b5a2c04();
  func_0x00010b5a3190();
  return;
}



/* Entry: 10b5a2eb8; end: 10b5a2ebb;  */

void FUN_10b5a2eb8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_10b5a30c8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b5a2c7c(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b5a2ebc; end: 10b5a2f4f;  */

void FUN_10b5a2ebc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_10b5a30c8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b5a2c7c(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b5a2f50; end: 10b5a2f6f;  */

void FUN_10b5a2f50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_FUN_110d13e38;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5a2f70; end: 10b5a2f9f;  */

long * FUN_10b5a2f70(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5a2fa0; end: 10b5a30c7;  */

void FUN_10b5a2fa0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d13e38;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5a30c8; end: 10b5a313f;  */

undefined8 * FUN_10b5a30c8(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d13ed8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5a31d4();
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  FUN_10b5a2cc4(puVar1 + 2,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 10b5a3140; end: 10b5a31ff;  */

void FUN_10b5a3140(void)

{
  return;
}



/* Entry: 10b5a3200; end: 10b5a3293;  */

undefined8 * FUN_10b5a3200(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14118;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x000107c2809c(lVar1,param_2);
  param_1[4] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b4f5cb0(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 10b5a3294; end: 10b5a32c3;  */

long FUN_10b5a3294(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a32c4(param_1);
  return param_1;
}



/* Entry: 10b5a32c4; end: 10b5a32fb;  */

void FUN_10b5a32c4(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b4f4b90();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a32fc; end: 10b5a32ff;  */

long FUN_10b5a32fc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a32c4(param_1);
  return param_1;
}



/* Entry: 10b5a3300; end: 10b5a3313;  */

void FUN_10b5a3300(void)

{
  FUN_10b5a3294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a3314; end: 10b5a331f;  */

undefined ** FUN_10b5a3314(void)

{
  return &PTR_DAT_110d14158;
}



/* Entry: 10b5a3320; end: 10b5a3377;  */

void FUN_10b5a3320(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b4f3a9c(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b5a3378; end: 10b5a348b;  */

long * FUN_10b5a3378(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_10b5a33e0;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b5a33e0:
    func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f77daea);
    plVar1 = param_3;
    func_0x00010b5a36ac(param_3,2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 == 0) goto LAB_10b5a3448;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b5a3448;
  func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f77db12);
  plVar1 = param_3;
  func_0x00010b5a36ac(param_3,3);
LAB_10b5a3448:
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
      iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar7;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b5a348c; end: 10b5a3533;  */

long FUN_10b5a348c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5a34c4;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5a34c4:
    lVar3 = 0;
    goto LAB_10b5a34c8;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b5a34c8:
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    FUN_10b4f4390();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5a3534; end: 10b5a3537;  */

void FUN_10b5a3534(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_10b4f5cb0(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_10b4f47a4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b5a3538; end: 10b5a363b;  */

void FUN_10b5a3538(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_10b4f5cb0(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_10b4f47a4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b5a363c; end: 10b5a3643;  */

void FUN_10b5a363c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d14118;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b5a3644; end: 10b5a3697;  */

void FUN_10b5a3644(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d14118;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b5a3698; end: 10b5a36b7;  */

void FUN_10b5a3698(void)

{
  return;
}



/* Entry: 10b5a36b8; end: 10b5a36e7;  */

long FUN_10b5a36b8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a36e8; end: 10b5a36eb;  */

long FUN_10b5a36e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a36ec; end: 10b5a36ff;  */

void FUN_10b5a36ec(void)

{
  FUN_10b5a36b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a3700; end: 10b5a370b;  */

undefined ** FUN_10b5a3700(void)

{
  return &PTR_DAT_110d14250;
}



/* Entry: 10b5a370c; end: 10b5a373b;  */

void FUN_10b5a370c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5a3fc0();
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



/* Entry: 10b5a373c; end: 10b5a37d3;  */

long * FUN_10b5a373c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar1 = param_2;
  func_0x00010b5a3ff4();
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5a3798;
  }
  else if ((int)plVar1 == 0) goto LAB_10b5a3798;
  func_0x00010b5a3fd8();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
LAB_10b5a3798:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 10b5a37d4; end: 10b5a382f;  */

void FUN_10b5a37d4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010b5a3fe0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5a3830; end: 10b5a3833;  */

void FUN_10b5a3830(long param_1,long param_2)

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



/* Entry: 10b5a3834; end: 10b5a3927;  */

void FUN_10b5a3834(long param_1,long param_2)

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



/* Entry: 10b5a3928; end: 10b5a39c7;  */

undefined8 * FUN_10b5a3928(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14210;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5a3fa8();
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  iVar1 = *(int *)(param_3 + 0x2c);
  *(int *)((long)param_1 + 0x2c) = iVar1;
  if (iVar1 == 5) {
    FUN_10b5a3ef8(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  else {
    if (iVar1 != 4) {
      return param_1;
    }
    func_0x00010b5a3eb4(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b5a39c8; end: 10b5a39f7;  */

long FUN_10b5a39c8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a39f8(param_1);
  return param_1;
}



/* Entry: 10b5a39f8; end: 10b5a3a37;  */

void FUN_10b5a39f8(long param_1)

{
  ulong uVar1;
  
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5a38fc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b5a36b8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 4) goto LAB_10b5a38fc;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5a38fc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b5a4550();
    }
  }
  __ZdlPv();
LAB_10b5a38fc:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10b5a3a38; end: 10b5a3a3b;  */

long FUN_10b5a3a38(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a39f8(param_1);
  return param_1;
}



/* Entry: 10b5a3a3c; end: 10b5a3a4f;  */

void FUN_10b5a3a3c(void)

{
  FUN_10b5a39c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a3a50; end: 10b5a3a5b;  */

undefined ** FUN_10b5a3a50(void)

{
  return &PTR_DAT_110d142a0;
}



/* Entry: 10b5a3a5c; end: 10b5a3a9b;  */

void FUN_10b5a3a5c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5a3fc0();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x00010b5a38a0();
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



/* Entry: 10b5a3a9c; end: 10b5a3ba7;  */

long * FUN_10b5a3a9c(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x21;
  int iVar6;
  long unaff_x22;
  undefined8 *puVar7;
  int iVar8;
  
  plVar2 = param_2;
  func_0x00010b5a3ff4();
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5a3ad4;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5a3ad4:
    func_0x00010b5a3fd8();
    param_2 = param_3;
    func_0x00010b5a3fcc(param_3,1);
  }
  uVar1 = *(uint *)(unaff_x21 + 0x2c);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 4) {
    lVar4 = 0x14;
LAB_10b5a3b10:
    func_0x000107c303cc(plVar2,*(long *)(unaff_x21 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x21 + 0x20) + lVar4),param_2,param_3);
    param_2 = plVar2;
  }
  else if (uVar1 == 5) {
    lVar4 = 0x18;
    goto LAB_10b5a3b10;
  }
  puVar7 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] == 0) goto LAB_10b5a3b6c;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5a3b6c;
  func_0x00010b5a3fd8(puVar7);
  param_2 = param_3;
  func_0x00010b5a3fcc(param_3,6);
LAB_10b5a3b6c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
    uVar3 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar4 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar3) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar4,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 10b5a3ba8; end: 10b5a3c5b;  */

long FUN_10b5a3ba8(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00010b5a3fe0();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b5a3bd4;
LAB_10b5a3bc0:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10b5a3bc0;
LAB_10b5a3bd4:
    param_1 = 0;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    param_1 = param_1 + uVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x2c) == 5) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    func_0x00010b5a3c74();
  }
  else {
    if (*(int *)(unaff_x19 + 0x2c) != 4) goto LAB_10b5a3c2c;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    FUN_10b5a3c5c();
  }
  param_1 = param_1 + lVar2 + 1;
LAB_10b5a3c2c:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x28) = (int)param_1;
  return param_1;
}



/* Entry: 10b5a3c5c; end: 10b5a3c8b;  */

void FUN_10b5a3c5c(void)

{
  func_0x00010b5a4768();
  func_0x00010b5a3f80();
  return;
}



/* Entry: 10b5a3c8c; end: 10b5a3c8f;  */

void FUN_10b5a3c8c(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar5 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar5,uVar6);
  }
  uVar6 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar6 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar6 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar6,uVar5);
  }
  iVar2 = *(int *)(param_2 + 0x2c);
  if (iVar2 == 0) goto LAB_10b5a3dc4;
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x00010b5a38a0(param_1);
    }
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  if (iVar2 == 5) {
    if (iVar3 == 5) {
      ppuVar1 = *(undefined ***)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x2c) != 5) {
        ppuVar1 = &PTR_PTR_1133a97d0;
      }
      func_0x00010b5a3834(*(undefined8 *)(param_1 + 0x20),ppuVar1);
      goto LAB_10b5a3dc4;
    }
    FUN_10b5a3ef8(uVar4,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    if (iVar2 != 4) goto LAB_10b5a3dc4;
    if (iVar3 == 4) {
      ppuVar1 = *(undefined ***)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x2c) != 4) {
        ppuVar1 = &PTR_PTR_1133a99d0;
      }
      FUN_10b5a484c(*(undefined8 *)(param_1 + 0x20),ppuVar1);
      goto LAB_10b5a3dc4;
    }
    func_0x00010b5a3eb4(uVar4,*(undefined8 *)(param_2 + 0x20));
  }
  *(ulong *)(param_1 + 0x20) = uVar4;
LAB_10b5a3dc4:
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



/* Entry: 10b5a3c90; end: 10b5a3e0b;  */

void FUN_10b5a3c90(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar5 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar5,uVar6);
  }
  uVar6 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar6 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar6 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar6,uVar5);
  }
  iVar2 = *(int *)(param_2 + 0x2c);
  if (iVar2 == 0) goto LAB_10b5a3dc4;
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      func_0x00010b5a38a0(param_1);
    }
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  if (iVar2 == 5) {
    if (iVar3 == 5) {
      ppuVar1 = *(undefined ***)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x2c) != 5) {
        ppuVar1 = &PTR_PTR_1133a97d0;
      }
      func_0x00010b5a3834(*(undefined8 *)(param_1 + 0x20),ppuVar1);
      goto LAB_10b5a3dc4;
    }
    FUN_10b5a3ef8(uVar4,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    if (iVar2 != 4) goto LAB_10b5a3dc4;
    if (iVar3 == 4) {
      ppuVar1 = *(undefined ***)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x2c) != 4) {
        ppuVar1 = &PTR_PTR_1133a99d0;
      }
      FUN_10b5a484c(*(undefined8 *)(param_1 + 0x20),ppuVar1);
      goto LAB_10b5a3dc4;
    }
    func_0x00010b5a3eb4(uVar4,*(undefined8 *)(param_2 + 0x20));
  }
  *(ulong *)(param_1 + 0x20) = uVar4;
LAB_10b5a3dc4:
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



/* Entry: 10b5a3e0c; end: 10b5a3e1b;  */

void FUN_10b5a3e0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b5a3f9c();
  }
  *puVar1 = &PTR_FUN_110d141c0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b5a3e1c; end: 10b5a3ef7;  */

void FUN_10b5a3e1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b5a3f9c();
  }
  *puVar1 = &PTR_FUN_110d141c0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b5a3ef8; end: 10b5a3f63;  */

undefined8 * FUN_10b5a3ef8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b5a3f9c();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d141c0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5a3fa8();
  }
  param_2 = param_2 + 0x10;
  func_0x000107c2809c(param_2,param_1);
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 10b5a3f64; end: 10b5a4007;  */

void FUN_10b5a3f64(void)

{
  return;
}



/* Entry: 10b5a4008; end: 10b5a4037;  */

long FUN_10b5a4008(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a4038(param_1);
  return param_1;
}



/* Entry: 10b5a4038; end: 10b5a406f;  */

undefined8 FUN_10b5a4038(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x00010006804c(param_1 + 0x10);
  if (!(bool)in_ZR) {
    func_0x000105992fbc(unaff_x19,0x300380020);
  }
  return unaff_x19;
}



/* Entry: 10b5a4070; end: 10b5a4073;  */

long FUN_10b5a4070(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a4038(param_1);
  return param_1;
}



/* Entry: 10b5a4074; end: 10b5a4087;  */

void FUN_10b5a4074(void)

{
  FUN_10b5a4008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a4088; end: 10b5a4093;  */

undefined ** FUN_10b5a4088(void)

{
  return &PTR_DAT_110d143b0;
}



/* Entry: 10b5a4094; end: 10b5a40e3;  */

void FUN_10b5a4094(long param_1)

{
  ulong *puVar1;
  
  func_0x000105991b74(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
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



/* Entry: 10b5a40e4; end: 10b5a430f;  */

long * FUN_10b5a40e4(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *unaff_x22;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  plVar3 = param_2;
  func_0x00010b5a4b8c(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar3 < 0) {
    if (unaff_x22[1] != 0) goto LAB_10b5a4134;
  }
  else if ((int)plVar3 != 0) {
LAB_10b5a4134:
    func_0x00010b5a4b20();
    param_2 = param_3;
    func_0x00010b5a4adc(param_3,1);
  }
  piVar5 = (int *)(param_1 + 0x10);
  if (*piVar5 != 0) {
    if ((*piVar5 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar3 = &lStack_78;
      func_0x00010564c19c(plVar3);
      unaff_x22 = (undefined8 *)&UNK_10f77dbce;
      while (plVar4 = plVar3, lVar11 = lStack_78, lStack_78 != 0) {
        lVar6 = lStack_78 + 8;
        lVar9 = lStack_78 + 0x20;
        func_0x00010b5a4b00();
        lVar7 = (long)*(char *)(lVar11 + 0x1f);
        if (lVar7 < 0) {
          lVar6 = *(long *)(lVar11 + 8);
          lVar7 = *(long *)(lVar11 + 0x10);
        }
        func_0x00010b5a4ae8(lVar6,lVar7);
        piVar5 = (int *)(long)*(char *)(lVar11 + 0x37);
        if ((long)piVar5 < 0) {
          lVar9 = *(long *)(lVar11 + 0x20);
          piVar5 = *(int **)(lVar11 + 0x28);
        }
        func_0x00010b5a4ae8(lVar9);
        plVar3 = &lStack_78;
        func_0x000107c27d54(plVar3);
        param_2 = plVar4;
      }
    }
    else {
      plVar3 = &lStack_78;
      func_0x000105991b98(plVar3);
      unaff_x22 = (undefined8 *)&UNK_10f77dbce;
      puVar1 = apuStack_70[0];
      for (lVar11 = lStack_78 << 3; plVar4 = plVar3, lVar11 != 0; lVar11 = lVar11 + -8) {
        puVar10 = (undefined8 *)*puVar1;
        plVar3 = puVar10 + 3;
        func_0x00010b5a4b00();
        lVar6 = (long)*(char *)((long)puVar10 + 0x17);
        puVar2 = puVar10;
        if (lVar6 < 0) {
          lVar6 = puVar10[1];
          puVar2 = (undefined8 *)*puVar10;
        }
        func_0x00010b5a4ae8(puVar2,lVar6);
        piVar5 = (int *)(long)*(char *)((long)puVar10 + 0x2f);
        if ((long)piVar5 < 0) {
          plVar3 = (long *)puVar10[3];
          piVar5 = (int *)puVar10[4];
        }
        func_0x00010b5a4ae8(plVar3);
        puVar1 = puVar1 + 1;
        param_2 = plVar4;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  func_0x00010b5a4b8c(*(undefined8 *)(param_1 + 0x38));
  if ((long)piVar5 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5a421c;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)piVar5 == 0) goto LAB_10b5a421c;
  func_0x00010b5a4b20(unaff_x22);
  param_2 = param_3;
  func_0x00010b5a4adc(param_3,3);
LAB_10b5a421c:
  uVar8 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar11 = (long)*(char *)(uVar8 + 0x17);
  if (lVar11 < 0) {
    lVar11 = *(long *)(uVar8 + 8);
  }
  plVar3 = param_2;
  if (lVar11 != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,4,uVar8,param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar11 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar11 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      lVar11 = *(long *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    func_0x0001053930c4(param_3,lVar6,lVar11,plVar3);
    plVar3 = param_3;
  }
  return plVar3;
}



/* Entry: 10b5a4310; end: 10b5a43e3;  */

ulong FUN_10b5a4310(long param_1)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar3;
  ulong uVar4;
  long alStack_38 [3];
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  plVar1 = alStack_38;
  func_0x00010564c19c();
  while (alStack_38[0] != 0) {
    lVar2 = alStack_38[0] + 8;
    func_0x000105990b3c(lVar2,alStack_38[0] + 0x20);
    uVar4 = lVar2 + uVar4;
    plVar1 = alStack_38;
    func_0x000107c27d54();
  }
  func_0x00010b5a4b4c(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = plVar1[1];
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5a4b28();
  }
  func_0x00010b5a4b4c(*(undefined8 *)(param_1 + 0x38));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = plVar1[1];
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5a4b28();
  }
  func_0x00010b5a4b4c(*(undefined8 *)(param_1 + 0x40));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = plVar1[1];
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5a4b28();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar4 = lVar2 + uVar4;
  }
  *(int *)(param_1 + 0x48) = (int)uVar4;
  return uVar4;
}



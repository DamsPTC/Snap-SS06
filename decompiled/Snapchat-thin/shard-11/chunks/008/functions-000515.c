/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088f1004; end: 1088f100f;  */

undefined ** FUN_1088f1004(void)

{
  return &PTR_DAT_110a8c658;
}



/* Entry: 1088f1010; end: 1088f104b;  */

void FUN_1088f1010(long param_1)

{
  ulong *puVar1;
  
  FUN_10875d858(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x28);
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



/* Entry: 1088f104c; end: 1088f116f;  */

long * FUN_1088f104c(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088f2c88();
  uVar2 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_2 = 1;
    param_4 = unaff_x19;
    func_0x000107c280a0();
  }
  iVar4 = *(int *)(unaff_x20 + 0x18);
  while (iVar4 != 0) {
    func_0x0001088f2ba8();
    uVar2 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088f2cbc();
    func_0x0001088f2de8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 1088f1170; end: 1088f1173;  */

void FUN_1088f1170(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088f2d98();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10875d8a0(puVar1,param_2 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2ea8();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 1088f1174; end: 1088f119f;  */

long FUN_1088f1174(long param_1)

{
  func_0x0001088f2d58();
  FUN_10875d910(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f11a0; end: 1088f11b3;  */

void FUN_1088f11a0(void)

{
  FUN_1088f1174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f11b4; end: 1088f11bf;  */

undefined ** FUN_1088f11b4(void)

{
  return &PTR_DAT_110a8c6a8;
}



/* Entry: 1088f11c0; end: 1088f11f3;  */

void FUN_1088f11c0(long param_1)

{
  ulong *puVar1;
  
  func_0x00010875d86c(param_1 + 0x10);
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



/* Entry: 1088f11f4; end: 1088f1267;  */

long * FUN_1088f11f4(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x0001088f2ba8();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088f2c98();
    func_0x0001088f2de8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
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



/* Entry: 1088f1268; end: 1088f12c7;  */

long FUN_1088f1268(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001088f2be8();
  while (unaff_x22 != 0) {
    FUN_1088f12c8(*unaff_x21);
    func_0x0001088f2e30();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088f2d8c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1088f12c8; end: 1088f12df;  */

void FUN_1088f12c8(void)

{
  func_0x0001088f1a04();
  FUN_1088f2b8c();
  return;
}



/* Entry: 1088f12e0; end: 1088f12e3;  */

void FUN_1088f12e0(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001088f2d98();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10875d900();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2ea8();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 1088f12e4; end: 1088f131f;  */

long FUN_1088f12e4(long param_1)

{
  func_0x0001088f2d58();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  FUN_1088f2648(param_1 + 0x18);
  return param_1;
}



/* Entry: 1088f1320; end: 1088f1323;  */

long FUN_1088f1320(long param_1)

{
  func_0x0001088f2d58();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  FUN_1088f2648(param_1 + 0x18);
  return param_1;
}



/* Entry: 1088f1324; end: 1088f1337;  */

void FUN_1088f1324(void)

{
  FUN_1088f12e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f1338; end: 1088f1343;  */

undefined ** FUN_1088f1338(void)

{
  return &PTR_DAT_110a8c700;
}



/* Entry: 1088f1344; end: 1088f137f;  */

void FUN_1088f1344(ulong *param_1)

{
  ulong extraout_x8;
  
  *(undefined4 *)(param_1 + 3) = 0;
  if ((param_1[2] & 1) != 0) {
    func_0x0001088f2dd8();
  }
  func_0x0001088f2e98();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1088f1380; end: 1088f150f;  */

byte * FUN_1088f1380(byte *param_1,undefined8 param_2,ulong param_3,byte *param_4)

{
  ulong *puVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x0001088f2c88();
  if ((param_1[0x10] & 1) != 0) {
    func_0x0001088f2c40();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088f2ca4();
    func_0x0001088f2e88();
    func_0x0001088f2cfc();
    param_4 = param_1;
  }
  uVar5 = *(uint *)(unaff_x20 + 0x28);
  if (0 < (int)uVar5) {
    func_0x0001088f2ca4();
    pbVar3 = param_1 + 2;
    *param_1 = 0x1a;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      pbVar3[-1] = (byte)uVar5 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar5;
    puVar6 = *(ulong **)(unaff_x20 + 0x20);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x0001088f2ca4();
      uVar4 = *puVar6;
      pbVar3 = param_1;
      while( true ) {
        param_4 = pbVar3 + 1;
        if (uVar4 < 0x80) break;
        *pbVar3 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        pbVar3 = param_4;
      }
      puVar6 = puVar6 + 1;
      *pbVar3 = (byte)uVar4;
    } while (puVar6 < puVar1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar5 = iVar7 - iVar8;
        param_3 = (ulong)uVar5;
        if (uVar5 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar7;
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 1088f1510; end: 1088f1513;  */

void FUN_1088f1510(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f1584();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f1514; end: 1088f1583;  */

void FUN_1088f1514(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f1584();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f1584; end: 1088f15eb;  */

undefined1  [16] FUN_1088f1584(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    FUN_1088f2a7c(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar8._8_8_ = puVar4;
    auVar8._0_8_ = puVar2;
    return auVar8;
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 1088f15ec; end: 1088f161b;  */

void FUN_1088f15ec(ulong *param_1,ulong *param_2)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f2e0c();
  FUN_1088f1344();
  FUN_1088f2f00();
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f1584();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f161c; end: 1088f1647;  */

undefined8 FUN_1088f161c(undefined8 param_1)

{
  func_0x0001088f2d58();
  FUN_1088f1648(param_1);
  return param_1;
}



/* Entry: 1088f1648; end: 1088f1677;  */

long * FUN_1088f1648(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_108908dd0();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x0001000681a0(plVar1);
  }
  return plVar1;
}



/* Entry: 1088f1678; end: 1088f167b;  */

undefined8 FUN_1088f1678(undefined8 param_1)

{
  func_0x0001088f2d58();
  FUN_1088f1648(param_1);
  return param_1;
}



/* Entry: 1088f167c; end: 1088f168f;  */

void FUN_1088f167c(void)

{
  FUN_1088f161c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f1690; end: 1088f169b;  */

undefined ** FUN_1088f1690(void)

{
  return &PTR_DAT_110a8c758;
}



/* Entry: 1088f169c; end: 1088f16df;  */

void FUN_1088f169c(ulong *param_1)

{
  ulong extraout_x8;
  
  FUN_1086eac18(param_1 + 3);
  if ((param_1[2] & 1) != 0) {
    FUN_108908e1c(param_1[6]);
  }
  func_0x0001088f2e98();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1088f16e0; end: 1088f178b;  */

long * FUN_1088f16e0(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x0001088f2ca4();
    unaff_w21 = (int)*(undefined8 *)(unaff_x20 + 0x38);
    param_4 = (long *)0x8;
    func_0x000107c280a8();
    func_0x0001088f2cfc();
    param_2 = param_1;
  }
  func_0x0001088f2d40();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f2ba8();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088f2cbc();
    func_0x0001088f2de8();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x40);
    param_4 = (long *)0x3;
    func_0x0001088f2d28();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
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



/* Entry: 1088f178c; end: 1088f17fb;  */

void FUN_1088f178c(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001088f2bc4();
  while (unaff_x22 != 0) {
    FUN_1088f17fc(*unaff_x21);
    func_0x0001088f2e30();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088f1814(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x0001088f2dac();
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x0001088f2e48();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f2d8c();
  }
  func_0x0001088f2dc4();
  return;
}



/* Entry: 1088f17fc; end: 1088f182b;  */

void FUN_1088f17fc(void)

{
  FUN_108922c48();
  FUN_1088f2b8c();
  return;
}



/* Entry: 1088f182c; end: 1088f189f;  */

void FUN_1088f182c(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f2c60();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  func_0x000107c2a394();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      FUN_1088f2a98();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x000108908c94();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f18a0; end: 1088f18cb;  */

undefined8 FUN_1088f18a0(undefined8 param_1)

{
  func_0x0001088f2d58();
  FUN_1088f18cc(param_1);
  return param_1;
}



/* Entry: 1088f18cc; end: 1088f18fb;  */

long * FUN_1088f18cc(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001088f2ecc();
  }
  return (long *)(param_1 + 0x18);
}



/* Entry: 1088f18fc; end: 1088f18ff;  */

undefined8 FUN_1088f18fc(undefined8 param_1)

{
  func_0x0001088f2d58();
  FUN_1088f18cc(param_1);
  return param_1;
}



/* Entry: 1088f1900; end: 1088f1913;  */

void FUN_1088f1900(void)

{
  FUN_1088f18a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f1914; end: 1088f191f;  */

undefined ** FUN_1088f1914(void)

{
  return &PTR_DAT_110a8c7b0;
}



/* Entry: 1088f1920; end: 1088f196b;  */

void FUN_1088f1920(ulong *param_1)

{
  ulong extraout_x8;
  
  if (0 < (int)param_1[4]) {
    func_0x0001053936e4(param_1 + 3);
  }
  if ((param_1[2] & 1) != 0) {
    func_0x0001088f2dd8();
  }
  func_0x0001088f2e98();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1088f196c; end: 1088f1a77;  */

long * FUN_1088f196c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088f2c40();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088f2ca4();
    func_0x0001088f2e88();
    func_0x0001088f2cfc();
    param_4 = param_1;
  }
  func_0x0001088f2d40();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f2ba8();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088f2d28(3);
    func_0x0001088f2de8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
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



/* Entry: 1088f1a78; end: 1088f1a7b;  */

void FUN_1088f1a78(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f1aec();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f1a7c; end: 1088f1aeb;  */

void FUN_1088f1a7c(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f1aec();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f1aec; end: 1088f1afb;  */

void FUN_1088f1aec(long *param_1,long param_2)

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



/* Entry: 1088f1afc; end: 1088f1b2b;  */

void FUN_1088f1afc(ulong *param_1,ulong *param_2)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f2e0c();
  FUN_1088f1920();
  FUN_1088f2f00();
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f1aec();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f1b2c; end: 1088f1b5f;  */

void FUN_1088f1b2c(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
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



/* Entry: 1088f1b60; end: 1088f1b83;  */

undefined8 FUN_1088f1b60(undefined8 param_1)

{
  func_0x0001088f2d58();
  return param_1;
}



/* Entry: 1088f1b84; end: 1088f1b87;  */

undefined8 FUN_1088f1b84(undefined8 param_1)

{
  func_0x0001088f2d58();
  return param_1;
}



/* Entry: 1088f1b88; end: 1088f1b9b;  */

void FUN_1088f1b88(void)

{
  FUN_1088f1b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f1b9c; end: 1088f1bbb;  */

undefined ** FUN_1088f1b9c(void)

{
  return &PTR_DAT_110a8c810;
}



/* Entry: 1088f1bbc; end: 1088f1c4b;  */

long * FUN_1088f1bbc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088f2c88();
  plVar2 = param_1;
  if (param_1[2] != 0) {
    func_0x0001088f2ca4();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x0001088f2cfc();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0001088f2ca4();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x0001088f2cfc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088f1c4c; end: 1088f1cb3;  */

ulong FUN_1088f1c4c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 1088f1cb4; end: 1088f1cf7;  */

long FUN_1088f1cb4(long param_1)

{
  func_0x0001088f2d58();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088f1b60();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10891de14();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f1cf8; end: 1088f1cfb;  */

long FUN_1088f1cf8(long param_1)

{
  func_0x0001088f2d58();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088f1b60();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10891de14();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f1cfc; end: 1088f1d0f;  */

void FUN_1088f1cfc(void)

{
  FUN_1088f1cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f1d10; end: 1088f1d1b;  */

undefined ** FUN_1088f1d10(void)

{
  return &PTR_DAT_110a8c860;
}



/* Entry: 1088f1d1c; end: 1088f1d6b;  */

void FUN_1088f1d1c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088f1ba8(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10891de90(param_1[4]);
    }
  }
  func_0x0001088f2e24();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1088f1d6c; end: 1088f1e5b;  */

long * FUN_1088f1d6c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    func_0x0001088f2c98();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x0001088f2cbc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
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



/* Entry: 1088f1e5c; end: 1088f1e8b;  */

void FUN_1088f1e5c(void)

{
  FUN_1088f1c4c();
  FUN_1088f2b8c();
  return;
}



/* Entry: 1088f1e8c; end: 1088f1f1f;  */

void FUN_1088f1e8c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f2c60();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1088f2ad8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088f1b2c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_1088f2b4c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10891d42c();
      }
    }
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088f2cc8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f1f20; end: 1088f1f67;  */

long FUN_1088f1f20(long param_1)

{
  func_0x0001088f2d58();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088f1f68; end: 1088f1f7b;  */

void FUN_1088f1f68(void)

{
  FUN_1088f1f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f1f7c; end: 1088f1f87;  */

undefined ** FUN_1088f1f7c(void)

{
  return &PTR_DAT_110a8c8b0;
}



/* Entry: 1088f1f88; end: 1088f1fd3;  */

void FUN_1088f1f88(ulong *param_1)

{
  ulong extraout_x8;
  
  if (0 < (int)param_1[4]) {
    func_0x0001053936e4(param_1 + 3);
  }
  if ((param_1[2] & 1) != 0) {
    func_0x0001088f2dd8();
  }
  func_0x0001088f2e24();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1088f1fd4; end: 1088f20b7;  */

long * FUN_1088f1fd4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088f2c40();
    param_4 = param_1;
  }
  func_0x0001088f2d40();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f2ba8();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088f2cbc();
    func_0x0001088f2de8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088f2d80();
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



/* Entry: 1088f20b8; end: 1088f20cb;  */

void FUN_1088f20b8(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f20b8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f20cc; end: 1088f2103;  */

long FUN_1088f20cc(long param_1)

{
  func_0x0001088f2d58();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x0001088f2ed4();
  return param_1;
}



/* Entry: 1088f2104; end: 1088f2117;  */

void FUN_1088f2104(void)

{
  FUN_1088f20cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f2118; end: 1088f2123;  */

undefined ** FUN_1088f2118(void)

{
  return &PTR_DAT_110a8c8f0;
}



/* Entry: 1088f2124; end: 1088f2157;  */

void FUN_1088f2124(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  FUN_1088f2ee4();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2dd8();
  }
  func_0x0001088f2e24();
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



/* Entry: 1088f2158; end: 1088f21d3;  */

long * FUN_1088f2158(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088f2c40();
    param_4 = param_1;
  }
  func_0x0001088f2d40();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f2ba8();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x0001088f2cbc();
    func_0x0001088f2de8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088f2d80();
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



/* Entry: 1088f21d4; end: 1088f222f;  */

void FUN_1088f21d4(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x0001088f2bc4();
  while (unaff_x22 != 0) {
    func_0x0001088f2eb8();
    func_0x0001088f2e30();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088f2de0();
    func_0x0001088f2dac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f2d8c();
  }
  func_0x0001088f2dc4();
  return;
}



/* Entry: 1088f2230; end: 1088f2243;  */

void FUN_1088f2230(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f2230();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f2244; end: 1088f227b;  */

long FUN_1088f2244(long param_1)

{
  func_0x0001088f2d58();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x0001088f2ed4();
  return param_1;
}



/* Entry: 1088f227c; end: 1088f228f;  */

void FUN_1088f227c(void)

{
  FUN_1088f2244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f2290; end: 1088f229b;  */

undefined ** FUN_1088f2290(void)

{
  return &PTR_DAT_110a8c930;
}



/* Entry: 1088f229c; end: 1088f22cf;  */

void FUN_1088f229c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  FUN_1088f2ee4();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2dd8();
  }
  func_0x0001088f2e24();
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



/* Entry: 1088f22d0; end: 1088f234b;  */

long * FUN_1088f22d0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088f2c40();
    param_4 = param_1;
  }
  func_0x0001088f2d40();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f2ba8();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x0001088f2cbc();
    func_0x0001088f2de8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088f2d80();
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



/* Entry: 1088f234c; end: 1088f23a7;  */

void FUN_1088f234c(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x0001088f2bc4();
  while (unaff_x22 != 0) {
    func_0x0001088f2eb8();
    func_0x0001088f2e30();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088f2de0();
    func_0x0001088f2dac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f2d8c();
  }
  func_0x0001088f2dc4();
  return;
}



/* Entry: 1088f23a8; end: 1088f23ab;  */

void FUN_1088f23a8(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f2230();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f23ac; end: 1088f23e3;  */

long FUN_1088f23ac(long param_1)

{
  func_0x0001088f2d58();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x0001088f2ed4();
  return param_1;
}



/* Entry: 1088f23e4; end: 1088f23f7;  */

void FUN_1088f23e4(void)

{
  FUN_1088f23ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f23f8; end: 1088f2403;  */

undefined ** FUN_1088f23f8(void)

{
  return &PTR_DAT_110a8c970;
}



/* Entry: 1088f2404; end: 1088f2437;  */

void FUN_1088f2404(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  FUN_1088f2ee4();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2dd8();
  }
  func_0x0001088f2e24();
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



/* Entry: 1088f2438; end: 1088f24b3;  */

long * FUN_1088f2438(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088f2c40();
    param_4 = param_1;
  }
  func_0x0001088f2d40();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f2ba8();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x0001088f2cbc();
    func_0x0001088f2de8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088f2d80();
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



/* Entry: 1088f24b4; end: 1088f250f;  */

void FUN_1088f24b4(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x0001088f2bc4();
  while (unaff_x22 != 0) {
    func_0x0001088f2eb8();
    func_0x0001088f2e30();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088f2de0();
    func_0x0001088f2dac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f2d8c();
  }
  func_0x0001088f2dc4();
  return;
}



/* Entry: 1088f2510; end: 1088f257b;  */

void FUN_1088f2510(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f2230();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f257c; end: 1088f259b;  */

void FUN_1088f257c(void)

{
  func_0x000107c348b8();
  FUN_1088f0f60();
  return;
}



/* Entry: 1088f259c; end: 1088f25c7;  */

long * FUN_1088f259c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001088f2ecc();
  }
  return param_1;
}



/* Entry: 1088f25c8; end: 1088f261b;  */

int * FUN_1088f25c8(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_1087675dc(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_1088f261c(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 1088f261c; end: 1088f2647;  */

undefined1  [16] FUN_1088f261c(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (0 < param_2) {
    *puVar2 = *puVar1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + -1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1088f2648; end: 1088f267b;  */

long FUN_1088f2648(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_1088f267c(param_1);
  }
  return param_1;
}



/* Entry: 1088f267c; end: 1088f268f;  */

void FUN_1088f267c(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f2690; end: 1088f26bb;  */

long * FUN_1088f2690(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001088f2ecc();
  }
  return param_1;
}



/* Entry: 1088f26bc; end: 1088f26db;  */

void FUN_1088f26bc(void)

{
  func_0x000107c348b8();
  FUN_1088f2230();
  return;
}



/* Entry: 1088f26dc; end: 1088f2707;  */

long * FUN_1088f26dc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001088f2ecc();
  }
  return param_1;
}



/* Entry: 1088f2708; end: 1088f27db;  */

void FUN_1088f2708(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088f2dd0();
  }
  else {
    func_0x0001088f2cd8();
  }
  *puVar1 = &PTR_DAT_110a8c298;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  return;
}



/* Entry: 1088f27dc; end: 1088f2803;  */

void FUN_1088f27dc(ulong *param_1)

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



/* Entry: 1088f2804; end: 1088f2883;  */

void FUN_1088f2804(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088f2d98();
  if (param_1 == 0) {
    func_0x0001088f2dd0();
  }
  else {
    func_0x0001088f2cd8();
  }
  func_0x0001088f2e3c();
  func_0x0001088f2e70(&PTR_FUN_110a8c338);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cb0();
  }
  FUN_10875d880(unaff_x21 + 0x10);
  lVar1 = unaff_x20 + 0x28;
  func_0x000107c2809c();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}



/* Entry: 1088f2884; end: 1088f2a7b;  */

void FUN_1088f2884(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x0001088f2d98();
  if (param_1 == 0) {
    __Znwm(0x30);
  }
  else {
    func_0x0001088f2ec0();
  }
  func_0x0001088f2e3c();
  func_0x0001088f2e70(&PTR_DAT_110a8c478);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cb0();
  }
  FUN_10875d8e0(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 1088f2a7c; end: 1088f2a97;  */

void FUN_1088f2a7c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  plVar12 = *(long **)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 1) goto LAB_108767650;
  }
  else {
    plVar12 = (long *)plVar12[-1];
    if ((int)param_2 < 1) {
LAB_108767650:
      uVar13 = 1;
      goto LAB_108767654;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar13 = 0x7fffffff;
      goto LAB_108767654;
    }
  }
  if ((int)param_2 < (int)(uVar1 << 1 | 1)) {
    param_2 = uVar1 * 2 + 1;
  }
  uVar13 = (ulong)param_2;
LAB_108767654:
  plVar8 = (long *)(uVar13 * 8 + 8);
  if (plVar12 == (long *)0x0) {
    uVar13 = (ulong)uVar2;
    func_0x000107c282a8();
    uVar13 = uVar13 - 8 >> 3;
    if (0x7ffffffe < uVar13) {
      uVar13 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar6 = aplStack_58;
    aplStack_58[0] = plVar8;
    func_0x0001053abb00(pplVar6,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar6 != (long **)0x0) {
      plVar12 = (long *)(long)*(char *)((long)pplVar6 + 0x17);
      pplVar9 = pplVar6;
      if ((long)plVar12 < 0) {
        pplVar9 = (long **)*pplVar6;
        plVar12 = pplVar6[1];
      }
      func_0x00010bdb2a08(aplStack_58,&UNK_10f317bd9,0x10a,pplVar9,plVar12);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar6 = aplStack_58;
      func_0x00010ae6c700();
      plVar12 = pplVar6[1] + -1;
      if (*plVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar12);
        return;
      }
      uVar13 = (long)*(int *)((long)pplVar6 + 4) * 8 + 8;
      ppuVar4 = &PTR___tlv_bootstrap_11340dac8;
      (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar12);
      if (ppuVar4[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar5 = ppuVar4[2];
      uVar10 = 0x3b - LZCOUNT(uVar13);
      bVar3 = puVar5[0x50];
      if (uVar10 < bVar3) {
        lVar11 = *(long *)(puVar5 + 0x58);
        *plVar12 = *(long *)(lVar11 + uVar10 * 8);
        *(long **)(lVar11 + uVar10 * 8) = plVar12;
      }
      else {
        if (bVar3 == 0) {
          lVar11 = 0;
        }
        else {
          _memmove(plVar12,*(undefined8 *)(puVar5 + 0x58),(ulong)bVar3 << 3);
          lVar11 = (ulong)(byte)puVar5[0x50] << 3;
        }
        uVar10 = uVar13 >> 3;
        if (0 < (long)((uVar13 & 0xfffffffffffffff8) - lVar11)) {
          _bzero((long)plVar12 + lVar11);
        }
        *(long **)(puVar5 + 0x58) = plVar12;
        if (0x3f < uVar10) {
          uVar10 = 0x40;
        }
        puVar5[0x50] = (char)uVar10;
      }
      return;
    }
    plVar7 = plVar12;
    func_0x0001053abb54(plVar12,plVar8,1);
    plVar8 = plVar7;
  }
  *plVar8 = (long)plVar12;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      _memcpy(plVar8 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 3);
    }
    FUN_108767750(param_1);
  }
  param_1[1] = (uint)uVar13;
  *(long **)(param_1 + 2) = plVar8 + 1;
  return;
}



/* Entry: 1088f2a98; end: 1088f2ad7;  */

undefined8 * FUN_1088f2a98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001088f2e0c();
  if (param_1 == 0) {
    lVar1 = 0x48;
    __Znwm();
  }
  else {
    lVar1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  lVar2 = unaff_x20;
  puVar3 = unaff_x19;
  func_0x000107c34994();
  *(long *)(lVar1 + 8) = lVar2;
  *unaff_x19 = &PTR_DAT_110a91050;
  if ((puVar3[1] & 1) != 0) {
    func_0x00010890add0();
  }
  FUN_108909cf8(unaff_x19 + 2,unaff_x20,unaff_x19 + 2);
  func_0x000108909d18(unaff_x19 + 5,unaff_x20,unaff_x19 + 5);
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return unaff_x19;
}



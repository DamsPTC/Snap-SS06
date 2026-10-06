/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b571604; end: 10b57163b;  */

long FUN_10b571604(long param_1)

{
  func_0x000107c39e78();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b57163c; end: 10b57164f;  */

void FUN_10b57163c(void)

{
  FUN_10b571604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b571650; end: 10b57165b;  */

undefined ** FUN_10b571650(void)

{
  return &PTR_DAT_110d0b858;
}



/* Entry: 10b57165c; end: 10b57168f;  */

void FUN_10b57165c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5732a4();
  if (in_NG == in_OV) {
    func_0x00010b5733f4();
  }
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



/* Entry: 10b571690; end: 10b57174f;  */

long * FUN_10b571690(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b572dec();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b572d94();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x00010b572ed8();
    func_0x00010b573354();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b571750; end: 10b571763;  */

void FUN_10b571750(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b571750();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b571764; end: 10b571793;  */

long FUN_10b571764(long param_1)

{
  func_0x000107c39e78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return param_1;
}



/* Entry: 10b571794; end: 10b5717a7;  */

void FUN_10b571794(void)

{
  FUN_10b571764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5717a8; end: 10b5717c7;  */

undefined ** FUN_10b5717a8(void)

{
  return &PTR_DAT_110d0b8a0;
}



/* Entry: 10b5717c8; end: 10b57184f;  */

long * FUN_10b5717c8(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  int iVar3;
  int iVar4;
  
  func_0x00010b572eac();
  if (*(int *)(param_1 + 0x1c) == 1) {
    func_0x00010b572ee4();
    func_0x00010b5733a4();
    if (extraout_w8 == 1) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
    }
    else {
      lVar2 = 0;
    }
    func_0x00010b5733c8();
    param_4 = (long *)(lVar2 << 1 ^ lVar2 >> 0x3f);
    func_0x000107c280ac(param_4,param_1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b571850; end: 10b57189f;  */

void FUN_10b571850(void)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b57315c();
  if (extraout_w8 == 1) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
    FUN_10b56f4e0();
  }
  else {
    iVar1 = 0;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5718a0; end: 10b5719c3;  */

void FUN_10b5718a0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) != iVar1) {
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    if (iVar1 == 1) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
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



/* Entry: 10b5719c4; end: 10b571a0f;  */

undefined8 * FUN_10b5719c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_10b572760(param_1,param_3);
  return param_1;
}



/* Entry: 10b571a10; end: 10b571a53;  */

long FUN_10b571a10(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x500400020,0);
  }
  return param_1;
}



/* Entry: 10b571a54; end: 10b571a73;  */

void FUN_10b571a54(void)

{
  func_0x00010b573064();
  FUN_10b56d9ec();
  return;
}



/* Entry: 10b571a74; end: 10b571a9b;  */

void FUN_10b571a74(void)

{
  long extraout_x8;
  
  func_0x00010b573414();
  if (extraout_x8 != 0) {
    func_0x00010b573260();
  }
  return;
}



/* Entry: 10b571a9c; end: 10b571abb;  */

void FUN_10b571a9c(void)

{
  func_0x00010b573064();
  FUN_10b56de1c();
  return;
}



/* Entry: 10b571abc; end: 10b571ae3;  */

void FUN_10b571abc(void)

{
  long extraout_x8;
  
  func_0x00010b573414();
  if (extraout_x8 != 0) {
    func_0x00010b573260();
  }
  return;
}



/* Entry: 10b571ae4; end: 10b571b03;  */

void FUN_10b571ae4(void)

{
  func_0x00010b573064();
  FUN_10b56ea64();
  return;
}



/* Entry: 10b571b04; end: 10b571b2b;  */

void FUN_10b571b04(void)

{
  long extraout_x8;
  
  func_0x00010b573414();
  if (extraout_x8 != 0) {
    func_0x00010b573260();
  }
  return;
}



/* Entry: 10b571b2c; end: 10b571b53;  */

void FUN_10b571b2c(void)

{
  long extraout_x8;
  
  func_0x00010b573414();
  if (extraout_x8 != 0) {
    func_0x00010b573260();
  }
  return;
}



/* Entry: 10b571b54; end: 10b571b73;  */

void FUN_10b571b54(void)

{
  func_0x00010b573064();
  FUN_10b57105c();
  return;
}



/* Entry: 10b571b74; end: 10b571b9b;  */

void FUN_10b571b74(void)

{
  long extraout_x8;
  
  func_0x00010b573414();
  if (extraout_x8 != 0) {
    func_0x00010b573260();
  }
  return;
}



/* Entry: 10b571b9c; end: 10b571bc3;  */

void FUN_10b571b9c(void)

{
  long extraout_x8;
  
  func_0x00010b573414();
  if (extraout_x8 != 0) {
    func_0x00010b573260();
  }
  return;
}



/* Entry: 10b571bc4; end: 10b572207;  */

void FUN_10b571bc4(long param_1)

{
  if (param_1 == 0) {
    func_0x00010b57312c();
  }
  else {
    func_0x00010b572f68();
  }
  func_0x00010b5731a4(&PTR_DAT_110d0a348);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b572208; end: 10b572267;  */

/* WARNING: Removing unreachable block (ram,0x00010055ea88) */
/* WARNING: Removing unreachable block (ram,0x00010055eac8) */
/* WARNING: Removing unreachable block (ram,0x00010055ea90) */
/* WARNING: Removing unreachable block (ram,0x00010055eabc) */
/* WARNING: Removing unreachable block (ram,0x000104c61180) */
/* WARNING: Removing unreachable block (ram,0x000104c611a4) */
/* WARNING: Removing unreachable block (ram,0x000104c61188) */
/* WARNING: Removing unreachable block (ram,0x000104c611a8) */
/* WARNING: Removing unreachable block (ram,0x000104c611bc) */
/* WARNING: Removing unreachable block (ram,0x000104c611c4) */
/* WARNING: Removing unreachable block (ram,0x000104c611d0) */
/* WARNING: Removing unreachable block (ram,0x000104c61160) */
/* WARNING: Removing unreachable block (ram,0x000104c61170) */
/* WARNING: Removing unreachable block (ram,0x00010055ead0) */

void FUN_10b572208(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x25;
  undefined8 *puVar5;
  
  if (*(int *)((long)param_1 + 4) == 1) {
    return;
  }
  if (param_1[3] == 0) {
    puVar2 = param_1;
    func_0x000107c39c34(param_1,0x10500400020,0);
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      puVar4 = *(undefined8 **)(unaff_x22 + unaff_x23 * 8);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000107c39c30();
        puVar4 = puVar2;
      }
      while (puVar4 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar4;
        puVar2 = puVar4 + 1;
        func_0x000107c60ca0();
        func_0x000107c39c3c();
        func_0x00010063c2d0();
        puVar4 = puVar5;
      }
    }
  }
  uVar1 = *(uint *)((long)param_1 + 4);
  puVar2 = (undefined8 *)param_1[2];
  uVar3 = (ulong)uVar1;
  while (0 < (long)uVar3) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 1;
  }
  *(undefined4 *)param_1 = 0;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 10b572268; end: 10b572387;  */

void FUN_10b572268(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b573078();
  if (param_1 == 0) {
    func_0x00010b57312c();
  }
  else {
    func_0x00010b572f68();
  }
  func_0x00010b573360();
  func_0x00010b573384(&PTR_FUN_110d0a988);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    FUN_10b56b330();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_10b56b330();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x19;
  return;
}



/* Entry: 10b572388; end: 10b5723d7;  */

long FUN_10b572388(long param_1)

{
  func_0x00010b573328();
  if (param_1 == 0) {
    func_0x00010b573174();
  }
  else {
    func_0x00010b5730d0();
  }
  func_0x00010b573250(&PTR_DAT_110d0a618);
  FUN_10b56c5d0();
  return param_1;
}



/* Entry: 10b5723d8; end: 10b572427;  */

long FUN_10b5723d8(long param_1)

{
  func_0x00010b573328();
  if (param_1 == 0) {
    func_0x00010b573174();
  }
  else {
    func_0x00010b5730d0();
  }
  func_0x00010b573250(&PTR_DAT_110d0a488);
  func_0x00010b56c5e0();
  return param_1;
}



/* Entry: 10b572428; end: 10b572477;  */

long FUN_10b572428(long param_1)

{
  func_0x00010b573328();
  if (param_1 == 0) {
    func_0x00010b573174();
  }
  else {
    func_0x00010b5730d0();
  }
  func_0x00010b573250(&PTR_DAT_110d0a438);
  func_0x00010b56c5f0();
  return param_1;
}



/* Entry: 10b572478; end: 10b5724df;  */

void FUN_10b572478(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b5731dc();
  if (param_1 == 0) {
    func_0x00010b573084();
  }
  else {
    func_0x00010b57308c();
  }
  func_0x00010b573468();
  func_0x00010b573480(&PTR_DAT_110d0ad48);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  FUN_10b56afa0(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x2c) = 0;
  *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10b5724e0; end: 10b57252f;  */

long FUN_10b5724e0(long param_1)

{
  func_0x00010b573328();
  if (param_1 == 0) {
    func_0x00010b573174();
  }
  else {
    func_0x00010b5730d0();
  }
  func_0x00010b573250(&PTR_DAT_110d0a4d8);
  FUN_10b56c63c();
  return param_1;
}



/* Entry: 10b572530; end: 10b57269f;  */

void FUN_10b572530(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b573078();
  if (param_1 == 0) {
    func_0x00010b573084();
  }
  else {
    func_0x00010b572ecc();
  }
  func_0x00010b573360();
  func_0x00010b573384(&PTR_DAT_110d0a6b8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  func_0x00010b573440();
  FUN_10b571a54();
  func_0x00010b5735ac();
  return;
}



/* Entry: 10b5726a0; end: 10b572743;  */

ulong * FUN_10b5726a0(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long alStack_48 [3];
  
  uVar1 = *param_2;
  *param_1 = (ulong)uVar1;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    plVar2 = (long *)((ulong)uVar1 << 3);
    __Znam();
    param_1[1] = (ulong)plVar2;
    func_0x00010564c19c(alStack_48,param_2);
    while (alStack_48[0] != 0) {
      *plVar2 = alStack_48[0] + 8;
      func_0x00010b57319c();
      plVar2 = plVar2 + 1;
    }
    func_0x000105991c2c(param_1[1],param_1[1] + *param_1 * 8);
  }
  return param_1;
}



/* Entry: 10b572744; end: 10b57275f;  */

long FUN_10b572744(long param_1)

{
  long extraout_x8;
  
  FUN_10b56f3e0();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b572760; end: 10b572843;  */

void FUN_10b572760(int *param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lStack_58;
  
  func_0x00010b5731cc();
  while (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 8);
    func_0x000107c28188();
    func_0x00010b5731b0();
    if (piVar1 == (int *)0x0) {
      uVar2 = (ulong)(*param_1 + 1);
      piVar1 = param_1;
      func_0x000107c27d60(param_1,uVar2);
      if ((int)piVar1 != 0) {
        func_0x000107c28188(lStack_58 + 8);
        func_0x00010b5731b0();
        param_2 = uVar2;
      }
      piVar1 = param_1;
      func_0x000107c27d64(param_1,0x40);
      func_0x000107c2821c(piVar1 + 2,*(undefined8 *)(param_1 + 6),lStack_58 + 8);
      uVar3 = *(undefined8 *)(param_1 + 6);
      *(undefined ***)(piVar1 + 8) = &PTR_DAT_110d0a9d8;
      *(undefined8 *)(piVar1 + 10) = uVar3;
      piVar1[0xe] = 0;
      piVar1[0xf] = 0;
      func_0x000107c27d68(param_1,param_2,piVar1);
      *param_1 = *param_1 + 1;
    }
    param_2 = lStack_58 + 0x20;
    func_0x00010b56f8e8(piVar1 + 8);
    func_0x00010b57319c();
  }
  return;
}



/* Entry: 10b572844; end: 10b572933;  */

undefined8 * FUN_10b572844(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w8;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b573094();
  }
  else {
    func_0x00010b57309c();
  }
  puVar2 = puVar1 + 1;
  *puVar2 = param_1;
  *puVar1 = &PTR_FUN_110d0aca8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b572e1c();
  }
  func_0x00010b573430();
  if (extraout_w8 == 2) {
    func_0x00010b5735b8();
    FUN_10b5729c0();
  }
  else {
    if (extraout_w8 != 1) {
      return puVar1;
    }
    func_0x00010b5735b8();
    FUN_10b572934();
  }
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 10b572934; end: 10b5729bf;  */

void FUN_10b572934(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010b5731dc();
  if (param_1 == 0) {
    func_0x00010b5734f0();
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b573468();
  func_0x00010b573480(&PTR_FUN_110d0abb8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  func_0x00010598fd00(unaff_x21 + 0x10);
  FUN_10b571ae4(unaff_x21 + 0x28);
  *(undefined4 *)(unaff_x21 + 0x50) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x21 + 0x40) = uVar1;
  return;
}



/* Entry: 10b5729c0; end: 10b572a1f;  */

undefined8 * FUN_10b5729c0(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b573328();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b57312c();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b573134();
  }
  *param_1 = &PTR_DAT_110d0a348;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10b56e704();
  return param_1;
}



/* Entry: 10b572a20; end: 10b572be3;  */

void FUN_10b572a20(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010b573078();
  if (param_1 == 0) {
    func_0x00010b57339c();
  }
  else {
    func_0x00010b573100();
  }
  func_0x00010b573360();
  func_0x00010b573384(&PTR_FUN_110d0aa78);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  func_0x00010b573440();
  FUN_10b5719c4();
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}



/* Entry: 10b572be4; end: 10b572c1b;  */

long FUN_10b572be4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5731dc();
  if (param_1 == 0) {
    func_0x00010b573094();
  }
  else {
    func_0x00010b57309c();
    param_1 = unaff_x20;
  }
  func_0x00010b573030();
  func_0x000107c39ea4(&PTR_DAT_110d0a9d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  func_0x00010b573430();
  func_0x00010b5735d8();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b56f0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bf136)[extraout_x8_00] * 4 + 0x10b56f0b4))();
    return param_1;
  }
  return unaff_x19;
}



/* Entry: 10b572c1c; end: 10b572c9f;  */

void FUN_10b572c1c(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b573078();
  if (param_1 == 0) {
    func_0x00010b57339c();
  }
  else {
    func_0x00010b573100();
  }
  func_0x00010b573360();
  func_0x00010b573384(&PTR_FUN_110d0a708);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x19;
  FUN_10b570c4c((undefined8 *)(unaff_x21 + 0x10),unaff_x20 + 0x10);
  lVar1 = unaff_x20 + 0x28;
  func_0x000107c2809c();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}



/* Entry: 10b572ca0; end: 10b572d0f;  */

undefined8 * FUN_10b572ca0(undefined8 *param_1)

{
  int iVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010b573328();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b573094();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b57309c();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_FUN_110d0a668;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b572e1c();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  }
  return param_1;
}



/* Entry: 10b572d10; end: 10b5735ef;  */

void FUN_10b572d10(void)

{
  return;
}



/* Entry: 10b5735f0; end: 10b573677;  */

void FUN_10b5735f0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b57364c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b573ea0();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b57364c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b57364c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b573c74();
    }
  }
  __ZdlPv();
LAB_10b57364c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b573678; end: 10b5736a3;  */

undefined8 FUN_10b573678(undefined8 param_1)

{
  func_0x00010b5741d0();
  FUN_10b5736a4(param_1);
  return param_1;
}



/* Entry: 10b5736a4; end: 10b5736b7;  */

void FUN_10b5736a4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b57364c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b573ea0();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b57364c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b57364c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b573c74();
    }
  }
  __ZdlPv();
LAB_10b57364c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b5736b8; end: 10b5736cb;  */

void FUN_10b5736b8(void)

{
  FUN_10b573678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5736cc; end: 10b5736df;  */

long FUN_10b5736cc(long param_1)

{
  func_0x00010b5741d0();
  FUN_10b573fac(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5736e0; end: 10b573817;  */

void FUN_10b5736e0(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5735f0();
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



/* Entry: 10b573818; end: 10b573933;  */

void FUN_10b573818(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_10b5738f8;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b5735f0(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_11339cfb8;
      }
      FUN_10b57397c(*(undefined8 *)(param_1 + 0x10),ppuVar1[1]);
      goto LAB_10b5738f8;
    }
    FUN_10b574144(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_10b5738f8;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_11339cfd0;
      }
      FUN_10b573934(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_10b5738f8;
    }
    func_0x00010b574100(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_10b5738f8:
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



/* Entry: 10b573934; end: 10b57397b;  */

void FUN_10b573934(long param_1,long param_2)

{
  FUN_10b573e38(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b57397c; end: 10b573993;  */

void FUN_10b57397c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 10b573994; end: 10b5739bf;  */

long FUN_10b573994(long param_1)

{
  func_0x00010b5741d0();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5739c0; end: 10b5739c3;  */

long FUN_10b5739c0(long param_1)

{
  func_0x00010b5741d0();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5739c4; end: 10b5739d7;  */

void FUN_10b5739c4(void)

{
  FUN_10b573994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5739d8; end: 10b5739e3;  */

undefined ** FUN_10b5739d8(void)

{
  return &PTR_DAT_110d0bdd8;
}



/* Entry: 10b5739e4; end: 10b573a1f;  */

void FUN_10b5739e4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
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



/* Entry: 10b573a20; end: 10b573ae7;  */

long * FUN_10b573a20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b5741e8();
  uVar4 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    param_4 = unaff_x19;
    func_0x000107c280a0();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    param_4 = unaff_x19;
    func_0x000107c282cc();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x20);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280b8(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      uVar4 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar4;
        uVar1 = iVar7 - iVar8;
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 10b573ae8; end: 10b573c13;  */

void FUN_10b573ae8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b573b20;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b573b20:
    iVar1 = 0;
    goto LAB_10b573b24;
  }
  func_0x000107c28098();
  iVar1 = (int)uVar2 + 1;
LAB_10b573b24:
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10b573c14; end: 10b573c73;  */

undefined8 * FUN_10b573c14(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0bcf8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b573f80(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b573c74; end: 10b573c9f;  */

long FUN_10b573c74(long param_1)

{
  func_0x00010b5741d0();
  FUN_10b573fac(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b573ca0; end: 10b573cb3;  */

void FUN_10b573ca0(void)

{
  FUN_10b573c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b573cb4; end: 10b573cbf;  */

undefined ** FUN_10b573cb4(void)

{
  return &PTR_DAT_110d0be30;
}



/* Entry: 10b573cc0; end: 10b573cff;  */

void FUN_10b573cc0(long param_1)

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



/* Entry: 10b573d00; end: 10b573e37;  */

long * FUN_10b573d00(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b5741e8();
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_4 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x24));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)uVar4;
        uVar2 = iVar6 - iVar7;
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 10b573e38; end: 10b573e4b;  */

void FUN_10b573e38(long param_1,long param_2)

{
  FUN_10b573e38(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b573e4c; end: 10b573e83;  */

void FUN_10b573e4c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  FUN_10b573cc0();
  FUN_10b573e38(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b573e84; end: 10b573e9f;  */

undefined1  [16] FUN_10b573e84(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 10b573ea0; end: 10b573ec3;  */

undefined8 FUN_10b573ea0(undefined8 param_1)

{
  func_0x00010b5741d0();
  return param_1;
}



/* Entry: 10b573ec4; end: 10b573ed7;  */

void FUN_10b573ec4(void)

{
  FUN_10b573ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b573ed8; end: 10b573f7f;  */

undefined ** FUN_10b573ed8(void)

{
  return &PTR_DAT_110d0be80;
}



/* Entry: 10b573f80; end: 10b573fab;  */

undefined8 * FUN_10b573f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b573e38(param_1,param_3);
  return param_1;
}



/* Entry: 10b573fac; end: 10b573fdb;  */

long * FUN_10b573fac(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b573fdc; end: 10b574143;  */

void FUN_10b573fdc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0bc58;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  return;
}



/* Entry: 10b574144; end: 10b5741b3;  */

undefined8 * FUN_10b574144(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110d0bca8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_10b57397c();
  return puVar1;
}



/* Entry: 10b5741b4; end: 10b57423b;  */

void FUN_10b5741b4(void)

{
  return;
}



/* Entry: 10b57423c; end: 10b57425f;  */

undefined8 FUN_10b57423c(undefined8 param_1)

{
  func_0x00010b575b08();
  return param_1;
}



/* Entry: 10b574260; end: 10b5742ab;  */

undefined8 * FUN_10b574260(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d0bf40;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b574200(param_1,param_3);
  return param_1;
}



/* Entry: 10b5742ac; end: 10b5742af;  */

undefined8 FUN_10b5742ac(undefined8 param_1)

{
  func_0x00010b575b08();
  return param_1;
}



/* Entry: 10b5742b0; end: 10b5742c3;  */

void FUN_10b5742b0(void)

{
  FUN_10b57423c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5742c4; end: 10b5742e3;  */

undefined ** FUN_10b5742c4(void)

{
  return &PTR_DAT_110d0c1b0;
}



/* Entry: 10b5742e4; end: 10b574373;  */

long * FUN_10b5742e4(undefined8 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  func_0x00010b575a74();
  puVar2 = param_1;
  if (param_1[2] != 0) {
    func_0x00010b575aec();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = (undefined8 *)0x9;
    func_0x000107c280a8(9,param_1);
    param_4 = puVar2 + 1;
    *puVar2 = uVar5;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b575aec();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar3 = (undefined8 *)0x11;
    func_0x000107c280a8(0x11,puVar2);
    param_4 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b48();
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
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
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



/* Entry: 10b574374; end: 10b5743bf;  */

long FUN_10b574374(long param_1)

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



/* Entry: 10b5743c0; end: 10b5743eb;  */

long FUN_10b5743c0(long param_1)

{
  func_0x00010b575b08();
  FUN_10b57558c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5743ec; end: 10b5743ef;  */

long FUN_10b5743ec(long param_1)

{
  func_0x00010b575b08();
  FUN_10b57558c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5743f0; end: 10b574403;  */

void FUN_10b5743f0(void)

{
  FUN_10b5743c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b574404; end: 10b57440f;  */

undefined ** FUN_10b574404(void)

{
  return &PTR_DAT_110d0c1e8;
}



/* Entry: 10b574410; end: 10b574443;  */

void FUN_10b574410(long param_1)

{
  ulong *puVar1;
  
  FUN_10b575760(param_1 + 0x10);
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



/* Entry: 10b574444; end: 10b5744ab;  */

long * FUN_10b574444(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b575a18();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b575a34();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x00010b575a68();
    func_0x00010b575c28();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b48();
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



/* Entry: 10b5744ac; end: 10b5744fb;  */

void FUN_10b5744ac(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5759f4();
  while (unaff_x22 != 0) {
    FUN_10b5744fc(*unaff_x21);
    func_0x00010b575c10();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b575b60();
  }
  func_0x00010b575c04();
  return;
}



/* Entry: 10b5744fc; end: 10b574513;  */

void FUN_10b5744fc(void)

{
  FUN_10b574374();
  FUN_10b5759cc();
  return;
}



/* Entry: 10b574514; end: 10b574517;  */

void FUN_10b574514(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b575ad0();
  FUN_10b574548();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b2c();
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



/* Entry: 10b574518; end: 10b574547;  */

void FUN_10b574518(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b575ad0();
  FUN_10b574548();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b575b2c();
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



/* Entry: 10b574548; end: 10b574557;  */

void FUN_10b574548(long *param_1,long param_2)

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



/* Entry: 10b574558; end: 10b574583;  */

long FUN_10b574558(long param_1)

{
  func_0x00010b575b08();
  FUN_10b57558c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b574584; end: 10b574587;  */

long FUN_10b574584(long param_1)

{
  func_0x00010b575b08();
  FUN_10b57558c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b574588; end: 10b57459b;  */

void FUN_10b574588(void)

{
  FUN_10b574558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57459c; end: 10b5745a7;  */

undefined ** FUN_10b57459c(void)

{
  return &PTR_DAT_110d0c220;
}



/* Entry: 10b5745a8; end: 10b5745db;  */

void FUN_10b5745a8(long param_1)

{
  ulong *puVar1;
  
  FUN_10b575760(param_1 + 0x10);
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



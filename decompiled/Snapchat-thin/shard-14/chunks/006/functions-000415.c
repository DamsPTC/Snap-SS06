/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b53aad8; end: 10b53ab6b;  */

void FUN_10b53aad8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d01c30;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b53ab6c; end: 10b53ab8b;  */

void FUN_10b53ab6c(void)

{
  return;
}



/* Entry: 10b53ab8c; end: 10b53ad13;  */

undefined8 * FUN_10b53ab8c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01db0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000107c282d4(param_1 + 3,param_2,param_3 + 0x18);
  param_1[7] = 0x100000000;
  param_1[6] = 0x100000000;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = &DAT_10e5b4a18;
  param_1[9] = param_2;
  FUN_10b53b918(param_1 + 6,param_3 + 0x30);
  param_1[0xb] = 0x100000000;
  param_1[10] = 0x100000000;
  param_1[0xc] = &DAT_10e5b4a18;
  param_1[0xd] = param_2;
  FUN_10b53b9d0(param_1 + 10,param_3 + 0x50);
  FUN_10b504dcc(param_1 + 0xe,param_2,param_3 + 0x70);
  lVar2 = param_3 + 0x90;
  func_0x000107c2809c(lVar2,param_2);
  param_1[0x12] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b537494(param_2,*(undefined8 *)(param_3 + 0x98));
  }
  param_1[0x13] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b53b890(param_2,*(undefined8 *)(param_3 + 0xa0));
  }
  param_1[0x14] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b53b8d4(param_2,*(undefined8 *)(param_3 + 0xa8));
  }
  param_1[0x15] = param_2;
  param_1[0x16] = *(undefined8 *)(param_3 + 0xb0);
  return param_1;
}



/* Entry: 10b53ad14; end: 10b53ad43;  */

long FUN_10b53ad14(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53ad44(param_1);
  return param_1;
}



/* Entry: 10b53ad44; end: 10b53ad9b;  */

long FUN_10b53ad44(long param_1)

{
  func_0x000107c30258(param_1 + 0x90);
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b5047f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b50575c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10b59c398();
  }
  __ZdlPv();
  FUN_10b504e1c(param_1 + 0x70);
  FUN_10b53b788(param_1 + 0x50);
  FUN_10b53b748(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b53ad9c; end: 10b53ad9f;  */

long FUN_10b53ad9c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53ad44(param_1);
  return param_1;
}



/* Entry: 10b53ada0; end: 10b53adb3;  */

void FUN_10b53ada0(void)

{
  FUN_10b53ad14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53adb4; end: 10b53adef;  */

undefined ** FUN_10b53adb4(void)

{
  return &PTR_DAT_110d01df0;
}



/* Entry: 10b53adf0; end: 10b53aebb;  */

void FUN_10b53adf0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x34) != 1) {
    func_0x00010b53bbc4(param_1 + 0x30,0x10500800020);
  }
  if (*(int *)(param_1 + 0x54) != 1) {
    func_0x00010b53bbc4(param_1 + 0x50,0x10500500020);
  }
  func_0x00010b504e9c(param_1 + 0x70);
  func_0x000107c3025c(param_1 + 0x90);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b50488c(*(undefined8 *)(param_1 + 0x98));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b505818(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b59c3f0(*(undefined8 *)(param_1 + 0xa8));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xb0) = 0;
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



/* Entry: 10b53aebc; end: 10b53b307;  */

byte ***** FUN_10b53aebc(byte *****param_1,byte *****param_2,byte *****param_3)

{
  byte ****ppppbVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte *****pppppbVar4;
  byte *****pppppbVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte ****ppppbVar12;
  ulong uVar13;
  byte ****ppppbStack_80;
  byte ***pppbStack_78;
  undefined1 auStack_70 [16];
  
  pppppbVar4 = param_1;
  if (param_1[0x16] != (byte ****)0x0) {
    pppppbVar4 = param_3;
    func_0x000105991a14(param_3,param_1[0x16],param_2);
    param_2 = pppppbVar4;
  }
  puVar11 = (undefined8 *)((ulong)param_1[0x12] & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar11[1];
    if (lVar6 == 0) goto LAB_10b53af50;
    puVar3 = (undefined8 *)*puVar11;
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10b53af50;
  }
  func_0x000107c303d4(puVar3,lVar6,1,&UNK_10f7780e2);
  pppppbVar4 = param_3;
  func_0x000107c280a0(param_3,2,puVar11,param_2);
  param_2 = pppppbVar4;
LAB_10b53af50:
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    pppppbVar4 = (byte *****)0x3;
    func_0x00010b53bb60(3,param_1[0x13],*(undefined4 *)((long)param_1[0x13] + 0x1c));
    param_2 = pppppbVar4;
  }
  uVar10 = *(uint *)(param_1 + 5);
  if (uVar10 != 0) {
    func_0x00010b53bc18();
    pbVar9 = (byte *)((long)pppppbVar4 + 2);
    *(byte *)pppppbVar4 = 0x22;
    for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
      pbVar9[-1] = (byte)uVar10 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    pbVar9[-1] = (byte)uVar10;
    ppppbVar12 = param_1[4];
    ppppbVar1 = (byte ****)((long)ppppbVar12 + (long)*(int *)(param_1 + 3) * 4);
    do {
      func_0x00010b53bc18();
      uVar8 = (ulong)*(int *)ppppbVar12;
      pppppbVar5 = pppppbVar4;
      while( true ) {
        param_2 = (byte *****)((long)pppppbVar5 + 1);
        if (uVar8 < 0x80) break;
        *(byte *)pppppbVar5 = (byte)uVar8 | 0x80;
        uVar8 = uVar8 >> 7;
        pppppbVar5 = param_2;
      }
      ppppbVar12 = (byte ****)((long)ppppbVar12 + 4);
      *(byte *)pppppbVar5 = (byte)uVar8;
    } while (ppppbVar12 < ppppbVar1);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pppppbVar4 = (byte *****)0x5;
    func_0x00010b53bb60(5,param_1[0x14],*(undefined4 *)((long)param_1[0x14] + 0x14));
    param_2 = pppppbVar4;
  }
  uVar10 = *(uint *)(param_1 + 6);
  uVar8 = (ulong)uVar10;
  if (uVar10 != 0) {
    if ((uVar10 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b53bb08();
      pppppbVar5 = pppppbVar4;
      while (pppppbVar4 = pppppbVar5, (byte ****)pppbStack_78 != (byte ****)0x0) {
        func_0x00010b53bb38();
        FUN_10b53b308();
        pppppbVar5 = pppppbVar4;
        func_0x00010b53bac0();
        func_0x00010b53bb6c();
        param_2 = pppppbVar4;
      }
    }
    else {
      pppppbVar4 = (byte *****)(uVar8 << 3);
      __Znam();
      ppppbStack_80 = (byte ****)pppppbVar4;
      func_0x00010b53bb08();
      while ((byte ****)pppbStack_78 != (byte ****)0x0) {
        *pppppbVar4 = (byte ****)(pppbStack_78 + 1);
        func_0x00010b53bb6c();
        pppppbVar4 = pppppbVar4 + 1;
      }
      pppppbVar4 = (byte *****)ppppbStack_80;
      func_0x000105991c2c(ppppbStack_80,ppppbStack_80 + uVar8);
      uVar13 = uVar8 << 3;
      while (pppppbVar5 = pppppbVar4, uVar8 != 0) {
        func_0x00010b53bb38();
        FUN_10b53b308();
        pppppbVar4 = pppppbVar5;
        func_0x00010b53bac0();
        uVar13 = uVar13 - 8;
        param_2 = pppppbVar5;
        uVar8 = uVar13;
      }
      pppppbVar4 = &ppppbStack_80;
      func_0x000105991ac8(pppppbVar4);
    }
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pppppbVar4 = (byte *****)0x7;
    func_0x00010b53bb60(7,param_1[0x15],*(undefined4 *)(param_1[0x15] + 5));
    param_2 = pppppbVar4;
  }
  uVar2 = *(uint *)(param_1 + 10);
  uVar8 = (ulong)uVar2;
  if (uVar2 != 0) {
    if ((uVar2 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b53bb08();
      while (pppppbVar5 = pppppbVar4, (byte ****)pppbStack_78 != (byte ****)0x0) {
        func_0x00010b53bb38();
        func_0x00010b53b358();
        pppppbVar4 = pppppbVar5;
        func_0x00010b53bac0();
        func_0x00010b53bb6c();
        param_2 = pppppbVar5;
      }
    }
    else {
      pppppbVar4 = (byte *****)(uVar8 << 3);
      __Znam();
      ppppbStack_80 = (byte ****)pppppbVar4;
      func_0x00010b53bb08();
      while ((byte ****)pppbStack_78 != (byte ****)0x0) {
        *pppppbVar4 = (byte ****)(pppbStack_78 + 1);
        func_0x00010b53bb6c();
        pppppbVar4 = pppppbVar4 + 1;
      }
      pppppbVar4 = (byte *****)ppppbStack_80;
      func_0x000105991c2c(ppppbStack_80,ppppbStack_80 + uVar8);
      uVar13 = uVar8 << 3;
      while (pppppbVar5 = pppppbVar4, uVar8 != 0) {
        func_0x00010b53bb38();
        func_0x00010b53b358();
        pppppbVar4 = pppppbVar5;
        func_0x00010b53bac0();
        uVar13 = uVar13 - 8;
        param_2 = pppppbVar5;
        uVar8 = uVar13;
      }
      func_0x000105991ac8(&ppppbStack_80);
    }
  }
  if (*(int *)(param_1 + 0xe) != 0) {
    if ((*(int *)(param_1 + 0xe) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      pppppbVar4 = (byte *****)&pppbStack_78;
      func_0x00010564c19c(pppppbVar4);
      while (pppppbVar5 = pppppbVar4, (byte ****)pppbStack_78 != (byte ****)0x0) {
        func_0x00010b53bbb4();
        pppppbVar4 = pppppbVar5;
        func_0x00010b53bb6c();
        param_2 = pppppbVar5;
      }
    }
    else {
      pppppbVar4 = (byte *****)&pppbStack_78;
      FUN_10b504ec0(pppppbVar4);
      for (lVar6 = (long)pppbStack_78 << 4; lVar6 != 0; lVar6 = lVar6 + -0x10) {
        func_0x00010b53bbb4();
        param_2 = pppppbVar4;
      }
      FUN_10b504e60(auStack_70);
    }
  }
  if (((ulong)param_1[1] & 1) != 0) {
    uVar8 = (ulong)param_1[1] & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar6 < 0) {
      lVar7 = *(long *)(uVar8 + 8);
      lVar6 = *(long *)(uVar8 + 0x10);
    }
    else {
      lVar7 = uVar8 + 8;
    }
    func_0x0001053930c4(param_3,lVar7,lVar6,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b53b308; end: 10b53b3a7;  */

void FUN_10b53b308(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long *unaff_x20;
  
  func_0x00010b53bb48();
  func_0x000107c280a8(0x32,param_1);
  func_0x00010b53bc00();
  func_0x00010b53bb14(*(undefined4 *)((long)unaff_x20 + 0x14));
  func_0x00010b53bb7c();
  func_0x00010b53bc0c();
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x14);
  func_0x0001001a597c();
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,unaff_x19);
  func_0x0001001a59d0(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 10b53b3a8; end: 10b53b5af;  */

/* WARNING: Removing unreachable block (ram,0x00010b53b488) */
/* WARNING: Removing unreachable block (ram,0x00010b53b4bc) */

long FUN_10b53b3a8(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_58;
  
  lVar5 = 0;
  lVar4 = 0;
  for (lVar6 = (long)*(int *)(param_1 + 0x18); lVar6 != 0; lVar6 = lVar6 + -1) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar5 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar4;
    lVar5 = lVar5 + 0x100000000;
  }
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4 + (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar4;
  uVar1 = *(uint *)(param_1 + 0x30);
  func_0x00010b53bb90();
  while (lStack_58 != 0) {
    func_0x000107c282a0(lStack_58 + 8);
    FUN_10b505bd4(lStack_58 + 0x20);
    func_0x00010b53bad0();
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  func_0x00010b53bb90();
  lVar4 = lVar5 + (ulong)uVar1 + (ulong)uVar2 + (ulong)*(uint *)(param_1 + 0x70);
  func_0x00010b53bb90();
  uVar3 = *(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + uVar3 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x98);
      func_0x00010b53720c();
      lVar4 = lVar4 + lVar5 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0xa0);
      FUN_10b505bd4();
      func_0x00010b53bbdc();
      lVar4 = lVar4 + lVar5 + extraout_x8 + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0xa8);
      FUN_10b53b5b0();
      lVar4 = lVar4 + lVar5 + 1;
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0xb0)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b53b5b0; end: 10b53b5cb;  */

long FUN_10b53b5b0(long param_1)

{
  long extraout_x8;
  
  FUN_10b59c590();
  func_0x00010b53bbdc();
  return param_1 + extraout_x8;
}



/* Entry: 10b53b5cc; end: 10b53b5cf;  */

void FUN_10b53b5cc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10b53b918(param_1 + 0x30,param_2 + 0x30);
  FUN_10b53b9d0(param_1 + 0x50,param_2 + 0x50);
  FUN_10b505080(param_1 + 0x70,param_2 + 0x70);
  uVar2 = *(ulong *)(param_2 + 0x90) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x90,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar2 = uVar5;
        func_0x00010b537494(uVar5,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar2;
      }
      else {
        func_0x00010b5047b8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar2 = uVar5;
        func_0x00010b53b890(uVar5,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar2;
      }
      else {
        FUN_10b505d18();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        func_0x00010b53b8d4(uVar5,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar5;
      }
      else {
        FUN_10b59c628();
      }
    }
  }
  if (*(long *)(param_2 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_2 + 0xb0);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b53b5d0; end: 10b53b73f;  */

void FUN_10b53b5d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10b53b918(param_1 + 0x30,param_2 + 0x30);
  FUN_10b53b9d0(param_1 + 0x50,param_2 + 0x50);
  FUN_10b505080(param_1 + 0x70,param_2 + 0x70);
  uVar2 = *(ulong *)(param_2 + 0x90) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x90,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar2 = uVar5;
        func_0x00010b537494(uVar5,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar2;
      }
      else {
        func_0x00010b5047b8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar2 = uVar5;
        func_0x00010b53b890(uVar5,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar2;
      }
      else {
        FUN_10b505d18();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        func_0x00010b53b8d4(uVar5,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar5;
      }
      else {
        FUN_10b59c628();
      }
    }
  }
  if (*(long *)(param_2 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_2 + 0xb0);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b53b740; end: 10b53b747;  */

void FUN_10b53b740(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xb8;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0xb8);
  }
  *puVar1 = &PTR_FUN_110d01db0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[7] = 0x100000000;
  puVar1[6] = 0x100000000;
  puVar1[8] = &DAT_10e5b4a18;
  puVar1[9] = param_2;
  puVar1[0xb] = 0x100000000;
  puVar1[10] = 0x100000000;
  puVar1[0xc] = &DAT_10e5b4a18;
  puVar1[0xd] = param_2;
  puVar1[0xf] = 0x100000000;
  puVar1[0xe] = 0x100000000;
  puVar1[0x10] = &DAT_10e5b4a18;
  puVar1[0x11] = param_2;
  puVar1[0x12] = &DAT_11383d918;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  return;
}



/* Entry: 10b53b748; end: 10b53b787;  */

long FUN_10b53b748(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x00010b53bbc4(param_1,0x500800020);
  }
  return param_1;
}



/* Entry: 10b53b788; end: 10b53b7c7;  */

long FUN_10b53b788(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x00010b53bbc4(param_1,0x500500020);
  }
  return param_1;
}



/* Entry: 10b53b7c8; end: 10b53b917;  */

long FUN_10b53b7c8(long param_1)

{
  FUN_10b504e1c(param_1 + 0x60);
  FUN_10b53b788(param_1 + 0x40);
  FUN_10b53b748(param_1 + 0x20);
  func_0x000107c282dc(param_1 + 8);
  return param_1;
}



/* Entry: 10b53b918; end: 10b53b9cf;  */

void FUN_10b53b918(int *param_1)

{
  int *piVar1;
  long lStack_48;
  
  func_0x00010b53bb90();
  while (lStack_48 != 0) {
    piVar1 = (int *)(lStack_48 + 8);
    func_0x000107c28188();
    func_0x00010b53baa4();
    if (piVar1 == (int *)0x0) {
      func_0x00010b53bba0();
      if ((int)piVar1 != 0) {
        func_0x000107c28188(lStack_48 + 8);
        func_0x00010b53baa4();
      }
      piVar1 = param_1;
      func_0x000107c27d64(param_1,0x80);
      func_0x000107c2821c(piVar1 + 2,*(undefined8 *)(param_1 + 6),lStack_48 + 8);
      FUN_10b505648(piVar1 + 8,*(undefined8 *)(param_1 + 6));
      func_0x00010b53bbcc();
      *param_1 = *param_1 + 1;
    }
    FUN_10b505dc4(piVar1 + 8,lStack_48 + 0x20);
    func_0x00010b53bb98();
  }
  return;
}



/* Entry: 10b53b9d0; end: 10b53baa3;  */

void FUN_10b53b9d0(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long lStack_58;
  
  func_0x00010b53bb90();
  while (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 8);
    func_0x000107c28188();
    func_0x00010b53baa4();
    if (piVar1 == (int *)0x0) {
      func_0x00010b53bba0();
      if ((int)piVar1 != 0) {
        func_0x000107c28188(lStack_58 + 8);
        func_0x00010b53baa4();
      }
      piVar1 = param_1;
      func_0x000107c27d64(param_1,0x50);
      func_0x000107c2821c(piVar1 + 2,*(undefined8 *)(param_1 + 6),lStack_58 + 8);
      uVar2 = *(undefined8 *)(param_1 + 6);
      *(undefined ***)(piVar1 + 8) = &PTR_FUN_110d12f70;
      *(undefined8 *)(piVar1 + 10) = uVar2;
      piVar1[0xc] = 0;
      piVar1[0xd] = 0;
      piVar1[0xe] = 0;
      piVar1[0xf] = 0;
      *(undefined8 *)(piVar1 + 0x10) = uVar2;
      piVar1[0x12] = 0;
      func_0x00010b53bbcc();
      *param_1 = *param_1 + 1;
    }
    func_0x00010b59c674(piVar1 + 8,lStack_58 + 0x20);
    func_0x00010b53bb98();
  }
  return;
}



/* Entry: 10b53baa4; end: 10b53bc23;  */

undefined1  [16] FUN_10b53baa4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  undefined1 auVar5 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar4 = unaff_x19;
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00010055e598();
  uVar3 = (ulong)puVar4 & 0xffffffff;
  puVar4 = *(ulong **)(unaff_x19[2] + ((ulong)puVar4 & 0xffffffff) * 8);
  if (puVar4 == (ulong *)0x0 || ((ulong)puVar4 & 1) != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000107c30324();
      uVar2 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto code_r0x00010055e6b8;
    }
    unaff_x19 = (ulong *)0x0;
  }
  else {
    do {
      puVar1 = puVar4 + 1;
      func_0x00010055e9d4(puVar1,&lStack_50);
      unaff_x19 = puVar4;
      if (((ulong)puVar1 & 1) != 0) break;
      puVar4 = (ulong *)*puVar4;
      unaff_x19 = puVar4;
    } while (puVar4 != (ulong *)0x0);
  }
  uVar2 = 0;
code_r0x00010055e6b8:
  auVar5._8_8_ = uVar2 | uVar3;
  auVar5._0_8_ = unaff_x19;
  return auVar5;
}



/* Entry: 10b53bc24; end: 10b53bd23;  */

void FUN_10b53bc24(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010b53c698();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b53bc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bc1c8)[extraout_x8] * 4 + 0x10b53bc50))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b53bd24; end: 10b53bd5b;  */

long FUN_10b53bd24(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b53bc24(param_1);
  }
  return param_1;
}



/* Entry: 10b53bd5c; end: 10b53bd5f;  */

long FUN_10b53bd5c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b53bc24(param_1);
  }
  return param_1;
}



/* Entry: 10b53bd60; end: 10b53bd73;  */

void FUN_10b53bd60(void)

{
  FUN_10b53bd24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53bd74; end: 10b53bd7f;  */

undefined ** FUN_10b53bd74(void)

{
  return &PTR_DAT_110d01ef0;
}



/* Entry: 10b53bd80; end: 10b53bed3;  */

void FUN_10b53bd80(long param_1)

{
  ulong *puVar1;
  
  FUN_10b53bc24();
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



/* Entry: 10b53bed4; end: 10b53bf4b;  */

void FUN_10b53bed4(void)

{
  FUN_10b536790();
  FUN_10b53c620();
  return;
}



/* Entry: 10b53bf4c; end: 10b53c0ef;  */

void FUN_10b53bf4c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    lVar3 = param_1;
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_10b53bc24();
      }
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b53c63c();
        FUN_10b53687c();
        goto LAB_10b53c0b4;
      }
      func_0x00010b53c668();
      func_0x00010b53c4f4();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b53c63c();
        FUN_10b53ea08();
        goto LAB_10b53c0b4;
      }
      func_0x00010b53c668();
      func_0x00010b53c530();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b53c63c();
        FUN_10b54e8ec();
        goto LAB_10b53c0b4;
      }
      func_0x00010b53c668();
      func_0x00010b53c56c();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b53c63c();
        FUN_10b53722c();
        goto LAB_10b53c0b4;
      }
      func_0x00010b53c668();
      func_0x00010b53c5a8();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b53c63c();
        FUN_10b53d984();
        goto LAB_10b53c0b4;
      }
      func_0x00010b53c668();
      func_0x00010b53c5e4();
      break;
    default:
      goto LAB_10b53c0b4;
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
LAB_10b53c0b4:
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



/* Entry: 10b53c0f0; end: 10b53c157;  */

undefined8 * FUN_10b53c0f0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01eb0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b53c40c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b53c158; end: 10b53c187;  */

long FUN_10b53c158(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53c438(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53c188; end: 10b53c18b;  */

long FUN_10b53c188(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53c438(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53c18c; end: 10b53c19f;  */

void FUN_10b53c18c(void)

{
  FUN_10b53c158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53c1a0; end: 10b53c1ab;  */

undefined ** FUN_10b53c1a0(void)

{
  return &PTR_DAT_110d01f58;
}



/* Entry: 10b53c1ac; end: 10b53c1f3;  */

void FUN_10b53c1ac(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b53c1f4; end: 10b53c2df;  */

long * FUN_10b53c1f4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(param_2,uVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
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



/* Entry: 10b53c2e0; end: 10b53c37b;  */

long FUN_10b53c2e0(long param_1)

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
    FUN_10b53c37c();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b53c37c; end: 10b53c393;  */

void FUN_10b53c37c(void)

{
  func_0x00010b53be38();
  FUN_10b53c620();
  return;
}



/* Entry: 10b53c394; end: 10b53c397;  */

void FUN_10b53c394(long param_1,long param_2)

{
  FUN_10b53c3ec(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b53c398; end: 10b53c3eb;  */

void FUN_10b53c398(long param_1,long param_2)

{
  FUN_10b53c3ec(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b53c3ec; end: 10b53c40b;  */

void FUN_10b53c3ec(long *param_1,long param_2)

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



/* Entry: 10b53c40c; end: 10b53c437;  */

undefined8 * FUN_10b53c40c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b53c3ec(param_1,param_3);
  return param_1;
}



/* Entry: 10b53c438; end: 10b53c467;  */

long * FUN_10b53c438(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b53c468; end: 10b53c61f;  */

void FUN_10b53c468(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d01e60;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b53c620; end: 10b53c6df;  */

long FUN_10b53c620(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b53c6e0; end: 10b53c707;  */

long FUN_10b53c6e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b53c708; end: 10b53c74f;  */

undefined8 * FUN_10b53c708(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d01ff0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010b53c6ac(param_1,param_3);
  return param_1;
}



/* Entry: 10b53c750; end: 10b53c753;  */

long FUN_10b53c750(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b53c754; end: 10b53c767;  */

void FUN_10b53c754(void)

{
  FUN_10b53c6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53c768; end: 10b53c78b;  */

undefined ** FUN_10b53c768(void)

{
  return &PTR_DAT_110d02030;
}



/* Entry: 10b53c78c; end: 10b53c847;  */

long * FUN_10b53c78c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = param_1;
  if (param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b53c908();
    plVar6 = (long *)param_1[2];
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac(plVar6,uVar2);
    param_2 = plVar6;
  }
  if ((int)param_1[3] != 0) {
    func_0x00010b53c908();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 3);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar6);
    func_0x000107c280b8(param_2,uVar2);
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



/* Entry: 10b53c848; end: 10b53c8bb;  */

ulong FUN_10b53c848(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b53c8bc; end: 10b53c8ff;  */

void FUN_10b53c8bc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d01ff0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b53c900; end: 10b53c913;  */

void FUN_10b53c900(void)

{
  return;
}



/* Entry: 10b53c914; end: 10b53c943;  */

long FUN_10b53c914(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53c944; end: 10b53c947;  */

long FUN_10b53c944(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53c948; end: 10b53c95b;  */

void FUN_10b53c948(void)

{
  FUN_10b53c914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53c95c; end: 10b53c97b;  */

undefined ** FUN_10b53c95c(void)

{
  return &PTR_DAT_110d02138;
}



/* Entry: 10b53c97c; end: 10b53ca57;  */

byte * FUN_10b53c97c(byte *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar7) {
    pbVar2 = param_1;
    func_0x00010b53cf94();
    pbVar5 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar5[-1] = (byte)uVar7 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    pbVar5[-1] = (byte)uVar7;
    puVar8 = *(uint **)(param_1 + 0x18);
    puVar1 = puVar8 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b53cf94();
      uVar7 = *puVar8;
      pbVar5 = pbVar2;
      while( true ) {
        param_2 = pbVar5 + 1;
        if (uVar7 < 0x80) break;
        *pbVar5 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        pbVar5 = param_2;
      }
      puVar8 = puVar8 + 1;
      *pbVar5 = (byte)uVar7;
    } while (puVar8 < puVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar6 + 8);
      uVar4 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar3 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar10 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        pbVar5 = param_2 + iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar5);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return param_2 + (int)uVar4;
  }
  return param_2;
}



/* Entry: 10b53ca58; end: 10b53cac3;  */

void FUN_10b53ca58(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1 + 0x10;
  func_0x00010b4d3e38();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x24) = iVar2;
  return;
}



/* Entry: 10b53cac4; end: 10b53cac7;  */

void FUN_10b53cac4(long param_1,long param_2)

{
  func_0x0001088ffb98(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b53cac8; end: 10b53cb6b;  */

void FUN_10b53cac8(long param_1,long param_2)

{
  func_0x0001088ffb98(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b53cb6c; end: 10b53cbd7;  */

undefined8 * FUN_10b53cb6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110d020f8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b53cfac();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 - 1U < 2) {
    FUN_10b53cef4(param_2,*(undefined8 *)(param_3 + 0x10));
    param_1[2] = param_2;
  }
  return param_1;
}



/* Entry: 10b53cbd8; end: 10b53cc07;  */

long FUN_10b53cbd8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53cc08(param_1);
  return param_1;
}



/* Entry: 10b53cc08; end: 10b53cc1b;  */

void FUN_10b53cc08(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x1c) == 2) || (*(int *)(param_1 + 0x1c) == 1)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10b53c914();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b53cc1c; end: 10b53cc2f;  */

void FUN_10b53cc1c(void)

{
  FUN_10b53cbd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53cc30; end: 10b53cc3b;  */

undefined ** FUN_10b53cc30(void)

{
  return &PTR_DAT_110d02198;
}



/* Entry: 10b53cc3c; end: 10b53cd47;  */

void FUN_10b53cc3c(long param_1)

{
  ulong *puVar1;
  
  func_0x00010b53cb10();
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



/* Entry: 10b53cd48; end: 10b53cd73;  */

long FUN_10b53cd48(long param_1)

{
  FUN_10b53ca58();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b53cd74; end: 10b53cd77;  */

void FUN_10b53cd74(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) goto LAB_10b53ce1c;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      func_0x00010b53cb10(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 != 2) {
LAB_10b53ce0c:
      FUN_10b53cef4(uVar3,*(undefined8 *)(param_2 + 0x10));
      *(ulong *)(param_1 + 0x10) = uVar3;
      goto LAB_10b53ce1c;
    }
    func_0x00010b53cf74();
  }
  else {
    if (iVar1 != 1) goto LAB_10b53ce1c;
    if (iVar2 != 1) goto LAB_10b53ce0c;
    func_0x00010b53cf74();
  }
  func_0x00010b53cac8();
LAB_10b53ce1c:
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



/* Entry: 10b53cd78; end: 10b53ce57;  */

void FUN_10b53cd78(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) goto LAB_10b53ce1c;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      func_0x00010b53cb10(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 != 2) {
LAB_10b53ce0c:
      FUN_10b53cef4(uVar3,*(undefined8 *)(param_2 + 0x10));
      *(ulong *)(param_1 + 0x10) = uVar3;
      goto LAB_10b53ce1c;
    }
    func_0x00010b53cf74();
  }
  else {
    if (iVar1 != 1) goto LAB_10b53ce1c;
    if (iVar2 != 1) goto LAB_10b53ce0c;
    func_0x00010b53cf74();
  }
  func_0x00010b53cac8();
LAB_10b53ce1c:
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



/* Entry: 10b53ce58; end: 10b53ce67;  */

void FUN_10b53ce58(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b53cfa0();
  }
  *puVar1 = &PTR_FUN_110d020a8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b53ce68; end: 10b53cef3;  */

void FUN_10b53ce68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b53cfa0();
  }
  *puVar1 = &PTR_FUN_110d020a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b53cef4; end: 10b53cf5f;  */

undefined8 * FUN_10b53cef4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b53cfa0();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d020a8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b53cfac();
  }
  func_0x000107c2a448(puVar1 + 2,param_1,param_2 + 0x10);
  puVar1[4] = 0;
  return puVar1;
}



/* Entry: 10b53cf60; end: 10b53cfb7;  */

void FUN_10b53cf60(void)

{
  return;
}



/* Entry: 10b53cfb8; end: 10b53d047;  */

undefined8 * FUN_10b53cfb8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d02230;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010598fd00(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10b53d048; end: 10b53d07b;  */

long FUN_10b53d048(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53d424(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53d07c; end: 10b53d07f;  */

long FUN_10b53d07c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53d424(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53d080; end: 10b53d093;  */

void FUN_10b53d080(void)

{
  FUN_10b53d048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53d094; end: 10b53d09f;  */

undefined ** FUN_10b53d094(void)

{
  return &PTR_DAT_110d02270;
}



/* Entry: 10b53d0a0; end: 10b53d0df;  */

void FUN_10b53d0a0(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x000107c282c0(param_1 + 0x28);
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



/* Entry: 10b53d0e0; end: 10b53d2bf;  */

byte * FUN_10b53d0e0(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  ulong *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  
  uVar10 = *(uint *)(param_1 + 0x20);
  if (uVar10 != 0) {
    pbVar3 = param_1;
    FUN_10b53d4a4();
    pbVar8 = pbVar3 + 2;
    *pbVar3 = 10;
    for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
      pbVar8[-1] = (byte)uVar10 | 0x80;
      pbVar8 = pbVar8 + 1;
    }
    pbVar8[-1] = (byte)uVar10;
    piVar11 = *(int **)(param_1 + 0x18);
    piVar1 = piVar11 + *(int *)(param_1 + 0x10);
    do {
      FUN_10b53d4a4();
      uVar6 = (ulong)*piVar11;
      pbVar8 = pbVar3;
      while( true ) {
        param_2 = pbVar8 + 1;
        if (uVar6 < 0x80) break;
        *pbVar8 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        pbVar8 = param_2;
      }
      piVar11 = piVar11 + 1;
      *pbVar8 = (byte)uVar6;
    } while (piVar11 < piVar1);
  }
  lVar14 = 8;
  for (uVar6 = (ulong)(*(uint *)(param_1 + 0x30) &
                      ((int)*(uint *)(param_1 + 0x30) >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    puVar2 = (ulong *)(param_1 + 0x28);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + lVar14 + -1);
    }
    puVar12 = (undefined8 *)*puVar2;
    lVar5 = (long)*(char *)((long)puVar12 + 0x17);
    puVar4 = puVar12;
    if (lVar5 < 0) {
      lVar5 = puVar12[1];
      puVar4 = (undefined8 *)*puVar12;
    }
    func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f778190);
    lVar5 = (long)*(char *)((long)puVar12 + 0x17);
    if (((lVar5 < 0) && (lVar5 = puVar12[1], 0x7f < lVar5)) ||
       ((*(long *)param_3 - (long)param_2) + 0xe < lVar5)) {
      pbVar8 = param_3;
      func_0x00010b4d5120(param_3,2,puVar12,param_2);
    }
    else {
      *param_2 = 0x12;
      param_2[1] = (byte)lVar5;
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        puVar12 = (undefined8 *)*puVar12;
      }
      _memcpy(param_2 + 2,puVar12,lVar5);
      pbVar8 = param_2 + 2 + lVar5;
    }
    lVar14 = lVar14 + 8;
    param_2 = pbVar8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar14 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar14 = uVar7 + 8;
  }
  if ((long)(int)uVar6 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar14,uVar6 & 0xffffffff);
    return param_2 + (int)uVar6;
  }
  while( true ) {
    iVar13 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar9 = (int)uVar6;
    uVar6 = (ulong)(uint)(iVar9 - iVar13);
    if (iVar9 - iVar13 == 0 || iVar9 < iVar13) break;
    func_0x00010b4d5738();
    pbVar8 = param_2 + iVar13;
    param_2 = param_3;
    func_0x000107c303e4(param_3,pbVar8);
  }
  func_0x00010b4d5738();
  return param_2 + iVar9;
}



/* Entry: 10b53d2c0; end: 10b53d3bf;  */

long FUN_10b53d2c0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = 0;
  lVar3 = 0;
  for (lVar6 = (long)*(int *)(param_1 + 0x10); lVar6 != 0; lVar6 = lVar6 + -1) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar5 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar3;
    lVar5 = lVar5 + 0x100000000;
  }
  lVar5 = 0;
  if (lVar3 != 0) {
    lVar5 = lVar3 + (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  uVar2 = *(uint *)(param_1 + 0x30);
  lVar5 = lVar5 + (ulong)uVar2;
  lVar3 = 8;
  for (uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    puVar1 = (ulong *)(param_1 + 0x28);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar3 + -1);
    }
    uVar4 = *puVar1;
    func_0x000107c282a0();
    lVar5 = uVar4 + lVar5;
    lVar3 = lVar3 + 8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar7 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x40) = (int)lVar5;
  return lVar5;
}



/* Entry: 10b53d3c0; end: 10b53d3c3;  */

void FUN_10b53d3c0(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10b53d3c4; end: 10b53d41b;  */

void FUN_10b53d3c4(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10b53d41c; end: 10b53d423;  */

void FUN_10b53d41c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110d02230;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_2;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10b53d424; end: 10b53d4a3;  */

undefined8 FUN_10b53d424(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  func_0x000107c282b4(param_1 + 0x18);
  func_0x00010006804c(param_1);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10b53d4a4; end: 10b53d4af;  */

ulong * FUN_10b53d4a4(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x20;
  
  if (unaff_x20 < (ulong *)*unaff_x19) {
    return unaff_x20;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x20 = (ulong *)((long)puVar2 + (long)((int)unaff_x20 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x20);
  return unaff_x20;
}



/* Entry: 10b53d4b0; end: 10b53d56f;  */

undefined8 * FUN_10b53d4b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d022e0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x000107c2809c(lVar2,param_2);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + 0x45) = *(undefined8 *)(param_3 + 0x45);
  param_1[8] = uVar4;
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 10b53d570; end: 10b53d5a3;  */

long FUN_10b53d570(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53d5a4(param_1);
  return param_1;
}



/* Entry: 10b53d5a4; end: 10b53d5eb;  */

void FUN_10b53d5a4(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53d5ec; end: 10b53d5ef;  */

long FUN_10b53d5ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53d5a4(param_1);
  return param_1;
}



/* Entry: 10b53d5f0; end: 10b53d603;  */

void FUN_10b53d5f0(void)

{
  FUN_10b53d570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53d604; end: 10b53d60f;  */

undefined ** FUN_10b53d604(void)

{
  return &PTR_DAT_110d02320;
}



/* Entry: 10b53d610; end: 10b53d683;  */

void FUN_10b53d610(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x45) = 0;
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b53d684; end: 10b53d97f;  */

long * FUN_10b53d684(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  plVar2 = param_1;
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)*puVar9;
      goto LAB_10b53d6c8;
    }
  }
  else if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_10b53d6c8:
    func_0x000107c303d4(puVar9,lVar5,1,&UNK_10f7781c1);
    param_2 = param_3;
    func_0x00010b53dbb0(param_3,1);
    plVar2 = param_2;
  }
  puVar9 = (undefined8 *)(param_1[4] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b53d730;
    puVar9 = (undefined8 *)*puVar9;
  }
  else if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b53d730;
  func_0x000107c303d4(puVar9,lVar5,1,&UNK_10f7781f5);
  plVar2 = param_3;
  func_0x00010b53dbb0(param_3,2);
  param_2 = plVar2;
LAB_10b53d730:
  if (param_1[7] != 0) {
    plVar2 = param_3;
    func_0x00010599ccb0(param_3,param_1[7],param_2);
    param_2 = plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x4;
    func_0x00010b53dba4(4,param_1[5],*(undefined4 *)(param_1[5] + 0x30));
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x5;
    func_0x00010b53dba4(5,param_1[6],*(undefined4 *)(param_1[6] + 0x20));
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[8] != 0) {
    func_0x00010b53db64();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b53db7c();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x44) != 0) {
    func_0x00010b53db64();
    plVar2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x00010b53db7c();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[9] != 0) {
    func_0x00010b53db64();
    plVar3 = (long *)(ulong)*(uint *)(param_1 + 9);
    uVar4 = 0x40;
    func_0x000107c280a8(0x40,plVar2);
    func_0x000107c280b8(plVar3,uVar4);
    param_2 = plVar3;
  }
  if (*(char *)((long)param_1 + 0x4c) == '\x01') {
    func_0x00010b53db64();
    param_2 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar3);
    func_0x00010b53db7c();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar7 = param_1[1] & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b53d980; end: 10b53d983;  */

void FUN_10b53d980(long param_1,long param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b53d984; end: 10b53daf7;  */

void FUN_10b53d984(long param_1,long param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b53daf8; end: 10b53daff;  */

void FUN_10b53daf8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x50);
  }
  *puVar1 = &PTR_FUN_110d022e0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  return;
}



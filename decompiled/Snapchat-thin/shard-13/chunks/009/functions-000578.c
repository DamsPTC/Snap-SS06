/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae1c96c; end: 10ae1c9f3;  */

void FUN_10ae1c96c(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  func_0x00010598fce8(param_1 + 0x40,param_2 + 0x40);
  func_0x00010598fce8(param_1 + 0x58,param_2 + 0x58);
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
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



/* Entry: 10ae1c9f4; end: 10ae1c9fb;  */

void FUN_10ae1c9f4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x80;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x80);
  }
  *puVar1 = &PTR_FUN_110c7b5a8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_2;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = param_2;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = param_2;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0xe] = 0;
  return;
}



/* Entry: 10ae1c9fc; end: 10ae1ca33;  */

/* WARNING: Possible PIC construction at 0x00010ae1ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae1ca20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae1ca14) */
/* WARNING: Removing unreachable block (ram,0x00010ae1ca24) */

long * FUN_10ae1c9fc(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x48);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 10ae1ca34; end: 10ae1cb0b;  */

long FUN_10ae1ca34(void)

{
  ulong uVar1;
  byte bVar2;
  ulong *unaff_x21;
  long unaff_x23;
  
  if ((*unaff_x21 & 1) != 0) {
    unaff_x21 = (ulong *)(*unaff_x21 + unaff_x23 + -1);
  }
  bVar2 = *(byte *)(*unaff_x21 + 0x17);
  uVar1 = *(ulong *)(*unaff_x21 + 8);
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  return uVar1 + ((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
}



/* Entry: 10ae1cb0c; end: 10ae1cc5f;  */

undefined8 FUN_10ae1cb0c(uint *param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  
  uVar9 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar9 = param_2;
  }
  bVar5 = (byte)(1 << (ulong)((param_2 ^ 0xffffffff) & 7));
  bVar4 = 0;
  if (param_3 != 0) {
    bVar4 = bVar5;
  }
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  iVar3 = (int)uVar9 >> 3;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffffffff0;
  uVar9 = *param_1;
  if (((int)uVar9 <= iVar3) || (plVar7 = *(long **)(param_1 + 2), plVar7 == (long *)0x0)) {
    if (param_3 == 0) {
      return 1;
    }
    uVar2 = iVar3 + 1;
    plVar7 = *(long **)(param_1 + 2);
    lVar8 = (long)(int)uVar2;
    if (plVar7 == (long *)0x0) {
      if (0xfffffff7 < uVar2) {
LAB_10ae1cc28:
        func_0x000107c2b29c(0xc,0,0x41,&UNK_10f6c47a3,0xeb);
        return 0;
      }
      plVar6 = (long *)(lVar8 + 8);
      _malloc();
      if (plVar6 == (long *)0x0) goto LAB_10ae1cc28;
      plVar7 = plVar6 + 1;
      *plVar6 = lVar8;
    }
    else {
      func_0x000107c2b538(plVar7,lVar8);
      if (plVar7 == (long *)0x0) goto LAB_10ae1cc28;
      uVar9 = *param_1;
    }
    if (0 < (int)(uVar2 - uVar9)) {
      _bzero((long)plVar7 + (long)(int)uVar9);
    }
    *(long **)(param_1 + 2) = plVar7;
    *param_1 = uVar2;
  }
  *(byte *)((long)plVar7 + (long)iVar3) = *(byte *)((long)plVar7 + (long)iVar3) & ~bVar5 | bVar4;
  if (0 < (int)*param_1) {
    uVar9 = *param_1;
    do {
      if (*(char *)(*(long *)(param_1 + 2) + -1 + (ulong)uVar9) != '\0') {
        return 1;
      }
      uVar2 = uVar9 - 1;
      *param_1 = uVar2;
      bVar1 = 0 < (int)uVar9;
      uVar9 = uVar2;
    } while (uVar2 != 0 && bVar1);
  }
  return 1;
}



/* Entry: 10ae1cc60; end: 10ae1d04f;  */

undefined8 FUN_10ae1cc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10ae1e2cc(param_2,&uStack_28,&uStack_30,0x7fffffff);
  if ((int)param_2 == 0) {
    param_3 = 0;
  }
  else {
    uStack_38 = uStack_28;
    func_0x000107c2b1b4(param_3,&uStack_38,uStack_30,param_1);
    func_0x000107c2b534(uStack_28);
  }
  return param_3;
}



/* Entry: 10ae1d050; end: 10ae1d1cb;  */

uint * FUN_10ae1d050(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar1 = param_1;
  uStack_48 = param_2;
  if (param_1 == (uint *)0x0) {
    puVar1 = (uint *)0x18;
    func_0x000107c2b1ac();
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  puVar6 = &uStack_48;
  _gmtime_r(puVar6,auStack_80);
  if ((puVar6 != (undefined8 *)0x0) &&
     ((((int)param_3 == 0 && (param_4 == 0)) ||
      (puVar2 = puVar6, func_0x00010ae1e070(puVar6,param_3,param_4), (int)puVar2 != 0)))) {
    if (*(int *)((long)puVar6 + 0x14) - 0x1fa4U < 0xffffd8f0) {
      uVar4 = 0x8a;
      uVar5 = 0xf1;
    }
    else {
      puVar6 = *(undefined8 **)(puVar1 + 2);
      if ((puVar6 != (undefined8 *)0x0) && (puVar2 = puVar6, 0x13 < *puVar1)) {
LAB_10ae1d134:
        func_0x000107c2b540(puVar2,0x14,&UNK_10f6c4901);
        _strlen();
        *puVar1 = (uint)puVar2;
        puVar1[1] = 0x18;
        return puVar1;
      }
      puVar3 = (undefined8 *)0x1c;
      _malloc();
      if (puVar3 != (undefined8 *)0x0) {
        puVar2 = puVar3 + 1;
        *puVar3 = 0x14;
        func_0x000107c2b534(puVar6);
        *(undefined8 **)(puVar1 + 2) = puVar2;
        goto LAB_10ae1d134;
      }
      uVar4 = 0x41;
      uVar5 = 0xf9;
    }
    func_0x000107c2b29c(0xc,0,uVar4,&UNK_10f6c488c,uVar5);
  }
  if (param_1 == (uint *)0x0) {
    func_0x000107c2b534(*(undefined8 *)(puVar1 + 2));
    func_0x000107c2b534(puVar1);
  }
  return (uint *)0x0;
}



/* Entry: 10ae1d1cc; end: 10ae1d22b;  */

int FUN_10ae1d1cc(ulong param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar1 == (*(uint *)(param_2 + 4) & 0x100)) {
    func_0x000107c2b1b0();
    iVar2 = 1;
    if ((param_1 & 0x80000000) == 0) {
      iVar2 = -(uint)((int)param_1 != 0);
    }
    iVar3 = (int)param_1;
    if (uVar1 != 0) {
      iVar3 = iVar2;
    }
  }
  else {
    iVar3 = -1;
    if (uVar1 == 0) {
      iVar3 = 1;
    }
  }
  return iVar3;
}



/* Entry: 10ae1d22c; end: 10ae1d4df;  */

int FUN_10ae1d22c(uint *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar7 = *param_1;
  if ((int)uVar7 < 1) {
    uVar6 = 0;
    bVar2 = true;
  }
  else {
    uVar6 = 0;
    lVar10 = *(long *)(param_1 + 2);
    do {
      if (*(char *)(lVar10 + uVar6) != '\0') {
        bVar8 = *(byte *)(lVar10 + uVar6);
        if ((*(byte *)((long)param_1 + 5) & 1) == 0) {
          uVar9 = (uint)(bVar8 >> 7);
          bVar2 = true;
          goto LAB_10ae1d284;
        }
        if (bVar8 < 0x81) {
          if ((bVar8 != 0x80) || (iVar5 = (int)uVar6, uVar7 - 1 == iVar5)) {
            bVar2 = false;
            uVar9 = 0;
            goto LAB_10ae1d284;
          }
          if (*(char *)(lVar10 + uVar6 + 1) == '\0') {
            uVar13 = (ulong)(int)((uVar7 - 1) - iVar5);
            uVar11 = 0;
            goto LAB_10ae1d3c0;
          }
        }
        bVar2 = false;
        goto LAB_10ae1d280;
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
    bVar2 = true;
    uVar6 = (ulong)uVar7;
  }
LAB_10ae1d280:
  uVar9 = 1;
  goto LAB_10ae1d284;
  while (lVar1 = lVar10 + uVar11, uVar12 = uVar11 + 1, uVar11 = uVar12,
        *(char *)(lVar1 + uVar6 + 2) == '\0') {
LAB_10ae1d3c0:
    uVar12 = uVar13;
    if (uVar13 - 1 == uVar11) break;
  }
  bVar2 = false;
  uVar9 = (uint)(uVar12 < (ulong)(long)(int)((uVar7 - 1) - iVar5));
LAB_10ae1d284:
  iVar5 = uVar7 - (int)uVar6;
  if ((int)(uVar9 ^ 0x7fffffff) < iVar5) {
    func_0x000107c2b29c(0xc,0,0x45,&UNK_10f6c491b,0x9b);
    return 0;
  }
  iVar5 = uVar9 + iVar5;
  if (param_2 != (long *)0x0) {
    if (uVar9 != 0) {
      *(undefined1 *)*param_2 = 0;
      uVar7 = *param_1;
    }
    iVar4 = uVar7 - (int)uVar6;
    if (iVar4 != 0) {
      _memcpy(*param_2 + (ulong)uVar9,*(long *)(param_1 + 2) + (uVar6 & 0xffffffff),(long)iVar4);
    }
    lVar10 = *param_2;
    uVar6 = (ulong)iVar5;
    if (iVar5 == 0) {
      bVar2 = true;
    }
    if (!bVar2) {
      bVar8 = 0;
      uVar11 = uVar6 - 1;
      do {
        cVar3 = *(char *)(lVar10 + uVar11);
        *(byte *)(lVar10 + uVar11) = -cVar3 - bVar8;
        bVar8 = bVar8 | cVar3 != '\0';
        uVar11 = uVar11 - 1;
      } while (uVar11 < uVar6);
      lVar10 = *param_2;
    }
    *param_2 = lVar10 + uVar6;
    return iVar5;
  }
  return iVar5;
}



/* Entry: 10ae1d4e0; end: 10ae1d59f;  */

void FUN_10ae1d4e0(int *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  
  if ((param_1[1] & 0xfffffeffU) != param_3) {
    uVar2 = 0xc3;
    uVar3 = 0x1ba;
LAB_10ae1d580:
    func_0x000107c2b29c(0xc,0,uVar2,&UNK_10f6c491b,uVar3);
    return;
  }
  plVar1 = *(long **)(param_1 + 2);
  func_0x000107c2b338(plVar1,(long)*param_1,param_2);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0x69;
    uVar3 = 0x1c0;
    goto LAB_10ae1d580;
  }
  if ((*(byte *)((long)param_1 + 5) & 1) == 0) {
    return;
  }
  lVar5 = (long)(int)plVar1[1];
  if ((int)plVar1[1] != 0) {
    uVar6 = 0;
    puVar7 = (ulong *)*plVar1;
    do {
      uVar6 = *puVar7 | uVar6;
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
    if (uVar6 != 0) {
      uVar4 = 1;
      goto LAB_10ae1d598;
    }
  }
  uVar4 = 0;
LAB_10ae1d598:
  *(undefined4 *)(plVar1 + 2) = uVar4;
  return;
}



/* Entry: 10ae1d5a0; end: 10ae1d6c7;  */

uint FUN_10ae1d5a0(ulong *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  byte *pbVar8;
  char cVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong auStack_138 [10];
  long lStack_e8;
  ulong auStack_88 [10];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    puVar7 = (ulong *)&UNK_10f6c4a8b;
    func_0x000107c2b1d4(param_1,&UNK_10f6c4a8b,4);
    uVar5 = (uint)param_1;
    if (uVar5 != 4) {
      uVar5 = 0xffffffff;
    }
  }
  else {
    puVar6 = auStack_88;
    puVar10 = auStack_88;
    puVar7 = (ulong *)0x50;
    func_0x00010ae4599c(puVar10,0x50,param_2,0);
    iVar4 = (int)puVar10;
    if (iVar4 < 0x50) {
      puVar10 = (ulong *)0x0;
    }
    else {
      uVar12 = (ulong)(iVar4 + 1);
      puVar6 = (ulong *)(uVar12 + 8);
      _malloc();
      if (puVar6 == (ulong *)0x0) {
        uVar5 = 0xffffffff;
        param_1 = (ulong *)0x0;
        goto LAB_10ae1d68c;
      }
      puVar10 = puVar6 + 1;
      *puVar6 = uVar12;
      puVar7 = puVar10;
      func_0x00010ae4599c(puVar10,uVar12,param_2,0);
      iVar4 = (int)puVar7;
      puVar6 = puVar10;
    }
    puVar7 = (ulong *)&UNK_10f6c4a90;
    if (0 < iVar4) {
      puVar7 = puVar6;
    }
    puVar6 = puVar7;
    _strlen();
    func_0x000107c2b1d4(param_1,puVar7,puVar6);
    uVar5 = (uint)puVar6;
    if ((uint)param_1 != uVar5) {
      uVar5 = 0xffffffff;
    }
    func_0x000107c2b534();
    param_1 = puVar10;
  }
LAB_10ae1d68c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar5;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  if (puVar7 == (ulong *)0x0) {
LAB_10ae1d7cc:
    uVar5 = 0;
  }
  else {
    uVar12 = (ulong)(uint)*puVar7;
    if (0 < (int)(uint)*puVar7) {
      lVar14 = 0;
      uVar13 = puVar7[1];
      do {
        lVar11 = 0;
        while( true ) {
          cVar9 = *(char *)(uVar13 + lVar14 + lVar11);
          if (cVar9 == '\x7f') {
            cVar9 = '.';
          }
          else {
            cVar1 = cVar9;
            if (cVar9 != '\n') {
              cVar1 = '.';
            }
            cVar2 = cVar9;
            if (cVar9 != '\r') {
              cVar2 = cVar1;
            }
            if (cVar9 < ' ') {
              cVar9 = cVar2;
            }
          }
          *(char *)((long)auStack_138 + lVar11) = cVar9;
          if (lVar11 == 0x4f) break;
          lVar11 = lVar11 + 1;
          if ((long)(int)uVar12 <= lVar14 + lVar11) {
            puVar6 = auStack_138;
            func_0x000107c2b1d4(param_1,puVar6,lVar11);
            if ((int)param_1 < 1) goto LAB_10ae1d7cc;
            goto LAB_10ae1d7c4;
          }
        }
        puVar6 = auStack_138;
        puVar10 = param_1;
        func_0x000107c2b1d4(param_1,puVar6,0x50);
        if ((int)puVar10 < 1) goto LAB_10ae1d7cc;
        uVar12 = (ulong)(int)(uint)*puVar7;
        lVar14 = lVar14 + 0x50;
      } while (lVar14 < (long)uVar12);
    }
LAB_10ae1d7c4:
    uVar5 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return uVar5;
  }
  ___stack_chk_fail(uVar5);
  uVar3 = (uint)*puVar6;
  if (0xb < (int)uVar3) {
    lVar14 = 0;
    uVar12 = puVar6[1];
    do {
      if (*(byte *)(uVar12 + lVar14) - 0x3a < 0xfffffff6) goto LAB_10ae1d820;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0xc);
    if (0xfffffff3 < ((int)*(char *)(uVar12 + 5) + *(char *)(uVar12 + 4) * 10) - 0x21dU) {
      if ((((0xd < (int)uVar3) && (*(byte *)(uVar12 + 0xc) - 0x30 < 10)) &&
          (*(byte *)(uVar12 + 0xd) - 0x30 < 10)) &&
         (((uVar3 != 0xe && (*(char *)(uVar12 + 0xe) == '.')) && (0xf < uVar3)))) {
        uVar13 = 1;
        pbVar8 = (byte *)(uVar12 + 0xf);
        do {
          if (9 < *pbVar8 - 0x30) break;
          uVar13 = uVar13 + 1;
          pbVar8 = pbVar8 + 1;
        } while (uVar3 - 0xe != uVar13);
      }
      FUN_10ae1ec34();
      return (uint)(0 < (int)uVar5);
    }
  }
LAB_10ae1d820:
  func_0x000107c2b1d4();
  return 0;
}



/* Entry: 10ae1d6c8; end: 10ae1d807;  */

uint FUN_10ae1d6c8(undefined8 param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  byte *pbVar7;
  ulong uVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint auStack_a8 [20];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  if (param_2 == (uint *)0x0) {
LAB_10ae1d7cc:
    uVar4 = 0;
  }
  else {
    uVar8 = (ulong)*param_2;
    if (0 < (int)*param_2) {
      lVar12 = 0;
      lVar11 = *(long *)(param_2 + 2);
      do {
        lVar10 = 0;
        while( true ) {
          cVar9 = *(char *)(lVar11 + lVar12 + lVar10);
          if (cVar9 == '\x7f') {
            cVar9 = '.';
          }
          else {
            cVar1 = cVar9;
            if (cVar9 != '\n') {
              cVar1 = '.';
            }
            cVar2 = cVar9;
            if (cVar9 != '\r') {
              cVar2 = cVar1;
            }
            if (cVar9 < ' ') {
              cVar9 = cVar2;
            }
          }
          *(char *)((long)auStack_a8 + lVar10) = cVar9;
          if (lVar10 == 0x4f) break;
          lVar10 = lVar10 + 1;
          if ((long)(int)uVar8 <= lVar12 + lVar10) {
            puVar6 = auStack_a8;
            func_0x000107c2b1d4(param_1,puVar6,lVar10);
            if ((int)param_1 < 1) goto LAB_10ae1d7cc;
            goto LAB_10ae1d7c4;
          }
        }
        puVar6 = auStack_a8;
        uVar5 = param_1;
        func_0x000107c2b1d4(param_1,puVar6,0x50);
        if ((int)uVar5 < 1) goto LAB_10ae1d7cc;
        uVar8 = (ulong)(int)*param_2;
        lVar12 = lVar12 + 0x50;
      } while (lVar12 < (long)uVar8);
    }
LAB_10ae1d7c4:
    uVar4 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail(uVar4);
  uVar3 = *puVar6;
  if (0xb < (int)uVar3) {
    lVar12 = 0;
    lVar11 = *(long *)(puVar6 + 2);
    do {
      if (*(byte *)(lVar11 + lVar12) - 0x3a < 0xfffffff6) goto LAB_10ae1d820;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0xc);
    if (0xfffffff3 < ((int)*(char *)(lVar11 + 5) + *(char *)(lVar11 + 4) * 10) - 0x21dU) {
      if ((((0xd < (int)uVar3) && (*(byte *)(lVar11 + 0xc) - 0x30 < 10)) &&
          (*(byte *)(lVar11 + 0xd) - 0x30 < 10)) &&
         (((uVar3 != 0xe && (*(char *)(lVar11 + 0xe) == '.')) && (0xf < uVar3)))) {
        uVar8 = 1;
        pbVar7 = (byte *)(lVar11 + 0xf);
        do {
          if (9 < *pbVar7 - 0x30) break;
          uVar8 = uVar8 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar3 - 0xe != uVar8);
      }
      FUN_10ae1ec34();
      return (uint)(0 < (int)uVar4);
    }
  }
LAB_10ae1d820:
  func_0x000107c2b1d4();
  return 0;
}



/* Entry: 10ae1d808; end: 10ae1d9e3;  */

bool FUN_10ae1d808(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *param_2;
  if (0xb < (int)uVar1) {
    lVar3 = 0;
    lVar4 = *(long *)(param_2 + 2);
    do {
      if (*(byte *)(lVar4 + lVar3) - 0x3a < 0xfffffff6) goto LAB_10ae1d820;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0xc);
    if (0xfffffff3 < ((int)*(char *)(lVar4 + 5) + *(char *)(lVar4 + 4) * 10) - 0x21dU) {
      if ((((0xd < (int)uVar1) && (*(byte *)(lVar4 + 0xc) - 0x30 < 10)) &&
          (*(byte *)(lVar4 + 0xd) - 0x30 < 10)) &&
         (((uVar1 != 0xe && (*(char *)(lVar4 + 0xe) == '.')) && (0xf < uVar1)))) {
        uVar5 = 1;
        pbVar2 = (byte *)(lVar4 + 0xf);
        do {
          if (9 < *pbVar2 - 0x30) break;
          uVar5 = uVar5 + 1;
          pbVar2 = pbVar2 + 1;
        } while (uVar1 - 0xe != uVar5);
      }
      FUN_10ae1ec34(param_1,&UNK_10f6c4aa9);
      return 0 < (int)param_1;
    }
  }
LAB_10ae1d820:
  func_0x000107c2b1d4(param_1,&UNK_10f6c4a9a,0xe);
  return false;
}



/* Entry: 10ae1d9e4; end: 10ae1da7b;  */

int FUN_10ae1d9e4(long param_1,byte *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    lVar2 = (long)param_3;
    do {
      uStack_42 = (&UNK_10f6c4acd)[*param_2 >> 4];
      uStack_41 = (&UNK_10f6c4acd)[(ulong)*param_2 & 0xf];
      lVar1 = param_1;
      func_0x000107c2b1d4(param_1,&uStack_42,2);
      if ((int)lVar1 != 2) {
        return -1;
      }
      lVar2 = lVar2 + -1;
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return param_3 << 1;
}



/* Entry: 10ae1da7c; end: 10ae1db27;  */

undefined8
FUN_10ae1da7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  puVar1 = &uStack_38;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  FUN_10ae1db28();
  if (param_5 == 0) {
    uVar4 = 0x2000;
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_5 + 0x18) & 0x2000;
    if ((*(ulong *)(param_5 + 0x20) & 2) != 0) {
      uVar4 = *(ulong *)(param_5 + 0x18);
    }
    uVar3 = *(undefined8 *)(param_5 + 8);
    uVar5 = *(undefined8 *)(param_5 + 0x10);
  }
  puVar2 = puVar1;
  func_0x000107c2b178(puVar1,param_2,param_3,param_4,uVar4,uVar3,uVar5);
  if ((int)puVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  return uVar3;
}



/* Entry: 10ae1db28; end: 10ae1db9b;  */

undefined4 * FUN_10ae1db28(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 auStack_48 [10];
  
  piVar3 = (int *)&UNK_10e517c80;
  puVar1 = auStack_48;
  auStack_48[0] = param_1;
  _bsearch(puVar1,&UNK_10e517c80,0x13,0x28,FUN_10ae1db9c);
  if (puVar1 != (undefined4 *)0x0) {
    return puVar1;
  }
  piVar2 = (int *)0x113310728;
  _pthread_rwlock_rdlock();
  if ((int)piVar2 == 0) {
    piVar2 = (int *)0x113310728;
    _pthread_rwlock_unlock();
    if ((int)piVar2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  _abort();
  uVar4 = (uint)(*piVar3 < *piVar2);
  if (*piVar2 < *piVar3) {
    uVar4 = 0xffffffff;
  }
  return (undefined4 *)(ulong)uVar4;
}



/* Entry: 10ae1db9c; end: 10ae1de23;  */

uint FUN_10ae1db9c(int *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10ae1de24; end: 10ae1dec3;  */

long FUN_10ae1de24(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    lVar1 = 4;
    func_0x000107c2b1ac();
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = lVar1;
    func_0x000107c2b1a4(lVar1,*(undefined8 *)(param_1 + 2),*param_1);
    if ((int)lVar2 != 0) {
      *(undefined4 *)(lVar1 + 4) = param_1[1];
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 4);
      return lVar1;
    }
    func_0x000107c2b534(*(undefined8 *)(lVar1 + 8));
    func_0x000107c2b534(lVar1);
  }
  return 0;
}



/* Entry: 10ae1dec4; end: 10ae1e02b;  */

uint FUN_10ae1dec4(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((*(byte *)((long)param_2 + 5) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      uVar1 = param_1;
      func_0x000107c2b1d4(param_1,&UNK_10f6c4e4f,1);
      if ((int)uVar1 != 1) {
        return 0xffffffff;
      }
    }
    if (*param_2 == 0) {
      func_0x000107c2b1d4(param_1,&UNK_10f6c4e51,2);
      uVar2 = uVar2 | 2;
      if ((int)param_1 != 2) {
        uVar2 = 0xffffffff;
      }
    }
    else if (0 < *param_2) {
      uVar3 = 0;
      do {
        if ((uVar3 != 0) && ((int)(uVar3 / 0x23) * 0x23 == (int)uVar3)) {
          uVar1 = param_1;
          func_0x000107c2b1d4(param_1,&UNK_10f6c4e54,2);
          if ((int)uVar1 != 2) {
            return 0xffffffff;
          }
          uVar2 = uVar2 + 2;
        }
        uStack_52 = (&UNK_10f6c4e3e)[*(byte *)(*(long *)(param_2 + 2) + uVar3) >> 4];
        uStack_51 = (&UNK_10f6c4e3e)[(ulong)*(byte *)(*(long *)(param_2 + 2) + uVar3) & 0xf];
        uVar1 = param_1;
        func_0x000107c2b1d4(param_1,&uStack_52,2);
        if ((int)uVar1 != 2) {
          return 0xffffffff;
        }
        uVar2 = uVar2 + 2;
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*param_2);
    }
  }
  return uVar2;
}



/* Entry: 10ae1e02c; end: 10ae1e23f;  */

void FUN_10ae1e02c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 1);
  if (*(int *)(param_2 + 1) <= *(int *)(param_1 + 1)) {
    iVar1 = *(int *)(param_2 + 1);
  }
  if (iVar1 != 0) {
    _memcmp(*param_1,*param_2,(long)iVar1);
  }
  return;
}



/* Entry: 10ae1e240; end: 10ae1e243;  */

long FUN_10ae1e240(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  do {
    lVar1 = (long)param_1 + 0x1c;
    func_0x00010021f0b0();
    if ((int)lVar1 == 0) {
      return lVar1;
    }
    plVar3 = (long *)param_1[5];
    param_1[5] = 0;
    if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x40), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    func_0x0001001e33e0(param_1);
    param_1 = plVar3;
  } while (plVar3 != (long *)0x0);
  return 1;
}



/* Entry: 10ae1e244; end: 10ae1e277;  */

void FUN_10ae1e244(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar2 = param_2;
  _strlen();
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (pcVar4 = *(code **)(*param_1 + 0x10), pcVar4 == (code *)0x0)) {
    uVar2 = 0x73;
    uVar3 = 0xa4;
  }
  else {
    if ((int)param_1[1] != 0) {
      if ((int)uVar2 < 1) {
        return;
      }
      plVar1 = param_1;
      (*pcVar4)(param_1,param_2);
      if ((int)plVar1 < 1) {
        return;
      }
      param_1[7] = param_1[7] + ((ulong)plVar1 & 0xffffffff);
      return;
    }
    uVar2 = 0x72;
    uVar3 = 0xa8;
  }
  func_0x0001004d2c58(0x11,0,uVar2,&UNK_10f6c5149,uVar3);
  return;
}



/* Entry: 10ae1e278; end: 10ae1e283;  */

uint FUN_10ae1e278(long param_1)

{
  return *(uint *)(param_1 + 0x10) & 8;
}



/* Entry: 10ae1e284; end: 10ae1e2cb;  */

ulong FUN_10ae1e284(ulong param_1)

{
  func_0x000107c2b1d8(param_1,10,0,0);
  return param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 10ae1e2cc; end: 10ae1e6c7;  */

undefined8 FUN_10ae1e2cc(ulong param_1,long *param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong *puVar10;
  undefined4 uVar11;
  long lVar12;
  undefined2 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 uStack_66;
  byte abStack_64 [4];
  
  uVar14 = param_1;
  func_0x000107c2b1d0(param_1,&uStack_66,2);
  iVar3 = (int)uVar14;
  iVar4 = iVar3;
  if (0 < iVar3) {
    puVar13 = &uStack_66;
    uVar15 = 2;
    do {
      uVar15 = uVar15 - (uVar14 & 0xffffffff);
      if (uVar15 == 0) {
        if ((((byte)uStack_66 ^ 0xff) & 0x1f) == 0) {
          uVar7 = 0x6d;
          uVar8 = 0x21d;
          goto LAB_10ae1e664;
        }
        uVar14 = (ulong)uStack_66._1_1_;
        if (-1 < (short)uStack_66) {
          lVar12 = 2;
          goto LAB_10ae1e3d8;
        }
        if ((((byte)uStack_66 >> 5 & 1) == 0) || ((uStack_66 & 0x7f00) != 0)) {
          uVar15 = uVar14 & 0x7f;
          if (((int)uVar15 - 5U & 0xff) < 0xfc) {
            uVar7 = 0x6d;
            uVar8 = 0x234;
            goto LAB_10ae1e664;
          }
          pbVar9 = abStack_64;
          uVar14 = uVar15;
          goto LAB_10ae1e590;
        }
        uVar14 = param_4;
        if (0x1001 < param_4) {
          uVar14 = 0x1002;
        }
        if (param_4 < 2) goto LAB_10ae1e64c;
        puVar5 = (ulong *)(uVar14 + 8);
        _malloc();
        if (puVar5 == (ulong *)0x0) {
          *param_2 = 0;
          goto LAB_10ae1e64c;
        }
        *puVar5 = uVar14;
        puVar5 = puVar5 + 1;
        *(ushort *)puVar5 = uStack_66;
        *param_2 = (long)puVar5;
        if (param_4 == 2) goto LAB_10ae1e50c;
        uVar15 = 2;
        goto LAB_10ae1e4a0;
      }
      puVar13 = (undefined2 *)((long)puVar13 + (uVar14 & 0xffffffff));
      uVar11 = (undefined4)uVar15;
      if (uVar15 >> 0x1f != 0) {
        uVar11 = 0x7fffffff;
      }
      uVar14 = param_1;
      func_0x000107c2b1d0(param_1,puVar13,uVar11);
      iVar4 = (int)uVar14;
    } while (0 < (int)uVar14);
  }
  if ((iVar3 < 1) && (iVar4 == 0)) {
    uVar7 = 0x7b;
    uVar8 = 0x211;
  }
  else {
    uVar7 = 0xa2;
    uVar8 = 0x213;
  }
  goto LAB_10ae1e664;
  while( true ) {
    pbVar9 = pbVar9 + (uVar6 & 0xffffffff);
    uVar14 = uVar14 - (uVar6 & 0xffffffff);
    if (uVar14 == 0) break;
LAB_10ae1e590:
    uVar11 = (undefined4)uVar14;
    if (uVar14 >> 0x1f != 0) {
      uVar11 = 0x7fffffff;
    }
    uVar6 = param_1;
    func_0x000107c2b1d0(param_1,pbVar9,uVar11);
    if ((int)uVar6 < 1) {
      uVar7 = 0xa2;
      uVar8 = 0x239;
      goto LAB_10ae1e664;
    }
  }
  if ((int)uVar15 != 0) {
    uVar14 = 0;
    lVar12 = uVar15 + 2;
    pbVar9 = abStack_64;
    do {
      uVar1 = (uint)*pbVar9 | (int)uVar14 << 8;
      uVar14 = (ulong)uVar1;
      uVar15 = uVar15 - 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar15 != 0);
    if (0x7f < uVar1) {
      if (uVar1 >> (ulong)((uStack_66._1_1_ & 0x1f) * 8 - 8 & 0x1f) == 0) {
        uVar7 = 0x6d;
        uVar8 = 0x24c;
      }
      else {
LAB_10ae1e3d8:
        if ((uVar14 >> 0x1f == 0) && (uVar15 = lVar12 + uVar14, uVar15 <= param_4)) {
          *param_3 = uVar15;
          puVar5 = (ulong *)(uVar15 + 8);
          _malloc();
          if (puVar5 != (ulong *)0x0) {
            puVar10 = puVar5 + 1;
            *puVar5 = uVar15;
            *param_2 = (long)puVar10;
            _memcpy(puVar10,&uStack_66,lVar12);
            if (uVar14 != 0) {
              lVar12 = (long)puVar10 + lVar12;
              do {
                uVar11 = (undefined4)uVar14;
                if (uVar14 >> 0x1f != 0) {
                  uVar11 = 0x7fffffff;
                }
                uVar15 = param_1;
                func_0x000107c2b1d0(param_1,lVar12,uVar11);
                if ((int)uVar15 < 1) {
                  func_0x000107c2b29c(0xc,0,0xa2,&UNK_10f6c5149,0x263);
                  func_0x000107c2b534(*param_2);
                  return 0;
                }
                lVar12 = lVar12 + (uVar15 & 0xffffffff);
                uVar14 = uVar14 - (uVar15 & 0xffffffff);
              } while (uVar14 != 0);
            }
            return 1;
          }
          *param_2 = 0;
          uVar7 = 0x41;
          uVar8 = 0x25e;
        }
        else {
          uVar7 = 0xb1;
          uVar8 = 0x256;
        }
      }
      goto LAB_10ae1e664;
    }
  }
  uVar7 = 0x6d;
  uVar8 = 0x246;
  goto LAB_10ae1e664;
  while( true ) {
    if (iVar4 == 0) {
      *param_3 = uVar15;
      return 1;
    }
    uVar15 = uVar15 + (long)iVar4;
    if ((uVar14 < param_4) && (uVar14 - uVar15 < 0x800)) {
      uVar6 = uVar14 + 0x1000;
      if (param_4 <= uVar14 + 0x1000) {
        uVar6 = param_4;
      }
      bVar2 = uVar14 < 0xfffffffffffff000;
      uVar14 = param_4;
      if (bVar2) {
        uVar14 = uVar6;
      }
      lVar12 = *param_2;
      func_0x000107c2b538(lVar12,uVar14);
      if (lVar12 == 0) break;
      *param_2 = lVar12;
    }
    if (uVar15 == uVar14) break;
LAB_10ae1e4a0:
    uVar6 = param_1;
    func_0x000107c2b1d0(param_1,*param_2 + uVar15,(int)uVar14 - (int)uVar15);
    iVar4 = (int)uVar6;
    if (iVar4 == -1) break;
  }
  puVar5 = (ulong *)*param_2;
LAB_10ae1e50c:
  func_0x000107c2b534(puVar5);
LAB_10ae1e64c:
  uVar7 = 0xa2;
  uVar8 = 0x22d;
LAB_10ae1e664:
  func_0x000107c2b29c(0xc,0,uVar7,&UNK_10f6c5149,uVar8);
  return 0;
}



/* Entry: 10ae1e6c8; end: 10ae1e7f7;  */

void FUN_10ae1e6c8(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _fopen();
  if (param_1 == 0) {
    func_0x000107c2b29c(2,0,0,&UNK_10f6c523b,0x62);
    piVar2 = (int *)0x5;
    func_0x000107c2b2a0();
    ___error();
    if (*piVar2 == 2) {
      uVar3 = 0x6e;
      uVar4 = 0x66;
    }
    else {
      uVar3 = 0x70;
      uVar4 = 0x68;
    }
    func_0x000107c2b29c(0x11,0,uVar3,&UNK_10f6c523b,uVar4);
  }
  else {
    lVar1 = param_1;
    func_0x00010ae1e7a4();
    if (lVar1 == 0) {
      _fclose(param_1);
    }
  }
  return;
}



/* Entry: 10ae1e7f8; end: 10ae1e927;  */

int FUN_10ae1e7f8(long param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    _fwrite(param_2,(long)param_3,1,*(undefined8 *)(param_1 + 0x20));
    if ((int)param_2 < 1) {
      param_3 = (int)param_2;
    }
    return param_3;
  }
  return 0;
}



/* Entry: 10ae1e928; end: 10ae1eb9b;  */

ulong FUN_10ae1e928(long param_1,int param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  uint uVar7;
  char acStack_34 [4];
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar7 = (uint)param_3;
  if (param_2 < 0xb) {
    if (2 < param_2) {
      if (param_2 != 3) {
        if (param_2 == 8) {
          return (long)*(int *)(param_1 + 0xc);
        }
        if (param_2 == 9) {
          *(uint *)(param_1 + 0xc) = uVar7;
          return 1;
        }
        return 0;
      }
_ftell:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__ftell_11034c378)(uVar4);
      return uVar4;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 0;
      }
      _feof(uVar4);
      iVar1 = (int)uVar4;
      goto LAB_10ae1ea10;
    }
    param_3 = 0;
  }
  else {
    if (param_2 < 0x6c) {
      if (param_2 == 0xb) {
        _fflush(uVar4);
        return (ulong)((int)uVar4 == 0);
      }
      if (param_2 != 0x6a) {
        if (param_2 == 0x6b) {
          if (param_4 != (ulong *)0x0) {
            *param_4 = uVar4;
          }
          return 1;
        }
        return 0;
      }
      FUN_10ae1eb9c(param_1);
      *(ulong **)(param_1 + 0x20) = param_4;
      *(undefined4 *)(param_1 + 8) = 1;
      *(uint *)(param_1 + 0xc) = uVar7 & 1;
      return 1;
    }
    if (param_2 == 0x6c) {
      FUN_10ae1eb9c(param_1);
      *(uint *)(param_1 + 0xc) = uVar7 & 1;
      if ((uVar7 >> 3 & 1) == 0) {
        if ((param_3 & 6) == 6) {
          pcVar5 = "r+";
        }
        else {
          pcVar5 = "r";
          if ((param_3 & 4) != 0) {
            pcVar5 = "w";
          }
          if ((param_3 & 6) == 0) {
            uVar2 = 100;
            uVar3 = 0xd7;
            goto LAB_10ae1eb80;
          }
        }
      }
      else {
        pcVar5 = "a";
        if ((param_3 & 2) != 0) {
          pcVar5 = "a+";
        }
      }
      lVar6 = 0;
      do {
        if (pcVar5[lVar6] == '\0') break;
        acStack_34[lVar6] = pcVar5[lVar6];
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      acStack_34[lVar6] = '\0';
      _fopen(param_4,acStack_34);
      if (param_4 != (ulong *)0x0) {
        *(ulong **)(param_1 + 0x20) = param_4;
        *(undefined4 *)(param_1 + 8) = 1;
        return 1;
      }
      func_0x000107c2b29c(2,0,0,&UNK_10f6c523b,0xdd);
      func_0x000107c2b2a0(5);
      uVar2 = 2;
      uVar3 = 0xdf;
LAB_10ae1eb80:
      func_0x000107c2b29c(0x11,0,uVar2,&UNK_10f6c523b,uVar3);
      return 0;
    }
    if (param_2 != 0x80) {
      if (param_2 != 0x85) {
        return 0;
      }
      goto _ftell;
    }
  }
  _fseek(uVar4,param_3,0);
  iVar1 = (int)uVar4;
LAB_10ae1ea10:
  return (long)iVar1;
}



/* Entry: 10ae1eb9c; end: 10ae1ec33;  */

undefined8 FUN_10ae1eb9c(long param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((*(int *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      _fclose();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}



/* Entry: 10ae1ec34; end: 10ae1ed4f;  */

ulong * FUN_10ae1ec34(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_190 [32];
  undefined8 uStack_170;
  ulong *puStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  ulong auStack_148 [32];
  long lStack_48;
  int iVar2;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = auStack_148;
  puVar8 = (ulong *)0x100;
  _vsnprintf(puVar7,0x100,param_2,&stack0x00000000);
  uVar3 = (uint)puVar7;
  if (-1 < (int)uVar3) {
    if (uVar3 < 0x100) {
      puVar8 = auStack_148;
      func_0x000107c2b1d4();
      puVar7 = param_1;
      goto LAB_10ae1ed18;
    }
    uVar11 = (ulong)(uVar3 + 1);
    puVar8 = (ulong *)(uVar11 + 8);
    _malloc();
    if (puVar8 != (ulong *)0x0) {
      puVar7 = puVar8 + 1;
      *puVar8 = uVar11;
      puVar6 = puVar7;
      _vsnprintf(puVar7,uVar11,param_2,&stack0x00000000);
      puVar8 = puVar7;
      func_0x000107c2b1d4(param_1,puVar7,puVar6);
      func_0x000107c2b534();
      goto LAB_10ae1ed18;
    }
    puVar7 = (ulong *)0x11;
    puVar8 = (ulong *)0x0;
    func_0x000107c2b29c(0x11,0,0x41,&UNK_10f6c5348,0x62);
  }
  param_1 = (ulong *)0xffffffff;
LAB_10ae1ed18:
  iVar5 = (int)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar1 = (int)auStack_190;
  iVar2 = (int)auStack_190;
  uStack_158 = 0x10ae1ed50;
  uStack_170 = param_2;
  puStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((int)puVar8[2] == 0) {
    iVar4 = iVar5;
    func_0x000107c2b214();
    if ((iVar4 != 0) &&
       ((puVar7 = puVar8, func_0x000107c2b32c(), ((ulong)puVar7 & 7) != 0 ||
        (func_0x000107c2b218(auStack_190,0), iVar1 != 0)))) {
      puVar7 = puVar8;
      func_0x000107c2b32c(puVar8);
      func_0x00010ae1ee20(auStack_190,(int)puVar7 + 7U >> 3,puVar8);
      if ((iVar2 != 0) && (func_0x000107c2b20c(), iVar5 != 0)) {
        return (ulong *)0x1;
      }
    }
    uVar9 = 0x76;
    uVar10 = 0x34;
  }
  else {
    uVar9 = 0x6d;
    uVar10 = 0x29;
  }
  func_0x000107c2b29c(3,0,uVar9,&UNK_10f6c53c2,uVar10);
  return (ulong *)0x0;
}



/* Entry: 10ae1ed50; end: 10ae1ee67;  */

undefined8 FUN_10ae1ed50(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar4 = param_1;
    func_0x000107c2b214(param_1,auStack_40,2);
    if (((int)uVar4 != 0) &&
       ((uVar3 = param_2, func_0x000107c2b32c(), (uVar3 & 7) != 0 ||
        (func_0x000107c2b218(auStack_40,0), iVar1 != 0)))) {
      uVar3 = param_2;
      func_0x000107c2b32c(param_2);
      func_0x00010ae1ee20(auStack_40,(int)uVar3 + 7U >> 3,param_2);
      if ((iVar2 != 0) && (func_0x000107c2b20c(), (int)param_1 != 0)) {
        return 1;
      }
    }
    uVar4 = 0x76;
    uVar5 = 0x34;
  }
  else {
    uVar4 = 0x6d;
    uVar5 = 0x29;
  }
  func_0x000107c2b29c(3,0,uVar4,&UNK_10f6c53c2,uVar5);
  return 0;
}



/* Entry: 10ae1ee68; end: 10ae1efbf;  */

long * FUN_10ae1ee68(long *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar12 = uVar3;
  if ((int)uVar3 < 1) {
LAB_10ae1eeb4:
    lVar13 = (long)(int)(uVar12 << 4 | 3);
  }
  else {
    lVar13 = 3;
    do {
      if (*(long *)(*param_1 + -8 + (ulong)uVar12 * 8) != 0) goto LAB_10ae1eeb4;
      uVar4 = uVar12 - 1;
      bVar2 = 0 < (int)uVar12;
      uVar12 = uVar4;
    } while (uVar4 != 0 && bVar2);
    uVar12 = 0;
  }
  plVar5 = (long *)(lVar13 + 8);
  _malloc();
  if (plVar5 == (long *)0x0) {
    func_0x000107c2b29c(3,0,0x41,&UNK_10f6c543b,0x54);
    return (long *)0x0;
  }
  *plVar5 = lVar13;
  plVar7 = plVar5 + 1;
  if ((int)param_1[2] != 0) {
    plVar7 = (long *)((long)plVar5 + 9);
    *(undefined1 *)(plVar5 + 1) = 0x2d;
  }
  if (uVar3 != 0) {
    uVar6 = 0;
    lVar13 = (long)(int)uVar3;
    puVar9 = (ulong *)*param_1;
    do {
      uVar6 = *puVar9 | uVar6;
      lVar13 = lVar13 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar13 != 0);
    plVar8 = plVar7;
    if (uVar6 != 0) goto LAB_10ae1ef18;
  }
  plVar8 = (long *)((long)plVar7 + 1);
  *(undefined1 *)plVar7 = 0x30;
LAB_10ae1ef18:
  if (0 < (int)uVar12) {
    bVar2 = false;
    uVar6 = (ulong)uVar12;
    do {
      uVar10 = 0x38;
      do {
        uVar11 = *(ulong *)(*param_1 + (uVar6 - 1) * 8) >> (uVar10 & 0x3f);
        bVar2 = bVar2 || (uVar11 & 0xff) != 0;
        if (bVar2) {
          *(undefined *)plVar8 = (&UNK_10e5180f0)[((uint)uVar11 & 0xff) >> 4];
          *(undefined *)((long)plVar8 + 1) = (&UNK_10e5180f0)[uVar11 & 0xf];
          plVar8 = (long *)((long)plVar8 + 2);
        }
        uVar10 = uVar10 - 8;
      } while (uVar10 != 0xfffffffffffffff8);
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  *(undefined1 *)plVar8 = 0;
  return plVar5 + 1;
}



/* Entry: 10ae1efc0; end: 10ae1f1a7;  */

long FUN_10ae1efc0(long *param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  cVar2 = *param_2;
  if (cVar2 == '\0') {
    return 0;
  }
  if (cVar2 == '-') {
    param_2 = param_2 + 1;
  }
  uVar14 = (uint)(cVar2 == '-');
  lVar13 = -4;
  uVar6 = 0xffffffffffffffff;
  do {
    lVar13 = lVar13 + 4;
    uVar16 = uVar6 + 1;
    if ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)(byte)param_2[uVar6 + 1] * 4 + 0x3c)
         >> 0x10 & 1) == 0) break;
    lVar1 = ((ulong)uVar14 - 0x7fffffff) + uVar6;
    uVar6 = uVar16;
  } while (lVar1 != -1);
  lVar1 = uVar14 + uVar16;
  if (param_1 == (long *)0x0) {
    return lVar1;
  }
  plVar12 = (long *)*param_1;
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1;
    func_0x000107c2b318();
    if (plVar12 == (long *)0x0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(plVar12 + 2) = 0;
    *(undefined4 *)(plVar12 + 1) = 0;
  }
  if (uVar16 >> 0x1d != 0) {
    func_0x000107c2b29c(3,0,0x66,&UNK_10f6c543b,0x75);
LAB_10ae1f14c:
    if (*param_1 == 0) {
      func_0x000107c2b31c(plVar12);
    }
    return 0;
  }
  plVar4 = plVar12;
  FUN_10ae2e280(plVar12,lVar13);
  if ((int)plVar4 == 0) goto LAB_10ae1f14c;
  if (uVar16 == 0) {
LAB_10ae1f140:
    uVar14 = 0;
    *(undefined4 *)(plVar12 + 1) = 0;
  }
  else {
    puVar5 = (ulong *)*plVar12;
    uVar6 = 0;
    do {
      uVar8 = 0;
      uVar15 = (uint)uVar16;
      uVar7 = uVar15;
      if (0xf < uVar15) {
        uVar7 = 0x10;
      }
      lVar13 = (ulong)uVar7 + 1;
      pcVar10 = param_2 + ((uVar16 & 0xffffffff) - (ulong)uVar7);
      do {
        cVar2 = *pcVar10;
        uVar3 = (int)cVar2 - 0x30;
        iVar11 = (int)cVar2;
        uVar7 = iVar11 - 0x37;
        if (5 < iVar11 - 0x41U) {
          uVar7 = 0;
        }
        if ((int)cVar2 - 0x61U < 6) {
          uVar7 = iVar11 - 0x57;
        }
        if (uVar3 < 10) {
          uVar7 = uVar3;
        }
        uVar8 = (ulong)uVar7 | uVar8 << 4;
        lVar13 = lVar13 + -1;
        pcVar10 = pcVar10 + 1;
      } while (1 < lVar13);
      uVar9 = uVar6 + 1;
      puVar5[uVar6] = uVar8;
      uVar7 = 0;
      if (0xf < uVar15) {
        uVar7 = uVar15 - 0x10;
      }
      uVar16 = (ulong)uVar7;
      uVar6 = uVar9;
    } while (0 < (int)uVar7);
    *(int *)(plVar12 + 1) = (int)uVar9;
    if (0 < (int)uVar9) {
      do {
        iVar11 = (int)uVar9;
        if (puVar5[(uVar9 & 0xffffffff) - 1] != 0) {
          *(int *)(plVar12 + 1) = iVar11;
          goto LAB_10ae1f180;
        }
        uVar9 = (ulong)(iVar11 - 1U);
      } while (iVar11 - 1U != 0 && 0 < iVar11);
      goto LAB_10ae1f140;
    }
LAB_10ae1f180:
    uVar6 = 0;
    lVar13 = (long)(int)uVar9;
    do {
      uVar6 = *puVar5 | uVar6;
      lVar13 = lVar13 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar13 != 0);
    if (uVar6 == 0) goto LAB_10ae1f1a0;
  }
  *(uint *)(plVar12 + 2) = uVar14;
LAB_10ae1f1a0:
  *param_1 = (long)plVar12;
  return lVar1;
}



/* Entry: 10ae1f1a8; end: 10ae1f5e3;  */

long FUN_10ae1f1a8(long *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  uint uVar11;
  ulong uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  puVar4 = auStack_80;
  func_0x000107c2b200(puVar4,0x10);
  if ((int)puVar4 == 0) {
LAB_10ae1f310:
    plVar10 = (long *)0x0;
  }
  else {
    puVar4 = auStack_80;
    func_0x000107c2b218(puVar4,0);
    if ((int)puVar4 == 0) goto LAB_10ae1f310;
    lVar6 = (long)(int)param_1[1];
    if ((int)param_1[1] == 0) {
LAB_10ae1f364:
      puVar4 = auStack_80;
      func_0x000107c2b218(puVar4,0x30);
      plVar10 = (long *)0x0;
      if ((int)puVar4 != 0) goto LAB_10ae1f378;
    }
    else {
      uVar8 = 0;
      puVar9 = (ulong *)*param_1;
      do {
        uVar8 = *puVar9 | uVar8;
        lVar6 = lVar6 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar6 != 0);
      if (uVar8 == 0) goto LAB_10ae1f364;
      plVar10 = param_1;
      FUN_10ae2e1dc();
      if (plVar10 == (long *)0x0) goto LAB_10ae1f330;
      iVar7 = (int)plVar10[1];
      while (iVar7 != 0) {
        while( true ) {
          uVar8 = 0;
          lVar6 = (long)iVar7;
          puVar9 = (ulong *)*plVar10;
          do {
            uVar8 = *puVar9 | uVar8;
            lVar6 = lVar6 + -1;
            puVar9 = puVar9 + 1;
          } while (lVar6 != 0);
          if (uVar8 == 0) goto LAB_10ae1f378;
          plVar5 = plVar10;
          FUN_10ae2ec34(plVar10,10000000000000000000);
          if (plVar5 == (long *)0xffffffffffffffff) goto LAB_10ae1f330;
          iVar7 = (int)plVar10[1];
          if (iVar7 == 0) {
            bVar3 = false;
          }
          else {
            uVar8 = 0;
            lVar6 = (long)iVar7;
            puVar9 = (ulong *)*plVar10;
            do {
              uVar8 = *puVar9 | uVar8;
              lVar6 = lVar6 + -1;
              puVar9 = puVar9 + 1;
            } while (lVar6 != 0);
            bVar3 = uVar8 != 0;
          }
          bVar2 = bVar3;
          if ((plVar5 != (long *)0x0) || (bVar2 = true, bVar3)) break;
          if (iVar7 == 0) goto LAB_10ae1f378;
        }
        uVar11 = 0;
        do {
          puVar4 = auStack_80;
          func_0x000107c2b218(puVar4,(int)plVar5 + (int)(long *)((ulong)plVar5 / 10) * -10 & 0xffU |
                                     0x30);
          if ((int)puVar4 == 0) goto LAB_10ae1f314;
          bVar3 = bVar2;
          if ((long *)0x9 < plVar5) {
            bVar3 = true;
          }
        } while ((uVar11 < 0x12) &&
                (uVar11 = uVar11 + 1, plVar5 = (long *)((ulong)plVar5 / 10), bVar3));
        iVar7 = (int)plVar10[1];
      }
LAB_10ae1f378:
      if ((int)param_1[2] != 0) {
        puVar4 = auStack_80;
        func_0x000107c2b218(puVar4,0x2d);
        if ((int)puVar4 == 0) goto LAB_10ae1f314;
      }
      puVar4 = auStack_80;
      func_0x000107c2b208(puVar4,&lStack_88,&uStack_90);
      if ((int)puVar4 != 0) {
        if (1 < uStack_90) {
          uVar8 = 0;
          lVar6 = -1;
          do {
            uVar1 = *(undefined1 *)(lStack_88 + uVar8);
            *(undefined1 *)(lStack_88 + uVar8) = *(undefined1 *)(lStack_88 + uStack_90 + lVar6);
            *(undefined1 *)(lStack_88 + uStack_90 + lVar6) = uVar1;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + -1;
          } while (uVar8 < uStack_90 >> 1);
        }
        func_0x000107c2b31c(plVar10);
        return lStack_88;
      }
    }
  }
LAB_10ae1f314:
  func_0x000107c2b29c(3,0,0x41,&UNK_10f6c543b,0x131);
LAB_10ae1f330:
  func_0x000107c2b31c(plVar10);
  func_0x000107c2b204(auStack_80);
  return 0;
}



/* Entry: 10ae1f5e4; end: 10ae1f7af;  */

void FUN_10ae1f5e4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uStack_60;
  int iStack_54;
  undefined1 auStack_50 [32];
  
  lVar1 = param_1;
  func_0x00010ae1f6bc(param_1,&iStack_54,0);
  if ((int)lVar1 != 0) {
    if (iStack_54 == 0) {
      func_0x000107c34f4c(param_1,param_2,0,0,0,0,0);
      if ((int)param_1 != 0) {
        *param_3 = 0;
      }
    }
    else {
      puVar2 = auStack_50;
      func_0x000107c2b200(puVar2,*(undefined8 *)(param_1 + 8));
      if (((int)puVar2 != 0) && (FUN_10ae1f7b0(param_1,auStack_50,0,0,0), (int)param_1 != 0)) {
        puVar2 = auStack_50;
        func_0x000107c2b208(puVar2,param_3,&uStack_60);
        if ((int)puVar2 != 0) {
          *param_2 = *param_3;
          param_2[1] = uStack_60;
          return;
        }
      }
      func_0x000107c2b204(auStack_50);
    }
  }
  return;
}



/* Entry: 10ae1f7b0; end: 10ae1f957;  */

ulong FUN_10ae1f7b0(short **param_1,undefined1 *param_2,ulong param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  short **ppsVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_b0 [36];
  int iStack_8c;
  ulong uStack_88;
  undefined4 uStack_7c;
  short *psStack_78;
  ulong uStack_70;
  undefined1 auStack_64 [4];
  
  if (param_5 < 0x801) {
    while( true ) {
      if (param_1[1] == (short *)0x0) {
        return (ulong)((int)param_4 == 0);
      }
      ppsVar4 = param_1;
      func_0x000107c34f4c(param_1,&psStack_78,&uStack_7c,&uStack_88,auStack_64,&iStack_8c,1);
      if ((int)ppsVar4 == 0) break;
      if ((uStack_88 == 2 && uStack_70 == 2) && (*psStack_78 == 0)) {
        return param_4;
      }
      uVar7 = (ulong)uStack_7c;
      if ((uint)param_3 == 0) {
        uVar9 = 0;
        if ((((uStack_7c >> 0x1d & 1) != 0) && (uVar1 = (uStack_7c & 0xdfffffff) - 4, uVar1 < 0x1b))
           && ((0x5e7c101U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
          uVar7 = (ulong)*(uint *)(&UNK_10e518104 + (ulong)uVar1 * 4);
          uVar9 = uVar7;
        }
        puVar5 = param_2;
        func_0x000107c2b214(param_2,auStack_b0,uVar7);
        puVar6 = auStack_b0;
        if ((int)puVar5 == 0) {
          return 0;
        }
      }
      else {
        uVar9 = param_3;
        puVar6 = param_2;
        if ((uStack_7c & 0xdfffffff) != (uint)param_3) {
          return 0;
        }
      }
      if (iStack_8c == 0) {
        bVar2 = uStack_70 < uStack_88;
        uStack_70 = uStack_70 - uStack_88;
        if (bVar2) {
          return 0;
        }
        psStack_78 = (short *)((long)psStack_78 + uStack_88);
        if ((uStack_7c._3_1_ >> 5 & 1) != 0) {
          ppsVar4 = &psStack_78;
          uVar8 = 0;
          goto LAB_10ae1f934;
        }
        func_0x000107c2b21c();
        iVar3 = (int)puVar6;
      }
      else {
        uVar8 = 1;
        ppsVar4 = param_1;
LAB_10ae1f934:
        FUN_10ae1f7b0(ppsVar4,puVar6,uVar9,uVar8,param_5 + 1);
        iVar3 = (int)ppsVar4;
      }
      if (iVar3 == 0) {
        return 0;
      }
      puVar5 = param_2;
      func_0x000107c2b20c();
      if ((int)puVar5 == 0) {
        return 0;
      }
    }
  }
  return 0;
}



/* Entry: 10ae1f958; end: 10ae1f9c7;  */

bool FUN_10ae1f958(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x20;
    puVar1[1] = param_2;
    puVar1[2] = 0;
    puVar1[3] = param_3;
    *param_1 = puVar1 + 1;
    *(undefined1 *)((long)param_1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
  }
  return puVar1 != (undefined8 *)0x0;
}



/* Entry: 10ae1f9c8; end: 10ae1fa6b;  */

bool FUN_10ae1f9c8(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar4 = 0;
  uVar6 = param_2;
  if (param_2 != 0) {
    do {
      uVar4 = uVar4 + 1;
      bVar1 = 0x7f < uVar6;
      uVar6 = uVar6 >> 7;
    } while (bVar1);
  }
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar2 = uVar4 * 7;
  uVar5 = uVar4;
  do {
    uVar2 = uVar2 - 7;
    uVar5 = uVar5 - 1;
    if (uVar4 <= uVar5) break;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = 0xffffff80;
    }
    uVar3 = param_1;
    func_0x000107c2b218(param_1,uVar7 & 0xff | (uint)(param_2 >> ((ulong)uVar2 & 0x3f)) & 0x7f);
  } while ((int)uVar3 != 0);
  return uVar4 <= uVar5;
}



/* Entry: 10ae1fa6c; end: 10ae1fabb;  */

undefined8 * FUN_10ae1fa6c(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar3 = param_1;
  func_0x000107c2b20c();
  if ((int)puVar3 == 0) {
    return puVar3;
  }
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = plVar4[1] + param_3;
  if (!CARRY8(plVar4[1],param_3)) {
    uVar5 = plVar4[2];
    if (uVar1 <= uVar5) {
code_r0x0001001ec1c0:
      if (param_2 != (long *)0x0) {
        *param_2 = *plVar4 + plVar4[1];
      }
      return (undefined8 *)0x1;
    }
    if ((char)plVar4[3] != '\0') {
      uVar6 = uVar5 * 2;
      if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
        uVar6 = uVar1;
      }
      if (-1 < (long)uVar5) {
        uVar1 = uVar6;
      }
      lVar2 = *plVar4;
      func_0x0001001e43fc(lVar2,uVar1);
      if (lVar2 != 0) {
        *plVar4 = lVar2;
        plVar4[2] = uVar1;
        goto code_r0x0001001ec1c0;
      }
    }
  }
  *(undefined1 *)((long)plVar4 + 0x19) = 1;
  return (undefined8 *)0x0;
}



/* Entry: 10ae1fabc; end: 10ae1fb3b;  */

void FUN_10ae1fabc(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_38;
  
  plVar2 = param_1;
  func_0x000107c2b20c();
  if ((int)plVar2 == 0) {
    return;
  }
  lVar3 = *param_1;
  param_2 = param_2 & 0xffffffff;
  lVar1 = lVar3;
  func_0x0001001ec148(lVar3,&lStack_38);
  if ((int)lVar1 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 3;
    uVar4 = 2;
    do {
      *(char *)(lStack_38 + uVar4) = (char)param_2;
      param_2 = param_2 >> 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 < 3);
    if (param_2 != 0) {
      *(undefined1 *)(lVar3 + 0x19) = 1;
    }
  }
  return;
}



/* Entry: 10ae1fb3c; end: 10ae1fc07;  */

void FUN_10ae1fb3c(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auStack_60 [32];
  
  iVar1 = (int)auStack_60;
  uVar3 = param_1;
  func_0x000107c2b214(param_1,auStack_60,2);
  if ((int)uVar3 == 0) {
    return;
  }
  bVar4 = true;
  lVar5 = 7;
  uVar6 = 0x38;
  do {
    uVar8 = param_2 >> (uVar6 & 0x3f);
    uVar7 = (uint)uVar8;
    if (bVar4) {
      if ((uVar8 & 0xff) != 0) {
        if (((uVar7 >> 7 & 1) != 0) &&
           (iVar2 = (int)auStack_60, func_0x000107c2b218(auStack_60,0), iVar2 == 0)) {
          return;
        }
        goto LAB_10ae1fba0;
      }
      if (lVar5 == 0) {
        func_0x000107c2b218(auStack_60,0);
        if (iVar1 == 0) {
          return;
        }
LAB_10ae1fbe8:
        func_0x000107c2b20c(param_1);
        return;
      }
      bVar4 = true;
    }
    else {
LAB_10ae1fba0:
      iVar2 = (int)auStack_60;
      func_0x000107c2b218(auStack_60,uVar7 & 0xff);
      if (iVar2 == 0) {
        return;
      }
      if (lVar5 == 0) goto LAB_10ae1fbe8;
      bVar4 = false;
    }
    lVar5 = lVar5 + -1;
    uVar6 = uVar6 - 8;
  } while( true );
}



/* Entry: 10ae1fc08; end: 10ae1fc67;  */

void FUN_10ae1fc08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  
  iVar1 = (int)auStack_50;
  uVar2 = param_1;
  func_0x000107c2b214(param_1,auStack_50,4);
  if (((int)uVar2 != 0) && (func_0x000107c2b21c(auStack_50,param_2,param_3), iVar1 != 0)) {
    func_0x000107c2b20c(param_1);
  }
  return;
}



/* Entry: 10ae1fc68; end: 10ae1fcbf;  */

void FUN_10ae1fc68(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_40;
  uVar2 = param_1;
  func_0x000107c2b214(param_1,auStack_40,1);
  if ((int)uVar2 != 0) {
    uVar3 = 0xff;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    func_0x000107c2b218(auStack_40,uVar3);
    if (iVar1 != 0) {
      func_0x000107c2b20c(param_1);
    }
  }
  return;
}



/* Entry: 10ae1fcc0; end: 10ae1fd87;  */

void FUN_10ae1fcc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  func_0x000107c2b20c();
  if ((int)uVar1 != 0) {
    puVar2 = &uStack_40;
    uStack_40 = param_2;
    lStack_38 = param_3;
    FUN_10ae1fd88(puVar2,&uStack_48);
    if ((int)puVar2 != 0) {
      puVar2 = &uStack_40;
      FUN_10ae1fd88(puVar2,&uStack_50);
      if (((((int)puVar2 != 0) && (uStack_48 < 3)) && (uStack_50 < 0x28 || uStack_48 == 2)) &&
         (uStack_50 < 0xffffffffffffffb0)) {
        uVar3 = uStack_50 + uStack_48 * 0x28;
        do {
          uVar1 = param_1;
          FUN_10ae1f9c8(param_1,uVar3);
          if ((int)uVar1 == 0) {
            return;
          }
          if (lStack_38 == 0) {
            return;
          }
          puVar2 = &uStack_40;
          FUN_10ae1fd88(puVar2,&uStack_48);
          uVar3 = uStack_48;
        } while ((int)puVar2 != 0);
      }
    }
  }
  return;
}



/* Entry: 10ae1fd88; end: 10ae1fe5b;  */

undefined4 FUN_10ae1fd88(long *param_1,ulong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  lVar4 = param_1[1];
  *param_2 = 0;
  if (lVar4 == 0) {
LAB_10ae1fe48:
    uVar2 = 0;
  }
  else {
    pbVar3 = (byte *)*param_1;
    lVar4 = lVar4 + -1;
    *param_1 = (long)(pbVar3 + 1);
    param_1[1] = lVar4;
    uVar5 = (uint)*pbVar3;
    if (*pbVar3 == 0x2e) {
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
      bVar1 = 0;
      pbVar3 = pbVar3 + 2;
      do {
        if (uVar5 - 0x3a < 0xfffffff6) goto LAB_10ae1fe48;
        if ((bool)(bVar1 & uVar6 == 0)) {
          return 0;
        }
        if (0x1999999999999999 < uVar6) {
          return 0;
        }
        uVar6 = uVar6 * 10;
        if (0x2f - (ulong)uVar5 <= uVar6 && uVar6 - (0x2f - (ulong)uVar5) != 0) goto LAB_10ae1fe48;
        uVar6 = (uVar5 + uVar6) - 0x30;
        *param_2 = uVar6;
        if (lVar4 == 0) {
          return 1;
        }
        lVar4 = lVar4 + -1;
        *param_1 = (long)pbVar3;
        param_1[1] = lVar4;
        uVar5 = (uint)pbVar3[-1];
        pbVar3 = pbVar3 + 1;
        bVar1 = 1;
        uVar7 = 1;
      } while (uVar5 != 0x2e);
    }
    uVar2 = 0;
    if (lVar4 != 0) {
      uVar2 = uVar7;
    }
  }
  return uVar2;
}



/* Entry: 10ae1fe5c; end: 10ae1fffb;  */

undefined8 FUN_10ae1fe5c(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lStack_60;
  long lStack_58;
  
  plVar4 = param_1;
  func_0x000107c2b20c();
  if ((int)plVar4 == 0) {
    return 0;
  }
  lVar5 = param_1[2] + (ulong)*(byte *)(param_1 + 3) + *(long *)*param_1;
  lVar1 = ((long *)*param_1)[1] - (param_1[2] + (ulong)*(byte *)(param_1 + 3));
  if (lVar1 == 0) {
    return 1;
  }
  uVar8 = 0;
  puVar6 = (undefined8 *)0x8;
  lStack_60 = lVar5;
  lStack_58 = lVar1;
  do {
    puVar10 = puVar6;
    iVar3 = (int)&lStack_60;
    func_0x000107c34f4c(&lStack_60,0,0,0,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    uVar8 = uVar8 + 1;
    puVar6 = puVar10 + 2;
  } while (lStack_58 != 0);
  if (uVar8 < 2) {
    return 1;
  }
  if (uVar8 >> 0x3c != 0) {
    return 0;
  }
  func_0x000107c2b544(lVar5,lVar1);
  _malloc();
  if (puVar6 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = puVar6 + 1;
    *puVar6 = puVar10 + 1;
    puVar10 = puVar9;
    uVar11 = uVar8;
    lVar2 = lVar5;
    if (lVar5 != 0) {
      do {
        lStack_58 = lVar1;
        lStack_60 = lVar2;
        iVar3 = (int)&lStack_60;
        func_0x000107c34f4c(&lStack_60,puVar10,0,0,0,0,0);
        if (iVar3 == 0) goto LAB_10ae1ffe4;
        uVar11 = uVar11 - 1;
        puVar10 = puVar10 + 2;
        lVar2 = lStack_60;
        lVar1 = lStack_58;
      } while (uVar11 != 0);
      _qsort(puVar9,uVar8,0x10,FUN_10ae1fffc);
      *(ulong *)(*param_1 + 8) = param_1[2] + (ulong)*(byte *)(param_1 + 3);
      do {
        plVar4 = param_1;
        func_0x000107c2b21c(param_1,puVar6[1],puVar6[2]);
        if ((int)plVar4 == 0) goto LAB_10ae1ffe4;
        uVar8 = uVar8 - 1;
        puVar6 = puVar6 + 2;
      } while (uVar8 != 0);
      uVar7 = 1;
      goto LAB_10ae1ffe8;
    }
  }
LAB_10ae1ffe4:
  uVar7 = 0;
LAB_10ae1ffe8:
  func_0x000107c2b534(lVar5);
  func_0x000107c2b534(puVar9);
  return uVar7;
}



/* Entry: 10ae1fffc; end: 10ae20053;  */

uint FUN_10ae1fffc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_1[1];
  uVar5 = param_2[1];
  uVar1 = uVar4;
  if (uVar5 <= uVar4) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    uVar3 = (uint)(uVar5 < uVar4);
    if (uVar5 > uVar4) {
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar2 = *param_1;
    _memcmp(uVar2,*param_2);
    uVar3 = (uint)(uVar5 < uVar4);
    if (uVar4 < uVar5) {
      uVar3 = 0xffffffff;
    }
    if ((uint)uVar2 != 0) {
      uVar3 = (uint)uVar2;
    }
  }
  return uVar3;
}



/* Entry: 10ae20054; end: 10ae2005b;  */

void FUN_10ae20054(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 10ae2005c; end: 10ae2009b;  */

bool FUN_10ae2005c(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 != 0) {
    func_0x000107c2b534();
  }
  lVar1 = *param_1;
  FUN_10ae4558c(lVar1,param_1[1]);
  *param_2 = lVar1;
  return lVar1 != 0;
}



/* Entry: 10ae2009c; end: 10ae200fb;  */

undefined8 FUN_10ae2009c(long *param_1,long *param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  
  uVar2 = param_1[1] - param_3;
  if ((ulong)param_1[1] < param_3) {
    return 0;
  }
  pbVar4 = (byte *)*param_1;
  pbVar1 = pbVar4 + param_3;
  *param_1 = (long)pbVar1;
  param_1[1] = uVar2;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = (ulong)*pbVar4 | uVar3 << 8;
      param_3 = param_3 - 1;
      pbVar4 = pbVar4 + 1;
    } while (param_3 != 0);
    if (uVar2 < uVar3) {
      return 0;
    }
  }
  *param_1 = (long)(pbVar1 + uVar3);
  param_1[1] = uVar2 - uVar3;
  *param_2 = (long)pbVar1;
  param_2[1] = uVar3;
  return 1;
}



/* Entry: 10ae200fc; end: 10ae2019b;  */

void FUN_10ae200fc(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lStack_30;
  long lStack_28;
  
  iVar2 = (int)&lStack_30;
  func_0x000107c34f50(param_1,&lStack_30,2,1);
  if ((((int)param_1 != 0) && (FUN_10ae2019c(), iVar2 != 0)) && (*param_2 = 0, lStack_28 != 0)) {
    uVar3 = 0;
    lVar4 = 0;
    do {
      *param_2 = uVar3 << 8;
      uVar1 = (ulong)*(byte *)(lStack_30 + lVar4) | uVar3 << 8;
      *param_2 = uVar1;
      if (lStack_28 + -1 == lVar4) {
        return;
      }
      uVar5 = uVar3 >> 0x30;
      uVar3 = uVar1;
      lVar4 = lVar4 + 1;
    } while (uVar5 == 0);
  }
  return;
}



/* Entry: 10ae2019c; end: 10ae201f7;  */

bool FUN_10ae2019c(undefined8 *param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint in_w8;
  bool bVar4;
  
  if (param_1[1] == 0) {
    bVar4 = false;
  }
  else {
    bVar2 = *(byte *)*param_1;
    in_w8 = (uint)(bVar2 >> 7);
    if (param_1[1] == 1) {
      bVar4 = true;
    }
    else {
      bVar3 = ((byte *)*param_1)[1];
      if ((bVar2 == 0) && (-1 < (char)bVar3)) {
        bVar4 = false;
      }
      else {
        bVar4 = bVar2 != 0xff || (uint)(int)(char)bVar3 < 0x80000000;
      }
    }
  }
  bVar1 = false;
  if (in_w8 == 0) {
    bVar1 = bVar4;
  }
  return bVar1;
}



/* Entry: 10ae201f8; end: 10ae2027f;  */

void FUN_10ae201f8(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined1 *puVar1;
  int iStack_44;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  func_0x000107c2b238(param_1,auStack_40,&iStack_44);
  if ((int)param_1 != 0) {
    if (iStack_44 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      puVar1 = auStack_40;
      func_0x000107c34f50(puVar1,param_2,4,1);
      if ((int)puVar1 == 0) {
        return;
      }
      if (lStack_38 != 0) {
        return;
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iStack_44;
    }
  }
  return;
}



/* Entry: 10ae20280; end: 10ae2038f;  */

void FUN_10ae20280(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iStack_34;
  undefined1 auStack_30 [16];
  
  func_0x000107c2b238(param_1,auStack_30,&iStack_34,param_3);
  if ((int)param_1 != 0) {
    if (iStack_34 == 0) {
      *param_2 = param_4;
    }
    else {
      FUN_10ae200fc(auStack_30,param_2);
    }
  }
  return;
}



/* Entry: 10ae20390; end: 10ae204ef;  */

undefined8 FUN_10ae20390(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  puVar3 = auStack_50;
  func_0x000107c2b200(puVar3,0x20);
  if ((int)puVar3 != 0) {
    uVar4 = 0;
    lVar8 = param_1[1];
    pbVar7 = (byte *)*param_1;
    do {
      if ((lVar8 == 0) || (uVar4 >> 0x39 != 0)) goto LAB_10ae204d0;
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar7;
      if ((uVar4 == 0) && (bVar1 == 0x80)) goto LAB_10ae204d0;
      uVar4 = (ulong)bVar1 & 0x7f | uVar4 << 7;
      lVar8 = lVar8 + -1;
      pbVar7 = pbVar6;
    } while ((char)bVar1 < '\0');
    uVar5 = uVar4 - 0x50;
    if (uVar4 < 0x50) {
      puVar3 = auStack_50;
      FUN_10ae20550(puVar3,0x27 < uVar4);
      if ((int)puVar3 != 0) {
        puVar3 = auStack_50;
        func_0x000107c2b218(puVar3,0x2e);
        if ((int)puVar3 != 0) {
          uVar5 = uVar4;
          if (uVar4 < 0x28) goto LAB_10ae20450;
          uVar5 = uVar4 - 0x28;
          goto LAB_10ae20450;
        }
      }
    }
    else {
      puVar3 = auStack_50;
      func_0x000107c2b21c(puVar3,&UNK_10f6c5524,2);
      iVar2 = (int)puVar3;
      while (iVar2 != 0) {
LAB_10ae20450:
        puVar3 = auStack_50;
        FUN_10ae20550(puVar3,uVar5);
        if ((int)puVar3 == 0) break;
        if (lVar8 == 0) {
          puVar3 = auStack_50;
          func_0x000107c2b218(puVar3,0);
          if ((int)puVar3 != 0) {
            puVar3 = auStack_50;
            func_0x000107c2b208(puVar3,&uStack_58,auStack_60);
            if ((int)puVar3 != 0) {
              return uStack_58;
            }
          }
          break;
        }
        uVar5 = 0;
        pbVar7 = pbVar6;
        do {
          if ((lVar8 == 0) || (uVar5 >> 0x39 != 0)) goto LAB_10ae204d0;
          pbVar6 = pbVar7 + 1;
          bVar1 = *pbVar7;
          if ((uVar5 == 0) && (bVar1 == 0x80)) goto LAB_10ae204d0;
          uVar5 = (ulong)bVar1 & 0x7f | uVar5 << 7;
          lVar8 = lVar8 + -1;
          pbVar7 = pbVar6;
        } while ((char)bVar1 < '\0');
        puVar3 = auStack_50;
        func_0x000107c2b218(puVar3,0x2e);
        iVar2 = (int)puVar3;
      }
    }
  }
LAB_10ae204d0:
  func_0x000107c2b204(auStack_50);
  return 0;
}



/* Entry: 10ae204f0; end: 10ae2054f;  */

undefined8 FUN_10ae204f0(long *param_1,ulong *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  
  uVar3 = 0;
  lVar2 = param_1[1];
  while( true ) {
    lVar2 = lVar2 + -1;
    if (lVar2 == -1) {
      return 0;
    }
    pbVar4 = (byte *)*param_1;
    *param_1 = (long)(pbVar4 + 1);
    param_1[1] = lVar2;
    if (uVar3 >> 0x39 != 0) break;
    bVar1 = *pbVar4;
    if ((uVar3 == 0) && (bVar1 == 0x80)) {
      return 0;
    }
    uVar3 = (ulong)bVar1 & 0x7f | uVar3 << 7;
    if (-1 < (char)bVar1) {
      *param_2 = uVar3;
      return 1;
    }
  }
  return 0;
}



/* Entry: 10ae20550; end: 10ae205cf;  */

long * FUN_10ae20550(long *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  ushort *puVar7;
  uint auStack_40 [6];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b540(auStack_40,0x18,&UNK_10f6c5527);
  puVar5 = auStack_40;
  _strlen(puVar5);
  puVar6 = auStack_40;
  func_0x000107c2b21c(param_1,puVar6,puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (1 < (ulong)param_1[1]) {
    puVar7 = (ushort *)*param_1;
    *param_1 = (long)(puVar7 + 1);
    param_1[1] = param_1[1] - 2;
    uVar1 = *puVar7;
    uVar3 = (uint)(uVar1 >> 8);
    uVar4 = (uVar1 & 0xff00ff) << 8;
    uVar2 = uVar3 | uVar4;
    if (((uVar4 & 0xf800) != 0xd800) &&
       (0x1f < (uVar2 + 0x230 & 0xffff) && (uVar3 & 0xfffe | uVar4) != 0xfffe)) {
      *puVar6 = uVar2;
      return (long *)0x1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10ae205d0; end: 10ae20753;  */

undefined8 FUN_10ae205d0(long *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  
  if (1 < (ulong)param_1[1]) {
    puVar5 = (ushort *)*param_1;
    *param_1 = (long)(puVar5 + 1);
    param_1[1] = param_1[1] - 2;
    uVar1 = *puVar5;
    uVar3 = (uint)(uVar1 >> 8);
    uVar4 = (uVar1 & 0xff00ff) << 8;
    uVar2 = uVar3 | uVar4;
    if (((uVar4 & 0xf800) != 0xd800) &&
       (0x1f < (uVar2 + 0x230 & 0xffff) && (uVar3 & 0xfffe | uVar4) != 0xfffe)) {
      *param_2 = uVar2;
      return 1;
    }
  }
  return 0;
}



/* Entry: 10ae20754; end: 10ae207c7;  */

code * FUN_10ae20754(code *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  undefined **ppuVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b240();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_1 != (code *)0x0) {
    pcVar1 = param_1;
    func_0x00010ae4549c();
    UNRECOVERED_JUMPTABLE = (code *)&DAT_10f6c5531;
    if ((int)pcVar1 != 0) {
      UNRECOVERED_JUMPTABLE = param_1;
    }
    ppuVar4 = &PTR_FUN_110c7bd38;
    lVar3 = 0x16;
    do {
      puVar2 = ppuVar4[-1];
      func_0x00010ae4549c(puVar2,UNRECOVERED_JUMPTABLE);
      if ((int)puVar2 == 0) {
        UNRECOVERED_JUMPTABLE = (code *)*ppuVar4;
                    /* WARNING: Could not recover jumptable at 0x00010ae20848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      ppuVar4 = ppuVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return (code *)0x0;
}



/* Entry: 10ae207c8; end: 10ae2084b;  */

code * FUN_10ae207c8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar3;
  long lVar4;
  
  if (param_1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010ae4549c(param_1,&UNK_10f6c552c);
    puVar1 = &DAT_10f6c5531;
    if ((int)puVar2 != 0) {
      puVar1 = param_1;
    }
    ppuVar3 = &PTR_FUN_110c7bd38;
    lVar4 = 0x16;
    do {
      puVar2 = ppuVar3[-1];
      func_0x00010ae4549c(puVar2,puVar1);
      if ((int)puVar2 == 0) {
        UNRECOVERED_JUMPTABLE = (code *)*ppuVar3;
                    /* WARNING: Could not recover jumptable at 0x00010ae20848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      ppuVar3 = ppuVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return (code *)0x0;
}



/* Entry: 10ae2084c; end: 10ae20abf;  */

undefined *
FUN_10ae2084c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uStack_d4;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d4 = 0;
  puVar4 = (undefined *)(ulong)*(uint *)(param_1 + 8);
  if (param_4 != 0) {
    iVar8 = 0;
    iVar6 = *(int *)(param_1 + 0xc);
    uStack_c8 = 0;
    lStack_d0 = 0;
    puStack_b8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    do {
      plVar2 = &lStack_d0;
      func_0x000107c2b418(plVar2,param_2,0);
      if ((int)plVar2 == 0) {
LAB_10ae20a4c:
        puVar4 = (undefined *)0x0;
        goto LAB_10ae20a50;
      }
      if (iVar8 != 0) {
        (**(code **)(lStack_d0 + 0x18))(&lStack_d0,&uStack_b0,uStack_d4);
      }
      (**(code **)(lStack_d0 + 0x18))(&lStack_d0,param_4,param_5);
      if (param_3 != 0) {
        (**(code **)(lStack_d0 + 0x18))(&lStack_d0,param_3,8);
      }
      plVar2 = &lStack_d0;
      func_0x000107c2b41c(plVar2,&uStack_b0,&uStack_d4);
      if ((int)plVar2 == 0) goto LAB_10ae20a4c;
      iVar5 = param_6 - 1;
      if (1 < param_6) {
        do {
          plVar2 = &lStack_d0;
          func_0x000107c2b418(plVar2,param_2,0);
          if ((int)plVar2 == 0) goto LAB_10ae20a4c;
          (**(code **)(lStack_d0 + 0x18))(&lStack_d0,&uStack_b0,uStack_d4);
          plVar2 = &lStack_d0;
          func_0x000107c2b41c(plVar2,&uStack_b0,&uStack_d4);
          if ((int)plVar2 == 0) goto LAB_10ae20a4c;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (puVar4 == (undefined *)0x0) {
        puVar1 = puVar4;
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = (undefined *)0x0;
        puVar7 = param_7;
        do {
          param_7 = puVar7;
          if (puVar3 == (undefined *)(ulong)uStack_d4) {
            puVar1 = (undefined *)(ulong)(uint)((int)puVar4 - (int)puVar3);
            goto joined_r0x00010ae20a00;
          }
          if (puVar7 != (undefined1 *)0x0) {
            param_7 = puVar7 + 1;
            *puVar7 = *(undefined1 *)((long)&uStack_b0 + (long)puVar3);
          }
          puVar3 = puVar3 + 1;
          puVar7 = param_7;
        } while ((int)puVar4 != (int)puVar3);
        puVar1 = (undefined *)0x0;
        puVar3 = puVar4;
      }
joined_r0x00010ae20a00:
      puVar4 = puVar1;
      if ((iVar6 != 0) && (puVar7 = param_8, (uint)puVar3 != uStack_d4)) {
        do {
          param_8 = puVar7;
          if ((uint)puVar3 == uStack_d4) break;
          if (puVar7 != (undefined1 *)0x0) {
            param_8 = puVar7 + 1;
            *puVar7 = *(undefined1 *)((long)&uStack_b0 + ((ulong)puVar3 & 0xffffffff));
          }
          puVar3 = (undefined *)(ulong)((uint)puVar3 + 1);
          iVar6 = iVar6 + -1;
          puVar7 = param_8;
        } while (iVar6 != 0);
      }
      iVar8 = iVar8 + 1;
    } while ((puVar4 != (undefined *)0x0) || (iVar6 != 0));
    puVar4 = (undefined *)(ulong)*(uint *)(param_1 + 8);
LAB_10ae20a50:
    func_0x000107c2b534(uStack_c8);
    if (puStack_b8 != (undefined8 *)0x0) {
      (*(code *)*puStack_b8)(uStack_c0);
    }
    uStack_c8 = 0;
    lStack_d0 = 0;
    puStack_b8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  return &UNK_110c7bf38;
}



/* Entry: 10ae20ac0; end: 10ae20acb;  */

undefined * FUN_10ae20ac0(void)

{
  return &UNK_110c7bf38;
}



/* Entry: 10ae20acc; end: 10ae20b37;  */

undefined8 FUN_10ae20acc(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x10;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  if (0x10 < uVar1) {
    func_0x000107c2b29c(0x1e,0,0x75,&UNK_10f6c5622,0x36);
    return 0;
  }
  if (param_3 == 0x20) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar4 = param_2[2];
    *(undefined8 *)(param_1 + 0x20) = param_2[3];
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(char *)(param_1 + 0x250) = (char)uVar1;
    return 1;
  }
  return 0;
}



/* Entry: 10ae20b38; end: 10ae20b3b;  */

void FUN_10ae20b38(void)

{
  return;
}



/* Entry: 10ae20b3c; end: 10ae20d5f;  */

/* WARNING: Possible PIC construction at 0x00010ae20e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae20d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae20e78) */
/* WARNING: Removing unreachable block (ram,0x00010ae20e9c) */
/* WARNING: Removing unreachable block (ram,0x00010ae20ea4) */
/* WARNING: Removing unreachable block (ram,0x00010ae20ebc) */
/* WARNING: Removing unreachable block (ram,0x00010ae20edc) */
/* WARNING: Removing unreachable block (ram,0x00010ae20ec0) */
/* WARNING: Removing unreachable block (ram,0x00010ae20d3c) */
/* WARNING: Removing unreachable block (ram,0x00010ae20d40) */
/* WARNING: Removing unreachable block (ram,0x00010ae20d50) */

undefined1 *
FUN_10ae20b3c(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,
             undefined1 *param_9,long param_10,undefined *param_11,undefined *param_12,
             ulong param_13)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_x19;
  undefined *puVar7;
  undefined1 *unaff_x20;
  undefined1 *puVar8;
  undefined1 *unaff_x22;
  undefined1 *puVar9;
  long unaff_x24;
  undefined1 *unaff_x25;
  ulong uVar10;
  ulong uVar11;
  undefined8 ****ppppuVar12;
  long lVar13;
  undefined1 auStack_1f0 [96];
  undefined8 auStack_190 [2];
  byte abStack_180 [56];
  long lStack_148;
  undefined *puStack_140;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  byte abStack_b0 [64];
  long lStack_70;
  
  ppuVar1 = &puStack_f0;
  ppppuVar12 = (undefined8 ****)&stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined1 *)(ulong)*(byte *)(param_1 + 0x250);
  puVar9 = puVar8 + (long)param_11;
  if (CARRY8((ulong)param_11,(ulong)puVar8)) {
    puVar6 = (undefined1 *)0x75;
    param_2 = (undefined1 *)0x75;
  }
  else if (param_5 < puVar9) {
    puVar6 = (undefined1 *)0x67;
    param_2 = (undefined1 *)0x79;
  }
  else if (param_7 == (undefined1 *)0xc) {
    if (param_9 < (undefined1 *)0x3fffffffc0) {
      puStack_b8 = param_12;
      if (param_11 != (undefined *)0x0) {
        uStack_e8 = param_13;
        puVar7 = (undefined *)0x0;
        uVar11 = (ulong)param_9 >> 6;
        puStack_e0 = param_9;
        uVar10 = (ulong)param_9 & 0x3f;
        puStack_d8 = param_8;
        puStack_d0 = param_2;
        puStack_c8 = puVar9;
        puStack_c0 = param_4;
        do {
          uVar11 = (ulong)((int)uVar11 + 1);
          abStack_b0[0x28] = 0;
          abStack_b0[0x29] = 0;
          abStack_b0[0x2a] = 0;
          abStack_b0[0x2b] = 0;
          abStack_b0[0x2c] = 0;
          abStack_b0[0x2d] = 0;
          abStack_b0[0x2e] = 0;
          abStack_b0[0x2f] = 0;
          abStack_b0[0x20] = 0;
          abStack_b0[0x21] = 0;
          abStack_b0[0x22] = 0;
          abStack_b0[0x23] = 0;
          abStack_b0[0x24] = 0;
          abStack_b0[0x25] = 0;
          abStack_b0[0x26] = 0;
          abStack_b0[0x27] = 0;
          abStack_b0[0x38] = 0;
          abStack_b0[0x39] = 0;
          abStack_b0[0x3a] = 0;
          abStack_b0[0x3b] = 0;
          abStack_b0[0x3c] = 0;
          abStack_b0[0x3d] = 0;
          abStack_b0[0x3e] = 0;
          abStack_b0[0x3f] = 0;
          abStack_b0[0x30] = 0;
          abStack_b0[0x31] = 0;
          abStack_b0[0x32] = 0;
          abStack_b0[0x33] = 0;
          abStack_b0[0x34] = 0;
          abStack_b0[0x35] = 0;
          abStack_b0[0x36] = 0;
          abStack_b0[0x37] = 0;
          abStack_b0[8] = 0;
          abStack_b0[9] = 0;
          abStack_b0[10] = 0;
          abStack_b0[0xb] = 0;
          abStack_b0[0xc] = 0;
          abStack_b0[0xd] = 0;
          abStack_b0[0xe] = 0;
          abStack_b0[0xf] = 0;
          abStack_b0[0] = 0;
          abStack_b0[1] = 0;
          abStack_b0[2] = 0;
          abStack_b0[3] = 0;
          abStack_b0[4] = 0;
          abStack_b0[5] = 0;
          abStack_b0[6] = 0;
          abStack_b0[7] = 0;
          abStack_b0[0x18] = 0;
          abStack_b0[0x19] = 0;
          abStack_b0[0x1a] = 0;
          abStack_b0[0x1b] = 0;
          abStack_b0[0x1c] = 0;
          abStack_b0[0x1d] = 0;
          abStack_b0[0x1e] = 0;
          abStack_b0[0x1f] = 0;
          abStack_b0[0x10] = 0;
          abStack_b0[0x11] = 0;
          abStack_b0[0x12] = 0;
          abStack_b0[0x13] = 0;
          abStack_b0[0x14] = 0;
          abStack_b0[0x15] = 0;
          abStack_b0[0x16] = 0;
          abStack_b0[0x17] = 0;
          FUN_10ae20754(abStack_b0,abStack_b0,0x40,param_1 + 8,param_6,uVar11);
          do {
            param_3[(long)puVar7] = abStack_b0[uVar10] ^ puVar7[param_10];
            puVar7 = puVar7 + 1;
            if (0x3e < uVar10) break;
            uVar10 = uVar10 + 1;
          } while (puVar7 < param_11);
          uVar10 = 0;
          param_8 = puStack_d8;
          param_4 = puStack_c0;
          puVar9 = puStack_c8;
          param_2 = puStack_d0;
          param_13 = uStack_e8;
          param_9 = puStack_e0;
        } while (puVar7 < param_11);
      }
      FUN_10ae20754(param_2,param_8,param_9,param_1 + 8,param_6,1);
      puStack_f0 = param_11;
      pbVar3 = abStack_b0;
      puVar5 = (undefined1 *)(param_1 + 8);
      lVar13 = 0x10ae20d3c;
      puVar7 = puStack_b8;
      param_7 = param_3;
      puVar6 = param_6;
      puVar2 = param_2;
      goto SUB_10ae20ee8;
    }
    puVar6 = (undefined1 *)0x75;
    param_2 = (undefined1 *)0x89;
  }
  else {
    puVar6 = (undefined1 *)0x79;
    param_2 = (undefined1 *)0x7d;
  }
  puVar7 = &UNK_10f6c5622;
  param_1 = 0;
  func_0x000107c2b29c(0x1e);
  puVar2 = (undefined1 *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  param_9 = param_6;
  ___stack_chk_fail();
  ppuVar1 = (undefined **)auStack_190;
  puStack_140 = param_11;
  pppuStack_100 = ppppuVar12;
  uStack_f8 = 0x10ae20d60;
  ppppuVar12 = &pppuStack_100;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar7 == (undefined *)0xc) {
    unaff_x19 = param_8;
    unaff_x25 = puVar2;
    if (param_8 == (undefined1 *)(ulong)(byte)puVar2[0x250]) {
      puVar8 = param_9;
      if (param_9 < (undefined1 *)0x3fffffffc0) {
        auStack_190[0] = 0;
        pbVar3 = abStack_180;
        puVar5 = puVar2 + 8;
        param_3 = (undefined1 *)0x0;
        lVar13 = 0x10ae20e78;
        param_6 = puVar6;
        puVar7 = puStack_f0;
        param_13 = uStack_e8;
        param_4 = param_8;
        puVar9 = param_2;
        goto SUB_10ae20ee8;
      }
      param_6 = (undefined1 *)0x75;
      param_13 = 0xf5;
    }
    else {
      param_6 = (undefined1 *)0x65;
      param_13 = 0xe9;
    }
  }
  else {
    param_6 = (undefined1 *)0x79;
    param_13 = 0xe4;
  }
  puVar7 = &UNK_10f6c5622;
  puVar5 = (undefined1 *)0x0;
  pbVar3 = (byte *)0x1e;
  func_0x000107c2b29c(0x1e,0,param_6,&UNK_10f6c5622);
  param_11 = (undefined *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return (undefined1 *)0x0;
  }
  lVar13 = 0x10ae20ee8;
  ___stack_chk_fail();
  ppuVar1 = (undefined **)auStack_190;
  param_2 = param_9;
  param_9 = param_7;
  param_3 = param_8;
  param_4 = unaff_x19;
  param_7 = unaff_x20;
  puVar6 = unaff_x22;
  param_1 = unaff_x24;
  puVar2 = unaff_x25;
SUB_10ae20ee8:
  ppuVar1[-10] = param_11;
  ppuVar1[-9] = puVar2;
  ppuVar1[-8] = (undefined *)param_1;
  ppuVar1[-7] = puVar9;
  ppuVar1[-6] = puVar6;
  ppuVar1[-5] = puVar8;
  ppuVar1[-4] = param_7;
  ppuVar1[-3] = param_4;
  ppuVar1[-2] = (undefined *)ppppuVar12;
  ppuVar1[-1] = (undefined *)lVar13;
  plVar4 = (long *)(ppuVar1 + -0x50);
  lVar13 = (long)*ppuVar1;
  ppuVar1[-0xb] = (undefined *)*(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1[-0xf] = (undefined *)0x0;
  ppuVar1[-0x10] = (undefined *)0x0;
  ppuVar1[-0xd] = (undefined *)0x0;
  ppuVar1[-0xe] = (undefined *)0x0;
  FUN_10ae20754(ppuVar1 + -0x10,ppuVar1 + -0x10,0x20,puVar5,param_6,0);
  FUN_10ae48330(ppuVar1 + -0x50,ppuVar1 + -0x10);
  FUN_10ae483b0(ppuVar1 + -0x50,puVar7,param_13);
  if ((param_13 & 0xf) != 0) {
    FUN_10ae483b0(ppuVar1 + -0x50,&UNK_10e518170,0x10 - (param_13 & 0xf));
  }
  FUN_10ae483b0(ppuVar1 + -0x50,param_2,param_9);
  FUN_10ae483b0(ppuVar1 + -0x50,param_3,lVar13);
  param_9 = param_9 + lVar13;
  if (((ulong)param_9 & 0xf) != 0) {
    FUN_10ae483b0(ppuVar1 + -0x50,&UNK_10e518170,0x10 - ((ulong)param_9 & 0xf));
  }
  lVar13 = 0;
  do {
    *(char *)((long)ppuVar1 + lVar13 + -0x60) = (char)param_13;
    param_13 = param_13 >> 8;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 8);
  FUN_10ae483b0(ppuVar1 + -0x50,ppuVar1 + -0xc,8);
  lVar13 = 0;
  do {
    *(char *)((long)ppuVar1 + lVar13 + -0x60) = (char)param_9;
    param_9 = (undefined1 *)((ulong)param_9 >> 8);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 8);
  FUN_10ae483b0(ppuVar1 + -0x50,ppuVar1 + -0xc,8);
  FUN_10ae486bc(ppuVar1 + -0x50,pbVar3);
  if ((undefined *)*(long *)PTR____stack_chk_guard_11034bdc0 != ppuVar1[-0xb]) {
    ___stack_chk_fail();
    return &UNK_110c7bf80;
  }
  return (undefined1 *)plVar4;
}



/* Entry: 10ae20d60; end: 10ae2106f;  */

/* WARNING: Possible PIC construction at 0x00010ae20e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae20e78) */
/* WARNING: Removing unreachable block (ram,0x00010ae20e9c) */
/* WARNING: Removing unreachable block (ram,0x00010ae20ea4) */
/* WARNING: Removing unreachable block (ram,0x00010ae20ebc) */
/* WARNING: Removing unreachable block (ram,0x00010ae20edc) */
/* WARNING: Removing unreachable block (ram,0x00010ae20ec0) */

undefined1 *
FUN_10ae20d60(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
             ulong param_6,ulong param_7,ulong param_8,undefined *param_9,ulong param_10)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar6;
  undefined1 auStack_320 [512];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [56];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0xc) {
    unaff_x19 = param_8;
    unaff_x25 = param_1;
    if (param_8 == *(byte *)(param_1 + 0x250)) {
      if (param_6 < 0x3fffffffc0) {
        lStack_a0 = 0;
        puVar2 = auStack_90;
        lVar5 = param_1 + 8;
        uVar4 = 0;
        uVar6 = 0x10ae20e78;
        uStack_c8 = param_6;
        uStack_d0 = param_3;
        uStack_d8 = param_5;
        goto SUB_10ae20ee8;
      }
      param_3 = 0x75;
      param_10 = 0xf5;
      unaff_x21 = param_6;
    }
    else {
      param_3 = 0x65;
      param_10 = 0xe9;
    }
  }
  else {
    param_3 = 0x79;
    param_10 = 0xe4;
  }
  param_9 = &UNK_10f6c5622;
  lVar5 = 0;
  puVar2 = (undefined1 *)0x1e;
  func_0x000107c2b29c(0x1e,0,param_3,&UNK_10f6c5622);
  unaff_x26 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)0x0;
  }
  uVar6 = 0x10ae20ee8;
  ___stack_chk_fail();
  param_5 = param_6;
  param_6 = param_7;
  uVar4 = param_8;
  param_8 = unaff_x19;
  param_7 = unaff_x20;
  uStack_c8 = unaff_x21;
  uStack_d0 = unaff_x22;
  uStack_d8 = unaff_x23;
  param_2 = unaff_x24;
  param_1 = unaff_x25;
SUB_10ae20ee8:
  lVar1 = lStack_a0;
  puVar3 = auStack_320;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f0 = unaff_x26;
  lStack_e8 = param_1;
  uStack_e0 = param_2;
  uStack_c0 = param_7;
  uStack_b8 = param_8;
  puStack_b0 = &stack0xfffffffffffffff0;
  uStack_a8 = uVar6;
  FUN_10ae20754(&uStack_120,&uStack_120,0x20,lVar5,param_3,0);
  FUN_10ae48330(auStack_320,&uStack_120);
  FUN_10ae483b0(auStack_320,param_9,param_10);
  if ((param_10 & 0xf) != 0) {
    FUN_10ae483b0(auStack_320,&UNK_10e518170,0x10 - (param_10 & 0xf));
  }
  FUN_10ae483b0(auStack_320,param_5,param_6);
  FUN_10ae483b0(auStack_320,uVar4,lVar1);
  param_6 = lVar1 + param_6;
  if ((param_6 & 0xf) != 0) {
    FUN_10ae483b0(auStack_320,&UNK_10e518170,0x10 - (param_6 & 0xf));
  }
  lVar5 = 0;
  do {
    auStack_100[lVar5] = (char)param_10;
    param_10 = param_10 >> 8;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 8);
  FUN_10ae483b0(auStack_320,auStack_100,8);
  lVar5 = 0;
  do {
    auStack_100[lVar5] = (char)param_6;
    param_6 = param_6 >> 8;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 8);
  FUN_10ae483b0(auStack_320,auStack_100,8);
  FUN_10ae486bc(auStack_320,puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar3;
  }
  ___stack_chk_fail();
  return &UNK_110c7bf80;
}



/* Entry: 10ae21070; end: 10ae210ab;  */

undefined * FUN_10ae21070(void)

{
  return &UNK_110c7bf80;
}



/* Entry: 10ae210ac; end: 10ae210ff;  */

undefined8 FUN_10ae210ac(long param_1,undefined8 param_2)

{
  func_0x00010ae25620(param_2,*(undefined8 *)(param_1 + 0x10));
  return 1;
}



/* Entry: 10ae21100; end: 10ae21177;  */

undefined8 FUN_10ae21100(long *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar3 = 0;
    lVar2 = param_1[2];
    do {
      FUN_10ae2681c(param_3 + uVar3,param_2 + uVar3,lVar2,*(undefined4 *)((long)param_1 + 0x1c));
      uVar3 = uVar3 + *(uint *)(*param_1 + 4);
    } while (uVar3 <= param_4 - uVar1);
  }
  return 1;
}



/* Entry: 10ae21178; end: 10ae211bf;  */

undefined8 FUN_10ae21178(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010ae25620(param_2,lVar1);
  func_0x00010ae25620(param_2 + 8,lVar1 + 0x80);
  func_0x00010ae25620(param_2 + 0x10,lVar1 + 0x100);
  return 1;
}



/* Entry: 10ae211c0; end: 10ae211f7;  */

undefined8 FUN_10ae211c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_10ae27b58(param_3,param_2,param_4,lVar1,lVar1 + 0x80,lVar1 + 0x100,param_1 + 0x34,
                *(undefined4 *)(param_1 + 0x1c));
  return 1;
}



/* Entry: 10ae211f8; end: 10ae2123f;  */

undefined8 FUN_10ae211f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010ae25620(param_2,lVar1);
  func_0x00010ae25620(param_2 + 8,lVar1 + 0x80);
  func_0x00010ae25620(param_2,lVar1 + 0x100);
  return 1;
}



/* Entry: 10ae21240; end: 10ae212bf;  */

undefined8 FUN_10ae21240(long *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar3 = 0;
    lVar2 = param_1[2];
    do {
      FUN_10ae27aa4(param_3 + uVar3,param_2 + uVar3,lVar2,lVar2 + 0x80,lVar2 + 0x100,
                    *(undefined4 *)((long)param_1 + 0x1c));
      uVar3 = uVar3 + *(uint *)(*param_1 + 4);
    } while (uVar3 <= param_4 - uVar1);
  }
  return 1;
}



/* Entry: 10ae212c0; end: 10ae212c7;  */

undefined8 FUN_10ae212c0(void)

{
  return 1;
}



/* Entry: 10ae212c8; end: 10ae212f7;  */

undefined8 FUN_10ae212c8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  if ((param_3 != param_2) && (param_4 != 0)) {
    _memcpy(param_2,param_3,param_4);
  }
  return 1;
}



/* Entry: 10ae212f8; end: 10ae2141f;  */

undefined * FUN_10ae212f8(void)

{
  return &UNK_110c7c100;
}



/* Entry: 10ae21420; end: 10ae214b7;  */

undefined8 FUN_10ae21420(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (0xffff < param_4) {
    do {
      FUN_10ae214e4(param_3,param_2,0x10000,lVar1 + 4,param_1 + 0x34,*(undefined4 *)(param_1 + 0x1c)
                   );
      param_4 = param_4 - 0x10000;
      param_3 = param_3 + 0x10000;
      param_2 = param_2 + 0x10000;
    } while (param_4 >> 0x10 != 0);
  }
  if (param_4 != 0) {
    FUN_10ae214e4(param_3,param_2,param_4,lVar1 + 4,param_1 + 0x34,*(undefined4 *)(param_1 + 0x1c));
  }
  return 1;
}



/* Entry: 10ae214b8; end: 10ae214e3;  */

undefined8 FUN_10ae214b8(long param_1,int param_2,int param_3)

{
  if (param_2 != 3) {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    param_3 = *(int *)(param_1 + 0x18) << 3;
  }
  **(int **)(param_1 + 0x10) = param_3;
  return 1;
}



/* Entry: 10ae214e4; end: 10ae21807;  */

void FUN_10ae214e4(uint *param_1,uint *param_2,ulong param_3,ushort *param_4,uint *param_5,
                  int param_6)

{
  bool bVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ushort *puVar12;
  int iVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined1 uVar16;
  int iVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  ushort *puVar21;
  uint *puVar22;
  ulong uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uStack_70;
  uint uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar28 = *param_5;
  uVar26 = param_5[1];
  if (param_6 == 0) {
    puVar22 = param_2;
    uVar23 = param_3;
    uVar27 = uVar28;
    uVar25 = uVar26;
    if (param_3 < 8) {
LAB_10ae21630:
      uVar27 = *param_1;
      uVar25 = param_1[1];
      puVar11 = &uStack_70;
      uStack_70 = uVar27;
      uStack_6c = uVar25;
      func_0x00010ae21918();
      uVar28 = uStack_70 ^ uVar28;
      puVar15 = (undefined1 *)((long)puVar22 + uVar23);
      if ((long)uVar23 < 4) {
        if (uVar23 != 1) {
          if (uVar23 != 2) goto LAB_10ae21778;
          goto LAB_10ae21780;
        }
      }
      else {
        uVar26 = uStack_6c ^ uVar26;
        if ((long)uVar23 < 6) {
          if (uVar23 != 4) goto LAB_10ae2176c;
        }
        else {
          if (uVar23 != 6) {
            puVar15 = puVar15 + -1;
            *puVar15 = (char)(uVar26 >> 0x10);
          }
          puVar15 = puVar15 + -1;
          *puVar15 = (char)(uVar26 >> 8);
LAB_10ae2176c:
          puVar15 = puVar15 + -1;
          *puVar15 = (char)uVar26;
        }
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar28 >> 0x18);
LAB_10ae21778:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar28 >> 0x10);
LAB_10ae21780:
        puVar15 = puVar15 + -1;
        *puVar15 = (char)(uVar28 >> 8);
      }
      puVar15[-1] = (char)uVar28;
      puVar12 = param_4;
    }
    else {
      do {
        uVar28 = *param_1;
        uVar26 = param_1[1];
        uVar23 = param_3 - 8;
        param_1 = param_1 + 2;
        puVar11 = &uStack_70;
        puVar12 = param_4;
        uStack_70 = uVar28;
        uStack_6c = uVar26;
        func_0x00010ae21918();
        uVar27 = uStack_70 ^ uVar27;
        uVar25 = uStack_6c ^ uVar25;
        *(char *)param_2 = (char)uVar27;
        *(char *)((long)param_2 + 1) = (char)(uVar27 >> 8);
        *(char *)((long)param_2 + 2) = (char)(uVar27 >> 0x10);
        *(char *)((long)param_2 + 3) = (char)(uVar27 >> 0x18);
        *(char *)(param_2 + 1) = (char)uVar25;
        *(char *)((long)param_2 + 5) = (char)(uVar25 >> 8);
        *(char *)((long)param_2 + 6) = (char)(uVar25 >> 0x10);
        puVar22 = param_2 + 2;
        *(char *)((long)param_2 + 7) = (char)(uVar25 >> 0x18);
        bVar1 = 0xf < param_3;
        param_2 = puVar22;
        param_3 = uVar23;
        uVar27 = uVar28;
        uVar25 = uVar26;
      } while (bVar1);
      if (uVar23 != 0) goto LAB_10ae21630;
    }
    *(char *)param_5 = (char)uVar27;
    *(char *)((long)param_5 + 1) = (char)(uVar27 >> 8);
    *(char *)((long)param_5 + 2) = (char)(uVar27 >> 0x10);
    *(char *)((long)param_5 + 3) = (char)(uVar27 >> 0x18);
    *(char *)(param_5 + 1) = (char)uVar25;
    *(char *)((long)param_5 + 5) = (char)(uVar25 >> 8);
    goto LAB_10ae217c4;
  }
  puVar22 = param_2;
  uVar23 = param_3;
  puVar24 = param_1;
  uStack_70 = uVar28;
  uStack_6c = uVar26;
  if (param_3 < 8) {
LAB_10ae21578:
    uVar28 = 0;
    pbVar14 = (byte *)((long)param_1 + param_3);
    if ((long)param_3 < 4) {
      uVar26 = 0;
      if (param_3 != 1) {
        if (param_3 != 2) goto LAB_10ae216b8;
        goto LAB_10ae216c0;
      }
    }
    else {
      if ((long)param_3 < 6) {
        uVar26 = uVar28;
        if (param_3 != 4) goto LAB_10ae216a4;
      }
      else {
        if (param_3 != 6) {
          pbVar14 = pbVar14 + -1;
          uVar28 = (uint)*pbVar14 << 0x10;
        }
        pbVar14 = pbVar14 + -1;
        uVar28 = uVar28 | (uint)*pbVar14 << 8;
LAB_10ae216a4:
        pbVar14 = pbVar14 + -1;
        uVar26 = uVar28 | *pbVar14;
      }
      pbVar14 = pbVar14 + -1;
      uVar28 = (uint)*pbVar14 << 0x18;
LAB_10ae216b8:
      pbVar14 = pbVar14 + -1;
      uVar28 = uVar28 | (uint)*pbVar14 << 0x10;
LAB_10ae216c0:
      pbVar14 = pbVar14 + -1;
      uVar28 = uVar28 | (uint)*pbVar14 << 8;
    }
    uStack_70 = (uVar28 | pbVar14[-1]) ^ uStack_70;
    uStack_6c = uVar26 ^ uStack_6c;
    puVar11 = &uStack_70;
    FUN_10ae21808();
    uVar20 = (undefined1)(uStack_70 >> 8);
    uVar19 = (undefined1)(uStack_70 >> 0x10);
    uVar18 = (undefined1)(uStack_70 >> 0x18);
    uVar16 = (undefined1)(uStack_6c >> 8);
    *param_2 = uStack_70;
    param_2[1] = uStack_6c;
    puVar12 = param_4;
  }
  else {
    do {
      param_3 = uVar23 - 8;
      param_1 = puVar24 + 2;
      uStack_70 = *puVar24 ^ uStack_70;
      uStack_6c = puVar24[1] ^ uStack_6c;
      puVar11 = &uStack_70;
      puVar12 = param_4;
      FUN_10ae21808();
      param_2 = puVar22 + 2;
      *puVar22 = uStack_70;
      puVar22[1] = uStack_6c;
      bVar1 = 0xf < uVar23;
      puVar22 = param_2;
      uVar23 = param_3;
      puVar24 = param_1;
    } while (bVar1);
    if (param_3 != 0) goto LAB_10ae21578;
    uVar16 = (undefined1)(uStack_6c >> 8);
    uVar18 = (undefined1)(uStack_70 >> 0x18);
    uVar19 = (undefined1)(uStack_70 >> 0x10);
    uVar20 = (undefined1)(uStack_70 >> 8);
  }
  *(char *)param_5 = (char)uStack_70;
  *(undefined1 *)((long)param_5 + 1) = uVar20;
  *(undefined1 *)((long)param_5 + 2) = uVar19;
  *(undefined1 *)((long)param_5 + 3) = uVar18;
  *(char *)(param_5 + 1) = (char)uStack_6c;
  *(undefined1 *)((long)param_5 + 5) = uVar16;
  uVar25 = uStack_6c;
LAB_10ae217c4:
  *(char *)((long)param_5 + 6) = (char)(uVar25 >> 0x10);
  *(char *)((long)param_5 + 7) = (char)(uVar25 >> 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uVar28 = *puVar11;
    uVar27 = puVar11[1];
    uVar26 = uVar28 >> 0x10;
    uVar25 = uVar27 >> 0x10;
    iVar17 = 3;
    iVar13 = 5;
    puVar21 = puVar12;
    while( true ) {
      do {
        uVar28 = (uint)*puVar21 + (uVar26 & (uVar25 ^ 0xffffffff)) + uVar28 + (uVar25 & uVar27);
        uVar4 = uVar28 >> 0xf & 1;
        uVar8 = (uVar28 & 0xffff) << 1;
        uVar28 = uVar4 | uVar8;
        uVar26 = (uint)puVar21[1] + (uVar28 & uVar25) + (uVar27 & (uVar28 ^ 0xffffffff)) + uVar26;
        uVar5 = uVar26 >> 0xe & 3;
        uVar9 = (uVar26 & 0xffff) << 2;
        uVar26 = uVar5 | uVar9;
        uVar27 = (uint)puVar21[2] + (uVar28 & uVar26) + (uVar25 & (uVar26 ^ 0xffffffff)) + uVar27;
        uVar6 = uVar27 >> 0xd & 7;
        uVar10 = (uVar27 & 0xffff) << 3;
        uVar27 = uVar6 | uVar10;
        puVar2 = puVar21 + 4;
        uVar25 = (uint)puVar21[3] + (uVar26 & uVar27) + (uVar28 & (uVar27 ^ 0xffffffff)) + uVar25;
        uVar7 = uVar25 >> 0xb & 0x1f;
        uVar3 = (uVar25 & 0xffff) << 5;
        uVar25 = uVar7 | uVar3;
        iVar13 = iVar13 + -1;
        puVar21 = puVar2;
      } while (iVar13 != 0);
      uVar28 = uVar4 | uVar8 & 0xffff;
      uVar27 = uVar6 | uVar10 & 0xffff;
      iVar17 = iVar17 + -1;
      if (iVar17 == 0) break;
      iVar13 = 5;
      if (iVar17 == 2) {
        iVar13 = 6;
      }
      uVar28 = uVar28 + puVar12[uVar7 | uVar3 & 0x3f];
      uVar26 = (uVar5 | uVar9 & 0xffff) + (uint)puVar12[uVar28 & 0x3f];
      uVar27 = uVar27 + puVar12[uVar26 & 0x3f];
      uVar25 = uVar25 + puVar12[uVar27 & 0x3f];
    }
    *puVar11 = uVar28 | uVar26 << 0x10;
    puVar11[1] = uVar27 | uVar25 << 0x10;
    return;
  }
  return;
}



/* Entry: 10ae21808; end: 10ae21a43;  */

void FUN_10ae21808(uint *param_1,ushort *param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  
  uVar13 = *param_1;
  uVar15 = param_1[1];
  uVar14 = uVar13 >> 0x10;
  uVar11 = uVar15 >> 0x10;
  iVar12 = 3;
  iVar10 = 5;
  puVar16 = param_2;
  while( true ) {
    do {
      uVar13 = (uint)*puVar16 + (uVar14 & (uVar11 ^ 0xffffffff)) + uVar13 + (uVar11 & uVar15);
      uVar3 = uVar13 >> 0xf & 1;
      uVar7 = (uVar13 & 0xffff) << 1;
      uVar13 = uVar3 | uVar7;
      uVar14 = (uint)puVar16[1] + (uVar13 & uVar11) + (uVar15 & (uVar13 ^ 0xffffffff)) + uVar14;
      uVar4 = uVar14 >> 0xe & 3;
      uVar8 = (uVar14 & 0xffff) << 2;
      uVar14 = uVar4 | uVar8;
      uVar15 = (uint)puVar16[2] + (uVar13 & uVar14) + (uVar11 & (uVar14 ^ 0xffffffff)) + uVar15;
      uVar5 = uVar15 >> 0xd & 7;
      uVar9 = (uVar15 & 0xffff) << 3;
      uVar15 = uVar5 | uVar9;
      puVar1 = puVar16 + 4;
      uVar11 = (uint)puVar16[3] + (uVar14 & uVar15) + (uVar13 & (uVar15 ^ 0xffffffff)) + uVar11;
      uVar6 = uVar11 >> 0xb & 0x1f;
      uVar2 = (uVar11 & 0xffff) << 5;
      uVar11 = uVar6 | uVar2;
      iVar10 = iVar10 + -1;
      puVar16 = puVar1;
    } while (iVar10 != 0);
    uVar13 = uVar3 | uVar7 & 0xffff;
    uVar15 = uVar5 | uVar9 & 0xffff;
    iVar12 = iVar12 + -1;
    if (iVar12 == 0) break;
    iVar10 = 5;
    if (iVar12 == 2) {
      iVar10 = 6;
    }
    uVar13 = uVar13 + param_2[uVar6 | uVar2 & 0x3f];
    uVar14 = (uVar4 | uVar8 & 0xffff) + (uint)param_2[uVar13 & 0x3f];
    uVar15 = uVar15 + param_2[uVar14 & 0x3f];
    uVar11 = uVar11 + param_2[uVar15 & 0x3f];
  }
  *param_1 = uVar13 | uVar14 << 0x10;
  param_1[1] = uVar15 | uVar11 << 0x10;
  return;
}



/* Entry: 10ae21a44; end: 10ae21a93;  */

undefined8 FUN_10ae21a44(long param_1,undefined8 param_2)

{
  func_0x00010ae48840(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  return 1;
}



/* Entry: 10ae21a94; end: 10ae21afb;  */

/* WARNING: Removing unreachable block (ram,0x00010ae22374) */

undefined8 FUN_10ae21a94(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  puVar2 = param_1;
  FUN_10ae34928();
  puVar3 = puVar2;
  func_0x000107c2b424();
  if ((param_4 == 0) || (param_4 == *(uint *)((long)puVar3 + 4))) {
    if (param_3 == *(byte *)*param_1) {
      uVar1 = *(uint *)((long)puVar3 + 4);
      uVar8 = (ulong)uVar1;
      puVar7 = param_1 + 1;
      param_1[2] = 0;
      *puVar7 = 0;
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      param_1[0x12] = 0;
      param_1[0x11] = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      puVar9 = param_1 + 0x13;
      *puVar9 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      if (uVar1 != 0) {
        _memcpy(param_1 + 0x20,param_2,uVar8);
      }
      *(char *)(param_1 + 0x28) = (char)uVar1;
      *(undefined1 *)((long)param_1 + 0x141) = 0;
      puVar4 = puVar7;
      FUN_10ae340b8(puVar7,puVar2,0,param_2 + uVar8,0,param_5 == 1);
      if (((int)puVar4 != 0) &&
         (puVar2 = puVar9, func_0x000107c2b494(puVar9,param_2,uVar8,puVar3,0), (int)puVar2 != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
        return 1;
      }
      FUN_10ae33ff8(puVar7);
      func_0x000107c2b49c(puVar9);
      return 0;
    }
    uVar5 = 0x66;
    uVar6 = 0x4a;
  }
  else {
    uVar5 = 0x7a;
    uVar6 = 0x45;
  }
  func_0x000107c2b29c(0x1e,0,uVar5,&UNK_10f6c56aa,uVar6);
  return 0;
}



/* Entry: 10ae21afc; end: 10ae21b23;  */

void FUN_10ae21afc(long param_1)

{
  FUN_10ae33ff8(param_1 + 8);
  func_0x0001001e33e0(*(undefined8 *)(param_1 + 200));
  if (*(undefined8 **)(param_1 + 0xd8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xd0));
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  func_0x0001001e33e0(*(undefined8 *)(param_1 + 0xe8));
  if (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(param_1 + 0xf8))(*(undefined8 *)(param_1 + 0xf0));
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  func_0x0001001e33e0(*(undefined8 *)(param_1 + 0xa8));
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xb0));
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 10ae21b24; end: 10ae22277;  */

long * FUN_10ae21b24(long *param_1,ulong *param_2,ulong *param_3,long *param_4,long *param_5,
                    ulong param_6,long *param_7,long *param_8,undefined8 *param_9,long param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  long *plVar7;
  int *piVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *unaff_x19;
  ulong *unaff_x20;
  long *unaff_x21;
  byte *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long lVar24;
  int *unaff_x25;
  undefined7 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auStack_2e8 [4];
  int iStack_2e4;
  uint uStack_2e0;
  ushort uStack_2da;
  ulong auStack_2d8 [32];
  ulong auStack_1d8 [8];
  long lStack_198;
  undefined8 *puStack_190;
  undefined7 *puStack_188;
  int *piStack_178;
  long *plStack_170;
  long *plStack_168;
  byte *pbStack_160;
  long *plStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  undefined4 uStack_12c;
  uint uStack_124;
  ulong *puStack_120;
  long lStack_118;
  long *plStack_110;
  int iStack_104;
  byte abStack_100 [64];
  ulong auStack_c0 [8];
  undefined7 uStack_80;
  undefined4 uStack_79;
  ushort uStack_75;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)((long)param_1 + 0x24) == 0) {
    unaff_x22 = (byte *)(param_1 + 0x13);
    unaff_x23 = param_8;
    if (param_8 < (long *)(ulong)*(uint *)(*(long *)unaff_x22 + 4)) {
      puVar15 = (ulong *)0x65;
      param_5 = (long *)0xff;
      goto LAB_10ae21c48;
    }
    if (param_4 < param_8) {
      puVar15 = (ulong *)0x67;
      param_5 = (long *)0x106;
      goto LAB_10ae21c48;
    }
    if (param_6 != *(byte *)(*param_1 + 1)) {
      puVar15 = (ulong *)0x6f;
      param_5 = (long *)0x10b;
      goto LAB_10ae21c48;
    }
    if (param_10 != 0xb) {
      puVar15 = (ulong *)0x6d;
      param_5 = (long *)0x110;
      goto LAB_10ae21c48;
    }
    if ((ulong)param_8 >> 0x1f != 0) {
      puVar15 = (ulong *)0x75;
      param_5 = (long *)0x116;
      goto LAB_10ae21c48;
    }
    plVar11 = param_7;
    plVar12 = param_8;
    unaff_x24 = param_7;
    if (((*(uint *)(param_1[1] + 0x14) & 0x3f) != 2) || (*(char *)((long)param_1 + 0x141) != '\0'))
    {
LAB_10ae21cc8:
      plVar7 = param_1 + 1;
      puVar15 = (ulong *)&iStack_104;
      puVar13 = param_2;
      plVar17 = param_7;
      param_5 = param_8;
      FUN_10ae34628(plVar7,param_2,puVar15);
      if ((int)plVar7 == 0) goto LAB_10ae21c50;
      unaff_x23 = (long *)(long)iStack_104;
      plVar7 = param_1 + 1;
      puVar13 = (ulong *)((long)param_2 + (long)unaff_x23);
      puVar15 = (ulong *)&iStack_104;
      FUN_10ae347b8(plVar7,puVar13,puVar15);
      if ((int)plVar7 == 0) goto LAB_10ae21c50;
      unaff_x27 = &uStack_80;
      unaff_x24 = (long *)((long)iStack_104 + (long)unaff_x23);
      unaff_x19 = param_3;
      unaff_x20 = param_2;
      unaff_x28 = param_9;
      if ((*(uint *)(param_1[1] + 0x14) & 0x3f) == 2) {
        unaff_x25 = *(int **)unaff_x22;
        unaff_x23 = (long *)(ulong)(uint)unaff_x25[1];
        plVar7 = &lStack_118;
        FUN_10ae226c0(plVar7,&plStack_110,param_2,unaff_x24,*(undefined4 *)(param_1[1] + 4),
                      unaff_x23);
        plVar17 = plStack_110;
        param_7 = plVar11;
        param_8 = plVar12;
        if ((int)plVar7 == 0) {
          puVar15 = (ulong *)0x65;
          param_5 = (long *)0x13a;
          goto LAB_10ae21c48;
        }
        unaff_x23 = (long *)((long)plStack_110 - (long)unaff_x23);
        uStack_80 = (undefined7)*param_9;
        uStack_79 = *(undefined4 *)((long)param_9 + 7);
        uStack_75 = (ushort)((ulong)unaff_x23 >> 8) & 0xff |
                    (ushort)(((uint)unaff_x23 & 0xff00ff) << 8);
        if (*unaff_x25 != 0x40) goto LAB_10ae21dfc;
        uStack_130 = (uint)*(byte *)(param_1 + 0x28);
        param_8 = param_1 + 0x20;
        piVar8 = unaff_x25;
        param_7 = unaff_x24;
        func_0x00010ae22b98(unaff_x25,auStack_c0,&puStack_120,&uStack_80,param_2,unaff_x23,unaff_x24
                            ,param_8);
        if ((int)piVar8 == 0) {
          puVar15 = (ulong *)0x65;
          param_5 = (long *)0x15c;
          goto LAB_10ae21c48;
        }
        unaff_x22 = abStack_100;
        puVar13 = puStack_120;
        puVar15 = param_2;
        param_5 = unaff_x24;
        FUN_10ae22758(abStack_100,puStack_120,param_2);
LAB_10ae21e64:
        bVar6 = false;
        if (puStack_120 != (ulong *)0x0) {
          puVar14 = auStack_c0;
          pbVar9 = unaff_x22;
          do {
            unaff_x22 = pbVar9 + 1;
            bVar6 = (byte)*puVar14 ^ *pbVar9 | bVar6;
            puStack_120 = (ulong *)((long)puStack_120 + -1);
            puVar14 = (ulong *)((long)puVar14 + 1);
            pbVar9 = unaff_x22;
          } while (puStack_120 != (ulong *)0x0);
          bVar6 = bVar6 != 0;
        }
        param_1 = (long *)0x0;
        if (((bool)bVar6 != false) || (lStack_118 == 0)) {
          puVar15 = (ulong *)0x65;
          param_5 = (long *)0x17e;
          goto LAB_10ae21c48;
        }
        *param_3 = (ulong)unaff_x23;
        plVar7 = (long *)0x1;
        plVar11 = param_7;
        plVar12 = param_8;
        goto LAB_10ae21c50;
      }
      lStack_118 = -1;
      unaff_x23 = (long *)((long)unaff_x24 - (ulong)*(uint *)(*(long *)unaff_x22 + 4));
      uStack_80 = (undefined7)*param_9;
      uStack_79 = *(undefined4 *)((long)param_9 + 7);
      uStack_75 = (ushort)((ulong)unaff_x23 >> 8) & 0xff |
                  (ushort)(((uint)unaff_x23 & 0xff00ff) << 8);
      param_7 = plVar11;
      param_8 = plVar12;
LAB_10ae21dfc:
      puVar13 = (ulong *)0x0;
      puVar15 = (ulong *)0x0;
      plVar17 = (long *)0x0;
      param_5 = (long *)0x0;
      pbVar9 = unaff_x22;
      func_0x000107c2b494(unaff_x22,0,0);
      if ((int)pbVar9 != 0) {
        param_1 = param_1 + 0x14;
        (**(code **)(*param_1 + 0x18))(param_1,&uStack_80,0xd);
        (**(code **)(*param_1 + 0x18))(param_1,param_2,unaff_x23);
        puVar13 = auStack_c0;
        puVar15 = (ulong *)&uStack_124;
        pbVar9 = unaff_x22;
        func_0x000107c2b498(unaff_x22,puVar13,puVar15);
        if ((int)pbVar9 != 0) {
          puStack_120 = (ulong *)(ulong)uStack_124;
          unaff_x22 = (byte *)((long)param_2 + (long)unaff_x23);
          goto LAB_10ae21e64;
        }
      }
      goto LAB_10ae21c4c;
    }
    plVar7 = param_1 + 1;
    puVar13 = (ulong *)0x0;
    plVar17 = (long *)0x0;
    puVar15 = param_3;
    FUN_10ae340b8(plVar7,0);
    if ((int)plVar7 != 0) goto LAB_10ae21cc8;
  }
  else {
    puVar15 = (ulong *)0x70;
    param_5 = (long *)0xfa;
    param_1 = unaff_x21;
LAB_10ae21c48:
    plVar17 = (long *)&UNK_10f6c56aa;
    puVar13 = (ulong *)0x0;
    func_0x000107c2b29c(0x1e,0,puVar15);
    param_3 = unaff_x19;
    param_2 = unaff_x20;
LAB_10ae21c4c:
    plVar7 = (long *)0x0;
    plVar11 = param_7;
    plVar12 = param_8;
  }
LAB_10ae21c50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar7;
  }
  ___stack_chk_fail();
  uVar5 = uStack_130;
  uStack_138 = 0x10ae21f00;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = unaff_x28;
  puStack_188 = unaff_x27;
  piStack_178 = unaff_x25;
  plStack_170 = unaff_x24;
  plStack_168 = unaff_x23;
  pbStack_160 = unaff_x22;
  plStack_158 = param_1;
  puStack_150 = param_2;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  if (*(int *)((long)plVar7 + 0x24) == 0) {
    uVar16 = 0x70;
    uVar18 = 0x86;
  }
  else {
    uVar4 = CONCAT44(uStack_12c,uStack_130);
    if (uVar4 >> 0x1f == 0) {
      plVar10 = plVar7 + 0x13;
      plVar19 = (long *)(ulong)*(uint *)(*plVar10 + 4);
      if ((*(uint *)(plVar7[1] + 0x14) & 0x3f) == 2) {
        uVar23 = (ulong)*(uint *)(plVar7[1] + 4);
        uVar22 = 0;
        if (uVar23 != 0) {
          uVar22 = (ulong)(uVar4 + (long)plVar19) / uVar23;
        }
        plVar19 = (long *)((uVar22 * uVar23 - uVar4) + uVar23);
      }
      if (param_5 < plVar19) {
        uVar16 = 0x67;
        uVar18 = 0x91;
      }
      else if (plVar11 == (long *)(ulong)*(byte *)(*plVar7 + 1)) {
        if (plStack_110 == (long *)0xb) {
          uStack_2da = (ushort)(uStack_130 >> 8) & 0xff | (ushort)((uStack_130 & 0xff00ff) << 8);
          puVar14 = (ulong *)0x0;
          plVar11 = plVar10;
          func_0x000107c2b494(plVar10,0,0,0,0);
          if ((int)plVar11 != 0) {
            plVar11 = plVar7 + 0x14;
            (**(code **)(*plVar11 + 0x18))(plVar11,lStack_118,0xb);
            (**(code **)(*plVar11 + 0x18))(plVar11,&uStack_2da,2);
            (**(code **)(*plVar11 + 0x18))(plVar11,plVar12,uVar4);
            puVar14 = auStack_1d8;
            func_0x000107c2b498(plVar10,puVar14,&uStack_2e0);
            plVar11 = plVar10;
            if ((int)plVar10 != 0) {
              if (((*(uint *)(plVar7[1] + 0x14) & 0x3f) == 2) &&
                 (*(char *)((long)plVar7 + 0x141) == '\0')) {
                plVar11 = plVar7 + 1;
                puVar14 = (ulong *)0x0;
                FUN_10ae340b8(plVar11,0);
                if ((int)plVar11 == 0) goto LAB_10ae22194;
              }
              plVar11 = plVar7 + 1;
              puVar14 = puVar13;
              FUN_10ae3433c(plVar11,puVar13,&iStack_2e4,plVar12,uVar4);
              if ((int)plVar11 != 0) {
                uVar1 = *(uint *)(plVar7[1] + 4);
                uVar22 = (ulong)uVar1;
                uVar3 = 0;
                if (uVar1 != 0) {
                  uVar3 = uVar5 / uVar1;
                }
                uVar20 = uVar22 - (uVar5 - uVar3 * uVar1);
                uVar23 = 0;
                if (uVar22 != 0) {
                  uVar23 = uVar20 / uVar22;
                }
                lVar24 = uVar20 - uVar23 * uVar22;
                if (lVar24 == 0) {
                  lVar21 = 0;
                }
                else {
                  plVar11 = plVar7 + 1;
                  puVar14 = auStack_2d8;
                  FUN_10ae3433c(plVar11,puVar14,auStack_2e8,auStack_1d8,lVar24);
                  if ((int)plVar11 == 0) goto LAB_10ae22194;
                  _memcpy((undefined *)((long)puVar13 + (long)iStack_2e4),auStack_2d8,
                          uVar22 - lVar24);
                  _memcpy(puVar15,(long)auStack_2d8 + (uVar22 - lVar24),lVar24);
                  lVar21 = lVar24;
                }
                plVar11 = plVar7 + 1;
                puVar14 = (ulong *)((long)puVar15 + lVar24);
                FUN_10ae3433c(plVar11,puVar14,&iStack_2e4,(long)auStack_1d8 + lVar24,
                              uStack_2e0 - (int)lVar21);
                if ((int)plVar11 != 0) {
                  lVar24 = lVar24 + iStack_2e4;
                  if (1 < uVar1) {
                    iVar2 = 0;
                    if (uVar22 != 0) {
                      iVar2 = (int)((uVar4 + uStack_2e0) / uVar22);
                    }
                    iVar2 = uVar1 - ((int)(uVar4 + uStack_2e0) - iVar2 * uVar1);
                    if (iVar2 != 0) {
                      ___memset_chk(auStack_2d8,iVar2 + -1,iVar2,0x100);
                    }
                    plVar11 = plVar7 + 1;
                    puVar14 = (ulong *)((long)puVar15 + lVar24);
                    FUN_10ae3433c(plVar11,puVar14,&iStack_2e4,auStack_2d8,iVar2);
                    if ((int)plVar11 == 0) goto LAB_10ae22194;
                    lVar24 = lVar24 + iStack_2e4;
                  }
                  plVar11 = plVar7 + 1;
                  puVar14 = (ulong *)((long)puVar15 + lVar24);
                  FUN_10ae34534(plVar11,puVar14,&iStack_2e4);
                  if ((int)plVar11 != 0) {
                    *plVar17 = lVar24;
                    plVar11 = (long *)0x1;
                  }
                }
              }
            }
          }
          goto LAB_10ae22194;
        }
        uVar16 = 0x6d;
        uVar18 = 0x9b;
      }
      else {
        uVar16 = 0x6f;
        uVar18 = 0x96;
      }
    }
    else {
      uVar16 = 0x75;
      uVar18 = 0x8c;
    }
  }
  puVar14 = (ulong *)0x0;
  func_0x000107c2b29c(0x1e,0,uVar16,&UNK_10f6c56aa,uVar18);
  plVar11 = (long *)0x0;
LAB_10ae22194:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return plVar11;
  }
  ___stack_chk_fail();
  plVar12 = (long *)(ulong)*(uint *)(plVar11[0x13] + 4);
  if ((*(uint *)(plVar11[1] + 0x14) & 0x3f) == 2) {
    uVar22 = (ulong)*(uint *)(plVar11[1] + 4);
    uVar4 = 0;
    if (uVar22 != 0) {
      uVar4 = (ulong)((long)puVar14 + (long)plVar12) / uVar22;
    }
    plVar12 = (long *)((uVar4 * uVar22 - (long)puVar14) + uVar22);
  }
  return plVar12;
}



/* Entry: 10ae22278; end: 10ae222b3;  */

ulong FUN_10ae22278(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x98) + 4);
  if ((*(uint *)(*(long *)(param_1 + 8) + 0x14) & 0x3f) == 2) {
    uVar3 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 4);
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = (param_2 + uVar2) / uVar3;
    }
    uVar2 = (uVar1 * uVar3 - param_2) + uVar3;
  }
  return uVar2;
}



/* Entry: 10ae222b4; end: 10ae2242f;  */

undefined8
FUN_10ae222b4(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,int param_5,long param_6,
             long param_7,int param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if ((param_4 == 0) || (param_4 == *(uint *)(param_7 + 4))) {
    if (param_3 == *(byte *)*param_1) {
      uVar2 = *(uint *)(param_7 + 4);
      uVar8 = (ulong)uVar2;
      uVar3 = *(uint *)(param_6 + 8);
      puVar7 = param_1 + 1;
      param_1[2] = 0;
      *puVar7 = 0;
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      param_1[0x12] = 0;
      param_1[0x11] = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      puVar9 = param_1 + 0x13;
      *puVar9 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      if (uVar2 != 0) {
        _memcpy(param_1 + 0x20,param_2,uVar8);
      }
      *(char *)(param_1 + 0x28) = (char)uVar2;
      *(char *)((long)param_1 + 0x141) = (char)param_8;
      lVar1 = 0;
      if (param_8 != 0) {
        lVar1 = param_2 + uVar8 + (ulong)uVar3;
      }
      puVar4 = puVar7;
      FUN_10ae340b8(puVar7,param_6,0,param_2 + uVar8,lVar1,param_5 == 1);
      if (((int)puVar4 != 0) &&
         (puVar4 = puVar9, func_0x000107c2b494(puVar9,param_2,uVar8,param_7,0), (int)puVar4 != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
        return 1;
      }
      FUN_10ae33ff8(puVar7);
      func_0x000107c2b49c(puVar9);
      return 0;
    }
    uVar5 = 0x66;
    uVar6 = 0x4a;
  }
  else {
    uVar5 = 0x7a;
    uVar6 = 0x45;
  }
  func_0x000107c2b29c(0x1e,0,uVar5,&UNK_10f6c56aa,uVar6);
  return 0;
}



/* Entry: 10ae22430; end: 10ae22497;  */

undefined8 FUN_10ae22430(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  puVar4 = param_1;
  FUN_10ae34928();
  puVar5 = puVar4;
  func_0x000107c2b424();
  if ((param_4 == 0) || (param_4 == *(uint *)((long)puVar5 + 4))) {
    if (param_3 == *(byte *)*param_1) {
      uVar1 = *(uint *)((long)puVar5 + 4);
      uVar9 = (ulong)uVar1;
      uVar2 = *(uint *)(puVar4 + 1);
      puVar8 = param_1 + 1;
      param_1[2] = 0;
      *puVar8 = 0;
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      param_1[0x12] = 0;
      param_1[0x11] = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      puVar10 = param_1 + 0x13;
      *puVar10 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      if (uVar1 != 0) {
        _memcpy(param_1 + 0x20,param_2,uVar9);
      }
      *(char *)(param_1 + 0x28) = (char)uVar1;
      *(undefined1 *)((long)param_1 + 0x141) = 1;
      puVar3 = puVar8;
      FUN_10ae340b8(puVar8,puVar4,0,param_2 + uVar9,param_2 + uVar9 + (ulong)uVar2,param_5 == 1);
      if (((int)puVar3 != 0) &&
         (puVar4 = puVar10, func_0x000107c2b494(puVar10,param_2,uVar9,puVar5,0), (int)puVar4 != 0))
      {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
        return 1;
      }
      FUN_10ae33ff8(puVar8);
      func_0x000107c2b49c(puVar10);
      return 0;
    }
    uVar6 = 0x66;
    uVar7 = 0x4a;
  }
  else {
    uVar6 = 0x7a;
    uVar7 = 0x45;
  }
  func_0x000107c2b29c(0x1e,0,uVar6,&UNK_10f6c56aa,uVar7);
  return 0;
}



/* Entry: 10ae22498; end: 10ae224c3;  */

undefined8 FUN_10ae22498(long param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0xc);
  if (uVar1 < 2) {
    return 0;
  }
  *param_2 = param_1 + 0x3c;
  *param_3 = (ulong)uVar1;
  return 1;
}



/* Entry: 10ae224c4; end: 10ae226bf;  */

/* WARNING: Removing unreachable block (ram,0x00010ae22374) */

undefined8 FUN_10ae224c4(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  puVar3 = param_1;
  func_0x00010ae34ac8();
  puVar4 = puVar3;
  func_0x000107c2b424();
  if ((param_4 == 0) || (param_4 == *(uint *)((long)puVar4 + 4))) {
    if (param_3 == *(byte *)*param_1) {
      uVar1 = *(uint *)((long)puVar4 + 4);
      uVar8 = (ulong)uVar1;
      puVar7 = param_1 + 1;
      param_1[2] = 0;
      *puVar7 = 0;
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      param_1[0x12] = 0;
      param_1[0x11] = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      puVar9 = param_1 + 0x13;
      *puVar9 = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      if (uVar1 != 0) {
        _memcpy(param_1 + 0x20,param_2,uVar8);
      }
      *(char *)(param_1 + 0x28) = (char)uVar1;
      *(undefined1 *)((long)param_1 + 0x141) = 0;
      puVar2 = puVar7;
      FUN_10ae340b8(puVar7,puVar3,0,param_2 + uVar8,0,param_5 == 1);
      if (((int)puVar2 != 0) &&
         (puVar3 = puVar9, func_0x000107c2b494(puVar9,param_2,uVar8,puVar4,0), (int)puVar3 != 0)) {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
        return 1;
      }
      FUN_10ae33ff8(puVar7);
      func_0x000107c2b49c(puVar9);
      return 0;
    }
    uVar5 = 0x66;
    uVar6 = 0x4a;
  }
  else {
    uVar5 = 0x7a;
    uVar6 = 0x45;
  }
  func_0x000107c2b29c(0x1e,0,uVar5,&UNK_10f6c56aa,uVar6);
  return 0;
}



/* Entry: 10ae226c0; end: 10ae22757;  */

undefined8
FUN_10ae226c0(long *param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5,long param_6
             )

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  
  if (param_4 < param_6 + 1U) {
    return 0;
  }
  bVar2 = *(byte *)(param_3 + (param_4 - 1));
  uVar4 = (ulong)bVar2;
  uVar1 = param_6 + 1U + uVar4;
  uVar5 = (long)((param_4 - uVar1 ^ param_4 | uVar1 ^ param_4) ^ param_4 ^ 0xffffffffffffffff) >>
          0x3f;
  uVar1 = param_4;
  if (0xff < param_4) {
    uVar1 = 0x100;
  }
  if (param_4 != 0) {
    uVar6 = 0;
    pbVar7 = (byte *)(param_3 + (param_4 - 1));
    do {
      uVar8 = (ulong)((uint)*pbVar7 ^ bVar2 ^ 0xffffffff);
      if (uVar4 < uVar6) {
        uVar8 = 0xffffffffffffffff;
      }
      uVar5 = uVar8 & uVar5;
      uVar6 = uVar6 + 1;
      pbVar7 = pbVar7 + -1;
    } while (uVar1 != uVar6);
  }
  bVar3 = (uVar5 & 0xff) == 0xff;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = ~uVar4;
  }
  *param_2 = uVar1 + param_4;
  *param_1 = -(ulong)bVar3;
  return 1;
}



/* Entry: 10ae22758; end: 10ae2291b;  */

uint * FUN_10ae22758(uint *param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4,
                    undefined8 *param_5,long param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong unaff_x26;
  short sVar19;
  long unaff_x27;
  ulong unaff_x28;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auStack_304 [20];
  uint auStack_2f0 [24];
  ulong auStack_290 [9];
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  uint *puStack_218;
  undefined8 *puStack_210;
  uint *puStack_208;
  uint *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 **ppuStack_1f0;
  undefined8 uStack_1e8;
  uint *puStack_1e0;
  undefined8 *puStack_1d8;
  uint *puStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  uint auStack_1a8 [6];
  uint auStack_190 [16];
  long lStack_150;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  uint auStack_d8 [16];
  uint auStack_98 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = param_2 + 0x20;
  puVar17 = (undefined8 *)0x0;
  if (puVar18 <= param_5) {
    puVar17 = (undefined8 *)((long)param_5 - (long)puVar18);
  }
  puVar8 = (uint *)0x0;
  puVar7 = param_1;
  puVar13 = param_3;
  puVar9 = param_4;
  puVar10 = param_5;
  if (param_2 != (undefined8 *)0x0) {
    puVar7 = auStack_98;
    puVar8 = (uint *)0x0;
    puVar9 = (uint *)0x40;
    puVar13 = param_2;
    ___memset_chk();
  }
  if (puVar17 < param_5) {
    uVar11 = 0;
    puVar15 = (undefined8 *)0x0;
    bVar20 = 0;
    puVar12 = param_5;
    if (puVar18 <= param_5) {
      puVar12 = puVar18;
    }
    lVar14 = (long)param_5 + (-(long)puVar12 - (long)param_4);
    do {
      puVar2 = (undefined8 *)0x0;
      if (param_2 <= puVar15) {
        puVar2 = param_2;
      }
      uVar16 = (long)puVar15 - (long)puVar2;
      bVar5 = (long)param_2 + lVar14 == 0;
      if (bVar5) {
        bVar20 = 0xff;
      }
      bVar21 = (byte)((ulong)puVar17 >> 0x38);
      *(byte *)((long)auStack_98 + uVar16) =
           (char)(((byte)((ulong)lVar14 >> 0x38) ^ bVar21 | bVar21 ^ (byte)((ulong)param_4 >> 0x38))
                 ^ bVar21) >> 7 & bVar20 & *(byte *)((long)param_3 + (long)puVar17) |
           *(byte *)((long)auStack_98 + uVar16);
      uVar1 = uVar16;
      if (!bVar5) {
        uVar1 = 0;
      }
      uVar11 = uVar1 | uVar11;
      puVar17 = (undefined8 *)((long)puVar17 + 1);
      puVar15 = (undefined8 *)(uVar16 + 1);
      lVar14 = lVar14 + 1;
      puVar12 = (undefined8 *)((long)puVar12 + -1);
    } while (puVar12 != (undefined8 *)0x0);
  }
  else {
    uVar11 = 0;
  }
  if (param_2 < (undefined8 *)0x2) {
    if (param_2 == (undefined8 *)0x0) goto LAB_10ae228e4;
    puVar8 = auStack_98;
  }
  else {
    puVar13 = (undefined8 *)0x1;
    puVar7 = auStack_d8;
    puVar6 = auStack_98;
    do {
      puVar8 = puVar7;
      puVar15 = (undefined8 *)0x0;
      bVar20 = ((byte)uVar11 & 1) - 1;
      puVar12 = puVar13;
      do {
        puVar2 = (undefined8 *)0x0;
        if (param_2 <= puVar12) {
          puVar2 = param_2;
        }
        *(byte *)((long)puVar8 + (long)puVar15) =
             ~bVar20 & *(byte *)((long)puVar6 + ((long)puVar12 - (long)puVar2)) |
             bVar20 & *(byte *)((long)puVar6 + (long)puVar15);
        puVar15 = (undefined8 *)((long)puVar15 + 1);
        puVar12 = (undefined8 *)(((long)puVar12 - (long)puVar2) + 1);
      } while (param_2 != puVar15);
      puVar13 = (undefined8 *)((long)puVar13 << 1);
      uVar11 = uVar11 >> 1;
      puVar7 = puVar6;
      puVar6 = puVar8;
    } while (puVar13 < param_2);
  }
  puVar7 = param_1;
  puVar13 = param_2;
  _memcpy();
LAB_10ae228e4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10ae2291c;
  puVar6 = (uint *)0x0;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d8 = puVar13;
  puStack_1d0 = puVar9;
  puStack_1b0 = puVar10;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (((ulong)puVar10 >> 0x3d == 0) && (puVar7[6] == 0)) {
    puVar6 = (uint *)0x0;
    uVar11 = (ulong)puVar7[5];
    if ((!CARRY8(uVar11,(long)puVar10 * 8)) && (uVar11 + (long)puVar10 * 8 >> 0x20 == 0)) {
      puVar18 = (undefined8 *)0x0;
      unaff_x26 = 0;
      uVar16 = (long)puVar9 + (ulong)puVar7[0x17] + 0x48;
      lVar14 = uVar11 + (long)puVar9 * 8;
      uStack_1c0 = CONCAT26((short)lVar14,
                            CONCAT24((short)((ulong)lVar14 >> 8),
                                     CONCAT22((short)((ulong)lVar14 >> 0x10),
                                              (short)((ulong)lVar14 >> 0x18))));
      uStack_1b8 = 0;
      uStack_1c8 = (uVar16 >> 6) - 1;
      auStack_190[10] = 0;
      auStack_190[0xb] = 0;
      auStack_190[8] = 0;
      auStack_190[9] = 0;
      auStack_190[0xe] = 0;
      auStack_190[0xf] = 0;
      auStack_190[0xc] = 0;
      auStack_190[0xd] = 0;
      unaff_x28 = (long)puVar10 + (ulong)puVar7[0x17] + 0x48 >> 6;
      auStack_190[2] = 0;
      auStack_190[3] = 0;
      auStack_190[0] = 0;
      auStack_190[1] = 0;
      auStack_190[6] = 0;
      auStack_190[7] = 0;
      auStack_190[4] = 0;
      auStack_190[5] = 0;
      param_3 = (undefined8 *)-(uVar16 >> 6);
      auStack_1a8[0] = 0;
      auStack_1a8[1] = 0;
      auStack_1a8[2] = 0;
      auStack_1a8[3] = 0;
      auStack_1a8[4] = 0;
      param_4 = auStack_190;
      param_2 = (undefined8 *)0xffffff80;
      param_1 = auStack_1a8;
      puStack_1e0 = puVar8;
      do {
        if ((unaff_x26 == 0) && (puVar17 = (undefined8 *)(ulong)puVar7[0x17], puVar7[0x17] != 0)) {
          puVar9 = (uint *)0x40;
          ___memcpy_chk(auStack_190,puVar7 + 7,puVar17,0x40);
        }
        else {
          puVar17 = (undefined8 *)0x0;
        }
        uVar11 = (long)puStack_1b0 - (long)puVar18;
        if (puVar18 <= puStack_1b0 && uVar11 != 0) {
          uVar16 = 0x40U - (long)puVar17;
          if (uVar11 <= 0x40U - (long)puVar17) {
            uVar16 = uVar11;
          }
          if (uVar16 != 0) {
            _memcpy((long)param_4 + (long)puVar17,(long)puStack_1d8 + (long)puVar18);
          }
        }
        if (puVar17 < (undefined8 *)0x40) {
          lVar14 = (long)puVar18 - (long)puStack_1d0;
          puVar15 = puVar18;
          puVar13 = puVar17;
          do {
            bVar21 = (byte)((ulong)puVar15 >> 0x38);
            bVar20 = 0x80;
            if (lVar14 != 0) {
              bVar20 = 0;
            }
            *(byte *)((long)param_4 + (long)puVar13) =
                 *(byte *)((long)param_4 + (long)puVar13) &
                 (char)(((byte)((ulong)lVar14 >> 0x38) ^ bVar21 |
                        bVar21 ^ (byte)((ulong)puStack_1d0 >> 0x38)) ^ bVar21) >> 7 | bVar20;
            puVar13 = (undefined8 *)((long)puVar13 + 1);
            lVar14 = lVar14 + 1;
            puVar15 = (undefined8 *)((long)puVar15 + 1);
          } while (puVar13 != (undefined8 *)0x40);
        }
        uVar4 = auStack_190._56_8_;
        uVar11 = (unaff_x26 ^ uStack_1c8) - 1 & (ulong)param_3;
        unaff_x27 = (long)uVar11 >> 0x3f;
        sVar19 = (short)((long)uVar11 >> 0x3f);
        bVar20 = SUB81(auStack_190._56_8_,4);
        bVar21 = SUB81(auStack_190._56_8_,6);
        bVar22 = SUB81(auStack_190._56_8_,7);
        uVar16 = uStack_1c0 & CONCAT26(sVar19,CONCAT24(sVar19,CONCAT22(sVar19,sVar19)));
        auStack_190[0xf]._1_1_ = (byte)(uVar16 >> 0x10) | SUB81(auStack_190._56_8_,5);
        auStack_190[0xf]._0_1_ = (byte)uVar16 | bVar20;
        auStack_190[0xf]._2_1_ = (byte)(uVar16 >> 0x20) | bVar21;
        auStack_190[0xf]._3_1_ = (byte)(uVar16 >> 0x30) | bVar22;
        auStack_190[0xe] = (uint)uVar4;
        puVar8 = auStack_190;
        puVar13 = (undefined8 *)0x1;
        func_0x000107c2b594(puVar7,puVar8);
        lVar14 = 0;
        do {
          *(uint *)((long)param_1 + lVar14) =
               *(uint *)((long)puVar7 + lVar14) & (uint)((long)uVar11 >> 0x3f) |
               *(uint *)((long)param_1 + lVar14);
          lVar14 = lVar14 + 4;
        } while (lVar14 != 0x14);
        puVar18 = (undefined8 *)((long)puVar18 + (0x40 - (long)puVar17));
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != unaff_x28);
      lVar14 = 0;
      do {
        uVar3 = (*(uint *)((long)auStack_1a8 + lVar14) & 0xff00ff00) >> 8 |
                (*(uint *)((long)auStack_1a8 + lVar14) & 0xff00ff) << 8;
        *(uint *)((long)puStack_1e0 + lVar14) = uVar3 >> 0x10 | uVar3 << 0x10;
        lVar14 = lVar14 + 4;
      } while (lVar14 != 0x14);
      puVar6 = (uint *)0x1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
    ___stack_chk_fail();
    uStack_1e8 = 0x10ae22b98;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_240 = unaff_x28;
    lStack_238 = unaff_x27;
    uStack_230 = unaff_x26;
    puStack_228 = puVar18;
    puStack_220 = puVar17;
    puStack_218 = puVar7;
    puStack_210 = param_3;
    puStack_208 = param_4;
    puStack_200 = param_1;
    puStack_1f8 = param_2;
    ppuStack_1f0 = &puStack_f0;
    if (*puVar6 == 0x40) {
      if ((uint)puStack_1e0 < 0x41) {
        auStack_290[5] = 0;
        auStack_290[4] = 0;
        auStack_290[7] = 0;
        auStack_290[6] = 0;
        auStack_290[3] = 0;
        auStack_290[2] = 0;
        auStack_290[1] = 0;
        auStack_290[0] = 0;
        if ((uint)puStack_1e0 != 0) {
          ___memcpy_chk(auStack_290,param_8,(ulong)puStack_1e0 & 0xffffffff,0x40);
        }
        lVar14 = 0;
        do {
          *(ulong *)((long)auStack_290 + lVar14 + 8) =
               *(ulong *)((long)auStack_290 + lVar14 + 8) ^ 0x3636363636363636;
          *(ulong *)((long)auStack_290 + lVar14) =
               *(ulong *)((long)auStack_290 + lVar14) ^ 0x3636363636363636;
          lVar14 = lVar14 + 0x10;
        } while (lVar14 != 0x40);
        auStack_2f0[0x16] = 0;
        auStack_2f0[0x17] = 0;
        auStack_2f0[0x15] = 0;
        auStack_2f0[0x13] = 0;
        auStack_2f0[0x14] = 0;
        auStack_2f0[0x11] = 0;
        auStack_2f0[0x12] = 0;
        auStack_2f0[0xf] = 0;
        auStack_2f0[0x10] = 0;
        auStack_2f0[0xd] = 0;
        auStack_2f0[0xe] = 0;
        auStack_2f0[0xb] = 0;
        auStack_2f0[0xc] = 0;
        auStack_2f0[9] = 0;
        auStack_2f0[10] = 0;
        auStack_2f0[7] = 0;
        auStack_2f0[8] = 0;
        auStack_2f0[5] = 0;
        auStack_2f0[6] = 0;
        auStack_2f0[2] = 0x98badcfe;
        auStack_2f0[3] = 0x10325476;
        auStack_2f0[0] = 0x67452301;
        auStack_2f0[1] = 0xefcdab89;
        auStack_2f0[4] = 0xc3d2e1f0;
        func_0x000107c2b4f0(auStack_2f0,auStack_290,0x40);
        func_0x000107c2b4f0(auStack_2f0,puVar9,0xd);
        lVar14 = 0;
        if (0x113 < param_7) {
          lVar14 = param_7 - 0x114;
        }
        func_0x000107c2b4f0(auStack_2f0,puVar10,lVar14);
        puVar7 = auStack_2f0;
        FUN_10ae2291c(puVar7,auStack_304,(long)puVar10 + lVar14,param_6 - lVar14,param_7 - lVar14);
        if ((int)puVar7 != 0) {
          lVar14 = 0;
          auStack_2f0[0x16] = 0;
          auStack_2f0[0x17] = 0;
          auStack_2f0[0x15] = 0;
          auStack_2f0[0x13] = 0;
          auStack_2f0[0x14] = 0;
          auStack_2f0[0x11] = 0;
          auStack_2f0[0x12] = 0;
          auStack_2f0[0xf] = 0;
          auStack_2f0[0x10] = 0;
          auStack_2f0[0xd] = 0;
          auStack_2f0[0xe] = 0;
          auStack_2f0[0xb] = 0;
          auStack_2f0[0xc] = 0;
          auStack_2f0[9] = 0;
          auStack_2f0[10] = 0;
          auStack_2f0[7] = 0;
          auStack_2f0[8] = 0;
          auStack_2f0[5] = 0;
          auStack_2f0[6] = 0;
          auStack_2f0[2] = 0x98badcfe;
          auStack_2f0[3] = 0x10325476;
          auStack_2f0[0] = 0x67452301;
          auStack_2f0[1] = 0xefcdab89;
          auStack_2f0[4] = 0xc3d2e1f0;
          do {
            *(ulong *)((long)auStack_290 + lVar14 + 8) =
                 *(ulong *)((long)auStack_290 + lVar14 + 8) ^ 0x6a6a6a6a6a6a6a6a;
            *(ulong *)((long)auStack_290 + lVar14) =
                 *(ulong *)((long)auStack_290 + lVar14) ^ 0x6a6a6a6a6a6a6a6a;
            lVar14 = lVar14 + 0x10;
          } while (lVar14 != 0x40);
          func_0x000107c2b4f0(auStack_2f0,auStack_290,0x40);
          func_0x000107c2b4f0(auStack_2f0,auStack_304,0x14);
          func_0x000107c2b4f4(puVar8,auStack_2f0);
          *puVar13 = 0x14;
          puVar7 = (uint *)0x1;
        }
      }
      else {
        puVar7 = (uint *)0x0;
      }
    }
    else {
      puVar7 = (uint *)0x0;
      *puVar13 = 0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      puVar18 = (undefined8 *)0x20;
      _malloc();
      if (puVar18 == (undefined8 *)0x0) {
        func_0x000107c2b29c(0xd,0,0x41,&UNK_10f6c5725,0x87);
        return (uint *)0x0;
      }
      *puVar18 = 0x18;
      puVar18[2] = 0;
      puVar18[3] = 0;
      puVar7 = (uint *)(puVar18 + 1);
      puVar7[0] = 0;
      puVar7[1] = 0;
      return puVar7;
    }
    return puVar7;
  }
  return puVar6;
}



/* Entry: 10ae2291c; end: 10ae22d9f;  */

int * FUN_10ae2291c(long param_1,byte *param_2,undefined8 *param_3,long param_4,ulong param_5,
                   long param_6,ulong param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  undefined8 unaff_x19;
  uint *unaff_x20;
  byte *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  short sVar8;
  long unaff_x27;
  ulong unaff_x28;
  ulong uVar9;
  undefined1 auStack_224 [20];
  int aiStack_210 [24];
  ulong auStack_1b0 [9];
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
  ulong uStack_130;
  byte *pbStack_128;
  uint *puStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  uint auStack_c8 [6];
  byte abStack_b0 [60];
  undefined4 uStack_74;
  long lStack_70;
  
  piVar3 = (int *)0x0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f8 = param_3;
  lStack_f0 = param_4;
  uStack_d0 = param_5;
  if ((param_5 >> 0x3d == 0) && (*(int *)(param_1 + 0x18) == 0)) {
    piVar3 = (int *)0x0;
    uVar5 = (ulong)*(uint *)(param_1 + 0x14);
    if ((!CARRY8(uVar5,param_5 * 8)) && (uVar5 + param_5 * 8 >> 0x20 == 0)) {
      unaff_x25 = 0;
      unaff_x26 = 0;
      uVar9 = param_4 + (ulong)*(uint *)(param_1 + 0x5c) + 0x48;
      lVar6 = uVar5 + param_4 * 8;
      uStack_e0 = CONCAT26((short)lVar6,
                           CONCAT24((short)((ulong)lVar6 >> 8),
                                    CONCAT22((short)((ulong)lVar6 >> 0x10),
                                             (short)((ulong)lVar6 >> 0x18))));
      uStack_d8 = 0;
      uStack_e8 = (uVar9 >> 6) - 1;
      abStack_b0[0x28] = 0;
      abStack_b0[0x29] = 0;
      abStack_b0[0x2a] = 0;
      abStack_b0[0x2b] = 0;
      abStack_b0[0x2c] = 0;
      abStack_b0[0x2d] = 0;
      abStack_b0[0x2e] = 0;
      abStack_b0[0x2f] = 0;
      abStack_b0[0x20] = 0;
      abStack_b0[0x21] = 0;
      abStack_b0[0x22] = 0;
      abStack_b0[0x23] = 0;
      abStack_b0[0x24] = 0;
      abStack_b0[0x25] = 0;
      abStack_b0[0x26] = 0;
      abStack_b0[0x27] = 0;
      stack0xffffffffffffff88 = 0;
      abStack_b0[0x30] = 0;
      abStack_b0[0x31] = 0;
      abStack_b0[0x32] = 0;
      abStack_b0[0x33] = 0;
      abStack_b0[0x34] = 0;
      abStack_b0[0x35] = 0;
      abStack_b0[0x36] = 0;
      abStack_b0[0x37] = 0;
      unaff_x28 = param_5 + *(uint *)(param_1 + 0x5c) + 0x48 >> 6;
      abStack_b0[8] = 0;
      abStack_b0[9] = 0;
      abStack_b0[10] = 0;
      abStack_b0[0xb] = 0;
      abStack_b0[0xc] = 0;
      abStack_b0[0xd] = 0;
      abStack_b0[0xe] = 0;
      abStack_b0[0xf] = 0;
      abStack_b0[0] = 0;
      abStack_b0[1] = 0;
      abStack_b0[2] = 0;
      abStack_b0[3] = 0;
      abStack_b0[4] = 0;
      abStack_b0[5] = 0;
      abStack_b0[6] = 0;
      abStack_b0[7] = 0;
      abStack_b0[0x18] = 0;
      abStack_b0[0x19] = 0;
      abStack_b0[0x1a] = 0;
      abStack_b0[0x1b] = 0;
      abStack_b0[0x1c] = 0;
      abStack_b0[0x1d] = 0;
      abStack_b0[0x1e] = 0;
      abStack_b0[0x1f] = 0;
      abStack_b0[0x10] = 0;
      abStack_b0[0x11] = 0;
      abStack_b0[0x12] = 0;
      abStack_b0[0x13] = 0;
      abStack_b0[0x14] = 0;
      abStack_b0[0x15] = 0;
      abStack_b0[0x16] = 0;
      abStack_b0[0x17] = 0;
      unaff_x22 = -(uVar9 >> 6);
      auStack_c8[0] = 0;
      auStack_c8[1] = 0;
      auStack_c8[2] = 0;
      auStack_c8[3] = 0;
      auStack_c8[4] = 0;
      unaff_x21 = abStack_b0;
      unaff_x19 = 0xffffff80;
      unaff_x20 = auStack_c8;
      pbStack_100 = param_2;
      do {
        if ((unaff_x26 == 0) &&
           (unaff_x24 = (ulong)*(uint *)(param_1 + 0x5c), *(uint *)(param_1 + 0x5c) != 0)) {
          param_4 = 0x40;
          ___memcpy_chk(abStack_b0,param_1 + 0x1c,unaff_x24,0x40);
        }
        else {
          unaff_x24 = 0;
        }
        uVar5 = uStack_d0 - unaff_x25;
        if (unaff_x25 <= uStack_d0 && uVar5 != 0) {
          uVar9 = 0x40 - unaff_x24;
          if (uVar5 <= 0x40 - unaff_x24) {
            uVar9 = uVar5;
          }
          if (uVar9 != 0) {
            _memcpy(unaff_x21 + unaff_x24,(long)puStack_f8 + unaff_x25);
          }
        }
        if (unaff_x24 < 0x40) {
          lVar6 = unaff_x25 - lStack_f0;
          uVar9 = unaff_x25;
          uVar5 = unaff_x24;
          do {
            bVar2 = (byte)(uVar9 >> 0x38);
            bVar7 = 0x80;
            if (lVar6 != 0) {
              bVar7 = 0;
            }
            unaff_x21[uVar5] =
                 unaff_x21[uVar5] &
                 (char)(((byte)((ulong)lVar6 >> 0x38) ^ bVar2 |
                        bVar2 ^ (byte)((ulong)lStack_f0 >> 0x38)) ^ bVar2) >> 7 | bVar7;
            uVar5 = uVar5 + 1;
            lVar6 = lVar6 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar5 != 0x40);
        }
        uVar5 = (unaff_x26 ^ uStack_e8) - 1 & unaff_x22;
        unaff_x27 = (long)uVar5 >> 0x3f;
        sVar8 = (short)((long)uVar5 >> 0x3f);
        uVar9 = uStack_e0 & CONCAT26(sVar8,CONCAT24(sVar8,CONCAT22(sVar8,sVar8)));
        stack0xffffffffffffff88 =
             CONCAT44(CONCAT13((byte)(uVar9 >> 0x30) |
                               (byte)((ulong)stack0xffffffffffffff88 >> 0x38),
                               CONCAT12((byte)(uVar9 >> 0x20) |
                                        (byte)((ulong)stack0xffffffffffffff88 >> 0x30),
                                        CONCAT11((byte)(uVar9 >> 0x10) |
                                                 (byte)((ulong)stack0xffffffffffffff88 >> 0x28),
                                                 (byte)uVar9 |
                                                 (byte)((ulong)stack0xffffffffffffff88 >> 0x20)))),
                      abStack_b0._56_4_);
        param_2 = abStack_b0;
        param_3 = (undefined8 *)0x1;
        func_0x000107c2b594(param_1,param_2);
        lVar6 = 0;
        do {
          *(uint *)((long)unaff_x20 + lVar6) =
               *(uint *)(param_1 + lVar6) & (uint)((long)uVar5 >> 0x3f) |
               *(uint *)((long)unaff_x20 + lVar6);
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0x14);
        unaff_x25 = (unaff_x25 - unaff_x24) + 0x40;
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != unaff_x28);
      lVar6 = 0;
      do {
        uVar1 = (*(uint *)((long)auStack_c8 + lVar6) & 0xff00ff00) >> 8 |
                (*(uint *)((long)auStack_c8 + lVar6) & 0xff00ff) << 8;
        *(uint *)(pbStack_100 + lVar6) = uVar1 >> 0x10 | uVar1 << 0x10;
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0x14);
      piVar3 = (int *)0x1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return piVar3;
  }
  ___stack_chk_fail();
  uStack_108 = 0x10ae22b98;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = unaff_x28;
  lStack_158 = unaff_x27;
  uStack_150 = unaff_x26;
  uStack_148 = unaff_x25;
  uStack_140 = unaff_x24;
  lStack_138 = param_1;
  uStack_130 = unaff_x22;
  pbStack_128 = unaff_x21;
  puStack_120 = unaff_x20;
  uStack_118 = unaff_x19;
  puStack_110 = &stack0xfffffffffffffff0;
  if (*piVar3 == 0x40) {
    if ((uint)pbStack_100 < 0x41) {
      auStack_1b0[5] = 0;
      auStack_1b0[4] = 0;
      auStack_1b0[7] = 0;
      auStack_1b0[6] = 0;
      auStack_1b0[3] = 0;
      auStack_1b0[2] = 0;
      auStack_1b0[1] = 0;
      auStack_1b0[0] = 0;
      if ((uint)pbStack_100 != 0) {
        ___memcpy_chk(auStack_1b0,param_8,(ulong)pbStack_100 & 0xffffffff,0x40);
      }
      lVar6 = 0;
      do {
        *(ulong *)((long)auStack_1b0 + lVar6 + 8) =
             *(ulong *)((long)auStack_1b0 + lVar6 + 8) ^ 0x3636363636363636;
        *(ulong *)((long)auStack_1b0 + lVar6) =
             *(ulong *)((long)auStack_1b0 + lVar6) ^ 0x3636363636363636;
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != 0x40);
      aiStack_210[0x16] = 0;
      aiStack_210[0x17] = 0;
      aiStack_210[0x15] = 0;
      aiStack_210[0x13] = 0;
      aiStack_210[0x14] = 0;
      aiStack_210[0x11] = 0;
      aiStack_210[0x12] = 0;
      aiStack_210[0xf] = 0;
      aiStack_210[0x10] = 0;
      aiStack_210[0xd] = 0;
      aiStack_210[0xe] = 0;
      aiStack_210[0xb] = 0;
      aiStack_210[0xc] = 0;
      aiStack_210[9] = 0;
      aiStack_210[10] = 0;
      aiStack_210[7] = 0;
      aiStack_210[8] = 0;
      aiStack_210[5] = 0;
      aiStack_210[6] = 0;
      aiStack_210[2] = -0x67452302;
      aiStack_210[3] = 0x10325476;
      aiStack_210[0] = 0x67452301;
      aiStack_210[1] = -0x10325477;
      aiStack_210[4] = 0xc3d2e1f0;
      func_0x000107c2b4f0(aiStack_210,auStack_1b0,0x40);
      func_0x000107c2b4f0(aiStack_210,param_4,0xd);
      lVar6 = 0;
      if (0x113 < param_7) {
        lVar6 = param_7 - 0x114;
      }
      func_0x000107c2b4f0(aiStack_210,param_5,lVar6);
      piVar3 = aiStack_210;
      FUN_10ae2291c(piVar3,auStack_224,param_5 + lVar6,param_6 - lVar6,param_7 - lVar6);
      if ((int)piVar3 != 0) {
        lVar6 = 0;
        aiStack_210[0x16] = 0;
        aiStack_210[0x17] = 0;
        aiStack_210[0x15] = 0;
        aiStack_210[0x13] = 0;
        aiStack_210[0x14] = 0;
        aiStack_210[0x11] = 0;
        aiStack_210[0x12] = 0;
        aiStack_210[0xf] = 0;
        aiStack_210[0x10] = 0;
        aiStack_210[0xd] = 0;
        aiStack_210[0xe] = 0;
        aiStack_210[0xb] = 0;
        aiStack_210[0xc] = 0;
        aiStack_210[9] = 0;
        aiStack_210[10] = 0;
        aiStack_210[7] = 0;
        aiStack_210[8] = 0;
        aiStack_210[5] = 0;
        aiStack_210[6] = 0;
        aiStack_210[2] = -0x67452302;
        aiStack_210[3] = 0x10325476;
        aiStack_210[0] = 0x67452301;
        aiStack_210[1] = -0x10325477;
        aiStack_210[4] = 0xc3d2e1f0;
        do {
          *(ulong *)((long)auStack_1b0 + lVar6 + 8) =
               *(ulong *)((long)auStack_1b0 + lVar6 + 8) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulong *)((long)auStack_1b0 + lVar6) =
               *(ulong *)((long)auStack_1b0 + lVar6) ^ 0x6a6a6a6a6a6a6a6a;
          lVar6 = lVar6 + 0x10;
        } while (lVar6 != 0x40);
        func_0x000107c2b4f0(aiStack_210,auStack_1b0,0x40);
        func_0x000107c2b4f0(aiStack_210,auStack_224,0x14);
        func_0x000107c2b4f4(param_2,aiStack_210);
        *param_3 = 0x14;
        piVar3 = (int *)0x1;
      }
    }
    else {
      piVar3 = (int *)0x0;
    }
  }
  else {
    piVar3 = (int *)0x0;
    *param_3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return piVar3;
  }
  ___stack_chk_fail();
  puVar4 = (undefined8 *)0x20;
  _malloc();
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0x18;
    puVar4[2] = 0;
    puVar4[3] = 0;
    piVar3 = (int *)(puVar4 + 1);
    piVar3[0] = 0;
    piVar3[1] = 0;
    return piVar3;
  }
  func_0x000107c2b29c(0xd,0,0x41,&UNK_10f6c5725,0x87);
  return (int *)0x0;
}



/* Entry: 10ae22da0; end: 10ae22df3;  */

undefined8 * FUN_10ae22da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x18;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    return puVar1 + 1;
  }
  func_0x000107c2b29c(0xd,0,0x41,&UNK_10f6c5725,0x87);
  return (undefined8 *)0x0;
}



/* Entry: 10ae22df4; end: 10ae22f43;  */

void FUN_10ae22df4(byte *param_1,undefined8 param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  
  puVar2 = PTR___DefaultRuneLocale_11034bcf8;
  if (param_1 == (byte *)0x0) {
    func_0x000107c2b29c(0xd,0,100,&UNK_10f6c5725,0x307);
  }
  else {
    do {
      if (param_3 != 0) {
        bVar1 = *param_1;
        while (bVar1 != 0) {
          uVar4 = (ulong)bVar1;
          if ((char)bVar1 < '\0') {
            ___maskrune(uVar4,0x4000);
            uVar3 = (uint)uVar4;
          }
          else {
            uVar3 = *(uint *)(puVar2 + uVar4 * 4 + 0x3c) & 0x4000;
          }
          if (uVar3 == 0) break;
          param_1 = param_1 + 1;
          bVar1 = *param_1;
        }
      }
      pbVar5 = param_1;
      _strchr(param_1,param_2);
      if ((pbVar5 == param_1) || (*param_1 == 0)) {
        param_1 = (byte *)0x0;
        iVar6 = 0;
      }
      else {
        if (pbVar5 == (byte *)0x0) {
          pbVar7 = param_1;
          _strlen();
          pbVar7 = param_1 + (long)pbVar7;
          if (param_3 != 0) goto LAB_10ae22e90;
LAB_10ae22edc:
          pbVar7 = pbVar7 + -1;
        }
        else {
          pbVar7 = pbVar5;
          if (param_3 == 0) goto LAB_10ae22edc;
LAB_10ae22e90:
          do {
            bVar1 = pbVar7[-1];
            if ((long)(char)bVar1 < 0) {
              uVar3 = (uint)bVar1;
              ___maskrune(bVar1,0x4000);
            }
            else {
              uVar3 = *(uint *)(puVar2 + (long)(char)bVar1 * 4 + 0x3c) & 0x4000;
            }
            pbVar7 = pbVar7 + -1;
          } while (uVar3 != 0);
        }
        iVar6 = ((int)pbVar7 - (int)param_1) + 1;
      }
      (*param_4)(param_1,iVar6,param_5);
    } while ((0 < (int)param_1) && (param_1 = pbVar5 + 1, pbVar5 != (byte *)0x0));
  }
  return;
}



/* Entry: 10ae22f44; end: 10ae22fcb;  */

void FUN_10ae22f44(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long lVar35;
  long lVar36;
  long *plVar37;
  long *plVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  undefined1 auVar50 [16];
  long lVar51;
  long lVar52;
  long alStack_68 [5];
  undefined1 auStack_40 [16];
  byte bStack_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte bStack_28;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b24c(alStack_68,param_1);
  plVar38 = alStack_68;
  func_0x000107c34f58(auStack_40);
  bStack_30 = bStack_30 | (byte)auStack_40._0_8_;
  bStack_2f = bStack_2f | SUB81(auStack_40._0_8_,1);
  bStack_2e = bStack_2e | SUB81(auStack_40._0_8_,2);
  bStack_2d = bStack_2d | SUB81(auStack_40._0_8_,3);
  bStack_2c = bStack_2c | SUB81(auStack_40._0_8_,4);
  bStack_2b = bStack_2b | SUB81(auStack_40._0_8_,5);
  bStack_2a = bStack_2a | SUB81(auStack_40._0_8_,6);
  bStack_29 = bStack_29 | SUB81(auStack_40._0_8_,7);
  bStack_28 = bStack_28 | (byte)auStack_40._8_8_;
  bStack_27 = bStack_27 | SUB81(auStack_40._8_8_,1);
  bStack_26 = bStack_26 | SUB81(auStack_40._8_8_,2);
  bStack_25 = bStack_25 | SUB81(auStack_40._8_8_,3);
  bStack_24 = bStack_24 | SUB81(auStack_40._8_8_,4);
  bStack_23 = bStack_23 | SUB81(auStack_40._8_8_,5);
  bStack_22 = bStack_22 | SUB81(auStack_40._8_8_,6);
  bStack_21 = bStack_21 | SUB81(auStack_40._8_8_,7);
  auVar50[1] = bStack_2f;
  auVar50[0] = bStack_30;
  auVar50[2] = bStack_2e;
  auVar50[3] = bStack_2d;
  auVar50[4] = bStack_2c;
  auVar50[5] = bStack_2b;
  auVar50[6] = bStack_2a;
  auVar50[7] = bStack_29;
  auVar50[8] = bStack_28;
  auVar50[9] = bStack_27;
  auVar50[10] = bStack_26;
  auVar50[0xb] = bStack_25;
  auVar50[0xc] = bStack_24;
  auVar50[0xd] = bStack_23;
  auVar50[0xe] = bStack_22;
  auVar50[0xf] = bStack_21;
  auVar34[1] = bStack_2f;
  auVar34[0] = bStack_30;
  auVar34[2] = bStack_2e;
  auVar34[3] = bStack_2d;
  auVar34[4] = bStack_2c;
  auVar34[5] = bStack_2b;
  auVar34[6] = bStack_2a;
  auVar34[7] = bStack_29;
  auVar34[8] = bStack_28;
  auVar34[9] = bStack_27;
  auVar34[10] = bStack_26;
  auVar34[0xb] = bStack_25;
  auVar34[0xc] = bStack_24;
  auVar34[0xd] = bStack_23;
  auVar34[0xe] = bStack_22;
  auVar34[0xf] = bStack_21;
  auVar50 = NEON_ext(auVar50,auVar34,8,1);
  uVar44 = CONCAT17(bStack_29 | auVar50[7],
                    CONCAT16(bStack_2a | auVar50[6],
                             CONCAT15(bStack_2b | auVar50[5],
                                      CONCAT14(bStack_2c | auVar50[4],
                                               CONCAT13(bStack_2d | auVar50[3],
                                                        CONCAT12(bStack_2e | auVar50[2],
                                                                 CONCAT11(bStack_2f | auVar50[1],
                                                                          bStack_30 | auVar50[0]))))
                                     )));
  uVar44 = uVar44 | uVar44 >> 0x20;
  uVar8 = (uint)uVar44 | (uint)(uVar44 >> 0x10);
  plVar37 = (long *)(ulong)(((uVar8 | uVar8 >> 8) & 0xff) != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  lVar45 = plVar38[9];
  lVar46 = plVar38[4];
  lVar41 = plVar38[5];
  lVar40 = *plVar38;
  lVar52 = plVar38[3];
  lVar51 = plVar38[2];
  lVar35 = plVar38[7];
  lVar36 = plVar38[8];
  plVar37[1] = plVar38[1] + plVar38[6];
  *plVar37 = lVar40 + lVar41;
  plVar37[3] = lVar52 + lVar36;
  plVar37[2] = lVar51 + lVar35;
  plVar37[4] = lVar46 + lVar45;
  func_0x000107c2b248(plVar37 + 5,plVar38 + 5,plVar38);
  lVar40 = plVar38[0xb];
  lVar41 = plVar38[10];
  lVar35 = plVar38[0xc];
  lVar36 = plVar38[0xd];
  plVar37[0xe] = plVar38[0xe];
  plVar37[0xb] = lVar40;
  plVar37[10] = lVar41;
  plVar37[0xd] = lVar36;
  plVar37[0xc] = lVar35;
  uVar4 = plVar38[0x12];
  uVar6 = plVar38[0x13];
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar6;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar6;
  uVar48 = plVar38[0x11];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar4;
  uVar44 = uVar4 * 0x48621a40428616 + uVar6 * 0x3ef5f8c52e700e;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar48;
  uVar39 = uVar44 + uVar48 * 0x7a9372c9c903d5;
  uVar5 = plVar38[0xf];
  uVar7 = plVar38[0x10];
  uVar42 = uVar39 + uVar7 * 0x2ac822b5a729ed;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar7;
  uVar43 = uVar42 + uVar5 * 0x69b9426b2f159;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar5;
  uVar49 = uVar4 * 0x2ac822b5a729ed + uVar6 * 0x7a9372c9c903d5;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar4;
  uVar47 = uVar4 * 0x7a9372c9c903d5 + uVar6 * 0x48621a40428616;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar6;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar4;
  uVar1 = uVar47 + uVar48 * 0x2ac822b5a729ed;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar48;
  uVar2 = uVar1 + uVar7 * 0x69b9426b2f159;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar7;
  uVar3 = uVar2 + uVar5 * 0x35050762add7a;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar5;
  lVar41 = SUB168(auVar14 * ZEXT816(0x7a9372c9c903d5),8) +
           SUB168(ZEXT816(0x48621a40428616) * auVar28,8) +
           (ulong)CARRY8(uVar4 * 0x7a9372c9c903d5,uVar6 * 0x48621a40428616) +
           SUB168(auVar15 * ZEXT816(0x2ac822b5a729ed),8) +
           (ulong)CARRY8(uVar47,uVar48 * 0x2ac822b5a729ed) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar29,8) +
           (ulong)CARRY8(uVar1,uVar7 * 0x69b9426b2f159) +
           SUB168(auVar16 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar2,uVar5 * 0x35050762add7a);
  uVar39 = uVar43 >> 0x33 |
           (SUB168(auVar9 * ZEXT816(0x48621a40428616),8) +
            SUB168(ZEXT816(0x3ef5f8c52e700e) * auVar27,8) +
            (ulong)CARRY8(uVar4 * 0x48621a40428616,uVar6 * 0x3ef5f8c52e700e) +
            SUB168(auVar10 * ZEXT816(0x7a9372c9c903d5),8) +
            (ulong)CARRY8(uVar44,uVar48 * 0x7a9372c9c903d5) +
            SUB168(auVar11 * ZEXT816(0x2ac822b5a729ed),8) +
            (ulong)CARRY8(uVar39,uVar7 * 0x2ac822b5a729ed) +
            SUB168(auVar12 * ZEXT816(0x69b9426b2f159),8) +
           (ulong)CARRY8(uVar42,uVar5 * 0x69b9426b2f159)) * 0x2000;
  uVar44 = uVar3 + uVar39;
  if (CARRY8(uVar3,uVar39)) {
    lVar41 = lVar41 + 1;
  }
  uVar39 = uVar49 + uVar7 * 0x35050762add7a;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar7;
  uVar42 = uVar39 + uVar48 * 0x69b9426b2f159;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar48;
  uVar47 = uVar42 + uVar5 * 0x3cf44c0038052;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar5;
  lVar40 = SUB168(auVar13 * ZEXT816(0x2ac822b5a729ed),8) +
           SUB168(ZEXT816(0x7a9372c9c903d5) * auVar26,8) +
           (ulong)CARRY8(uVar4 * 0x2ac822b5a729ed,uVar6 * 0x7a9372c9c903d5) +
           SUB168(auVar17 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar49,uVar7 * 0x35050762add7a) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar30,8) +
           (ulong)CARRY8(uVar39,uVar48 * 0x69b9426b2f159) +
           SUB168(auVar18 * ZEXT816(0x3cf44c0038052),8) +
           (ulong)CARRY8(uVar42,uVar5 * 0x3cf44c0038052);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar6;
  uVar42 = uVar44 >> 0x33 | lVar41 << 0xd;
  uVar39 = uVar47 + uVar42;
  if (CARRY8(uVar47,uVar42)) {
    lVar40 = lVar40 + 1;
  }
  uVar42 = uVar48 * 0x35050762add7a + uVar6 * 0x2ac822b5a729ed;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar48;
  uVar49 = uVar42 + uVar7 * 0x3cf44c0038052;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar7;
  uVar47 = uVar49 + uVar4 * 0x69b9426b2f159;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar4;
  uVar1 = uVar47 + uVar5 * 0x6738cc7407977;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar5;
  lVar41 = SUB168(auVar19 * ZEXT816(0x35050762add7a),8) +
           SUB168(ZEXT816(0x2ac822b5a729ed) * auVar31,8) +
           (ulong)CARRY8(uVar48 * 0x35050762add7a,uVar6 * 0x2ac822b5a729ed) +
           SUB168(auVar20 * ZEXT816(0x3cf44c0038052),8) +
           (ulong)CARRY8(uVar42,uVar7 * 0x3cf44c0038052) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar32,8) +
           (ulong)CARRY8(uVar49,uVar4 * 0x69b9426b2f159) +
           SUB168(auVar21 * ZEXT816(0x6738cc7407977),8) +
           (ulong)CARRY8(uVar47,uVar5 * 0x6738cc7407977);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  uVar49 = uVar39 >> 0x33 | lVar40 << 0xd;
  uVar42 = uVar1 + uVar49;
  if (CARRY8(uVar1,uVar49)) {
    lVar41 = lVar41 + 1;
  }
  uVar49 = uVar48 * 0x3cf44c0038052 + uVar4 * 0x35050762add7a;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar48;
  uVar47 = uVar49 + uVar7 * 0x6738cc7407977;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar7;
  uVar1 = uVar47 + uVar6 * 0x69b9426b2f159;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar6;
  uVar2 = uVar1 + uVar5 * 0x2406d9dc56dff;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar5;
  lVar40 = SUB168(auVar23 * ZEXT816(0x3cf44c0038052),8) +
           SUB168(auVar22 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar48 * 0x3cf44c0038052,uVar4 * 0x35050762add7a) +
           SUB168(auVar24 * ZEXT816(0x6738cc7407977),8) +
           (ulong)CARRY8(uVar49,uVar7 * 0x6738cc7407977) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar33,8) +
           (ulong)CARRY8(uVar47,uVar6 * 0x69b9426b2f159) +
           SUB168(auVar25 * ZEXT816(0x2406d9dc56dff),8) +
           (ulong)CARRY8(uVar1,uVar5 * 0x2406d9dc56dff);
  uVar47 = uVar42 >> 0x33 | lVar41 << 0xd;
  uVar49 = uVar2 + uVar47;
  if (CARRY8(uVar2,uVar47)) {
    lVar40 = lVar40 + 1;
  }
  uVar43 = (uVar43 & 0x7ffffffffffff) + (uVar49 >> 0x33 | lVar40 << 0xd) * 0x13;
  uVar44 = (uVar44 & 0x7ffffffffffff) + (uVar43 >> 0x33);
  plVar37[0xf] = uVar43 & 0x7ffffffffffff;
  plVar37[0x10] = uVar44 & 0x7ffffffffffff;
  plVar37[0x11] = (uVar39 & 0x7ffffffffffff) + (uVar44 >> 0x33);
  plVar37[0x12] = uVar42 & 0x7ffffffffffff;
  plVar37[0x13] = uVar49 & 0x7ffffffffffff;
  return;
}



/* Entry: 10ae22fcc; end: 10ae2303f;  */

void FUN_10ae22fcc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  
  lVar37 = param_2[9];
  lVar38 = param_2[4];
  lVar42 = param_2[5];
  lVar43 = *param_2;
  lVar47 = param_2[3];
  lVar46 = param_2[2];
  lVar45 = param_2[8];
  lVar44 = param_2[7];
  param_1[1] = param_2[1] + param_2[6];
  *param_1 = lVar43 + lVar42;
  param_1[3] = lVar47 + lVar45;
  param_1[2] = lVar46 + lVar44;
  param_1[4] = lVar38 + lVar37;
  func_0x000107c2b248(param_1 + 5,param_2 + 5,param_2);
  lVar38 = param_2[0xb];
  lVar37 = param_2[10];
  lVar43 = param_2[0xd];
  lVar42 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xb] = lVar38;
  param_1[10] = lVar37;
  param_1[0xd] = lVar43;
  param_1[0xc] = lVar42;
  uVar5 = param_2[0x12];
  uVar7 = param_2[0x13];
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar7;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar7;
  uVar40 = param_2[0x11];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar5;
  uVar1 = uVar5 * 0x48621a40428616 + uVar7 * 0x3ef5f8c52e700e;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar40;
  uVar34 = uVar1 + uVar40 * 0x7a9372c9c903d5;
  uVar6 = param_2[0xf];
  uVar8 = param_2[0x10];
  uVar35 = uVar34 + uVar8 * 0x2ac822b5a729ed;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar8;
  uVar36 = uVar35 + uVar6 * 0x69b9426b2f159;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar6;
  uVar41 = uVar5 * 0x2ac822b5a729ed + uVar7 * 0x7a9372c9c903d5;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar5;
  uVar39 = uVar5 * 0x7a9372c9c903d5 + uVar7 * 0x48621a40428616;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar7;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar5;
  uVar2 = uVar39 + uVar40 * 0x2ac822b5a729ed;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar40;
  uVar3 = uVar2 + uVar8 * 0x69b9426b2f159;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar8;
  uVar4 = uVar3 + uVar6 * 0x35050762add7a;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar6;
  lVar37 = SUB168(auVar14 * ZEXT816(0x7a9372c9c903d5),8) +
           SUB168(ZEXT816(0x48621a40428616) * auVar28,8) +
           (ulong)CARRY8(uVar5 * 0x7a9372c9c903d5,uVar7 * 0x48621a40428616) +
           SUB168(auVar15 * ZEXT816(0x2ac822b5a729ed),8) +
           (ulong)CARRY8(uVar39,uVar40 * 0x2ac822b5a729ed) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar29,8) +
           (ulong)CARRY8(uVar2,uVar8 * 0x69b9426b2f159) +
           SUB168(auVar16 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar3,uVar6 * 0x35050762add7a);
  uVar34 = uVar36 >> 0x33 |
           (SUB168(auVar9 * ZEXT816(0x48621a40428616),8) +
            SUB168(ZEXT816(0x3ef5f8c52e700e) * auVar27,8) +
            (ulong)CARRY8(uVar5 * 0x48621a40428616,uVar7 * 0x3ef5f8c52e700e) +
            SUB168(auVar10 * ZEXT816(0x7a9372c9c903d5),8) +
            (ulong)CARRY8(uVar1,uVar40 * 0x7a9372c9c903d5) +
            SUB168(auVar11 * ZEXT816(0x2ac822b5a729ed),8) +
            (ulong)CARRY8(uVar34,uVar8 * 0x2ac822b5a729ed) +
            SUB168(auVar12 * ZEXT816(0x69b9426b2f159),8) +
           (ulong)CARRY8(uVar35,uVar6 * 0x69b9426b2f159)) * 0x2000;
  uVar1 = uVar4 + uVar34;
  if (CARRY8(uVar4,uVar34)) {
    lVar37 = lVar37 + 1;
  }
  uVar34 = uVar41 + uVar8 * 0x35050762add7a;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar8;
  uVar35 = uVar34 + uVar40 * 0x69b9426b2f159;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar40;
  uVar39 = uVar35 + uVar6 * 0x3cf44c0038052;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar6;
  lVar38 = SUB168(auVar13 * ZEXT816(0x2ac822b5a729ed),8) +
           SUB168(ZEXT816(0x7a9372c9c903d5) * auVar26,8) +
           (ulong)CARRY8(uVar5 * 0x2ac822b5a729ed,uVar7 * 0x7a9372c9c903d5) +
           SUB168(auVar17 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar41,uVar8 * 0x35050762add7a) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar30,8) +
           (ulong)CARRY8(uVar34,uVar40 * 0x69b9426b2f159) +
           SUB168(auVar18 * ZEXT816(0x3cf44c0038052),8) +
           (ulong)CARRY8(uVar35,uVar6 * 0x3cf44c0038052);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar7;
  uVar35 = uVar1 >> 0x33 | lVar37 << 0xd;
  uVar34 = uVar39 + uVar35;
  if (CARRY8(uVar39,uVar35)) {
    lVar38 = lVar38 + 1;
  }
  uVar35 = uVar40 * 0x35050762add7a + uVar7 * 0x2ac822b5a729ed;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar40;
  uVar41 = uVar35 + uVar8 * 0x3cf44c0038052;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar8;
  uVar39 = uVar41 + uVar5 * 0x69b9426b2f159;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar5;
  uVar2 = uVar39 + uVar6 * 0x6738cc7407977;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  lVar37 = SUB168(auVar19 * ZEXT816(0x35050762add7a),8) +
           SUB168(ZEXT816(0x2ac822b5a729ed) * auVar31,8) +
           (ulong)CARRY8(uVar40 * 0x35050762add7a,uVar7 * 0x2ac822b5a729ed) +
           SUB168(auVar20 * ZEXT816(0x3cf44c0038052),8) +
           (ulong)CARRY8(uVar35,uVar8 * 0x3cf44c0038052) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar32,8) +
           (ulong)CARRY8(uVar41,uVar5 * 0x69b9426b2f159) +
           SUB168(auVar21 * ZEXT816(0x6738cc7407977),8) +
           (ulong)CARRY8(uVar39,uVar6 * 0x6738cc7407977);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar5;
  uVar41 = uVar34 >> 0x33 | lVar38 << 0xd;
  uVar35 = uVar2 + uVar41;
  if (CARRY8(uVar2,uVar41)) {
    lVar37 = lVar37 + 1;
  }
  uVar41 = uVar40 * 0x3cf44c0038052 + uVar5 * 0x35050762add7a;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar40;
  uVar39 = uVar41 + uVar8 * 0x6738cc7407977;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  uVar2 = uVar39 + uVar7 * 0x69b9426b2f159;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar7;
  uVar3 = uVar2 + uVar6 * 0x2406d9dc56dff;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar6;
  lVar38 = SUB168(auVar23 * ZEXT816(0x3cf44c0038052),8) +
           SUB168(auVar22 * ZEXT816(0x35050762add7a),8) +
           (ulong)CARRY8(uVar40 * 0x3cf44c0038052,uVar5 * 0x35050762add7a) +
           SUB168(auVar24 * ZEXT816(0x6738cc7407977),8) +
           (ulong)CARRY8(uVar41,uVar8 * 0x6738cc7407977) +
           SUB168(ZEXT816(0x69b9426b2f159) * auVar33,8) +
           (ulong)CARRY8(uVar39,uVar7 * 0x69b9426b2f159) +
           SUB168(auVar25 * ZEXT816(0x2406d9dc56dff),8) +
           (ulong)CARRY8(uVar2,uVar6 * 0x2406d9dc56dff);
  uVar39 = uVar35 >> 0x33 | lVar37 << 0xd;
  uVar41 = uVar3 + uVar39;
  if (CARRY8(uVar3,uVar39)) {
    lVar38 = lVar38 + 1;
  }
  uVar36 = (uVar36 & 0x7ffffffffffff) + (uVar41 >> 0x33 | lVar38 << 0xd) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar36 >> 0x33);
  param_1[0xf] = uVar36 & 0x7ffffffffffff;
  param_1[0x10] = uVar1 & 0x7ffffffffffff;
  param_1[0x11] = (uVar34 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[0x12] = uVar35 & 0x7ffffffffffff;
  param_1[0x13] = uVar41 & 0x7ffffffffffff;
  return;
}



/* Entry: 10ae23040; end: 10ae231f7;  */

void FUN_10ae23040(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  lVar1 = param_2[9];
  lVar2 = param_2[4];
  lVar4 = param_2[5];
  lVar5 = *param_2;
  lVar9 = param_2[3];
  lVar8 = param_2[2];
  lVar7 = param_2[8];
  lVar6 = param_2[7];
  param_1[1] = param_2[1] + param_2[6];
  *param_1 = lVar5 + lVar4;
  param_1[3] = lVar9 + lVar7;
  param_1[2] = lVar8 + lVar6;
  param_1[4] = lVar2 + lVar1;
  func_0x000107c2b248(param_1 + 5,param_2 + 5,param_2);
  func_0x000107c34f60(&lStack_b0,param_1,param_3);
  func_0x000107c34f60(&lStack_88,param_1 + 5,param_3 + 0x28);
  func_0x000107c34f60(&lStack_d8,param_3 + 0x78,param_2 + 0xf);
  func_0x000107c34f60(&lStack_60,param_2 + 10,param_3 + 0x50);
  plVar3 = param_1 + 0xf;
  param_1[0x10] = lStack_58 * 2;
  *plVar3 = lStack_60 * 2;
  param_1[0x12] = lStack_48 * 2;
  param_1[0x11] = lStack_50 * 2;
  param_1[0x13] = lStack_40 << 1;
  *param_1 = (lStack_b0 + 0xfffffffffffda) - lStack_88;
  param_1[1] = (lStack_a8 - lStack_80) + 0xffffffffffffe;
  param_1[2] = (lStack_a0 - lStack_78) + 0xffffffffffffe;
  param_1[3] = (lStack_98 - lStack_70) + 0xffffffffffffe;
  param_1[4] = (lStack_90 - lStack_68) + 0xffffffffffffe;
  param_1[5] = lStack_88 + lStack_b0;
  param_1[6] = lStack_80 + lStack_a8;
  param_1[7] = lStack_78 + lStack_a0;
  param_1[8] = lStack_70 + lStack_98;
  param_1[9] = lStack_68 + lStack_90;
  func_0x000107c2b24c(&lStack_b0,plVar3);
  param_1[10] = lStack_d8 + lStack_b0;
  param_1[0xb] = lStack_d0 + lStack_a8;
  param_1[0xc] = lStack_c8 + lStack_a0;
  param_1[0xd] = lStack_c0 + lStack_98;
  param_1[0xe] = lStack_b8 + lStack_90;
  *plVar3 = (lStack_b0 + 0xfffffffffffda) - lStack_d8;
  param_1[0x10] = (lStack_a8 - lStack_d0) + 0xffffffffffffe;
  param_1[0x11] = (lStack_a0 - lStack_c8) + 0xffffffffffffe;
  param_1[0x12] = (lStack_98 - lStack_c0) + 0xffffffffffffe;
  param_1[0x13] = (lStack_90 - lStack_b8) + 0xffffffffffffe;
  return;
}



/* Entry: 10ae231f8; end: 10ae23813;  */

void FUN_10ae231f8(ushort *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  
  uVar29 = (ulong)((*(uint *)(param_1 + 0x16) >> 0x18 | (uint)(byte)param_1[0x18] << 8 |
                   (uint)*(byte *)((long)param_1 + 0x31) << 0x10) >> 2) & 0x1fffff;
  uVar31 = (ulong)(*(uint *)((long)param_1 + 0x31) >> 7) & 0x1fffff;
  uVar27 = (ulong)(*(uint *)(param_1 + 0x1a) >> 4) & 0x1fffff;
  uVar24 = (ulong)((*(uint *)(param_1 + 0x1a) >> 0x18 | (uint)(byte)param_1[0x1c] << 8 |
                   (uint)*(byte *)((long)param_1 + 0x39) << 0x10) >> 1) & 0x1fffff;
  lVar20 = ((ulong)(*(uint *)((long)param_1 + 0xf) >> 6) & 0x1fffff) + uVar29 * 0xa2c13;
  lVar32 = ((ulong)*(ushort *)((long)param_1 + 0x15) |
           ((ulong)*(byte *)((long)param_1 + 0x17) & 0x1f) << 0x10) + uVar31 * 0x72d18 +
           uVar27 * 0xa2c13 + uVar29 * 0x9fb67;
  uVar1 = lVar20 + 0x100000;
  lVar13 = (((ulong)(*(uint *)((long)param_1 + 0xf) >> 0x18) |
             (ulong)*(byte *)((long)param_1 + 0x13) << 8 | (ulong)(byte)param_1[10] << 0x10) >> 3) +
           uVar31 * 0xa2c13 + uVar29 * 0x72d18 + (uVar1 >> 0x15);
  uVar2 = lVar32 + 0x100000;
  lVar17 = ((ulong)(*(uint *)((long)param_1 + 0x17) >> 5) & 0x1fffff) + uVar31 * 0x9fb67 +
           uVar27 * 0x72d18 + (long)(int)uVar29 * -0xf39ad + uVar24 * 0xa2c13 + (uVar2 >> 0x15);
  uVar11 = *(uint *)(param_1 + 0x1e) >> 3;
  lVar14 = ((ulong)param_1[0x15] | ((ulong)(byte)param_1[0x16] & 0x1f) << 0x10) +
           (long)(int)uVar11 * -0xa6f7d;
  uVar28 = (ulong)(*(uint *)((long)param_1 + 0x39) >> 6) & 0x1fffff;
  lVar22 = ((ulong)(*(uint *)(param_1 + 0x12) >> 6) & 0x1fffff) + (long)(int)uVar11 * -0xf39ad +
           uVar28 * 0x215d1 + (long)(int)uVar24 * -0xa6f7d;
  lVar21 = ((ulong)(*(uint *)((long)param_1 + 0x1f) >> 4) & 0x1fffff) + (long)(int)uVar31 * -0xa6f7d
           + uVar27 * 0x215d1 + (ulong)uVar11 * 0x72d18 + uVar28 * 0x9fb67 +
           (long)(int)uVar24 * -0xf39ad;
  lVar30 = ((ulong)((*(uint *)((long)param_1 + 0x17) >> 0x18 |
                     (uint)*(byte *)((long)param_1 + 0x1b) << 8 | (uint)(byte)param_1[0xe] << 0x10)
                   >> 2) & 0x1fffff) + (long)(int)uVar31 * -0xf39ad + uVar27 * 0x9fb67 +
           uVar29 * 0x215d1 + uVar28 * 0xa2c13 + uVar24 * 0x72d18;
  uVar3 = lVar30 + 0x100000;
  lVar7 = ((ulong)(*(uint *)(param_1 + 0xe) >> 7) & 0x1fffff) + uVar31 * 0x215d1 +
          (long)(int)uVar27 * -0xf39ad + (long)(int)uVar29 * -0xa6f7d + (ulong)uVar11 * 0xa2c13 +
          uVar28 * 0x72d18 + uVar24 * 0x9fb67 + ((long)uVar3 >> 0x15);
  uVar29 = lVar21 + 0x100000;
  lVar16 = ((ulong)((*(uint *)((long)param_1 + 0x1f) >> 0x18 |
                     (uint)*(byte *)((long)param_1 + 0x23) << 8 | (uint)(byte)param_1[0x12] << 0x10)
                   >> 1) & 0x1fffff) + (long)(int)uVar27 * -0xa6f7d + (ulong)uVar11 * 0x9fb67 +
           (long)(int)uVar28 * -0xf39ad + uVar24 * 0x215d1 + ((long)uVar29 >> 0x15);
  uVar24 = lVar22 + 0x100000;
  lVar25 = (((ulong)(*(uint *)(param_1 + 0x12) >> 0x18) | (ulong)(byte)param_1[0x14] << 8 |
            (ulong)*(byte *)((long)param_1 + 0x29) << 0x10) >> 3) + (ulong)uVar11 * 0x215d1 +
           (long)(int)uVar28 * -0xa6f7d + ((long)uVar24 >> 0x15);
  uVar27 = lVar14 + 0x100000;
  lVar8 = ((ulong)(*(uint *)(param_1 + 0x16) >> 5) & 0x1fffff) + ((long)uVar27 >> 0x15);
  uVar28 = lVar13 + 0x100000;
  uVar31 = lVar7 + 0x100000;
  lVar21 = (lVar21 - (uVar29 & 0xffffffffffe00000)) + ((long)uVar31 >> 0x15);
  uVar29 = lVar16 + 0x100000;
  lVar22 = (lVar22 - (uVar24 & 0xffffffffffe00000)) + ((long)uVar29 >> 0x15);
  lVar16 = lVar16 - (uVar29 & 0xffffffffffe00000);
  uVar29 = lVar25 + 0x100000;
  lVar14 = (lVar14 - (uVar27 & 0xffffffffffe00000)) + ((long)uVar29 >> 0x15);
  lVar25 = lVar25 - (uVar29 & 0xffffffffffe00000);
  lVar18 = ((ulong)*param_1 | ((ulong)(byte)param_1[1] & 0x1f) << 0x10) + lVar21 * 0xa2c13;
  uVar29 = lVar18 + 0x100000;
  lVar9 = ((ulong)(*(uint *)(param_1 + 1) >> 5) & 0x1fffff) + lVar21 * 0x72d18 + lVar16 * 0xa2c13 +
          ((long)uVar29 >> 0x15);
  lVar23 = (lVar32 - (uVar2 & 0xfffffe00000)) + (uVar28 >> 0x15) + lVar8 * -0xf39ad +
           lVar14 * 0x215d1 + lVar25 * -0xa6f7d;
  uVar2 = lVar17 + 0x100000;
  lVar30 = (lVar30 - (uVar3 & 0xffffffffffe00000)) + lVar8 * -0xa6f7d + ((long)uVar2 >> 0x15);
  lVar12 = (lVar20 - (uVar1 & 0x7ffffe00000)) + lVar8 * 0x72d18 + lVar14 * 0x9fb67 +
           lVar25 * -0xf39ad + lVar22 * 0x215d1 + lVar16 * -0xa6f7d;
  lVar26 = ((ulong)((*(uint *)(param_1 + 1) >> 0x18 | (uint)(byte)param_1[3] << 8 |
                    (uint)*(byte *)((long)param_1 + 7) << 0x10) >> 2) & 0x1fffff) + lVar21 * 0x9fb67
           + lVar22 * 0xa2c13 + lVar16 * 0x72d18;
  lVar19 = ((ulong)(*(uint *)(param_1 + 5) >> 4) & 0x1fffff) + lVar21 * 0x215d1 + lVar14 * 0xa2c13 +
           lVar25 * 0x72d18 + lVar22 * 0x9fb67 + lVar16 * -0xf39ad;
  uVar1 = lVar12 + 0x100000;
  lVar13 = (lVar13 - (uVar28 & 0x7fffffffffe00000)) + lVar8 * 0x9fb67 + lVar14 * -0xf39ad +
           lVar25 * 0x215d1 + lVar22 * -0xa6f7d + ((long)uVar1 >> 0x15);
  uVar3 = lVar23 + 0x100000;
  lVar17 = ((lVar17 + lVar8 * 0x215d1) - (uVar2 & 0xffffffffffe00000)) + lVar14 * -0xa6f7d +
           ((long)uVar3 >> 0x15);
  uVar2 = lVar30 + 0x100000;
  lVar7 = (lVar7 - (uVar31 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar24 = lVar9 + 0x100000;
  uVar27 = lVar13 + 0x100000;
  uVar28 = lVar17 + 0x100000;
  uVar31 = lVar7 + 0x100000;
  lVar32 = (long)uVar31 >> 0x15;
  uVar4 = lVar26 + 0x100000;
  lVar20 = ((ulong)(*(uint *)((long)param_1 + 7) >> 7) & 0x1fffff) + lVar21 * -0xf39ad +
           lVar25 * 0xa2c13 + lVar22 * 0x72d18 + lVar16 * 0x9fb67 + ((long)uVar4 >> 0x15);
  uVar5 = lVar20 + 0x100000;
  uVar6 = lVar19 + 0x100000;
  lVar16 = ((ulong)((*(uint *)(param_1 + 5) >> 0x18 | (uint)(byte)param_1[7] << 8 |
                    (uint)*(byte *)((long)param_1 + 0xf) << 0x10) >> 1) & 0x1fffff) +
           lVar8 * 0xa2c13 + lVar21 * -0xa6f7d + lVar14 * 0x72d18 + lVar25 * 0x9fb67 +
           lVar22 * -0xf39ad + lVar16 * 0x215d1 + ((long)uVar6 >> 0x15);
  uVar15 = (lVar18 - (uVar29 & 0xffffffffffe00000)) + lVar32 * 0xa2c13;
  uVar29 = lVar16 + 0x100000;
  uVar10 = ((lVar9 + lVar32 * 0x72d18) - (uVar24 & 0xffffffffffe00000)) + ((long)uVar15 >> 0x15);
  uVar24 = ((lVar26 + lVar32 * 0x9fb67) - (uVar4 & 0xffffffffffe00000)) + ((long)uVar24 >> 0x15) +
           ((long)uVar10 >> 0x15);
  uVar4 = ((lVar20 + lVar32 * -0xf39ad) - (uVar5 & 0xffffffffffe00000)) + ((long)uVar24 >> 0x15);
  uVar5 = ((lVar19 + lVar32 * 0x215d1) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15) +
          ((long)uVar4 >> 0x15);
  uVar6 = ((lVar16 + lVar32 * -0xa6f7d) - (uVar29 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  uVar1 = (lVar12 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar29 >> 0x15) + ((long)uVar6 >> 0x15);
  uVar29 = (lVar13 - (uVar27 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  uVar3 = (lVar23 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar27 >> 0x15) + ((long)uVar29 >> 0x15);
  uVar27 = (lVar17 - (uVar28 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  uVar2 = (lVar30 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar28 >> 0x15) + ((long)uVar27 >> 0x15);
  uVar28 = (lVar7 - (uVar31 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar13 = (long)uVar28 >> 0x15;
  lVar17 = (uVar15 & 0x1fffff) + lVar13 * 0xa2c13;
  *(char *)((long)param_1 + 1) = (char)((ulong)lVar17 >> 8);
  uVar31 = (uVar10 & 0x1fffff) + lVar13 * 0x72d18 + (lVar17 >> 0x15);
  *(char *)param_1 = (char)lVar17;
  *(byte *)(param_1 + 1) = (byte)((ulong)lVar17 >> 0x10) & 0x1f | (byte)((uint)uVar31 << 5);
  *(char *)((long)param_1 + 3) = (char)(uVar31 >> 3);
  *(char *)(param_1 + 2) = (char)(uVar31 >> 0xb);
  uVar24 = (uVar24 & 0x1fffff) + lVar13 * 0x9fb67 + ((long)uVar31 >> 0x15);
  *(byte *)((long)param_1 + 5) = (byte)((uint)uVar31 >> 0x13) & 3 | (byte)((uint)uVar24 << 2);
  *(char *)(param_1 + 3) = (char)(uVar24 >> 6);
  uVar31 = (uVar4 & 0x1fffff) + lVar13 * -0xf39ad + ((long)uVar24 >> 0x15);
  *(byte *)((long)param_1 + 7) = (byte)((uint)uVar24 >> 0xe) & 0x7f | (byte)((uint)uVar31 << 7);
  *(char *)(param_1 + 4) = (char)(uVar31 >> 1);
  *(char *)((long)param_1 + 9) = (char)(uVar31 >> 9);
  uVar24 = (uVar5 & 0x1fffff) + lVar13 * 0x215d1 + ((long)uVar31 >> 0x15);
  *(byte *)(param_1 + 5) = (byte)((uint)uVar31 >> 0x11) & 0xf | (byte)((uint)uVar24 << 4);
  *(char *)((long)param_1 + 0xb) = (char)(uVar24 >> 4);
  *(char *)(param_1 + 6) = (char)(uVar24 >> 0xc);
  uVar31 = (uVar6 & 0x1fffff) + lVar13 * -0xa6f7d + ((long)uVar24 >> 0x15);
  *(byte *)((long)param_1 + 0xd) = (byte)((uint)uVar24 >> 0x14) & 1 | (byte)((uint)uVar31 << 1);
  *(char *)(param_1 + 7) = (char)(uVar31 >> 7);
  uVar1 = (uVar1 & 0x1fffff) + ((long)uVar31 >> 0x15);
  *(byte *)((long)param_1 + 0xf) = (byte)((uint)uVar31 >> 0xf) & 0x3f | (byte)((uint)uVar1 << 6);
  *(char *)(param_1 + 8) = (char)(uVar1 >> 2);
  *(char *)((long)param_1 + 0x11) = (char)(uVar1 >> 10);
  uVar29 = (uVar29 & 0x1fffff) + ((long)uVar1 >> 0x15);
  *(byte *)(param_1 + 9) = (byte)((uint)uVar1 >> 0x12) & 7 | (byte)((int)uVar29 << 3);
  *(char *)((long)param_1 + 0x13) = (char)(uVar29 >> 5);
  lVar13 = (uVar3 & 0x1fffff) + ((long)uVar29 >> 0x15);
  *(char *)(param_1 + 10) = (char)(uVar29 >> 0xd);
  *(char *)(param_1 + 0xb) = (char)((ulong)lVar13 >> 8);
  uVar1 = (uVar27 & 0x1fffff) + (lVar13 >> 0x15);
  *(char *)((long)param_1 + 0x15) = (char)lVar13;
  *(byte *)((long)param_1 + 0x17) = (byte)((ulong)lVar13 >> 0x10) & 0x1f | (byte)((uint)uVar1 << 5);
  *(char *)(param_1 + 0xc) = (char)(uVar1 >> 3);
  *(char *)((long)param_1 + 0x19) = (char)(uVar1 >> 0xb);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar1 >> 0x15);
  uVar3 = (uVar28 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)(param_1 + 0xd) = (byte)((uint)uVar1 >> 0x13) & 3 | (byte)((uint)uVar2 << 2);
  *(char *)((long)param_1 + 0x1b) = (char)(uVar2 >> 6);
  *(byte *)(param_1 + 0xe) = (byte)((uint)uVar2 >> 0xe) & 0x7f | (byte)((int)uVar3 << 7);
  *(char *)((long)param_1 + 0x1d) = (char)((uint)((int)((long)uVar2 >> 0x15) + (int)uVar28) >> 1);
  *(char *)(param_1 + 0xf) = (char)(uVar3 >> 9);
  *(char *)((long)param_1 + 0x1f) = (char)(uVar3 >> 0x11);
  return;
}



/* Entry: 10ae23814; end: 10ae238c7;  */

char * FUN_10ae23814(char *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  undefined1 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  long lVar42;
  int iVar43;
  uint uVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  ulong uVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  ulong uVar57;
  ulong uVar58;
  long lVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  ulong uVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined1 auVar80 [16];
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  long lStack_1190;
  long lStack_1188;
  long lStack_1180;
  long lStack_1178;
  long lStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  ulong auStack_1110 [4];
  ulong uStack_10f0;
  ulong uStack_10e8;
  long lStack_10e0;
  ulong uStack_10d8;
  ulong uStack_10d0;
  long lStack_10c8;
  long lStack_10c0;
  long lStack_10b8;
  long lStack_10b0;
  long lStack_10a8;
  ulong uStack_10a0;
  long lStack_1098;
  long lStack_1090;
  long lStack_1088;
  long lStack_1080;
  ulong uStack_1078;
  ulong uStack_1070;
  long lStack_1068;
  ulong uStack_1060;
  ulong uStack_1058;
  long lStack_1050;
  long lStack_1048;
  long lStack_1040;
  long lStack_1038;
  long lStack_1030;
  long lStack_fb0;
  long lStack_fa8;
  long lStack_fa0;
  long lStack_f98;
  long lStack_f90;
  long lStack_f88;
  long lStack_f80;
  long lStack_f78;
  long lStack_f70;
  long lStack_f68;
  long lStack_f60;
  long lStack_f58;
  long lStack_f50;
  long lStack_f48;
  long lStack_f40;
  ulong uStack_f38;
  long lStack_f30;
  long lStack_f28;
  long lStack_f20;
  long lStack_f18;
  undefined1 auStack_f10 [64];
  ulong uStack_ed0;
  ulong uStack_ec8;
  long lStack_ec0;
  ulong uStack_eb8;
  ulong uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e00;
  ulong uStack_df0;
  ulong uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  ulong uStack_dd0;
  long lStack_dc8;
  long lStack_dc0;
  long lStack_db8;
  long lStack_db0;
  long lStack_da8;
  ulong uStack_da0;
  long lStack_d98;
  long lStack_d90;
  long lStack_d88;
  long lStack_d80;
  undefined1 auStack_d78 [40];
  long lStack_d50;
  long lStack_d48;
  long lStack_d40;
  long lStack_d38;
  long lStack_d30;
  long lStack_d28;
  long lStack_d20;
  long lStack_d18;
  long lStack_d10;
  long lStack_d08;
  long lStack_d00;
  long lStack_cf8;
  long lStack_cf0;
  long lStack_ce8;
  long lStack_ce0;
  long lStack_cd8;
  long lStack_cd0;
  long lStack_cc8;
  long lStack_cc0;
  long lStack_cb8;
  ulong auStack_cb0 [5];
  undefined1 auStack_c88 [40];
  undefined1 auStack_c60 [40];
  undefined1 auStack_c38 [40];
  undefined1 auStack_c10 [160];
  undefined1 auStack_b70 [160];
  undefined1 auStack_ad0 [160];
  undefined1 auStack_a30 [160];
  undefined1 auStack_990 [160];
  undefined1 auStack_8f0 [160];
  undefined1 auStack_850 [168];
  char acStack_7a8 [256];
  byte abStack_6a8 [256];
  long lStack_5a8;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  ulong uStack_548;
  undefined1 ***pppuStack_540;
  code *pcStack_538;
  undefined1 auStack_530 [40];
  byte abStack_508 [40];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  char acStack_4b8 [32];
  long lStack_498;
  ulong uStack_490;
  char *pcStack_488;
  undefined1 **ppuStack_480;
  code *pcStack_478;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  ulong uStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [160];
  ushort uStack_340;
  uint uStack_33e;
  byte bStack_33a;
  byte bStack_339;
  undefined2 uStack_338;
  uint uStack_336;
  byte bStack_332;
  uint uStack_331;
  byte bStack_32d;
  byte bStack_32c;
  ushort uStack_32b;
  uint uStack_329;
  byte bStack_325;
  uint uStack_324;
  ushort uStack_300;
  uint uStack_2fe;
  byte bStack_2fa;
  byte bStack_2f9;
  undefined2 uStack_2f8;
  uint uStack_2f6;
  byte bStack_2f2;
  uint uStack_2f1;
  byte bStack_2ed;
  byte bStack_2ec;
  ushort uStack_2eb;
  uint uStack_2e9;
  byte bStack_2e5;
  uint uStack_2e4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_1f0;
  ushort uStack_1e8;
  uint uStack_1e6;
  byte bStack_1e2;
  byte bStack_1e1;
  undefined2 uStack_1e0;
  uint uStack_1de;
  byte bStack_1da;
  uint uStack_1d9;
  byte bStack_1d5;
  byte bStack_1d4;
  ushort uStack_1d3;
  uint uStack_1d1;
  byte bStack_1cd;
  uint uStack_1cc;
  undefined1 auStack_1c8 [32];
  long lStack_1a8;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_118 [160];
  byte abStack_78 [31];
  byte bStack_59;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar18 = abStack_78;
  func_0x00010ae354ec(param_3,0x20,pbVar18);
  abStack_78[0] = abStack_78[0] & 0xf8;
  bStack_59 = bStack_59 & 0x3f | 0x40;
  func_0x000107c2b260(auStack_118,abStack_78);
  puVar14 = auStack_118;
  pcVar13 = param_1;
  FUN_10ae245a8(param_1,puVar14);
  uVar81 = *param_3;
  uVar82 = param_3[2];
  uVar83 = param_3[3];
  param_2[1] = param_3[1];
  *param_2 = uVar81;
  param_2[3] = uVar83;
  param_2[2] = uVar82;
  uVar81 = *(undefined8 *)param_1;
  uVar82 = *(undefined8 *)(param_1 + 0x10);
  uVar83 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 8);
  param_2[4] = uVar81;
  param_2[7] = uVar83;
  param_2[6] = uVar82;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pcVar13;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10ae238c8;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010ae354ec(param_4,0x20,&uStack_1e8);
  uStack_1e8 = uStack_1e8 & 0xfff8;
  uStack_1cc = uStack_1cc & 0x3fffffff | 0x40000000;
  uStack_3e8 = 0xbb67ae8584caa73b;
  lStack_3f0 = 0x6a09e667f3bcc908;
  uStack_3f8 = 0xa54ff53a5f1d36f1;
  lStack_400 = 0x3c6ef372fe94f82b;
  uStack_2b8 = 0xbb67ae8584caa73b;
  uStack_2c0 = 0x6a09e667f3bcc908;
  uStack_2a8 = 0xa54ff53a5f1d36f1;
  uStack_2b0 = 0x3c6ef372fe94f82b;
  uStack_408 = 0x9b05688c2b3e6c1f;
  lStack_410 = 0x510e527fade682d1;
  uStack_418 = 0x5be0cd19137e2179;
  lStack_420 = 0x1f83d9abfb41bd6b;
  uStack_298 = 0x9b05688c2b3e6c1f;
  uStack_2a0 = 0x510e527fade682d1;
  uStack_288 = 0x5be0cd19137e2179;
  uStack_290 = 0x1f83d9abfb41bd6b;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_1f0 = 0x4000000000;
  FUN_10ae35d48(&uStack_2c0,auStack_1c8,0x20);
  FUN_10ae35d48(&uStack_2c0,puVar14,pbVar18);
  FUN_10ae3c914(&uStack_300,&uStack_2c0);
  FUN_10ae231f8(&uStack_300);
  func_0x000107c2b260(auStack_3e0,&uStack_300);
  FUN_10ae245a8(pcVar13,auStack_3e0);
  uStack_2b8 = uStack_3e8;
  uStack_2c0 = lStack_3f0;
  uStack_2a8 = uStack_3f8;
  uStack_2b0 = lStack_400;
  uStack_298 = uStack_408;
  uStack_2a0 = lStack_410;
  uStack_288 = uStack_418;
  uStack_290 = lStack_420;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_1f0 = 0x4000000000;
  FUN_10ae35d48(&uStack_2c0,pcVar13,0x20);
  FUN_10ae35d48(&uStack_2c0,param_4 + 0x20,0x20);
  FUN_10ae35d48(&uStack_2c0,puVar14,pbVar18);
  FUN_10ae3c914(&uStack_340,&uStack_2c0);
  FUN_10ae231f8(&uStack_340);
  uVar5 = (ulong)uStack_340 | ((ulong)(byte)uStack_33e & 0x1f) << 0x10;
  uVar6 = (ulong)uStack_32b | ((ulong)(byte)uStack_329 & 0x1f) << 0x10;
  uVar7 = (ulong)uStack_1e8 | ((ulong)(byte)uStack_1e6 & 0x1f) << 0x10;
  uVar25 = (ulong)uStack_1d3 | ((ulong)(byte)uStack_1d1 & 0x1f) << 0x10;
  uVar53 = (ulong)(uStack_33e >> 5) & 0x1fffff;
  uVar24 = (ulong)((uStack_33e >> 0x18 | (uint)bStack_33a << 8 | (uint)bStack_339 << 0x10) >> 2) &
           0x1fffff;
  uVar63 = (ulong)(uStack_1e6 >> 5) & 0x1fffff;
  uVar55 = (ulong)((uStack_1e6 >> 0x18 | (uint)bStack_1e2 << 8 | (uint)bStack_1e1 << 0x10) >> 2) &
           0x1fffff;
  lStack_3f0 = uVar63 * uVar53 + uVar7 * uVar24 + uVar55 * uVar5 +
               ((ulong)((uStack_2fe >> 0x18 | (uint)bStack_2fa << 8 | (uint)bStack_2f9 << 0x10) >> 2
                       ) & 0x1fffff);
  uVar49 = (ulong)(CONCAT13((undefined1)uStack_336,CONCAT21(uStack_338,bStack_339)) >> 7) & 0x1fffff
  ;
  uVar11 = (ulong)(uStack_336 >> 4) & 0x1fffff;
  uVar30 = (ulong)(CONCAT13((undefined1)uStack_1de,CONCAT21(uStack_1e0,bStack_1e1)) >> 7) & 0x1fffff
  ;
  uVar20 = (ulong)(uStack_1de >> 4) & 0x1fffff;
  lStack_468 = uVar63 * uVar49 + uVar7 * uVar11 + uVar30 * uVar53 + uVar5 * uVar20 + uVar55 * uVar24
               + ((ulong)(uStack_2f6 >> 4) & 0x1fffff);
  uVar19 = (ulong)((uStack_336 >> 0x18 | (uint)bStack_332 << 8 | (uStack_331 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  uVar15 = (ulong)(uStack_331 >> 6) & 0x1fffff;
  uVar22 = (ulong)(uStack_1d9 >> 6) & 0x1fffff;
  uVar29 = (ulong)((uStack_1de >> 0x18 | (uint)bStack_1da << 8 | (uStack_1d9 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  lStack_410 = uVar19 * uVar63 + uVar7 * uVar15 + uVar30 * uVar49 + uVar24 * uVar20 +
               uVar55 * uVar11 + uVar5 * uVar22 + uVar29 * uVar53 +
               ((ulong)(uStack_2f1 >> 6) & 0x1fffff);
  uVar26 = ((ulong)(uStack_331 >> 0x18) | (ulong)bStack_32d << 8 | (ulong)bStack_32c << 0x10) >> 3;
  uVar58 = ((ulong)(uStack_1d9 >> 0x18) | (ulong)bStack_1d5 << 8 | (ulong)bStack_1d4 << 0x10) >> 3;
  lStack_420 = uVar26 * uVar63 + uVar7 * uVar6 + uVar19 * uVar30 + uVar20 * uVar11 + uVar55 * uVar15
               + uVar24 * uVar22 + uVar29 * uVar49 + uVar58 * uVar53 + uVar25 * uVar5 +
               (ulong)uStack_2eb + ((ulong)(byte)uStack_2e9 & 0x1f) * 0x10000;
  uVar47 = (ulong)(uStack_329 >> 5) & 0x1fffff;
  uVar45 = (ulong)((uStack_329 >> 0x18 | (uint)bStack_325 << 8 | (uStack_324 & 0xff) << 0x10) >> 2)
           & 0x1fffff;
  uVar60 = (ulong)(uStack_1d1 >> 5) & 0x1fffff;
  uVar51 = (ulong)((uStack_1d1 >> 0x18 | (uint)bStack_1cd << 8 | (uStack_1cc & 0xff) << 0x10) >> 2)
           & 0x1fffff;
  lStack_428 = uVar63 * uVar47 + uVar7 * uVar45 + uVar26 * uVar30 + uVar20 * uVar15 + uVar55 * uVar6
               + uVar22 * uVar11 + uVar29 * uVar19 + uVar58 * uVar49 + uVar60 * uVar53 +
               uVar25 * uVar24 + uVar51 * uVar5 +
               ((ulong)((uStack_2e9 >> 0x18 | (uint)bStack_2e5 << 8 | (uStack_2e4 & 0xff) << 0x10)
                       >> 2) & 0x1fffff);
  lStack_400 = ((ulong)uStack_300 | ((ulong)(byte)uStack_2fe & 0x1f) << 0x10) + uVar7 * uVar5;
  uVar34 = lStack_400 + 0x100000;
  lStack_450 = uVar5 * uVar63 + uVar7 * uVar53 + ((ulong)(uStack_2fe >> 5) & 0x1fffff) +
               (uVar34 >> 0x15);
  lStack_400 = lStack_400 - (uVar34 & 0xfffffe00000);
  uVar34 = lStack_468 + 0x100000;
  lStack_438 = uVar63 * uVar11 + uVar7 * uVar19 + uVar24 * uVar30 + uVar20 * uVar53 +
               uVar55 * uVar49 + uVar29 * uVar5 + (uVar34 >> 0x15) +
               ((ulong)((uStack_2f6 >> 0x18 | (uint)bStack_2f2 << 8 | (uStack_2f1 & 0xff) << 0x10)
                       >> 1) & 0x1fffff);
  lStack_468 = lStack_468 - (uVar34 & 0xffffffffffe00000);
  lStack_460 = uVar63 * uVar15 + uVar7 * uVar26 + uVar30 * uVar11 + uVar20 * uVar49 +
               uVar55 * uVar19 + uVar22 * uVar53 + uVar29 * uVar24 + uVar58 * uVar5 +
               (((ulong)(uStack_2f1 >> 0x18) | (ulong)bStack_2ed << 8 | (ulong)bStack_2ec << 0x10)
               >> 3);
  lStack_458 = uVar6 * uVar63 + uVar7 * uVar47 + uVar30 * uVar15 + uVar19 * uVar20 + uVar55 * uVar26
               + uVar22 * uVar49 + uVar29 * uVar11 + uVar58 * uVar24 + uVar5 * uVar60 +
               uVar25 * uVar53 + ((ulong)(uStack_2e9 >> 5) & 0x1fffff);
  uVar35 = (ulong)(uStack_324 >> 7);
  uVar41 = (ulong)(uStack_1cc >> 7);
  lVar50 = uVar63 * uVar35 + uVar30 * uVar47 + uVar6 * uVar20 + uVar55 * uVar45 + uVar22 * uVar15 +
           uVar29 * uVar26 + uVar58 * uVar19 + uVar60 * uVar49 + uVar25 * uVar11 + uVar41 * uVar53 +
           uVar51 * uVar24;
  lVar38 = uVar58 * uVar35 + uVar60 * uVar47 + uVar25 * uVar45 + uVar26 * uVar41 + uVar51 * uVar6;
  uVar34 = lVar38 + 0x100000;
  lVar52 = uVar45 * uVar60 + uVar25 * uVar35 + uVar6 * uVar41 + uVar51 * uVar47 + (uVar34 >> 0x15);
  lVar56 = uVar30 * uVar35 + uVar45 * uVar20 + uVar6 * uVar22 + uVar29 * uVar47 + uVar58 * uVar26 +
           uVar19 * uVar60 + uVar25 * uVar15 + uVar41 * uVar49 + uVar51 * uVar11;
  uStack_448 = lStack_3f0 + 0x100000;
  lStack_440 = uVar24 * uVar63 + uVar7 * uVar49 + uVar5 * uVar30 + uVar55 * uVar53 +
               ((ulong)(CONCAT13((undefined1)uStack_2f6,CONCAT21(uStack_2f8,bStack_2f9)) >> 7) &
               0x1fffff) + (uStack_448 >> 0x15);
  uVar39 = lVar50 + 0x100000;
  lVar23 = uVar45 * uVar30 + uVar20 * uVar47 + uVar55 * uVar35 + uVar26 * uVar22 + uVar29 * uVar6 +
           uVar58 * uVar15 + uVar60 * uVar11 + uVar25 * uVar19 + uVar24 * uVar41 + uVar51 * uVar49 +
           (uVar39 >> 0x15);
  lVar12 = uVar45 * uVar22 + uVar29 * uVar35 + uVar58 * uVar47 + uVar26 * uVar60 + uVar25 * uVar6 +
           uVar19 * uVar41 + uVar51 * uVar15;
  uVar54 = lVar56 + 0x100000;
  lVar28 = uVar20 * uVar35 + uVar22 * uVar47 + uVar29 * uVar45 + uVar58 * uVar6 + uVar60 * uVar15 +
           uVar25 * uVar26 + uVar41 * uVar11 + uVar51 * uVar19 + (uVar54 >> 0x15);
  uVar57 = lVar12 + 0x100000;
  lVar2 = uVar22 * uVar35 + uVar58 * uVar45 + uVar6 * uVar60 + uVar25 * uVar47 + uVar41 * uVar15 +
          uVar51 * uVar26 + (uVar57 >> 0x15);
  lVar31 = uVar60 * uVar35 + uVar41 * uVar47 + uVar51 * uVar45;
  uVar33 = lVar31 + 0x100000;
  lVar42 = uVar45 * uVar41 + uVar51 * uVar35 + (uVar33 >> 0x15);
  uVar62 = uVar41 * uVar35 + 0x100000;
  uVar27 = uVar62 >> 0x15;
  uVar40 = lStack_450 + 0x100000;
  lStack_450 = lStack_450 - (uVar40 & 0xffffffffffe00000);
  uVar1 = lStack_440 + 0x100000;
  lStack_430 = lStack_468 + (uVar1 >> 0x15);
  lStack_440 = lStack_440 - (uVar1 & 0xffffffffffe00000);
  uVar1 = lVar2 + 0x100000;
  lVar38 = (lVar38 - (uVar34 & 0xffffffffffe00000)) + (uVar1 >> 0x15);
  uVar34 = lVar52 + 0x100000;
  lVar31 = (lVar31 - (uVar33 & 0x1ffffffe00000)) + (uVar34 >> 0x15);
  lVar52 = lVar52 - (uVar34 & 0xffffffffffe00000);
  uVar34 = lVar42 + 0x100000;
  lVar3 = (uVar41 * uVar35 - (uVar62 & 0x7ffffffe00000)) + (uVar34 >> 0x15);
  lVar42 = lVar42 - (uVar34 & 0x1ffffffe00000);
  puVar21 = (ulong *)0xfffffffffff0c653;
  lVar48 = lStack_460 + (lStack_410 + 0x100000U >> 0x15);
  lVar37 = lStack_458 + (lStack_420 + 0x100000U >> 0x15);
  uVar34 = lVar48 + 0x100000;
  lVar46 = (lVar31 * 0xa2c13 + lVar52 * 0x72d18 + lVar38 * 0x9fb67 + lStack_420 + (uVar34 >> 0x15))
           - (lStack_420 + 0x100000U & 0xffffffffffe00000);
  uVar33 = lVar37 + 0x100000;
  lVar4 = uVar45 * uVar63 + uVar7 * uVar35 + uVar6 * uVar30 + uVar26 * uVar20 + uVar55 * uVar47 +
          uVar19 * uVar22 + uVar29 * uVar15 + uVar58 * uVar11 + uVar24 * uVar60 + uVar25 * uVar49 +
          uVar5 * uVar41 + uVar51 * uVar53 + (ulong)(uStack_2e4 >> 7) +
          (lStack_428 + 0x100000U >> 0x15);
  lVar32 = (lVar3 * 0xa2c13 + lVar42 * 0x72d18 + lVar31 * 0x9fb67 + lVar52 * -0xf39ad +
            lVar38 * 0x215d1 + (uVar33 >> 0x15) + lStack_428) -
           (lStack_428 + 0x100000U & 0xffffffffffe00000);
  uVar62 = lVar4 + 0x100000;
  lVar50 = ((lVar50 + uVar27 * 0x72d18) - (uVar39 & 0xffffffffffe00000)) + lVar3 * 0x9fb67 +
           lVar42 * -0xf39ad + lVar31 * 0x215d1 + lVar52 * -0xa6f7d + (uVar62 >> 0x15);
  uVar39 = lVar23 + 0x100000;
  uVar5 = lVar50 + 0x100000;
  lVar23 = ((lVar23 + uVar27 * 0x9fb67) - (uVar39 & 0xffffffffffe00000)) + lVar3 * -0xf39ad +
           lVar42 * 0x215d1 + lVar31 * -0xa6f7d + ((long)uVar5 >> 0x15);
  uVar6 = lVar28 + 0x100000;
  lVar12 = ((lVar12 + (long)(int)uVar27 * -0xa6f7d) - (uVar57 & 0xffffffffffe00000)) +
           (uVar6 >> 0x15);
  lVar36 = ((lStack_410 + lVar38 * 0xa2c13) - (lStack_410 + 0x100000U & 0xffffffffffe00000)) +
           (lStack_438 + 0x100000U >> 0x15);
  uVar57 = lVar46 + 0x100000;
  lVar37 = ((lVar42 * 0xa2c13 + lVar31 * 0x72d18 + lVar52 * 0x9fb67 + lVar38 * -0xf39ad + lVar37) -
           (uVar33 & 0xffffffffffe00000)) + ((long)uVar57 >> 0x15);
  lVar56 = ((lVar56 + (long)(int)uVar27 * -0xf39ad) - (uVar54 & 0xffffffffffe00000)) +
           (uVar39 >> 0x15) + lVar3 * 0x215d1 + lVar42 * -0xa6f7d;
  uVar39 = lVar32 + 0x100000;
  lVar42 = ((lVar3 * 0x72d18 + uVar27 * 0xa2c13 + lVar42 * 0x9fb67 + lVar31 * -0xf39ad +
             lVar52 * 0x215d1 + lVar38 * -0xa6f7d + lVar4) - (uVar62 & 0xffffffffffe00000)) +
           ((long)uVar39 >> 0x15);
  uVar54 = lVar56 + 0x100000;
  lVar28 = ((lVar28 + uVar27 * 0x215d1) - (uVar6 & 0xffffffffffe00000)) + lVar3 * -0xa6f7d +
           ((long)uVar54 >> 0x15);
  uVar33 = lVar12 + 0x100000;
  lVar2 = (lVar2 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar33 >> 0x15);
  uVar62 = lVar42 + 0x100000;
  lVar31 = (lVar50 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar62 >> 0x15);
  uVar1 = lVar23 + 0x100000;
  lVar3 = (lVar56 - (uVar54 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  lVar23 = lVar23 - (uVar1 & 0xffffffffffe00000);
  uVar54 = lVar28 + 0x100000;
  lVar4 = (lVar12 - (uVar33 & 0xffffffffffe00000)) + ((long)uVar54 >> 0x15);
  lVar28 = lVar28 - (uVar54 & 0xffffffffffe00000);
  uVar54 = lVar37 + 0x100000;
  lVar12 = (lVar32 + lVar2 * -0xa6f7d + ((long)uVar54 >> 0x15)) - (uVar39 & 0xffffffffffe00000);
  uVar39 = lVar36 + 0x100000;
  lVar52 = ((lVar52 * 0xa2c13 + lVar38 * 0x72d18 + lVar48) - (uVar34 & 0xffffffffffe00000)) +
           ((long)uVar39 >> 0x15);
  uVar34 = lVar52 + 0x100000;
  lVar56 = (lVar2 * -0xf39ad + lVar4 * 0x215d1 + lVar28 * -0xa6f7d + lVar46 + ((long)uVar34 >> 0x15)
           ) - (uVar57 & 0xffffffffffe00000);
  lVar50 = lStack_400 + lVar31 * 0xa2c13;
  uVar57 = lVar50 + 0x100000;
  lVar38 = lStack_450 + lVar31 * 0x72d18 + lVar23 * 0xa2c13 + ((long)uVar57 >> 0x15);
  lVar36 = ((lVar36 + lVar2 * 0x72d18) - (uVar39 & 0xffffffffffe00000)) + lVar4 * 0x9fb67 +
           lVar28 * -0xf39ad + lVar3 * 0x215d1 + lVar23 * -0xa6f7d;
  uVar39 = lVar36 + 0x100000;
  lVar52 = ((lVar2 * 0x9fb67 + lVar4 * -0xf39ad + lVar28 * 0x215d1 + lVar52) -
           (uVar34 & 0xffffffffffe00000)) + lVar3 * -0xa6f7d + ((long)uVar39 >> 0x15);
  uVar34 = lVar56 + 0x100000;
  lVar48 = ((lVar2 * 0x215d1 + lVar4 * -0xa6f7d + lVar37) - (uVar54 & 0xffffffffffe00000)) +
           ((long)uVar34 >> 0x15);
  uVar54 = lVar12 + 0x100000;
  lVar42 = (lVar42 - (uVar62 & 0xffffffffffe00000)) + ((long)uVar54 >> 0x15);
  uVar33 = lVar38 + 0x100000;
  uVar62 = lVar52 + 0x100000;
  uVar1 = lVar48 + 0x100000;
  lVar48 = lVar48 - (uVar1 & 0xffffffffffe00000);
  uVar5 = lVar42 + 0x100000;
  lVar42 = lVar42 - (uVar5 & 0xffffffffffe00000);
  lVar59 = (long)uVar5 >> 0x15;
  lVar46 = (lVar38 + lVar59 * 0x72d18) - (uVar33 & 0xffffffffffe00000);
  lVar37 = ((lStack_3f0 + (uVar40 >> 0x15)) - (uStack_448 & 0xffffffffffe00000)) + lVar31 * 0x9fb67
           + lVar3 * 0xa2c13 + lVar23 * 0x72d18;
  uVar40 = lVar37 + 0x100000;
  lVar38 = lStack_440 + lVar28 * 0xa2c13 + lVar31 * -0xf39ad + lVar3 * 0x72d18 + lVar23 * 0x9fb67 +
           ((long)uVar40 >> 0x15);
  uVar5 = lVar38 + 0x100000;
  lVar61 = lStack_430 + lVar4 * 0xa2c13;
  lVar32 = lVar61 + lVar28 * 0x72d18 + lVar31 * 0x215d1 + lVar3 * 0x9fb67 + lVar23 * -0xf39ad;
  uVar6 = lVar32 + 0x100000;
  lVar23 = ((lStack_438 + lVar2 * 0xa2c13) - (lStack_438 + 0x100000U & 0xffffffffffe00000)) +
           lVar4 * 0x72d18 + lVar28 * 0x9fb67 + lVar31 * -0xa6f7d + lVar3 * -0xf39ad +
           lVar23 * 0x215d1 + ((long)uVar6 >> 0x15);
  uVar7 = lVar23 + 0x100000;
  uVar25 = (lVar50 - (uVar57 & 0xffffffffffe00000)) + lVar59 * 0xa2c13;
  uVar57 = lVar46 + ((long)uVar25 >> 0x15);
  uVar33 = ((lVar37 + lVar59 * 0x9fb67) - (uVar40 & 0xffffffffffe00000)) + ((long)uVar33 >> 0x15) +
           ((long)uVar57 >> 0x15);
  uStack_490 = ((lVar38 + lVar59 * -0xf39ad) - (uVar5 & 0xffffffffffe00000)) +
               ((long)uVar33 >> 0x15);
  uVar40 = ((lVar32 + lVar59 * 0x215d1) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15) +
           ((long)uStack_490 >> 0x15);
  uVar5 = ((lVar23 + lVar59 * -0xa6f7d) - (uVar7 & 0xffffffffffe00000)) + ((long)uVar40 >> 0x15);
  uVar39 = (lVar36 - (uVar39 & 0xffffffffffe00000)) + ((long)uVar7 >> 0x15) + ((long)uVar5 >> 0x15);
  uVar6 = (lVar52 - (uVar62 & 0xffffffffffe00000)) + ((long)uVar39 >> 0x15);
  uVar34 = (lVar56 - (uVar34 & 0xffffffffffe00000)) + ((long)uVar62 >> 0x15) + ((long)uVar6 >> 0x15)
  ;
  uVar62 = lVar48 + ((long)uVar34 >> 0x15);
  uVar54 = ((lVar12 + ((long)uVar1 >> 0x15)) - (uVar54 & 0xffffffffffe00000)) +
           ((long)uVar62 >> 0x15);
  uVar7 = lVar42 + ((long)uVar54 >> 0x15);
  lVar52 = (long)uVar7 >> 0x15;
  lVar23 = (uVar25 & 0x1fffff) + lVar52 * 0xa2c13;
  pcVar13[0x21] = (char)((ulong)lVar23 >> 8);
  uVar57 = (uVar57 & 0x1fffff) + lVar52 * 0x72d18 + (lVar23 >> 0x15);
  pcVar13[0x20] = (char)lVar23;
  pcVar13[0x22] = (byte)((ulong)lVar23 >> 0x10) & 0x1f | (byte)((uint)uVar57 << 5);
  pcVar13[0x23] = (char)(uVar57 >> 3);
  pcVar13[0x24] = (char)(uVar57 >> 0xb);
  uVar33 = (uVar33 & 0x1fffff) + lVar52 * 0x9fb67 + ((long)uVar57 >> 0x15);
  pcVar13[0x25] = (byte)((uint)uVar57 >> 0x13) & 3 | (byte)((uint)uVar33 << 2);
  pcVar13[0x26] = (char)(uVar33 >> 6);
  uVar57 = (uStack_490 & 0x1fffff) + lVar52 * -0xf39ad + ((long)uVar33 >> 0x15);
  pcVar13[0x27] = (byte)((uint)uVar33 >> 0xe) & 0x7f | (byte)((uint)uVar57 << 7);
  pcVar13[0x28] = (char)(uVar57 >> 1);
  pcVar13[0x29] = (char)(uVar57 >> 9);
  uVar33 = (uVar40 & 0x1fffff) + lVar52 * 0x215d1 + ((long)uVar57 >> 0x15);
  pcVar13[0x2a] = (byte)((uint)uVar57 >> 0x11) & 0xf | (byte)((uint)uVar33 << 4);
  pcVar13[0x2b] = (char)(uVar33 >> 4);
  pcVar13[0x2c] = (char)(uVar33 >> 0xc);
  uVar57 = (uVar5 & 0x1fffff) + lVar52 * -0xa6f7d + ((long)uVar33 >> 0x15);
  pcVar13[0x2d] = (byte)((uint)uVar33 >> 0x14) & 1 | (byte)((uint)uVar57 << 1);
  pcVar13[0x2e] = (char)(uVar57 >> 7);
  uVar33 = (uVar39 & 0x1fffff) + ((long)uVar57 >> 0x15);
  pcVar13[0x2f] = (byte)((uint)uVar57 >> 0xf) & 0x3f | (byte)((uint)uVar33 << 6);
  pcVar13[0x30] = (char)(uVar33 >> 2);
  pcVar13[0x31] = (char)(uVar33 >> 10);
  uVar57 = (uVar6 & 0x1fffff) + ((long)uVar33 >> 0x15);
  pcVar13[0x32] = (byte)((uint)uVar33 >> 0x12) & 7 | (byte)((int)uVar57 << 3);
  pcVar13[0x33] = (char)(uVar57 >> 5);
  lVar52 = (uVar34 & 0x1fffff) + ((long)uVar57 >> 0x15);
  pcVar13[0x34] = (char)(uVar57 >> 0xd);
  pcVar13[0x36] = (char)((ulong)lVar52 >> 8);
  uVar34 = (uVar62 & 0x1fffff) + (lVar52 >> 0x15);
  pcVar13[0x35] = (char)lVar52;
  pcVar13[0x37] = (byte)((ulong)lVar52 >> 0x10) & 0x1f | (byte)((uint)uVar34 << 5);
  pcVar13[0x38] = (char)(uVar34 >> 3);
  pcVar13[0x39] = (char)(uVar34 >> 0xb);
  uVar54 = (uVar54 & 0x1fffff) + ((long)uVar34 >> 0x15);
  uVar57 = (uVar7 & 0x1fffff) + ((long)uVar54 >> 0x15);
  pcVar13[0x3a] = (byte)((uint)uVar34 >> 0x13) & 3 | (byte)((uint)uVar54 << 2);
  pcVar13[0x3b] = (char)(uVar54 >> 6);
  pcVar13[0x3c] = (byte)((uint)uVar54 >> 0xe) & 0x7f | (byte)((int)uVar57 << 7);
  pcVar13[0x3d] = (char)((uint)((int)((long)uVar54 >> 0x15) + (int)uVar7) >> 1);
  pcVar13[0x3e] = (char)(uVar57 >> 9);
  pcVar13[0x3f] = (char)(uVar57 >> 0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return (char *)0x1;
  }
  ___stack_chk_fail();
  pcStack_478 = FUN_10ae245a8;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4d8 = *(undefined8 *)(uVar39 + 0x58);
  uStack_4e0 = *(undefined8 *)(uVar39 + 0x50);
  uStack_4d0 = *(undefined8 *)(uVar39 + 0x60);
  uStack_4c8 = *(undefined8 *)(uVar39 + 0x68);
  uStack_4c0 = *(undefined8 *)(uVar39 + 0x70);
  pcStack_488 = pcVar13;
  ppuStack_480 = &puStack_130;
  func_0x000107c34f5c(abStack_508,&uStack_4e0);
  func_0x000107c34f60(&uStack_4e0,uVar39,abStack_508);
  pbVar18 = abStack_508;
  func_0x000107c34f60(auStack_530,uVar39 + 0x28);
  func_0x000107c34f58(lVar23,auStack_530);
  pcVar13 = acStack_4b8;
  pbVar16 = (byte *)&uStack_4e0;
  func_0x000107c34f58();
  *(byte *)(lVar23 + 0x1f) = *(byte *)(lVar23 + 0x1f) ^ acStack_4b8[0] << 7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return pcVar13;
  }
  ___stack_chk_fail();
  pcStack_538 = FUN_10ae24660;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar17 = pbVar16;
  lStack_590 = lVar61;
  lStack_588 = lVar59;
  lStack_580 = lVar46;
  uStack_578 = uVar1;
  uStack_570 = uVar5;
  uStack_568 = uVar40;
  lStack_560 = lVar42;
  lStack_558 = lVar48;
  lStack_550 = lVar23;
  uStack_548 = uVar39;
  pppuStack_540 = &ppuStack_480;
  if (pbVar18[0x3f] < 0x20) {
    auStack_cb0[0] = *puVar21;
    auStack_cb0[1] = puVar21[1];
    auStack_cb0[2] = puVar21[2];
    auStack_cb0[3] = puVar21[3] & 0x7fffffffffffffff;
    func_0x000107c2b258(&lStack_10c8,auStack_cb0);
    lStack_1090 = 0;
    lStack_1098 = 0;
    lStack_1080 = 0;
    lStack_1088 = 0;
    uStack_10a0 = 1;
    func_0x000107c2b274(&uStack_df0,&lStack_10c8);
    func_0x000107c34f60(&lStack_1050,&uStack_df0,&UNK_10e5182d0);
    uVar34 = uStack_de8 + (uStack_df0 + 0xfffffffffffd9 >> 0x33) + 0xffffffffffffe;
    uVar39 = uStack_de0 + (uVar34 >> 0x33) + 0xffffffffffffe;
    uVar54 = uStack_dd8 + (uVar39 >> 0x33) + 0xffffffffffffe;
    uVar57 = uStack_dd0 + (uVar54 >> 0x33) + 0xffffffffffffe;
    uVar33 = (uStack_df0 + 0xfffffffffffd9 & 0x7ffffffffffff) + (uVar57 >> 0x33) * 0x13;
    uVar34 = (uVar34 & 0x7ffffffffffff) + (uVar33 >> 0x33);
    uVar33 = uVar33 & 0x7ffffffffffff;
    uVar62 = uVar34 & 0x7ffffffffffff;
    lVar52 = (uVar39 & 0x7ffffffffffff) + (uVar34 >> 0x33);
    uVar54 = uVar54 & 0x7ffffffffffff;
    uVar57 = uVar57 & 0x7ffffffffffff;
    lStack_d50 = lStack_1050 + 1;
    lStack_d40 = lStack_1040;
    lStack_d48 = lStack_1048;
    lStack_d30 = lStack_1030;
    lStack_d38 = lStack_1038;
    uStack_ed0 = uVar33;
    uStack_ec8 = uVar62;
    lStack_ec0 = lVar52;
    uStack_eb8 = uVar54;
    uStack_eb0 = uVar57;
    func_0x000107c34f60(&uStack_df0,&uStack_ed0,&lStack_d50);
    func_0x000107c2b274(auStack_cb0,&uStack_df0);
    func_0x000107c2b274(abStack_6a8,auStack_cb0);
    func_0x000107c2b274(abStack_6a8,abStack_6a8);
    func_0x000107c34f60(abStack_6a8,&uStack_df0,abStack_6a8);
    func_0x000107c34f60(auStack_cb0,auStack_cb0,abStack_6a8);
    func_0x000107c2b274(auStack_cb0,auStack_cb0);
    func_0x000107c34f60(auStack_cb0,abStack_6a8,auStack_cb0);
    func_0x000107c2b274(abStack_6a8,auStack_cb0);
    iVar43 = 4;
    do {
      func_0x000107c2b274(abStack_6a8,abStack_6a8);
      iVar43 = iVar43 + -1;
    } while (iVar43 != 0);
    func_0x000107c34f60(auStack_cb0,abStack_6a8,auStack_cb0);
    func_0x000107c2b274(abStack_6a8,auStack_cb0);
    iVar43 = 9;
    do {
      func_0x000107c2b274(abStack_6a8,abStack_6a8);
      iVar43 = iVar43 + -1;
    } while (iVar43 != 0);
    func_0x000107c34f60(abStack_6a8,abStack_6a8,auStack_cb0);
    func_0x000107c2b274(acStack_7a8,abStack_6a8);
    iVar43 = 0x13;
    do {
      func_0x000107c2b274(acStack_7a8,acStack_7a8);
      iVar43 = iVar43 + -1;
    } while (iVar43 != 0);
    func_0x000107c34f60(abStack_6a8,acStack_7a8,abStack_6a8);
    func_0x000107c2b274(abStack_6a8,abStack_6a8);
    iVar43 = 9;
    do {
      func_0x000107c2b274(abStack_6a8,abStack_6a8);
      iVar43 = iVar43 + -1;
    } while (iVar43 != 0);
    func_0x000107c34f60(auStack_cb0,abStack_6a8,auStack_cb0);
    func_0x000107c2b274(abStack_6a8,auStack_cb0);
    iVar43 = 0x31;
    do {
      func_0x000107c2b274(abStack_6a8,abStack_6a8);
      iVar43 = iVar43 + -1;
    } while (iVar43 != 0);
    func_0x000107c34f60(abStack_6a8,abStack_6a8,auStack_cb0);
    func_0x000107c2b274(acStack_7a8,abStack_6a8);
    iVar43 = 99;
    do {
      func_0x000107c2b274(acStack_7a8,acStack_7a8);
      iVar43 = iVar43 + -1;
    } while (iVar43 != 0);
    func_0x000107c34f60(abStack_6a8,acStack_7a8,abStack_6a8);
    func_0x000107c2b274(abStack_6a8,abStack_6a8);
    iVar43 = 0x31;
    do {
      func_0x000107c2b274(abStack_6a8,abStack_6a8);
      iVar43 = iVar43 + -1;
    } while (iVar43 != 0);
    func_0x000107c34f60(auStack_cb0,abStack_6a8,auStack_cb0);
    func_0x000107c2b274(auStack_cb0,auStack_cb0);
    func_0x000107c2b274(auStack_cb0,auStack_cb0);
    func_0x000107c34f60(&uStack_10f0,auStack_cb0,&uStack_df0);
    func_0x000107c34f60(&uStack_10f0,&uStack_10f0,&uStack_ed0);
    func_0x000107c2b274(&lStack_1050,&uStack_10f0);
    pbVar17 = (byte *)&lStack_1050;
    func_0x000107c34f60(&lStack_1050,pbVar17,&lStack_d50);
    lStack_1190 = (lStack_1050 - uVar33) + 0xfffffffffffda;
    lStack_1188 = (lStack_1048 - uVar62) + 0xffffffffffffe;
    lStack_1180 = (lStack_1040 - lVar52) + 0xffffffffffffe;
    lStack_1178 = (lStack_1038 - uVar54) + 0xffffffffffffe;
    lStack_1170 = (lStack_1030 - uVar57) + 0xffffffffffffe;
    iVar43 = (int)&lStack_1190;
    FUN_10ae22f44();
    if (iVar43 != 0) {
      lStack_1190 = lStack_1050 + uVar33;
      lStack_1188 = lStack_1048 + uVar62;
      lStack_1180 = lStack_1040 + lVar52;
      lStack_1178 = lStack_1038 + uVar54;
      lStack_1170 = lStack_1030 + uVar57;
      iVar43 = (int)&lStack_1190;
      FUN_10ae22f44();
      if (iVar43 != 0) goto LAB_10ae24c88;
      func_0x000107c34f60(&uStack_10f0,&uStack_10f0,&UNK_10e5182f8);
    }
    func_0x000107c34f58(auStack_cb0,&uStack_10f0);
    if (((byte)auStack_cb0[0] & 1) != *(byte *)((long)puVar21 + 0x1f) >> 7) {
      uVar34 = ((0xfffffffffffda - uStack_10f0 >> 0x33) - uStack_10e8) + 0xffffffffffffe;
      uVar39 = ((uVar34 >> 0x33) - lStack_10e0) + 0xffffffffffffe;
      uStack_10d8 = ((uVar39 >> 0x33) - uStack_10d8) + 0xffffffffffffe;
      uStack_10d0 = ((uStack_10d8 >> 0x33) - uStack_10d0) + 0xffffffffffffe;
      uStack_10f0 = (0xfffffffffffda - uStack_10f0 & 0x7ffffffffffff) + (uStack_10d0 >> 0x33) * 0x13
      ;
      uVar34 = (uVar34 & 0x7ffffffffffff) + (uStack_10f0 >> 0x33);
      uStack_10f0 = uStack_10f0 & 0x7ffffffffffff;
      uStack_10e8 = uVar34 & 0x7ffffffffffff;
      lStack_10e0 = (uVar39 & 0x7ffffffffffff) + (uVar34 >> 0x33);
      uStack_10d8 = uStack_10d8 & 0x7ffffffffffff;
      uStack_10d0 = uStack_10d0 & 0x7ffffffffffff;
    }
    func_0x000107c34f60(&uStack_1078,&uStack_10f0,&lStack_10c8);
    uVar34 = ((0xfffffffffffda - uStack_10f0 >> 0x33) - uStack_10e8) + 0xffffffffffffe;
    uVar39 = ((uVar34 >> 0x33) - lStack_10e0) + 0xffffffffffffe;
    uStack_10d8 = ((uVar39 >> 0x33) - uStack_10d8) + 0xffffffffffffe;
    uStack_10d0 = ((uStack_10d8 >> 0x33) - uStack_10d0) + 0xffffffffffffe;
    uStack_10f0 = (0xfffffffffffda - uStack_10f0 & 0x7ffffffffffff) + (uStack_10d0 >> 0x33) * 0x13;
    uVar34 = (uVar34 & 0x7ffffffffffff) + (uStack_10f0 >> 0x33);
    uStack_10f0 = uStack_10f0 & 0x7ffffffffffff;
    uStack_10e8 = uVar34 & 0x7ffffffffffff;
    lStack_10e0 = (uVar39 & 0x7ffffffffffff) + (uVar34 >> 0x33);
    uStack_10d8 = uStack_10d8 & 0x7ffffffffffff;
    uVar34 = ((0xfffffffffffda - uStack_1078 >> 0x33) - uStack_1070) + 0xffffffffffffe;
    uVar39 = ((uVar34 >> 0x33) - lStack_1068) + 0xffffffffffffe;
    uStack_1060 = ((uVar39 >> 0x33) - uStack_1060) + 0xffffffffffffe;
    uStack_10d0 = uStack_10d0 & 0x7ffffffffffff;
    uStack_1058 = ((uStack_1060 >> 0x33) - uStack_1058) + 0xffffffffffffe;
    uStack_1078 = (0xfffffffffffda - uStack_1078 & 0x7ffffffffffff) + (uStack_1058 >> 0x33) * 0x13;
    uVar34 = (uVar34 & 0x7ffffffffffff) + (uStack_1078 >> 0x33);
    uStack_1078 = uStack_1078 & 0x7ffffffffffff;
    uStack_1070 = uVar34 & 0x7ffffffffffff;
    lStack_1068 = (uVar39 & 0x7ffffffffffff) + (uVar34 >> 0x33);
    uStack_1060 = uStack_1060 & 0x7ffffffffffff;
    uStack_1058 = uStack_1058 & 0x7ffffffffffff;
    uVar82 = *(undefined8 *)(pbVar18 + 8);
    uVar81 = *(undefined8 *)pbVar18;
    uVar84 = *(undefined8 *)(pbVar18 + 0x18);
    uVar83 = *(undefined8 *)(pbVar18 + 0x10);
    auStack_1110[0] = *(ulong *)(pbVar18 + 0x20);
    auStack_1110[3] = *(ulong *)(pbVar18 + 0x38);
    auStack_1110[1] = *(undefined8 *)(pbVar18 + 0x28);
    auStack_1110[2] = *(undefined8 *)(pbVar18 + 0x30);
    pbVar17 = pbVar18;
    if (auStack_1110[3] < 0x1000000000000001) {
      uVar39 = 0x1000000000000000;
      lVar52 = 0x10;
      uVar34 = auStack_1110[3];
      do {
        if (uVar34 < uVar39) {
          uStack_ec8 = 0xbb67ae8584caa73b;
          uStack_ed0 = 0x6a09e667f3bcc908;
          uStack_eb8 = 0xa54ff53a5f1d36f1;
          lStack_ec0 = 0x3c6ef372fe94f82b;
          uStack_ea8 = 0x9b05688c2b3e6c1f;
          uStack_eb0 = 0x510e527fade682d1;
          uStack_e98 = 0x5be0cd19137e2179;
          uStack_ea0 = 0x1f83d9abfb41bd6b;
          uStack_e88 = 0;
          uStack_e90 = 0;
          uStack_e00 = 0x4000000000;
          FUN_10ae35d48(&uStack_ed0,pbVar18,0x20);
          FUN_10ae35d48(&uStack_ed0,puVar21,0x20);
          FUN_10ae35d48(&uStack_ed0,pcVar13,pbVar16);
          FUN_10ae3c914(auStack_f10,&uStack_ed0);
          FUN_10ae231f8(auStack_f10);
          FUN_10ae25530(abStack_6a8,auStack_f10);
          FUN_10ae25530(acStack_7a8,auStack_1110);
          FUN_10ae22fcc(auStack_cb0,&uStack_10f0);
          uStack_de8 = uStack_10e8;
          uStack_df0 = uStack_10f0;
          uStack_dd8 = uStack_10d8;
          uStack_de0 = lStack_10e0;
          lStack_dc0 = lStack_10c0;
          lStack_dc8 = lStack_10c8;
          lStack_db0 = lStack_10b0;
          lStack_db8 = lStack_10b8;
          uStack_dd0 = uStack_10d0;
          lStack_da8 = lStack_10a8;
          lStack_d98 = lStack_1098;
          uStack_da0 = uStack_10a0;
          lStack_d88 = lStack_1088;
          lStack_d90 = lStack_1090;
          lStack_d80 = lStack_1080;
          func_0x000107c2b264(&lStack_d50,&uStack_df0);
          func_0x000107c2b254(&lStack_1050,&lStack_d50);
          FUN_10ae23040(&lStack_d50,&lStack_1050,auStack_cb0);
          func_0x000107c2b254(&uStack_df0,&lStack_d50);
          FUN_10ae22fcc(auStack_c10,&uStack_df0);
          FUN_10ae23040(&lStack_d50,&lStack_1050,auStack_c10);
          func_0x000107c2b254(&uStack_df0,&lStack_d50);
          FUN_10ae22fcc(auStack_b70,&uStack_df0);
          FUN_10ae23040(&lStack_d50,&lStack_1050,auStack_b70);
          func_0x000107c2b254(&uStack_df0,&lStack_d50);
          FUN_10ae22fcc(auStack_ad0,&uStack_df0);
          FUN_10ae23040(&lStack_d50,&lStack_1050,auStack_ad0);
          func_0x000107c2b254(&uStack_df0,&lStack_d50);
          FUN_10ae22fcc(auStack_a30,&uStack_df0);
          FUN_10ae23040(&lStack_d50,&lStack_1050,auStack_a30);
          func_0x000107c2b254(&uStack_df0,&lStack_d50);
          FUN_10ae22fcc(auStack_990,&uStack_df0);
          FUN_10ae23040(&lStack_d50,&lStack_1050,auStack_990);
          func_0x000107c2b254(&uStack_df0,&lStack_d50);
          FUN_10ae22fcc(auStack_8f0,&uStack_df0);
          FUN_10ae23040(&lStack_d50,&lStack_1050,auStack_8f0);
          func_0x000107c2b254(&uStack_df0,&lStack_d50);
          FUN_10ae22fcc(auStack_850,&uStack_df0);
          uStack_1158 = 0;
          uStack_1160 = 0;
          uStack_1148 = 0;
          uStack_1150 = 0;
          lStack_1178 = 0;
          lStack_1180 = 0;
          lStack_1170 = 0;
          lStack_1188 = 0;
          lStack_1190 = 0;
          uStack_1168 = 1;
          uStack_1130 = 0;
          uStack_1138 = 0;
          uStack_1120 = 0;
          uStack_1128 = 0;
          uVar34 = 0xff;
          uStack_1140 = 1;
          goto LAB_10ae24f08;
        }
        if (lVar52 == -8) break;
        uVar34 = *(ulong *)((long)auStack_1110 + lVar52);
        uVar39 = *(ulong *)(&UNK_10e518348 + lVar52);
        lVar52 = lVar52 + -8;
      } while (uVar34 <= uVar39);
    }
  }
LAB_10ae24c88:
  pcVar13 = (char *)0x0;
LAB_10ae24c8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return pcVar13;
  }
  ___stack_chk_fail();
  uVar34 = 0;
  do {
    pcVar13[uVar34] = pbVar17[uVar34 >> 3 & 0x1fffffff] >> (uVar34 & 7) & 1;
    uVar34 = uVar34 + 1;
  } while (uVar34 != 0x100);
  uVar34 = 0;
  uVar39 = 0xfe;
  lVar52 = 1;
  do {
    if ((uVar34 < 0xff) && (pcVar13[uVar34] != '\0')) {
      uVar54 = uVar39;
      if (4 < uVar39) {
        uVar54 = 5;
      }
      lVar28 = 1;
      uVar57 = uVar34;
      lVar23 = lVar52;
      do {
        if (pcVar13[lVar23] != 0) {
          iVar8 = (int)pcVar13[lVar23] << (ulong)((uint)lVar28 & 0x1f);
          iVar43 = iVar8 + pcVar13[uVar34];
          if (iVar43 < 0x10) {
            pcVar13[uVar34] = (char)iVar43;
            pcVar13[lVar23] = '\0';
          }
          else {
            iVar8 = pcVar13[uVar34] - iVar8;
            if (iVar8 < -0xf) break;
            pcVar13[uVar34] = (char)iVar8;
            uVar33 = uVar57;
            do {
              if (pcVar13[uVar33 + 1] == '\0') {
                pcVar13[uVar33 + 1] = '\x01';
                break;
              }
              pcVar13[uVar33 + 1] = '\0';
              uVar33 = uVar33 + 1;
            } while (uVar33 != 0xff);
          }
        }
        lVar23 = lVar23 + 1;
        uVar57 = uVar57 + 1;
        bVar10 = lVar28 != uVar54 + 1;
        lVar28 = lVar28 + 1;
      } while (bVar10);
    }
    uVar34 = uVar34 + 1;
    lVar52 = lVar52 + 1;
    uVar39 = uVar39 - 1;
    if (uVar34 == 0x100) {
      return pcVar13;
    }
  } while( true );
  while (uVar44 = (int)uVar34 - 1, uVar34 = (ulong)uVar44, uVar44 != 0xffffffff) {
LAB_10ae24f08:
    if ((abStack_6a8[uVar34] != 0) || (acStack_7a8[uVar34] != '\0')) {
      if (-1 < (int)uVar34) {
        do {
          func_0x000107c2b264(&lStack_d50,&lStack_1190);
          bVar79 = abStack_6a8[uVar34];
          if ((char)bVar79 < '\x01') {
            if ((char)bVar79 < '\0') {
              func_0x000107c2b254(&uStack_df0,&lStack_d50);
              uVar39 = (ulong)(-(uint)bVar79 >> 1 & 0x7f);
              lVar52 = uVar39 * 0xa0;
              lStack_d50 = uStack_df0 + lStack_dc8;
              lStack_d48 = uStack_de8 + lStack_dc0;
              lStack_d40 = uStack_de0 + lStack_db8;
              lStack_d38 = uStack_dd8 + lStack_db0;
              lStack_d30 = uStack_dd0 + lStack_da8;
              lStack_d28 = (lStack_dc8 + 0xfffffffffffda) - uStack_df0;
              lStack_d20 = (lStack_dc0 - uStack_de8) + 0xffffffffffffe;
              lStack_d18 = (lStack_db8 - uStack_de0) + 0xffffffffffffe;
              lStack_d10 = (lStack_db0 - uStack_dd8) + 0xffffffffffffe;
              lStack_d08 = (lStack_da8 - uStack_dd0) + 0xffffffffffffe;
              func_0x000107c34f60(&lStack_f88,&lStack_d50,auStack_c88 + lVar52);
              func_0x000107c34f60(&lStack_f60,&lStack_d28,auStack_cb0 + uVar39 * 0x14);
              func_0x000107c34f60(&lStack_fb0,auStack_c38 + lVar52,auStack_d78);
              func_0x000107c34f60(&uStack_f38,&uStack_da0,auStack_c60 + lVar52);
              lStack_d50 = (lStack_f88 + 0xfffffffffffda) - lStack_f60;
              lStack_d48 = (lStack_f80 - lStack_f58) + 0xffffffffffffe;
              lStack_d40 = (lStack_f78 - lStack_f50) + 0xffffffffffffe;
              lStack_d38 = (lStack_f70 - lStack_f48) + 0xffffffffffffe;
              lStack_d30 = (lStack_f68 - lStack_f40) + 0xffffffffffffe;
              lStack_d28 = lStack_f60 + lStack_f88;
              lStack_d20 = lStack_f58 + lStack_f80;
              lStack_d18 = lStack_f50 + lStack_f78;
              lStack_d10 = lStack_f48 + lStack_f70;
              lStack_d08 = lStack_f40 + lStack_f68;
              uVar39 = lStack_f30 * 2 + ((uStack_f38 & 0x7fffffffffffffff) >> 0x32);
              uVar54 = (uVar39 >> 0x33) + lStack_f28 * 2;
              uVar57 = (uVar54 >> 0x33) + lStack_f20 * 2;
              uVar33 = (uVar57 >> 0x33) + lStack_f18 * 2;
              uVar62 = (uStack_f38 & 0x3ffffffffffff) * 2 + (uVar33 >> 0x33) * 0x13;
              uVar39 = (uVar39 & 0x7ffffffffffff) + (uVar62 >> 0x33);
              uVar62 = uVar62 & 0x7ffffffffffff;
              uVar40 = uVar39 & 0x7ffffffffffff;
              lStack_cc8 = (uVar54 & 0x7ffffffffffff) + (uVar39 >> 0x33);
              uVar57 = uVar57 & 0x7ffffffffffff;
              uVar33 = uVar33 & 0x7ffffffffffff;
              lStack_d00 = (uVar62 - lStack_fb0) + 0xfffffffffffda;
              lStack_cf8 = (uVar40 - lStack_fa8) + 0xffffffffffffe;
              lStack_cf0 = (lStack_cc8 - lStack_fa0) + 0xffffffffffffe;
              lStack_ce8 = (uVar57 - lStack_f98) + 0xffffffffffffe;
              lStack_ce0 = (uVar33 - lStack_f90) + 0xffffffffffffe;
              lStack_cd8 = uVar62 + lStack_fb0;
              lStack_cd0 = uVar40 + lStack_fa8;
              lStack_cc8 = lStack_cc8 + lStack_fa0;
              lStack_cc0 = lStack_f98 + uVar57;
              lStack_cb8 = lStack_f90 + uVar33;
            }
          }
          else {
            func_0x000107c2b254(&uStack_df0,&lStack_d50);
            FUN_10ae23040(&lStack_d50,&uStack_df0,auStack_cb0 + (ulong)(bVar79 >> 1) * 0x14);
          }
          uVar44 = (uint)acStack_7a8[uVar34];
          if (acStack_7a8[uVar34] < '\x01') {
            if ((int)uVar44 < 0) {
              func_0x000107c2b254(&uStack_df0,&lStack_d50);
              lVar52 = (ulong)(-uVar44 >> 1 & 0x7f) * 0x78;
              lStack_d50 = uStack_df0 + lStack_dc8;
              lStack_d48 = uStack_de8 + lStack_dc0;
              lStack_d40 = uStack_de0 + lStack_db8;
              lStack_d38 = uStack_dd8 + lStack_db0;
              lStack_d30 = uStack_dd0 + lStack_da8;
              lStack_d28 = (lStack_dc8 + 0xfffffffffffda) - uStack_df0;
              lStack_d20 = (lStack_dc0 - uStack_de8) + 0xffffffffffffe;
              lStack_d18 = (lStack_db8 - uStack_de0) + 0xffffffffffffe;
              lStack_d10 = (lStack_db0 - uStack_dd8) + 0xffffffffffffe;
              lStack_d08 = (lStack_da8 - uStack_dd0) + 0xffffffffffffe;
              func_0x000107c34f60(&lStack_f60,&lStack_d50,&UNK_10e51fb90 + lVar52);
              func_0x000107c34f60(&uStack_f38,&lStack_d28,&UNK_10e51fb68 + lVar52);
              func_0x000107c34f60(&lStack_f88,&UNK_10e51fbb8 + lVar52,auStack_d78);
              lStack_d50 = (lStack_f60 + 0xfffffffffffda) - uStack_f38;
              lStack_d48 = (lStack_f58 - lStack_f30) + 0xffffffffffffe;
              lStack_d40 = (lStack_f50 - lStack_f28) + 0xffffffffffffe;
              lStack_d38 = (lStack_f48 - lStack_f20) + 0xffffffffffffe;
              lStack_d30 = (lStack_f40 - lStack_f18) + 0xffffffffffffe;
              lStack_d28 = uStack_f38 + lStack_f60;
              lStack_d20 = lStack_f30 + lStack_f58;
              lStack_d18 = lStack_f28 + lStack_f50;
              lStack_d10 = lStack_f20 + lStack_f48;
              lStack_d08 = lStack_f18 + lStack_f40;
              uVar39 = lStack_d98 * 2 + ((uStack_da0 & 0x7fffffffffffffff) >> 0x32);
              uVar54 = (uVar39 >> 0x33) + lStack_d90 * 2;
              uVar57 = (uVar54 >> 0x33) + lStack_d88 * 2;
              uVar33 = (uVar57 >> 0x33) + lStack_d80 * 2;
              uVar62 = (uStack_da0 & 0x3ffffffffffff) * 2 + (uVar33 >> 0x33) * 0x13;
              uVar39 = (uVar39 & 0x7ffffffffffff) + (uVar62 >> 0x33);
              uVar62 = uVar62 & 0x7ffffffffffff;
              uVar40 = uVar39 & 0x7ffffffffffff;
              lStack_cc8 = (uVar54 & 0x7ffffffffffff) + (uVar39 >> 0x33);
              uVar57 = uVar57 & 0x7ffffffffffff;
              uVar33 = uVar33 & 0x7ffffffffffff;
              lStack_d00 = (uVar62 + 0xfffffffffffda) - lStack_f88;
              lStack_cf8 = (uVar40 - lStack_f80) + 0xffffffffffffe;
              lStack_cf0 = (lStack_cc8 - lStack_f78) + 0xffffffffffffe;
              lStack_ce8 = (uVar57 - lStack_f70) + 0xffffffffffffe;
              lStack_ce0 = (uVar33 - lStack_f68) + 0xffffffffffffe;
              lStack_cd8 = lStack_f88 + uVar62;
              lStack_cd0 = lStack_f80 + uVar40;
              lStack_cc8 = lStack_f78 + lStack_cc8;
              lStack_cc0 = lStack_f70 + uVar57;
              lStack_cb8 = lStack_f68 + uVar33;
            }
          }
          else {
            func_0x000107c2b254(&uStack_df0,&lStack_d50);
            func_0x000107c2b25c(&lStack_d50,&uStack_df0,
                                &UNK_10e51fb68 + (ulong)(uVar44 >> 1 & 0x7f) * 0x78);
          }
          func_0x000107c2b250(&lStack_1190,&lStack_d50);
          bVar10 = 0 < (long)uVar34;
          uVar34 = uVar34 - 1;
        } while (bVar10);
      }
      break;
    }
  }
  func_0x000107c34f5c(auStack_cb0,&uStack_1140);
  func_0x000107c34f60(abStack_6a8,&lStack_1190,auStack_cb0);
  func_0x000107c34f60(acStack_7a8,&uStack_1168,auStack_cb0);
  func_0x000107c34f58(&uStack_df0,acStack_7a8);
  pbVar17 = abStack_6a8;
  func_0x000107c34f58(&lStack_d50);
  uVar34 = uStack_dd8;
  bVar79 = uStack_dd8._7_1_ ^ (char)lStack_d50 << 7;
  uStack_dd8 = CONCAT17(bVar79,(undefined7)uStack_dd8);
  lVar52 = uStack_dd8;
  uStack_dd8._0_1_ = (byte)uVar34;
  uStack_dd8._1_1_ = SUB81(uVar34,1);
  uStack_dd8._2_1_ = SUB81(uVar34,2);
  uStack_dd8._3_1_ = SUB81(uVar34,3);
  uStack_dd8._4_1_ = SUB81(uVar34,4);
  uStack_dd8._5_1_ = SUB81(uVar34,5);
  uStack_dd8._6_1_ = SUB81(uVar34,6);
  bVar64 = (byte)uVar83 ^ (byte)uStack_de0 | (byte)uVar81 ^ (byte)uStack_df0;
  bVar65 = (byte)((ulong)uVar83 >> 8) ^ uStack_de0._1_1_ |
           (byte)((ulong)uVar81 >> 8) ^ (byte)(uStack_df0 >> 8);
  bVar66 = (byte)((ulong)uVar83 >> 0x10) ^ uStack_de0._2_1_ |
           (byte)((ulong)uVar81 >> 0x10) ^ (byte)(uStack_df0 >> 0x10);
  bVar67 = (byte)((ulong)uVar83 >> 0x18) ^ uStack_de0._3_1_ |
           (byte)((ulong)uVar81 >> 0x18) ^ (byte)(uStack_df0 >> 0x18);
  bVar68 = (byte)((ulong)uVar83 >> 0x20) ^ uStack_de0._4_1_ |
           (byte)((ulong)uVar81 >> 0x20) ^ (byte)(uStack_df0 >> 0x20);
  bVar69 = (byte)((ulong)uVar83 >> 0x28) ^ uStack_de0._5_1_ |
           (byte)((ulong)uVar81 >> 0x28) ^ (byte)(uStack_df0 >> 0x28);
  bVar70 = (byte)((ulong)uVar83 >> 0x30) ^ uStack_de0._6_1_ |
           (byte)((ulong)uVar81 >> 0x30) ^ (byte)(uStack_df0 >> 0x30);
  bVar71 = (byte)((ulong)uVar83 >> 0x38) ^ uStack_de0._7_1_ |
           (byte)((ulong)uVar81 >> 0x38) ^ (byte)(uStack_df0 >> 0x38);
  bVar72 = (byte)uVar84 ^ (byte)uStack_dd8 | (byte)uVar82 ^ (byte)uStack_de8;
  bVar73 = (byte)((ulong)uVar84 >> 8) ^ uStack_dd8._1_1_ |
           (byte)((ulong)uVar82 >> 8) ^ (byte)(uStack_de8 >> 8);
  bVar74 = (byte)((ulong)uVar84 >> 0x10) ^ uStack_dd8._2_1_ |
           (byte)((ulong)uVar82 >> 0x10) ^ (byte)(uStack_de8 >> 0x10);
  bVar75 = (byte)((ulong)uVar84 >> 0x18) ^ uStack_dd8._3_1_ |
           (byte)((ulong)uVar82 >> 0x18) ^ (byte)(uStack_de8 >> 0x18);
  bVar76 = (byte)((ulong)uVar84 >> 0x20) ^ uStack_dd8._4_1_ |
           (byte)((ulong)uVar82 >> 0x20) ^ (byte)(uStack_de8 >> 0x20);
  bVar77 = (byte)((ulong)uVar84 >> 0x28) ^ uStack_dd8._5_1_ |
           (byte)((ulong)uVar82 >> 0x28) ^ (byte)(uStack_de8 >> 0x28);
  bVar78 = (byte)((ulong)uVar84 >> 0x30) ^ uStack_dd8._6_1_ |
           (byte)((ulong)uVar82 >> 0x30) ^ (byte)(uStack_de8 >> 0x30);
  bVar79 = (byte)((ulong)uVar84 >> 0x38) ^ bVar79 |
           (byte)((ulong)uVar82 >> 0x38) ^ (byte)(uStack_de8 >> 0x38);
  auVar80[1] = bVar65;
  auVar80[0] = bVar64;
  auVar80[2] = bVar66;
  auVar80[3] = bVar67;
  auVar80[4] = bVar68;
  auVar80[5] = bVar69;
  auVar80[6] = bVar70;
  auVar80[7] = bVar71;
  auVar80[8] = bVar72;
  auVar80[9] = bVar73;
  auVar80[10] = bVar74;
  auVar80[0xb] = bVar75;
  auVar80[0xc] = bVar76;
  auVar80[0xd] = bVar77;
  auVar80[0xe] = bVar78;
  auVar80[0xf] = bVar79;
  auVar9[1] = bVar65;
  auVar9[0] = bVar64;
  auVar9[2] = bVar66;
  auVar9[3] = bVar67;
  auVar9[4] = bVar68;
  auVar9[5] = bVar69;
  auVar9[6] = bVar70;
  auVar9[7] = bVar71;
  auVar9[8] = bVar72;
  auVar9[9] = bVar73;
  auVar9[10] = bVar74;
  auVar9[0xb] = bVar75;
  auVar9[0xc] = bVar76;
  auVar9[0xd] = bVar77;
  auVar9[0xe] = bVar78;
  auVar9[0xf] = bVar79;
  auVar80 = NEON_ext(auVar80,auVar9,8,1);
  uVar34 = CONCAT17(bVar71 | auVar80[7],
                    CONCAT16(bVar70 | auVar80[6],
                             CONCAT15(bVar69 | auVar80[5],
                                      CONCAT14(bVar68 | auVar80[4],
                                               CONCAT13(bVar67 | auVar80[3],
                                                        CONCAT12(bVar66 | auVar80[2],
                                                                 CONCAT11(bVar65 | auVar80[1],
                                                                          bVar64 | auVar80[0])))))))
  ;
  uVar34 = uVar34 | uVar34 >> 0x20;
  uVar44 = (uint)uVar34 | (uint)(uVar34 >> 0x10);
  pcVar13 = (char *)(ulong)(((uVar44 | uVar44 >> 8) & 0xff) == 0);
  uStack_dd8 = lVar52;
  goto LAB_10ae24c8c;
}



/* Entry: 10ae238c8; end: 10ae245a7;  */

char * FUN_10ae238c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  int iVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  long lVar55;
  ulong uVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  ulong uVar61;
  ulong uVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined1 auVar79 [16];
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  long lStack_1070;
  long lStack_1068;
  long lStack_1060;
  long lStack_1058;
  long lStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  ulong auStack_ff0 [4];
  ulong uStack_fd0;
  ulong uStack_fc8;
  long lStack_fc0;
  ulong uStack_fb8;
  ulong uStack_fb0;
  long lStack_fa8;
  long lStack_fa0;
  long lStack_f98;
  long lStack_f90;
  long lStack_f88;
  ulong uStack_f80;
  long lStack_f78;
  long lStack_f70;
  long lStack_f68;
  long lStack_f60;
  ulong uStack_f58;
  ulong uStack_f50;
  long lStack_f48;
  ulong uStack_f40;
  ulong uStack_f38;
  long lStack_f30;
  long lStack_f28;
  long lStack_f20;
  long lStack_f18;
  long lStack_f10;
  long lStack_e90;
  long lStack_e88;
  long lStack_e80;
  long lStack_e78;
  long lStack_e70;
  long lStack_e68;
  long lStack_e60;
  long lStack_e58;
  long lStack_e50;
  long lStack_e48;
  long lStack_e40;
  long lStack_e38;
  long lStack_e30;
  long lStack_e28;
  long lStack_e20;
  ulong uStack_e18;
  long lStack_e10;
  long lStack_e08;
  long lStack_e00;
  long lStack_df8;
  undefined1 auStack_df0 [64];
  ulong uStack_db0;
  ulong uStack_da8;
  long lStack_da0;
  ulong uStack_d98;
  ulong uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_ce0;
  ulong uStack_cd0;
  ulong uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  ulong uStack_cb0;
  long lStack_ca8;
  long lStack_ca0;
  long lStack_c98;
  long lStack_c90;
  long lStack_c88;
  ulong uStack_c80;
  long lStack_c78;
  long lStack_c70;
  long lStack_c68;
  long lStack_c60;
  undefined1 auStack_c58 [40];
  long lStack_c30;
  long lStack_c28;
  long lStack_c20;
  long lStack_c18;
  long lStack_c10;
  long lStack_c08;
  long lStack_c00;
  long lStack_bf8;
  long lStack_bf0;
  long lStack_be8;
  long lStack_be0;
  long lStack_bd8;
  long lStack_bd0;
  long lStack_bc8;
  long lStack_bc0;
  long lStack_bb8;
  long lStack_bb0;
  long lStack_ba8;
  long lStack_ba0;
  long lStack_b98;
  ulong auStack_b90 [5];
  undefined1 auStack_b68 [40];
  undefined1 auStack_b40 [40];
  undefined1 auStack_b18 [40];
  undefined1 auStack_af0 [160];
  undefined1 auStack_a50 [160];
  undefined1 auStack_9b0 [160];
  undefined1 auStack_910 [160];
  undefined1 auStack_870 [160];
  undefined1 auStack_7d0 [160];
  undefined1 auStack_730 [168];
  char acStack_688 [256];
  byte abStack_588 [256];
  long lStack_488;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  ulong uStack_428;
  undefined1 **ppuStack_420;
  code *pcStack_418;
  undefined1 auStack_410 [40];
  byte abStack_3e8 [40];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  char acStack_398 [32];
  long lStack_378;
  ulong uStack_370;
  long lStack_368;
  undefined1 *puStack_360;
  code *pcStack_358;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  ulong uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [160];
  ushort uStack_220;
  uint uStack_21e;
  byte bStack_21a;
  byte bStack_219;
  undefined2 uStack_218;
  uint uStack_216;
  byte bStack_212;
  uint uStack_211;
  byte bStack_20d;
  byte bStack_20c;
  ushort uStack_20b;
  uint uStack_209;
  byte bStack_205;
  uint uStack_204;
  ushort uStack_1e0;
  uint uStack_1de;
  byte bStack_1da;
  byte bStack_1d9;
  undefined2 uStack_1d8;
  uint uStack_1d6;
  byte bStack_1d2;
  uint uStack_1d1;
  byte bStack_1cd;
  byte bStack_1cc;
  ushort uStack_1cb;
  uint uStack_1c9;
  byte bStack_1c5;
  uint uStack_1c4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_d0;
  ushort uStack_c8;
  uint uStack_c6;
  byte bStack_c2;
  byte bStack_c1;
  undefined2 uStack_c0;
  uint uStack_be;
  byte bStack_ba;
  uint uStack_b9;
  byte bStack_b5;
  byte bStack_b4;
  ushort uStack_b3;
  uint uStack_b1;
  byte bStack_ad;
  uint uStack_ac;
  undefined1 auStack_a8 [32];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010ae354ec(param_4,0x20,&uStack_c8);
  uStack_c8 = uStack_c8 & 0xfff8;
  uStack_ac = uStack_ac & 0x3fffffff | 0x40000000;
  uStack_2c8 = 0xbb67ae8584caa73b;
  lStack_2d0 = 0x6a09e667f3bcc908;
  uStack_2d8 = 0xa54ff53a5f1d36f1;
  lStack_2e0 = 0x3c6ef372fe94f82b;
  uStack_198 = 0xbb67ae8584caa73b;
  uStack_1a0 = 0x6a09e667f3bcc908;
  uStack_188 = 0xa54ff53a5f1d36f1;
  uStack_190 = 0x3c6ef372fe94f82b;
  uStack_2e8 = 0x9b05688c2b3e6c1f;
  lStack_2f0 = 0x510e527fade682d1;
  uStack_2f8 = 0x5be0cd19137e2179;
  lStack_300 = 0x1f83d9abfb41bd6b;
  uStack_178 = 0x9b05688c2b3e6c1f;
  uStack_180 = 0x510e527fade682d1;
  uStack_168 = 0x5be0cd19137e2179;
  uStack_170 = 0x1f83d9abfb41bd6b;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_d0 = 0x4000000000;
  FUN_10ae35d48(&uStack_1a0,auStack_a8,0x20);
  FUN_10ae35d48(&uStack_1a0,param_2,param_3);
  FUN_10ae3c914(&uStack_1e0,&uStack_1a0);
  FUN_10ae231f8(&uStack_1e0);
  func_0x000107c2b260(auStack_2c0,&uStack_1e0);
  FUN_10ae245a8(param_1,auStack_2c0);
  uStack_198 = uStack_2c8;
  uStack_1a0 = lStack_2d0;
  uStack_188 = uStack_2d8;
  uStack_190 = lStack_2e0;
  uStack_178 = uStack_2e8;
  uStack_180 = lStack_2f0;
  uStack_168 = uStack_2f8;
  uStack_170 = lStack_300;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_d0 = 0x4000000000;
  FUN_10ae35d48(&uStack_1a0,param_1,0x20);
  FUN_10ae35d48(&uStack_1a0,param_4 + 0x20,0x20);
  FUN_10ae35d48(&uStack_1a0,param_2,param_3);
  FUN_10ae3c914(&uStack_220,&uStack_1a0);
  FUN_10ae231f8(&uStack_220);
  uVar5 = (ulong)uStack_220 | ((ulong)(byte)uStack_21e & 0x1f) << 0x10;
  uVar6 = (ulong)uStack_20b | ((ulong)(byte)uStack_209 & 0x1f) << 0x10;
  uVar7 = (ulong)uStack_c8 | ((ulong)(byte)uStack_c6 & 0x1f) << 0x10;
  uVar24 = (ulong)uStack_b3 | ((ulong)(byte)uStack_b1 & 0x1f) << 0x10;
  uVar52 = (ulong)(uStack_21e >> 5) & 0x1fffff;
  uVar23 = (ulong)((uStack_21e >> 0x18 | (uint)bStack_21a << 8 | (uint)bStack_219 << 0x10) >> 2) &
           0x1fffff;
  uVar62 = (ulong)(uStack_c6 >> 5) & 0x1fffff;
  uVar54 = (ulong)((uStack_c6 >> 0x18 | (uint)bStack_c2 << 8 | (uint)bStack_c1 << 0x10) >> 2) &
           0x1fffff;
  lStack_2d0 = uVar62 * uVar52 + uVar7 * uVar23 + uVar54 * uVar5 +
               ((ulong)((uStack_1de >> 0x18 | (uint)bStack_1da << 8 | (uint)bStack_1d9 << 0x10) >> 2
                       ) & 0x1fffff);
  uVar48 = (ulong)(CONCAT13((undefined1)uStack_216,CONCAT21(uStack_218,bStack_219)) >> 7) & 0x1fffff
  ;
  uVar11 = (ulong)(uStack_216 >> 4) & 0x1fffff;
  uVar29 = (ulong)(CONCAT13((undefined1)uStack_be,CONCAT21(uStack_c0,bStack_c1)) >> 7) & 0x1fffff;
  uVar19 = (ulong)(uStack_be >> 4) & 0x1fffff;
  lStack_348 = uVar62 * uVar48 + uVar7 * uVar11 + uVar29 * uVar52 + uVar5 * uVar19 + uVar54 * uVar23
               + ((ulong)(uStack_1d6 >> 4) & 0x1fffff);
  uVar17 = (ulong)((uStack_216 >> 0x18 | (uint)bStack_212 << 8 | (uStack_211 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  uVar14 = (ulong)(uStack_211 >> 6) & 0x1fffff;
  uVar21 = (ulong)(uStack_b9 >> 6) & 0x1fffff;
  uVar28 = (ulong)((uStack_be >> 0x18 | (uint)bStack_ba << 8 | (uStack_b9 & 0xff) << 0x10) >> 1) &
           0x1fffff;
  lStack_2f0 = uVar17 * uVar62 + uVar7 * uVar14 + uVar29 * uVar48 + uVar23 * uVar19 +
               uVar54 * uVar11 + uVar5 * uVar21 + uVar28 * uVar52 +
               ((ulong)(uStack_1d1 >> 6) & 0x1fffff);
  uVar25 = ((ulong)(uStack_211 >> 0x18) | (ulong)bStack_20d << 8 | (ulong)bStack_20c << 0x10) >> 3;
  uVar57 = ((ulong)(uStack_b9 >> 0x18) | (ulong)bStack_b5 << 8 | (ulong)bStack_b4 << 0x10) >> 3;
  lStack_300 = uVar25 * uVar62 + uVar7 * uVar6 + uVar17 * uVar29 + uVar19 * uVar11 + uVar54 * uVar14
               + uVar23 * uVar21 + uVar28 * uVar48 + uVar57 * uVar52 + uVar24 * uVar5 +
               (ulong)uStack_1cb + ((ulong)(byte)uStack_1c9 & 0x1f) * 0x10000;
  uVar46 = (ulong)(uStack_209 >> 5) & 0x1fffff;
  uVar44 = (ulong)((uStack_209 >> 0x18 | (uint)bStack_205 << 8 | (uStack_204 & 0xff) << 0x10) >> 2)
           & 0x1fffff;
  uVar59 = (ulong)(uStack_b1 >> 5) & 0x1fffff;
  uVar50 = (ulong)((uStack_b1 >> 0x18 | (uint)bStack_ad << 8 | (uStack_ac & 0xff) << 0x10) >> 2) &
           0x1fffff;
  lStack_308 = uVar62 * uVar46 + uVar7 * uVar44 + uVar25 * uVar29 + uVar19 * uVar14 + uVar54 * uVar6
               + uVar21 * uVar11 + uVar28 * uVar17 + uVar57 * uVar48 + uVar59 * uVar52 +
               uVar24 * uVar23 + uVar50 * uVar5 +
               ((ulong)((uStack_1c9 >> 0x18 | (uint)bStack_1c5 << 8 | (uStack_1c4 & 0xff) << 0x10)
                       >> 2) & 0x1fffff);
  lStack_2e0 = ((ulong)uStack_1e0 | ((ulong)(byte)uStack_1de & 0x1f) << 0x10) + uVar7 * uVar5;
  uVar33 = lStack_2e0 + 0x100000;
  lStack_330 = uVar5 * uVar62 + uVar7 * uVar52 + ((ulong)(uStack_1de >> 5) & 0x1fffff) +
               (uVar33 >> 0x15);
  lStack_2e0 = lStack_2e0 - (uVar33 & 0xfffffe00000);
  uVar33 = lStack_348 + 0x100000;
  lStack_318 = uVar62 * uVar11 + uVar7 * uVar17 + uVar23 * uVar29 + uVar19 * uVar52 +
               uVar54 * uVar48 + uVar28 * uVar5 + (uVar33 >> 0x15) +
               ((ulong)((uStack_1d6 >> 0x18 | (uint)bStack_1d2 << 8 | (uStack_1d1 & 0xff) << 0x10)
                       >> 1) & 0x1fffff);
  lStack_348 = lStack_348 - (uVar33 & 0xffffffffffe00000);
  lStack_340 = uVar62 * uVar14 + uVar7 * uVar25 + uVar29 * uVar11 + uVar19 * uVar48 +
               uVar54 * uVar17 + uVar21 * uVar52 + uVar28 * uVar23 + uVar57 * uVar5 +
               (((ulong)(uStack_1d1 >> 0x18) | (ulong)bStack_1cd << 8 | (ulong)bStack_1cc << 0x10)
               >> 3);
  lStack_338 = uVar6 * uVar62 + uVar7 * uVar46 + uVar29 * uVar14 + uVar17 * uVar19 + uVar54 * uVar25
               + uVar21 * uVar48 + uVar28 * uVar11 + uVar57 * uVar23 + uVar5 * uVar59 +
               uVar24 * uVar52 + ((ulong)(uStack_1c9 >> 5) & 0x1fffff);
  uVar34 = (ulong)(uStack_204 >> 7);
  uVar40 = (ulong)(uStack_ac >> 7);
  lVar49 = uVar62 * uVar34 + uVar29 * uVar46 + uVar6 * uVar19 + uVar54 * uVar44 + uVar21 * uVar14 +
           uVar28 * uVar25 + uVar57 * uVar17 + uVar59 * uVar48 + uVar24 * uVar11 + uVar40 * uVar52 +
           uVar50 * uVar23;
  lVar37 = uVar57 * uVar34 + uVar59 * uVar46 + uVar24 * uVar44 + uVar25 * uVar40 + uVar50 * uVar6;
  uVar33 = lVar37 + 0x100000;
  lVar51 = uVar44 * uVar59 + uVar24 * uVar34 + uVar6 * uVar40 + uVar50 * uVar46 + (uVar33 >> 0x15);
  lVar55 = uVar29 * uVar34 + uVar44 * uVar19 + uVar6 * uVar21 + uVar28 * uVar46 + uVar57 * uVar25 +
           uVar17 * uVar59 + uVar24 * uVar14 + uVar40 * uVar48 + uVar50 * uVar11;
  uStack_328 = lStack_2d0 + 0x100000;
  lStack_320 = uVar23 * uVar62 + uVar7 * uVar48 + uVar5 * uVar29 + uVar54 * uVar52 +
               ((ulong)(CONCAT13((undefined1)uStack_1d6,CONCAT21(uStack_1d8,bStack_1d9)) >> 7) &
               0x1fffff) + (uStack_328 >> 0x15);
  uVar38 = lVar49 + 0x100000;
  lVar22 = uVar44 * uVar29 + uVar19 * uVar46 + uVar54 * uVar34 + uVar25 * uVar21 + uVar28 * uVar6 +
           uVar57 * uVar14 + uVar59 * uVar11 + uVar24 * uVar17 + uVar23 * uVar40 + uVar50 * uVar48 +
           (uVar38 >> 0x15);
  lVar12 = uVar44 * uVar21 + uVar28 * uVar34 + uVar57 * uVar46 + uVar25 * uVar59 + uVar24 * uVar6 +
           uVar17 * uVar40 + uVar50 * uVar14;
  uVar53 = lVar55 + 0x100000;
  lVar27 = uVar19 * uVar34 + uVar21 * uVar46 + uVar28 * uVar44 + uVar57 * uVar6 + uVar59 * uVar14 +
           uVar24 * uVar25 + uVar40 * uVar11 + uVar50 * uVar17 + (uVar53 >> 0x15);
  uVar56 = lVar12 + 0x100000;
  lVar2 = uVar21 * uVar34 + uVar57 * uVar44 + uVar6 * uVar59 + uVar24 * uVar46 + uVar40 * uVar14 +
          uVar50 * uVar25 + (uVar56 >> 0x15);
  lVar30 = uVar59 * uVar34 + uVar40 * uVar46 + uVar50 * uVar44;
  uVar32 = lVar30 + 0x100000;
  lVar41 = uVar44 * uVar40 + uVar50 * uVar34 + (uVar32 >> 0x15);
  uVar61 = uVar40 * uVar34 + 0x100000;
  uVar26 = uVar61 >> 0x15;
  uVar39 = lStack_330 + 0x100000;
  lStack_330 = lStack_330 - (uVar39 & 0xffffffffffe00000);
  uVar1 = lStack_320 + 0x100000;
  lStack_310 = lStack_348 + (uVar1 >> 0x15);
  lStack_320 = lStack_320 - (uVar1 & 0xffffffffffe00000);
  uVar1 = lVar2 + 0x100000;
  lVar37 = (lVar37 - (uVar33 & 0xffffffffffe00000)) + (uVar1 >> 0x15);
  uVar33 = lVar51 + 0x100000;
  lVar30 = (lVar30 - (uVar32 & 0x1ffffffe00000)) + (uVar33 >> 0x15);
  lVar51 = lVar51 - (uVar33 & 0xffffffffffe00000);
  uVar33 = lVar41 + 0x100000;
  lVar3 = (uVar40 * uVar34 - (uVar61 & 0x7ffffffe00000)) + (uVar33 >> 0x15);
  lVar41 = lVar41 - (uVar33 & 0x1ffffffe00000);
  puVar20 = (ulong *)0xfffffffffff0c653;
  lVar47 = lStack_340 + (lStack_2f0 + 0x100000U >> 0x15);
  lVar36 = lStack_338 + (lStack_300 + 0x100000U >> 0x15);
  uVar33 = lVar47 + 0x100000;
  lVar45 = (lVar30 * 0xa2c13 + lVar51 * 0x72d18 + lVar37 * 0x9fb67 + lStack_300 + (uVar33 >> 0x15))
           - (lStack_300 + 0x100000U & 0xffffffffffe00000);
  uVar32 = lVar36 + 0x100000;
  lVar4 = uVar44 * uVar62 + uVar7 * uVar34 + uVar6 * uVar29 + uVar25 * uVar19 + uVar54 * uVar46 +
          uVar17 * uVar21 + uVar28 * uVar14 + uVar57 * uVar11 + uVar23 * uVar59 + uVar24 * uVar48 +
          uVar5 * uVar40 + uVar50 * uVar52 + (ulong)(uStack_1c4 >> 7) +
          (lStack_308 + 0x100000U >> 0x15);
  lVar31 = (lVar3 * 0xa2c13 + lVar41 * 0x72d18 + lVar30 * 0x9fb67 + lVar51 * -0xf39ad +
            lVar37 * 0x215d1 + (uVar32 >> 0x15) + lStack_308) -
           (lStack_308 + 0x100000U & 0xffffffffffe00000);
  uVar61 = lVar4 + 0x100000;
  lVar49 = ((lVar49 + uVar26 * 0x72d18) - (uVar38 & 0xffffffffffe00000)) + lVar3 * 0x9fb67 +
           lVar41 * -0xf39ad + lVar30 * 0x215d1 + lVar51 * -0xa6f7d + (uVar61 >> 0x15);
  uVar38 = lVar22 + 0x100000;
  uVar5 = lVar49 + 0x100000;
  lVar22 = ((lVar22 + uVar26 * 0x9fb67) - (uVar38 & 0xffffffffffe00000)) + lVar3 * -0xf39ad +
           lVar41 * 0x215d1 + lVar30 * -0xa6f7d + ((long)uVar5 >> 0x15);
  uVar6 = lVar27 + 0x100000;
  lVar12 = ((lVar12 + (long)(int)uVar26 * -0xa6f7d) - (uVar56 & 0xffffffffffe00000)) +
           (uVar6 >> 0x15);
  lVar35 = ((lStack_2f0 + lVar37 * 0xa2c13) - (lStack_2f0 + 0x100000U & 0xffffffffffe00000)) +
           (lStack_318 + 0x100000U >> 0x15);
  uVar56 = lVar45 + 0x100000;
  lVar36 = ((lVar41 * 0xa2c13 + lVar30 * 0x72d18 + lVar51 * 0x9fb67 + lVar37 * -0xf39ad + lVar36) -
           (uVar32 & 0xffffffffffe00000)) + ((long)uVar56 >> 0x15);
  lVar55 = ((lVar55 + (long)(int)uVar26 * -0xf39ad) - (uVar53 & 0xffffffffffe00000)) +
           (uVar38 >> 0x15) + lVar3 * 0x215d1 + lVar41 * -0xa6f7d;
  uVar38 = lVar31 + 0x100000;
  lVar41 = ((lVar3 * 0x72d18 + uVar26 * 0xa2c13 + lVar41 * 0x9fb67 + lVar30 * -0xf39ad +
             lVar51 * 0x215d1 + lVar37 * -0xa6f7d + lVar4) - (uVar61 & 0xffffffffffe00000)) +
           ((long)uVar38 >> 0x15);
  uVar53 = lVar55 + 0x100000;
  lVar27 = ((lVar27 + uVar26 * 0x215d1) - (uVar6 & 0xffffffffffe00000)) + lVar3 * -0xa6f7d +
           ((long)uVar53 >> 0x15);
  uVar32 = lVar12 + 0x100000;
  lVar2 = (lVar2 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar32 >> 0x15);
  uVar61 = lVar41 + 0x100000;
  lVar30 = (lVar49 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar61 >> 0x15);
  uVar1 = lVar22 + 0x100000;
  lVar3 = (lVar55 - (uVar53 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  lVar22 = lVar22 - (uVar1 & 0xffffffffffe00000);
  uVar53 = lVar27 + 0x100000;
  lVar4 = (lVar12 - (uVar32 & 0xffffffffffe00000)) + ((long)uVar53 >> 0x15);
  lVar27 = lVar27 - (uVar53 & 0xffffffffffe00000);
  uVar53 = lVar36 + 0x100000;
  lVar12 = (lVar31 + lVar2 * -0xa6f7d + ((long)uVar53 >> 0x15)) - (uVar38 & 0xffffffffffe00000);
  uVar38 = lVar35 + 0x100000;
  lVar51 = ((lVar51 * 0xa2c13 + lVar37 * 0x72d18 + lVar47) - (uVar33 & 0xffffffffffe00000)) +
           ((long)uVar38 >> 0x15);
  uVar33 = lVar51 + 0x100000;
  lVar55 = (lVar2 * -0xf39ad + lVar4 * 0x215d1 + lVar27 * -0xa6f7d + lVar45 + ((long)uVar33 >> 0x15)
           ) - (uVar56 & 0xffffffffffe00000);
  lVar49 = lStack_2e0 + lVar30 * 0xa2c13;
  uVar56 = lVar49 + 0x100000;
  lVar37 = lStack_330 + lVar30 * 0x72d18 + lVar22 * 0xa2c13 + ((long)uVar56 >> 0x15);
  lVar35 = ((lVar35 + lVar2 * 0x72d18) - (uVar38 & 0xffffffffffe00000)) + lVar4 * 0x9fb67 +
           lVar27 * -0xf39ad + lVar3 * 0x215d1 + lVar22 * -0xa6f7d;
  uVar38 = lVar35 + 0x100000;
  lVar51 = ((lVar2 * 0x9fb67 + lVar4 * -0xf39ad + lVar27 * 0x215d1 + lVar51) -
           (uVar33 & 0xffffffffffe00000)) + lVar3 * -0xa6f7d + ((long)uVar38 >> 0x15);
  uVar33 = lVar55 + 0x100000;
  lVar47 = ((lVar2 * 0x215d1 + lVar4 * -0xa6f7d + lVar36) - (uVar53 & 0xffffffffffe00000)) +
           ((long)uVar33 >> 0x15);
  uVar53 = lVar12 + 0x100000;
  lVar41 = (lVar41 - (uVar61 & 0xffffffffffe00000)) + ((long)uVar53 >> 0x15);
  uVar32 = lVar37 + 0x100000;
  uVar61 = lVar51 + 0x100000;
  uVar1 = lVar47 + 0x100000;
  lVar47 = lVar47 - (uVar1 & 0xffffffffffe00000);
  uVar5 = lVar41 + 0x100000;
  lVar41 = lVar41 - (uVar5 & 0xffffffffffe00000);
  lVar58 = (long)uVar5 >> 0x15;
  lVar45 = (lVar37 + lVar58 * 0x72d18) - (uVar32 & 0xffffffffffe00000);
  lVar36 = ((lStack_2d0 + (uVar39 >> 0x15)) - (uStack_328 & 0xffffffffffe00000)) + lVar30 * 0x9fb67
           + lVar3 * 0xa2c13 + lVar22 * 0x72d18;
  uVar39 = lVar36 + 0x100000;
  lVar37 = lStack_320 + lVar27 * 0xa2c13 + lVar30 * -0xf39ad + lVar3 * 0x72d18 + lVar22 * 0x9fb67 +
           ((long)uVar39 >> 0x15);
  uVar5 = lVar37 + 0x100000;
  lVar60 = lStack_310 + lVar4 * 0xa2c13;
  lVar31 = lVar60 + lVar27 * 0x72d18 + lVar30 * 0x215d1 + lVar3 * 0x9fb67 + lVar22 * -0xf39ad;
  uVar6 = lVar31 + 0x100000;
  lVar22 = ((lStack_318 + lVar2 * 0xa2c13) - (lStack_318 + 0x100000U & 0xffffffffffe00000)) +
           lVar4 * 0x72d18 + lVar27 * 0x9fb67 + lVar30 * -0xa6f7d + lVar3 * -0xf39ad +
           lVar22 * 0x215d1 + ((long)uVar6 >> 0x15);
  uVar7 = lVar22 + 0x100000;
  uVar24 = (lVar49 - (uVar56 & 0xffffffffffe00000)) + lVar58 * 0xa2c13;
  uVar56 = lVar45 + ((long)uVar24 >> 0x15);
  uVar32 = ((lVar36 + lVar58 * 0x9fb67) - (uVar39 & 0xffffffffffe00000)) + ((long)uVar32 >> 0x15) +
           ((long)uVar56 >> 0x15);
  uStack_370 = ((lVar37 + lVar58 * -0xf39ad) - (uVar5 & 0xffffffffffe00000)) +
               ((long)uVar32 >> 0x15);
  uVar39 = ((lVar31 + lVar58 * 0x215d1) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15) +
           ((long)uStack_370 >> 0x15);
  uVar5 = ((lVar22 + lVar58 * -0xa6f7d) - (uVar7 & 0xffffffffffe00000)) + ((long)uVar39 >> 0x15);
  uVar38 = (lVar35 - (uVar38 & 0xffffffffffe00000)) + ((long)uVar7 >> 0x15) + ((long)uVar5 >> 0x15);
  uVar6 = (lVar51 - (uVar61 & 0xffffffffffe00000)) + ((long)uVar38 >> 0x15);
  uVar33 = (lVar55 - (uVar33 & 0xffffffffffe00000)) + ((long)uVar61 >> 0x15) + ((long)uVar6 >> 0x15)
  ;
  uVar61 = lVar47 + ((long)uVar33 >> 0x15);
  uVar53 = ((lVar12 + ((long)uVar1 >> 0x15)) - (uVar53 & 0xffffffffffe00000)) +
           ((long)uVar61 >> 0x15);
  uVar7 = lVar41 + ((long)uVar53 >> 0x15);
  lVar51 = (long)uVar7 >> 0x15;
  lVar22 = (uVar24 & 0x1fffff) + lVar51 * 0xa2c13;
  *(char *)(param_1 + 0x21) = (char)((ulong)lVar22 >> 8);
  uVar56 = (uVar56 & 0x1fffff) + lVar51 * 0x72d18 + (lVar22 >> 0x15);
  *(char *)(param_1 + 0x20) = (char)lVar22;
  *(byte *)(param_1 + 0x22) = (byte)((ulong)lVar22 >> 0x10) & 0x1f | (byte)((uint)uVar56 << 5);
  *(char *)(param_1 + 0x23) = (char)(uVar56 >> 3);
  *(char *)(param_1 + 0x24) = (char)(uVar56 >> 0xb);
  uVar32 = (uVar32 & 0x1fffff) + lVar51 * 0x9fb67 + ((long)uVar56 >> 0x15);
  *(byte *)(param_1 + 0x25) = (byte)((uint)uVar56 >> 0x13) & 3 | (byte)((uint)uVar32 << 2);
  *(char *)(param_1 + 0x26) = (char)(uVar32 >> 6);
  uVar56 = (uStack_370 & 0x1fffff) + lVar51 * -0xf39ad + ((long)uVar32 >> 0x15);
  *(byte *)(param_1 + 0x27) = (byte)((uint)uVar32 >> 0xe) & 0x7f | (byte)((uint)uVar56 << 7);
  *(char *)(param_1 + 0x28) = (char)(uVar56 >> 1);
  *(char *)(param_1 + 0x29) = (char)(uVar56 >> 9);
  uVar32 = (uVar39 & 0x1fffff) + lVar51 * 0x215d1 + ((long)uVar56 >> 0x15);
  *(byte *)(param_1 + 0x2a) = (byte)((uint)uVar56 >> 0x11) & 0xf | (byte)((uint)uVar32 << 4);
  *(char *)(param_1 + 0x2b) = (char)(uVar32 >> 4);
  *(char *)(param_1 + 0x2c) = (char)(uVar32 >> 0xc);
  uVar56 = (uVar5 & 0x1fffff) + lVar51 * -0xa6f7d + ((long)uVar32 >> 0x15);
  *(byte *)(param_1 + 0x2d) = (byte)((uint)uVar32 >> 0x14) & 1 | (byte)((uint)uVar56 << 1);
  *(char *)(param_1 + 0x2e) = (char)(uVar56 >> 7);
  uVar32 = (uVar38 & 0x1fffff) + ((long)uVar56 >> 0x15);
  *(byte *)(param_1 + 0x2f) = (byte)((uint)uVar56 >> 0xf) & 0x3f | (byte)((uint)uVar32 << 6);
  *(char *)(param_1 + 0x30) = (char)(uVar32 >> 2);
  *(char *)(param_1 + 0x31) = (char)(uVar32 >> 10);
  uVar56 = (uVar6 & 0x1fffff) + ((long)uVar32 >> 0x15);
  *(byte *)(param_1 + 0x32) = (byte)((uint)uVar32 >> 0x12) & 7 | (byte)((int)uVar56 << 3);
  *(char *)(param_1 + 0x33) = (char)(uVar56 >> 5);
  lVar51 = (uVar33 & 0x1fffff) + ((long)uVar56 >> 0x15);
  *(char *)(param_1 + 0x34) = (char)(uVar56 >> 0xd);
  *(char *)(param_1 + 0x36) = (char)((ulong)lVar51 >> 8);
  uVar33 = (uVar61 & 0x1fffff) + (lVar51 >> 0x15);
  *(char *)(param_1 + 0x35) = (char)lVar51;
  *(byte *)(param_1 + 0x37) = (byte)((ulong)lVar51 >> 0x10) & 0x1f | (byte)((uint)uVar33 << 5);
  *(char *)(param_1 + 0x38) = (char)(uVar33 >> 3);
  *(char *)(param_1 + 0x39) = (char)(uVar33 >> 0xb);
  uVar53 = (uVar53 & 0x1fffff) + ((long)uVar33 >> 0x15);
  uVar56 = (uVar7 & 0x1fffff) + ((long)uVar53 >> 0x15);
  *(byte *)(param_1 + 0x3a) = (byte)((uint)uVar33 >> 0x13) & 3 | (byte)((uint)uVar53 << 2);
  *(char *)(param_1 + 0x3b) = (char)(uVar53 >> 6);
  *(byte *)(param_1 + 0x3c) = (byte)((uint)uVar53 >> 0xe) & 0x7f | (byte)((int)uVar56 << 7);
  *(char *)(param_1 + 0x3d) = (char)((uint)((int)((long)uVar53 >> 0x15) + (int)uVar7) >> 1);
  *(char *)(param_1 + 0x3e) = (char)(uVar56 >> 9);
  *(char *)(param_1 + 0x3f) = (char)(uVar56 >> 0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return (char *)0x1;
  }
  ___stack_chk_fail();
  pcStack_358 = FUN_10ae245a8;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3b8 = *(undefined8 *)(uVar38 + 0x58);
  uStack_3c0 = *(undefined8 *)(uVar38 + 0x50);
  uStack_3b0 = *(undefined8 *)(uVar38 + 0x60);
  uStack_3a8 = *(undefined8 *)(uVar38 + 0x68);
  uStack_3a0 = *(undefined8 *)(uVar38 + 0x70);
  lStack_368 = param_1;
  puStack_360 = &stack0xfffffffffffffff0;
  func_0x000107c34f5c(abStack_3e8,&uStack_3c0);
  func_0x000107c34f60(&uStack_3c0,uVar38,abStack_3e8);
  pbVar18 = abStack_3e8;
  func_0x000107c34f60(auStack_410,uVar38 + 0x28);
  func_0x000107c34f58(lVar22,auStack_410);
  pcVar13 = acStack_398;
  pbVar15 = (byte *)&uStack_3c0;
  func_0x000107c34f58();
  *(byte *)(lVar22 + 0x1f) = *(byte *)(lVar22 + 0x1f) ^ acStack_398[0] << 7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return pcVar13;
  }
  ___stack_chk_fail();
  pcStack_418 = FUN_10ae24660;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar16 = pbVar15;
  lStack_470 = lVar60;
  lStack_468 = lVar58;
  lStack_460 = lVar45;
  uStack_458 = uVar1;
  uStack_450 = uVar5;
  uStack_448 = uVar39;
  lStack_440 = lVar41;
  lStack_438 = lVar47;
  lStack_430 = lVar22;
  uStack_428 = uVar38;
  ppuStack_420 = &puStack_360;
  if (pbVar18[0x3f] < 0x20) {
    auStack_b90[0] = *puVar20;
    auStack_b90[1] = puVar20[1];
    auStack_b90[2] = puVar20[2];
    auStack_b90[3] = puVar20[3] & 0x7fffffffffffffff;
    func_0x000107c2b258(&lStack_fa8,auStack_b90);
    lStack_f70 = 0;
    lStack_f78 = 0;
    lStack_f60 = 0;
    lStack_f68 = 0;
    uStack_f80 = 1;
    func_0x000107c2b274(&uStack_cd0,&lStack_fa8);
    func_0x000107c34f60(&lStack_f30,&uStack_cd0,&UNK_10e5182d0);
    uVar33 = uStack_cc8 + (uStack_cd0 + 0xfffffffffffd9 >> 0x33) + 0xffffffffffffe;
    uVar38 = uStack_cc0 + (uVar33 >> 0x33) + 0xffffffffffffe;
    uVar53 = uStack_cb8 + (uVar38 >> 0x33) + 0xffffffffffffe;
    uVar56 = uStack_cb0 + (uVar53 >> 0x33) + 0xffffffffffffe;
    uVar32 = (uStack_cd0 + 0xfffffffffffd9 & 0x7ffffffffffff) + (uVar56 >> 0x33) * 0x13;
    uVar33 = (uVar33 & 0x7ffffffffffff) + (uVar32 >> 0x33);
    uVar32 = uVar32 & 0x7ffffffffffff;
    uVar61 = uVar33 & 0x7ffffffffffff;
    lVar51 = (uVar38 & 0x7ffffffffffff) + (uVar33 >> 0x33);
    uVar53 = uVar53 & 0x7ffffffffffff;
    uVar56 = uVar56 & 0x7ffffffffffff;
    lStack_c30 = lStack_f30 + 1;
    lStack_c20 = lStack_f20;
    lStack_c28 = lStack_f28;
    lStack_c10 = lStack_f10;
    lStack_c18 = lStack_f18;
    uStack_db0 = uVar32;
    uStack_da8 = uVar61;
    lStack_da0 = lVar51;
    uStack_d98 = uVar53;
    uStack_d90 = uVar56;
    func_0x000107c34f60(&uStack_cd0,&uStack_db0,&lStack_c30);
    func_0x000107c2b274(auStack_b90,&uStack_cd0);
    func_0x000107c2b274(abStack_588,auStack_b90);
    func_0x000107c2b274(abStack_588,abStack_588);
    func_0x000107c34f60(abStack_588,&uStack_cd0,abStack_588);
    func_0x000107c34f60(auStack_b90,auStack_b90,abStack_588);
    func_0x000107c2b274(auStack_b90,auStack_b90);
    func_0x000107c34f60(auStack_b90,abStack_588,auStack_b90);
    func_0x000107c2b274(abStack_588,auStack_b90);
    iVar42 = 4;
    do {
      func_0x000107c2b274(abStack_588,abStack_588);
      iVar42 = iVar42 + -1;
    } while (iVar42 != 0);
    func_0x000107c34f60(auStack_b90,abStack_588,auStack_b90);
    func_0x000107c2b274(abStack_588,auStack_b90);
    iVar42 = 9;
    do {
      func_0x000107c2b274(abStack_588,abStack_588);
      iVar42 = iVar42 + -1;
    } while (iVar42 != 0);
    func_0x000107c34f60(abStack_588,abStack_588,auStack_b90);
    func_0x000107c2b274(acStack_688,abStack_588);
    iVar42 = 0x13;
    do {
      func_0x000107c2b274(acStack_688,acStack_688);
      iVar42 = iVar42 + -1;
    } while (iVar42 != 0);
    func_0x000107c34f60(abStack_588,acStack_688,abStack_588);
    func_0x000107c2b274(abStack_588,abStack_588);
    iVar42 = 9;
    do {
      func_0x000107c2b274(abStack_588,abStack_588);
      iVar42 = iVar42 + -1;
    } while (iVar42 != 0);
    func_0x000107c34f60(auStack_b90,abStack_588,auStack_b90);
    func_0x000107c2b274(abStack_588,auStack_b90);
    iVar42 = 0x31;
    do {
      func_0x000107c2b274(abStack_588,abStack_588);
      iVar42 = iVar42 + -1;
    } while (iVar42 != 0);
    func_0x000107c34f60(abStack_588,abStack_588,auStack_b90);
    func_0x000107c2b274(acStack_688,abStack_588);
    iVar42 = 99;
    do {
      func_0x000107c2b274(acStack_688,acStack_688);
      iVar42 = iVar42 + -1;
    } while (iVar42 != 0);
    func_0x000107c34f60(abStack_588,acStack_688,abStack_588);
    func_0x000107c2b274(abStack_588,abStack_588);
    iVar42 = 0x31;
    do {
      func_0x000107c2b274(abStack_588,abStack_588);
      iVar42 = iVar42 + -1;
    } while (iVar42 != 0);
    func_0x000107c34f60(auStack_b90,abStack_588,auStack_b90);
    func_0x000107c2b274(auStack_b90,auStack_b90);
    func_0x000107c2b274(auStack_b90,auStack_b90);
    func_0x000107c34f60(&uStack_fd0,auStack_b90,&uStack_cd0);
    func_0x000107c34f60(&uStack_fd0,&uStack_fd0,&uStack_db0);
    func_0x000107c2b274(&lStack_f30,&uStack_fd0);
    pbVar16 = (byte *)&lStack_f30;
    func_0x000107c34f60(&lStack_f30,pbVar16,&lStack_c30);
    lStack_1070 = (lStack_f30 - uVar32) + 0xfffffffffffda;
    lStack_1068 = (lStack_f28 - uVar61) + 0xffffffffffffe;
    lStack_1060 = (lStack_f20 - lVar51) + 0xffffffffffffe;
    lStack_1058 = (lStack_f18 - uVar53) + 0xffffffffffffe;
    lStack_1050 = (lStack_f10 - uVar56) + 0xffffffffffffe;
    iVar42 = (int)&lStack_1070;
    FUN_10ae22f44();
    if (iVar42 != 0) {
      lStack_1070 = lStack_f30 + uVar32;
      lStack_1068 = lStack_f28 + uVar61;
      lStack_1060 = lStack_f20 + lVar51;
      lStack_1058 = lStack_f18 + uVar53;
      lStack_1050 = lStack_f10 + uVar56;
      iVar42 = (int)&lStack_1070;
      FUN_10ae22f44();
      if (iVar42 != 0) goto LAB_10ae24c88;
      func_0x000107c34f60(&uStack_fd0,&uStack_fd0,&UNK_10e5182f8);
    }
    func_0x000107c34f58(auStack_b90,&uStack_fd0);
    if (((byte)auStack_b90[0] & 1) != *(byte *)((long)puVar20 + 0x1f) >> 7) {
      uVar33 = ((0xfffffffffffda - uStack_fd0 >> 0x33) - uStack_fc8) + 0xffffffffffffe;
      uVar38 = ((uVar33 >> 0x33) - lStack_fc0) + 0xffffffffffffe;
      uStack_fb8 = ((uVar38 >> 0x33) - uStack_fb8) + 0xffffffffffffe;
      uStack_fb0 = ((uStack_fb8 >> 0x33) - uStack_fb0) + 0xffffffffffffe;
      uStack_fd0 = (0xfffffffffffda - uStack_fd0 & 0x7ffffffffffff) + (uStack_fb0 >> 0x33) * 0x13;
      uVar33 = (uVar33 & 0x7ffffffffffff) + (uStack_fd0 >> 0x33);
      uStack_fd0 = uStack_fd0 & 0x7ffffffffffff;
      uStack_fc8 = uVar33 & 0x7ffffffffffff;
      lStack_fc0 = (uVar38 & 0x7ffffffffffff) + (uVar33 >> 0x33);
      uStack_fb8 = uStack_fb8 & 0x7ffffffffffff;
      uStack_fb0 = uStack_fb0 & 0x7ffffffffffff;
    }
    func_0x000107c34f60(&uStack_f58,&uStack_fd0,&lStack_fa8);
    uVar33 = ((0xfffffffffffda - uStack_fd0 >> 0x33) - uStack_fc8) + 0xffffffffffffe;
    uVar38 = ((uVar33 >> 0x33) - lStack_fc0) + 0xffffffffffffe;
    uStack_fb8 = ((uVar38 >> 0x33) - uStack_fb8) + 0xffffffffffffe;
    uStack_fb0 = ((uStack_fb8 >> 0x33) - uStack_fb0) + 0xffffffffffffe;
    uStack_fd0 = (0xfffffffffffda - uStack_fd0 & 0x7ffffffffffff) + (uStack_fb0 >> 0x33) * 0x13;
    uVar33 = (uVar33 & 0x7ffffffffffff) + (uStack_fd0 >> 0x33);
    uStack_fd0 = uStack_fd0 & 0x7ffffffffffff;
    uStack_fc8 = uVar33 & 0x7ffffffffffff;
    lStack_fc0 = (uVar38 & 0x7ffffffffffff) + (uVar33 >> 0x33);
    uStack_fb8 = uStack_fb8 & 0x7ffffffffffff;
    uVar33 = ((0xfffffffffffda - uStack_f58 >> 0x33) - uStack_f50) + 0xffffffffffffe;
    uVar38 = ((uVar33 >> 0x33) - lStack_f48) + 0xffffffffffffe;
    uStack_f40 = ((uVar38 >> 0x33) - uStack_f40) + 0xffffffffffffe;
    uStack_fb0 = uStack_fb0 & 0x7ffffffffffff;
    uStack_f38 = ((uStack_f40 >> 0x33) - uStack_f38) + 0xffffffffffffe;
    uStack_f58 = (0xfffffffffffda - uStack_f58 & 0x7ffffffffffff) + (uStack_f38 >> 0x33) * 0x13;
    uVar33 = (uVar33 & 0x7ffffffffffff) + (uStack_f58 >> 0x33);
    uStack_f58 = uStack_f58 & 0x7ffffffffffff;
    uStack_f50 = uVar33 & 0x7ffffffffffff;
    lStack_f48 = (uVar38 & 0x7ffffffffffff) + (uVar33 >> 0x33);
    uStack_f40 = uStack_f40 & 0x7ffffffffffff;
    uStack_f38 = uStack_f38 & 0x7ffffffffffff;
    uVar81 = *(undefined8 *)(pbVar18 + 8);
    uVar80 = *(undefined8 *)pbVar18;
    uVar83 = *(undefined8 *)(pbVar18 + 0x18);
    uVar82 = *(undefined8 *)(pbVar18 + 0x10);
    auStack_ff0[0] = *(ulong *)(pbVar18 + 0x20);
    auStack_ff0[3] = *(ulong *)(pbVar18 + 0x38);
    auStack_ff0[1] = *(undefined8 *)(pbVar18 + 0x28);
    auStack_ff0[2] = *(undefined8 *)(pbVar18 + 0x30);
    pbVar16 = pbVar18;
    if (auStack_ff0[3] < 0x1000000000000001) {
      uVar38 = 0x1000000000000000;
      lVar51 = 0x10;
      uVar33 = auStack_ff0[3];
      do {
        if (uVar33 < uVar38) {
          uStack_da8 = 0xbb67ae8584caa73b;
          uStack_db0 = 0x6a09e667f3bcc908;
          uStack_d98 = 0xa54ff53a5f1d36f1;
          lStack_da0 = 0x3c6ef372fe94f82b;
          uStack_d88 = 0x9b05688c2b3e6c1f;
          uStack_d90 = 0x510e527fade682d1;
          uStack_d78 = 0x5be0cd19137e2179;
          uStack_d80 = 0x1f83d9abfb41bd6b;
          uStack_d68 = 0;
          uStack_d70 = 0;
          uStack_ce0 = 0x4000000000;
          FUN_10ae35d48(&uStack_db0,pbVar18,0x20);
          FUN_10ae35d48(&uStack_db0,puVar20,0x20);
          FUN_10ae35d48(&uStack_db0,pcVar13,pbVar15);
          FUN_10ae3c914(auStack_df0,&uStack_db0);
          FUN_10ae231f8(auStack_df0);
          FUN_10ae25530(abStack_588,auStack_df0);
          FUN_10ae25530(acStack_688,auStack_ff0);
          FUN_10ae22fcc(auStack_b90,&uStack_fd0);
          uStack_cc8 = uStack_fc8;
          uStack_cd0 = uStack_fd0;
          uStack_cb8 = uStack_fb8;
          uStack_cc0 = lStack_fc0;
          lStack_ca0 = lStack_fa0;
          lStack_ca8 = lStack_fa8;
          lStack_c90 = lStack_f90;
          lStack_c98 = lStack_f98;
          uStack_cb0 = uStack_fb0;
          lStack_c88 = lStack_f88;
          lStack_c78 = lStack_f78;
          uStack_c80 = uStack_f80;
          lStack_c68 = lStack_f68;
          lStack_c70 = lStack_f70;
          lStack_c60 = lStack_f60;
          func_0x000107c2b264(&lStack_c30,&uStack_cd0);
          func_0x000107c2b254(&lStack_f30,&lStack_c30);
          FUN_10ae23040(&lStack_c30,&lStack_f30,auStack_b90);
          func_0x000107c2b254(&uStack_cd0,&lStack_c30);
          FUN_10ae22fcc(auStack_af0,&uStack_cd0);
          FUN_10ae23040(&lStack_c30,&lStack_f30,auStack_af0);
          func_0x000107c2b254(&uStack_cd0,&lStack_c30);
          FUN_10ae22fcc(auStack_a50,&uStack_cd0);
          FUN_10ae23040(&lStack_c30,&lStack_f30,auStack_a50);
          func_0x000107c2b254(&uStack_cd0,&lStack_c30);
          FUN_10ae22fcc(auStack_9b0,&uStack_cd0);
          FUN_10ae23040(&lStack_c30,&lStack_f30,auStack_9b0);
          func_0x000107c2b254(&uStack_cd0,&lStack_c30);
          FUN_10ae22fcc(auStack_910,&uStack_cd0);
          FUN_10ae23040(&lStack_c30,&lStack_f30,auStack_910);
          func_0x000107c2b254(&uStack_cd0,&lStack_c30);
          FUN_10ae22fcc(auStack_870,&uStack_cd0);
          FUN_10ae23040(&lStack_c30,&lStack_f30,auStack_870);
          func_0x000107c2b254(&uStack_cd0,&lStack_c30);
          FUN_10ae22fcc(auStack_7d0,&uStack_cd0);
          FUN_10ae23040(&lStack_c30,&lStack_f30,auStack_7d0);
          func_0x000107c2b254(&uStack_cd0,&lStack_c30);
          FUN_10ae22fcc(auStack_730,&uStack_cd0);
          uStack_1038 = 0;
          uStack_1040 = 0;
          uStack_1028 = 0;
          uStack_1030 = 0;
          lStack_1058 = 0;
          lStack_1060 = 0;
          lStack_1050 = 0;
          lStack_1068 = 0;
          lStack_1070 = 0;
          uStack_1048 = 1;
          uStack_1010 = 0;
          uStack_1018 = 0;
          uStack_1000 = 0;
          uStack_1008 = 0;
          uVar33 = 0xff;
          uStack_1020 = 1;
          goto LAB_10ae24f08;
        }
        if (lVar51 == -8) break;
        uVar33 = *(ulong *)((long)auStack_ff0 + lVar51);
        uVar38 = *(ulong *)(&UNK_10e518348 + lVar51);
        lVar51 = lVar51 + -8;
      } while (uVar33 <= uVar38);
    }
  }
LAB_10ae24c88:
  pcVar13 = (char *)0x0;
LAB_10ae24c8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return pcVar13;
  }
  ___stack_chk_fail();
  uVar33 = 0;
  do {
    pcVar13[uVar33] = pbVar16[uVar33 >> 3 & 0x1fffffff] >> (uVar33 & 7) & 1;
    uVar33 = uVar33 + 1;
  } while (uVar33 != 0x100);
  uVar33 = 0;
  uVar38 = 0xfe;
  lVar51 = 1;
  do {
    if ((uVar33 < 0xff) && (pcVar13[uVar33] != '\0')) {
      uVar53 = uVar38;
      if (4 < uVar38) {
        uVar53 = 5;
      }
      lVar27 = 1;
      uVar56 = uVar33;
      lVar22 = lVar51;
      do {
        if (pcVar13[lVar22] != 0) {
          iVar8 = (int)pcVar13[lVar22] << (ulong)((uint)lVar27 & 0x1f);
          iVar42 = iVar8 + pcVar13[uVar33];
          if (iVar42 < 0x10) {
            pcVar13[uVar33] = (char)iVar42;
            pcVar13[lVar22] = '\0';
          }
          else {
            iVar8 = pcVar13[uVar33] - iVar8;
            if (iVar8 < -0xf) break;
            pcVar13[uVar33] = (char)iVar8;
            uVar32 = uVar56;
            do {
              if (pcVar13[uVar32 + 1] == '\0') {
                pcVar13[uVar32 + 1] = '\x01';
                break;
              }
              pcVar13[uVar32 + 1] = '\0';
              uVar32 = uVar32 + 1;
            } while (uVar32 != 0xff);
          }
        }
        lVar22 = lVar22 + 1;
        uVar56 = uVar56 + 1;
        bVar10 = lVar27 != uVar53 + 1;
        lVar27 = lVar27 + 1;
      } while (bVar10);
    }
    uVar33 = uVar33 + 1;
    lVar51 = lVar51 + 1;
    uVar38 = uVar38 - 1;
    if (uVar33 == 0x100) {
      return pcVar13;
    }
  } while( true );
  while (uVar43 = (int)uVar33 - 1, uVar33 = (ulong)uVar43, uVar43 != 0xffffffff) {
LAB_10ae24f08:
    if ((abStack_588[uVar33] != 0) || (acStack_688[uVar33] != '\0')) {
      if (-1 < (int)uVar33) {
        do {
          func_0x000107c2b264(&lStack_c30,&lStack_1070);
          bVar78 = abStack_588[uVar33];
          if ((char)bVar78 < '\x01') {
            if ((char)bVar78 < '\0') {
              func_0x000107c2b254(&uStack_cd0,&lStack_c30);
              uVar38 = (ulong)(-(uint)bVar78 >> 1 & 0x7f);
              lVar51 = uVar38 * 0xa0;
              lStack_c30 = uStack_cd0 + lStack_ca8;
              lStack_c28 = uStack_cc8 + lStack_ca0;
              lStack_c20 = uStack_cc0 + lStack_c98;
              lStack_c18 = uStack_cb8 + lStack_c90;
              lStack_c10 = uStack_cb0 + lStack_c88;
              lStack_c08 = (lStack_ca8 + 0xfffffffffffda) - uStack_cd0;
              lStack_c00 = (lStack_ca0 - uStack_cc8) + 0xffffffffffffe;
              lStack_bf8 = (lStack_c98 - uStack_cc0) + 0xffffffffffffe;
              lStack_bf0 = (lStack_c90 - uStack_cb8) + 0xffffffffffffe;
              lStack_be8 = (lStack_c88 - uStack_cb0) + 0xffffffffffffe;
              func_0x000107c34f60(&lStack_e68,&lStack_c30,auStack_b68 + lVar51);
              func_0x000107c34f60(&lStack_e40,&lStack_c08,auStack_b90 + uVar38 * 0x14);
              func_0x000107c34f60(&lStack_e90,auStack_b18 + lVar51,auStack_c58);
              func_0x000107c34f60(&uStack_e18,&uStack_c80,auStack_b40 + lVar51);
              lStack_c30 = (lStack_e68 + 0xfffffffffffda) - lStack_e40;
              lStack_c28 = (lStack_e60 - lStack_e38) + 0xffffffffffffe;
              lStack_c20 = (lStack_e58 - lStack_e30) + 0xffffffffffffe;
              lStack_c18 = (lStack_e50 - lStack_e28) + 0xffffffffffffe;
              lStack_c10 = (lStack_e48 - lStack_e20) + 0xffffffffffffe;
              lStack_c08 = lStack_e40 + lStack_e68;
              lStack_c00 = lStack_e38 + lStack_e60;
              lStack_bf8 = lStack_e30 + lStack_e58;
              lStack_bf0 = lStack_e28 + lStack_e50;
              lStack_be8 = lStack_e20 + lStack_e48;
              uVar38 = lStack_e10 * 2 + ((uStack_e18 & 0x7fffffffffffffff) >> 0x32);
              uVar53 = (uVar38 >> 0x33) + lStack_e08 * 2;
              uVar56 = (uVar53 >> 0x33) + lStack_e00 * 2;
              uVar32 = (uVar56 >> 0x33) + lStack_df8 * 2;
              uVar61 = (uStack_e18 & 0x3ffffffffffff) * 2 + (uVar32 >> 0x33) * 0x13;
              uVar38 = (uVar38 & 0x7ffffffffffff) + (uVar61 >> 0x33);
              uVar61 = uVar61 & 0x7ffffffffffff;
              uVar39 = uVar38 & 0x7ffffffffffff;
              lStack_ba8 = (uVar53 & 0x7ffffffffffff) + (uVar38 >> 0x33);
              uVar56 = uVar56 & 0x7ffffffffffff;
              uVar32 = uVar32 & 0x7ffffffffffff;
              lStack_be0 = (uVar61 - lStack_e90) + 0xfffffffffffda;
              lStack_bd8 = (uVar39 - lStack_e88) + 0xffffffffffffe;
              lStack_bd0 = (lStack_ba8 - lStack_e80) + 0xffffffffffffe;
              lStack_bc8 = (uVar56 - lStack_e78) + 0xffffffffffffe;
              lStack_bc0 = (uVar32 - lStack_e70) + 0xffffffffffffe;
              lStack_bb8 = uVar61 + lStack_e90;
              lStack_bb0 = uVar39 + lStack_e88;
              lStack_ba8 = lStack_ba8 + lStack_e80;
              lStack_ba0 = lStack_e78 + uVar56;
              lStack_b98 = lStack_e70 + uVar32;
            }
          }
          else {
            func_0x000107c2b254(&uStack_cd0,&lStack_c30);
            FUN_10ae23040(&lStack_c30,&uStack_cd0,auStack_b90 + (ulong)(bVar78 >> 1) * 0x14);
          }
          uVar43 = (uint)acStack_688[uVar33];
          if (acStack_688[uVar33] < '\x01') {
            if ((int)uVar43 < 0) {
              func_0x000107c2b254(&uStack_cd0,&lStack_c30);
              lVar51 = (ulong)(-uVar43 >> 1 & 0x7f) * 0x78;
              lStack_c30 = uStack_cd0 + lStack_ca8;
              lStack_c28 = uStack_cc8 + lStack_ca0;
              lStack_c20 = uStack_cc0 + lStack_c98;
              lStack_c18 = uStack_cb8 + lStack_c90;
              lStack_c10 = uStack_cb0 + lStack_c88;
              lStack_c08 = (lStack_ca8 + 0xfffffffffffda) - uStack_cd0;
              lStack_c00 = (lStack_ca0 - uStack_cc8) + 0xffffffffffffe;
              lStack_bf8 = (lStack_c98 - uStack_cc0) + 0xffffffffffffe;
              lStack_bf0 = (lStack_c90 - uStack_cb8) + 0xffffffffffffe;
              lStack_be8 = (lStack_c88 - uStack_cb0) + 0xffffffffffffe;
              func_0x000107c34f60(&lStack_e40,&lStack_c30,&UNK_10e51fb90 + lVar51);
              func_0x000107c34f60(&uStack_e18,&lStack_c08,&UNK_10e51fb68 + lVar51);
              func_0x000107c34f60(&lStack_e68,&UNK_10e51fbb8 + lVar51,auStack_c58);
              lStack_c30 = (lStack_e40 + 0xfffffffffffda) - uStack_e18;
              lStack_c28 = (lStack_e38 - lStack_e10) + 0xffffffffffffe;
              lStack_c20 = (lStack_e30 - lStack_e08) + 0xffffffffffffe;
              lStack_c18 = (lStack_e28 - lStack_e00) + 0xffffffffffffe;
              lStack_c10 = (lStack_e20 - lStack_df8) + 0xffffffffffffe;
              lStack_c08 = uStack_e18 + lStack_e40;
              lStack_c00 = lStack_e10 + lStack_e38;
              lStack_bf8 = lStack_e08 + lStack_e30;
              lStack_bf0 = lStack_e00 + lStack_e28;
              lStack_be8 = lStack_df8 + lStack_e20;
              uVar38 = lStack_c78 * 2 + ((uStack_c80 & 0x7fffffffffffffff) >> 0x32);
              uVar53 = (uVar38 >> 0x33) + lStack_c70 * 2;
              uVar56 = (uVar53 >> 0x33) + lStack_c68 * 2;
              uVar32 = (uVar56 >> 0x33) + lStack_c60 * 2;
              uVar61 = (uStack_c80 & 0x3ffffffffffff) * 2 + (uVar32 >> 0x33) * 0x13;
              uVar38 = (uVar38 & 0x7ffffffffffff) + (uVar61 >> 0x33);
              uVar61 = uVar61 & 0x7ffffffffffff;
              uVar39 = uVar38 & 0x7ffffffffffff;
              lStack_ba8 = (uVar53 & 0x7ffffffffffff) + (uVar38 >> 0x33);
              uVar56 = uVar56 & 0x7ffffffffffff;
              uVar32 = uVar32 & 0x7ffffffffffff;
              lStack_be0 = (uVar61 + 0xfffffffffffda) - lStack_e68;
              lStack_bd8 = (uVar39 - lStack_e60) + 0xffffffffffffe;
              lStack_bd0 = (lStack_ba8 - lStack_e58) + 0xffffffffffffe;
              lStack_bc8 = (uVar56 - lStack_e50) + 0xffffffffffffe;
              lStack_bc0 = (uVar32 - lStack_e48) + 0xffffffffffffe;
              lStack_bb8 = lStack_e68 + uVar61;
              lStack_bb0 = lStack_e60 + uVar39;
              lStack_ba8 = lStack_e58 + lStack_ba8;
              lStack_ba0 = lStack_e50 + uVar56;
              lStack_b98 = lStack_e48 + uVar32;
            }
          }
          else {
            func_0x000107c2b254(&uStack_cd0,&lStack_c30);
            func_0x000107c2b25c(&lStack_c30,&uStack_cd0,
                                &UNK_10e51fb68 + (ulong)(uVar43 >> 1 & 0x7f) * 0x78);
          }
          func_0x000107c2b250(&lStack_1070,&lStack_c30);
          bVar10 = 0 < (long)uVar33;
          uVar33 = uVar33 - 1;
        } while (bVar10);
      }
      break;
    }
  }
  func_0x000107c34f5c(auStack_b90,&uStack_1020);
  func_0x000107c34f60(abStack_588,&lStack_1070,auStack_b90);
  func_0x000107c34f60(acStack_688,&uStack_1048,auStack_b90);
  func_0x000107c34f58(&uStack_cd0,acStack_688);
  pbVar16 = abStack_588;
  func_0x000107c34f58(&lStack_c30);
  uVar33 = uStack_cb8;
  bVar78 = uStack_cb8._7_1_ ^ (char)lStack_c30 << 7;
  uStack_cb8 = CONCAT17(bVar78,(undefined7)uStack_cb8);
  lVar51 = uStack_cb8;
  uStack_cb8._0_1_ = (byte)uVar33;
  uStack_cb8._1_1_ = SUB81(uVar33,1);
  uStack_cb8._2_1_ = SUB81(uVar33,2);
  uStack_cb8._3_1_ = SUB81(uVar33,3);
  uStack_cb8._4_1_ = SUB81(uVar33,4);
  uStack_cb8._5_1_ = SUB81(uVar33,5);
  uStack_cb8._6_1_ = SUB81(uVar33,6);
  bVar63 = (byte)uVar82 ^ (byte)uStack_cc0 | (byte)uVar80 ^ (byte)uStack_cd0;
  bVar64 = (byte)((ulong)uVar82 >> 8) ^ uStack_cc0._1_1_ |
           (byte)((ulong)uVar80 >> 8) ^ (byte)(uStack_cd0 >> 8);
  bVar65 = (byte)((ulong)uVar82 >> 0x10) ^ uStack_cc0._2_1_ |
           (byte)((ulong)uVar80 >> 0x10) ^ (byte)(uStack_cd0 >> 0x10);
  bVar66 = (byte)((ulong)uVar82 >> 0x18) ^ uStack_cc0._3_1_ |
           (byte)((ulong)uVar80 >> 0x18) ^ (byte)(uStack_cd0 >> 0x18);
  bVar67 = (byte)((ulong)uVar82 >> 0x20) ^ uStack_cc0._4_1_ |
           (byte)((ulong)uVar80 >> 0x20) ^ (byte)(uStack_cd0 >> 0x20);
  bVar68 = (byte)((ulong)uVar82 >> 0x28) ^ uStack_cc0._5_1_ |
           (byte)((ulong)uVar80 >> 0x28) ^ (byte)(uStack_cd0 >> 0x28);
  bVar69 = (byte)((ulong)uVar82 >> 0x30) ^ uStack_cc0._6_1_ |
           (byte)((ulong)uVar80 >> 0x30) ^ (byte)(uStack_cd0 >> 0x30);
  bVar70 = (byte)((ulong)uVar82 >> 0x38) ^ uStack_cc0._7_1_ |
           (byte)((ulong)uVar80 >> 0x38) ^ (byte)(uStack_cd0 >> 0x38);
  bVar71 = (byte)uVar83 ^ (byte)uStack_cb8 | (byte)uVar81 ^ (byte)uStack_cc8;
  bVar72 = (byte)((ulong)uVar83 >> 8) ^ uStack_cb8._1_1_ |
           (byte)((ulong)uVar81 >> 8) ^ (byte)(uStack_cc8 >> 8);
  bVar73 = (byte)((ulong)uVar83 >> 0x10) ^ uStack_cb8._2_1_ |
           (byte)((ulong)uVar81 >> 0x10) ^ (byte)(uStack_cc8 >> 0x10);
  bVar74 = (byte)((ulong)uVar83 >> 0x18) ^ uStack_cb8._3_1_ |
           (byte)((ulong)uVar81 >> 0x18) ^ (byte)(uStack_cc8 >> 0x18);
  bVar75 = (byte)((ulong)uVar83 >> 0x20) ^ uStack_cb8._4_1_ |
           (byte)((ulong)uVar81 >> 0x20) ^ (byte)(uStack_cc8 >> 0x20);
  bVar76 = (byte)((ulong)uVar83 >> 0x28) ^ uStack_cb8._5_1_ |
           (byte)((ulong)uVar81 >> 0x28) ^ (byte)(uStack_cc8 >> 0x28);
  bVar77 = (byte)((ulong)uVar83 >> 0x30) ^ uStack_cb8._6_1_ |
           (byte)((ulong)uVar81 >> 0x30) ^ (byte)(uStack_cc8 >> 0x30);
  bVar78 = (byte)((ulong)uVar83 >> 0x38) ^ bVar78 |
           (byte)((ulong)uVar81 >> 0x38) ^ (byte)(uStack_cc8 >> 0x38);
  auVar79[1] = bVar64;
  auVar79[0] = bVar63;
  auVar79[2] = bVar65;
  auVar79[3] = bVar66;
  auVar79[4] = bVar67;
  auVar79[5] = bVar68;
  auVar79[6] = bVar69;
  auVar79[7] = bVar70;
  auVar79[8] = bVar71;
  auVar79[9] = bVar72;
  auVar79[10] = bVar73;
  auVar79[0xb] = bVar74;
  auVar79[0xc] = bVar75;
  auVar79[0xd] = bVar76;
  auVar79[0xe] = bVar77;
  auVar79[0xf] = bVar78;
  auVar9[1] = bVar64;
  auVar9[0] = bVar63;
  auVar9[2] = bVar65;
  auVar9[3] = bVar66;
  auVar9[4] = bVar67;
  auVar9[5] = bVar68;
  auVar9[6] = bVar69;
  auVar9[7] = bVar70;
  auVar9[8] = bVar71;
  auVar9[9] = bVar72;
  auVar9[10] = bVar73;
  auVar9[0xb] = bVar74;
  auVar9[0xc] = bVar75;
  auVar9[0xd] = bVar76;
  auVar9[0xe] = bVar77;
  auVar9[0xf] = bVar78;
  auVar79 = NEON_ext(auVar79,auVar9,8,1);
  uVar33 = CONCAT17(bVar70 | auVar79[7],
                    CONCAT16(bVar69 | auVar79[6],
                             CONCAT15(bVar68 | auVar79[5],
                                      CONCAT14(bVar67 | auVar79[4],
                                               CONCAT13(bVar66 | auVar79[3],
                                                        CONCAT12(bVar65 | auVar79[2],
                                                                 CONCAT11(bVar64 | auVar79[1],
                                                                          bVar63 | auVar79[0])))))))
  ;
  uVar33 = uVar33 | uVar33 >> 0x20;
  uVar43 = (uint)uVar33 | (uint)(uVar33 >> 0x10);
  pcVar13 = (char *)(ulong)(((uVar43 | uVar43 >> 8) & 0xff) == 0);
  uStack_cb8 = lVar51;
  goto LAB_10ae24c8c;
}



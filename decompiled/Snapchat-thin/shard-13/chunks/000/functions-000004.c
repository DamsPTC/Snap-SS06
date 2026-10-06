/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109cd0b74; end: 109cd0be7;  */

long FUN_109cd0b74(long param_1)

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



/* Entry: 109cd0be8; end: 109cd0c1b;  */

long FUN_109cd0be8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109cd0c1c; end: 109cd0c1f;  */

long FUN_109cd0c1c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109cd0c20; end: 109cd0c33;  */

void FUN_109cd0c20(void)

{
  FUN_109cd0be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cd0c34; end: 109cd0c3f;  */

undefined ** FUN_109cd0c34(void)

{
  return &PTR_DAT_110b3c1d8;
}



/* Entry: 109cd0c40; end: 109cd0c8b;  */

void FUN_109cd0c40(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 109cd0c8c; end: 109cd0f07;  */

byte * FUN_109cd0c8c(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  
  uVar9 = *(uint *)(param_1 + 0x28);
  if (uVar9 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar9 = *(uint *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar6 = (ulong)(int)uVar9;
    uVar12 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar9) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar12 | 0x80;
        uVar6 = uVar12 >> 7;
        uVar7 = uVar12 >> 0xe;
        uVar12 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar13 = 8;
    pbVar5 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + lVar13 + -1);
      }
      puVar10 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar10 + 0x17);
      puVar2 = puVar10;
      if (lVar4 < 0) {
        lVar4 = puVar10[1];
        puVar2 = (undefined8 *)*puVar10;
      }
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a709d);
      lVar4 = (long)*(char *)((long)puVar10 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar10[1], 0x7f < lVar4)) ||
         ((*(long *)param_3 - (long)pbVar5) + 0xd < lVar4)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,100,puVar10,pbVar5);
      }
      else {
        pbVar5[0] = 0xa2;
        pbVar5[1] = 6;
        pbVar5[2] = (byte)lVar4;
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          puVar10 = (undefined8 *)*puVar10;
        }
        _memcpy(pbVar5 + 3,puVar10,lVar4);
        param_2 = pbVar5 + 3 + lVar4;
      }
      lVar13 = lVar13 + 8;
      uVar12 = uVar12 - 1;
      pbVar5 = param_2;
    } while (uVar12 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar12 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar13 = *(long *)(uVar12 + 8);
      uVar6 = (ulong)*(uint *)(uVar12 + 0x10);
    }
    else {
      lVar13 = uVar12 + 8;
    }
    uVar9 = (uint)uVar6;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar9) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar9) {
        do {
          iVar11 = (int)pbVar5;
          _memcpy(param_2,lVar13,(long)iVar11);
          uVar9 = (int)uVar6 - iVar11;
          uVar6 = (ulong)uVar9;
          lVar13 = lVar13 + iVar11;
          pbVar5 = *(byte **)param_3;
          pbVar8 = param_2 + iVar11;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar3 + ((int)pbVar8 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            param_2 = pbVar8;
          } while (pbVar5 <= pbVar8);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar9);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar9);
      param_2 = param_2 + (int)uVar9;
    }
    else {
      _memcpy(param_2,lVar13,uVar6 & 0xffffffff);
      param_2 = param_2 + (int)uVar9;
    }
  }
  return param_2;
}



/* Entry: 109cd0f08; end: 109cd0fbf;  */

long FUN_109cd0f08(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  lVar4 = uVar5 << 1;
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar8 = (ulong *)(uVar7 + 7);
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar1 = puVar8;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      lVar4 = uVar2 + lVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar6 + lVar4;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar4;
  return lVar4;
}



/* Entry: 109cd0fc0; end: 109cd10bf;  */

void FUN_109cd0fc0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 109cd10c0; end: 109cd114f;  */

undefined8 * FUN_109cd10c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3c138;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 0x15) {
    FUN_109cd16a4(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  else {
    if (iVar1 != 0x14) {
      return param_1;
    }
    FUN_109cd1604(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  param_1[2] = param_2;
  return param_1;
}



/* Entry: 109cd1150; end: 109cd118b;  */

long FUN_109cd1150(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x000109cd1020(param_1);
  }
  return param_1;
}



/* Entry: 109cd118c; end: 109cd118f;  */

long FUN_109cd118c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x000109cd1020(param_1);
  }
  return param_1;
}



/* Entry: 109cd1190; end: 109cd11a3;  */

void FUN_109cd1190(void)

{
  FUN_109cd1150();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cd11a4; end: 109cd11af;  */

undefined ** FUN_109cd11a4(void)

{
  return &PTR_DAT_110b3c238;
}



/* Entry: 109cd11b0; end: 109cd11e7;  */

void FUN_109cd11b0(long param_1)

{
  ulong *puVar1;
  
  func_0x000109cd1020();
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



/* Entry: 109cd11e8; end: 109cd1343;  */

long * FUN_109cd11e8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  plVar1 = (long *)(ulong)uVar3;
  plVar4 = plVar1;
  if (uVar3 != 0x14) {
    if (uVar3 != 0x15) goto LAB_109cd1240;
    plVar4 = (long *)0x2c;
  }
  func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x10),
                      *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)plVar4),param_2,param_3);
  param_2 = plVar1;
LAB_109cd1240:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar1 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar2 + (long)((int)plVar4 - (int)plVar1));
            plVar1 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar1 <= plVar4);
          lVar7 = (long)plVar1 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 109cd1344; end: 109cd13cf;  */

void FUN_109cd1344(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0x15) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109cd0f08();
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 0x14) {
      iVar1 = 0;
      goto LAB_109cd13a0;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109cd0b74();
  }
  iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 2;
LAB_109cd13a0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 109cd13d0; end: 109cd13d3;  */

/* WARNING: Possible PIC construction at 0x000109cd1474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cd1478) */

void FUN_109cd13d0(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong *unaff_x19;
  ulong *puVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar7 = (ulong *)(param_1 + 8);
  uVar8 = *puVar7;
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000109cd1020(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    if (iVar3 == 0x15) {
      if (iVar4 == 0x15) {
        ppuVar2 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 0x15) {
          ppuVar2 = &PTR_PTR_1132fe290;
        }
        func_0x000109cd0fc0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
      }
      else {
        FUN_109cd16a4(uVar8,*(undefined8 *)(param_2 + 0x10));
LAB_109cd14c4:
        *(ulong *)(param_1 + 0x10) = uVar8;
      }
    }
    else if (iVar3 == 0x14) {
      if (iVar4 != 0x14) {
        FUN_109cd1604(uVar8,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109cd14c4;
      }
      lVar6 = *(long *)(param_1 + 0x10);
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 0x14) {
        ppuVar2 = &PTR_PTR_1132fe278;
      }
      if (*(int *)(ppuVar2 + 2) != 0) {
        *(int *)(lVar6 + 0x10) = *(int *)(ppuVar2 + 2);
      }
      if (((ulong)ppuVar2[1] & 1) != 0) {
        unaff_x30 = 0x109cd1478;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar5 = (ulong *)(lVar6 + 8);
        unaff_x19 = puVar7;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar5 = puVar7;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar5 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109cd13d4; end: 109cd150f;  */

/* WARNING: Possible PIC construction at 0x000109cd1474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cd1478) */

void FUN_109cd13d4(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong *unaff_x19;
  ulong *puVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar7 = (ulong *)(param_1 + 8);
  uVar8 = *puVar7;
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000109cd1020(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    if (iVar3 == 0x15) {
      if (iVar4 == 0x15) {
        ppuVar2 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 0x15) {
          ppuVar2 = &PTR_PTR_1132fe290;
        }
        func_0x000109cd0fc0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
      }
      else {
        FUN_109cd16a4(uVar8,*(undefined8 *)(param_2 + 0x10));
LAB_109cd14c4:
        *(ulong *)(param_1 + 0x10) = uVar8;
      }
    }
    else if (iVar3 == 0x14) {
      if (iVar4 != 0x14) {
        FUN_109cd1604(uVar8,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109cd14c4;
      }
      lVar6 = *(long *)(param_1 + 0x10);
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 0x14) {
        ppuVar2 = &PTR_PTR_1132fe278;
      }
      if (*(int *)(ppuVar2 + 2) != 0) {
        *(int *)(lVar6 + 0x10) = *(int *)(ppuVar2 + 2);
      }
      if (((ulong)ppuVar2[1] & 1) != 0) {
        unaff_x30 = 0x109cd1478;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar5 = (ulong *)(lVar6 + 8);
        unaff_x19 = puVar7;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar5 = puVar7;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar5 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109cd1510; end: 109cd1527;  */

void FUN_109cd1510(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_FUN_110b3c098;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 109cd1528; end: 109cd1603;  */

void FUN_109cd1528(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110b3c098;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 109cd1604; end: 109cd16a3;  */

undefined8 * FUN_109cd1604(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b3c098;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109cd16a4; end: 109cd17db;  */

undefined8 * FUN_109cd16a4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b3c0e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(puVar1 + 2,param_2 + 0x10);
  }
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 0x28);
  return puVar1;
}



/* Entry: 109cd17dc; end: 109cd1817;  */

long FUN_109cd17dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109cd1818; end: 109cd181b;  */

long FUN_109cd1818(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109cd181c; end: 109cd182f;  */

void FUN_109cd181c(void)

{
  FUN_109cd17dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cd1830; end: 109cd18af;  */

undefined ** FUN_109cd1830(void)

{
  return &PTR_DAT_110b3c328;
}



/* Entry: 109cd18b0; end: 109cd1abb;  */

byte * FUN_109cd18b0(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  
  uVar9 = *(uint *)(param_1 + 0x20);
  if (uVar9 != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
      uVar9 = *(uint *)(param_1 + 0x20);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    pbVar6 = pbVar7;
    uVar5 = uVar9;
    if (0x7f < uVar9) {
      do {
        pbVar7 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar9 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar6 = pbVar7;
        uVar5 = uVar9;
      } while (uVar1 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar9;
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 == 0) goto LAB_109cd194c;
    puVar2 = (undefined8 *)*puVar10;
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_109cd194c;
  }
  func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a70e1);
  pbVar6 = param_3;
  func_0x000107c280a0(param_3,10,puVar10,param_2);
  param_2 = pbVar6;
LAB_109cd194c:
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  pbVar6 = param_2;
  if (lVar3 != 0) {
    pbVar6 = param_3;
    func_0x000107c280a0(param_3,100,uVar4,param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar11 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar11 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar11 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar9 = (uint)uVar11;
    if (*(long *)param_3 - (long)pbVar6 < (long)(int)uVar9) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar6) + 0x10);
      if ((int)pbVar7 < (int)uVar9) {
        do {
          iVar12 = (int)pbVar7;
          _memcpy(pbVar6,lVar3,(long)iVar12);
          uVar9 = (int)uVar11 - iVar12;
          uVar11 = (ulong)uVar9;
          lVar3 = lVar3 + iVar12;
          pbVar7 = *(byte **)param_3;
          pbVar8 = pbVar6 + iVar12;
          do {
            pbVar6 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar6 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar6 + ((int)pbVar8 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            pbVar6 = pbVar8;
          } while (pbVar7 <= pbVar8);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar6);
        } while ((int)pbVar7 < (int)uVar9);
      }
      _memcpy(pbVar6,lVar3,(long)(int)uVar9);
      pbVar6 = pbVar6 + (int)uVar9;
    }
    else {
      _memcpy(pbVar6,lVar3,uVar11 & 0xffffffff);
      pbVar6 = pbVar6 + (int)uVar9;
    }
  }
  return pbVar6;
}



/* Entry: 109cd1abc; end: 109cd1ba3;  */

long FUN_109cd1abc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 109cd1ba4; end: 109cd1c57;  */

void FUN_109cd1ba4(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 109cd1c58; end: 109cd1c5f;  */

void FUN_109cd1c58(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b3c2e8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 109cd1c60; end: 109cd1d0b;  */

void FUN_109cd1c60(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b3c2e8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 109cd1d0c; end: 109cd1e4b;  */

undefined8 * FUN_109cd1d0c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3c3a0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar3 = (ulong *)(param_3 + 0x10);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_2);
    puVar2 = puVar3;
  }
  param_1[2] = puVar2;
  puVar3 = (ulong *)(param_3 + 0x18);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_2);
    puVar2 = puVar3;
  }
  param_1[3] = puVar2;
  puVar3 = (ulong *)(param_3 + 0x20);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_2);
    puVar2 = puVar3;
  }
  param_1[4] = puVar2;
  puVar3 = (ulong *)(param_3 + 0x28);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_2);
    puVar2 = puVar3;
  }
  param_1[5] = puVar2;
  puVar3 = (ulong *)(param_3 + 0x30);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_2);
    puVar2 = puVar3;
  }
  param_1[6] = puVar2;
  puVar3 = (ulong *)(param_3 + 0x38);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_2);
    puVar2 = puVar3;
  }
  param_1[7] = puVar2;
  *(undefined4 *)(param_1 + 10) = 0;
  iVar1 = *(int *)(param_3 + 0x54);
  *(int *)((long)param_1 + 0x54) = iVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  if (iVar1 == 200) {
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x48));
    param_1[9] = param_2;
  }
  return param_1;
}



/* Entry: 109cd1e4c; end: 109cd1eb7;  */

long FUN_109cd1e4c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(int *)(param_1 + 0x54) != 0) {
    func_0x000109cd1cb4(param_1);
  }
  return param_1;
}



/* Entry: 109cd1eb8; end: 109cd1ebb;  */

long FUN_109cd1eb8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(int *)(param_1 + 0x54) != 0) {
    func_0x000109cd1cb4(param_1);
  }
  return param_1;
}



/* Entry: 109cd1ebc; end: 109cd1ecf;  */

void FUN_109cd1ebc(void)

{
  FUN_109cd1e4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cd1ed0; end: 109cd1edb;  */

undefined ** FUN_109cd1ed0(void)

{
  return &PTR_DAT_110b3c3e0;
}



/* Entry: 109cd1edc; end: 109cd203b;  */

void FUN_109cd1edc(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if ((*(ulong *)(param_1 + 0x10) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x20) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x38) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  func_0x000109cd1cb4(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 109cd203c; end: 109cd23af;  */

byte * FUN_109cd203c(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  
  uVar9 = *(uint *)(param_1 + 0x40);
  if (uVar9 != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
      uVar9 = *(uint *)(param_1 + 0x40);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    pbVar6 = pbVar7;
    uVar5 = uVar9;
    if (0x7f < uVar9) {
      do {
        pbVar7 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar9 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar6 = pbVar7;
        uVar5 = uVar9;
      } while (uVar1 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar9;
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)*puVar10;
      goto LAB_109cd20b0;
    }
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_109cd20b0:
      func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a711a);
      pbVar6 = param_3;
      func_0x000107c280a0(param_3,10,puVar10,param_2);
      param_2 = pbVar6;
    }
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)*puVar10;
      goto LAB_109cd2100;
    }
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_109cd2100:
      func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a7150);
      pbVar6 = param_3;
      func_0x000107c280a0(param_3,0x14,puVar10,param_2);
      param_2 = pbVar6;
    }
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)*puVar10;
      goto LAB_109cd2150;
    }
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_109cd2150:
      func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a7195);
      pbVar6 = param_3;
      func_0x000107c280a0(param_3,0x15,puVar10,param_2);
      param_2 = pbVar6;
    }
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)*puVar10;
      goto LAB_109cd21a0;
    }
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_109cd21a0:
      func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a71dd);
      pbVar6 = param_3;
      func_0x000107c280a0(param_3,0x16,puVar10,param_2);
      param_2 = pbVar6;
    }
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 == 0) goto LAB_109cd2218;
    puVar2 = (undefined8 *)*puVar10;
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_109cd2218;
  }
  func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a722a);
  pbVar6 = param_3;
  func_0x000107c280a0(param_3,0x17,puVar10,param_2);
  param_2 = pbVar6;
LAB_109cd2218:
  uVar4 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  pbVar6 = param_2;
  if (lVar3 != 0) {
    pbVar6 = param_3;
    func_0x000107c280a0(param_3,100,uVar4,param_2);
  }
  pbVar7 = pbVar6;
  if (*(int *)(param_1 + 0x54) == 200) {
    pbVar7 = (byte *)0xc8;
    func_0x000107c303cc(200,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x28),pbVar6,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar11 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar11 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar11 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar9 = (uint)uVar11;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar9) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar6 < (int)uVar9) {
        do {
          iVar12 = (int)pbVar6;
          _memcpy(pbVar7,lVar3,(long)iVar12);
          uVar9 = (int)uVar11 - iVar12;
          uVar11 = (ulong)uVar9;
          lVar3 = lVar3 + iVar12;
          pbVar6 = *(byte **)param_3;
          pbVar8 = pbVar7 + iVar12;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar7 + ((int)pbVar8 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar7 = pbVar8;
          } while (pbVar6 <= pbVar8);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar7);
        } while ((int)pbVar6 < (int)uVar9);
      }
      _memcpy(pbVar7,lVar3,(long)(int)uVar9);
      pbVar7 = pbVar7 + (int)uVar9;
    }
    else {
      _memcpy(pbVar7,lVar3,uVar11 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar9;
    }
  }
  return pbVar7;
}



/* Entry: 109cd23b0; end: 109cd260f;  */

long FUN_109cd23b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  lVar4 = lVar2;
  if (lVar2 < 0) {
    lVar4 = *(long *)(uVar1 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar4 = lVar2;
    }
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  uVar1 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x40)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x54) == 200) {
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x000109c68360();
    lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x50) = (int)lVar4;
  return lVar4;
}



/* Entry: 109cd2610; end: 109cd2613;  */

void FUN_109cd2610(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar4,uVar3);
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
  uVar4 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar4,uVar3);
  }
  uVar4 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar4,uVar3);
  }
  uVar4 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar4,uVar3);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  iVar1 = *(int *)(param_2 + 0x54);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x54) == iVar1) {
      if (iVar1 == 200) {
        func_0x000109c683fc(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
      }
    }
    else {
      if (*(int *)(param_1 + 0x54) != 0) {
        func_0x000109cd1cb4(param_1);
      }
      *(int *)(param_1 + 0x54) = iVar1;
      if (iVar1 == 200) {
        func_0x000109c6bab4(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
    }
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



/* Entry: 109cd2614; end: 109cd281b;  */

void FUN_109cd2614(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar4,uVar3);
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
  uVar4 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar4,uVar3);
  }
  uVar4 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar4,uVar3);
  }
  uVar4 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar4,uVar3);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  iVar1 = *(int *)(param_2 + 0x54);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x54) == iVar1) {
      if (iVar1 == 200) {
        func_0x000109c683fc(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
      }
    }
    else {
      if (*(int *)(param_1 + 0x54) != 0) {
        func_0x000109cd1cb4(param_1);
      }
      *(int *)(param_1 + 0x54) = iVar1;
      if (iVar1 == 200) {
        func_0x000109c6bab4(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
    }
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



/* Entry: 109cd281c; end: 109cd2823;  */

void FUN_109cd281c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x58);
  }
  *puVar1 = &PTR_FUN_110b3c3a0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 109cd2824; end: 109cd2883;  */

void FUN_109cd2824(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_FUN_110b3c3a0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 109cd2884; end: 109cd2af3;  */

undefined8 * FUN_109cd2884(undefined8 *param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  iVar4 = 1;
  FUN_109d0ca5c();
  puVar1 = (uint *)(param_1 + 8);
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 2;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 8;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 4;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x10;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x20;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x20;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x40;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x40;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x200;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x200;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x400;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x400;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x800;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x800;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x1000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x1000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x8000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x8000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x2000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x2000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x4000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x4000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x10000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x10000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x40000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x40000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x80000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x80000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x100000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x100000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = 0x200000;
  FUN_109d0ca5c();
  if (iVar4 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 0x200000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 109cd2af4; end: 109cd2b83;  */

undefined8 FUN_109cd2af4(void)

{
  int iVar1;
  
  if ((bRam0000000113833328 & 1) == 0) {
    iVar1 = 0x13833328;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_109cd2884(0x1138332e0);
      ___cxa_atexit(FUN_109cd2b84,0x1138332e0,0x100000000);
      ___cxa_guard_release(0x113833328);
    }
  }
  return 0x1138332e0;
}



/* Entry: 109cd2b84; end: 109cd2b87;  */

void FUN_109cd2b84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 109cd2b88; end: 109cd2c37;  */

undefined1  [16] FUN_109cd2b88(uint param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_14;
  
  uVar5 = 0;
  ppuVar4 = &PTR_DAT_110b3c700;
  while( true ) {
    for (; ppuVar6 = (undefined **)(&UNK_110b3c448 + uVar5 * 0x18), *(uint *)ppuVar6 < param_1;
        uVar5 = uVar5 * 2 + 2) {
      ppuVar6 = ppuVar4;
      if (0xd < uVar5) goto LAB_109cd2bf0;
    }
    if (0xd < uVar5) break;
    uVar5 = uVar5 << 1 | 1;
    ppuVar4 = ppuVar6;
  }
LAB_109cd2bf0:
  if ((ppuVar6 == &PTR_DAT_110b3c700) || (param_1 < *(uint *)ppuVar6)) {
    uStack_14 = 0;
    puVar1 = (undefined8 *)&UNK_110b3c448;
    FUN_109cd2d64(&UNK_110b3c448,&uStack_14);
    puVar2 = (undefined *)*puVar1;
    puVar3 = (undefined *)puVar1[1];
  }
  else {
    puVar2 = ppuVar6[1];
    puVar3 = ppuVar6[2];
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 109cd2c38; end: 109cd2cab;  */

uint * FUN_109cd2c38(long param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  puVar1 = (uint *)(param_1 + 0x2b8);
  puVar2 = puVar1;
  while( true ) {
    for (; puVar4 = (uint *)(param_1 + uVar3 * 0x18), *puVar4 < *param_2; uVar3 = uVar3 * 2 + 2) {
      puVar4 = puVar2;
      if (0xd < uVar3) goto LAB_109cd2c90;
    }
    if (0xd < uVar3) break;
    uVar3 = uVar3 << 1 | 1;
    puVar2 = puVar4;
  }
LAB_109cd2c90:
  if ((puVar1 == puVar4) || (*param_2 < *puVar4)) {
    puVar4 = puVar1;
  }
  return puVar4;
}



/* Entry: 109cd2cac; end: 109cd2d63;  */

undefined8 * FUN_109cd2cac(uint param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  
  if (param_2 < 4) {
    if (param_2 == 1) {
      uVar9 = 0xfbffb;
      goto LAB_109cd2d2c;
    }
    if (param_2 == 2) {
      bVar1 = param_1 == 2;
    }
    else {
      if (param_2 != 3) goto LAB_109cd2d44;
      bVar1 = param_1 == 0x80;
    }
  }
  else if (param_2 < 7) {
    if (param_2 == 4) {
      uVar9 = 0x2db800;
LAB_109cd2d2c:
      return (undefined8 *)(ulong)((param_1 & uVar9) != 0);
    }
    if (param_2 != 5) {
LAB_109cd2d44:
      puVar2 = &UNK_10f5a7275;
      func_0x00010952d0c4(&UNK_10f5a7275,&UNK_10f5a7275,&UNK_10f5a7299);
      puVar3 = puVar2;
      FUN_109cd2c38();
      if (puVar2 + 0x2b8 != puVar3) {
        return (undefined8 *)(puVar3 + 8);
      }
      plVar4 = (long *)0x10;
      ___cxa_allocate_exception();
      func_0x000109262e48();
      plVar5 = plVar4;
      puVar8 = (undefined8 *)PTR___ZTISt12out_of_range_110352240;
      ___cxa_throw(plVar4,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180
                  );
      ___cxa_free_exception(plVar4);
      __Unwind_Resume();
      puVar6 = (undefined8 *)*plVar5;
      FUN_109cd2e48(puVar6,puVar6 + 0x60,0x20,0,puVar8);
      lVar10 = *plVar5;
      if ((undefined8 *)(lVar10 + 0x300) != puVar6) {
        uVar7 = *puVar8;
        func_0x000107c2abd8(uVar7,puVar8[1],*puVar6,puVar6[1]);
        if (((uint)uVar7 >> 7 & 1) == 0) {
          return puVar6;
        }
        lVar10 = *plVar5;
      }
      return (undefined8 *)(lVar10 + 0x300);
    }
    bVar1 = param_1 == 0x4000;
  }
  else {
    if (param_2 != 7) {
      if (param_2 != 9) goto LAB_109cd2d44;
      uVar9 = 0x20180;
      goto LAB_109cd2d2c;
    }
    bVar1 = param_1 == 0x100000;
  }
  return (undefined8 *)(ulong)bVar1;
}



/* Entry: 109cd2d64; end: 109cd2dd7;  */

undefined8 * FUN_109cd2d64(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = param_1;
  FUN_109cd2c38();
  if (param_1 + 0x2b8 != lVar6) {
    return (undefined8 *)(lVar6 + 8);
  }
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  func_0x000109262e48();
  plVar2 = plVar1;
  puVar5 = (undefined8 *)PTR___ZTISt12out_of_range_110352240;
  ___cxa_throw(plVar1,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  puVar3 = (undefined8 *)*plVar2;
  FUN_109cd2e48(puVar3,puVar3 + 0x60,0x20,0,puVar5);
  lVar6 = *plVar2;
  if ((undefined8 *)(lVar6 + 0x300) != puVar3) {
    uVar4 = *puVar5;
    func_0x000107c2abd8(uVar4,puVar5[1],*puVar3,puVar3[1]);
    if (((uint)uVar4 >> 7 & 1) == 0) {
      return puVar3;
    }
    lVar6 = *plVar2;
  }
  return (undefined8 *)(lVar6 + 0x300);
}



/* Entry: 109cd2dd8; end: 109cd2e47;  */

undefined8 * FUN_109cd2dd8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_109cd2e48(puVar1,puVar1 + 0x60,0x20,0,param_2);
  lVar3 = *param_1;
  if ((undefined8 *)(lVar3 + 0x300) != puVar1) {
    uVar2 = *param_2;
    func_0x000107c2abd8(uVar2,param_2[1],*puVar1,puVar1[1]);
    if (((uint)uVar2 >> 7 & 1) == 0) {
      return puVar1;
    }
    lVar3 = *param_1;
  }
  return (undefined8 *)(lVar3 + 0x300);
}



/* Entry: 109cd2e48; end: 109cd2eef;  */

undefined1  [16]
FUN_109cd2e48(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if (param_3 != 0) {
    puVar2 = param_2;
    while( true ) {
      while( true ) {
        param_2 = (undefined8 *)(param_1 + param_4 * 0x18);
        uVar1 = *param_2;
        func_0x000107c2abd8(uVar1,param_2[1],*param_5,param_5[1]);
        if (((uint)uVar1 >> 7 & 1) != 0) break;
        if (param_3 >> 1 <= param_4) goto LAB_109cd2ecc;
        param_4 = param_4 << 1 | 1;
        puVar2 = param_2;
      }
      param_2 = puVar2;
      if (param_3 - 1 >> 1 <= param_4) break;
      param_4 = param_4 * 2 + 2;
    }
  }
LAB_109cd2ecc:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 109cd2ef0; end: 109cd2fbb;  */

void FUN_109cd2ef0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
  lVar2 = *param_2;
  lVar1 = param_2[1];
  if (lVar2 != lVar1) {
    puVar3 = (undefined8 *)param_1[1];
    do {
      if (puVar3 < (undefined8 *)param_1[2]) {
        func_0x0001092d3130(param_1,lVar2);
        puVar3 = puVar3 + 3;
      }
      else {
        puVar3 = param_1;
        func_0x000107c281ec(param_1,lVar2);
      }
      param_1[1] = puVar3;
      lVar2 = lVar2 + 0x58;
    } while (lVar2 != lVar1);
  }
  return;
}



/* Entry: 109cd2fbc; end: 109cd3017;  */

undefined8 FUN_109cd2fbc(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != param_1[1]) {
    while( true ) {
      lVar2 = (long)*(char *)(lVar1 + 0x17);
      if (lVar2 < 0) {
        lVar2 = *(long *)(lVar1 + 8);
      }
      if ((lVar2 == 0) ||
         ((((param_2 != 0 && (*(int *)(lVar1 + 0x18) == 0)) && (*(int *)(lVar1 + 0x1c) == 0)) &&
          ((*(int *)(lVar1 + 0x24) == 0 && (*(int *)(lVar1 + 0x20) == 0)))))) break;
      lVar1 = lVar1 + 0x58;
      if (lVar1 == param_1[1]) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 109cd3018; end: 109cd30bb;  */

long FUN_109cd3018(long param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*(int *)(param_1 + 0x50) == 1) {
    return param_1 + 0x18;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_50,&UNK_10f5a742e);
  func_0x000109259240(auStack_38,auStack_50,&UNK_10f5a7436);
  FUN_109cd45b4(&UNK_10f5a7425,&UNK_10f5a7425,auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109cd3088);
  (*pcVar1)();
}



/* Entry: 109cd30bc; end: 109cd31ab;  */

long FUN_109cd30bc(long param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f5a745c);
    func_0x000109259240(auStack_38,auStack_50,&UNK_10f5a7465);
    FUN_109cd45b4(&UNK_10f5a7425,&UNK_10f5a7425,auStack_38);
  }
  else {
    if (*(int *)(param_1 + 0x50) == 1) {
      return param_1 + 0x18;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f5a745c);
    func_0x000109259240(auStack_38,auStack_50,&UNK_10f5a7436);
    FUN_109cd45b4(&UNK_10f5a7425,&UNK_10f5a7425,auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109cd3170);
  (*pcVar1)();
}



/* Entry: 109cd31ac; end: 109cd3817;  */

void FUN_109cd31ac(long *param_1,undefined8 *param_2,long **param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  long **pplVar12;
  long **pplVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  byte bStack_120;
  long *plStack_110;
  long *plStack_108;
  undefined4 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  undefined4 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined4 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_80;
  char cStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar2 = (undefined8 *)*param_2;
  puVar21 = (undefined8 *)param_2[1];
  pplVar13 = param_3;
  if ((long)puVar21 - (long)puVar2 != 0) {
    uVar10 = ((long)puVar21 - (long)puVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
    if (0x2e8ba2e8ba2e8ba < uVar10) {
      FUN_109cd3e34();
      goto LAB_109cd3744;
    }
    pplVar12 = param_3;
    plStack_b0 = param_1;
    FUN_109cd3e48();
    pplVar13 = (long **)param_1[1];
    lVar18 = uVar10 + (*param_1 - (long)pplVar13);
    FUN_109cd3e90(*param_1,pplVar13,lVar18);
    plStack_d0 = (long *)*param_1;
    *param_1 = lVar18;
    param_1[1] = uVar10;
    plStack_b8 = (long *)param_1[2];
    param_1[2] = uVar10 + (long)pplVar12 * 0x58;
    plStack_c8 = plStack_d0;
    plStack_c0 = plStack_d0;
    func_0x000109cd40b0(&plStack_d0);
    puVar2 = (undefined8 *)*param_2;
    puVar21 = (undefined8 *)param_2[1];
  }
  for (; puVar2 != puVar21; puVar2 = puVar2 + 0xb) {
    if (*(char *)(puVar2 + 6) == '\x01') {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&plStack_110,&UNK_10f5a742e,puVar2);
      func_0x000109259240(&plStack_d0,&plStack_110,&UNK_10f5a74a0);
      FUN_109cd45b4(&UNK_10f5a7488,&UNK_10f5a7488,&plStack_d0);
      goto LAB_109cd3744;
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_d0,*puVar2,puVar2[1]);
    }
    else {
      plStack_c8 = (long *)puVar2[1];
      plStack_d0 = (long *)*puVar2;
      plStack_c0 = (long *)puVar2[2];
    }
    uStack_100 = *(undefined4 *)(puVar2 + 5);
    plStack_108 = (long *)puVar2[4];
    plStack_110 = (long *)puVar2[3];
    puVar14 = puVar2 + 7;
    func_0x000109378bfc(&plStack_f8);
    plStack_b0 = plStack_108;
    plStack_b8 = plStack_110;
    uStack_a8 = uStack_100;
    plStack_a0 = (long *)((ulong)plStack_a0 & 0xffffffffffffff00);
    uStack_88 = (bStack_e0 & 1) != 0;
    if ((bool)uStack_88) {
      plStack_98 = plStack_f0;
      plStack_a0 = plStack_f8;
      uStack_90 = uStack_e8;
      plStack_f0 = (long *)0x0;
      uStack_e8 = 0;
      plStack_f8 = (long *)0x0;
    }
    uStack_80 = 1;
    puVar17 = (undefined8 *)param_1[1];
    if (puVar17 < (undefined8 *)param_1[2]) {
      puVar17[2] = plStack_c0;
      puVar17[1] = plStack_c8;
      *puVar17 = plStack_d0;
      plStack_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      pplVar13 = &plStack_b8;
      FUN_109cd3f0c(puVar17 + 3);
      puVar17 = puVar17 + 0xb;
    }
    else {
      lVar18 = (long)puVar17 - *param_1;
      uVar10 = (lVar18 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
      if (0x2e8ba2e8ba2e8ba < uVar10) {
        FUN_109cd3e34();
        goto LAB_109cd3744;
      }
      lVar20 = param_1[2] - *param_1 >> 3;
      uVar16 = lVar20 * 0x5d1745d1745d1746;
      if (uVar16 < uVar10 || uVar16 - uVar10 == 0) {
        uVar16 = uVar10;
      }
      if (0x1745d1745d1745c < (ulong)(lVar20 * 0x2e8ba2e8ba2e8ba3)) {
        uVar16 = 0x2e8ba2e8ba2e8ba;
      }
      plStack_130 = param_1;
      FUN_109cd3e48();
      puVar1 = (undefined8 *)(uVar16 + lVar18);
      puVar1[2] = plStack_c0;
      puVar1[1] = plStack_c8;
      *puVar1 = plStack_d0;
      plStack_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      FUN_109cd3f0c(puVar1 + 3,&plStack_b8);
      puVar17 = puVar1 + 0xb;
      pplVar13 = (long **)param_1[1];
      lVar18 = (long)puVar1 + (*param_1 - (long)pplVar13);
      FUN_109cd3e90(*param_1,pplVar13,lVar18);
      plStack_150 = (long *)*param_1;
      *param_1 = lVar18;
      param_1[1] = (long)puVar17;
      plStack_138 = (long *)param_1[2];
      param_1[2] = uVar16 + (long)puVar14 * 0x58;
      plStack_148 = plStack_150;
      plStack_140 = plStack_150;
      func_0x000109cd40b0(&plStack_150);
    }
    param_1[1] = (long)puVar17;
    FUN_109cd3fa0(&plStack_b8);
    if ((long)plStack_c0 < 0) {
      __ZdlPv(plStack_d0);
    }
    if (((bStack_e0 & 1) != 0) && (plStack_f8 != (long *)0x0)) {
      plStack_f0 = plStack_f8;
      __ZdlPv();
    }
  }
  plVar19 = param_1 + 3;
  lVar18 = *plVar19;
  plVar3 = *param_3;
  plVar22 = param_3[1];
  uVar10 = ((long)plVar22 - (long)plVar3 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if ((ulong)((param_1[5] - lVar18 >> 3) * 0x4ec4ec4ec4ec4ec5) < uVar10) {
    if (0x276276276276276 < uVar10) {
      FUN_109cd40fc();
LAB_109cd3744:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x109cd3748);
      (*pcVar9)();
    }
    lVar20 = param_1[4];
    plStack_b0 = plVar19;
    FUN_109cd4110();
    lVar18 = uVar10 + (lVar20 - lVar18);
    lVar20 = lVar18 + (param_1[3] - param_1[4]);
    FUN_109cd4158(param_1[3],param_1[4],lVar20);
    plStack_d0 = (long *)param_1[3];
    param_1[3] = lVar20;
    param_1[4] = lVar18;
    plStack_b8 = (long *)param_1[5];
    param_1[5] = uVar10 + (long)pplVar13 * 0x68;
    plStack_c8 = plStack_d0;
    plStack_c0 = plStack_d0;
    func_0x000109cd4254(&plStack_d0);
    plVar3 = *param_3;
    plVar22 = param_3[1];
  }
  do {
    if (plVar3 == plVar22) {
      return;
    }
    iVar15 = (int)plVar3[5];
    if (iVar15 == 0xf) {
LAB_109cd352c:
      if (*(char *)((long)plVar3 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_d0,*plVar3,plVar3[1]);
      }
      else {
        plStack_c8 = (long *)plVar3[1];
        plStack_d0 = (long *)*plVar3;
        plStack_c0 = (long *)plVar3[2];
      }
      plStack_b8 = (long *)((ulong)plStack_b8 & 0xffffffffffffff00);
      cStack_78 = '\0';
      uStack_70 = *(undefined4 *)((long)plVar3 + 0x2c);
      uStack_6c = (undefined1)plVar3[6];
      FUN_109cd3850(plVar19,&plStack_d0);
      if (cStack_78 == '\x01') {
        FUN_109cd3fa0(&plStack_b8);
      }
      plVar11 = plStack_d0;
      if ((long)plStack_c0 < 0) {
LAB_109cd36c0:
        __ZdlPv(plVar11);
      }
    }
    else {
      lVar18 = plVar3[3];
      iVar6 = -(uint)((int)((ulong)lVar18 >> 0x20) != 0);
      iVar7 = -(uint)((int)plVar3[4] != 0);
      iVar8 = -(uint)((int)((ulong)plVar3[4] >> 0x20) != 0);
      auVar4[4] = (char)iVar6;
      auVar4._0_4_ = -(uint)((int)lVar18 != 0);
      auVar4[5] = (char)((uint)iVar6 >> 8);
      auVar4[6] = (char)((uint)iVar6 >> 0x10);
      auVar4[7] = (char)((uint)iVar6 >> 0x18);
      auVar4[8] = (char)iVar7;
      auVar4[9] = (char)((uint)iVar7 >> 8);
      auVar4[10] = (char)((uint)iVar7 >> 0x10);
      auVar4[0xb] = (char)((uint)iVar7 >> 0x18);
      auVar4[0xc] = (char)iVar8;
      auVar4[0xd] = (char)((uint)iVar8 >> 8);
      auVar4[0xe] = (char)((uint)iVar8 >> 0x10);
      auVar4[0xf] = (char)((uint)iVar8 >> 0x18);
      uVar5 = NEON_umaxv(auVar4,4);
      if (((uVar5 & 1) == 0) && (((char)plVar3[10] != '\x01' || (plVar3[7] == plVar3[8]))))
      goto LAB_109cd352c;
      if (*(char *)((long)plVar3 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_d0,*plVar3,plVar3[1]);
        iVar15 = (int)plVar3[5];
      }
      else {
        plStack_c8 = (long *)plVar3[1];
        plStack_d0 = (long *)*plVar3;
        plStack_c0 = (long *)plVar3[2];
      }
      plStack_148 = (long *)plVar3[4];
      plStack_150 = (long *)plVar3[3];
      plStack_140 = (long *)CONCAT44(plStack_140._4_4_,iVar15);
      func_0x000109378bfc(&plStack_138,plVar3 + 7);
      plStack_108 = plStack_148;
      plStack_110 = plStack_150;
      uStack_100 = plStack_140._0_4_;
      plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffffffffff00);
      bStack_e0 = (bStack_120 & 1) != 0;
      if ((bool)bStack_e0) {
        plStack_f0 = plStack_130;
        plStack_f8 = plStack_138;
        uStack_e8 = uStack_128;
        plStack_130 = (long *)0x0;
        uStack_128 = 0;
        plStack_138 = (long *)0x0;
      }
      uStack_d8 = 1;
      FUN_109cd3f0c(&plStack_b8,&plStack_110);
      cStack_78 = '\x01';
      uStack_70 = *(undefined4 *)((long)plVar3 + 0x2c);
      uStack_6c = (undefined1)plVar3[6];
      FUN_109cd3850(plVar19,&plStack_d0);
      if (cStack_78 == '\x01') {
        FUN_109cd3fa0(&plStack_b8);
      }
      if ((long)plStack_c0 < 0) {
        __ZdlPv(plStack_d0);
      }
      FUN_109cd3fa0(&plStack_110);
      if (((bStack_120 & 1) != 0) && (plStack_138 != (long *)0x0)) {
        plStack_130 = plStack_138;
        plVar11 = plStack_138;
        goto LAB_109cd36c0;
      }
    }
    plVar3 = plVar3 + 0xb;
  } while( true );
}



/* Entry: 109cd3818; end: 109cd384f;  */

undefined8 * FUN_109cd3818(undefined8 *param_1)

{
  FUN_109cd3fa0(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109cd3850; end: 109cd39f3;  */

long * FUN_109cd3850(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar10 = param_2[1];
    uVar4 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar10;
    *puVar8 = uVar4;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plVar2 = puVar8 + 3;
    *(undefined1 *)plVar2 = 0;
    *(undefined1 *)(puVar8 + 0xb) = 0;
    if (*(char *)(param_2 + 0xb) == '\x01') {
      FUN_109cd3f0c(plVar2,param_2 + 3);
      *(undefined1 *)(puVar8 + 0xb) = 1;
    }
    puVar8[0xc] = param_2[0xc];
    puVar8 = puVar8 + 0xd;
  }
  else {
    lVar9 = (long)puVar8 - *param_1;
    uVar7 = (lVar9 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
    if (0x276276276276276 < uVar7) {
      FUN_109cd40fc();
      if ((char)param_1[0xb] == '\x01') {
        FUN_109cd3fa0(param_1 + 3);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar5 * -0x6276276276276276;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar5 * 0x4ec4ec4ec4ec4ec5)) {
      uVar6 = 0x276276276276276;
    }
    puVar3 = param_2;
    plStack_48 = param_1;
    FUN_109cd4110();
    puVar1 = (undefined8 *)(uVar6 + lVar9);
    uVar4 = param_2[2];
    uVar10 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar10;
    puVar1[2] = uVar4;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    if (*(char *)(param_2 + 0xb) == '\x01') {
      FUN_109cd3f0c(puVar1 + 3,param_2 + 3);
      *(undefined1 *)(puVar1 + 0xb) = 1;
    }
    puVar1[0xc] = param_2[0xc];
    puVar8 = puVar1 + 0xd;
    lVar9 = (long)puVar1 + (*param_1 - param_1[1]);
    FUN_109cd4158(*param_1,param_1[1],lVar9);
    lStack_68 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar8;
    lStack_50 = param_1[2];
    param_1[2] = uVar6 + (long)puVar3 * 0x68;
    plVar2 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x000109cd4254(plVar2);
  }
  param_1[1] = (long)puVar8;
  return plVar2;
}



/* Entry: 109cd39f4; end: 109cd3a7b;  */

undefined8 * FUN_109cd39f4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    FUN_109cd3fa0(param_1 + 3);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109cd3a7c; end: 109cd3e33;  */

void FUN_109cd3a7c(undefined8 param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [24];
  undefined8 **appuStack_88 [3];
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  uStack_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  func_0x000109378e2c(&uStack_58,(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
  puVar1 = (undefined4 *)param_2[1];
  if ((undefined4 *)*param_2 != puVar1) {
    puVar8 = (undefined4 *)*param_2 + 10;
    do {
      puVar5 = puStack_50;
      puVar7 = puVar8 + -10;
      if (puVar8[10] != 1) {
        if (puVar8[10] == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (appuStack_88,&UNK_10f5a742e);
          func_0x000109259240(&puStack_70,appuStack_88,&UNK_10f5a751b);
          FUN_109cd45b4(&UNK_10f5a750d,&UNK_10f5a750d,&puStack_70);
        }
        else {
          func_0x0001092612e0();
        }
        goto LAB_109cd3d5c;
      }
      if (*(char *)(puVar8 + 8) == '\x01') {
        if (puStack_50 < puStack_48) {
          FUN_109cd44d8(puStack_50,puVar7,puVar8 + 2,*puVar8);
LAB_109cd3b30:
          puVar5 = puVar5 + 0xb;
        }
        else {
          puVar5 = &uStack_58;
          FUN_109cd4380(puVar5,puVar7,puVar8 + 2,puVar8);
        }
      }
      else {
        if (puStack_50 < puStack_48) {
          func_0x00010955c16c(puStack_50,puVar7,puVar8 + -4,puVar8);
          goto LAB_109cd3b30;
        }
        puVar5 = &uStack_58;
        func_0x00010955c014(puVar5,puVar7,puVar8 + -4,puVar8);
      }
      puVar7 = puVar8 + 0xc;
      puVar8 = puVar8 + 0x16;
      puStack_50 = puVar5;
    } while (puVar7 != puVar1);
  }
  puStack_70 = (undefined8 *)0x0;
  ppuStack_68 = (undefined8 **)0x0;
  ppuStack_60 = (undefined8 **)0x0;
  func_0x000109378e2c(&puStack_70,(param_2[4] - param_2[3] >> 3) * 0x4ec4ec4ec4ec4ec5);
  lVar9 = param_2[3];
  lVar2 = param_2[4];
  do {
    ppuVar6 = ppuStack_68;
    if (lVar9 == lVar2) {
      func_0x000109379174(param_1,&uStack_58,&puStack_70);
      appuStack_88[0] = &puStack_70;
      func_0x000109378cec(appuStack_88);
      puStack_70 = &uStack_58;
      func_0x000109378cec(&puStack_70);
      return;
    }
    if ((*(byte *)(lVar9 + 0x58) & 1) == 0) {
      if (ppuStack_68 < ppuStack_60) {
        func_0x000109379110(ppuStack_68,lVar9);
        goto LAB_109cd3c34;
      }
      ppuVar6 = &puStack_70;
      func_0x000109378fd0(ppuVar6,lVar9);
    }
    else {
      if (*(int *)(lVar9 + 0x50) != 1) {
        if (*(int *)(lVar9 + 0x50) == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_a0,&UNK_10f5a745c,lVar9);
          func_0x000109259240(appuStack_88,auStack_a0,&UNK_10f5a751b);
          FUN_109cd45b4(&UNK_10f5a750d,&UNK_10f5a750d,appuStack_88);
        }
        else {
          func_0x0001092612e0();
        }
LAB_109cd3d5c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109cd3d60);
        (*pcVar4)();
      }
      if (*(char *)(lVar9 + 0x48) == '\x01') {
        if (ppuStack_68 < ppuStack_60) {
          FUN_109cd44d8(ppuStack_68,lVar9,lVar9 + 0x30,*(undefined4 *)(lVar9 + 0x28));
LAB_109cd3c34:
          ppuVar6 = ppuVar6 + 0xb;
        }
        else {
          ppuVar6 = &puStack_70;
          FUN_109cd4380(ppuVar6,lVar9,lVar9 + 0x30,lVar9 + 0x28);
        }
      }
      else {
        if (ppuStack_68 < ppuStack_60) {
          func_0x00010955c16c(ppuStack_68,lVar9,lVar9 + 0x18,lVar9 + 0x28);
          goto LAB_109cd3c34;
        }
        ppuVar6 = &puStack_70;
        func_0x00010955c014(ppuVar6,lVar9,lVar9 + 0x18,lVar9 + 0x28);
      }
    }
    uVar3 = *(undefined4 *)(lVar9 + 0x60);
    ppuStack_68 = ppuVar6;
    *(undefined1 *)(ppuVar6 + -5) = *(undefined1 *)(lVar9 + 100);
    *(undefined4 *)((long)ppuVar6 + -0x2c) = uVar3;
    lVar9 = lVar9 + 0x68;
  } while( true );
}



/* Entry: 109cd3e34; end: 109cd3e47;  */

void FUN_109cd3e34(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x2e8ba2e8ba2e8ba < puVar1) {
    func_0x000104c4f740();
    if (puVar1 != param_2) {
      param_3 = param_3 + 0x18;
      puVar2 = puVar1;
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        *(undefined8 *)(param_3 + -8) = puVar2[2];
        *(undefined8 *)(param_3 + -0x10) = uVar4;
        *(undefined8 *)(param_3 + -0x18) = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        FUN_109cd3f0c(param_3,puVar2 + 3);
        puVar2 = puVar2 + 0xb;
        param_3 = param_3 + 0x58;
      } while (puVar2 != param_2);
      do {
        FUN_109cd4074(puVar1);
        puVar1 = puVar1 + 0xb;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x58);
  return;
}



/* Entry: 109cd3e48; end: 109cd3e8f;  */

void FUN_109cd3e48(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_1) {
    func_0x000104c4f740();
    if (param_1 != param_2) {
      param_3 = param_3 + 0x18;
      puVar1 = param_1;
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        *(undefined8 *)(param_3 + -8) = puVar1[2];
        *(undefined8 *)(param_3 + -0x10) = uVar3;
        *(undefined8 *)(param_3 + -0x18) = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        FUN_109cd3f0c(param_3,puVar1 + 3);
        puVar1 = puVar1 + 0xb;
        param_3 = param_3 + 0x58;
      } while (puVar1 != param_2);
      do {
        FUN_109cd4074(param_1);
        param_1 = param_1 + 0xb;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x58);
  return;
}



/* Entry: 109cd3e90; end: 109cd3f0b;  */

void FUN_109cd3e90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    param_3 = param_3 + 0x18;
    puVar1 = param_1;
    do {
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      *(undefined8 *)(param_3 + -8) = puVar1[2];
      *(undefined8 *)(param_3 + -0x10) = uVar3;
      *(undefined8 *)(param_3 + -0x18) = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      FUN_109cd3f0c(param_3,puVar1 + 3);
      puVar1 = puVar1 + 0xb;
      param_3 = param_3 + 0x58;
    } while (puVar1 != param_2);
    do {
      FUN_109cd4074(param_1);
      param_1 = param_1 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 109cd3f0c; end: 109cd3f3f;  */

undefined1 * FUN_109cd3f0c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_109cd3f40();
  return param_1;
}



/* Entry: 109cd3f40; end: 109cd3f9f;  */

void FUN_109cd3f40(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_109cd3fa0();
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_DAT_110b3ca10)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 109cd3fa0; end: 109cd3ff3;  */

void FUN_109cd3fa0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110b3ca00)[*(uint *)(param_1 + 0x38)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 109cd3ff4; end: 109cd4073;  */

void FUN_109cd3ff4(void)

{
  return;
}



/* Entry: 109cd4074; end: 109cd40fb;  */

void FUN_109cd4074(undefined8 *param_1)

{
  FUN_109cd3fa0(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109cd40fc; end: 109cd410f;  */

void FUN_109cd40fc(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined *)0x276276276276276 < puVar2) {
    func_0x000104c4f740();
    if (puVar2 != param_2) {
      puVar4 = (undefined1 *)(param_3 + 0x58);
      puVar3 = puVar2 + 0x18;
      do {
        uVar6 = *(undefined8 *)(puVar3 + -0x10);
        uVar5 = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar3 + -8);
        *(undefined8 *)(puVar4 + -0x50) = uVar6;
        *(undefined8 *)(puVar4 + -0x58) = uVar5;
        *(undefined8 *)(puVar3 + -0x10) = 0;
        *(undefined8 *)(puVar3 + -8) = 0;
        *(undefined8 *)(puVar3 + -0x18) = 0;
        puVar4[-0x40] = 0;
        *puVar4 = 0;
        if (puVar3[0x40] == '\x01') {
          FUN_109cd3f0c(puVar4 + -0x40,puVar3);
          *puVar4 = 1;
        }
        *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar3 + 0x48);
        puVar4 = puVar4 + 0x68;
        puVar1 = puVar3 + 0x50;
        puVar3 = puVar3 + 0x68;
      } while (puVar1 != param_2);
      do {
        FUN_109cd420c(puVar2);
        puVar2 = puVar2 + 0x68;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 * 0x68);
  return;
}



/* Entry: 109cd4110; end: 109cd4157;  */

void FUN_109cd4110(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0x276276276276276 < param_1) {
    func_0x000104c4f740();
    if (param_1 != param_2) {
      puVar3 = (undefined1 *)(param_3 + 0x58);
      lVar2 = param_1 + 0x18;
      do {
        uVar5 = *(undefined8 *)(lVar2 + -0x10);
        uVar4 = *(undefined8 *)(lVar2 + -0x18);
        *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(lVar2 + -8);
        *(undefined8 *)(puVar3 + -0x50) = uVar5;
        *(undefined8 *)(puVar3 + -0x58) = uVar4;
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined8 *)(lVar2 + -8) = 0;
        *(undefined8 *)(lVar2 + -0x18) = 0;
        puVar3[-0x40] = 0;
        *puVar3 = 0;
        if (*(char *)(lVar2 + 0x40) == '\x01') {
          FUN_109cd3f0c(puVar3 + -0x40,lVar2);
          *puVar3 = 1;
        }
        *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(lVar2 + 0x48);
        puVar3 = puVar3 + 0x68;
        uVar1 = lVar2 + 0x50;
        lVar2 = lVar2 + 0x68;
      } while (uVar1 != param_2);
      do {
        FUN_109cd420c(param_1);
        param_1 = param_1 + 0x68;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 * 0x68);
  return;
}



/* Entry: 109cd4158; end: 109cd420b;  */

void FUN_109cd4158(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    puVar3 = (undefined1 *)(param_3 + 0x58);
    lVar2 = param_1 + 0x18;
    do {
      uVar5 = *(undefined8 *)(lVar2 + -0x10);
      uVar4 = *(undefined8 *)(lVar2 + -0x18);
      *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(puVar3 + -0x50) = uVar5;
      *(undefined8 *)(puVar3 + -0x58) = uVar4;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined8 *)(lVar2 + -8) = 0;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      puVar3[-0x40] = 0;
      *puVar3 = 0;
      if (*(char *)(lVar2 + 0x40) == '\x01') {
        FUN_109cd3f0c(puVar3 + -0x40,lVar2);
        *puVar3 = 1;
      }
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(lVar2 + 0x48);
      puVar3 = puVar3 + 0x68;
      lVar1 = lVar2 + 0x50;
      lVar2 = lVar2 + 0x68;
    } while (lVar1 != param_2);
    do {
      FUN_109cd420c(param_1);
      param_1 = param_1 + 0x68;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 109cd420c; end: 109cd429f;  */

void FUN_109cd420c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    FUN_109cd3fa0(param_1 + 3);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 109cd42a0; end: 109cd437f;  */

void FUN_109cd42a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x68;
        FUN_109cd420c(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109cd4380; end: 109cd44d7;  */

long * FUN_109cd4380(long *param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar5 < 0x2e8ba2e8ba2e8bb) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * 0x5d1745d1745d1746;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
      uVar6 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_48 = param_1;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      func_0x000109378aac();
    }
    lVar7 = (long)plVar3 + lVar7;
    plStack_50 = plVar3 + uVar6 * 0xb;
    plStack_68 = plVar3;
    plStack_60 = (long *)lVar7;
    plStack_58 = (long *)lVar7;
    FUN_109cd44d8(lVar7,param_2,param_3,*param_4);
    plStack_58 = (long *)(lVar7 + 0x58);
    lVar7 = lVar7 + (*param_1 - param_1[1]);
    func_0x000109378f10(param_1,*param_1,param_1[1],lVar7);
    plVar3 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar7;
    func_0x0001056754bc(&plStack_68);
    return plVar3;
  }
  func_0x000109378a98();
  uVar2 = SUB84(param_4,0);
  func_0x0001056754bc(&plStack_68);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar4 = param_2[1];
    lVar7 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar4;
    *param_1 = lVar7;
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  func_0x000109285684();
  *(undefined1 *)(param_1 + 10) = 1;
  puVar1 = (undefined4 *)*param_3;
  if (param_3[1] - (long)puVar1 == 0x10) {
    *(undefined4 *)((long)param_1 + 0x24) = *puVar1;
    *(undefined4 *)((long)param_1 + 0x1c) = puVar1[1];
    *(undefined4 *)(param_1 + 3) = puVar1[2];
    *(undefined4 *)(param_1 + 4) = puVar1[3];
  }
  return param_1;
}



/* Entry: 109cd44d8; end: 109cd45b3;  */

undefined8 * FUN_109cd44d8(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  func_0x000109285684();
  *(undefined1 *)(param_1 + 10) = 1;
  puVar1 = (undefined4 *)*param_3;
  if (param_3[1] - (long)puVar1 == 0x10) {
    *(undefined4 *)((long)param_1 + 0x24) = *puVar1;
    *(undefined4 *)((long)param_1 + 0x1c) = puVar1[1];
    *(undefined4 *)(param_1 + 3) = puVar1[2];
    *(undefined4 *)(param_1 + 4) = puVar1[3];
  }
  return param_1;
}



/* Entry: 109cd45b4; end: 109cd4687;  */

void FUN_109cd45b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,param_1);
  func_0x000107c31940(auStack_60,param_2);
  func_0x00010952d1c4(uVar2,auStack_48,auStack_60,param_3);
  ___cxa_throw(uVar2,&PTR_DAT_110afb398,&DAT_10952d1c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109cd4630);
  (*pcVar1)();
}



/* Entry: 109cd4688; end: 109cd4793; -[Clip evaluateOnCPUWithInputs:outputs:error:] */

undefined8 FUN_109cd4688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c0dfd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0dfd40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  uVar3 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf64040();
  uVar4 = uVar1;
  _objc_retainAutorelease(uVar1);
  func_0x00010bf64040();
  _vDSP_vclip(uVar3,1,param_1 + 0x18,param_1 + 0x1c,uVar4,1,(long)(int)uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return 1;
}



/* Entry: 109cd4794; end: 109cd49e3; -[Clip initWithParameterDictionary:error:] */

long FUN_109cd4794(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f2da98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  *(undefined4 *)(param_2 + 0x18) = param_1;
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f2dab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  _objc_release();
  _MTLCreateSystemDefaultDevice();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  _objc_release(uVar5);
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 == 0) {
    lVar4 = 0;
    goto LAB_109cd4948;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,&UNK_10f5a7557,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d8bc0(lVar6,param_3,puVar1,0,param_5);
  _objc_release(puVar1);
  if (lVar6 == 0) {
    lVar3 = *param_5;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&PTR____CFConstantStringClassReference_110f2dad8);
LAB_109cd4934:
    lVar4 = 0;
  }
  else {
    lVar3 = lVar6;
    func_0x00010c0d8900(lVar6,param_3,&PTR____CFConstantStringClassReference_110f2daf8);
    if (lVar3 == 0) goto LAB_109cd4934;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0d87c0(uVar2,param_3,lVar3,param_5);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uVar2;
    _objc_release(uVar5);
    if (*(long *)(param_2 + 8) == 0) {
      lVar4 = *param_5;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&PTR____CFConstantStringClassReference_110f2dad8);
      _objc_release(lVar4);
      goto LAB_109cd4934;
    }
    func_0x00010bfee200(param_2);
    _objc_retain();
    lVar4 = param_2;
  }
  _objc_release(lVar3);
  _objc_release(lVar6);
LAB_109cd4948:
  _objc_release(param_4);
  _objc_release(param_2);
  return lVar4;
}



/* Entry: 109cd49e4; end: 109cd4cab; -[Clip outputShapesForInputShapes:error:] */

undefined * FUN_109cd49e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar2;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  __Unwind_Resume(uVar1);
  return (undefined *)0x1;
}



/* Entry: 109cd4cac; end: 109cd4cb3; -[Clip setWeightData:error:] */

undefined8 FUN_109cd4cac(void)

{
  return 1;
}



/* Entry: 109cd4cb4; end: 109cd4f57; -[Clip encodeToCommandBuffer:inputs:outputs:error:] */

undefined8
FUN_109cd4cb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf45840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1806a0();
  lVar2 = param_4;
  func_0x00010c0dfd40(param_4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213a00(param_3,param_2,lVar2,0);
  _objc_release(lVar2);
  uVar3 = param_5;
  func_0x00010c0dfd40(param_5,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213a00(param_3,param_2,uVar3,1);
  _objc_release(uVar3);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  func_0x00010c0d85c0(puVar4,param_2,8,0);
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bf4df40();
  *puVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c1741a0(param_3,param_2,puVar4,0,0);
  uVar6 = *(ulong *)(param_1 + 8);
  func_0x00010c26d400();
  uVar7 = *(ulong *)(param_1 + 8);
  func_0x00010c0c3060();
  lVar2 = param_4;
  func_0x00010c0dfd40(param_4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c2a5040();
  lVar9 = param_4;
  func_0x00010c0dfd40(param_4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfe0640();
  lVar11 = param_4;
  func_0x00010c0dfd40(param_4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf0a040();
  uStack_88 = 0;
  if (uVar6 != 0) {
    uStack_88 = uVar7 / uVar6;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar7 = ((uVar6 + lVar8) - 1) / uVar6;
  }
  uVar1 = 0;
  if (uStack_88 != 0) {
    uVar1 = ((uStack_88 + lVar10) - 1) / uStack_88;
  }
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar2);
  uStack_80 = 1;
  uStack_90 = uVar6;
  uStack_78 = uVar7;
  uStack_70 = uVar1;
  lStack_68 = lVar12;
  func_0x00010bf85260(param_3,param_2,&uStack_78,&uStack_90);
  func_0x00010bf94840(param_3);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return 1;
}



/* Entry: 109cd4f58; end: 109cd4f5f; -[Clip clipPipelineState] */

undefined8 FUN_109cd4f58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109cd4f60; end: 109cd4f8f; -[Clip setClipPipelineState:] */

void FUN_109cd4f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109cd4f90; end: 109cd4f97; -[Clip device] */

undefined8 FUN_109cd4f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109cd4f98; end: 109cd4fc7; -[Clip setDevice:] */

void FUN_109cd4f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109cd4fc8; end: 109cd4fcf; -[Clip clipParameters] */

undefined4 FUN_109cd4fc8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 109cd4fd0; end: 109cd4fd7; -[Clip setClipParameters:] */

void FUN_109cd4fd0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x18) = param_1;
  *(undefined4 *)(param_3 + 0x1c) = param_2;
  return;
}



/* Entry: 109cd4fd8; end: 109cd5007; -[Clip .cxx_destruct] */

void FUN_109cd4fd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109cd5008; end: 109cd52db; -[Concat evaluateOnCPUWithInputs:outputs:error:] */

undefined8 FUN_109cd5008(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  lVar3 = lVar2;
  func_0x00010bf64040();
  uVar4 = param_3;
  func_0x00010c0dfd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22a600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010c0dfd20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c067ec0();
  uVar7 = uVar5;
  func_0x00010c0dfd20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c067ec0();
  uVar9 = uVar5;
  func_0x00010c0dfd20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c067ec0();
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar4);
  for (lVar13 = 0; uVar4 = param_3, func_0x00010bf529e0(), lVar13 < (int)uVar4; lVar13 = lVar13 + 1)
  {
    uVar4 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c22a600();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c067ec0();
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x00010c0dfd20(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c067ec0();
    _objc_release(uVar9);
    uVar9 = uVar4;
    _objc_retainAutorelease(uVar4);
    func_0x00010bf64040();
    uVar1 = (int)uVar8 * (int)uVar10 * (int)uVar6 * (int)uVar11 * (int)uVar12;
    _memcpy(lVar3,uVar9,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
    lVar3 = lVar3 + (long)(int)uVar1 * 4;
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 109cd52dc; end: 109cd54a7; -[Concat initWithParameterDictionary:error:] */

long FUN_109cd52dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = param_1;
  _MTLCreateSystemDefaultDevice();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar6;
  _objc_release(uVar4);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar3 = 0;
    goto LAB_109cd5428;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f5a7557,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d8bc0(lVar6,param_2,puVar1,0,param_4);
  _objc_release(puVar1);
  if (lVar6 == 0) {
    lVar2 = *param_4;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&PTR____CFConstantStringClassReference_110f2dad8);
LAB_109cd5414:
    lVar3 = 0;
  }
  else {
    lVar2 = lVar6;
    func_0x00010c0d8900(lVar6,param_2,&PTR____CFConstantStringClassReference_110f2db18);
    if (lVar2 == 0) goto LAB_109cd5414;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d87c0(uVar4,param_2,lVar2,param_4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar4;
    _objc_release(uVar5);
    if (*(long *)(param_1 + 8) == 0) {
      lVar3 = *param_4;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&PTR____CFConstantStringClassReference_110f2dad8);
      _objc_release(lVar3);
      goto LAB_109cd5414;
    }
    func_0x00010bfee200(param_1);
    _objc_retain();
    lVar3 = param_1;
  }
  _objc_release(lVar2);
  _objc_release(lVar6);
LAB_109cd5428:
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 109cd54a8; end: 109cd57cf; -[Concat outputShapesForInputShapes:error:] */

undefined * FUN_109cd54a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar8 = (undefined *)0x0;
  for (lVar9 = 0; uVar1 = param_3, func_0x00010bf529e0(),
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570, lVar9 < (int)uVar1; lVar9 = lVar9 + 1) {
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    puVar7 = puVar8;
    func_0x00010c067ec0(puVar8);
    func_0x00010c0df760(puVar6,param_2,(int)puVar7 + (int)uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar8 = puVar6;
  }
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar8;
  uStack_80 = uVar2;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  uStack_68 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar8);
  uVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar8);
  _objc_release(param_3);
  __Unwind_Resume(uVar1);
  __Unwind_Resume();
  return (undefined *)0x1;
}



/* Entry: 109cd57d0; end: 109cd57d7; -[Concat setWeightData:error:] */

undefined8 FUN_109cd57d0(void)

{
  return 1;
}



/* Entry: 109cd57d8; end: 109cd5a5f; -[Concat encodeToCommandBuffer:inputs:outputs:error:] */

undefined8
FUN_109cd57d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_98 = 0;
  for (lVar11 = 0; lVar1 = param_4, func_0x00010bf529e0(), lVar11 < (int)lVar1; lVar11 = lVar11 + 1)
  {
    uVar2 = param_3;
    func_0x00010bf45840(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1806a0();
    lVar1 = param_4;
    func_0x00010c0dfd40(param_4,param_2,lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213a00(uVar2,param_2,lVar1,0);
    plVar3 = *(long **)(param_1 + 0x10);
    func_0x00010c0d85c0(plVar3,param_2,8,0);
    plVar4 = plVar3;
    _objc_retainAutorelease();
    func_0x00010bf4df40();
    *plVar4 = lStack_98;
    func_0x00010c1741a0(uVar2,param_2,plVar3,0,0);
    uVar5 = param_5;
    func_0x00010c0dfd40(param_5,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213a00(uVar2,param_2,uVar5,1);
    _objc_release(uVar5);
    uVar6 = *(ulong *)(param_1 + 8);
    func_0x00010c26d400();
    uVar7 = *(ulong *)(param_1 + 8);
    func_0x00010c0c3060();
    lVar8 = lVar1;
    func_0x00010c2a5040();
    lVar9 = lVar1;
    func_0x00010bfe0640();
    lVar10 = lVar1;
    func_0x00010bf0a040();
    uStack_88 = 0;
    if (uVar6 != 0) {
      uStack_88 = uVar7 / uVar6;
    }
    uStack_78 = 0;
    if (uVar6 != 0) {
      uStack_78 = ((uVar6 + lVar8) - 1) / uVar6;
    }
    uStack_70 = 0;
    if (uStack_88 != 0) {
      uStack_70 = ((uStack_88 + lVar9) - 1) / uStack_88;
    }
    uStack_80 = 1;
    uStack_90 = uVar6;
    lStack_68 = lVar10;
    func_0x00010bf85260(uVar2,param_2,&uStack_78,&uStack_90);
    func_0x00010bf94840(uVar2);
    lVar8 = lVar1;
    func_0x00010bf0a040();
    lStack_98 = lVar8 + lStack_98;
    _objc_release(plVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 109cd5a60; end: 109cd5a67; -[Concat concatPipelineState] */

undefined8 FUN_109cd5a60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109cd5a68; end: 109cd5a97; -[Concat setConcatPipelineState:] */

void FUN_109cd5a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109cd5a98; end: 109cd5a9f; -[Concat device] */

undefined8 FUN_109cd5a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109cd5aa0; end: 109cd5acf; -[Concat setDevice:] */

void FUN_109cd5aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109cd5ad0; end: 109cd5aff; -[Concat .cxx_destruct] */

void FUN_109cd5ad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



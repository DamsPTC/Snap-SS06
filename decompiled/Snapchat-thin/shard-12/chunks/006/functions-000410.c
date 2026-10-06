/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109351ff8; end: 10935201b;  */

undefined ** FUN_109351ff8(void)

{
  return &PTR_DAT_110af1bb0;
}



/* Entry: 10935201c; end: 10935222f;  */

byte * FUN_10935201c(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x14);
    }
    *param_2 = 0x10;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar9 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar10 = (int)pbVar4;
          _memcpy(param_2,lVar9,(long)iVar10);
          uVar3 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar3;
          lVar9 = lVar9 + iVar10;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar10;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109352230; end: 1093522a7;  */

long FUN_109352230(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x14) * 2;
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



/* Entry: 1093522a8; end: 1093523eb;  */

void FUN_1093522a8(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110af19d8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 1093523ec; end: 109352513;  */

undefined8 * FUN_1093523ec(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af1a28;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(puVar1 + 2,param_2 + 0x10);
  }
  *(undefined4 *)(puVar1 + 7) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  puVar1[6] = *(undefined8 *)(param_2 + 0x30);
  puVar1[5] = uVar2;
  return puVar1;
}



/* Entry: 109352514; end: 1093525a3;  */

undefined8 * FUN_109352514(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af1a78;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x14) = 0;
  FUN_1093516f8();
  return puVar1;
}



/* Entry: 1093525a4; end: 1093525fb;  */

long FUN_1093525a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093525fc; end: 10935261b;  */

undefined ** FUN_1093525fc(void)

{
  return &PTR_DAT_110af1c98;
}



/* Entry: 10935261c; end: 10935283f;  */

long * FUN_10935261c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar1 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar1 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  plVar3 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar3 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  plVar1 = plVar3;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar1 = param_3;
    func_0x0001088bdd44(param_3,*(int *)(param_1 + 0x1c),plVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(plVar1,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lVar6,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar6,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109352840; end: 10935291f;  */

long FUN_109352840(long param_1)

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
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar1;
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



/* Entry: 109352920; end: 1093529a7;  */

void FUN_109352920(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af1c58;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1093529a8; end: 1093529ab;  */

long FUN_1093529a8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 1093529ac; end: 1093529bf;  */

void FUN_1093529ac(void)

{
  func_0x00010935296c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093529c0; end: 109352a43;  */

undefined ** FUN_1093529c0(void)

{
  return &PTR_DAT_110af1d40;
}



/* Entry: 109352a44; end: 109352caf;  */

long * FUN_109352a44(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  int iVar12;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar9[1];
    if (lVar2 == 0) goto LAB_109352ab4;
    puVar1 = (undefined8 *)*puVar9;
  }
  else {
    puVar1 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_109352ab4;
  }
  func_0x000107c303d4(puVar1,lVar2,1,&UNK_10f56682c);
  plVar6 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = plVar6;
LAB_109352ab4:
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar3 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar3 + 8);
  }
  plVar6 = param_2;
  if (lVar2 != 0) {
    plVar6 = param_3;
    func_0x000107c280a0(param_3,2,uVar3,param_2);
  }
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    plVar5 = (long *)*param_3;
    if (plVar5 <= plVar6) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar6 = param_3 + 2;
          break;
        }
        plVar7 = param_3;
        func_0x000107c303dc();
        plVar6 = (long *)((long)plVar7 + (long)((int)plVar6 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= plVar6);
      iVar12 = *(int *)(param_1 + 0x20);
    }
    *(undefined1 *)plVar6 = 0x1d;
    *(int *)((long)plVar6 + 1) = iVar12;
    plVar6 = (long *)((long)plVar6 + 5);
  }
  plVar5 = plVar6;
  if (*(int *)(param_1 + 0x24) != 0) {
    plVar5 = param_3;
    func_0x0001088bdd44(param_3,*(int *)(param_1 + 0x24),plVar6);
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar6 = (long *)*param_3;
    if (plVar5 < plVar6) {
      uVar4 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar5 = param_3 + 2;
          break;
        }
        plVar7 = param_3;
        func_0x000107c303dc();
        plVar5 = (long *)((long)plVar7 + (long)((int)plVar5 - (int)plVar6));
        plVar6 = (long *)*param_3;
      } while (plVar6 <= plVar5);
      uVar4 = *(undefined1 *)(param_1 + 0x28);
    }
    *(undefined1 *)plVar5 = 0x28;
    *(undefined1 *)((long)plVar5 + 1) = uVar4;
    plVar5 = (long *)((long)plVar5 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar2 = *(long *)(uVar3 + 8);
      uVar10 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar2 = uVar3 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*param_3 - (long)plVar5 < (long)(int)uVar8) {
      puVar11 = (undefined1 *)((*param_3 - (long)plVar5) + 0x10);
      if ((int)puVar11 < (int)uVar8) {
        do {
          iVar12 = (int)puVar11;
          _memcpy(plVar5,lVar2,(long)iVar12);
          uVar8 = (int)uVar10 - iVar12;
          uVar10 = (ulong)uVar8;
          lVar2 = lVar2 + iVar12;
          plVar7 = (long *)*param_3;
          plVar6 = (long *)((long)plVar5 + (long)iVar12);
          do {
            plVar5 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar5 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar5 + (long)((int)plVar6 - (int)plVar7));
            plVar7 = (long *)*param_3;
            plVar5 = plVar6;
          } while (plVar7 <= plVar6);
          puVar11 = (undefined1 *)((long)plVar7 + (0x10 - (long)plVar5));
        } while ((int)puVar11 < (int)uVar8);
      }
      _memcpy(plVar5,lVar2,(long)(int)uVar8);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar5,lVar2,uVar10 & 0xffffffff);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar8);
    }
  }
  return plVar5;
}



/* Entry: 109352cb0; end: 109352daf;  */

long FUN_109352cb0(long param_1)

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
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = lVar2 + 5;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x28) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar2;
  return lVar2;
}



/* Entry: 109352db0; end: 109352e83;  */

void FUN_109352db0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 109352e84; end: 109352e8b;  */

void FUN_109352e84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110af1d00;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 109352e8c; end: 109352f3f;  */

void FUN_109352e8c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af1d00;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 109352f40; end: 109352f5f;  */

undefined ** FUN_109352f40(void)

{
  return &PTR_DAT_110af1e38;
}



/* Entry: 109352f60; end: 10935309f;  */

long * FUN_109352f60(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 1093530a0; end: 109353113;  */

ulong FUN_1093530a0(long param_1)

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



/* Entry: 109353114; end: 10935315f;  */

long FUN_109353114(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109353160; end: 109353163;  */

long FUN_109353160(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109353164; end: 109353177;  */

void FUN_109353164(void)

{
  FUN_109353114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109353178; end: 109353183;  */

undefined ** FUN_109353178(void)

{
  return &PTR_DAT_110af1e98;
}



/* Entry: 109353184; end: 1093531cf;  */

void FUN_109353184(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109352f4c(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1093531d0; end: 1093533a3;  */

byte * FUN_1093531d0(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  pbVar4 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar4 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar4 < (long)(int)uVar3) {
      pbVar8 = (byte *)((*param_3 - (long)pbVar4) + 0x10);
      if ((int)pbVar8 < (int)uVar3) {
        do {
          iVar10 = (int)pbVar8;
          _memcpy(pbVar4,lVar2,(long)iVar10);
          uVar3 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar10;
          pbVar8 = (byte *)*param_3;
          pbVar9 = pbVar4 + iVar10;
          do {
            pbVar4 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar1 + (long)((int)pbVar9 - (int)pbVar8));
            pbVar8 = (byte *)*param_3;
            pbVar4 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar4);
        } while ((int)pbVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar4,lVar2,(long)(int)(uint)uStack_48);
      pbVar4 = pbVar4 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar4,lVar2,uStack_48 & 0xffffffff);
      pbVar4 = pbVar4 + (int)uVar3;
    }
  }
  return pbVar4;
}



/* Entry: 1093533a4; end: 10935343b;  */

void FUN_1093533a4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_1093530a0();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10935343c; end: 1093534fb;  */

/* WARNING: Possible PIC construction at 0x000109353494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109353498) */

void FUN_10935343c(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x19;
  ulong *puVar8;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar8 = (ulong *)(param_1 + 8);
  uVar4 = *puVar8;
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_2 + 0x18);
    if (lVar7 == 0) {
      FUN_1093535a0();
      *(ulong *)(param_1 + 0x18) = uVar4;
    }
    else {
      iVar3 = *(int *)(lVar6 + 0x10);
      if (iVar3 != 0) {
        *(int *)(lVar7 + 0x10) = iVar3;
      }
      if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
        unaff_x30 = 0x109353498;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        puVar5 = (ulong *)(lVar7 + 8);
        unaff_x19 = puVar8;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  puVar5 = puVar8;
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



/* Entry: 1093534fc; end: 10935350b;  */

void FUN_1093534fc(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110af1da8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 10935350c; end: 10935359f;  */

void FUN_10935350c(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110af1da8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 1093535a0; end: 10935363f;  */

undefined8 * FUN_1093535a0(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110af1da8;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109353640; end: 10935373f;  */

void FUN_109353640(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if ((iVar1 != 1) && (iVar1 != 2)) goto LAB_1093536e4;
    }
    else if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_1093536e4;
  }
  else if (iVar1 < 7) {
    if ((iVar1 != 5) && (iVar1 != 6)) goto LAB_1093536e4;
  }
  else if ((iVar1 != 7) && (iVar1 != 8)) goto LAB_1093536e4;
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if ((uVar2 == 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar3);
  }
LAB_1093536e4:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109353740; end: 109353743;  */

long FUN_109353740(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109353640(param_1);
  }
  return param_1;
}



/* Entry: 109353744; end: 109353757;  */

void FUN_109353744(void)

{
  func_0x000109353704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109353758; end: 1093538b7;  */

long FUN_109353758(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093538b8; end: 1093538c3;  */

undefined ** FUN_1093538b8(void)

{
  return &PTR_DAT_110af2228;
}



/* Entry: 1093538c4; end: 1093538fb;  */

void FUN_1093538c4(long param_1)

{
  ulong *puVar1;
  
  FUN_109353640();
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



/* Entry: 1093538fc; end: 109353a57;  */

long * FUN_1093538fc(long param_1,long *param_2,long *param_3)

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
  
  plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
  uVar3 = *(uint *)(param_1 + 0x1c) - 1;
  if (uVar3 < 8) {
    func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x10),
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x10) + *(long *)(&UNK_10dfc7410 + (ulong)uVar3 * 8)),
                        param_2,param_3);
    param_2 = plVar1;
  }
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
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
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



/* Entry: 109353a58; end: 109353bdb;  */

void FUN_109353a58(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
        FUN_1093543a4();
        goto LAB_109353b64;
      }
      if (iVar1 != 2) goto LAB_109353b80;
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
      if ((uVar3 & 1) == 0) {
        lVar4 = 0;
      }
      else {
        uVar3 = uVar3 & 0xfffffffffffffffe;
        lVar4 = (long)*(char *)(uVar3 + 0x1f);
        if (lVar4 < 0) {
          lVar4 = *(long *)(uVar3 + 0x10);
        }
      }
      iVar2 = (int)lVar4;
      *(int *)(*(long *)(param_1 + 0x10) + 0x10) = iVar2;
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 != 4) goto LAB_109353b80;
        iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
        FUN_109354ee8();
        goto LAB_109353b64;
      }
LAB_109353b1c:
      lVar4 = *(long *)(param_1 + 0x10);
      iVar2 = (uint)*(byte *)(lVar4 + 0x10) * 2;
      if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
        uVar3 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffe;
        lVar5 = (long)*(char *)(uVar3 + 0x1f);
        if (lVar5 < 0) {
          lVar5 = *(long *)(uVar3 + 0x10);
        }
        iVar2 = (int)lVar5 + iVar2;
      }
      *(int *)(lVar4 + 0x14) = iVar2;
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
    }
  }
  else {
    if (iVar1 < 7) {
      if (iVar1 == 5) {
        iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
        FUN_1093551f0();
      }
      else {
        if (iVar1 != 6) goto LAB_109353b80;
        iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
        FUN_1093555b0();
      }
    }
    else {
      if (iVar1 == 7) goto LAB_109353b1c;
      if (iVar1 != 8) goto LAB_109353b80;
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_1093547f4();
    }
LAB_109353b64:
    iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6);
  }
  iVar2 = iVar2 + 1;
LAB_109353b80:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}



/* Entry: 109353bdc; end: 109353edb;  */

/* WARNING: Possible PIC construction at 0x000109353e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109353e10) */

void FUN_109353bdc(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong *unaff_x19;
  ulong *puVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar9 = (ulong *)(param_1 + 8);
  uVar10 = *puVar9;
  if ((uVar10 & 1) != 0) {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_109353e94;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109353640(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 < 5) {
    if (iVar2 < 3) {
      if (iVar2 == 1) {
        if (iVar3 != 1) {
          FUN_109355d70(uVar10,*(undefined8 *)(param_2 + 0x10));
          goto LAB_109353e90;
        }
        ppuVar8 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 1) {
          ppuVar8 = &PTR_PTR_1132dbb30;
        }
        FUN_109353edc(*(undefined8 *)(param_1 + 0x10),ppuVar8);
      }
      else if (iVar2 == 2) {
        if (iVar3 != 2) {
          FUN_109355dfc(uVar10,*(undefined8 *)(param_2 + 0x10));
          goto LAB_109353e90;
        }
        ppuVar8 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 2) {
          ppuVar8 = &PTR_PTR_1132dc208;
        }
        if (((ulong)ppuVar8[1] & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x10);
          goto LAB_109353e0c;
        }
      }
    }
    else if (iVar2 == 3) {
      if (iVar3 != 3) {
        FUN_109355e94(uVar10,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109353e90;
      }
      lVar6 = *(long *)(param_1 + 0x10);
      ppuVar7 = *(undefined ***)(param_2 + 0x10);
      ppuVar8 = &PTR_PTR_1132dc1c0;
      bVar4 = *(int *)(param_2 + 0x1c) == 3;
LAB_109353de4:
      if (!bVar4) {
        ppuVar7 = ppuVar8;
      }
      if (*(char *)(ppuVar7 + 2) == '\x01') {
        *(undefined1 *)(lVar6 + 0x10) = 1;
      }
LAB_109353df8:
      if (((ulong)ppuVar7[1] & 1) != 0) {
LAB_109353e0c:
        unaff_x30 = 0x109353e10;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar5 = (ulong *)(lVar6 + 8);
        unaff_x19 = puVar9;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
    else if (iVar2 == 4) {
      if (iVar3 != 4) {
        FUN_109355f38(uVar10,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109353e90;
      }
      ppuVar8 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 4) {
        ppuVar8 = &PTR_PTR_1132dc220;
      }
      func_0x000109353f4c(*(undefined8 *)(param_1 + 0x10),ppuVar8);
    }
  }
  else if (iVar2 < 7) {
    if (iVar2 == 5) {
      if (iVar3 != 5) {
        FUN_109355fc8(uVar10,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109353e90;
      }
      ppuVar8 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 5) {
        ppuVar8 = &PTR_PTR_1132dc268;
      }
      func_0x000109353f90(*(undefined8 *)(param_1 + 0x10),ppuVar8);
    }
    else if (iVar2 == 6) {
      if (iVar3 != 6) {
        FUN_109356054(uVar10,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109353e90;
      }
      ppuVar8 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 6) {
        ppuVar8 = &PTR_PTR_1132dc240;
      }
      func_0x000109353fe0(*(undefined8 *)(param_1 + 0x10),ppuVar8);
    }
  }
  else {
    if (iVar2 == 7) {
      if (iVar3 == 7) {
        lVar6 = *(long *)(param_1 + 0x10);
        ppuVar7 = *(undefined ***)(param_2 + 0x10);
        ppuVar8 = &PTR_PTR_1132dc1d8;
        bVar4 = *(int *)(param_2 + 0x1c) == 7;
        goto LAB_109353de4;
      }
      FUN_1093560e0(uVar10,*(undefined8 *)(param_2 + 0x10));
    }
    else {
      if (iVar2 != 8) goto LAB_109353e94;
      if (iVar3 == 8) {
        lVar6 = *(long *)(param_1 + 0x10);
        ppuVar7 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 8) {
          ppuVar7 = &PTR_PTR_1132dc1f0;
        }
        if (*(int *)(ppuVar7 + 2) != 0) {
          *(int *)(lVar6 + 0x10) = *(int *)(ppuVar7 + 2);
        }
        goto LAB_109353df8;
      }
      FUN_109356184(uVar10,*(undefined8 *)(param_2 + 0x10));
    }
LAB_109353e90:
    *(ulong *)(param_1 + 0x10) = uVar10;
  }
LAB_109353e94:
  puVar5 = puVar9;
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



/* Entry: 109353edc; end: 109354037;  */

void FUN_109353edc(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 109354038; end: 109354063;  */

void FUN_109354038(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109354064; end: 10935408b;  */

undefined ** FUN_109354064(void)

{
  return &PTR_DAT_110af2278;
}



/* Entry: 10935408c; end: 1093543a3;  */

byte * FUN_10935408c(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  pbVar2 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    pbVar2 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  pbVar7 = pbVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    pbVar7 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),pbVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar6 + ((int)pbVar7 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar7);
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    pbVar6 = pbVar7 + 1;
    *pbVar7 = 0x18;
    uVar3 = (ulong)(int)uVar1;
    uVar4 = uVar3;
    pbVar2 = pbVar6;
    if (0x7f < uVar1) {
      do {
        pbVar6 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar5 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar2 = pbVar6;
      } while (uVar5 != 0);
    }
    pbVar7 = pbVar6 + 1;
    *pbVar6 = (byte)uVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar6 + ((int)pbVar7 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar7);
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    pbVar6 = pbVar7 + 1;
    *pbVar7 = 0x20;
    uVar3 = (ulong)(int)uVar1;
    uVar4 = uVar3;
    pbVar2 = pbVar6;
    if (0x7f < uVar1) {
      do {
        pbVar6 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar5 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar2 = pbVar6;
      } while (uVar5 != 0);
    }
    pbVar7 = pbVar6 + 1;
    *pbVar6 = (byte)uVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar6 + ((int)pbVar7 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar7);
      uVar1 = *(uint *)(param_1 + 0x20);
    }
    pbVar6 = pbVar7 + 1;
    *pbVar7 = 0x28;
    uVar3 = (ulong)(int)uVar1;
    uVar4 = uVar3;
    pbVar2 = pbVar6;
    if (0x7f < uVar1) {
      do {
        pbVar6 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar5 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar2 = pbVar6;
      } while (uVar5 != 0);
    }
    pbVar7 = pbVar6 + 1;
    *pbVar6 = (byte)uVar3;
  }
  pbVar2 = pbVar7;
  if (*(int *)(param_1 + 0x24) != 0) {
    pbVar2 = param_3;
    func_0x0001089f53c8(param_3,*(int *)(param_1 + 0x24),pbVar7);
  }
  pbVar7 = pbVar2;
  if (*(int *)(param_1 + 0x28) != 0) {
    pbVar7 = param_3;
    func_0x00010598f468(param_3,*(int *)(param_1 + 0x28),pbVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar8 = uVar4 + 8;
    }
    uVar1 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar1) {
      pbVar2 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar2 < (int)uVar1) {
        do {
          iVar9 = (int)pbVar2;
          _memcpy(pbVar7,lVar8,(long)iVar9);
          uVar1 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar1;
          lVar8 = lVar8 + iVar9;
          pbVar2 = *(byte **)param_3;
          pbVar6 = pbVar7 + iVar9;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar6 = pbVar7 + ((int)pbVar6 - (int)pbVar2);
            pbVar2 = *(byte **)param_3;
            pbVar7 = pbVar6;
          } while (pbVar2 <= pbVar6);
          pbVar2 = pbVar2 + (0x10 - (long)pbVar7);
        } while ((int)pbVar2 < (int)uVar1);
      }
      uStack_48._0_4_ = uVar1;
      _memcpy(pbVar7,lVar8,(long)(int)(uint)uStack_48);
      pbVar7 = pbVar7 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar7,lVar8,uStack_48 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar1;
    }
  }
  return pbVar7;
}



/* Entry: 1093543a4; end: 1093544ab;  */

ulong FUN_1093543a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x2c) = (int)uVar1;
  return uVar1;
}



/* Entry: 1093544ac; end: 1093544d7;  */

void FUN_1093544ac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1093544d8; end: 1093544f3;  */

undefined ** FUN_1093544d8(void)

{
  return &PTR_DAT_110af22c8;
}



/* Entry: 1093544f4; end: 10935461f;  */

long * FUN_1093544f4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109354620; end: 109354667;  */

long FUN_109354620(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109354668; end: 109354693;  */

void FUN_109354668(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109354694; end: 1093546b3;  */

undefined ** FUN_109354694(void)

{
  return &PTR_DAT_110af2318;
}



/* Entry: 1093546b4; end: 1093547f3;  */

long * FUN_1093546b4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 1093547f4; end: 109354867;  */

ulong FUN_1093547f4(long param_1)

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



/* Entry: 109354868; end: 109354893;  */

void FUN_109354868(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109354894; end: 1093548b3;  */

undefined ** FUN_109354894(void)

{
  return &PTR_DAT_110af2370;
}



/* Entry: 1093548b4; end: 109354a3f;  */

long * FUN_1093548b4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar8;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar4 = (long *)*param_3;
    if (param_2 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
      uVar2 = *(undefined1 *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 8;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lStack_50 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar7 = (int)puVar8;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)param_2));
        } while ((int)puVar8 < (int)uVar3);
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



/* Entry: 109354a40; end: 109354a9f;  */

long FUN_109354a40(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 109354aa0; end: 109354acb;  */

void FUN_109354aa0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109354acc; end: 109354aeb;  */

undefined ** FUN_109354acc(void)

{
  return &PTR_DAT_110af23c0;
}



/* Entry: 109354aec; end: 109354c77;  */

long * FUN_109354aec(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar8;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar4 = (long *)*param_3;
    if (param_2 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
      uVar2 = *(undefined1 *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 8;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lStack_50 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar7 = (int)puVar8;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)param_2));
        } while ((int)puVar8 < (int)uVar3);
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



/* Entry: 109354c78; end: 109354cd7;  */

long FUN_109354c78(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 109354cd8; end: 109354d03;  */

void FUN_109354cd8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109354d04; end: 109354d27;  */

undefined ** FUN_109354d04(void)

{
  return &PTR_DAT_110af2418;
}



/* Entry: 109354d28; end: 109354ee7;  */

long * FUN_109354d28(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uStack_48;
  undefined1 *puVar9;
  
  plVar5 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar5 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar1 = plVar5;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar5);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar5 = (long *)*param_3;
    if (plVar1 < plVar5) {
      uVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar6 + (long)((int)plVar1 - (int)plVar5));
        plVar5 = (long *)*param_3;
      } while (plVar5 <= plVar1);
      uVar3 = *(undefined1 *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x18;
    *(undefined1 *)((long)plVar1 + 1) = uVar3;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar2 = uVar7 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      puVar9 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar9 < (int)uVar4) {
        do {
          iVar8 = (int)puVar9;
          _memcpy(plVar1,lVar2,(long)iVar8);
          uVar4 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar4;
          lVar2 = lVar2 + iVar8;
          plVar6 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar6 <= plVar5);
          puVar9 = (undefined1 *)((long)plVar6 + (0x10 - (long)plVar1));
        } while ((int)puVar9 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(plVar1,lVar2,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar2,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar4);
    }
  }
  return plVar1;
}



/* Entry: 109354ee8; end: 109354f5f;  */

long FUN_109354ee8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109354f60; end: 109354f8b;  */

void FUN_109354f60(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109354f8c; end: 109354fab;  */

undefined ** FUN_109354f8c(void)

{
  return &PTR_DAT_110af2460;
}



/* Entry: 109354fac; end: 1093551ef;  */

byte * FUN_109354fac(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  pbVar2 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    pbVar2 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  pbVar7 = pbVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    pbVar7 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),pbVar2);
  }
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar6 + ((int)pbVar7 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar7);
      iVar9 = *(int *)(param_1 + 0x18);
    }
    *pbVar7 = 0x1d;
    *(int *)(pbVar7 + 1) = iVar9;
    pbVar7 = pbVar7 + 5;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 != 0) {
    pbVar2 = *(byte **)param_3;
    if (pbVar2 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar6 + ((int)pbVar7 - (int)pbVar2);
        pbVar2 = *(byte **)param_3;
      } while (pbVar2 <= pbVar7);
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    pbVar6 = pbVar7 + 1;
    *pbVar7 = 0x20;
    uVar3 = (ulong)(int)uVar1;
    uVar4 = uVar3;
    pbVar2 = pbVar6;
    if (0x7f < uVar1) {
      do {
        pbVar6 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar5 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar2 = pbVar6;
      } while (uVar5 != 0);
    }
    pbVar7 = pbVar6 + 1;
    *pbVar6 = (byte)uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar8 = uVar4 + 8;
    }
    uVar1 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar1) {
      pbVar2 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar2 < (int)uVar1) {
        do {
          iVar9 = (int)pbVar2;
          _memcpy(pbVar7,lVar8,(long)iVar9);
          uVar1 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar1;
          lVar8 = lVar8 + iVar9;
          pbVar2 = *(byte **)param_3;
          pbVar6 = pbVar7 + iVar9;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar6 = pbVar7 + ((int)pbVar6 - (int)pbVar2);
            pbVar2 = *(byte **)param_3;
            pbVar7 = pbVar6;
          } while (pbVar2 <= pbVar6);
          pbVar2 = pbVar2 + (0x10 - (long)pbVar7);
        } while ((int)pbVar2 < (int)uVar1);
      }
      uStack_48._0_4_ = uVar1;
      _memcpy(pbVar7,lVar8,(long)(int)(uint)uStack_48);
      pbVar7 = pbVar7 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar7,lVar8,uStack_48 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar1;
    }
  }
  return pbVar7;
}



/* Entry: 1093551f0; end: 109355287;  */

ulong FUN_1093551f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 109355288; end: 1093552b3;  */

void FUN_109355288(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1093552b4; end: 1093552d3;  */

undefined ** FUN_1093552b4(void)

{
  return &PTR_DAT_110af24a8;
}



/* Entry: 1093552d4; end: 1093555af;  */

byte * FUN_1093552d4(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 != 0) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      iVar9 = *(int *)(param_1 + 0x10);
    }
    *param_2 = 0xd;
    *(int *)(param_2 + 1) = iVar9;
    param_2 = param_2 + 5;
  }
  iVar9 = *(int *)(param_1 + 0x14);
  if (iVar9 != 0) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      iVar9 = *(int *)(param_1 + 0x14);
    }
    *param_2 = 0x15;
    *(int *)(param_2 + 1) = iVar9;
    param_2 = param_2 + 5;
  }
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 != 0) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      iVar9 = *(int *)(param_1 + 0x18);
    }
    *param_2 = 0x1d;
    *(int *)(param_2 + 1) = iVar9;
    param_2 = param_2 + 5;
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar2 != 0) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      uVar2 = *(uint *)(param_1 + 0x1c);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x20;
    uVar4 = (ulong)(int)uVar2;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar2) {
      do {
        pbVar7 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar8 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar3;
          _memcpy(param_2,lVar8,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar3 = (byte *)*param_3;
          pbVar7 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = (byte *)((long)plVar1 + (long)((int)pbVar7 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar7;
          } while (pbVar3 <= pbVar7);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar8,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar8,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar2;
    }
  }
  return param_2;
}



/* Entry: 1093555b0; end: 10935562f;  */

long FUN_1093555b0(long param_1)

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
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 109355630; end: 109355663;  */

long FUN_109355630(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109355a4c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109355664; end: 109355667;  */

long FUN_109355664(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109355a4c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109355668; end: 10935567b;  */

void FUN_109355668(void)

{
  FUN_109355630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10935567c; end: 109355687;  */

undefined ** FUN_10935567c(void)

{
  return &PTR_DAT_110af24f0;
}



/* Entry: 109355688; end: 1093556d3;  */

void FUN_109355688(long param_1)

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



/* Entry: 1093556d4; end: 10935599b;  */

byte * FUN_1093556d4(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar6 = (ulong)(int)uVar3;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  iVar11 = *(int *)(param_1 + 0x18);
  if (iVar11 != 0) {
    iVar10 = 0;
    pbVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar10 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x18),pbVar5,param_3);
      iVar10 = iVar10 + 1;
      pbVar5 = param_2;
    } while (iVar11 != iVar10);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar9 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar3) {
        do {
          iVar11 = (int)pbVar5;
          _memcpy(param_2,lVar9,(long)iVar11);
          uVar3 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar3;
          lVar9 = lVar9 + iVar11;
          pbVar5 = (byte *)*param_3;
          pbVar8 = param_2 + iVar11;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar2 + (long)((int)pbVar8 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar5 <= pbVar8);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 10935599c; end: 1093559fb;  */

void FUN_10935599c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 1093559fc; end: 109355a4b;  */

void FUN_1093559fc(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110af1f18;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109355a4c; end: 109355a7f;  */

long * FUN_109355a4c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109355a80; end: 109355d6f;  */

void FUN_109355a80(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110af1f18;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109355d70; end: 109355dfb;  */

undefined8 * FUN_109355d70(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110af2008;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  FUN_109353edc();
  return puVar1;
}



/* Entry: 109355dfc; end: 109355e93;  */

undefined8 * FUN_109355dfc(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110af2148;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109355e94; end: 109355f37;  */

undefined8 * FUN_109355e94(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110af1f68;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109355f38; end: 109355fc7;  */

undefined8 * FUN_109355f38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110af20f8;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  func_0x000109353f4c();
  return puVar1;
}



/* Entry: 109355fc8; end: 109356053;  */

undefined8 * FUN_109355fc8(undefined8 *param_1)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110af2058;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x000109353f90();
  return puVar1;
}



/* Entry: 109356054; end: 1093560df;  */

undefined8 * FUN_109356054(undefined8 *param_1)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110af1f18;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x000109353fe0();
  return puVar1;
}



/* Entry: 1093560e0; end: 109356183;  */

undefined8 * FUN_1093560e0(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110af1fb8;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109356184; end: 109356223;  */

undefined8 * FUN_109356184(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110af20a8;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109356224; end: 10935625f;  */

long FUN_109356224(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109356260; end: 109356263;  */

long FUN_109356260(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109356264; end: 109356277;  */

void FUN_109356264(void)

{
  FUN_109356224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109356278; end: 1093562f3;  */

undefined ** FUN_109356278(void)

{
  return &PTR_DAT_110af28a0;
}



/* Entry: 1093562f4; end: 10935648f;  */

long * FUN_1093562f4(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109356368;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109356368;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f566854);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109356368:
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  plVar2 = param_2;
  if (lVar3 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,2,uVar4,param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_48 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar2 < (long)(int)uVar7) {
      lVar3 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar3 < (int)uVar7) {
        do {
          iVar10 = (int)lVar3;
          _memcpy(plVar2,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar2 + (long)iVar10);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar3 = (long)plVar5 + (0x10 - (long)plVar2);
        } while ((int)lVar3 < (int)uVar7);
      }
      _memcpy(plVar2,lStack_48,(long)(int)uVar7);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar2,lStack_48,uVar9 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
  }
  return plVar2;
}



/* Entry: 109356490; end: 109356553;  */

long FUN_109356490(long param_1)

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
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 109356554; end: 1093565fb;  */

void FUN_109356554(long param_1,long param_2)

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



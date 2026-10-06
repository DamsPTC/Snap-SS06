/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109326220; end: 1093264a3;  */

byte * FUN_109326220(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar10 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar10 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc,param_2);
  }
  uVar12 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar12) {
    uVar15 = 0;
    pbVar5 = param_3 + 0x10;
    do {
      pbVar4 = pbVar10;
      pbVar9 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar4 = pbVar5;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093262e4:
            param_3[0x38] = 1;
LAB_10932637c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar9;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar9 + 8);
              *(undefined8 *)pbVar5 = uVar16;
              *(byte **)(param_3 + 8) = pbVar9;
              goto LAB_10932637c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar5,(long)pbVar9 - (long)pbVar5);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_1093262e4;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar5 = uVar16;
              *(byte **)param_3 = pbVar5 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar16;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar4 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar4 + ((int)pbVar10 - (int)pbVar9);
          pbVar4 = pbVar10;
          pbVar9 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + uVar15 * 4);
      uVar3 = (ulong)(int)uVar1;
      pbVar9 = pbVar4 + 1;
      *pbVar4 = 0x10;
      uVar13 = uVar3;
      pbVar10 = pbVar9;
      if (0x7f < uVar1) {
        do {
          pbVar9 = pbVar10 + 1;
          *pbVar10 = (byte)uVar13 | 0x80;
          uVar3 = uVar13 >> 7;
          uVar7 = uVar13 >> 0xe;
          uVar13 = uVar3;
          pbVar10 = pbVar9;
        } while (uVar7 != 0);
      }
      pbVar10 = pbVar9 + 1;
      *pbVar9 = (byte)uVar3;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar12);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar11 = *(long *)(uVar15 + 8);
      uVar13 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar11 = uVar15 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*(long *)param_3 - (long)pbVar10 < (long)(int)uVar12) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10);
      if ((int)pbVar5 < (int)uVar12) {
        do {
          iVar14 = (int)pbVar5;
          _memcpy(pbVar10,lVar11,(long)iVar14);
          uVar12 = (int)uVar13 - iVar14;
          uVar13 = (ulong)uVar12;
          lVar11 = lVar11 + iVar14;
          pbVar5 = *(byte **)param_3;
          pbVar4 = pbVar10 + iVar14;
          do {
            pbVar10 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar10 = param_3;
            func_0x000107c303dc();
            pbVar4 = pbVar10 + ((int)pbVar4 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar10 = pbVar4;
          } while (pbVar5 <= pbVar4);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar10);
        } while ((int)pbVar5 < (int)uVar12);
      }
      _memcpy(pbVar10,lVar11,(long)(int)uVar12);
      pbVar10 = pbVar10 + (int)uVar12;
    }
    else {
      _memcpy(pbVar10,lVar11,uVar13 & 0xffffffff);
      pbVar10 = pbVar10 + (int)uVar12;
    }
  }
  return pbVar10;
}



/* Entry: 1093264a4; end: 10932655b;  */

long FUN_1093264a4(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x20);
    do {
      lVar3 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar3;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
  }
  lVar3 = lVar3 + (ulong)uVar1;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar6 + 0x17);
    uVar6 = *(ulong *)(uVar6 + 8);
    if (-1 < (char)bVar2) {
      uVar6 = (ulong)bVar2;
    }
    lVar3 = lVar3 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10932655c; end: 109326647;  */

void FUN_10932655c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 0x28);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar6 & 0xfffffffffffffffc,uVar4);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 109326648; end: 10932668b;  */

long FUN_109326648(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
  FUN_10932e3d4(param_1 + 0x30);
  FUN_10932e408(param_1 + 0x18);
  return param_1;
}



/* Entry: 10932668c; end: 10932668f;  */

long FUN_10932668c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
  FUN_10932e3d4(param_1 + 0x30);
  FUN_10932e408(param_1 + 0x18);
  return param_1;
}



/* Entry: 109326690; end: 1093266a3;  */

void FUN_109326690(void)

{
  FUN_109326648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093266a4; end: 1093266af;  */

undefined ** FUN_1093266a4(void)

{
  return &PTR_DAT_110aee148;
}



/* Entry: 1093266b0; end: 10932673f;  */

void FUN_1093266b0(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109326740; end: 109326a63;  */

long * FUN_109326740(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  ulong uStack_48;
  long lVar10;
  
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 != 0) {
    iVar8 = 0;
    plVar2 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar2,param_3);
      iVar8 = iVar8 + 1;
      plVar2 = param_2;
    } while (iVar9 != iVar8);
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,2,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc,param_2);
  }
  iVar9 = *(int *)(param_1 + 0x38);
  if (iVar9 != 0) {
    iVar8 = 0;
    plVar7 = plVar2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
      }
      plVar2 = (long *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar7,param_3);
      iVar8 = iVar8 + 1;
      plVar7 = plVar2;
    } while (iVar9 != iVar8);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      lVar10 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar10 < (int)uVar4) {
        do {
          iVar9 = (int)lVar10;
          _memcpy(plVar2,lVar3,(long)iVar9);
          uVar4 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar4;
          lVar3 = lVar3 + iVar9;
          plVar6 = (long *)*param_3;
          plVar7 = (long *)((long)plVar2 + (long)iVar9);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar2 + (long)((int)plVar7 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar2 = plVar7;
          } while (plVar6 <= plVar7);
          lVar10 = (long)plVar6 + (0x10 - (long)plVar2);
        } while ((int)lVar10 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(plVar2,lVar3,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lVar3,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar4);
    }
  }
  return plVar2;
}



/* Entry: 109326a64; end: 109326a67;  */

void FUN_109326a64(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 0x48);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar3 & 0xfffffffffffffffc,uVar2);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 109326a68; end: 109326b1f;  */

void FUN_109326a68(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 0x48);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar3 & 0xfffffffffffffffc,uVar2);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 109326b20; end: 109326b53;  */

long FUN_109326b20(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109326b54; end: 109326b57;  */

long FUN_109326b54(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109326b58; end: 109326b6b;  */

void FUN_109326b58(void)

{
  FUN_109326b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109326b6c; end: 109326b77;  */

undefined ** FUN_109326b6c(void)

{
  return &PTR_DAT_110aee188;
}



/* Entry: 109326b78; end: 109326bbf;  */

void FUN_109326b78(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
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



/* Entry: 109326bc0; end: 109326d83;  */

long * FUN_109326bc0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar11;
  undefined1 *puVar10;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar11 = 8;
    plVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + lVar11 + -1);
      }
      plVar3 = (long *)*puVar1;
      lVar7 = (long)*(char *)((long)plVar3 + 0x17);
      if (((lVar7 < 0) && (lVar7 = plVar3[1], 0x7f < lVar7)) ||
         ((*param_3 - (long)plVar5) + 0xe < lVar7)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,1,plVar3,plVar5);
      }
      else {
        *(undefined1 *)plVar5 = 10;
        *(char *)((long)plVar5 + 1) = (char)lVar7;
        if (*(char *)((long)plVar3 + 0x17) < '\0') {
          plVar3 = (long *)*plVar3;
        }
        _memcpy((undefined1 *)((long)plVar5 + 2),plVar3,lVar7);
        param_2 = (long *)((undefined1 *)((long)plVar5 + 2) + lVar7);
      }
      lVar11 = lVar11 + 8;
      uVar8 = uVar8 - 1;
      plVar5 = param_2;
    } while (uVar8 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar8 + 8);
      uVar4 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar11 = uVar8 + 8;
    }
    uVar6 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      puVar10 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar10 < (int)uVar6) {
        do {
          iVar9 = (int)puVar10;
          _memcpy(param_2,lVar11,(long)iVar9);
          uVar6 = (int)uVar4 - iVar9;
          uVar4 = (ulong)uVar6;
          lVar11 = lVar11 + iVar9;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar2 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar3 <= plVar5);
          puVar10 = (undefined1 *)((long)plVar3 + (0x10 - (long)param_2));
        } while ((int)puVar10 < (int)uVar6);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar6);
      param_2 = (long *)((long)param_2 + (long)(int)uVar6);
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar6);
    }
  }
  return param_2;
}



/* Entry: 109326d84; end: 109326e1f;  */

ulong FUN_109326d84(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar8 = (ulong *)(uVar7 + 7);
    uVar6 = uVar4;
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
      uVar4 = uVar2 + uVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar4 = lVar5 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 109326e20; end: 109326ecb;  */

void FUN_109326e20(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109326ecc; end: 109326ee7;  */

undefined ** FUN_109326ecc(void)

{
  return &PTR_DAT_110aee1c8;
}



/* Entry: 109326ee8; end: 109327013;  */

long * FUN_109326ee8(long param_1,long *param_2,long *param_3)

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



/* Entry: 109327014; end: 10932705b;  */

long FUN_109327014(long param_1)

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



/* Entry: 10932705c; end: 1093270b3;  */

long FUN_10932705c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093270b4; end: 1093270cf;  */

undefined ** FUN_1093270b4(void)

{
  return &PTR_DAT_110aee210;
}



/* Entry: 1093270d0; end: 1093271fb;  */

long * FUN_1093270d0(long param_1,long *param_2,long *param_3)

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



/* Entry: 1093271fc; end: 109327243;  */

long FUN_1093271fc(long param_1)

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



/* Entry: 109327244; end: 10932729b;  */

long FUN_109327244(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10932729c; end: 1093272b7;  */

undefined ** FUN_10932729c(void)

{
  return &PTR_DAT_110aee258;
}



/* Entry: 1093272b8; end: 1093273e3;  */

long * FUN_1093272b8(long param_1,long *param_2,long *param_3)

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



/* Entry: 1093273e4; end: 10932742b;  */

long FUN_1093273e4(long param_1)

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



/* Entry: 10932742c; end: 10932745f;  */

long FUN_10932742c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109327460; end: 109327463;  */

long FUN_109327460(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109327464; end: 109327477;  */

void FUN_109327464(void)

{
  FUN_10932742c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109327478; end: 109327483;  */

undefined ** FUN_109327478(void)

{
  return &PTR_DAT_110aee2a0;
}



/* Entry: 109327484; end: 1093274cb;  */

void FUN_109327484(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
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



/* Entry: 1093274cc; end: 10932768f;  */

long * FUN_1093274cc(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar11;
  undefined1 *puVar10;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar11 = 8;
    plVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + lVar11 + -1);
      }
      plVar3 = (long *)*puVar1;
      lVar7 = (long)*(char *)((long)plVar3 + 0x17);
      if (((lVar7 < 0) && (lVar7 = plVar3[1], 0x7f < lVar7)) ||
         ((*param_3 - (long)plVar5) + 0xe < lVar7)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,1,plVar3,plVar5);
      }
      else {
        *(undefined1 *)plVar5 = 10;
        *(char *)((long)plVar5 + 1) = (char)lVar7;
        if (*(char *)((long)plVar3 + 0x17) < '\0') {
          plVar3 = (long *)*plVar3;
        }
        _memcpy((undefined1 *)((long)plVar5 + 2),plVar3,lVar7);
        param_2 = (long *)((undefined1 *)((long)plVar5 + 2) + lVar7);
      }
      lVar11 = lVar11 + 8;
      uVar8 = uVar8 - 1;
      plVar5 = param_2;
    } while (uVar8 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar8 + 8);
      uVar4 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar11 = uVar8 + 8;
    }
    uVar6 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      puVar10 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar10 < (int)uVar6) {
        do {
          iVar9 = (int)puVar10;
          _memcpy(param_2,lVar11,(long)iVar9);
          uVar6 = (int)uVar4 - iVar9;
          uVar4 = (ulong)uVar6;
          lVar11 = lVar11 + iVar9;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar2 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar3 <= plVar5);
          puVar10 = (undefined1 *)((long)plVar3 + (0x10 - (long)param_2));
        } while ((int)puVar10 < (int)uVar6);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar6);
      param_2 = (long *)((long)param_2 + (long)(int)uVar6);
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar6);
    }
  }
  return param_2;
}



/* Entry: 109327690; end: 10932772b;  */

ulong FUN_109327690(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar8 = (ulong *)(uVar7 + 7);
    uVar6 = uVar4;
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
      uVar4 = uVar2 + uVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar8 = puVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar4 = lVar5 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 10932772c; end: 1093277d7;  */

void FUN_10932772c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 1093277d8; end: 1093277f3;  */

undefined ** FUN_1093277d8(void)

{
  return &PTR_DAT_110aee2e8;
}



/* Entry: 1093277f4; end: 10932791f;  */

long * FUN_1093277f4(long param_1,long *param_2,long *param_3)

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



/* Entry: 109327920; end: 109327967;  */

long FUN_109327920(long param_1)

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



/* Entry: 109327968; end: 1093279b3;  */

long FUN_109327968(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109322c1c();
    __ZdlPv();
  }
  FUN_10932e43c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1093279b4; end: 1093279b7;  */

long FUN_1093279b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109322c1c();
    __ZdlPv();
  }
  FUN_10932e43c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1093279b8; end: 1093279cb;  */

void FUN_1093279b8(void)

{
  FUN_109327968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093279cc; end: 1093279d7;  */

undefined ** FUN_1093279cc(void)

{
  return &PTR_DAT_110aee320;
}



/* Entry: 1093279d8; end: 109327a6b;  */

void FUN_1093279d8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109322ce8(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      return;
    }
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  return;
}



/* Entry: 109327a6c; end: 109327d43;  */

long * FUN_109327a6c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  long lVar9;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar4 >> 1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),param_2,param_3);
  }
  plVar3 = plVar2;
  if ((uVar4 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,2,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc,plVar2);
  }
  iVar8 = *(int *)(param_1 + 0x20);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar2 = plVar3;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      plVar3 = (long *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar2,param_3);
      iVar7 = iVar7 + 1;
      plVar2 = plVar3;
    } while (iVar8 != iVar7);
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
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)plVar3 < (long)(int)uVar4) {
      lVar9 = (*param_3 - (long)plVar3) + 0x10;
      if ((int)lVar9 < (int)uVar4) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(plVar3,lStack_50,(long)iVar8);
          uVar4 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar4;
          lStack_50 = lStack_50 + iVar8;
          plVar6 = (long *)*param_3;
          plVar2 = (long *)((long)plVar3 + (long)iVar8);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar3 = plVar2;
          } while (plVar6 <= plVar2);
          lVar9 = (long)plVar6 + (0x10 - (long)plVar3);
        } while ((int)lVar9 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(plVar3,lStack_50,(long)(int)(uint)uStack_48);
      plVar3 = (long *)((long)plVar3 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar3,lStack_50,uStack_48 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar4);
    }
  }
  return plVar3;
}



/* Entry: 109327d44; end: 109327d47;  */

void FUN_109327d44(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_109330094(uVar4,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar4;
      }
      else {
        FUN_109323810();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 109327d48; end: 109327e3b;  */

void FUN_109327d48(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_109330094(uVar4,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar4;
      }
      else {
        FUN_109323810();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 109327e3c; end: 109327f23;  */

long FUN_109327e3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10933ce20();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10933d910();
    __ZdlPv();
  }
  FUN_109311f44(param_1 + 0x88);
  if (0 < *(int *)(param_1 + 0x7c)) {
    if (*(long *)(*(long *)(param_1 + 0x80) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 100)) {
    if (*(long *)(*(long *)(param_1 + 0x68) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    if (*(long *)(*(long *)(param_1 + 0x50) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109327f24; end: 109327f27;  */

long FUN_109327f24(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10933ce20();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10933d910();
    __ZdlPv();
  }
  FUN_109311f44(param_1 + 0x88);
  if (0 < *(int *)(param_1 + 0x7c)) {
    if (*(long *)(*(long *)(param_1 + 0x80) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 100)) {
    if (*(long *)(*(long *)(param_1 + 0x68) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    if (*(long *)(*(long *)(param_1 + 0x50) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109327f28; end: 109327f3b;  */

void FUN_109327f28(void)

{
  FUN_109327e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109327f3c; end: 109327f47;  */

undefined ** FUN_109327f3c(void)

{
  return &PTR_DAT_110aee368;
}



/* Entry: 109327f48; end: 109328007;  */

void FUN_109327f48(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    func_0x0001053936e4(param_1 + 0x88);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xa0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010933cec4(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010933d97c(*(undefined8 *)(param_1 + 0xb0));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
      *(byte *)puVar3 = 0;
      *(byte *)((long)puVar3 + 0x17) = 0;
      return;
    }
    *(undefined1 *)*puVar3 = 0;
    puVar3[1] = 0;
    return;
  }
  return;
}



/* Entry: 109328008; end: 109328a63;  */

byte * FUN_109328008(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar14 = *(uint *)(param_1 + 0x10);
  pbVar10 = param_2;
  if ((uVar14 & 1) != 0) {
    pbVar10 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0xa0) & 0xfffffffffffffffc,param_2);
  }
  uVar13 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar13) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
    }
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x12;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        uVar8 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar8 != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x20);
    iVar20 = *(int *)(param_1 + 0x18);
    pbVar3 = param_3 + 0x10;
    puVar18 = puVar16;
    do {
      pbVar11 = pbVar10;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar11 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093280ec:
            param_3[0x38] = 1;
LAB_109328184:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar3 = uVar22;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_109328184;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar12 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_1093280ec;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar3 = uVar22;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar11 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar12);
          pbVar11 = pbVar10;
          pbVar12 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      puVar17 = puVar18 + 1;
      uVar4 = (ulong)(int)*puVar18;
      uVar5 = uVar4;
      pbVar10 = pbVar11;
      if (0x7f < *puVar18) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar21 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar11;
        } while (uVar21 != 0);
      }
      pbVar10 = pbVar11 + 1;
      *pbVar11 = (byte)uVar4;
      puVar18 = puVar17;
    } while (puVar17 < puVar16 + iVar20);
  }
  uVar13 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar13) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
    }
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x1a;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        uVar8 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar8 != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x38);
    iVar20 = *(int *)(param_1 + 0x30);
    pbVar3 = param_3 + 0x10;
    puVar18 = puVar16;
    do {
      pbVar11 = pbVar10;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar11 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109328244:
            param_3[0x38] = 1;
LAB_1093282dc:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar3 = uVar22;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_1093282dc;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar12 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109328244;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar3 = uVar22;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar11 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar12);
          pbVar11 = pbVar10;
          pbVar12 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      puVar17 = puVar18 + 1;
      uVar4 = (ulong)(int)*puVar18;
      uVar5 = uVar4;
      pbVar10 = pbVar11;
      if (0x7f < *puVar18) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar21 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar11;
        } while (uVar21 != 0);
      }
      pbVar10 = pbVar11 + 1;
      *pbVar11 = (byte)uVar4;
      puVar18 = puVar17;
    } while (puVar17 < puVar16 + iVar20);
  }
  uVar13 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar13) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
    }
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x22;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        uVar8 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar8 != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x50);
    iVar20 = *(int *)(param_1 + 0x48);
    pbVar3 = param_3 + 0x10;
    puVar18 = puVar16;
    do {
      pbVar11 = pbVar10;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar11 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10932839c:
            param_3[0x38] = 1;
LAB_109328434:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar3 = uVar22;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_109328434;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar12 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10932839c;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar3 = uVar22;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar11 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar12);
          pbVar11 = pbVar10;
          pbVar12 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      puVar17 = puVar18 + 1;
      uVar4 = (ulong)(int)*puVar18;
      uVar5 = uVar4;
      pbVar10 = pbVar11;
      if (0x7f < *puVar18) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar21 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar11;
        } while (uVar21 != 0);
      }
      pbVar10 = pbVar11 + 1;
      *pbVar11 = (byte)uVar4;
      puVar18 = puVar17;
    } while (puVar17 < puVar16 + iVar20);
  }
  uVar13 = *(uint *)(param_1 + 0x70);
  if (0 < (int)uVar13) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
    }
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x32;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar13 | 0x80;
        uVar8 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar8 != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x68);
    iVar20 = *(int *)(param_1 + 0x60);
    pbVar3 = param_3 + 0x10;
    puVar18 = puVar16;
    do {
      pbVar11 = pbVar10;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar11 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093284f4:
            param_3[0x38] = 1;
LAB_10932858c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar3 = uVar22;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_10932858c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar12 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_1093284f4;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar3 = uVar22;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar11 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar12);
          pbVar11 = pbVar10;
          pbVar12 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      puVar17 = puVar18 + 1;
      uVar4 = (ulong)(int)*puVar18;
      uVar5 = uVar4;
      pbVar10 = pbVar11;
      if (0x7f < *puVar18) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar21 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar11;
        } while (uVar21 != 0);
      }
      pbVar10 = pbVar11 + 1;
      *pbVar11 = (byte)uVar4;
      puVar18 = puVar17;
    } while (puVar17 < puVar16 + iVar20);
  }
  iVar20 = *(int *)(param_1 + 0x78);
  if (0 < iVar20) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar10) {
      do {
        if (param_3[0x38] == 1) {
          pbVar10 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar10 = pbVar11 + ((int)pbVar10 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar10);
      iVar20 = *(int *)(param_1 + 0x78);
    }
    uVar13 = iVar20 * 4;
    uVar4 = (ulong)uVar13;
    pbVar3 = pbVar10 + 1;
    *pbVar10 = 0x3a;
    uVar5 = uVar4;
    uVar8 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar3;
        uVar7 = (uint)uVar5;
        pbVar3 = pbVar10 + 1;
        *pbVar10 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar10 = pbVar10 + 2;
    *pbVar3 = (byte)uVar8;
    lVar19 = *(long *)(param_1 + 0x80);
    uVar21 = (ulong)(int)uVar13;
    uVar5 = uVar4;
    if ((*(long *)param_3 - (long)pbVar10 < (long)(int)uVar13) &&
       (pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10), uVar5 = uVar21,
       (int)pbVar3 < (int)uVar13)) {
      pbVar11 = param_3 + 0x10;
      do {
        iVar20 = (int)pbVar3;
        _memcpy(pbVar10,lVar19,(long)iVar20);
        uVar13 = (int)uVar4 - iVar20;
        uVar4 = (ulong)uVar13;
        lVar19 = lVar19 + iVar20;
        pbVar12 = pbVar10 + iVar20;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar10 = pbVar11;
          pbVar3 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109328930:
            param_3[0x38] = 1;
LAB_109328910:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar3 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar22 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar11 = uVar22;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109328910;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar11,(long)pbVar6 - (long)pbVar11);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109328930;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar22 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar11 = uVar22;
              *(byte **)param_3 = pbVar11 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar22 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar22;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar10 = pbStack_70;
            }
          }
          pbVar12 = pbVar10 + ((int)pbVar12 - (int)pbVar6);
          pbVar6 = pbVar3;
          pbVar10 = pbVar12;
        } while (pbVar3 <= pbVar12);
        pbVar3 = pbVar3 + (0x10 - (long)pbVar10);
      } while ((int)pbVar3 < (int)uVar13);
      uVar21 = (ulong)(int)uVar13;
      uVar5 = uVar21;
    }
    _memcpy(pbVar10,lVar19,uVar5);
    pbVar10 = pbVar10 + uVar21;
  }
  pbVar3 = pbVar10;
  if ((uVar14 >> 1 & 1) != 0) {
    pbVar3 = (byte *)0x8;
    func_0x000107c303cc(8,*(long *)(param_1 + 0xa8),
                        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x14),pbVar10,param_3);
  }
  pbVar10 = pbVar3;
  if ((uVar14 >> 2 & 1) != 0) {
    pbVar10 = (byte *)0x9;
    func_0x000107c303cc(9,*(long *)(param_1 + 0xb0),
                        *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x14),pbVar3,param_3);
  }
  iVar20 = *(int *)(param_1 + 0x90);
  if (iVar20 != 0) {
    iVar15 = 0;
    pbVar3 = pbVar10;
    do {
      uVar5 = *(ulong *)(param_1 + 0x88);
      puVar1 = (ulong *)(param_1 + 0x88);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar15 * 8 + 7);
      }
      pbVar10 = (byte *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar3,param_3);
      iVar15 = iVar15 + 1;
      pbVar3 = pbVar10;
    } while (iVar20 != iVar15);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar19 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar19 = uVar5 + 8;
    }
    uVar14 = (uint)uVar4;
    if (*(long *)param_3 - (long)pbVar10 < (long)(int)uVar14) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10);
      if ((int)pbVar3 < (int)uVar14) {
        do {
          iVar20 = (int)pbVar3;
          _memcpy(pbVar10,lVar19,(long)iVar20);
          uVar14 = (int)uVar4 - iVar20;
          uVar4 = (ulong)uVar14;
          lVar19 = lVar19 + iVar20;
          pbVar3 = *(byte **)param_3;
          pbVar11 = pbVar10 + iVar20;
          do {
            pbVar10 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar10 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar10 + ((int)pbVar11 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar10 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar10);
        } while ((int)pbVar3 < (int)uVar14);
      }
      _memcpy(pbVar10,lVar19,(long)(int)uVar14);
      pbVar10 = pbVar10 + (int)uVar14;
    }
    else {
      _memcpy(pbVar10,lVar19,uVar4 & 0xffffffff);
      pbVar10 = pbVar10 + (int)uVar14;
    }
  }
  return pbVar10;
}



/* Entry: 109328a64; end: 109328dbf;  */

long FUN_109328a64(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar6 = 0;
    lVar15 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar5 = 0;
    uVar8 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar7 = *(int **)(param_1 + 0x20);
    do {
      lVar5 = (ulong)((int)LZCOUNT((long)*piVar7) * -9 + 0x280U >> 6) + lVar5;
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar5;
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5;
    }
    lVar15 = 0;
    if (lVar5 != 0) {
      lVar15 = (ulong)((int)LZCOUNT((long)(int)lVar5) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 1) {
    lVar5 = 0;
    lVar10 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar7 = *(int **)(param_1 + 0x38);
    do {
      lVar9 = (ulong)((int)LZCOUNT((long)*piVar7) * -9 + 0x280U >> 6) + lVar9;
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 != 0);
    *(int *)(param_1 + 0x40) = (int)lVar9;
    lVar5 = 0;
    if (lVar9 != 0) {
      lVar5 = lVar9;
    }
    lVar10 = 0;
    if (lVar9 != 0) {
      lVar10 = (ulong)((int)LZCOUNT((long)(int)lVar9) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if ((int)uVar1 < 1) {
    lVar9 = 0;
    lVar12 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar11 = 0;
    uVar8 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar7 = *(int **)(param_1 + 0x50);
    do {
      lVar11 = (ulong)((int)LZCOUNT((long)*piVar7) * -9 + 0x280U >> 6) + lVar11;
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 != 0);
    *(int *)(param_1 + 0x58) = (int)lVar11;
    lVar9 = 0;
    if (lVar11 != 0) {
      lVar9 = lVar11;
    }
    lVar12 = 0;
    if (lVar11 != 0) {
      lVar12 = (ulong)((int)LZCOUNT((long)(int)lVar11) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((int)uVar1 < 1) {
    lVar13 = 0;
    lVar11 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    lVar13 = 0;
    uVar8 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar7 = *(int **)(param_1 + 0x68);
    do {
      lVar13 = (ulong)((int)LZCOUNT((long)*piVar7) * -9 + 0x280U >> 6) + lVar13;
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 != 0);
    *(int *)(param_1 + 0x70) = (int)lVar13;
    if (lVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (ulong)((int)LZCOUNT((long)(int)lVar13) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar8 = *(ulong *)(param_1 + 0x88);
  iVar3 = *(int *)(param_1 + 0x90);
  lVar6 = lVar15 + lVar6 + lVar5 + lVar10 + lVar9 + lVar12 + lVar13 + lVar11 + lVar4 +
          (ulong)uVar1 * 4 + (long)iVar3;
  puVar14 = (ulong *)(param_1 + 0x88);
  if ((uVar8 & 1) != 0) {
    puVar14 = (ulong *)(uVar8 + 7);
  }
  if (iVar3 != 0) {
    lVar15 = (long)iVar3 << 3;
    do {
      uVar8 = *puVar14;
      FUN_10933bbb4();
      lVar6 = uVar8 + lVar6 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
      lVar15 = lVar15 + -8;
      puVar14 = puVar14 + 1;
    } while (lVar15 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar8 = *(ulong *)(param_1 + 0xa0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar8 + 0x17);
      uVar8 = *(ulong *)(uVar8 + 8);
      if (-1 < (char)bVar2) {
        uVar8 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar8 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar15 = *(long *)(param_1 + 0xa8);
      FUN_10933d584();
      lVar6 = lVar6 + lVar15 + (ulong)((int)LZCOUNT((int)lVar15) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar15 = *(long *)(param_1 + 0xb0);
      FUN_10933dce4();
      lVar6 = lVar6 + lVar15 + (ulong)((int)LZCOUNT((int)lVar15) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar15 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar15 < 0) {
      lVar15 = *(long *)(uVar8 + 0x10);
    }
    lVar6 = lVar15 + lVar6;
  }
  *(int *)(param_1 + 0x14) = (int)lVar6;
  return lVar6;
}



/* Entry: 109328dc0; end: 109328dc3;  */

void FUN_109328dc0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar3) {
      func_0x000107c282d8(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x30);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x38);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x48);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x48) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x50);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x50) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 100) < iVar3) {
      func_0x000107c282d8(param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0x60);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x60) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x68);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x68) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x78);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x7c) < iVar3) {
      FUN_109311970(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0x78);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x78) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x80);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x80) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    func_0x000107c303c4(param_1 + 0x88,param_2 + 0x88);
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 7) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0xa0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0xa0,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        uVar4 = uVar9;
        func_0x000109330288(uVar9,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar4;
      }
      else {
        FUN_10933d70c();
      }
    }
    if ((uVar8 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        func_0x0001093302cc(uVar9,*(undefined8 *)(param_2 + 0xb0));
        *(ulong *)(param_1 + 0xb0) = uVar9;
      }
      else {
        FUN_10933dd8c();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 109328dc4; end: 1093290b7;  */

void FUN_109328dc4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar3) {
      func_0x000107c282d8(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x30);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x38);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x48);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x48) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x50);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x50) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 100) < iVar3) {
      func_0x000107c282d8(param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0x60);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x60) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x68);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x68) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x78);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x7c) < iVar3) {
      FUN_109311970(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0x78);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x78) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x80);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x80) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    func_0x000107c303c4(param_1 + 0x88,param_2 + 0x88);
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 7) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0xa0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0xa0,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        uVar4 = uVar9;
        func_0x000109330288(uVar9,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar4;
      }
      else {
        FUN_10933d70c();
      }
    }
    if ((uVar8 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        func_0x0001093302cc(uVar9,*(undefined8 *)(param_2 + 0xb0));
        *(ulong *)(param_1 + 0xb0) = uVar9;
      }
      else {
        FUN_10933dd8c();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 1093290b8; end: 109329107;  */

long FUN_1093290b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109329108; end: 10932910b;  */

long FUN_109329108(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10932910c; end: 10932911f;  */

void FUN_10932910c(void)

{
  FUN_1093290b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109329120; end: 109329173;  */

undefined ** FUN_109329120(void)

{
  return &PTR_DAT_110aee3b0;
}



/* Entry: 109329174; end: 1093293f7;  */

byte * FUN_109329174(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar10 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar10 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc,param_2);
  }
  uVar12 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar12) {
    uVar15 = 0;
    pbVar5 = param_3 + 0x10;
    do {
      pbVar4 = pbVar10;
      pbVar9 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar10) {
        do {
          pbVar4 = pbVar5;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109329238:
            param_3[0x38] = 1;
LAB_1093292d0:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar9;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar9 + 8);
              *(undefined8 *)pbVar5 = uVar16;
              *(byte **)(param_3 + 8) = pbVar9;
              goto LAB_1093292d0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar5,(long)pbVar9 - (long)pbVar5);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109329238;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar5 = uVar16;
              *(byte **)param_3 = pbVar5 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar16;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar4 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar10 = pbVar4 + ((int)pbVar10 - (int)pbVar9);
          pbVar4 = pbVar10;
          pbVar9 = pbVar6;
        } while (pbVar6 <= pbVar10);
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + uVar15 * 4);
      uVar3 = (ulong)(int)uVar1;
      pbVar9 = pbVar4 + 1;
      *pbVar4 = 0x10;
      uVar13 = uVar3;
      pbVar10 = pbVar9;
      if (0x7f < uVar1) {
        do {
          pbVar9 = pbVar10 + 1;
          *pbVar10 = (byte)uVar13 | 0x80;
          uVar3 = uVar13 >> 7;
          uVar7 = uVar13 >> 0xe;
          uVar13 = uVar3;
          pbVar10 = pbVar9;
        } while (uVar7 != 0);
      }
      pbVar10 = pbVar9 + 1;
      *pbVar9 = (byte)uVar3;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar12);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar11 = *(long *)(uVar15 + 8);
      uVar13 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar11 = uVar15 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*(long *)param_3 - (long)pbVar10 < (long)(int)uVar12) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar10) + 0x10);
      if ((int)pbVar5 < (int)uVar12) {
        do {
          iVar14 = (int)pbVar5;
          _memcpy(pbVar10,lVar11,(long)iVar14);
          uVar12 = (int)uVar13 - iVar14;
          uVar13 = (ulong)uVar12;
          lVar11 = lVar11 + iVar14;
          pbVar5 = *(byte **)param_3;
          pbVar4 = pbVar10 + iVar14;
          do {
            pbVar10 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar10 = param_3;
            func_0x000107c303dc();
            pbVar4 = pbVar10 + ((int)pbVar4 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar10 = pbVar4;
          } while (pbVar5 <= pbVar4);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar10);
        } while ((int)pbVar5 < (int)uVar12);
      }
      _memcpy(pbVar10,lVar11,(long)(int)uVar12);
      pbVar10 = pbVar10 + (int)uVar12;
    }
    else {
      _memcpy(pbVar10,lVar11,uVar13 & 0xffffffff);
      pbVar10 = pbVar10 + (int)uVar12;
    }
  }
  return pbVar10;
}



/* Entry: 1093293f8; end: 1093294b3;  */

long FUN_1093293f8(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x20);
    do {
      lVar3 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar3;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
  }
  lVar3 = lVar3 + (ulong)uVar1;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar6 + 0x17);
    uVar6 = *(ulong *)(uVar6 + 8);
    if (-1 < (char)bVar2) {
      uVar6 = (ulong)bVar2;
    }
    lVar3 = lVar3 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 1093294b4; end: 10932959f;  */

void FUN_1093294b4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 0x28);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar6 & 0xfffffffffffffffc,uVar4);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 1093295a0; end: 109329bcf;  */

void FUN_1093295a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xc:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x20:
  case 0x28:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x33:
  case 0x35:
  case 0x39:
  case 0x3b:
  case 0x3c:
  case 0x3e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    break;
  default:
    goto LAB_109329604;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931c394(lVar2);
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109323d50(lVar2);
    break;
  case 0xd:
  case 0x36:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    func_0x00010931fa28(lVar2);
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931f44c(lVar2);
    break;
  case 0xf:
  case 0x2f:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_1093211cc(lVar2);
    break;
  case 0x10:
  case 0x1d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931afa0(lVar2);
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_1093221b0(lVar2);
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    func_0x0001093214ec(lVar2);
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931ce34(lVar2);
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109325268(lVar2);
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109325e44(lVar2);
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931ba58(lVar2);
    break;
  case 0x1e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931641c(lVar2);
    break;
  case 0x1f:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109316850(lVar2);
    break;
  case 0x21:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    func_0x000109318a38(lVar2);
    break;
  case 0x22:
  case 0x3d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931e414(lVar2);
    break;
  case 0x23:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109326b20(lVar2);
    break;
  case 0x24:
  case 0x25:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931da1c(lVar2);
    break;
  case 0x26:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_1093182d4(lVar2);
    break;
  case 0x27:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10932742c(lVar2);
    break;
  case 0x29:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109327968(lVar2);
    break;
  case 0x2a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109326648(lVar2);
    break;
  case 0x2b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109319370(lVar2);
    break;
  case 0x2c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_1093196dc(lVar2);
    break;
  case 0x2d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109319d08(lVar2);
    break;
  case 0x32:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_10931a284(lVar2);
    break;
  case 0x34:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_109327e3c(lVar2);
    break;
  case 0x38:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    FUN_1093290b8(lVar2);
    break;
  case 0x3a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (lVar2 = *(long *)(param_1 + 0x10), lVar2 == 0)) goto LAB_109329604;
    func_0x000109315bd8(lVar2);
  }
  __ZdlPv(lVar2);
LAB_109329604:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109329bd0; end: 109329bd3;  */

long FUN_109329bd0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1093295a0(param_1);
  }
  return param_1;
}



/* Entry: 109329bd4; end: 109329be7;  */

void FUN_109329bd4(void)

{
  func_0x000109329b94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109329be8; end: 109329bf3;  */

undefined ** FUN_109329be8(void)

{
  return &PTR_DAT_110aee400;
}



/* Entry: 109329bf4; end: 109329c2b;  */

void FUN_109329bf4(long param_1)

{
  ulong *puVar1;
  
  FUN_1093295a0();
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



/* Entry: 109329c2c; end: 109329d9b;  */

long * FUN_109329c2c(long param_1,long *param_2,long *param_3)

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
  if ((uVar3 < 0x3e) && ((0x3fbffffffe7ffbfdU >> ((ulong)uVar3 & 0x3f) & 1) != 0)) {
    func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x10),
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x10) + *(long *)(&UNK_10dfc65c0 + (ulong)uVar3 * 8)),
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



/* Entry: 109329d9c; end: 10932a0e3;  */

void FUN_109329d9c(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_1093163c4();
    goto code_r0x000109329ff0;
  default:
    goto LAB_10932a08c;
  case 3:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931a9cc();
    goto code_r0x000109329ff0;
  case 4:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931c2cc();
    goto code_r0x000109329ff0;
  case 5:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931ca70();
    goto code_r0x000109329ff0;
  case 6:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931ebd0();
    goto code_r0x000109329ff0;
  case 7:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931aef4();
    goto code_r0x000109329ff0;
  case 8:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_1093228c8();
    goto code_r0x000109329ff0;
  case 9:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109324bfc();
    goto code_r0x000109329ff0;
  case 10:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_1093175e8();
    goto code_r0x000109329ff0;
  case 0xc:
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar3 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      uVar3 = uVar3 & 0xfffffffffffffffe;
      lVar2 = (long)*(char *)(uVar3 + 0x1f);
      if (lVar2 < 0) {
        lVar2 = *(long *)(uVar3 + 0x10);
      }
    }
    iVar1 = (int)lVar2;
    *(int *)(*(long *)(param_1 + 0x10) + 0x10) = iVar1;
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6);
    goto code_r0x00010932a008;
  case 0xd:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931fd9c();
    goto code_r0x000109329ff0;
  case 0xe:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931f814();
    goto code_r0x000109329ff0;
  case 0xf:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x0001093213ec();
code_r0x000109329ff0:
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6);
code_r0x00010932a008:
    iVar1 = iVar1 + 1;
    goto LAB_10932a08c;
  case 0x10:
  case 0x1d:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931b3b8();
    break;
  case 0x11:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000109322460();
    break;
  case 0x12:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_1093217cc();
    break;
  case 0x13:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109322bc0();
    break;
  case 0x14:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931d290();
    break;
  case 0x15:
  case 0x28:
  case 0x2e:
  case 0x30:
  case 0x3c:
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar3 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      uVar3 = uVar3 & 0xfffffffffffffffe;
      lVar2 = (long)*(char *)(uVar3 + 0x1f);
      if (lVar2 < 0) {
        lVar2 = *(long *)(uVar3 + 0x10);
      }
    }
    iVar1 = (int)lVar2;
    *(int *)(*(long *)(param_1 + 0x10) + 0x10) = iVar1;
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6);
    goto code_r0x00010932a088;
  case 0x16:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931ba04();
    break;
  case 0x17:
  case 0x33:
  case 0x35:
  case 0x3e:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931e3a8();
    break;
  case 0x1a:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109325688();
    break;
  case 0x1b:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000109326064();
    break;
  case 0x1c:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010931bd64();
    break;
  case 0x1e:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931667c();
    break;
  case 0x1f:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109316b3c();
    break;
  case 0x20:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109317230();
    break;
  case 0x21:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_1093190a0();
    break;
  case 0x22:
  case 0x3d:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010931e79c();
    break;
  case 0x23:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109326d84();
    break;
  case 0x24:
  case 0x25:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010931de00();
    break;
  case 0x26:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109318750();
    break;
  case 0x27:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109327690();
    break;
  case 0x29:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000109327c24();
    break;
  case 0x2a:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000109326928();
    break;
  case 0x2b:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109319580();
    break;
  case 0x2c:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109319a94();
    break;
  case 0x2d:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109319efc();
    break;
  case 0x2f:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x0001093213ec();
    break;
  case 0x31:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10932a0e4();
    iVar1 = iVar1 + 2;
    goto LAB_10932a08c;
  case 0x32:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931a4f4();
    break;
  case 0x34:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109328a64();
    break;
  case 0x36:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931fd9c();
    break;
  case 0x38:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_1093293f8();
    break;
  case 0x39:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_10931aef4();
    break;
  case 0x3a:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109315dcc();
    break;
  case 0x3b:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109316184();
  }
  iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6);
code_r0x00010932a088:
  iVar1 = iVar1 + 2;
LAB_10932a08c:
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



/* Entry: 10932a0e4; end: 10932a133;  */

long FUN_10932a0e4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
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
  return lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6);
}



/* Entry: 10932a134; end: 10932ae27;  */

/* WARNING: Possible PIC construction at 0x00010932aad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010932aad8) */

void FUN_10932a134(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *puVar6;
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
  if (iVar2 == 0) goto LAB_10932ade0;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_1093295a0(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  switch(iVar2) {
  case 1:
    if (iVar3 == iVar2) {
      ppuVar7 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar7 = &PTR_PTR_1132d6538;
      }
      func_0x0001093161cc(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    }
    else {
      FUN_109330430(uVar10,*(undefined8 *)(param_2 + 0x10));
code_r0x00010932addc:
      *(ulong *)(param_1 + 0x10) = uVar10;
    }
    break;
  case 3:
    if (iVar3 != iVar2) {
      FUN_109330b08(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 3) {
      ppuVar7 = &PTR_PTR_1132d6670;
    }
    FUN_10931a6c4(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 4:
    if (iVar3 != iVar2) {
      FUN_109330e34(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 4) {
      ppuVar7 = &PTR_PTR_1132d66f0;
    }
    FUN_10931bf1c(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 5:
    if (iVar3 != iVar2) {
      FUN_10932ff0c(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 5) {
      ppuVar7 = &PTR_PTR_1132d1ad0;
    }
    FUN_10931cc84(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 6:
    if (iVar3 != iVar2) {
      FUN_109331240(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 6) {
      ppuVar7 = &PTR_PTR_1132d64f8;
    }
    FUN_10931e998(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 7:
    if (iVar3 != iVar2) {
code_r0x00010932ab80:
      FUN_10933159c(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 7;
    goto code_r0x00010932ab74;
  case 8:
    if (iVar3 != iVar2) {
      FUN_10933162c(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 8) {
      ppuVar7 = &PTR_PTR_1132d6620;
    }
    FUN_1093225c4(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 9:
    if (iVar3 != iVar2) {
      FUN_109331754(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 9) {
      ppuVar7 = &PTR_PTR_1132d6c50;
    }
    FUN_109324f48(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 10:
    if (iVar3 != iVar2) {
      FUN_10932fe70(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 10) {
      ppuVar7 = &PTR_PTR_1132d1518;
    }
    func_0x0001093172e0(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0xc:
    if (iVar3 != iVar2) {
      FUN_1093319e0(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar8 = *(undefined ***)(param_2 + 0x10);
    ppuVar7 = &PTR_PTR_1132d64e0;
    bVar4 = *(int *)(param_2 + 0x1c) == 0xc;
    goto code_r0x00010932aab8;
  case 0xd:
    if (iVar3 != iVar2) {
code_r0x00010932a434:
      func_0x00010933137c(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0xd;
    goto code_r0x00010932a428;
  case 0xe:
    if (iVar3 != iVar2) {
      func_0x0001093312d0(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0xe) {
      ppuVar7 = &PTR_PTR_1132d6a40;
    }
    FUN_10931f95c(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0xf:
    if (iVar3 != iVar2) {
code_r0x00010932a9cc:
      func_0x000109331460(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0xf;
    goto code_r0x00010932a9c0;
  case 0x10:
    if (iVar3 != iVar2) {
code_r0x00010932a634:
      FUN_109330ba0(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x10;
    goto code_r0x00010932a628;
  case 0x11:
    if (iVar3 != iVar2) {
      func_0x0001093314f0(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x11) {
      ppuVar7 = &PTR_PTR_1132d6878;
    }
    FUN_109322540(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x12:
    if (iVar3 != iVar2) {
      func_0x000109331ba8(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x12) {
      ppuVar7 = &PTR_PTR_1132d65f8;
    }
    FUN_109321844(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x13:
    if (iVar3 != iVar2) {
      FUN_1093316c4(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x13) {
      ppuVar7 = &PTR_PTR_1132d6578;
    }
    func_0x00010932295c(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x14:
    if (iVar3 != iVar2) {
      FUN_109330edc(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x14) {
      ppuVar7 = &PTR_PTR_1132d6b20;
    }
    FUN_10931d41c(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x15:
    if (iVar3 != iVar2) {
      FUN_109331b10(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar8 = *(undefined ***)(param_2 + 0x10);
    ppuVar7 = &PTR_PTR_1132d6498;
    bVar4 = *(int *)(param_2 + 0x1c) == 0x15;
    goto code_r0x00010932aab8;
  case 0x16:
    if (iVar3 != iVar2) {
      FUN_109330d00(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x16) {
      ppuVar7 = &PTR_PTR_1132d6518;
    }
    FUN_10931b750(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x17:
    if (iVar3 != iVar2) {
code_r0x00010932aa08:
      FUN_1093310c4(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x17;
    goto code_r0x00010932a9fc;
  case 0x1a:
    if (iVar3 != iVar2) {
      FUN_109331858(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x1a) {
      ppuVar7 = &PTR_PTR_1132d6a88;
    }
    FUN_1093257d0(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x1b:
    if (iVar3 != iVar2) {
      FUN_109331950(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x1b) {
      ppuVar7 = &PTR_PTR_1132d67e0;
    }
    FUN_109326110(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x1c:
    if (iVar3 != iVar2) {
      FUN_109330d88(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x1c) {
      ppuVar7 = &PTR_PTR_1132d6930;
    }
    FUN_10931be70(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x1d:
    if (iVar3 != iVar2) goto code_r0x00010932a634;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x1d;
code_r0x00010932a628:
    if (!bVar4) {
      ppuVar7 = &PTR_PTR_1132d6b78;
    }
    FUN_10931b5a4(uVar5,ppuVar7);
    break;
  case 0x1e:
    if (iVar3 != iVar2) {
      func_0x0001093304bc(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x1e) {
      ppuVar7 = &PTR_PTR_1132d1708;
    }
    FUN_109316760(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x1f:
    if (iVar3 != iVar2) {
      func_0x000109330574(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x1f) {
      ppuVar7 = &PTR_PTR_1132d1738;
    }
    FUN_109316c40(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x20:
    if (iVar3 != iVar2) {
      FUN_10933062c(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x20) {
      ppuVar7 = &PTR_PTR_1132d6840;
    }
    FUN_109316d40(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x21:
    if (iVar3 != iVar2) {
      FUN_1093306bc(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x21) {
      ppuVar7 = &PTR_PTR_1132d1920;
    }
    FUN_1093191c8(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x22:
    if (iVar3 != iVar2) {
code_r0x00010932a990:
      FUN_109331160(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x22;
    goto code_r0x00010932a984;
  case 0x23:
    if (iVar3 != iVar2) {
      func_0x000109331c2c(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x23) {
      ppuVar7 = &PTR_PTR_1132d67b0;
    }
    FUN_109326e20(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x24:
    if (iVar3 != iVar2) {
code_r0x00010932ab18:
      FUN_109331000(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x24;
    goto code_r0x00010932ab0c;
  case 0x25:
    if (iVar3 != iVar2) goto code_r0x00010932ab18;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x25;
code_r0x00010932ab0c:
    if (!bVar4) {
      ppuVar7 = &PTR_PTR_1132d69f8;
    }
    FUN_10931df14(uVar5,ppuVar7);
    break;
  case 0x26:
    if (iVar3 != iVar2) {
      FUN_109331cbc(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x26) {
      ppuVar7 = &PTR_PTR_1132d6bd8;
    }
    FUN_109318944(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x27:
    if (iVar3 != iVar2) {
      FUN_109331dc8(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x27) {
      ppuVar7 = &PTR_PTR_1132d6720;
    }
    FUN_10932772c(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x28:
    if (iVar3 != iVar2) {
code_r0x00010932aadc:
      FUN_109331e58(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar8 = *(undefined ***)(param_2 + 0x10);
    ppuVar7 = &PTR_PTR_1132d64b0;
    bVar4 = *(int *)(param_2 + 0x1c) == 0x28;
    goto code_r0x00010932aab8;
  case 0x29:
    if (iVar3 != iVar2) {
      FUN_109331ef0(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x29) {
      ppuVar7 = &PTR_PTR_1132d6970;
    }
    FUN_109327d48(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x2a:
    if (iVar3 != iVar2) {
      FUN_109331fe0(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x2a) {
      ppuVar7 = &PTR_PTR_1132d6ad0;
    }
    FUN_109326a68(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x2b:
    if (iVar3 != iVar2) {
      func_0x0001093307c0(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x2b) {
      ppuVar7 = &PTR_PTR_1132d6698;
    }
    FUN_10931962c(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x2c:
    if (iVar3 != iVar2) {
      func_0x00010933085c(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x2c) {
      ppuVar7 = &PTR_PTR_1132d68b0;
    }
    FUN_109319bbc(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x2d:
    if (iVar3 != iVar2) {
      func_0x000109330928(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x2d) {
      ppuVar7 = &PTR_PTR_1132d65b8;
    }
    FUN_109319f74(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x2e:
    if (iVar3 != iVar2) {
code_r0x00010932a664:
      FUN_109331a78(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar8 = *(undefined ***)(param_2 + 0x10);
    ppuVar7 = &PTR_PTR_1132d64c8;
    bVar4 = *(int *)(param_2 + 0x1c) == 0x2e;
    goto code_r0x00010932aab8;
  case 0x2f:
    if (iVar3 != iVar2) goto code_r0x00010932a9cc;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x2f;
code_r0x00010932a9c0:
    if (!bVar4) {
      ppuVar7 = &PTR_PTR_1132d6810;
    }
    FUN_109321498(uVar5,ppuVar7);
    break;
  case 0x30:
    if (iVar3 != iVar2) goto code_r0x00010932a664;
    ppuVar8 = *(undefined ***)(param_2 + 0x10);
    ppuVar7 = &PTR_PTR_1132d64c8;
    bVar4 = *(int *)(param_2 + 0x1c) == 0x30;
    goto code_r0x00010932aab8;
  case 0x31:
    if (iVar3 != iVar2) {
      FUN_1093309bc(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x31) {
      ppuVar7 = &PTR_PTR_1132d6558;
    }
    FUN_10931a00c(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x32:
    if (iVar3 != iVar2) {
      FUN_109330a48(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x32) {
      ppuVar7 = &PTR_PTR_1132d6750;
    }
    FUN_10931a5e0(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x33:
    if (iVar3 != iVar2) goto code_r0x00010932aa08;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x33;
    goto code_r0x00010932a9fc;
  case 0x34:
    if (iVar3 != iVar2) {
      FUN_1093320dc(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x34) {
      ppuVar7 = &PTR_PTR_1132d6cd8;
    }
    FUN_109328dc4(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x35:
    if (iVar3 != iVar2) goto code_r0x00010932aa08;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x35;
    goto code_r0x00010932a9fc;
  case 0x36:
    if (iVar3 != iVar2) goto code_r0x00010932a434;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x36;
code_r0x00010932a428:
    if (!bVar4) {
      ppuVar7 = &PTR_PTR_1132d68f0;
    }
    FUN_10931ff0c(uVar5,ppuVar7);
    break;
  case 0x38:
    if (iVar3 != iVar2) {
      FUN_1093322f8(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x38) {
      ppuVar7 = &PTR_PTR_1132d6780;
    }
    FUN_1093294b4(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x39:
    if (iVar3 != iVar2) goto code_r0x00010932ab80;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x39;
code_r0x00010932ab74:
    if (!bVar4) {
      ppuVar7 = &PTR_PTR_1132d66c0;
    }
    func_0x00010931aa68(uVar5,ppuVar7);
    break;
  case 0x3a:
    if (iVar3 != iVar2) {
      FUN_10933039c(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x3a) {
      ppuVar7 = &PTR_PTR_1132d65d8;
    }
    FUN_109315e44(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x3b:
    if (iVar3 != iVar2) {
      FUN_109330310(uVar10,*(undefined8 *)(param_2 + 0x10));
      goto code_r0x00010932addc;
    }
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x1c) != 0x3b) {
      ppuVar7 = &PTR_PTR_1132d6598;
    }
    FUN_109315edc(*(undefined8 *)(param_1 + 0x10),ppuVar7);
    break;
  case 0x3c:
    if (iVar3 != iVar2) goto code_r0x00010932aadc;
    ppuVar8 = *(undefined ***)(param_2 + 0x10);
    ppuVar7 = &PTR_PTR_1132d64b0;
    bVar4 = *(int *)(param_2 + 0x1c) == 0x3c;
code_r0x00010932aab8:
    if (!bVar4) {
      ppuVar8 = ppuVar7;
    }
    if (((ulong)ppuVar8[1] & 1) != 0) {
      unaff_x30 = 0x10932aad8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      puVar6 = (ulong *)(*(long *)(param_1 + 0x10) + 8);
      unaff_x19 = puVar9;
      unaff_x20 = param_2;
      unaff_x29 = puVar1;
      goto code_r0x00010b4d197c;
    }
    break;
  case 0x3d:
    if (iVar3 != iVar2) goto code_r0x00010932a990;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x3d;
code_r0x00010932a984:
    if (!bVar4) {
      ppuVar7 = &PTR_PTR_1132d69b0;
    }
    FUN_10931e8b8(uVar5,ppuVar7);
    break;
  case 0x3e:
    if (iVar3 != iVar2) goto code_r0x00010932aa08;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    ppuVar7 = *(undefined ***)(param_2 + 0x10);
    bVar4 = *(int *)(param_2 + 0x1c) == 0x3e;
code_r0x00010932a9fc:
    if (!bVar4) {
      ppuVar7 = &PTR_PTR_1132d6648;
    }
    FUN_10931e01c(uVar5,ppuVar7);
  }
LAB_10932ade0:
  puVar6 = puVar9;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar6 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10932ae28; end: 10932ae6b;  */

long FUN_10932ae28(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  return param_1;
}



/* Entry: 10932ae6c; end: 10932ae6f;  */

long FUN_10932ae6c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  return param_1;
}



/* Entry: 10932ae70; end: 10932ae83;  */

void FUN_10932ae70(void)

{
  FUN_10932ae28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10932ae84; end: 10932af6f;  */

undefined ** FUN_10932ae84(void)

{
  return &PTR_DAT_110aee438;
}



/* Entry: 10932af70; end: 10932b38f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10932af70(long param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *puVar10;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = plVar3;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)param_2 = 0x10;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar7 >> 4 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x31);
    *(undefined1 *)param_2 = 0x18;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar7 >> 9 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x36);
    *(undefined1 *)param_2 = 0x20;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar7 >> 1 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,5,*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc,param_2);
    param_2 = plVar3;
  }
  if ((uVar7 >> 5 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x32);
    *(undefined1 *)param_2 = 0x30;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar7 >> 2 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,7,*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc,param_2);
    param_2 = plVar3;
  }
  if ((uVar7 >> 6 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x33);
    *(undefined1 *)param_2 = 0x40;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar7 >> 7 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)param_2 = 0x48;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar7 >> 10 & 1) != 0) {
    plVar3 = param_3;
    func_0x0001089f53f0(param_3,*(undefined4 *)(param_1 + 0x38),param_2);
    param_2 = plVar3;
  }
  if ((uVar7 >> 8 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x35);
    *(undefined1 *)param_2 = 0x58;
    *(undefined1 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar6 = *(long *)(uVar4 + 8);
      uVar8 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar6 = uVar4 + 8;
    }
    uVar7 = (uint)uVar8;
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      puVar10 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar10 < (int)uVar7) {
        do {
          iVar9 = (int)puVar10;
          _memcpy(param_2,lVar6,(long)iVar9);
          uVar7 = (int)uVar8 - iVar9;
          uVar8 = (ulong)uVar7;
          lVar6 = lVar6 + iVar9;
          plVar5 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar2 + (long)((int)plVar3 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar5 <= plVar3);
          puVar10 = (undefined1 *)((long)plVar5 + (0x10 - (long)param_2));
        } while ((int)puVar10 < (int)uVar7);
      }
      _memcpy(param_2,lVar6,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lVar6,uVar8 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 10932b390; end: 10932b50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10932b390(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint5 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = lVar3 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = lVar3 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    auVar7._4_4_ = uVar1;
    auVar7._0_4_ = uVar1;
    auVar7._8_4_ = uVar1;
    auVar7._12_4_ = uVar1;
    auVar8[9] = 0xff;
    auVar8._0_9_ = _UNK_10dfc5ae0;
    auVar8[10] = 0xff;
    auVar8[0xb] = 0xff;
    auVar8[0xc] = 0xfb;
    auVar8[0xd] = 0xff;
    auVar8[0xe] = 0xff;
    auVar8[0xf] = 0xff;
    auVar8 = NEON_ushl(auVar7,auVar8,4);
    uVar6 = CONCAT14(auVar8[4],(uint)(auVar8[0] & 2)) & 0x2ffffffff;
    lVar3 = lVar3 + (ulong)((int)uVar6 + (uint)(byte)(uVar6 >> 0x20) +
                            (uint)(auVar8[8] & 2) + (uint)(auVar8[0xc] & 2) + (uVar1 >> 6 & 2));
  }
  if (((uVar1 & 0x700) != 0) &&
     (lVar3 = lVar3 + (ulong)((uVar1 >> 8 & 2) + (uVar1 >> 7 & 2)), (uVar1 >> 10 & 1) != 0)) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10932b50c; end: 10932b69f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932b50c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x20,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x28,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10932b6a0; end: 10932b6db;  */

long FUN_10932b6a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 10932b6dc; end: 10932b6df;  */

long FUN_10932b6dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 10932b6e0; end: 10932b6f3;  */

void FUN_10932b6e0(void)

{
  FUN_10932b6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10932b6f4; end: 10932b77b;  */

undefined ** FUN_10932b6f4(void)

{
  return &PTR_DAT_110aee478;
}



/* Entry: 10932b77c; end: 10932b8e7;  */

long * FUN_10932b77c(long param_1,long *param_2,long *param_3)

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
  
  uVar3 = *(uint *)(param_1 + 0x10);
  plVar1 = param_2;
  if ((uVar3 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,2,*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc,plVar1);
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
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 10932b8e8; end: 10932b9b3;  */

long FUN_10932b8e8(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = lVar3 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10932b9b4; end: 10932ba7f;  */

void FUN_10932b9b4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x20,uVar3 & 0xfffffffffffffffc,uVar2);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10932ba80; end: 10932bacb;  */

long FUN_10932ba80(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10932bacc; end: 10932bacf;  */

long FUN_10932bacc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10932bad0; end: 10932bae3;  */

void FUN_10932bad0(void)

{
  FUN_10932ba80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10932bae4; end: 10932baef;  */

undefined ** FUN_10932bae4(void)

{
  return &PTR_DAT_110aee4c0;
}



/* Entry: 10932baf0; end: 10932bbeb;  */

void FUN_10932baf0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x00010598fd84(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      return;
    }
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  return;
}



/* Entry: 10932bbec; end: 10932befb;  */

byte * FUN_10932bbec(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte bVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 1) != 0) {
    pbVar8 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar8;
  }
  if ((uVar9 >> 1 & 1) != 0) {
    pbVar8 = param_3;
    func_0x000107c280a0(param_3,2,*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc,param_2);
    param_2 = pbVar8;
  }
  pbVar8 = param_2;
  if ((uVar9 >> 2 & 1) != 0) {
    pbVar8 = param_3;
    func_0x000107c280a0(param_3,3,*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc,param_2);
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar13 = 8;
    pbVar6 = pbVar8;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar13 + -1);
      }
      plVar4 = (long *)*puVar1;
      lVar10 = (long)*(char *)((long)plVar4 + 0x17);
      if (((lVar10 < 0) && (lVar10 = plVar4[1], 0x7f < lVar10)) ||
         ((*(long *)param_3 - (long)pbVar6) + 0xe < lVar10)) {
        pbVar8 = param_3;
        func_0x00010b4d5120(param_3,4,plVar4,pbVar6);
      }
      else {
        *pbVar6 = 0x22;
        pbVar6[1] = (byte)lVar10;
        if (*(char *)((long)plVar4 + 0x17) < '\0') {
          plVar4 = (long *)*plVar4;
        }
        _memcpy(pbVar6 + 2,plVar4,lVar10);
        pbVar8 = pbVar6 + 2 + lVar10;
      }
      lVar13 = lVar13 + 8;
      uVar12 = uVar12 - 1;
      pbVar6 = pbVar8;
    } while (uVar12 != 0);
  }
  if ((uVar9 >> 3 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar3 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar3 + ((int)pbVar8 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar8);
    }
    bVar2 = *(byte *)(param_1 + 0x48);
    *pbVar8 = 0x28;
    pbVar8[1] = bVar2;
    pbVar8 = pbVar8 + 2;
  }
  if ((uVar9 >> 4 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar3 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar3 + ((int)pbVar8 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar8);
    }
    uVar9 = *(uint *)(param_1 + 0x4c);
    uVar5 = (ulong)(int)uVar9;
    pbVar6 = pbVar8 + 1;
    *pbVar8 = 0x30;
    uVar12 = uVar5;
    pbVar8 = pbVar6;
    if (0x7f < uVar9) {
      do {
        pbVar6 = pbVar8 + 1;
        *pbVar8 = (byte)uVar12 | 0x80;
        uVar5 = uVar12 >> 7;
        uVar7 = uVar12 >> 0xe;
        uVar12 = uVar5;
        pbVar8 = pbVar6;
      } while (uVar7 != 0);
    }
    pbVar8 = pbVar6 + 1;
    *pbVar6 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar12 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar13 = *(long *)(uVar12 + 8);
      uVar5 = (ulong)*(uint *)(uVar12 + 0x10);
    }
    else {
      lVar13 = uVar12 + 8;
    }
    uVar9 = (uint)uVar5;
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar9) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar6 < (int)uVar9) {
        do {
          iVar11 = (int)pbVar6;
          _memcpy(pbVar8,lVar13,(long)iVar11);
          uVar9 = (int)uVar5 - iVar11;
          uVar5 = (ulong)uVar9;
          lVar13 = lVar13 + iVar11;
          pbVar6 = *(byte **)param_3;
          pbVar3 = pbVar8 + iVar11;
          do {
            pbVar8 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar3 = pbVar8 + ((int)pbVar3 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar8 = pbVar3;
          } while (pbVar6 <= pbVar3);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar8);
        } while ((int)pbVar6 < (int)uVar9);
      }
      _memcpy(pbVar8,lVar13,(long)(int)uVar9);
      pbVar8 = pbVar8 + (int)uVar9;
    }
    else {
      _memcpy(pbVar8,lVar13,uVar5 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar9;
    }
  }
  return pbVar8;
}



/* Entry: 10932befc; end: 10932c09f;  */

ulong FUN_10932befc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar8 = *(ulong *)(param_1 + 0x18);
    puVar9 = (ulong *)(uVar8 + 7);
    uVar7 = uVar5;
    do {
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar8 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar4 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      uVar5 = uVar2 + uVar5 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0x1f) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar7 + 0x17);
      uVar7 = *(ulong *)(uVar7 + 8);
      if (-1 < (char)bVar4) {
        uVar7 = (ulong)bVar4;
      }
      uVar5 = uVar5 + uVar7 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar7 + 0x17);
      uVar7 = *(ulong *)(uVar7 + 8);
      if (-1 < (char)bVar4) {
        uVar7 = (ulong)bVar4;
      }
      uVar5 = uVar5 + uVar7 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
      bVar4 = *(byte *)(uVar7 + 0x17);
      uVar7 = *(ulong *)(uVar7 + 8);
      if (-1 < (char)bVar4) {
        uVar7 = (ulong)bVar4;
      }
      uVar5 = uVar5 + uVar7 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6) + 1;
    }
    uVar5 = uVar5 + ((ulong)(uVar3 >> 2) & 2);
    if ((uVar3 >> 4 & 1) != 0) {
      uVar5 = uVar5 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    uVar5 = lVar6 + uVar5;
  }
  *(int *)(param_1 + 0x14) = (int)uVar5;
  return uVar5;
}



/* Entry: 10932c0a0; end: 10932c1df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932c0a0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x38,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x40,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10932c1e0; end: 10932c23b;  */

long FUN_10932c1e0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10932ae28();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10932b6a0();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10932ba80();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10932c23c; end: 10932c23f;  */

long FUN_10932c23c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10932ae28();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10932b6a0();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10932ba80();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10932c240; end: 10932c253;  */

void FUN_10932c240(void)

{
  FUN_10932c1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10932c254; end: 10932c25f;  */

undefined ** FUN_10932c254(void)

{
  return &PTR_DAT_110aee500;
}



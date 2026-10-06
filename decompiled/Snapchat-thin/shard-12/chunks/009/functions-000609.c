/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c68168; end: 109c6835f;  */

long * FUN_109c68168(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar11;
  
  uVar12 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar13 = 8;
    plVar7 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + lVar13 + -1);
      }
      puVar9 = (undefined8 *)*puVar1;
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      puVar2 = puVar9;
      if (lVar4 < 0) {
        lVar4 = puVar9[1];
        puVar2 = (undefined8 *)*puVar9;
      }
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a64e9);
      lVar4 = (long)*(char *)((long)puVar9 + 0x17);
      if (((lVar4 < 0) && (lVar4 = puVar9[1], 0x7f < lVar4)) ||
         ((*param_3 - (long)plVar7) + 0xe < lVar4)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,1,puVar9,plVar7);
      }
      else {
        *(undefined1 *)plVar7 = 10;
        *(char *)((long)plVar7 + 1) = (char)lVar4;
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          puVar9 = (undefined8 *)*puVar9;
        }
        _memcpy((undefined1 *)((long)plVar7 + 2),puVar9,lVar4);
        param_2 = (long *)((undefined1 *)((long)plVar7 + 2) + lVar4);
      }
      lVar13 = lVar13 + 8;
      uVar12 = uVar12 - 1;
      plVar7 = param_2;
    } while (uVar12 != 0);
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
    uVar8 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      puVar11 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar11 < (int)uVar8) {
        do {
          iVar10 = (int)puVar11;
          _memcpy(param_2,lVar13,(long)iVar10);
          uVar8 = (int)uVar5 - iVar10;
          uVar5 = (ulong)uVar8;
          lVar13 = lVar13 + iVar10;
          plVar6 = (long *)*param_3;
          plVar7 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar3 + (long)((int)plVar7 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar7;
          } while (plVar6 <= plVar7);
          puVar11 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar11 < (int)uVar8);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar13,uVar5 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 109c68360; end: 109c683fb;  */

ulong FUN_109c68360(long param_1)

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



/* Entry: 109c683fc; end: 109c6844f;  */

void FUN_109c683fc(long param_1,long param_2)

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



/* Entry: 109c68450; end: 109c684b7;  */

undefined8 * FUN_109c68450(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2ef80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109c69f90(param_1 + 2,param_2,param_3 + 0x10);
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109c684b8; end: 109c684ff;  */

long FUN_109c684b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c68500; end: 109c68503;  */

long FUN_109c68500(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c68504; end: 109c68517;  */

void FUN_109c68504(void)

{
  FUN_109c684b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c68518; end: 109c68537;  */

undefined ** FUN_109c68518(void)

{
  return &PTR_DAT_110b2f3f8;
}



/* Entry: 109c68538; end: 109c68807;  */

byte * FUN_109c68538(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c685f8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c68690:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109c68690;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c685f8;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109c68808; end: 109c688af;  */

long FUN_109c68808(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c688b0; end: 109c68957;  */

void FUN_109c688b0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x00010598df1c(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x18);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
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



/* Entry: 109c68958; end: 109c6899f;  */

long FUN_109c68958(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c689a0; end: 109c689a3;  */

long FUN_109c689a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c689a4; end: 109c689b7;  */

void FUN_109c689a4(void)

{
  FUN_109c68958();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c689b8; end: 109c689d7;  */

undefined ** FUN_109c689b8(void)

{
  return &PTR_DAT_110b2f440;
}



/* Entry: 109c689d8; end: 109c68ce3;  */

byte * FUN_109c689d8(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar14 = *(int *)(param_1 + 0x10);
  if (0 < iVar14) {
    pbVar2 = (byte *)*param_3;
    if (pbVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar2));
        pbVar2 = (byte *)*param_3;
      } while (pbVar2 <= param_2);
      iVar14 = *(int *)(param_1 + 0x10);
    }
    uVar9 = iVar14 * 4;
    uVar10 = (ulong)uVar9;
    pbVar2 = param_2 + 1;
    *param_2 = 10;
    uVar3 = uVar10;
    uVar6 = uVar9;
    if (0x7f < uVar9) {
      do {
        param_2 = pbVar2;
        uVar5 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar6 = (uint)uVar3;
      } while (uVar5 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar15 = (ulong)(int)uVar9;
    uVar3 = uVar10;
    if ((*param_3 - (long)param_2 < (long)(int)uVar9) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar15,
       (int)pbVar2 < (int)uVar9)) {
      pbVar12 = (byte *)(param_3 + 2);
      do {
        iVar14 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar14);
        uVar9 = (int)uVar10 - iVar14;
        uVar10 = (ulong)uVar9;
        lVar13 = lVar13 + iVar14;
        pbVar11 = param_2 + iVar14;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar12;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar12;
          if (param_3[6] == 0) {
LAB_109c68bd0:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c68bb0:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109c68bb0;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c68bd0;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar12 = uVar16;
              *param_3 = (long)(pbVar12 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar12 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar16;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar2 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar7 = pbStack_70;
            }
          }
          pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar11;
        } while (pbVar2 <= pbVar11);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar9);
      uVar15 = (ulong)(int)uVar9;
      uVar3 = uVar15;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar13 = *(long *)(uVar3 + 8);
      uVar10 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar13 = uVar3 + 8;
    }
    uVar9 = (uint)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar9) {
      pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar2 < (int)uVar9) {
        do {
          iVar14 = (int)pbVar2;
          _memcpy(param_2,lVar13,(long)iVar14);
          uVar9 = (int)uVar10 - iVar14;
          uVar10 = (ulong)uVar9;
          lVar13 = lVar13 + iVar14;
          pbVar2 = (byte *)*param_3;
          pbVar12 = param_2 + iVar14;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar12 = (byte *)((long)plVar1 + (long)((int)pbVar12 - (int)pbVar2));
            pbVar2 = (byte *)*param_3;
            param_2 = pbVar12;
          } while (pbVar2 <= pbVar12);
          pbVar2 = pbVar2 + (0x10 - (long)param_2);
        } while ((int)pbVar2 < (int)uVar9);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar9);
      param_2 = param_2 + (int)uVar9;
    }
    else {
      _memcpy(param_2,lVar13,uVar10 & 0xffffffff);
      param_2 = param_2 + (int)uVar9;
    }
  }
  return param_2;
}



/* Entry: 109c68ce4; end: 109c68d3b;  */

long FUN_109c68ce4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar2 = lVar2 + (ulong)uVar1 * 4;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 109c68d3c; end: 109c68e4b;  */

void FUN_109c68d3c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      FUN_109311970(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x18);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
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



/* Entry: 109c68e4c; end: 109c68e93;  */

long FUN_109c68e4c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c68e94; end: 109c68e97;  */

long FUN_109c68e94(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c68e98; end: 109c68eab;  */

void FUN_109c68e98(void)

{
  FUN_109c68e4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c68eac; end: 109c68ecb;  */

undefined ** FUN_109c68eac(void)

{
  return &PTR_DAT_110b2f488;
}



/* Entry: 109c68ecc; end: 109c691d7;  */

byte * FUN_109c68ecc(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar14 = *(int *)(param_1 + 0x10);
  if (0 < iVar14) {
    pbVar2 = (byte *)*param_3;
    if (pbVar2 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar2));
        pbVar2 = (byte *)*param_3;
      } while (pbVar2 <= param_2);
      iVar14 = *(int *)(param_1 + 0x10);
    }
    uVar9 = iVar14 * 8;
    uVar10 = (ulong)uVar9;
    pbVar2 = param_2 + 1;
    *param_2 = 10;
    uVar3 = uVar10;
    uVar6 = uVar9;
    if (0x7f < uVar9) {
      do {
        param_2 = pbVar2;
        uVar5 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar6 = (uint)uVar3;
      } while (uVar5 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar15 = (ulong)(int)uVar9;
    uVar3 = uVar10;
    if ((*param_3 - (long)param_2 < (long)(int)uVar9) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar15,
       (int)pbVar2 < (int)uVar9)) {
      pbVar12 = (byte *)(param_3 + 2);
      do {
        iVar14 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar14);
        uVar9 = (int)uVar10 - iVar14;
        uVar10 = (ulong)uVar9;
        lVar13 = lVar13 + iVar14;
        pbVar11 = param_2 + iVar14;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar12;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar12;
          if (param_3[6] == 0) {
LAB_109c690c4:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c690a4:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109c690a4;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c690c4;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar12 = uVar16;
              *param_3 = (long)(pbVar12 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar12 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar16;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar2 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar7 = pbStack_70;
            }
          }
          pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar11;
        } while (pbVar2 <= pbVar11);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar9);
      uVar15 = (ulong)(int)uVar9;
      uVar3 = uVar15;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar13 = *(long *)(uVar3 + 8);
      uVar10 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar13 = uVar3 + 8;
    }
    uVar9 = (uint)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar9) {
      pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar2 < (int)uVar9) {
        do {
          iVar14 = (int)pbVar2;
          _memcpy(param_2,lVar13,(long)iVar14);
          uVar9 = (int)uVar10 - iVar14;
          uVar10 = (ulong)uVar9;
          lVar13 = lVar13 + iVar14;
          pbVar2 = (byte *)*param_3;
          pbVar12 = param_2 + iVar14;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar12 = (byte *)((long)plVar1 + (long)((int)pbVar12 - (int)pbVar2));
            pbVar2 = (byte *)*param_3;
            param_2 = pbVar12;
          } while (pbVar2 <= pbVar12);
          pbVar2 = pbVar2 + (0x10 - (long)param_2);
        } while ((int)pbVar2 < (int)uVar9);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar9);
      param_2 = param_2 + (int)uVar9;
    }
    else {
      _memcpy(param_2,lVar13,uVar10 & 0xffffffff);
      param_2 = param_2 + (int)uVar9;
    }
  }
  return param_2;
}



/* Entry: 109c691d8; end: 109c69233;  */

long FUN_109c691d8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = 0;
  if (uVar1 != 0) {
    lVar2 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  lVar2 = lVar2 + (ulong)uVar1 * 8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 109c69234; end: 109c692db;  */

void FUN_109c69234(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      FUN_109340710(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x18);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
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



/* Entry: 109c692dc; end: 109c6930f;  */

void FUN_109c692dc(long param_1,long param_2)

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



/* Entry: 109c69310; end: 109c6936f;  */

undefined8 * FUN_109c69310(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2f020;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_109c692dc(param_1,param_3);
  return param_1;
}



/* Entry: 109c69370; end: 109c693c7;  */

long FUN_109c69370(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c693c8; end: 109c693e7;  */

undefined ** FUN_109c693c8(void)

{
  return &PTR_DAT_110b2f4d0;
}



/* Entry: 109c693e8; end: 109c6953f;  */

long * FUN_109c693e8(long param_1,long *param_2,long *param_3)

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
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),plVar1);
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



/* Entry: 109c69540; end: 109c695a7;  */

ulong FUN_109c69540(long param_1)

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



/* Entry: 109c695a8; end: 109c6960f;  */

undefined8 * FUN_109c695a8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2efd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109c69f90(param_1 + 2,param_2,param_3 + 0x10);
  param_1[4] = 0;
  return param_1;
}



/* Entry: 109c69610; end: 109c69657;  */

long FUN_109c69610(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c69658; end: 109c6965b;  */

long FUN_109c69658(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c6965c; end: 109c6966f;  */

void FUN_109c6965c(void)

{
  FUN_109c69610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c69670; end: 109c6968f;  */

undefined ** FUN_109c69670(void)

{
  return &PTR_DAT_110b2f510;
}



/* Entry: 109c69690; end: 109c6995f;  */

byte * FUN_109c69690(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c69750:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c697e8:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109c697e8;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c69750;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109c69960; end: 109c69a07;  */

long FUN_109c69960(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c69a08; end: 109c69aaf;  */

void FUN_109c69a08(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x00010598df1c(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x18);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
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



/* Entry: 109c69ab0; end: 109c69aeb;  */

void FUN_109c69ab0(long param_1,long param_2)

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



/* Entry: 109c69aec; end: 109c69b4b;  */

undefined8 * FUN_109c69aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2f110;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_109c69ab0(param_1,param_3);
  return param_1;
}



/* Entry: 109c69b4c; end: 109c69ba3;  */

long FUN_109c69b4c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c69ba4; end: 109c69bc3;  */

undefined ** FUN_109c69ba4(void)

{
  return &PTR_DAT_110b2f550;
}



/* Entry: 109c69bc4; end: 109c69db7;  */

long * FUN_109c69bc4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  ulong uStack_48;
  undefined1 *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 9;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x11;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
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
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(param_2,lVar8,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar8,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar8,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109c69db8; end: 109c69e5b;  */

long FUN_109c69db8(long param_1)

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



/* Entry: 109c69e5c; end: 109c69eaf;  */

undefined8 * FUN_109c69e5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_109c6b37c(param_1,param_3);
  return param_1;
}



/* Entry: 109c69eb0; end: 109c69ef7;  */

long FUN_109c69eb0(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x200280010,0);
  }
  return param_1;
}



/* Entry: 109c69ef8; end: 109c69f4b;  */

undefined8 * FUN_109c69ef8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_109c6b4a4(param_1,param_3);
  return param_1;
}



/* Entry: 109c69f4c; end: 109c69f8f;  */

long FUN_109c69f4c(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x180010,0);
  }
  return param_1;
}



/* Entry: 109c69f90; end: 109c6a003;  */

int * FUN_109c69f90(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    func_0x00010598df1c(param_1,0,iVar1);
    *param_1 = iVar1;
    if (0 < iVar1) {
      uVar4 = iVar1 + 1;
      puVar2 = *(undefined8 **)(param_1 + 2);
      puVar3 = *(undefined8 **)(param_3 + 2);
      do {
        *puVar2 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar4);
    }
  }
  return param_1;
}



/* Entry: 109c6a004; end: 109c6a3ab;  */

void FUN_109c6a004(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b2ef30;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 109c6a3ac; end: 109c6a4ab;  */

ulong * FUN_109c6a3ac(ulong *param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  ulong uStack_48;
  uint *puStack_40;
  uint uStack_38;
  
  uVar3 = *param_2;
  *param_1 = (ulong)uVar3;
  if (uVar3 == 0) {
    param_1[1] = 0;
  }
  else {
    plVar4 = (long *)((ulong)uVar3 << 3);
    __Znam();
    param_1[1] = (ulong)plVar4;
    uStack_38 = param_2[3];
    puStack_40 = param_2;
    if (uStack_38 == param_2[1]) {
      uStack_38 = 0;
      uStack_48 = 0;
    }
    else {
      uStack_48 = *(ulong *)(*(long *)(param_2 + 4) + (ulong)uStack_38 * 8);
      if ((uStack_48 & 1) != 0) {
        uStack_48 = *(ulong *)(**(long **)(uStack_48 - 1) + 0x20);
      }
    }
    while (uStack_48 != 0) {
      *plVar4 = uStack_48 + 8;
      func_0x000107c27d54(&uStack_48);
      plVar4 = plVar4 + 1;
    }
    uVar2 = *param_1;
    lVar1 = 0;
    if (uVar2 != 0) {
      lVar1 = LZCOUNT(uVar2) * -2 + 0x7e;
    }
    func_0x000105991c74(param_1[1],param_1[1] + uVar2 * 8,&uStack_48,lVar1,1);
  }
  return param_1;
}



/* Entry: 109c6a4ac; end: 109c6aebb;  */

void FUN_109c6a4ac(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
LAB_109c6a4d8:
  do {
    plVar16 = param_1;
    uVar7 = (long)param_2 - (long)plVar16 >> 4;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) {
        return;
      }
      if (uVar7 == 2) {
        lVar9 = *plVar16;
        if (lVar9 <= param_2[-2]) {
          return;
        }
        lVar10 = plVar16[1];
        lVar8 = param_2[-1];
        *plVar16 = param_2[-2];
        plVar16[1] = lVar8;
LAB_109c6aa5c:
        param_2[-2] = lVar9;
        param_2[-1] = lVar10;
        return;
      }
    }
    else {
      if (uVar7 == 3) {
        lVar8 = plVar16[2];
        lVar9 = *plVar16;
        lVar10 = param_2[-2];
        if (lVar9 <= lVar8) {
          if (lVar8 <= lVar10) {
            return;
          }
          plVar16[2] = lVar10;
          param_2[-2] = lVar8;
          lVar9 = plVar16[2];
          lVar8 = plVar16[3];
          plVar16[3] = param_2[-1];
          param_2[-1] = lVar8;
          lVar8 = *plVar16;
          if (lVar8 <= lVar9) {
            return;
          }
          lVar10 = plVar16[1];
          *plVar16 = lVar9;
          plVar16[1] = plVar16[3];
          plVar16[2] = lVar8;
          plVar16[3] = lVar10;
          return;
        }
        if (lVar10 < lVar8) {
          lVar8 = plVar16[1];
          lVar11 = param_2[-1];
          *plVar16 = lVar10;
          plVar16[1] = lVar11;
          param_2[-2] = lVar9;
          param_2[-1] = lVar8;
          return;
        }
        lVar10 = plVar16[1];
        *plVar16 = lVar8;
        plVar16[1] = plVar16[3];
        plVar16[2] = lVar9;
        plVar16[3] = lVar10;
        if (lVar9 <= param_2[-2]) {
          return;
        }
        lVar8 = param_2[-1];
        plVar16[2] = param_2[-2];
        plVar16[3] = lVar8;
        goto LAB_109c6aa5c;
      }
      if (uVar7 == 4) {
        lVar8 = plVar16[2];
        lVar10 = *plVar16;
        lVar11 = plVar16[4];
        lVar9 = lVar11;
        if (lVar8 < lVar10) {
          if (lVar11 < lVar8) {
            lVar9 = plVar16[1];
            *plVar16 = lVar11;
            plVar16[1] = plVar16[5];
            plVar16[4] = lVar10;
            plVar16[5] = lVar9;
            lVar9 = lVar10;
          }
          else {
            lVar14 = plVar16[1];
            *plVar16 = lVar8;
            plVar16[1] = plVar16[3];
            plVar16[2] = lVar10;
            plVar16[3] = lVar14;
            if (lVar11 < lVar10) {
              plVar16[2] = lVar11;
              plVar16[3] = plVar16[5];
              plVar16[4] = lVar10;
              plVar16[5] = lVar14;
              lVar9 = lVar10;
            }
          }
        }
        else if (lVar11 < lVar8) {
          lVar9 = plVar16[3];
          lVar14 = plVar16[5];
          plVar16[2] = lVar11;
          plVar16[3] = lVar14;
          plVar16[4] = lVar8;
          plVar16[5] = lVar9;
          lVar9 = lVar8;
          if (lVar11 < lVar10) {
            lVar8 = plVar16[1];
            *plVar16 = lVar11;
            plVar16[1] = lVar14;
            plVar16[2] = lVar10;
            plVar16[3] = lVar8;
          }
        }
        if (lVar9 <= param_2[-2]) {
          return;
        }
        plVar16[4] = param_2[-2];
        param_2[-2] = lVar9;
        lVar9 = plVar16[4];
        lVar8 = plVar16[5];
        plVar16[5] = param_2[-1];
        param_2[-1] = lVar8;
        lVar8 = plVar16[2];
        if (lVar8 <= lVar9) {
          return;
        }
        lVar11 = plVar16[3];
        lVar10 = plVar16[5];
        plVar16[2] = lVar9;
        plVar16[3] = lVar10;
        plVar16[4] = lVar8;
        plVar16[5] = lVar11;
        lVar8 = *plVar16;
        if (lVar8 <= lVar9) {
          return;
        }
        lVar11 = plVar16[1];
        *plVar16 = lVar9;
        plVar16[1] = lVar10;
        plVar16[2] = lVar8;
        plVar16[3] = lVar11;
        return;
      }
      if (uVar7 == 5) {
        plVar3 = plVar16 + 2;
        plVar4 = plVar16 + 4;
        plVar6 = plVar16 + 6;
        lVar8 = *plVar3;
        lVar10 = *plVar16;
        lVar9 = *plVar4;
        if (lVar8 < lVar10) {
          if (lVar9 < lVar8) {
            lVar8 = plVar16[1];
            *plVar16 = lVar9;
            plVar16[1] = plVar16[5];
            *plVar4 = lVar10;
            plVar16[5] = lVar8;
            lVar9 = lVar10;
          }
          else {
            lVar11 = plVar16[1];
            *plVar16 = lVar8;
            plVar16[1] = plVar16[3];
            *plVar3 = lVar10;
            plVar16[3] = lVar11;
            lVar9 = *plVar4;
            if (lVar9 < lVar10) {
              *plVar3 = lVar9;
              plVar16[3] = plVar16[5];
              *plVar4 = lVar10;
              plVar16[5] = lVar11;
              lVar9 = lVar10;
            }
          }
        }
        else if (lVar9 < lVar8) {
          *plVar3 = lVar9;
          *plVar4 = lVar8;
          lVar9 = plVar16[3];
          plVar16[3] = plVar16[5];
          plVar16[5] = lVar9;
          lVar10 = *plVar16;
          lVar9 = lVar8;
          if (*plVar3 < lVar10) {
            lVar9 = plVar16[1];
            *plVar16 = *plVar3;
            plVar16[1] = plVar16[3];
            *plVar3 = lVar10;
            plVar16[3] = lVar9;
            lVar9 = *plVar4;
          }
        }
        if (*plVar6 < lVar9) {
          *plVar4 = *plVar6;
          *plVar6 = lVar9;
          lVar9 = plVar16[5];
          plVar16[5] = plVar16[7];
          plVar16[7] = lVar9;
          lVar9 = *plVar3;
          if (*plVar4 < lVar9) {
            *plVar3 = *plVar4;
            *plVar4 = lVar9;
            lVar9 = plVar16[3];
            plVar16[3] = plVar16[5];
            plVar16[5] = lVar9;
            lVar9 = *plVar16;
            if (*plVar3 < lVar9) {
              lVar8 = plVar16[1];
              *plVar16 = *plVar3;
              plVar16[1] = plVar16[3];
              *plVar3 = lVar9;
              plVar16[3] = lVar8;
            }
          }
        }
        lVar9 = param_2[-2];
        lVar8 = *plVar6;
        if (lVar9 < lVar8) {
          *plVar6 = lVar9;
          param_2[-2] = lVar8;
          lVar9 = *plVar6;
          lVar8 = plVar16[7];
          plVar16[7] = param_2[-1];
          param_2[-1] = lVar8;
          lVar8 = *plVar4;
          if (lVar9 < lVar8) {
            *plVar4 = lVar9;
            *plVar6 = lVar8;
            lVar9 = plVar16[5];
            plVar16[5] = plVar16[7];
            plVar16[7] = lVar9;
            lVar9 = *plVar3;
            if (*plVar4 < lVar9) {
              *plVar3 = *plVar4;
              *plVar4 = lVar9;
              lVar9 = plVar16[3];
              plVar16[3] = plVar16[5];
              plVar16[5] = lVar9;
              lVar9 = *plVar16;
              if (*plVar3 < lVar9) {
                lVar8 = plVar16[1];
                *plVar16 = *plVar3;
                plVar16[1] = plVar16[3];
                *plVar3 = lVar9;
                plVar16[3] = lVar8;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar7 < 0x18) {
      plVar3 = plVar16 + 2;
      if ((param_4 & 1) == 0) {
        if (plVar16 == param_2 || plVar3 == param_2) {
          return;
        }
        plVar4 = plVar16 + 3;
        do {
          plVar6 = plVar3;
          lVar9 = plVar16[2];
          lVar8 = *plVar16;
          if (lVar9 < lVar8) {
            lVar10 = plVar16[3];
            plVar16 = plVar4;
            do {
              plVar3 = plVar16;
              plVar3[-1] = lVar8;
              *plVar3 = plVar3[-2];
              lVar8 = plVar3[-5];
              plVar16 = plVar3 + -2;
            } while (lVar9 < lVar8);
            plVar3[-3] = lVar9;
            plVar3[-2] = lVar10;
          }
          plVar3 = plVar6 + 2;
          plVar4 = plVar4 + 2;
          plVar16 = plVar6;
        } while (plVar3 != param_2);
        return;
      }
      if (plVar16 == param_2 || plVar3 == param_2) {
        return;
      }
      lVar9 = 0;
      plVar4 = plVar16;
      do {
        plVar6 = plVar3;
        lVar8 = plVar4[2];
        lVar10 = *plVar4;
        if (lVar8 < lVar10) {
          lVar14 = plVar4[3];
          lVar11 = lVar9;
          do {
            lVar15 = lVar11;
            *(long *)((long)plVar16 + lVar15 + 0x10) = lVar10;
            *(undefined8 *)((long)plVar16 + lVar15 + 0x18) =
                 *(undefined8 *)((long)plVar16 + lVar15 + 8);
            plVar3 = plVar16;
            if (lVar15 == 0) goto LAB_109c6ab30;
            lVar10 = *(long *)((long)plVar16 + lVar15 + -0x10);
            lVar11 = lVar15 + -0x10;
          } while (lVar8 < lVar10);
          plVar3 = (long *)((long)plVar16 + lVar15);
LAB_109c6ab30:
          *plVar3 = lVar8;
          plVar3[1] = lVar14;
        }
        plVar3 = plVar6 + 2;
        lVar9 = lVar9 + 0x10;
        plVar4 = plVar6;
        if (plVar3 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar16 == param_2) {
        return;
      }
      uVar5 = uVar7 - 2 >> 1;
      uVar13 = uVar5;
      do {
        if ((long)uVar13 <= (long)uVar5) {
          uVar1 = uVar13 << 1 | 1;
          plVar3 = plVar16 + uVar1 * 2;
          uVar12 = uVar13 * 2 + 2;
          if ((long)uVar12 < (long)uVar7) {
            lVar8 = *plVar3;
            lVar10 = plVar3[2];
            lVar9 = lVar8;
            if (lVar8 <= lVar10) {
              lVar9 = lVar10;
            }
            plVar4 = plVar3 + 2;
            if (lVar10 <= lVar8) {
              plVar4 = plVar3;
              uVar12 = uVar1;
            }
          }
          else {
            lVar9 = *plVar3;
            plVar4 = plVar3;
            uVar12 = uVar1;
          }
          plVar3 = plVar16 + uVar13 * 2;
          lVar8 = *plVar3;
          if (lVar8 <= lVar9) {
            lVar10 = plVar3[1];
            do {
              plVar6 = plVar4;
              lVar11 = plVar6[1];
              *plVar3 = lVar9;
              plVar3[1] = lVar11;
              if ((long)uVar5 < (long)uVar12) break;
              uVar1 = uVar12 << 1 | 1;
              plVar3 = plVar16 + uVar1 * 2;
              uVar12 = uVar12 * 2 + 2;
              if ((long)uVar12 < (long)uVar7) {
                lVar14 = *plVar3;
                lVar11 = plVar3[2];
                lVar9 = lVar14;
                if (lVar14 <= lVar11) {
                  lVar9 = lVar11;
                }
                plVar4 = plVar3 + 2;
                if (lVar11 <= lVar14) {
                  plVar4 = plVar3;
                  uVar12 = uVar1;
                }
              }
              else {
                lVar9 = *plVar3;
                plVar4 = plVar3;
                uVar12 = uVar1;
              }
              plVar3 = plVar6;
            } while (lVar8 <= lVar9);
            *plVar6 = lVar8;
            plVar6[1] = lVar10;
          }
        }
        bVar2 = uVar13 != 0;
        uVar13 = uVar13 - 1;
      } while (bVar2);
      do {
        uVar13 = 0;
        lVar9 = *plVar16;
        lVar8 = plVar16[1];
        plVar3 = plVar16;
        do {
          plVar4 = plVar3 + uVar13 * 2 + 2;
          uVar12 = uVar13 << 1 | 1;
          uVar5 = uVar13 * 2 + 2;
          if ((long)uVar5 < (long)uVar7) {
            lVar14 = plVar3[uVar13 * 2 + 4];
            lVar11 = plVar3[uVar13 * 2 + 2];
            lVar10 = lVar11;
            if (lVar11 <= lVar14) {
              lVar10 = lVar14;
            }
            plVar6 = plVar3 + uVar13 * 2 + 4;
            uVar13 = uVar5;
            if (lVar14 <= lVar11) {
              plVar6 = plVar4;
              uVar13 = uVar12;
            }
          }
          else {
            lVar10 = *plVar4;
            plVar6 = plVar4;
            uVar13 = uVar12;
          }
          lVar11 = plVar6[1];
          *plVar3 = lVar10;
          plVar3[1] = lVar11;
          plVar3 = plVar6;
        } while ((long)uVar13 <= (long)(uVar7 - 2 >> 1));
        if (plVar6 == param_2 + -2) {
          *plVar6 = lVar9;
          plVar6[1] = lVar8;
        }
        else {
          lVar10 = param_2[-1];
          *plVar6 = param_2[-2];
          plVar6[1] = lVar10;
          param_2[-2] = lVar9;
          param_2[-1] = lVar8;
          lVar9 = (long)plVar6 + (0x10 - (long)plVar16) >> 4;
          if (1 < lVar9) {
            uVar13 = lVar9 - 2U >> 1;
            lVar8 = plVar16[uVar13 * 2];
            lVar9 = *plVar6;
            if (lVar8 < lVar9) {
              lVar10 = plVar6[1];
              plVar3 = plVar16 + uVar13 * 2;
              do {
                plVar4 = plVar3;
                lVar11 = plVar4[1];
                *plVar6 = lVar8;
                plVar6[1] = lVar11;
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1 >> 1;
                lVar8 = plVar16[uVar13 * 2];
                plVar6 = plVar4;
                plVar3 = plVar16 + uVar13 * 2;
              } while (lVar8 < lVar9);
              *plVar4 = lVar9;
              plVar4[1] = lVar10;
            }
          }
        }
        bVar2 = (long)uVar7 < 3;
        uVar7 = uVar7 - 1;
        param_2 = param_2 + -2;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar3 = plVar16 + (uVar7 & 0xfffffffffffffffe);
    lVar9 = param_2[-2];
    if (uVar7 < 0x81) {
      lVar10 = *plVar16;
      lVar8 = *plVar3;
      if (lVar10 < lVar8) {
        if (lVar9 < lVar10) {
          lVar10 = plVar3[1];
          lVar11 = param_2[-1];
          *plVar3 = lVar9;
          plVar3[1] = lVar11;
          param_2[-2] = lVar8;
          param_2[-1] = lVar10;
        }
        else {
          lVar9 = plVar3[1];
          lVar11 = plVar16[1];
          *plVar3 = lVar10;
          plVar3[1] = lVar11;
          *plVar16 = lVar8;
          plVar16[1] = lVar9;
          if (param_2[-2] < lVar8) {
            lVar10 = param_2[-1];
            *plVar16 = param_2[-2];
            plVar16[1] = lVar10;
            param_2[-2] = lVar8;
            param_2[-1] = lVar9;
          }
        }
      }
      else if (lVar9 < lVar10) {
        *plVar16 = lVar9;
        param_2[-2] = lVar10;
        lVar9 = *plVar16;
        lVar8 = plVar16[1];
        plVar16[1] = param_2[-1];
        param_2[-1] = lVar8;
        lVar8 = *plVar3;
        if (lVar9 < lVar8) {
          lVar10 = plVar3[1];
          lVar11 = plVar16[1];
          *plVar3 = lVar9;
          plVar3[1] = lVar11;
          *plVar16 = lVar8;
          plVar16[1] = lVar10;
        }
      }
    }
    else {
      lVar10 = *plVar3;
      lVar8 = *plVar16;
      if (lVar10 < lVar8) {
        if (lVar9 < lVar10) {
          lVar10 = plVar16[1];
          lVar11 = param_2[-1];
          *plVar16 = lVar9;
          plVar16[1] = lVar11;
          param_2[-2] = lVar8;
          param_2[-1] = lVar10;
        }
        else {
          lVar9 = plVar16[1];
          lVar11 = plVar3[1];
          *plVar16 = lVar10;
          plVar16[1] = lVar11;
          *plVar3 = lVar8;
          plVar3[1] = lVar9;
          if (param_2[-2] < lVar8) {
            lVar10 = param_2[-1];
            *plVar3 = param_2[-2];
            plVar3[1] = lVar10;
            param_2[-2] = lVar8;
            param_2[-1] = lVar9;
          }
        }
      }
      else if (lVar9 < lVar10) {
        *plVar3 = lVar9;
        param_2[-2] = lVar10;
        lVar9 = *plVar3;
        lVar8 = plVar3[1];
        plVar3[1] = param_2[-1];
        param_2[-1] = lVar8;
        lVar8 = *plVar16;
        if (lVar9 < lVar8) {
          lVar10 = plVar16[1];
          lVar11 = plVar3[1];
          *plVar16 = lVar9;
          plVar16[1] = lVar11;
          *plVar3 = lVar8;
          plVar3[1] = lVar10;
        }
      }
      lVar8 = plVar3[-2];
      lVar9 = plVar16[2];
      lVar10 = param_2[-4];
      if (lVar8 < lVar9) {
        if (lVar10 < lVar8) {
          lVar8 = plVar16[3];
          lVar11 = param_2[-3];
          plVar16[2] = lVar10;
          plVar16[3] = lVar11;
          param_2[-4] = lVar9;
          param_2[-3] = lVar8;
        }
        else {
          lVar10 = plVar16[3];
          lVar11 = plVar3[-1];
          plVar16[2] = lVar8;
          plVar16[3] = lVar11;
          plVar3[-2] = lVar9;
          plVar3[-1] = lVar10;
          if (param_2[-4] < lVar9) {
            lVar8 = param_2[-3];
            plVar3[-2] = param_2[-4];
            plVar3[-1] = lVar8;
            param_2[-4] = lVar9;
            param_2[-3] = lVar10;
          }
        }
      }
      else if (lVar10 < lVar8) {
        plVar3[-2] = lVar10;
        param_2[-4] = lVar8;
        lVar9 = plVar3[-2];
        lVar8 = plVar3[-1];
        plVar3[-1] = param_2[-3];
        param_2[-3] = lVar8;
        lVar8 = plVar16[2];
        if (lVar9 < lVar8) {
          lVar10 = plVar16[3];
          lVar11 = plVar3[-1];
          plVar16[2] = lVar9;
          plVar16[3] = lVar11;
          plVar3[-2] = lVar8;
          plVar3[-1] = lVar10;
        }
      }
      lVar8 = plVar3[2];
      lVar9 = plVar16[4];
      lVar10 = param_2[-6];
      if (lVar8 < lVar9) {
        if (lVar10 < lVar8) {
          lVar8 = plVar16[5];
          lVar11 = param_2[-5];
          plVar16[4] = lVar10;
          plVar16[5] = lVar11;
          param_2[-6] = lVar9;
          param_2[-5] = lVar8;
        }
        else {
          lVar10 = plVar16[5];
          lVar11 = plVar3[3];
          plVar16[4] = lVar8;
          plVar16[5] = lVar11;
          plVar3[2] = lVar9;
          plVar3[3] = lVar10;
          if (param_2[-6] < lVar9) {
            lVar8 = param_2[-5];
            plVar3[2] = param_2[-6];
            plVar3[3] = lVar8;
            param_2[-6] = lVar9;
            param_2[-5] = lVar10;
          }
        }
      }
      else if (lVar10 < lVar8) {
        plVar3[2] = lVar10;
        param_2[-6] = lVar8;
        lVar9 = plVar3[2];
        lVar8 = plVar3[3];
        plVar3[3] = param_2[-5];
        param_2[-5] = lVar8;
        lVar8 = plVar16[4];
        if (lVar9 < lVar8) {
          lVar10 = plVar16[5];
          lVar11 = plVar3[3];
          plVar16[4] = lVar9;
          plVar16[5] = lVar11;
          plVar3[2] = lVar8;
          plVar3[3] = lVar10;
        }
      }
      lVar9 = *plVar3;
      lVar8 = plVar3[-2];
      lVar10 = plVar3[2];
      if (lVar9 < lVar8) {
        if (lVar10 < lVar9) {
          lVar11 = plVar3[-1];
          plVar3[-2] = lVar10;
          plVar3[-1] = plVar3[3];
          plVar3[2] = lVar8;
          plVar3[3] = lVar11;
        }
        else {
          lVar11 = plVar3[-1];
          plVar3[-2] = lVar9;
          plVar3[-1] = plVar3[1];
          *plVar3 = lVar8;
          plVar3[1] = lVar11;
          lVar9 = lVar8;
          if (lVar10 < lVar8) {
            *plVar3 = lVar10;
            plVar3[1] = plVar3[3];
            plVar3[2] = lVar8;
            plVar3[3] = lVar11;
            lVar9 = lVar10;
          }
        }
      }
      else if (lVar10 < lVar9) {
        lVar14 = plVar3[1];
        lVar11 = plVar3[3];
        *plVar3 = lVar10;
        plVar3[1] = lVar11;
        plVar3[2] = lVar9;
        plVar3[3] = lVar14;
        lVar9 = lVar10;
        if (lVar10 < lVar8) {
          lVar9 = plVar3[-1];
          plVar3[-2] = lVar10;
          plVar3[-1] = lVar11;
          *plVar3 = lVar8;
          plVar3[1] = lVar9;
          lVar9 = lVar8;
        }
      }
      lVar8 = *plVar16;
      lVar10 = plVar16[1];
      lVar11 = plVar3[1];
      *plVar16 = lVar9;
      plVar16[1] = lVar11;
      *plVar3 = lVar8;
      plVar3[1] = lVar10;
    }
    param_3 = param_3 + -1;
    lVar9 = *plVar16;
    param_1 = plVar16;
    if (((param_4 & 1) == 0) && (lVar9 <= plVar16[-2])) {
      if (lVar9 < param_2[-2]) {
        do {
          param_1 = param_1 + 2;
        } while (*param_1 <= lVar9);
      }
      else {
        do {
          param_1 = param_1 + 2;
          if (param_2 <= param_1) break;
        } while (*param_1 <= lVar9);
      }
      plVar3 = param_2;
      if (param_1 < param_2) {
        do {
          plVar3 = plVar3 + -2;
        } while (lVar9 < *plVar3);
      }
      lVar8 = plVar16[1];
      if (param_1 < plVar3) {
        lVar10 = *param_1;
        lVar11 = *plVar3;
        do {
          lVar14 = param_1[1];
          lVar15 = plVar3[1];
          *param_1 = lVar11;
          param_1[1] = lVar15;
          *plVar3 = lVar10;
          plVar3[1] = lVar14;
          do {
            param_1 = param_1 + 2;
            lVar10 = *param_1;
          } while (lVar10 <= lVar9);
          do {
            plVar3 = plVar3 + -2;
            lVar11 = *plVar3;
          } while (lVar9 < lVar11);
        } while (param_1 < plVar3);
      }
      if (param_1 + -2 != plVar16) {
        lVar10 = param_1[-1];
        *plVar16 = param_1[-2];
        plVar16[1] = lVar10;
      }
      param_4 = 0;
      param_1[-2] = lVar9;
      param_1[-1] = lVar8;
      goto LAB_109c6a4d8;
    }
    lVar8 = 0;
    lVar10 = plVar16[1];
    do {
      lVar11 = *(long *)((long)plVar16 + lVar8 + 0x10);
      lVar8 = lVar8 + 0x10;
    } while (lVar11 < lVar9);
    plVar3 = (long *)((long)plVar16 + lVar8);
    plVar4 = param_2;
    if (lVar8 == 0x10) {
      do {
        if (plVar4 <= plVar3) break;
        plVar4 = plVar4 + -2;
      } while (lVar9 <= *plVar4);
    }
    else {
      do {
        plVar4 = plVar4 + -2;
      } while (lVar9 <= *plVar4);
    }
    param_1 = plVar3;
    if (plVar3 < plVar4) {
      lVar8 = *plVar4;
      plVar6 = plVar4;
      do {
        lVar14 = param_1[1];
        lVar15 = plVar6[1];
        *param_1 = lVar8;
        param_1[1] = lVar15;
        *plVar6 = lVar11;
        plVar6[1] = lVar14;
        do {
          param_1 = param_1 + 2;
          lVar11 = *param_1;
        } while (lVar11 < lVar9);
        do {
          plVar6 = plVar6 + -2;
          lVar8 = *plVar6;
        } while (lVar9 <= lVar8);
      } while (param_1 < plVar6);
    }
    plVar6 = param_1 + -2;
    if (plVar6 != plVar16) {
      lVar8 = param_1[-1];
      *plVar16 = param_1[-2];
      plVar16[1] = lVar8;
    }
    param_1[-2] = lVar9;
    param_1[-1] = lVar10;
    if (plVar3 < plVar4) {
LAB_109c6a92c:
      FUN_109c6a4ac(plVar16,plVar6,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar3 = plVar16;
      FUN_109c6b058(plVar16,plVar6);
      plVar4 = param_1;
      FUN_109c6b058(param_1,param_2);
      if ((int)plVar4 == 0) {
        if (((ulong)plVar3 & 1) == 0) goto LAB_109c6a92c;
      }
      else {
        param_1 = plVar16;
        param_2 = plVar6;
        if (((ulong)plVar3 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109c6aebc; end: 109c6b057;  */

void FUN_109c6aebc(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_2;
  lVar2 = *param_1;
  lVar3 = *param_3;
  if (lVar1 < lVar2) {
    if (lVar3 < lVar1) {
      lVar1 = param_1[1];
      lVar4 = param_3[1];
      *param_1 = lVar3;
      param_1[1] = lVar4;
      *param_3 = lVar2;
      param_3[1] = lVar1;
      lVar3 = lVar2;
    }
    else {
      lVar4 = param_1[1];
      lVar3 = param_2[1];
      *param_1 = lVar1;
      param_1[1] = lVar3;
      *param_2 = lVar2;
      param_2[1] = lVar4;
      lVar3 = *param_3;
      if (lVar3 < lVar2) {
        lVar1 = param_3[1];
        *param_2 = lVar3;
        param_2[1] = lVar1;
        *param_3 = lVar2;
        param_3[1] = lVar4;
        lVar3 = lVar2;
      }
    }
  }
  else if (lVar3 < lVar1) {
    *param_2 = lVar3;
    *param_3 = lVar1;
    lVar2 = *param_2;
    lVar3 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = lVar3;
    lVar4 = *param_1;
    lVar3 = lVar1;
    if (lVar2 < lVar4) {
      lVar3 = param_1[1];
      lVar1 = param_2[1];
      *param_1 = lVar2;
      param_1[1] = lVar1;
      *param_2 = lVar4;
      param_2[1] = lVar3;
      lVar3 = *param_3;
    }
  }
  if (*param_4 < lVar3) {
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_3;
    lVar1 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = lVar1;
    lVar1 = *param_2;
    if (lVar3 < lVar1) {
      *param_2 = lVar3;
      *param_3 = lVar1;
      lVar3 = *param_2;
      lVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = lVar1;
      lVar1 = *param_1;
      if (lVar3 < lVar1) {
        lVar2 = param_1[1];
        lVar4 = param_2[1];
        *param_1 = lVar3;
        param_1[1] = lVar4;
        *param_2 = lVar1;
        param_2[1] = lVar2;
      }
    }
  }
  lVar3 = *param_4;
  if (*param_5 < lVar3) {
    *param_4 = *param_5;
    *param_5 = lVar3;
    lVar3 = *param_4;
    lVar1 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = lVar1;
    lVar1 = *param_3;
    if (lVar3 < lVar1) {
      *param_3 = lVar3;
      *param_4 = lVar1;
      lVar3 = *param_3;
      lVar1 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = lVar1;
      lVar1 = *param_2;
      if (lVar3 < lVar1) {
        *param_2 = lVar3;
        *param_3 = lVar1;
        lVar3 = *param_2;
        lVar1 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = lVar1;
        lVar1 = *param_1;
        if (lVar3 < lVar1) {
          lVar2 = param_1[1];
          lVar4 = param_2[1];
          *param_1 = lVar3;
          param_1[1] = lVar4;
          *param_2 = lVar1;
          param_2[1] = lVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 109c6b058; end: 109c6b37b;  */

bool FUN_109c6b058(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 != 2) {
LAB_109c6b100:
      lVar9 = param_1[4];
      lVar7 = param_1[2];
      lVar3 = *param_1;
      if (lVar7 < lVar3) {
        if (lVar9 < lVar7) {
          lVar7 = param_1[1];
          *param_1 = lVar9;
          param_1[1] = param_1[5];
          param_1[4] = lVar3;
          param_1[5] = lVar7;
        }
        else {
          lVar10 = param_1[1];
          *param_1 = lVar7;
          param_1[1] = param_1[3];
          param_1[2] = lVar3;
          param_1[3] = lVar10;
          if (lVar9 < lVar3) {
            param_1[2] = lVar9;
            param_1[3] = param_1[5];
            param_1[4] = lVar3;
            param_1[5] = lVar10;
          }
        }
      }
      else if (lVar9 < lVar7) {
        lVar5 = param_1[3];
        lVar10 = param_1[5];
        param_1[2] = lVar9;
        param_1[3] = lVar10;
        param_1[4] = lVar7;
        param_1[5] = lVar5;
        if (lVar9 < lVar3) {
          lVar7 = param_1[1];
          *param_1 = lVar9;
          param_1[1] = lVar10;
          param_1[2] = lVar3;
          param_1[3] = lVar7;
        }
      }
      if (param_1 + 6 == param_2) {
        return true;
      }
      lVar3 = 0;
      iVar8 = 0;
      plVar4 = param_1 + 4;
      plVar6 = param_1 + 6;
      do {
        lVar9 = *plVar6;
        lVar7 = *plVar4;
        if (lVar9 < lVar7) {
          lVar5 = plVar6[1];
          lVar10 = lVar3;
          do {
            lVar11 = lVar10;
            *(long *)((long)param_1 + lVar11 + 0x30) = lVar7;
            *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x28);
            plVar4 = param_1;
            if (lVar11 == -0x20) goto LAB_109c6b2b0;
            lVar7 = *(long *)((long)param_1 + lVar11 + 0x10);
            lVar10 = lVar11 + -0x10;
          } while (lVar9 < lVar7);
          plVar4 = (long *)((long)param_1 + lVar11 + 0x20);
LAB_109c6b2b0:
          *plVar4 = lVar9;
          plVar4[1] = lVar5;
          iVar8 = iVar8 + 1;
          if (iVar8 == 8) {
            return plVar6 + 2 == param_2;
          }
        }
        plVar1 = plVar6 + 2;
        lVar3 = lVar3 + 0x10;
        plVar4 = plVar6;
        plVar6 = plVar1;
        if (plVar1 == param_2) {
          return true;
        }
      } while( true );
    }
    lVar3 = *param_1;
    if (lVar3 <= param_2[-2]) {
      return true;
    }
    lVar7 = param_1[1];
    lVar9 = param_2[-1];
    *param_1 = param_2[-2];
    param_1[1] = lVar9;
  }
  else {
    if (uVar2 != 3) {
      if (uVar2 == 4) {
        lVar7 = param_1[2];
        lVar9 = *param_1;
        lVar10 = param_1[4];
        lVar3 = lVar10;
        if (lVar7 < lVar9) {
          if (lVar10 < lVar7) {
            lVar3 = param_1[1];
            *param_1 = lVar10;
            param_1[1] = param_1[5];
            param_1[4] = lVar9;
            param_1[5] = lVar3;
            lVar3 = lVar9;
          }
          else {
            lVar5 = param_1[1];
            *param_1 = lVar7;
            param_1[1] = param_1[3];
            param_1[2] = lVar9;
            param_1[3] = lVar5;
            if (lVar10 < lVar9) {
              param_1[2] = lVar10;
              param_1[3] = param_1[5];
              param_1[4] = lVar9;
              param_1[5] = lVar5;
              lVar3 = lVar9;
            }
          }
        }
        else if (lVar10 < lVar7) {
          lVar3 = param_1[3];
          lVar5 = param_1[5];
          param_1[2] = lVar10;
          param_1[3] = lVar5;
          param_1[4] = lVar7;
          param_1[5] = lVar3;
          lVar3 = lVar7;
          if (lVar10 < lVar9) {
            lVar7 = param_1[1];
            *param_1 = lVar10;
            param_1[1] = lVar5;
            param_1[2] = lVar9;
            param_1[3] = lVar7;
          }
        }
        if (lVar3 <= param_2[-2]) {
          return true;
        }
        param_1[4] = param_2[-2];
        param_2[-2] = lVar3;
        lVar3 = param_1[4];
        lVar9 = param_1[5];
        param_1[5] = param_2[-1];
        param_2[-1] = lVar9;
        lVar9 = param_1[2];
        if (lVar9 <= lVar3) {
          return true;
        }
        lVar10 = param_1[3];
        lVar7 = param_1[5];
        param_1[2] = lVar3;
        param_1[3] = lVar7;
        param_1[4] = lVar9;
        param_1[5] = lVar10;
        lVar9 = *param_1;
        if (lVar9 <= lVar3) {
          return true;
        }
        lVar10 = param_1[1];
        *param_1 = lVar3;
        param_1[1] = lVar7;
        param_1[2] = lVar9;
        param_1[3] = lVar10;
        return true;
      }
      if (uVar2 == 5) {
        FUN_109c6aebc(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
        return true;
      }
      goto LAB_109c6b100;
    }
    lVar9 = param_1[2];
    lVar3 = *param_1;
    lVar7 = param_2[-2];
    if (lVar3 <= lVar9) {
      if (lVar9 <= lVar7) {
        return true;
      }
      param_1[2] = lVar7;
      param_2[-2] = lVar9;
      lVar3 = param_1[2];
      lVar9 = param_1[3];
      param_1[3] = param_2[-1];
      param_2[-1] = lVar9;
      lVar9 = *param_1;
      if (lVar9 <= lVar3) {
        return true;
      }
      lVar7 = param_1[1];
      *param_1 = lVar3;
      param_1[1] = param_1[3];
      param_1[2] = lVar9;
      param_1[3] = lVar7;
      return true;
    }
    if (lVar7 < lVar9) {
      lVar9 = param_1[1];
      lVar10 = param_2[-1];
      *param_1 = lVar7;
      param_1[1] = lVar10;
      param_2[-2] = lVar3;
      param_2[-1] = lVar9;
      return true;
    }
    lVar7 = param_1[1];
    *param_1 = lVar9;
    param_1[1] = param_1[3];
    param_1[2] = lVar3;
    param_1[3] = lVar7;
    if (lVar3 <= param_2[-2]) {
      return true;
    }
    lVar9 = param_2[-1];
    param_1[2] = param_2[-2];
    param_1[3] = lVar9;
  }
  param_2[-2] = lVar3;
  param_2[-1] = lVar7;
  return true;
}



/* Entry: 109c6b37c; end: 109c6b4a3;  */

void FUN_109c6b37c(int *param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uStack_58;
  long lStack_50;
  uint uStack_48;
  
  uStack_48 = *(uint *)(param_2 + 0xc);
  if (uStack_48 != *(uint *)(param_2 + 4)) {
    uStack_58 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uStack_48 * 8);
    lStack_50 = param_2;
    if ((uStack_58 & 1) != 0) {
      uStack_58 = *(ulong *)(**(long **)(uStack_58 - 1) + 0x20);
    }
    do {
      uVar1 = uStack_58;
      uVar4 = *(undefined8 *)(uStack_58 + 8);
      piVar2 = param_1;
      func_0x00010890aa48(param_1,uVar4,0);
      if (piVar2 == (int *)0x0) {
        piVar2 = param_1;
        func_0x00010890aad4(param_1,*param_1 + 1);
        if ((int)piVar2 != 0) {
          uVar4 = *(undefined8 *)(uVar1 + 8);
          func_0x00010890aa48(param_1,uVar4,0);
        }
        piVar2 = param_1;
        func_0x000107c27d64(param_1,0x28);
        *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(uVar1 + 8);
        lVar3 = *(long *)(param_1 + 6);
        piVar5 = piVar2 + 4;
        piVar5[0] = 0;
        piVar5[1] = 0;
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[8] = 0;
        piVar2[9] = 0;
        if (lVar3 != 0) {
          func_0x00010b4d8014(lVar3,piVar5,&UNK_104c611dc);
        }
        func_0x00010890ab64(param_1,uVar4,piVar2);
        *param_1 = *param_1 + 1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (piVar2 + 4,uVar1 + 0x10);
      func_0x000107c27d54(&uStack_58);
    } while (uStack_58 != 0);
  }
  return;
}



/* Entry: 109c6b4a4; end: 109c6b5a3;  */

void FUN_109c6b4a4(int *param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uStack_58;
  long lStack_50;
  uint uStack_48;
  
  uStack_48 = *(uint *)(param_2 + 0xc);
  if (uStack_48 != *(uint *)(param_2 + 4)) {
    uStack_58 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uStack_48 * 8);
    lStack_50 = param_2;
    if ((uStack_58 & 1) != 0) {
      uStack_58 = *(ulong *)(**(long **)(uStack_58 - 1) + 0x20);
    }
    do {
      uVar1 = uStack_58;
      uVar4 = *(undefined8 *)(uStack_58 + 0x10);
      uVar3 = *(undefined8 *)(uStack_58 + 8);
      piVar2 = param_1;
      func_0x00010890aa48(param_1,uVar3,0);
      if (piVar2 == (int *)0x0) {
        piVar2 = param_1;
        func_0x00010890aad4(param_1,*param_1 + 1);
        if ((int)piVar2 != 0) {
          uVar3 = *(undefined8 *)(uVar1 + 8);
          func_0x00010890aa48(param_1,uVar3,0);
        }
        piVar2 = param_1;
        func_0x000107c27d64(param_1,0x18);
        *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(uVar1 + 8);
        piVar2[4] = 0;
        piVar2[5] = 0;
        func_0x00010890ab64(param_1,uVar3,piVar2);
        *param_1 = *param_1 + 1;
      }
      *(undefined8 *)(piVar2 + 4) = uVar4;
      func_0x000107c27d54(&uStack_58);
    } while (uStack_58 != 0);
  }
  return;
}



/* Entry: 109c6b5a4; end: 109c6b62f;  */

void FUN_109c6b5a4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_109c6b600;
    FUN_109c684b8();
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_109c6b600;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_109c6b600;
    FUN_109c680c8();
  }
  __ZdlPv();
LAB_109c6b600:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109c6b630; end: 109c6b6bf;  */

undefined8 * FUN_109c6b630(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2f6b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  else {
    if (iVar1 != 1) {
      return param_1;
    }
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  param_1[2] = param_2;
  return param_1;
}



/* Entry: 109c6b6c0; end: 109c6b6fb;  */

long FUN_109c6b6c0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109c6b5a4(param_1);
  }
  return param_1;
}



/* Entry: 109c6b6fc; end: 109c6b6ff;  */

long FUN_109c6b6fc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109c6b5a4(param_1);
  }
  return param_1;
}



/* Entry: 109c6b700; end: 109c6b713;  */

void FUN_109c6b700(void)

{
  FUN_109c6b6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6b714; end: 109c6b71f;  */

undefined ** FUN_109c6b714(void)

{
  return &PTR_DAT_110b2f6f0;
}



/* Entry: 109c6b720; end: 109c6b757;  */

void FUN_109c6b720(long param_1)

{
  ulong *puVar1;
  
  FUN_109c6b5a4();
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



/* Entry: 109c6b758; end: 109c6b8b7;  */

long * FUN_109c6b758(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  plVar1 = (long *)(ulong)uVar3;
  if (uVar3 == 1) {
    lVar4 = 0x28;
  }
  else {
    if (uVar3 != 2) goto LAB_109c6b7b4;
    lVar4 = 0x24;
  }
  func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x10),
                      *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar4),param_2,param_3);
  param_2 = plVar1;
LAB_109c6b7b4:
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
      lVar4 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar4 < (int)uVar3) {
        do {
          iVar7 = (int)lVar4;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar1 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar1;
          } while (plVar5 <= plVar1);
          lVar4 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar4 < (int)uVar3);
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



/* Entry: 109c6b8b8; end: 109c6b943;  */

void FUN_109c6b8b8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109c68808();
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) {
      iVar1 = 0;
      goto LAB_109c6b914;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109c68360();
  }
  iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
LAB_109c6b914:
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



/* Entry: 109c6b944; end: 109c6b947;  */

void FUN_109c6b944(long param_1,long param_2)

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
  if (iVar2 == 0) goto LAB_109c6ba1c;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c6b5a4(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      FUN_109c688b0(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109c6ba1c;
    }
    func_0x000109c6baf8(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_109c6ba1c;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      FUN_109c683fc(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109c6ba1c;
    }
    func_0x000109c6bab4(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_109c6ba1c:
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



/* Entry: 109c6b948; end: 109c6ba63;  */

void FUN_109c6b948(long param_1,long param_2)

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
  if (iVar2 == 0) goto LAB_109c6ba1c;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109c6b5a4(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      FUN_109c688b0(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109c6ba1c;
    }
    func_0x000109c6baf8(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_109c6ba1c;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      FUN_109c683fc(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109c6ba1c;
    }
    func_0x000109c6bab4(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_109c6ba1c:
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



/* Entry: 109c6ba64; end: 109c6ba6b;  */

void FUN_109c6ba64(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110b2f6b0;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  return;
}



/* Entry: 109c6ba6c; end: 109c6bb93;  */

void FUN_109c6ba6c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b2f6b0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 109c6bb94; end: 109c6bbaf;  */

undefined ** FUN_109c6bb94(void)

{
  return &PTR_DAT_110b2fc00;
}



/* Entry: 109c6bbb0; end: 109c6bcdb;  */

long * FUN_109c6bbb0(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c6bcdc; end: 109c6bd23;  */

long FUN_109c6bcdc(long param_1)

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



/* Entry: 109c6bd24; end: 109c6bd7b;  */

long FUN_109c6bd24(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c6bd7c; end: 109c6bd97;  */

undefined ** FUN_109c6bd7c(void)

{
  return &PTR_DAT_110b2fc48;
}



/* Entry: 109c6bd98; end: 109c6bec3;  */

long * FUN_109c6bd98(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c6bec4; end: 109c6bf0b;  */

long FUN_109c6bec4(long param_1)

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



/* Entry: 109c6bf0c; end: 109c6bf63;  */

long FUN_109c6bf0c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c6bf64; end: 109c6bf7f;  */

undefined ** FUN_109c6bf64(void)

{
  return &PTR_DAT_110b2fc90;
}



/* Entry: 109c6bf80; end: 109c6c0ab;  */

long * FUN_109c6bf80(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c6c0ac; end: 109c6c127;  */

long FUN_109c6c0ac(long param_1)

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



/* Entry: 109c6c128; end: 109c6c17f;  */

long FUN_109c6c128(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c6c180; end: 109c6c19f;  */

undefined ** FUN_109c6c180(void)

{
  return &PTR_DAT_110b2fcd8;
}



/* Entry: 109c6c1a0; end: 109c6c363;  */

byte * FUN_109c6c1a0(long param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(ulong *)(param_1 + 0x10);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    uVar4 = uVar3;
    pbVar5 = pbVar7;
    if (0x7f < uVar3) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar3;
  }
  pbVar5 = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    pbVar5 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar1 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar1 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar5 < (long)(int)uVar2) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar7 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar7;
          _memcpy(pbVar5,lVar1,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar1 = lVar1 + iVar9;
          pbVar7 = *(byte **)param_3;
          pbVar8 = pbVar5 + iVar9;
          do {
            pbVar5 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar5 + ((int)pbVar8 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            pbVar5 = pbVar8;
          } while (pbVar7 <= pbVar8);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar5);
        } while ((int)pbVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(pbVar5,lVar1,(long)(int)(uint)uStack_48);
      pbVar5 = pbVar5 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar5,lVar1,uStack_48 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar2;
    }
  }
  return pbVar5;
}



/* Entry: 109c6c364; end: 109c6c3cb;  */

ulong FUN_109c6c364(long param_1)

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



/* Entry: 109c6c3cc; end: 109c6c423;  */

long FUN_109c6c3cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c6c424; end: 109c6c443;  */

undefined ** FUN_109c6c424(void)

{
  return &PTR_DAT_110b2fd18;
}



/* Entry: 109c6c444; end: 109c6c66f;  */

byte * FUN_109c6c444(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(ulong *)(param_1 + 0x10);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    uVar4 = uVar3;
    pbVar5 = pbVar7;
    if (0x7f < uVar3) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar3;
  }
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(ulong *)(param_1 + 0x18);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x10;
    uVar4 = uVar3;
    pbVar5 = pbVar7;
    if (0x7f < uVar3) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar8 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar5;
          _memcpy(param_2,lVar8,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar5 = (byte *)*param_3;
          pbVar7 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = (byte *)((long)plVar1 + (long)((int)pbVar7 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar7;
          } while (pbVar5 <= pbVar7);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar2);
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



/* Entry: 109c6c670; end: 109c6c707;  */

ulong FUN_109c6c670(long param_1)

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



/* Entry: 109c6c708; end: 109c6c747;  */

long FUN_109c6c708(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c6c748; end: 109c6c74b;  */

long FUN_109c6c748(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c6c74c; end: 109c6c75f;  */

void FUN_109c6c74c(void)

{
  FUN_109c6c708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6c760; end: 109c6c76b;  */

undefined ** FUN_109c6c760(void)

{
  return &PTR_DAT_110b2fd68;
}



/* Entry: 109c6c76c; end: 109c6c7b3;  */

void FUN_109c6c76c(long param_1)

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



/* Entry: 109c6c7b4; end: 109c6c9cf;  */

long * FUN_109c6c7b4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  long lVar9;
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = param_2;
    } while (iVar8 != iVar7);
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
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar3);
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



/* Entry: 109c6c9d0; end: 109c6c9d3;  */

void FUN_109c6c9d0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c6c9d4; end: 109c6ca93;  */

void FUN_109c6c9d4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c6ca94; end: 109c6ca97;  */

long FUN_109c6ca94(long param_1)

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
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109c6ca98; end: 109c6caab;  */

void FUN_109c6ca98(void)

{
  func_0x000109c6ca28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6caac; end: 109c6cab7;  */

undefined ** FUN_109c6caac(void)

{
  return &PTR_DAT_110b2fdc8;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c949f4; end: 109c94a5f;  */

long FUN_109c949f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c94a60; end: 109c94a73;  */

void FUN_109c94a60(void)

{
  FUN_109c949f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c94a74; end: 109c94a7f;  */

undefined ** FUN_109c94a74(void)

{
  return &PTR_DAT_110b364b0;
}



/* Entry: 109c94a80; end: 109c94b07;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c94a80(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 109c94b08; end: 109c94e73;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109c94b08(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  ulong uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x38);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x38);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (param_2 < pbVar6) {
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
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x40);
    }
    *param_2 = 0x28;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x41) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (param_2 < pbVar6) {
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
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x41);
    }
    *param_2 = 0x30;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  iVar11 = *(int *)(param_1 + 0x44);
  if (iVar11 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      iVar11 = *(int *)(param_1 + 0x44);
    }
    *param_2 = 0x55;
    *(int *)(param_2 + 1) = iVar11;
    param_2 = param_2 + 5;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar6 = (byte *)0xf;
    func_0x000107c303cc(0xf,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = pbVar6;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar6 = (byte *)0x10;
    func_0x000107c303cc(0x10,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = pbVar6;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    pbVar6 = (byte *)0x11;
    func_0x000107c303cc(0x11,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
    param_2 = pbVar6;
  }
  pbVar6 = param_2;
  if ((uVar3 >> 3 & 1) != 0) {
    pbVar6 = (byte *)0x12;
    func_0x000107c303cc(0x12,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar10 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar10 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar6 < (long)(int)uVar3) {
      pbVar8 = (byte *)((*param_3 - (long)pbVar6) + 0x10);
      if ((int)pbVar8 < (int)uVar3) {
        do {
          iVar11 = (int)pbVar8;
          _memcpy(pbVar6,lVar10,(long)iVar11);
          uVar3 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar3;
          lVar10 = lVar10 + iVar11;
          pbVar8 = (byte *)*param_3;
          pbVar9 = pbVar6 + iVar11;
          do {
            pbVar6 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar1 + (long)((int)pbVar9 - (int)pbVar8));
            pbVar8 = (byte *)*param_3;
            pbVar6 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar6);
        } while ((int)pbVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar6,lVar10,(long)(int)(uint)uStack_48);
      pbVar6 = pbVar6 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar6,lVar10,uStack_48 & 0xffffffff);
      pbVar6 = pbVar6 + (int)uVar3;
    }
  }
  return pbVar6;
}



/* Entry: 109c94e74; end: 109c94fd3;  */

void FUN_109c94e74(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_109c908c0();
      iVar3 = iVar3 + ((int)LZCOUNT(iVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x40) * 2 + (uint)*(byte *)(param_1 + 0x41) * 2;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 109c94fd4; end: 109c94fd7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c94fd4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
      else {
        FUN_109c7fc24();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
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



/* Entry: 109c94fd8; end: 109c9501f;  */

long FUN_109c94fd8(long param_1)

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



/* Entry: 109c95020; end: 109c95023;  */

long FUN_109c95020(long param_1)

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



/* Entry: 109c95024; end: 109c95037;  */

void FUN_109c95024(void)

{
  FUN_109c94fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c95038; end: 109c95057;  */

undefined ** FUN_109c95038(void)

{
  return &PTR_DAT_110b36500;
}



/* Entry: 109c95058; end: 109c95327;  */

byte * FUN_109c95058(long param_1,byte *param_2,long *param_3)

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
    *param_2 = 0x52;
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
LAB_109c95118:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c951b0:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109c951b0;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c95118;
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



/* Entry: 109c95328; end: 109c953cf;  */

long FUN_109c95328(long param_1)

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



/* Entry: 109c953d0; end: 109c95477;  */

void FUN_109c953d0(long param_1,long param_2)

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
      func_0x0001087675dc(param_1 + 0x10);
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



/* Entry: 109c95478; end: 109c955c3;  */

void FUN_109c95478(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0x20) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x48), lVar3 == 0)) goto LAB_109c95510;
    FUN_109c94fd8(lVar3);
  }
  else if (iVar1 == 0x1f) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x48), lVar3 == 0)) goto LAB_109c95510;
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
  }
  else {
    if (iVar1 != 0x1e) goto LAB_109c95510;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x48), lVar3 == 0)) goto LAB_109c95510;
    func_0x000109c8f900(lVar3);
  }
  __ZdlPv(lVar3);
LAB_109c95510:
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



/* Entry: 109c955c4; end: 109c955d7;  */

void FUN_109c955c4(void)

{
  func_0x000109c95550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c955d8; end: 109c955e3;  */

undefined ** FUN_109c955d8(void)

{
  return &PTR_DAT_110b36560;
}



/* Entry: 109c955e4; end: 109c9562b;  */

void FUN_109c955e4(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  FUN_109c95478();
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



/* Entry: 109c9562c; end: 109c95c27;  */

byte * FUN_109c9562c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x3c);
  if (uVar13 != 0) {
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
      uVar13 = *(uint *)(param_1 + 0x3c);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 8;
    uVar6 = (ulong)(int)uVar13;
    uVar4 = uVar6;
    pbVar5 = pbVar10;
    if (0x7f < uVar13) {
      do {
        pbVar10 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar8 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar10;
      } while (uVar8 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar6;
  }
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
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
    }
    pbVar5 = param_2 + 1;
    *param_2 = 0x52;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar5;
        pbVar5 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar5 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar5 = (byte *)(param_3 + 2);
    puVar16 = puVar14;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c9571c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c957b4:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar5 = uVar18;
              param_3[1] = (long)pbVar11;
              goto LAB_109c957b4;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar11 - (long)pbVar5);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c9571c;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar5 = uVar18;
              *param_3 = (long)(pbVar5 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar15 = puVar16 + 1;
      uVar6 = *puVar16;
      uVar4 = uVar6;
      pbVar11 = pbVar10;
      if (0x7f < uVar6) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar4 | 0x80;
          uVar6 = uVar4 >> 7;
          uVar8 = uVar4 >> 0xe;
          uVar4 = uVar6;
          pbVar11 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar6;
      puVar16 = puVar15;
    } while (puVar15 < puVar14 + iVar17);
  }
  uVar13 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar13) {
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
    }
    pbVar5 = param_2 + 2;
    param_2[0] = 0xa2;
    param_2[1] = 1;
    if (uVar13 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      do {
        param_2 = pbVar5;
        pbVar5 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar5 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x30);
    iVar17 = *(int *)(param_1 + 0x28);
    pbVar5 = (byte *)(param_3 + 2);
    puVar16 = puVar14;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c95878:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c95910:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar5 = uVar18;
              param_3[1] = (long)pbVar11;
              goto LAB_109c95910;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar11 - (long)pbVar5);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c95878;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar5 = uVar18;
              *param_3 = (long)(pbVar5 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar15 = puVar16 + 1;
      uVar6 = *puVar16;
      uVar4 = uVar6;
      pbVar11 = pbVar10;
      if (0x7f < uVar6) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar4 | 0x80;
          uVar6 = uVar4 >> 7;
          uVar8 = uVar4 >> 0xe;
          uVar4 = uVar6;
          pbVar11 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar6;
      puVar16 = puVar15;
    } while (puVar15 < puVar14 + iVar17);
  }
  pbVar5 = (byte *)(ulong)*(uint *)(param_1 + 0x54);
  uVar13 = *(uint *)(param_1 + 0x54) - 0x1e;
  if (uVar13 < 3) {
    func_0x000107c303cc(pbVar5,*(long *)(param_1 + 0x48),
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x48) + *(long *)(&UNK_10e03dd70 + (ulong)uVar13 * 8))
                        ,param_2,param_3);
    param_2 = pbVar5;
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    pbVar5 = (byte *)*param_3;
    if (param_2 < pbVar5) {
      bVar3 = 1;
    }
    else {
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
      bVar3 = *(byte *)(param_1 + 0x40);
    }
    param_2[0] = 0x90;
    param_2[1] = 3;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  if (*(char *)(param_1 + 0x41) == '\x01') {
    pbVar5 = (byte *)*param_3;
    if (param_2 < pbVar5) {
      bVar3 = 1;
    }
    else {
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
      bVar3 = *(byte *)(param_1 + 0x41);
    }
    param_2[0] = 0xe0;
    param_2[1] = 3;
    param_2[2] = bVar3;
    param_2 = param_2 + 3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar12 = *(long *)(uVar4 + 8);
      uVar6 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar12 = uVar4 + 8;
    }
    uVar13 = (uint)uVar6;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar5;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar6 - iVar17;
          uVar6 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar5 = (byte *)*param_3;
          pbVar10 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar5 <= pbVar10);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar6 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109c95c28; end: 109c95df3;  */

long FUN_109c95c28(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar5 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar4 = 0;
    uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar4 = (ulong)((int)LZCOUNT(*puVar6) * -9 + 0x280U >> 6) + lVar4;
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar4;
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = lVar4;
    }
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((int)uVar1 < 1) {
    lVar8 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar6 = *(undefined8 **)(param_1 + 0x30);
    do {
      lVar8 = (ulong)((int)LZCOUNT(*puVar6) * -9 + 0x280U >> 6) + lVar8;
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
    *(int *)(param_1 + 0x38) = (int)lVar8;
    if (lVar8 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar8) * -9 + 0x280U >> 6) + 2;
    }
  }
  lVar5 = lVar3 + lVar5 + lVar8 + lVar4;
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x280U >> 6) + 1;
  }
  lVar3 = lVar5 + 3;
  if (*(char *)(param_1 + 0x40) == '\0') {
    lVar3 = lVar5;
  }
  lVar5 = lVar3 + 3;
  if (*(char *)(param_1 + 0x41) == '\0') {
    lVar5 = lVar3;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == 0x20) {
    lVar3 = *(long *)(param_1 + 0x48);
    FUN_109c95328();
  }
  else if (iVar2 == 0x1f) {
    lVar3 = *(long *)(param_1 + 0x48);
    FUN_109c8fe2c();
  }
  else {
    if (iVar2 != 0x1e) goto LAB_109c95dc0;
    lVar3 = *(long *)(param_1 + 0x48);
    FUN_109c8faf4();
  }
  lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
LAB_109c95dc0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar7 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x50) = (int)lVar5;
  return lVar5;
}



/* Entry: 109c95df4; end: 109c95df7;  */

/* WARNING: Possible PIC construction at 0x000109c88f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c88f94) */

void FUN_109c95df4(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar11 = (ulong *)(param_1 + 8);
  uVar12 = *puVar11;
  if ((uVar12 & 1) != 0) {
    uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0x10);
    iVar6 = iVar5 + iVar3;
    if (*(int *)(param_1 + 0x14) < iVar6) {
      func_0x0001087675dc(param_1 + 0x10);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar6 = iVar5 + iVar3;
    }
    *(int *)(param_1 + 0x10) = iVar6;
    if (0 < iVar3) {
      uVar10 = iVar3 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x18);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar5 * 8);
      do {
        *puVar9 = *puVar7;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar10);
    }
  }
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0x28);
    iVar6 = iVar5 + iVar3;
    if (*(int *)(param_1 + 0x2c) < iVar6) {
      func_0x0001087675dc(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x28);
      iVar6 = iVar5 + iVar3;
    }
    *(int *)(param_1 + 0x28) = iVar6;
    if (0 < iVar3) {
      uVar10 = iVar3 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x30);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar5 * 8);
      do {
        *puVar9 = *puVar7;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar10);
    }
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  iVar3 = *(int *)(param_2 + 0x54);
  if (iVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x54);
    if (iVar6 != iVar3) {
      if (iVar6 != 0) {
        FUN_109c95478(param_1);
      }
      *(int *)(param_1 + 0x54) = iVar3;
    }
    if (iVar3 == 0x20) {
      if (iVar6 == 0x20) {
        ppuVar2 = *(undefined ***)(param_2 + 0x48);
        if (*(int *)(param_2 + 0x54) != 0x20) {
          ppuVar2 = &PTR_PTR_1132fb138;
        }
        FUN_109c953d0(*(undefined8 *)(param_1 + 0x48),ppuVar2);
      }
      else {
        func_0x000109cc26e8(uVar12,*(undefined8 *)(param_2 + 0x48));
LAB_109c88ff0:
        *(ulong *)(param_1 + 0x48) = uVar12;
      }
    }
    else if (iVar3 == 0x1f) {
      if (iVar6 != 0x1f) {
        func_0x000109cc2648(uVar12,*(undefined8 *)(param_2 + 0x48));
        goto LAB_109c88ff0;
      }
      lVar8 = *(long *)(param_1 + 0x48);
      ppuVar2 = *(undefined ***)(param_2 + 0x48);
      if (*(int *)(param_2 + 0x54) != 0x1f) {
        ppuVar2 = &PTR_PTR_1132fa538;
      }
      if (*(int *)(ppuVar2 + 2) != 0) {
        *(int *)(lVar8 + 0x10) = *(int *)(ppuVar2 + 2);
      }
      if (((ulong)ppuVar2[1] & 1) != 0) {
        unaff_x30 = 0x109c88f94;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar4 = (ulong *)(lVar8 + 8);
        unaff_x19 = puVar11;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
    else if (iVar3 == 0x1e) {
      if (iVar6 != 0x1e) {
        func_0x000109cc25b4(uVar12,*(undefined8 *)(param_2 + 0x48));
        goto LAB_109c88ff0;
      }
      ppuVar2 = *(undefined ***)(param_2 + 0x48);
      if (*(int *)(param_2 + 0x54) != 0x1e) {
        ppuVar2 = &PTR_PTR_1132faed0;
      }
      FUN_109c8fb6c(*(undefined8 *)(param_1 + 0x48),ppuVar2);
    }
  }
  puVar4 = puVar11;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar4 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c95df8; end: 109c95e23;  */

void FUN_109c95df8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c95e24; end: 109c95e53;  */

undefined ** FUN_109c95e24(void)

{
  return &PTR_DAT_110b365a8;
}



/* Entry: 109c95e54; end: 109c9620b;  */

byte * FUN_109c95e54(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
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
  pbVar3 = param_2;
  if (*(int *)(param_1 + 0x14) != 0) {
    pbVar3 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),param_2);
  }
  pbVar7 = pbVar3;
  if (*(int *)(param_1 + 0x18) != 0) {
    pbVar7 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x18),pbVar3);
  }
  pbVar3 = pbVar7;
  if (*(int *)(param_1 + 0x1c) != 0) {
    pbVar3 = param_3;
    func_0x0001088bdd44(param_3,*(int *)(param_1 + 0x1c),pbVar7);
  }
  pbVar7 = pbVar3;
  if (*(int *)(param_1 + 0x20) != 0) {
    pbVar7 = param_3;
    func_0x0001088b96ec(param_3,*(int *)(param_1 + 0x20),pbVar3);
  }
  pbVar3 = pbVar7;
  if (*(int *)(param_1 + 0x24) != 0) {
    pbVar3 = param_3;
    func_0x0001089f53c8(param_3,*(int *)(param_1 + 0x24),pbVar7);
  }
  pbVar7 = pbVar3;
  if (*(int *)(param_1 + 0x28) != 0) {
    pbVar7 = param_3;
    func_0x00010598f468(param_3,*(int *)(param_1 + 0x28),pbVar3);
  }
  pbVar3 = pbVar7;
  if (*(int *)(param_1 + 0x2c) != 0) {
    pbVar3 = param_3;
    func_0x000108b32050(param_3,*(int *)(param_1 + 0x2c),pbVar7);
  }
  pbVar7 = pbVar3;
  if (*(int *)(param_1 + 0x30) != 0) {
    pbVar7 = param_3;
    func_0x000108b3207c(param_3,*(int *)(param_1 + 0x30),pbVar3);
  }
  pbVar3 = pbVar7;
  if (*(int *)(param_1 + 0x34) != 0) {
    pbVar3 = param_3;
    func_0x0001089f53f0(param_3,*(int *)(param_1 + 0x34),pbVar7);
  }
  pbVar7 = pbVar3;
  if (*(int *)(param_1 + 0x38) != 0) {
    pbVar7 = param_3;
    func_0x0001089f5418(param_3,*(int *)(param_1 + 0x38),pbVar3);
  }
  pbVar3 = pbVar7;
  if (*(int *)(param_1 + 0x3c) != 0) {
    pbVar3 = param_3;
    func_0x000108b320a8(param_3,*(int *)(param_1 + 0x3c),pbVar7);
  }
  pbVar7 = pbVar3;
  if (*(int *)(param_1 + 0x40) != 0) {
    pbVar7 = param_3;
    FUN_109320b88(param_3,*(int *)(param_1 + 0x40),pbVar3);
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    pbVar3 = *(byte **)param_3;
    if (pbVar7 < pbVar3) {
      bVar1 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar8 + ((int)pbVar7 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar7);
      bVar1 = *(byte *)(param_1 + 0x44);
    }
    *pbVar7 = 0x70;
    pbVar7[1] = bVar1;
    pbVar7 = pbVar7 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  if (uVar2 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar8 + ((int)pbVar7 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar7);
      uVar2 = *(uint *)(param_1 + 0x48);
    }
    pbVar8 = pbVar7 + 1;
    *pbVar7 = 0x78;
    uVar4 = (ulong)(int)uVar2;
    uVar5 = uVar4;
    pbVar3 = pbVar8;
    if (0x7f < uVar2) {
      do {
        pbVar8 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar6 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar8;
      } while (uVar6 != 0);
    }
    pbVar7 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar9 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar2) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar3 < (int)uVar2) {
        do {
          iVar10 = (int)pbVar3;
          _memcpy(pbVar7,lVar9,(long)iVar10);
          uVar2 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar2;
          lVar9 = lVar9 + iVar10;
          pbVar3 = *(byte **)param_3;
          pbVar8 = pbVar7 + iVar10;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar7 + ((int)pbVar8 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar7 = pbVar8;
          } while (pbVar3 <= pbVar8);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar7);
        } while ((int)pbVar3 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(pbVar7,lVar9,(long)(int)(uint)uStack_48);
      pbVar7 = pbVar7 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar7,lVar9,uStack_48 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar2;
    }
  }
  return pbVar7;
}



/* Entry: 109c9620c; end: 109c963db;  */

long FUN_109c9620c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x44) * 2;
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x4c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109c963dc; end: 109c96407;  */

void FUN_109c963dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c96408; end: 109c96427;  */

undefined ** FUN_109c96408(void)

{
  return &PTR_DAT_110b365f8;
}



/* Entry: 109c96428; end: 109c965d7;  */

byte * FUN_109c96428(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
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
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(param_2,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar9;
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
      _memcpy(param_2,lVar2,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar2,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109c965d8; end: 109c9664b;  */

long FUN_109c965d8(long param_1)

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



/* Entry: 109c9664c; end: 109c966a3;  */

long FUN_109c9664c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c966a4; end: 109c966c3;  */

undefined ** FUN_109c966a4(void)

{
  return &PTR_DAT_110b36648;
}



/* Entry: 109c966c4; end: 109c9684f;  */

long * FUN_109c966c4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != 0) {
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
      iVar7 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar7;
    param_2 = (long *)((long)param_2 + 5);
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
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar6 < (int)uVar2);
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



/* Entry: 109c96850; end: 109c968b7;  */

long FUN_109c96850(long param_1)

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



/* Entry: 109c968b8; end: 109c9690f;  */

long FUN_109c968b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c96910; end: 109c9692b;  */

undefined ** FUN_109c96910(void)

{
  return &PTR_DAT_110b366a0;
}



/* Entry: 109c9692c; end: 109c96a57;  */

long * FUN_109c9692c(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c96a58; end: 109c96a9f;  */

long FUN_109c96a58(long param_1)

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



/* Entry: 109c96aa0; end: 109c96af7;  */

long FUN_109c96aa0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c96af8; end: 109c96b13;  */

undefined ** FUN_109c96af8(void)

{
  return &PTR_DAT_110b36700;
}



/* Entry: 109c96b14; end: 109c96c3f;  */

long * FUN_109c96b14(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c96c40; end: 109c96c87;  */

long FUN_109c96c40(long param_1)

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



/* Entry: 109c96c88; end: 109c96d4b;  */

void FUN_109c96c88(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (((iVar1 == 3) || (iVar1 == 2)) || (iVar1 == 1)) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 == 0) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      __ZdlPv(lVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 109c96d4c; end: 109c96d5f;  */

void FUN_109c96d4c(void)

{
  func_0x000109c96d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c96d60; end: 109c96d6b;  */

undefined ** FUN_109c96d60(void)

{
  return &PTR_DAT_110b36760;
}



/* Entry: 109c96d6c; end: 109c96dbb;  */

void FUN_109c96d6c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109c8f644(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_109c96c88(param_1);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 109c96dbc; end: 109c96f3b;  */

long * FUN_109c96dbc(long param_1,long *param_2,long *param_3)

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
  
  plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x28) - 1;
  if (uVar2 < 3) {
    func_0x000107c303cc(plVar1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x20) + *(long *)(&UNK_10e03dd88 + (ulong)uVar2 * 8)),
                        param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28),param_2,param_3);
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



/* Entry: 109c96f3c; end: 109c97053;  */

void FUN_109c96f3c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x000109c8f800();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if ((iVar2 == 3) || (iVar2 == 2)) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    if ((uVar5 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = uVar5 & 0xfffffffffffffffe;
      lVar3 = (long)*(char *)(uVar5 + 0x1f);
      if (lVar3 < 0) {
        lVar3 = *(long *)(uVar5 + 0x10);
      }
    }
    iVar2 = (int)lVar3;
    piVar4 = (int *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  else {
    if (iVar2 != 1) goto LAB_109c96ff8;
    lVar3 = *(long *)(param_1 + 0x20);
    iVar2 = 0;
    if (*(int *)(lVar3 + 0x10) != 0) {
      iVar2 = 5;
    }
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      uVar5 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffe;
      lVar6 = (long)*(char *)(uVar5 + 0x1f);
      if (lVar6 < 0) {
        lVar6 = *(long *)(uVar5 + 0x10);
      }
      iVar2 = (int)lVar6 + iVar2;
    }
    piVar4 = (int *)(lVar3 + 0x14);
  }
  *piVar4 = iVar2;
  iVar1 = iVar1 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
LAB_109c96ff8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar5 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 109c97054; end: 109c97057;  */

/* WARNING: Possible PIC construction at 0x000109c896e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c896ec) */

void FUN_109c97054(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong *puVar11;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar11 = (ulong *)(param_1 + 8);
  uVar12 = *puVar11;
  if ((uVar12 & 1) != 0) {
    uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar6 = uVar12;
      func_0x000109cc2330(uVar12,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar6;
    }
    else {
      FUN_109c8f8ac();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_109c96c88(param_1);
      }
      *(int *)(param_1 + 0x28) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        func_0x000109cc28b4(uVar12,*(undefined8 *)(param_2 + 0x20));
        goto LAB_109c8971c;
      }
      ppuVar9 = *(undefined ***)(param_2 + 0x20);
      ppuVar10 = &PTR_PTR_1132fa5b0;
      bVar5 = *(int *)(param_2 + 0x28) == 3;
LAB_109c896cc:
      if (!bVar5) {
        ppuVar9 = ppuVar10;
      }
      if (((ulong)ppuVar9[1] & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0x20);
LAB_109c896e8:
        unaff_x30 = 0x109c896ec;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar7 = (ulong *)(lVar8 + 8);
        unaff_x19 = puVar11;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
    else if (iVar3 == 2) {
      if (iVar4 == 2) {
        ppuVar9 = *(undefined ***)(param_2 + 0x20);
        ppuVar10 = &PTR_PTR_1132fa5c8;
        bVar5 = *(int *)(param_2 + 0x28) == 2;
        goto LAB_109c896cc;
      }
      func_0x000109cc281c(uVar12,*(undefined8 *)(param_2 + 0x20));
LAB_109c8971c:
      *(ulong *)(param_1 + 0x20) = uVar12;
    }
    else if (iVar3 == 1) {
      if (iVar4 != 1) {
        func_0x000109cc276c(uVar12,*(undefined8 *)(param_2 + 0x20));
        goto LAB_109c8971c;
      }
      lVar8 = *(long *)(param_1 + 0x20);
      ppuVar10 = *(undefined ***)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x28) != 1) {
        ppuVar10 = &PTR_PTR_1132fa5e0;
      }
      if (*(int *)(ppuVar10 + 2) != 0) {
        *(int *)(lVar8 + 0x10) = *(int *)(ppuVar10 + 2);
      }
      if (((ulong)ppuVar10[1] & 1) != 0) goto LAB_109c896e8;
    }
  }
  puVar7 = puVar11;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar7 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c97058; end: 109c97083;  */

void FUN_109c97058(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c97084; end: 109c970a3;  */

undefined ** FUN_109c97084(void)

{
  return &PTR_DAT_110b367a8;
}



/* Entry: 109c970a4; end: 109c9722f;  */

long * FUN_109c970a4(long param_1,long *param_2,long *param_3)

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
  long lVar8;
  
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
    *(undefined2 *)param_2 = 0x6a0;
    *(undefined1 *)((long)param_2 + 2) = uVar2;
    param_2 = (long *)((long)param_2 + 3);
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
      lVar8 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar8 < (int)uVar3) {
        do {
          iVar7 = (int)lVar8;
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
          lVar8 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar8 < (int)uVar3);
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



/* Entry: 109c97230; end: 109c97297;  */

long FUN_109c97230(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar1 = 0;
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



/* Entry: 109c97298; end: 109c972c3;  */

void FUN_109c97298(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c972c4; end: 109c972e7;  */

undefined ** FUN_109c972c4(void)

{
  return &PTR_DAT_110b367f0;
}



/* Entry: 109c972e8; end: 109c975bf;  */

byte * FUN_109c972e8(long param_1,byte *param_2,long *param_3)

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
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 != 0) {
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
      uVar4 = *(ulong *)(param_1 + 0x18);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x18;
    uVar5 = uVar4;
    pbVar3 = pbVar7;
    if (0x7f < uVar4) {
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
  iVar9 = *(int *)(param_1 + 0x20);
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
      iVar9 = *(int *)(param_1 + 0x20);
    }
    *param_2 = 0x25;
    *(int *)(param_2 + 1) = iVar9;
    param_2 = param_2 + 5;
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



/* Entry: 109c975c0; end: 109c9763f;  */

long FUN_109c975c0(long param_1)

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
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 109c97640; end: 109c9766b;  */

void FUN_109c97640(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c9766c; end: 109c97687;  */

undefined ** FUN_109c9766c(void)

{
  return &PTR_DAT_110b36838;
}



/* Entry: 109c97688; end: 109c977b3;  */

long * FUN_109c97688(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c977b4; end: 109c977fb;  */

long FUN_109c977b4(long param_1)

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



/* Entry: 109c977fc; end: 109c97827;  */

void FUN_109c977fc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c97828; end: 109c97847;  */

undefined ** FUN_109c97828(void)

{
  return &PTR_DAT_110b36880;
}



/* Entry: 109c97848; end: 109c979f3;  */

byte * FUN_109c97848(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar6 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar6;
          _memcpy(param_2,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar6 = (byte *)*param_3;
          pbVar8 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar6 <= pbVar8);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar2,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar2,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109c979f4; end: 109c97a63;  */

ulong FUN_109c979f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 109c97a64; end: 109c97a8f;  */

void FUN_109c97a64(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c97a90; end: 109c97aaf;  */

undefined ** FUN_109c97a90(void)

{
  return &PTR_DAT_110b368c8;
}



/* Entry: 109c97ab0; end: 109c97c3b;  */

long * FUN_109c97ab0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != 0) {
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
      iVar7 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar7;
    param_2 = (long *)((long)param_2 + 5);
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
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar6 < (int)uVar2);
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



/* Entry: 109c97c3c; end: 109c97ca3;  */

long FUN_109c97c3c(long param_1)

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



/* Entry: 109c97ca4; end: 109c97ccf;  */

void FUN_109c97ca4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c97cd0; end: 109c97cef;  */

undefined ** FUN_109c97cd0(void)

{
  return &PTR_DAT_110b36910;
}



/* Entry: 109c97cf0; end: 109c97e7b;  */

long * FUN_109c97cf0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != 0) {
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
      iVar7 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar7;
    param_2 = (long *)((long)param_2 + 5);
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
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar6 < (int)uVar2);
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



/* Entry: 109c97e7c; end: 109c97ee3;  */

long FUN_109c97e7c(long param_1)

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



/* Entry: 109c97ee4; end: 109c97f0f;  */

void FUN_109c97ee4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109c97f10; end: 109c97f33;  */

undefined ** FUN_109c97f10(void)

{
  return &PTR_DAT_110b36960;
}



/* Entry: 109c97f34; end: 109c98273;  */

byte * FUN_109c97f34(long param_1,byte *param_2,long *param_3)

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
  
  uVar2 = *(uint *)(param_1 + 0x10);
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
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
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
  iVar9 = *(int *)(param_1 + 0x1c);
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
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    *param_2 = 0x25;
    *(int *)(param_2 + 1) = iVar9;
    param_2 = param_2 + 5;
  }
  iVar9 = *(int *)(param_1 + 0x20);
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
      iVar9 = *(int *)(param_1 + 0x20);
    }
    *param_2 = 0x2d;
    *(int *)(param_2 + 1) = iVar9;
    param_2 = param_2 + 5;
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



/* Entry: 109c98274; end: 109c982ff;  */

long FUN_109c98274(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 109c98300; end: 109c98363;  */

long FUN_109c98300(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c98364; end: 109c98377;  */

void FUN_109c98364(void)

{
  FUN_109c98300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c98378; end: 109c9839f;  */

undefined ** FUN_109c98378(void)

{
  return &PTR_DAT_110b369b0;
}



/* Entry: 109c983a0; end: 109c9895b;  */

byte * FUN_109c983a0(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
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
    }
    pbVar2 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar2;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar7 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar7 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar2 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar2;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c98460:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c984f8:
            *param_3 = (long)(param_3 + 4);
            pbVar5 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar2 = uVar19;
              param_3[1] = (long)pbVar11;
              goto LAB_109c984f8;
            }
            _memcpy(param_3[1],pbVar2,(long)pbVar11 - (long)pbVar2);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c98460;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar2 = uVar19;
              *param_3 = (long)(pbVar2 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar5 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar5;
        } while (pbVar5 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar3 = *puVar14;
      uVar4 = uVar3;
      pbVar11 = pbVar10;
      if (0x7f < uVar3) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar4 | 0x80;
          uVar3 = uVar4 >> 7;
          uVar18 = uVar4 >> 0xe;
          uVar4 = uVar3;
          pbVar11 = pbVar10;
        } while (uVar18 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar3;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar17);
  }
  uVar12 = *(uint *)(param_1 + 0x38);
  if (uVar12 != 0) {
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
      uVar12 = *(uint *)(param_1 + 0x38);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 0x28;
    uVar3 = (ulong)(int)uVar12;
    uVar4 = uVar3;
    pbVar2 = pbVar10;
    if (0x7f < uVar12) {
      do {
        pbVar10 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar18 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar2 = pbVar10;
      } while (uVar18 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar3;
  }
  uVar12 = *(uint *)(param_1 + 0x3c);
  if (uVar12 != 0) {
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
      uVar12 = *(uint *)(param_1 + 0x3c);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 0x30;
    uVar3 = (ulong)(int)uVar12;
    uVar4 = uVar3;
    pbVar2 = pbVar10;
    if (0x7f < uVar12) {
      do {
        pbVar10 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar18 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar2 = pbVar10;
      } while (uVar18 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar3;
  }
  iVar17 = *(int *)(param_1 + 0x28);
  if (0 < iVar17) {
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
      iVar17 = *(int *)(param_1 + 0x28);
    }
    uVar12 = iVar17 * 4;
    uVar3 = (ulong)uVar12;
    pbVar2 = param_2 + 1;
    *param_2 = 0x3a;
    uVar4 = uVar3;
    uVar7 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar2;
        uVar6 = (uint)uVar4;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar7 = (uint)uVar4;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar7;
    lVar16 = *(long *)(param_1 + 0x30);
    uVar18 = (ulong)(int)uVar12;
    uVar4 = uVar3;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar18,
       (int)pbVar2 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar17 = (int)pbVar2;
        _memcpy(param_2,lVar16,(long)iVar17);
        uVar12 = (int)uVar3 - iVar17;
        uVar3 = (ulong)uVar12;
        lVar16 = lVar16 + iVar17;
        pbVar11 = param_2 + iVar17;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar2 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109c98830:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c98810:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar10 = uVar19;
              param_3[1] = (long)pbVar5;
              goto LAB_109c98810;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c98830;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar19;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar2 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar5);
          pbVar5 = pbVar2;
          param_2 = pbVar11;
        } while (pbVar2 <= pbVar11);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar12);
      uVar18 = (ulong)(int)uVar12;
      uVar4 = uVar18;
    }
    _memcpy(param_2,lVar16,uVar4);
    param_2 = param_2 + uVar18;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar16 = *(long *)(uVar4 + 8);
      uVar3 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar16 = uVar4 + 8;
    }
    uVar12 = (uint)uVar3;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar2 < (int)uVar12) {
        do {
          iVar17 = (int)pbVar2;
          _memcpy(param_2,lVar16,(long)iVar17);
          uVar12 = (int)uVar3 - iVar17;
          uVar3 = (ulong)uVar12;
          lVar16 = lVar16 + iVar17;
          pbVar2 = (byte *)*param_3;
          pbVar10 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar1 + (long)((int)pbVar10 - (int)pbVar2));
            pbVar2 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar2 <= pbVar10);
          pbVar2 = pbVar2 + (0x10 - (long)param_2);
        } while ((int)pbVar2 < (int)uVar12);
      }
      _memcpy(param_2,lVar16,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar16,uVar3 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109c9895c; end: 109c98a63;  */

long FUN_109c9895c(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((int)uVar2 < 1) {
    lVar3 = 0;
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar3 = 0;
    uVar6 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar3 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar3;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar3;
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar1 = 0;
  if (uVar2 != 0) {
    lVar1 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = lVar5 + lVar3 + lVar1 + (ulong)uVar2 * 4;
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar6 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x40) = (int)lVar5;
  return lVar5;
}



/* Entry: 109c98a64; end: 109c98acb;  */

long FUN_109c98a64(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c98acc; end: 109c98adf;  */

void FUN_109c98acc(void)

{
  FUN_109c98a64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c98ae0; end: 109c98aeb;  */

undefined ** FUN_109c98ae0(void)

{
  return &PTR_DAT_110b36a00;
}



/* Entry: 109c98aec; end: 109c98b37;  */

void FUN_109c98aec(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c8ff04(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 109c98b38; end: 109c98e2b;  */

byte * FUN_109c98b38(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
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
  
  uVar12 = *(uint *)(param_1 + 0x28);
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
    puVar13 = *(ulong **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar6 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar6 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c98bf8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c98c90:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar10;
              goto LAB_109c98c90;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar10 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c98bf8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar6 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar6 + ((int)param_2 - (int)pbVar10);
          pbVar6 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar10 = pbVar6;
      if (0x7f < uVar4) {
        do {
          pbVar6 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar6;
        } while (uVar8 != 0);
      }
      param_2 = pbVar6 + 1;
      *pbVar6 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  pbVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar3 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
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
    if (*param_3 - (long)pbVar3 < (long)(int)uVar12) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar6 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar6;
          _memcpy(pbVar3,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar6 = (byte *)*param_3;
          pbVar10 = pbVar3 + iVar16;
          do {
            pbVar3 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            pbVar3 = pbVar10;
          } while (pbVar6 <= pbVar10);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar3);
        } while ((int)pbVar6 < (int)uVar12);
      }
      _memcpy(pbVar3,lVar11,(long)(int)uVar12);
      pbVar3 = pbVar3 + (int)uVar12;
    }
    else {
      _memcpy(pbVar3,lVar11,uVar4 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar12;
    }
  }
  return pbVar3;
}



/* Entry: 109c98e2c; end: 109c98f17;  */

long FUN_109c98e2c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_109c900c8();
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c98f18; end: 109c98f1b;  */

/* WARNING: Possible PIC construction at 0x000109c89928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109c8992c) */

void FUN_109c98f18(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar11 = (ulong *)(param_1 + 8);
  uVar12 = *puVar11;
  if ((uVar12 & 1) != 0) {
    uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar6 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x1c) < iVar6) {
      func_0x0001087675dc(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x18);
      iVar6 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x18) = iVar6;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x20);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8);
      do {
        *puVar9 = *puVar7;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar10);
    }
  }
  uVar10 = *(uint *)(param_2 + 0x10);
  if ((uVar10 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x30);
    lVar5 = *(long *)(param_2 + 0x30);
    if (lVar8 == 0) {
      func_0x000109cc294c();
      *(ulong *)(param_1 + 0x30) = uVar12;
    }
    else {
      iVar2 = *(int *)(lVar5 + 0x10);
      if (iVar2 != 0) {
        *(int *)(lVar8 + 0x10) = iVar2;
      }
      if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
        unaff_x30 = 0x109c8992c;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar3 = (ulong *)(lVar8 + 8);
        unaff_x19 = puVar11;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
  puVar3 = puVar11;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar3 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c98f1c; end: 109c98fa3;  */

long FUN_109c98f1c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c98fa4; end: 109c98fb7;  */

void FUN_109c98fa4(void)

{
  FUN_109c98f1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c98fb8; end: 109c98fc3;  */

undefined ** FUN_109c98fb8(void)

{
  return &PTR_DAT_110b36a50;
}



/* Entry: 109c98fc4; end: 109c99027;  */

void FUN_109c98fc4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c8ff04(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c901a0(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 109c99028; end: 109c99403;  */

byte * FUN_109c99028(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar13) {
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
    }
    pbVar5 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar5;
        pbVar5 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar5 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x20);
    iVar17 = *(int *)(param_1 + 0x18);
    pbVar5 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar3 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c990e8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c99180:
            *param_3 = (long)(param_3 + 4);
            pbVar8 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar5 = uVar18;
              param_3[1] = (long)pbVar11;
              goto LAB_109c99180;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar11 - (long)pbVar5);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c990e8;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar5 = uVar18;
              *param_3 = (long)(pbVar5 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar8 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70;
              pbVar8 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar3 + ((int)param_2 - (int)pbVar11);
          pbVar3 = param_2;
          pbVar11 = pbVar8;
        } while (pbVar8 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar6 = *puVar15;
      uVar7 = uVar6;
      pbVar11 = pbVar3;
      if (0x7f < uVar6) {
        do {
          pbVar3 = pbVar11 + 1;
          *pbVar11 = (byte)uVar7 | 0x80;
          uVar6 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          uVar7 = uVar6;
          pbVar11 = pbVar3;
        } while (uVar9 != 0);
      }
      param_2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar6;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    pbVar5 = (byte *)*param_3;
    if (param_2 < pbVar5) {
      bVar4 = 1;
    }
    else {
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
      bVar4 = *(byte *)(param_1 + 0x40);
    }
    *param_2 = 0x10;
    param_2[1] = bVar4;
    param_2 = param_2 + 2;
  }
  uVar13 = *(uint *)(param_1 + 0x10);
  pbVar5 = param_2;
  if ((uVar13 & 1) != 0) {
    pbVar5 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
  }
  pbVar3 = pbVar5;
  if ((uVar13 >> 1 & 1) != 0) {
    pbVar3 = (byte *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),pbVar5,param_3);
  }
  iVar17 = *(int *)(param_1 + 0x44);
  if (iVar17 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= pbVar3) {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar3 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        pbVar3 = (byte *)((long)plVar2 + (long)((int)pbVar3 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= pbVar3);
      iVar17 = *(int *)(param_1 + 0x44);
    }
    *pbVar3 = 0x2d;
    *(int *)(pbVar3 + 1) = iVar17;
    pbVar3 = pbVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar12 = *(long *)(uVar7 + 8);
      uVar6 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar12 = uVar7 + 8;
    }
    uVar13 = (uint)uVar6;
    if (*param_3 - (long)pbVar3 < (long)(int)uVar13) {
      pbVar5 = (byte *)((*param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar5 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar5;
          _memcpy(pbVar3,lVar12,(long)iVar17);
          uVar13 = (int)uVar6 - iVar17;
          uVar6 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar5 = (byte *)*param_3;
          pbVar11 = pbVar3 + iVar17;
          do {
            pbVar3 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            pbVar3 = pbVar11;
          } while (pbVar5 <= pbVar11);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar3);
        } while ((int)pbVar5 < (int)uVar13);
      }
      _memcpy(pbVar3,lVar12,(long)(int)uVar13);
      pbVar3 = pbVar3 + (int)uVar13;
    }
    else {
      _memcpy(pbVar3,lVar12,uVar6 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar13;
    }
  }
  return pbVar3;
}



/* Entry: 109c99404; end: 109c9953f;  */

void FUN_109c99404(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar4 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    do {
      lVar4 = (ulong)((int)LZCOUNT(*puVar5) * -9 + 0x280U >> 6) + lVar4;
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar4;
    if (lVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
    }
  }
  iVar3 = iVar3 + (int)lVar4;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
      FUN_109c900c8();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
      FUN_109c90364();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x40) * 2;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 109c99540; end: 109c99543;  */

/* WARNING: Possible PIC construction at 0x000109c89a50: Changing call to branch */

void FUN_109c99540(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar12 = (ulong *)(param_1 + 8);
  uVar13 = *puVar12;
  if ((uVar13 & 1) != 0) {
    uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    iVar7 = iVar5 + iVar2;
    if (*(int *)(param_1 + 0x1c) < iVar7) {
      func_0x0001087675dc(param_1 + 0x18);
      iVar5 = *(int *)(param_1 + 0x18);
      iVar7 = iVar5 + iVar2;
    }
    *(int *)(param_1 + 0x18) = iVar7;
    if (0 < iVar2) {
      uVar11 = iVar2 + 1;
      puVar8 = *(undefined8 **)(param_2 + 0x20);
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 8);
      do {
        *puVar10 = *puVar8;
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (1 < uVar11);
    }
  }
  uVar11 = *(uint *)(param_2 + 0x10);
  if ((uVar11 & 3) != 0) {
    if ((uVar11 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x30);
      lVar6 = *(long *)(param_2 + 0x30);
      if (lVar9 == 0) {
        uVar3 = uVar13;
        func_0x000109cc294c();
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
      else {
        iVar2 = *(int *)(lVar6 + 0x10);
        if (iVar2 != 0) {
          *(int *)(lVar9 + 0x10) = iVar2;
        }
        if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
          unaff_x30 = 0x109c89a54;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar4 = (ulong *)(lVar9 + 8);
          unaff_x19 = puVar12;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
    }
    if ((uVar11 >> 1 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x38);
      lVar6 = *(long *)(param_2 + 0x38);
      if (lVar9 == 0) {
        func_0x000109cc29ec();
        *(ulong *)(param_1 + 0x38) = uVar13;
      }
      else {
        iVar2 = *(int *)(lVar6 + 0x10);
        if (iVar2 != 0) {
          *(int *)(lVar9 + 0x10) = iVar2;
        }
        uVar13 = *(ulong *)(lVar6 + 8);
        if ((uVar13 & 1) != 0) {
          func_0x00010b4d197c(lVar9 + 8,(uVar13 & 0xfffffffffffffffe) + 8);
        }
      }
    }
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar11;
  puVar4 = puVar12;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar4 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c99544; end: 109c9959b;  */

long FUN_109c99544(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109c9959c; end: 109c995af;  */

void FUN_109c9959c(void)

{
  FUN_109c99544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c995b0; end: 109c995bb;  */

undefined ** FUN_109c995b0(void)

{
  return &PTR_DAT_110b36aa0;
}



/* Entry: 109c995bc; end: 109c99607;  */

void FUN_109c995bc(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 109c99608; end: 109c998fb;  */

byte * FUN_109c99608(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
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
  
  uVar12 = *(uint *)(param_1 + 0x28);
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
    puVar13 = *(ulong **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar6 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar6 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109c996c8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c99760:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar10;
              goto LAB_109c99760;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar10 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c996c8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar6 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar6 + ((int)param_2 - (int)pbVar10);
          pbVar6 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar10 = pbVar6;
      if (0x7f < uVar4) {
        do {
          pbVar6 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar6;
        } while (uVar8 != 0);
      }
      param_2 = pbVar6 + 1;
      *pbVar6 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  pbVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar3 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
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
    if (*param_3 - (long)pbVar3 < (long)(int)uVar12) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar6 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar6;
          _memcpy(pbVar3,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar6 = (byte *)*param_3;
          pbVar10 = pbVar3 + iVar16;
          do {
            pbVar3 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            pbVar3 = pbVar10;
          } while (pbVar6 <= pbVar10);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar3);
        } while ((int)pbVar6 < (int)uVar12);
      }
      _memcpy(pbVar3,lVar11,(long)(int)uVar12);
      pbVar3 = pbVar3 + (int)uVar12;
    }
    else {
      _memcpy(pbVar3,lVar11,uVar4 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar12;
    }
  }
  return pbVar3;
}



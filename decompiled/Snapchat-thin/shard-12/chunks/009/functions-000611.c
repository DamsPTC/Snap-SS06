/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c70ee0; end: 109c70ee3;  */

long FUN_109c70ee0(long param_1)

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



/* Entry: 109c70ee4; end: 109c70ef7;  */

void FUN_109c70ee4(void)

{
  func_0x000109c70e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c70ef8; end: 109c70f17;  */

undefined ** FUN_109c70ef8(void)

{
  return &PTR_DAT_110b30410;
}



/* Entry: 109c70f18; end: 109c71223;  */

byte * FUN_109c70f18(long param_1,byte *param_2,long *param_3)

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
LAB_109c71110:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c710f0:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109c710f0;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c71110;
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



/* Entry: 109c71224; end: 109c7127b;  */

long FUN_109c71224(long param_1)

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



/* Entry: 109c7127c; end: 109c71323;  */

void FUN_109c7127c(long param_1,long param_2)

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



/* Entry: 109c71324; end: 109c713af;  */

void FUN_109c71324(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0x65) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_109c71380;
    FUN_109c684b8();
  }
  else {
    if (*(int *)(param_1 + 0x4c) != 100) goto LAB_109c71380;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_109c71380;
    FUN_109c680c8();
  }
  __ZdlPv();
LAB_109c71380:
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



/* Entry: 109c713b0; end: 109c7148b;  */

undefined8 * FUN_109c713b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b303d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 2,param_3 + 0x10);
  }
  FUN_10934069c(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)(param_1 + 9) = 0;
  iVar1 = *(int *)(param_3 + 0x4c);
  *(int *)((long)param_1 + 0x4c) = iVar1;
  param_1[7] = *(undefined8 *)(param_3 + 0x38);
  if (iVar1 == 0x65) {
    func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  else {
    if (iVar1 != 100) {
      return param_1;
    }
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = param_2;
  return param_1;
}



/* Entry: 109c7148c; end: 109c714eb;  */

long FUN_109c7148c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_109c71324(param_1);
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109c71d0c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c714ec; end: 109c714ef;  */

long FUN_109c714ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_109c71324(param_1);
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109c71d0c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c714f0; end: 109c71503;  */

void FUN_109c714f0(void)

{
  FUN_109c7148c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c71504; end: 109c7150f;  */

undefined ** FUN_109c71504(void)

{
  return &PTR_DAT_110b30460;
}



/* Entry: 109c71510; end: 109c71567;  */

void FUN_109c71510(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_109c71324(param_1);
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



/* Entry: 109c71568; end: 109c719ff;  */

byte * FUN_109c71568(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar14 = 0;
    pbVar4 = param_2;
    do {
      uVar3 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)iVar14 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar4,param_3);
      iVar14 = iVar14 + 1;
      pbVar4 = param_2;
    } while (iVar16 != iVar14);
  }
  iVar16 = *(int *)(param_1 + 0x28);
  if (0 < iVar16) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      iVar16 = *(int *)(param_1 + 0x28);
    }
    uVar12 = iVar16 * 8;
    uVar13 = (ulong)uVar12;
    pbVar4 = param_2 + 1;
    *param_2 = 0x12;
    uVar3 = uVar13;
    uVar7 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar4;
        uVar6 = (uint)uVar3;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar7 = (uint)uVar3;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar7;
    lVar15 = *(long *)(param_1 + 0x30);
    uVar17 = (ulong)(int)uVar12;
    uVar3 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar17,
       (int)pbVar4 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar4;
        _memcpy(param_2,lVar15,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar15 = lVar15 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar4 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109c718dc:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c718bc:
            *param_3 = (long)(param_3 + 4);
            pbVar4 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar5;
              goto LAB_109c718bc;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c718dc;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar4 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar5);
          pbVar5 = pbVar4;
          param_2 = pbVar11;
        } while (pbVar4 <= pbVar11);
        pbVar4 = pbVar4 + (0x10 - (long)param_2);
      } while ((int)pbVar4 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar3 = uVar17;
    }
    _memcpy(param_2,lVar15,uVar3);
    param_2 = param_2 + uVar17;
  }
  uVar12 = *(uint *)(param_1 + 0x38);
  if (uVar12 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar12 = *(uint *)(param_1 + 0x38);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    uVar13 = (ulong)(int)uVar12;
    uVar3 = uVar13;
    pbVar4 = pbVar10;
    if (0x7f < uVar12) {
      do {
        pbVar10 = pbVar4 + 1;
        *pbVar4 = (byte)uVar3 | 0x80;
        uVar13 = uVar3 >> 7;
        uVar17 = uVar3 >> 0xe;
        uVar3 = uVar13;
        pbVar4 = pbVar10;
      } while (uVar17 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar13;
  }
  uVar12 = *(uint *)(param_1 + 0x3c);
  if (uVar12 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar12 = *(uint *)(param_1 + 0x3c);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 0x20;
    uVar13 = (ulong)(int)uVar12;
    uVar3 = uVar13;
    pbVar4 = pbVar10;
    if (0x7f < uVar12) {
      do {
        pbVar10 = pbVar4 + 1;
        *pbVar4 = (byte)uVar3 | 0x80;
        uVar13 = uVar3 >> 7;
        uVar17 = uVar3 >> 0xe;
        uVar3 = uVar13;
        pbVar4 = pbVar10;
      } while (uVar17 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar13;
  }
  uVar12 = *(uint *)(param_1 + 0x4c);
  pbVar4 = (byte *)(ulong)uVar12;
  if (uVar12 == 100) {
    lVar15 = 0x28;
  }
  else {
    if (uVar12 != 0x65) goto LAB_109c716e0;
    lVar15 = 0x24;
  }
  func_0x000107c303cc(pbVar4,*(long *)(param_1 + 0x40),
                      *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar15),param_2,param_3);
  param_2 = pbVar4;
LAB_109c716e0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar15 = *(long *)(uVar3 + 8);
      uVar13 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar15 = uVar3 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar4;
          _memcpy(param_2,lVar15,(long)iVar16);
          uVar12 = (int)uVar13 - iVar16;
          uVar13 = (ulong)uVar12;
          lVar15 = lVar15 + iVar16;
          pbVar4 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar4 <= pbVar10);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar12);
      }
      _memcpy(param_2,lVar15,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar15,uVar13 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109c71a00; end: 109c71b53;  */

long FUN_109c71a00(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar4 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)(uVar2 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar3 = 0;
  }
  else {
    lVar5 = lVar3 << 3;
    do {
      uVar2 = *puVar4;
      FUN_109c71224();
      lVar3 = uVar2 + lVar3 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  lVar5 = 0;
  if (uVar1 != 0) {
    lVar5 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = (ulong)uVar1 * 8 + lVar3 + lVar5;
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x4c) == 0x65) {
    lVar3 = *(long *)(param_1 + 0x40);
    FUN_109c68808();
  }
  else {
    if (*(int *)(param_1 + 0x4c) != 100) goto LAB_109c71b18;
    lVar3 = *(long *)(param_1 + 0x40);
    FUN_109c68360();
  }
  lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
LAB_109c71b18:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x48) = (int)lVar5;
  return lVar5;
}



/* Entry: 109c71b54; end: 109c71b57;  */

void FUN_109c71b54(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar4 = iVar3 + iVar2;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      FUN_109340710(param_1 + 0x28);
      iVar3 = *(int *)(param_1 + 0x28);
      iVar4 = iVar3 + iVar2;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    if (0 < iVar2) {
      uVar7 = iVar2 + 1;
      puVar5 = *(undefined8 **)(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar3 * 8);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  iVar2 = *(int *)(param_2 + 0x4c);
  if (iVar2 == 0) goto LAB_109c71ca0;
  iVar4 = *(int *)(param_1 + 0x4c);
  if (iVar4 != iVar2) {
    if (iVar4 != 0) {
      FUN_109c71324(param_1);
    }
    *(int *)(param_1 + 0x4c) = iVar2;
  }
  if (iVar2 == 0x65) {
    if (iVar4 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x40);
      if (*(int *)(param_2 + 0x4c) != 0x65) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      FUN_109c688b0(*(undefined8 *)(param_1 + 0x40),ppuVar1);
      goto LAB_109c71ca0;
    }
    func_0x000109c6baf8(uVar8,*(undefined8 *)(param_2 + 0x40));
  }
  else {
    if (iVar2 != 100) goto LAB_109c71ca0;
    if (iVar4 == 100) {
      ppuVar1 = *(undefined ***)(param_2 + 0x40);
      if (*(int *)(param_2 + 0x4c) != 100) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      FUN_109c683fc(*(undefined8 *)(param_1 + 0x40),ppuVar1);
      goto LAB_109c71ca0;
    }
    func_0x000109c6bab4(uVar8,*(undefined8 *)(param_2 + 0x40));
  }
  *(ulong *)(param_1 + 0x40) = uVar8;
LAB_109c71ca0:
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



/* Entry: 109c71b58; end: 109c71cfb;  */

void FUN_109c71b58(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar4 = iVar3 + iVar2;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      FUN_109340710(param_1 + 0x28);
      iVar3 = *(int *)(param_1 + 0x28);
      iVar4 = iVar3 + iVar2;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    if (0 < iVar2) {
      uVar7 = iVar2 + 1;
      puVar5 = *(undefined8 **)(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar3 * 8);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  iVar2 = *(int *)(param_2 + 0x4c);
  if (iVar2 == 0) goto LAB_109c71ca0;
  iVar4 = *(int *)(param_1 + 0x4c);
  if (iVar4 != iVar2) {
    if (iVar4 != 0) {
      FUN_109c71324(param_1);
    }
    *(int *)(param_1 + 0x4c) = iVar2;
  }
  if (iVar2 == 0x65) {
    if (iVar4 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x40);
      if (*(int *)(param_2 + 0x4c) != 0x65) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      FUN_109c688b0(*(undefined8 *)(param_1 + 0x40),ppuVar1);
      goto LAB_109c71ca0;
    }
    func_0x000109c6baf8(uVar8,*(undefined8 *)(param_2 + 0x40));
  }
  else {
    if (iVar2 != 100) goto LAB_109c71ca0;
    if (iVar4 == 100) {
      ppuVar1 = *(undefined ***)(param_2 + 0x40);
      if (*(int *)(param_2 + 0x4c) != 100) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      FUN_109c683fc(*(undefined8 *)(param_1 + 0x40),ppuVar1);
      goto LAB_109c71ca0;
    }
    func_0x000109c6bab4(uVar8,*(undefined8 *)(param_2 + 0x40));
  }
  *(ulong *)(param_1 + 0x40) = uVar8;
LAB_109c71ca0:
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



/* Entry: 109c71cfc; end: 109c71d0b;  */

void FUN_109c71cfc(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b30380;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c71d0c; end: 109c71d3f;  */

long * FUN_109c71d0c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c71d40; end: 109c71e2f;  */

void FUN_109c71d40(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b30380;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c71e30; end: 109c71e33;  */

long FUN_109c71e30(long param_1)

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



/* Entry: 109c71e34; end: 109c71e47;  */

void FUN_109c71e34(void)

{
  func_0x000109c71de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c71e48; end: 109c71e67;  */

undefined ** FUN_109c71e48(void)

{
  return &PTR_DAT_110b30578;
}



/* Entry: 109c71e68; end: 109c72173;  */

byte * FUN_109c71e68(long param_1,byte *param_2,long *param_3)

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
LAB_109c72060:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c72040:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109c72040;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109c72060;
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



/* Entry: 109c72174; end: 109c721cb;  */

long FUN_109c72174(long param_1)

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



/* Entry: 109c721cc; end: 109c72273;  */

void FUN_109c721cc(long param_1,long param_2)

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



/* Entry: 109c72274; end: 109c72317;  */

undefined8 * FUN_109c72274(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b30538;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 2,param_3 + 0x10);
  }
  FUN_10934069c(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x38);
  return param_1;
}



/* Entry: 109c72318; end: 109c72367;  */

long FUN_109c72318(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109c72984(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c72368; end: 109c7236b;  */

long FUN_109c72368(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109c72984(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c7236c; end: 109c7237f;  */

void FUN_109c7236c(void)

{
  FUN_109c72318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c72380; end: 109c7238b;  */

undefined ** FUN_109c72380(void)

{
  return &PTR_DAT_110b305c8;
}



/* Entry: 109c7238c; end: 109c723db;  */

void FUN_109c7238c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
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



/* Entry: 109c723dc; end: 109c727b7;  */

byte * FUN_109c723dc(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar14 = 0;
    pbVar4 = param_2;
    do {
      uVar3 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)iVar14 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar4,param_3);
      iVar14 = iVar14 + 1;
      pbVar4 = param_2;
    } while (iVar16 != iVar14);
  }
  iVar16 = *(int *)(param_1 + 0x28);
  if (0 < iVar16) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      iVar16 = *(int *)(param_1 + 0x28);
    }
    uVar12 = iVar16 * 8;
    uVar13 = (ulong)uVar12;
    pbVar4 = param_2 + 1;
    *param_2 = 0x12;
    uVar3 = uVar13;
    uVar7 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar4;
        uVar6 = (uint)uVar3;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar7 = (uint)uVar3;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar7;
    lVar15 = *(long *)(param_1 + 0x30);
    uVar17 = (ulong)(int)uVar12;
    uVar3 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar17,
       (int)pbVar4 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar4;
        _memcpy(param_2,lVar15,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar15 = lVar15 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar4 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109c7269c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109c7267c:
            *param_3 = (long)(param_3 + 4);
            pbVar4 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar5;
              goto LAB_109c7267c;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109c7269c;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar4 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar5);
          pbVar5 = pbVar4;
          param_2 = pbVar11;
        } while (pbVar4 <= pbVar11);
        pbVar4 = pbVar4 + (0x10 - (long)param_2);
      } while ((int)pbVar4 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar3 = uVar17;
    }
    _memcpy(param_2,lVar15,uVar3);
    param_2 = param_2 + uVar17;
  }
  uVar12 = *(uint *)(param_1 + 0x38);
  if (uVar12 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar12 = *(uint *)(param_1 + 0x38);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    uVar13 = (ulong)(int)uVar12;
    uVar3 = uVar13;
    pbVar4 = pbVar10;
    if (0x7f < uVar12) {
      do {
        pbVar10 = pbVar4 + 1;
        *pbVar4 = (byte)uVar3 | 0x80;
        uVar13 = uVar3 >> 7;
        uVar17 = uVar3 >> 0xe;
        uVar3 = uVar13;
        pbVar4 = pbVar10;
      } while (uVar17 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar13;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar15 = *(long *)(uVar3 + 8);
      uVar13 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar15 = uVar3 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar4;
          _memcpy(param_2,lVar15,(long)iVar16);
          uVar12 = (int)uVar13 - iVar16;
          uVar13 = (ulong)uVar12;
          lVar15 = lVar15 + iVar16;
          pbVar4 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar4 <= pbVar10);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar12);
      }
      _memcpy(param_2,lVar15,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar15,uVar13 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109c727b8; end: 109c728a7;  */

void FUN_109c727b8(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar5 = (long)*(int *)(param_1 + 0x18);
  puVar6 = (ulong *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    puVar6 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar4 = 0;
  }
  else {
    lVar7 = lVar5 << 3;
    do {
      uVar3 = *puVar6;
      FUN_109c72174();
      lVar5 = uVar3 + lVar5 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6);
      iVar4 = (int)lVar5;
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = ((int)LZCOUNT(-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 |
                          ((ulong)uVar1 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = uVar1 * 8 + iVar4 + iVar2;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar5 + iVar2;
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  return;
}



/* Entry: 109c728a8; end: 109c728ab;  */

void FUN_109c728a8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109340710(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x30);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 109c728ac; end: 109c72973;  */

void FUN_109c728ac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109340710(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x30);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 109c72974; end: 109c72983;  */

void FUN_109c72974(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b304e8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c72984; end: 109c729b7;  */

long * FUN_109c72984(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c729b8; end: 109c72ab7;  */

void FUN_109c729b8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b304e8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c72ab8; end: 109c72b77;  */

undefined8 * FUN_109c72ab8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b30650;
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
  *(undefined4 *)(param_1 + 6) = 0;
  iVar1 = *(int *)(param_3 + 0x34);
  *(int *)((long)param_1 + 0x34) = iVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  if (iVar1 == 200) {
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x28));
    param_1[5] = param_2;
  }
  return param_1;
}



/* Entry: 109c72b78; end: 109c72bc3;  */

long FUN_109c72b78(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x000109c72a60(param_1);
  }
  return param_1;
}



/* Entry: 109c72bc4; end: 109c72bc7;  */

long FUN_109c72bc4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x000109c72a60(param_1);
  }
  return param_1;
}



/* Entry: 109c72bc8; end: 109c72bdb;  */

void FUN_109c72bc8(void)

{
  FUN_109c72b78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c72bdc; end: 109c72be7;  */

undefined ** FUN_109c72bdc(void)

{
  return &PTR_DAT_110b30690;
}



/* Entry: 109c72be8; end: 109c72c87;  */

void FUN_109c72be8(long param_1)

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
  *(undefined4 *)(param_1 + 0x20) = 0;
  func_0x000109c72a60(param_1);
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



/* Entry: 109c72c88; end: 109c72ebb;  */

byte * FUN_109c72c88(long param_1,byte *param_2,byte *param_3)

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
    if (lVar3 == 0) goto LAB_109c72d24;
    puVar2 = (undefined8 *)*puVar10;
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_109c72d24;
  }
  func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a6551);
  pbVar6 = param_3;
  func_0x000107c280a0(param_3,10,puVar10,param_2);
  param_2 = pbVar6;
LAB_109c72d24:
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
  pbVar7 = pbVar6;
  if (*(int *)(param_1 + 0x34) == 200) {
    pbVar7 = (byte *)0xc8;
    func_0x000107c303cc(200,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x28),pbVar6,param_3);
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



/* Entry: 109c72ebc; end: 109c72fef;  */

long FUN_109c72ebc(long param_1)

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
  if (*(int *)(param_1 + 0x34) == 200) {
    lVar3 = *(long *)(param_1 + 0x28);
    FUN_109c68360();
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 109c72ff0; end: 109c72ff3;  */

void FUN_109c72ff0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x34) == iVar1) {
      if (iVar1 == 200) {
        FUN_109c683fc(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) != 0) {
        func_0x000109c72a60(param_1);
      }
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 == 200) {
        func_0x000109c6bab4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
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



/* Entry: 109c72ff4; end: 109c7312b;  */

void FUN_109c72ff4(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x34) == iVar1) {
      if (iVar1 == 200) {
        FUN_109c683fc(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) != 0) {
        func_0x000109c72a60(param_1);
      }
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 == 200) {
        func_0x000109c6bab4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
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



/* Entry: 109c7312c; end: 109c73133;  */

void FUN_109c7312c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110b30650;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c73134; end: 109c7318b;  */

void FUN_109c73134(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110b30650;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c7318c; end: 109c731f7;  */

undefined8 * FUN_109c7318c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b30708;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  return param_1;
}



/* Entry: 109c731f8; end: 109c7324f;  */

long FUN_109c731f8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109c73250; end: 109c7326b;  */

undefined ** FUN_109c73250(void)

{
  return &PTR_DAT_110b30748;
}



/* Entry: 109c7326c; end: 109c73397;  */

long * FUN_109c7326c(long param_1,long *param_2,long *param_3)

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



/* Entry: 109c73398; end: 109c733e7;  */

long FUN_109c73398(long param_1)

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



/* Entry: 109c733e8; end: 109c7353f;  */

void FUN_109c733e8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b30708;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109c73540; end: 109c736b3;  */

undefined8 * FUN_109c73540(undefined8 *param_1,ulong param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  ulong *puVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b307b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  iVar4 = *(int *)(param_3 + 0x28);
  *(int *)(param_1 + 5) = iVar4;
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      param_1[2] = *(undefined8 *)(param_3 + 0x10);
      goto LAB_109c73648;
    }
    if (iVar1 == 2) {
      param_1[2] = *(undefined8 *)(param_3 + 0x10);
      goto LAB_109c73648;
    }
    if (iVar1 != 3) goto LAB_109c73648;
    uVar2 = *(ulong *)(param_3 + 0x10);
    if ((uVar2 & 3) != 0) {
      uVar2 = param_3 + 0x10;
      func_0x000107c30244(uVar2,param_2);
    }
  }
  else {
    uVar2 = param_2;
    if (iVar1 < 6) {
      if (iVar1 == 4) {
        func_0x000109c73f80(param_2,*(undefined8 *)(param_3 + 0x10));
      }
      else {
        if (iVar1 != 5) goto LAB_109c73648;
        func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x10));
      }
    }
    else if (iVar1 == 6) {
      func_0x000109c73fc4(param_2,*(undefined8 *)(param_3 + 0x10));
    }
    else {
      if (iVar1 != 7) goto LAB_109c73648;
      func_0x000109c74008(param_2,*(undefined8 *)(param_3 + 0x10));
    }
  }
  param_1[2] = uVar2;
  iVar4 = *(int *)(param_1 + 5);
LAB_109c73648:
  if (iVar4 == 0xd) {
    puVar5 = (ulong *)(param_3 + 0x18);
    puVar3 = (ulong *)*puVar5;
    if ((*puVar5 & 3) != 0) {
      func_0x000107c30244(puVar5,param_2);
      puVar3 = puVar5;
    }
    param_1[3] = puVar3;
  }
  else if (iVar4 == 0xc) {
    param_1[3] = *(undefined8 *)(param_3 + 0x18);
  }
  else if (iVar4 == 0xb) {
    param_1[3] = *(undefined8 *)(param_3 + 0x18);
  }
  return param_1;
}



/* Entry: 109c736b4; end: 109c7370b;  */

long FUN_109c736b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x000109c73430(param_1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) == 0xd) {
      func_0x000107c30258(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return param_1;
}



/* Entry: 109c7370c; end: 109c7370f;  */

long FUN_109c7370c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x000109c73430(param_1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) == 0xd) {
      func_0x000107c30258(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return param_1;
}



/* Entry: 109c73710; end: 109c73723;  */

void FUN_109c73710(void)

{
  FUN_109c736b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c73724; end: 109c7372f;  */

undefined ** FUN_109c73724(void)

{
  return &PTR_DAT_110b307f0;
}



/* Entry: 109c73730; end: 109c7377f;  */

void FUN_109c73730(long param_1)

{
  ulong *puVar1;
  
  func_0x000109c73430();
  if (*(int *)(param_1 + 0x28) == 0xd) {
    func_0x000107c30258(param_1 + 0x18);
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



/* Entry: 109c73780; end: 109c73ac3;  */

long * FUN_109c73780(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  undefined1 *puVar13;
  
  iVar12 = *(int *)(param_1 + 0x24);
  plVar1 = param_2;
  if (iVar12 < 4) {
    if (iVar12 == 1) {
      plVar1 = (long *)*param_3;
      if (param_2 < plVar1) {
LAB_109c73830:
        uVar6 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        do {
          if ((char)param_3[7] == '\x01') {
            param_2 = param_3 + 2;
            break;
          }
          plVar5 = param_3;
          func_0x000107c303dc();
          param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar1));
          plVar1 = (long *)*param_3;
        } while (plVar1 <= param_2);
        if (*(int *)(param_1 + 0x24) == 1) goto LAB_109c73830;
        uVar6 = 0;
      }
      *(undefined1 *)param_2 = 9;
      *(undefined8 *)((long)param_2 + 1) = uVar6;
      plVar1 = (long *)((long)param_2 + 9);
    }
    else if (iVar12 == 2) {
      plVar1 = param_3;
      func_0x000107c282cc(param_3,*(undefined8 *)(param_1 + 0x10),param_2);
    }
    else if (iVar12 == 3) {
      puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
      lVar3 = (long)*(char *)((long)puVar10 + 0x17);
      puVar2 = puVar10;
      if (lVar3 < 0) {
        lVar3 = puVar10[1];
        puVar2 = (undefined8 *)*puVar10;
      }
      func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a6586);
      plVar1 = param_3;
      func_0x000107c280a0(param_3,3,puVar10,param_2);
    }
  }
  else {
    if (iVar12 < 6) {
      if (iVar12 == 4) {
        lVar3 = *(long *)(param_1 + 0x10);
        uVar4 = *(undefined4 *)(lVar3 + 0x20);
        plVar1 = (long *)0x4;
      }
      else {
        if (iVar12 != 5) goto LAB_109c73874;
        lVar3 = *(long *)(param_1 + 0x10);
        uVar4 = *(undefined4 *)(lVar3 + 0x24);
        plVar1 = (long *)0x5;
      }
    }
    else if (iVar12 == 6) {
      lVar3 = *(long *)(param_1 + 0x10);
      uVar4 = *(undefined4 *)(lVar3 + 0x30);
      plVar1 = (long *)0x6;
    }
    else {
      if (iVar12 != 7) goto LAB_109c73874;
      lVar3 = *(long *)(param_1 + 0x10);
      uVar4 = *(undefined4 *)(lVar3 + 0x30);
      plVar1 = (long *)0x7;
    }
    func_0x000107c303cc(plVar1,lVar3,uVar4,param_2,param_3);
  }
LAB_109c73874:
  iVar12 = *(int *)(param_1 + 0x28);
  plVar5 = param_3;
  if (iVar12 == 0xd) {
    puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    lVar3 = (long)*(char *)((long)puVar10 + 0x17);
    puVar2 = puVar10;
    if (lVar3 < 0) {
      lVar3 = puVar10[1];
      puVar2 = (undefined8 *)*puVar10;
    }
    func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a65b6);
    func_0x000107c280a0(param_3,0xd,puVar10,plVar1);
    goto LAB_109c73920;
  }
  if (iVar12 == 0xc) {
    func_0x000106af68a8(param_3,*(undefined8 *)(param_1 + 0x18),plVar1);
    goto LAB_109c73920;
  }
  plVar5 = plVar1;
  if (iVar12 != 0xb) goto LAB_109c73920;
  plVar5 = (long *)*param_3;
  if (plVar1 < plVar5) {
LAB_109c7389c:
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    do {
      if ((char)param_3[7] == '\x01') {
        plVar1 = param_3 + 2;
        break;
      }
      plVar8 = param_3;
      func_0x000107c303dc();
      plVar1 = (long *)((long)plVar8 + (long)((int)plVar1 - (int)plVar5));
      plVar5 = (long *)*param_3;
    } while (plVar5 <= plVar1);
    if (*(int *)(param_1 + 0x28) == 0xb) goto LAB_109c7389c;
    uVar6 = 0;
  }
  *(undefined1 *)plVar1 = 0x59;
  *(undefined8 *)((long)plVar1 + 1) = uVar6;
  plVar5 = (long *)((long)plVar1 + 9);
LAB_109c73920:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar11 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar11 < 0) {
      lVar3 = *(long *)(uVar7 + 8);
      uVar11 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar3 = uVar7 + 8;
    }
    uVar9 = (uint)uVar11;
    if (*param_3 - (long)plVar5 < (long)(int)uVar9) {
      puVar13 = (undefined1 *)((*param_3 - (long)plVar5) + 0x10);
      if ((int)puVar13 < (int)uVar9) {
        do {
          iVar12 = (int)puVar13;
          _memcpy(plVar5,lVar3,(long)iVar12);
          uVar9 = (int)uVar11 - iVar12;
          uVar11 = (ulong)uVar9;
          lVar3 = lVar3 + iVar12;
          plVar8 = (long *)*param_3;
          plVar1 = (long *)((long)plVar5 + (long)iVar12);
          do {
            plVar5 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar5 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar8));
            plVar8 = (long *)*param_3;
            plVar5 = plVar1;
          } while (plVar8 <= plVar1);
          puVar13 = (undefined1 *)((long)plVar8 + (0x10 - (long)plVar5));
        } while ((int)puVar13 < (int)uVar9);
      }
      _memcpy(plVar5,lVar3,(long)(int)uVar9);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar9);
    }
    else {
      _memcpy(plVar5,lVar3,uVar11 & 0xffffffff);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar9);
    }
  }
  return plVar5;
}



/* Entry: 109c73ac4; end: 109c73c77;  */

void FUN_109c73ac4(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 < 4) {
    if (iVar4 == 1) {
      uVar3 = 9;
      goto LAB_109c73bac;
    }
    if (iVar4 == 2) {
      uVar3 = (int)LZCOUNT(*(undefined8 *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6;
      goto LAB_109c73bac;
    }
    if (iVar4 != 3) goto LAB_109c73bac;
    uVar6 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar6 + 0x17);
    uVar3 = (uint)*(undefined8 *)(uVar6 + 8);
    if (-1 < (char)bVar2) {
      uVar3 = (uint)bVar2;
    }
    iVar4 = uVar3 + ((int)LZCOUNT(uVar3) * -9 + 0x160U >> 6);
  }
  else {
    if (iVar4 < 6) {
      if (iVar4 == 4) {
        iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
        FUN_109c691d8();
      }
      else {
        if (iVar4 != 5) goto LAB_109c73bac;
        iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
        FUN_109c68808();
      }
    }
    else if (iVar4 == 6) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109c67904();
    }
    else {
      if (iVar4 != 7) goto LAB_109c73bac;
      iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x000109c67f40();
    }
    iVar4 = iVar4 + ((int)LZCOUNT(iVar4) * -9 + 0x160U >> 6);
  }
  uVar3 = iVar4 + 1;
LAB_109c73bac:
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == 0xd) {
    uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar6 + 0x17);
    uVar1 = (uint)*(undefined8 *)(uVar6 + 8);
    if (-1 < (char)bVar2) {
      uVar1 = (uint)bVar2;
    }
    uVar3 = uVar3 + uVar1 + ((int)LZCOUNT(uVar1) * -9 + 0x160U >> 6) + 1;
  }
  else if (iVar4 == 0xc) {
    uVar3 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar3;
  }
  else if (iVar4 == 0xb) {
    uVar3 = uVar3 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar3 = (int)lVar5 + uVar3;
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  return;
}



/* Entry: 109c73c78; end: 109c73c7b;  */

void FUN_109c73c78(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000109c73430(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar3;
    }
    if (iVar3 < 4) {
      if (iVar3 == 1) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      }
      else if (iVar3 == 2) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      }
      else if (iVar3 == 3) {
        if (iVar4 != 3) {
          *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
        }
        puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
        if (*(int *)(param_2 + 0x24) != 3) {
          puVar1 = &DAT_11383d918;
        }
        func_0x000107c30248(param_1 + 0x10,puVar1,uVar6);
      }
    }
    else {
      uVar5 = uVar6;
      if (iVar3 < 6) {
        if (iVar3 == 4) {
          if (iVar4 == 4) {
            ppuVar2 = *(undefined ***)(param_2 + 0x10);
            if (*(int *)(param_2 + 0x24) != 4) {
              ppuVar2 = &PTR_PTR_1132ee668;
            }
            FUN_109c69234(*(undefined8 *)(param_1 + 0x10),ppuVar2);
            goto LAB_109c73e50;
          }
          func_0x000109c73f80(uVar6,*(undefined8 *)(param_2 + 0x10));
        }
        else {
          if (iVar3 != 5) goto LAB_109c73e50;
          if (iVar4 == 5) {
            ppuVar2 = *(undefined ***)(param_2 + 0x10);
            if (*(int *)(param_2 + 0x24) != 5) {
              ppuVar2 = &PTR_PTR_1132ee5c8;
            }
            FUN_109c688b0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
            goto LAB_109c73e50;
          }
          func_0x000109c6baf8(uVar6,*(undefined8 *)(param_2 + 0x10));
        }
      }
      else if (iVar3 == 6) {
        if (iVar4 == 6) {
          ppuVar2 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x24) != 6) {
            ppuVar2 = &PTR_PTR_1132ee6f0;
          }
          FUN_109c679f0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
          goto LAB_109c73e50;
        }
        func_0x000109c73fc4(uVar6,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        if (iVar3 != 7) goto LAB_109c73e50;
        if (iVar4 == 7) {
          ppuVar2 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x24) != 7) {
            ppuVar2 = &PTR_PTR_1132ee760;
          }
          FUN_109c68008(*(undefined8 *)(param_1 + 0x10),ppuVar2);
          goto LAB_109c73e50;
        }
        func_0x000109c74008(uVar6,*(undefined8 *)(param_2 + 0x10));
      }
      *(ulong *)(param_1 + 0x10) = uVar5;
    }
  }
LAB_109c73e50:
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != iVar3) {
      if (iVar4 == 0xd) {
        func_0x000107c30258(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x28) = iVar3;
    }
    if (iVar3 == 0xd) {
      if (iVar4 != 0xd) {
        *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x28) != 0xd) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x18,puVar1,uVar6);
    }
    else if (iVar3 == 0xc) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 0xb) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
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



/* Entry: 109c73c7c; end: 109c73f2b;  */

void FUN_109c73c7c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000109c73430(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar3;
    }
    if (iVar3 < 4) {
      if (iVar3 == 1) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      }
      else if (iVar3 == 2) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      }
      else if (iVar3 == 3) {
        if (iVar4 != 3) {
          *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
        }
        puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
        if (*(int *)(param_2 + 0x24) != 3) {
          puVar1 = &DAT_11383d918;
        }
        func_0x000107c30248(param_1 + 0x10,puVar1,uVar6);
      }
    }
    else {
      uVar5 = uVar6;
      if (iVar3 < 6) {
        if (iVar3 == 4) {
          if (iVar4 == 4) {
            ppuVar2 = *(undefined ***)(param_2 + 0x10);
            if (*(int *)(param_2 + 0x24) != 4) {
              ppuVar2 = &PTR_PTR_1132ee668;
            }
            FUN_109c69234(*(undefined8 *)(param_1 + 0x10),ppuVar2);
            goto LAB_109c73e50;
          }
          func_0x000109c73f80(uVar6,*(undefined8 *)(param_2 + 0x10));
        }
        else {
          if (iVar3 != 5) goto LAB_109c73e50;
          if (iVar4 == 5) {
            ppuVar2 = *(undefined ***)(param_2 + 0x10);
            if (*(int *)(param_2 + 0x24) != 5) {
              ppuVar2 = &PTR_PTR_1132ee5c8;
            }
            FUN_109c688b0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
            goto LAB_109c73e50;
          }
          func_0x000109c6baf8(uVar6,*(undefined8 *)(param_2 + 0x10));
        }
      }
      else if (iVar3 == 6) {
        if (iVar4 == 6) {
          ppuVar2 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x24) != 6) {
            ppuVar2 = &PTR_PTR_1132ee6f0;
          }
          FUN_109c679f0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
          goto LAB_109c73e50;
        }
        func_0x000109c73fc4(uVar6,*(undefined8 *)(param_2 + 0x10));
      }
      else {
        if (iVar3 != 7) goto LAB_109c73e50;
        if (iVar4 == 7) {
          ppuVar2 = *(undefined ***)(param_2 + 0x10);
          if (*(int *)(param_2 + 0x24) != 7) {
            ppuVar2 = &PTR_PTR_1132ee760;
          }
          FUN_109c68008(*(undefined8 *)(param_1 + 0x10),ppuVar2);
          goto LAB_109c73e50;
        }
        func_0x000109c74008(uVar6,*(undefined8 *)(param_2 + 0x10));
      }
      *(ulong *)(param_1 + 0x10) = uVar5;
    }
  }
LAB_109c73e50:
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != iVar3) {
      if (iVar4 == 0xd) {
        func_0x000107c30258(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x28) = iVar3;
    }
    if (iVar3 == 0xd) {
      if (iVar4 != 0xd) {
        *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x28) != 0xd) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x18,puVar1,uVar6);
    }
    else if (iVar3 == 0xc) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 0xb) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
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



/* Entry: 109c73f2c; end: 109c73f33;  */

void FUN_109c73f2c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b307b0;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  return;
}



/* Entry: 109c73f34; end: 109c740a3;  */

void FUN_109c73f34(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b307b0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  return;
}



/* Entry: 109c740a4; end: 109c740c3;  */

undefined ** FUN_109c740a4(void)

{
  return &PTR_DAT_110b30938;
}



/* Entry: 109c740c4; end: 109c742d3;  */

byte * FUN_109c740c4(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
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
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 != 0) {
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
      lVar9 = *(long *)(param_1 + 0x18);
    }
    *param_2 = 0x11;
    *(long *)(param_2 + 1) = lVar9;
    param_2 = param_2 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar9 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar2) {
        do {
          iVar8 = (int)pbVar5;
          _memcpy(param_2,lVar9,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar9 = lVar9 + iVar8;
          pbVar5 = (byte *)*param_3;
          pbVar7 = param_2 + iVar8;
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
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar2;
    }
  }
  return param_2;
}



/* Entry: 109c742d4; end: 109c74363;  */

ulong FUN_109c742d4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 9;
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



/* Entry: 109c74364; end: 109c743a3;  */

long FUN_109c74364(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c743a4; end: 109c743a7;  */

long FUN_109c743a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109c743a8; end: 109c743bb;  */

void FUN_109c743a8(void)

{
  FUN_109c74364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c743bc; end: 109c743c7;  */

undefined ** FUN_109c743bc(void)

{
  return &PTR_DAT_110b30998;
}



/* Entry: 109c743c8; end: 109c74413;  */

void FUN_109c743c8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 109c74414; end: 109c74743;  */

byte * FUN_109c74414(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x28);
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
  iVar10 = *(int *)(param_1 + 0x18);
  if (iVar10 != 0) {
    iVar9 = 0;
    pbVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar9 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar6,param_3);
      iVar9 = iVar9 + 1;
      pbVar6 = param_2;
    } while (iVar10 != iVar9);
  }
  lVar11 = *(long *)(param_1 + 0x30);
  if (lVar11 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      lVar11 = *(long *)(param_1 + 0x30);
    }
    *param_2 = 0x19;
    *(long *)(param_2 + 1) = lVar11;
    param_2 = param_2 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar11 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar11 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar6 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar3) {
        do {
          iVar10 = (int)pbVar6;
          _memcpy(param_2,lVar11,(long)iVar10);
          uVar3 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar3;
          lVar11 = lVar11 + iVar10;
          pbVar6 = (byte *)*param_3;
          pbVar8 = param_2 + iVar10;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar2 + (long)((int)pbVar8 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar6 <= pbVar8);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar11,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar11,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109c74744; end: 109c747b3;  */

void FUN_109c74744(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
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



/* Entry: 109c747b4; end: 109c74943;  */

undefined8 * FUN_109c747b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b308f8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 3,param_3 + 0x18);
  }
  puVar4 = (ulong *)(param_3 + 0x30);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[6] = puVar2;
  puVar4 = (ulong *)(param_3 + 0x38);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[7] = puVar2;
  puVar4 = (ulong *)(param_3 + 0x40);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[8] = puVar2;
  puVar4 = (ulong *)(param_3 + 0x48);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[9] = puVar2;
  puVar4 = (ulong *)(param_3 + 0x50);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[10] = puVar2;
  puVar4 = (ulong *)(param_3 + 0x58);
  puVar2 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar2 = puVar4;
  }
  param_1[0xb] = puVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = param_2;
  return param_1;
}



/* Entry: 109c74944; end: 109c7497b;  */

long FUN_109c74944(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c7497c(param_1);
  return param_1;
}



/* Entry: 109c7497c; end: 109c749eb;  */

long * FUN_109c7497c(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_109c680c8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_109c684b8();
    __ZdlPv();
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 109c749ec; end: 109c749ef;  */

long FUN_109c749ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c7497c(param_1);
  return param_1;
}



/* Entry: 109c749f0; end: 109c74a03;  */

void FUN_109c749f0(void)

{
  FUN_109c74944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c74a04; end: 109c74a0f;  */

undefined ** FUN_109c74a04(void)

{
  return &PTR_DAT_110b309f8;
}



/* Entry: 109c74a10; end: 109c74b9f;  */

void FUN_109c74a10(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
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
  if ((*(ulong *)(param_1 + 0x38) & 3) != 0) {
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
  if ((*(ulong *)(param_1 + 0x40) & 3) != 0) {
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
  if ((*(ulong *)(param_1 + 0x48) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x50) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x58) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109c68120(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c68524(*(undefined8 *)(param_1 + 0x68));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) == 0) {
    return;
  }
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



/* Entry: 109c74ba0; end: 109c751f3;  */

long * FUN_109c74ba0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar2 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x38),plVar2,param_3);
      iVar11 = iVar11 + 1;
      plVar2 = param_2;
    } while (iVar12 != iVar11);
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar8 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x28),param_2,param_3);
  }
  plVar3 = plVar2;
  if ((uVar8 >> 1 & 1) != 0) {
    plVar3 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x24),plVar2,param_3);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)*puVar9;
      goto LAB_109c74c78;
    }
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109c74c78:
      func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f5a65e6);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,10,puVar9,plVar3);
      plVar3 = plVar2;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)*puVar9;
      goto LAB_109c74cc8;
    }
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109c74cc8:
      func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f5a662a);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,0xb,puVar9,plVar3);
      plVar3 = plVar2;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)*puVar9;
      goto LAB_109c74d18;
    }
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109c74d18:
      func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f5a667c);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,0xc,puVar9,plVar3);
      plVar3 = plVar2;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)*puVar9;
      goto LAB_109c74d68;
    }
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109c74d68:
      func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f5a66cb);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,0xd,puVar9,plVar3);
      plVar3 = plVar2;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)*puVar9;
      goto LAB_109c74db8;
    }
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109c74db8:
      func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f5a6718);
      plVar2 = param_3;
      func_0x000107c280a0(param_3,0x14,puVar9,plVar3);
      plVar3 = plVar2;
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_109c74e30;
    puVar4 = (undefined8 *)*puVar9;
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_109c74e30;
  }
  func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f5a676c);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,0x15,puVar9,plVar3);
  plVar3 = plVar2;
LAB_109c74e30:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      uVar10 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*param_3 - (long)plVar3 < (long)(int)uVar8) {
      lVar13 = (*param_3 - (long)plVar3) + 0x10;
      if ((int)lVar13 < (int)uVar8) {
        do {
          iVar12 = (int)lVar13;
          _memcpy(plVar3,lVar5,(long)iVar12);
          uVar8 = (int)uVar10 - iVar12;
          uVar10 = (ulong)uVar8;
          lVar5 = lVar5 + iVar12;
          plVar7 = (long *)*param_3;
          plVar2 = (long *)((long)plVar3 + (long)iVar12);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar7));
            plVar7 = (long *)*param_3;
            plVar3 = plVar2;
          } while (plVar7 <= plVar2);
          lVar13 = (long)plVar7 + (0x10 - (long)plVar3);
        } while ((int)lVar13 < (int)uVar8);
      }
      _memcpy(plVar3,lVar5,(long)(int)uVar8);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar3,lVar5,uVar10 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar8);
    }
  }
  return plVar3;
}



/* Entry: 109c751f4; end: 109c751f7;  */

void FUN_109c751f4(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x000109c6bab4(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_109c683fc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        func_0x000109c6baf8(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar5;
      }
      else {
        FUN_109c688b0();
      }
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



/* Entry: 109c751f8; end: 109c75417;  */

void FUN_109c751f8(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x000109c6bab4(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_109c683fc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        func_0x000109c6baf8(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar5;
      }
      else {
        FUN_109c688b0();
      }
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



/* Entry: 109c75418; end: 109c7542f;  */

void FUN_109c75418(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110b30858;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c75430; end: 109c75463;  */

long * FUN_109c75430(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c75464; end: 109c755bf;  */

void FUN_109c75464(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110b30858;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c755c0; end: 109c75637;  */

undefined8 * FUN_109c755c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b30af0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    FUN_109c75dd4(param_2,*(undefined8 *)(param_3 + 0x10));
    param_1[2] = param_2;
  }
  return param_1;
}



/* Entry: 109c75638; end: 109c75673;  */

long FUN_109c75638(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x000109c75568(param_1);
  }
  return param_1;
}



/* Entry: 109c75674; end: 109c75677;  */

long FUN_109c75674(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x000109c75568(param_1);
  }
  return param_1;
}



/* Entry: 109c75678; end: 109c7568b;  */

void FUN_109c75678(void)

{
  FUN_109c75638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c7568c; end: 109c7569b;  */

long FUN_109c7568c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109cc5914();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109cc5914();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c7569c; end: 109c756d3;  */

void FUN_109c7569c(long param_1)

{
  ulong *puVar1;
  
  func_0x000109c75568();
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



/* Entry: 109c756d4; end: 109c75823;  */

long * FUN_109c756d4(long param_1,long *param_2,long *param_3)

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
  if (*(int *)(param_1 + 0x1c) == 1) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x10),
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x14),param_2,param_3);
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



/* Entry: 109c75824; end: 109c7589b;  */

void FUN_109c75824(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109c75c6c();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  else {
    iVar1 = 0;
  }
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



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109333130; end: 10933316f;  */

long FUN_109333130(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109333170; end: 109333173;  */

long FUN_109333170(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109333174; end: 109333187;  */

void FUN_109333174(void)

{
  FUN_109333130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109333188; end: 109333193;  */

undefined ** FUN_109333188(void)

{
  return &PTR_DAT_110aef010;
}



/* Entry: 109333194; end: 1093331db;  */

void FUN_109333194(long param_1)

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



/* Entry: 1093331dc; end: 1093333f7;  */

long * FUN_1093331dc(long param_1,long *param_2,long *param_3)

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
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
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



/* Entry: 1093333f8; end: 1093333fb;  */

void FUN_1093333f8(long param_1,long param_2)

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



/* Entry: 1093333fc; end: 1093334b3;  */

void FUN_1093333fc(long param_1,long param_2)

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



/* Entry: 1093334b4; end: 1093334b7;  */

long FUN_1093334b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
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



/* Entry: 1093334b8; end: 1093334cb;  */

void FUN_1093334b8(void)

{
  func_0x000109333450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093334cc; end: 109333503;  */

undefined ** FUN_1093334cc(void)

{
  return &PTR_DAT_110aef050;
}



/* Entry: 109333504; end: 109333a27;  */

byte * FUN_109333504(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  pbVar4 = param_2;
  if ((uVar11 & 1) != 0) {
    pbVar4 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x38),param_2);
  }
  pbVar1 = pbVar4;
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x3c),pbVar4);
  }
  iVar14 = *(int *)(param_1 + 0x18);
  if (0 < iVar14) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar1) {
      do {
        if (param_3[0x38] == 1) {
          pbVar1 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = pbVar2 + ((int)pbVar1 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar1);
      iVar14 = *(int *)(param_1 + 0x18);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar4 = pbVar1 + 1;
    *pbVar1 = 0x1a;
    uVar5 = uVar12;
    uVar7 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar1 = pbVar4;
        uVar8 = (uint)uVar5;
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar7 = (uint)uVar5;
      } while (uVar8 >> 0xe != 0);
    }
    pbVar1 = pbVar1 + 2;
    *pbVar4 = (byte)uVar7;
    lVar13 = *(long *)(param_1 + 0x20);
    uVar15 = (ulong)(int)uVar11;
    uVar5 = uVar12;
    if ((*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10), uVar5 = uVar15,
       (int)pbVar4 < (int)uVar11)) {
      pbVar2 = param_3 + 0x10;
      do {
        iVar14 = (int)pbVar4;
        _memcpy(pbVar1,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar10 = pbVar1 + iVar14;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar1 = pbVar2;
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093337e4:
            param_3[0x38] = 1;
LAB_1093337c4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_1093337c4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_1093337e4;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
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
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar1 = pbStack_70;
            }
          }
          pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar6);
          pbVar6 = pbVar4;
          pbVar1 = pbVar10;
        } while (pbVar4 <= pbVar10);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
      } while ((int)pbVar4 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar5 = uVar15;
    }
    _memcpy(pbVar1,lVar13,uVar5);
    pbVar1 = pbVar1 + uVar15;
  }
  iVar14 = *(int *)(param_1 + 0x28);
  if (0 < iVar14) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar1) {
      do {
        if (param_3[0x38] == 1) {
          pbVar1 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = pbVar2 + ((int)pbVar1 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar1);
      iVar14 = *(int *)(param_1 + 0x28);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar4 = pbVar1 + 1;
    *pbVar1 = 0x22;
    uVar5 = uVar12;
    uVar7 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar1 = pbVar4;
        uVar8 = (uint)uVar5;
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar7 = (uint)uVar5;
      } while (uVar8 >> 0xe != 0);
    }
    pbVar1 = pbVar1 + 2;
    *pbVar4 = (byte)uVar7;
    lVar13 = *(long *)(param_1 + 0x30);
    uVar15 = (ulong)(int)uVar11;
    uVar5 = uVar12;
    if ((*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10), uVar5 = uVar15,
       (int)pbVar4 < (int)uVar11)) {
      pbVar2 = param_3 + 0x10;
      do {
        iVar14 = (int)pbVar4;
        _memcpy(pbVar1,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar10 = pbVar1 + iVar14;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar1 = pbVar2;
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093338f8:
            param_3[0x38] = 1;
LAB_1093338d8:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_1093338d8;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_1093338f8;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
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
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar1 = pbStack_70;
            }
          }
          pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar6);
          pbVar6 = pbVar4;
          pbVar1 = pbVar10;
        } while (pbVar4 <= pbVar10);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
      } while ((int)pbVar4 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar5 = uVar15;
    }
    _memcpy(pbVar1,lVar13,uVar5);
    pbVar1 = pbVar1 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar13 = *(long *)(uVar5 + 8);
      uVar12 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar13 = uVar5 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar4 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar4;
          _memcpy(pbVar1,lVar13,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar14;
          pbVar4 = *(byte **)param_3;
          pbVar2 = pbVar1 + iVar14;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar2 = pbVar1 + ((int)pbVar2 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar1 = pbVar2;
          } while (pbVar4 <= pbVar2);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
        } while ((int)pbVar4 < (int)uVar11);
      }
      _memcpy(pbVar1,lVar13,(long)(int)uVar11);
      pbVar1 = pbVar1 + (int)uVar11;
    }
    else {
      _memcpy(pbVar1,lVar13,uVar12 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar11;
    }
  }
  return pbVar1;
}



/* Entry: 109333a28; end: 109333ae7;  */

long FUN_109333a28(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar4 = 0;
  if (uVar1 != 0) {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar3 = 0;
  if (uVar2 != 0) {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar3 = lVar4 + ((ulong)uVar2 + (ulong)uVar1) * 4 + lVar3;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + lVar3;
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



/* Entry: 109333ae8; end: 109333c8f;  */

void FUN_109333ae8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x20);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109311970(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x30);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 3) != 0) {
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
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



/* Entry: 109333c90; end: 109333cd7;  */

long FUN_109333c90(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109333cd8; end: 109333cdb;  */

long FUN_109333cd8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109333cdc; end: 109333cef;  */

void FUN_109333cdc(void)

{
  FUN_109333c90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109333cf0; end: 109333d17;  */

undefined ** FUN_109333cf0(void)

{
  return &PTR_DAT_110aef088;
}



/* Entry: 109333d18; end: 10933403f;  */

byte * FUN_109333d18(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
  }
  iVar14 = *(int *)(param_1 + 0x18);
  if (0 < iVar14) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar1) {
      do {
        if (param_3[0x38] == 1) {
          pbVar1 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = pbVar2 + ((int)pbVar1 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar1);
      iVar14 = *(int *)(param_1 + 0x18);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar4 = pbVar1 + 1;
    *pbVar1 = 0x12;
    uVar5 = uVar12;
    uVar8 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar1 = pbVar4;
        uVar7 = (uint)uVar5;
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar1 = pbVar1 + 2;
    *pbVar4 = (byte)uVar8;
    lVar13 = *(long *)(param_1 + 0x20);
    uVar15 = (ulong)(int)uVar11;
    uVar5 = uVar12;
    if ((*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10), uVar5 = uVar15,
       (int)pbVar4 < (int)uVar11)) {
      pbVar2 = param_3 + 0x10;
      do {
        iVar14 = (int)pbVar4;
        _memcpy(pbVar1,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar10 = pbVar1 + iVar14;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar1 = pbVar2;
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109333f2c:
            param_3[0x38] = 1;
LAB_109333f0c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109333f0c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109333f2c;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
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
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar1 = pbStack_70;
            }
          }
          pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar6);
          pbVar6 = pbVar4;
          pbVar1 = pbVar10;
        } while (pbVar4 <= pbVar10);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
      } while ((int)pbVar4 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar5 = uVar15;
    }
    _memcpy(pbVar1,lVar13,uVar5);
    pbVar1 = pbVar1 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar13 = *(long *)(uVar5 + 8);
      uVar12 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar13 = uVar5 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar4 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar4;
          _memcpy(pbVar1,lVar13,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar14;
          pbVar4 = *(byte **)param_3;
          pbVar2 = pbVar1 + iVar14;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar2 = pbVar1 + ((int)pbVar2 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar1 = pbVar2;
          } while (pbVar4 <= pbVar2);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
        } while ((int)pbVar4 < (int)uVar11);
      }
      _memcpy(pbVar1,lVar13,(long)(int)uVar11);
      pbVar1 = pbVar1 + (int)uVar11;
    }
    else {
      _memcpy(pbVar1,lVar13,uVar12 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar11;
    }
  }
  return pbVar1;
}



/* Entry: 109334040; end: 1093340c3;  */

long FUN_109334040(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar3 = lVar3 + (ulong)uVar1 * 4;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 1093340c4; end: 109334187;  */

void FUN_1093340c4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x20);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
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



/* Entry: 109334188; end: 1093341df;  */

long FUN_109334188(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x40);
  FUN_10933b108(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093341e0; end: 1093341e3;  */

long FUN_1093341e0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x40);
  FUN_10933b108(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093341e4; end: 1093341f7;  */

void FUN_1093341e4(void)

{
  FUN_109334188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093341f8; end: 109334203;  */

undefined ** FUN_1093341f8(void)

{
  return &PTR_DAT_110aef0d0;
}



/* Entry: 109334204; end: 10933428f;  */

void FUN_109334204(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
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
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 109334290; end: 1093345db;  */

byte * FUN_109334290(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined8 uVar20;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar15 = *(uint *)(param_1 + 0x10);
  pbVar13 = param_2;
  if ((uVar15 & 1) != 0) {
    pbVar13 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc,param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar2) {
    uVar19 = 0;
    pbVar6 = param_3 + 0x10;
    do {
      pbVar7 = pbVar13;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar13) {
        do {
          pbVar7 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109334358:
            param_3[0x38] = 1;
LAB_1093343f8:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar9 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar20 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar6 = uVar20;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_1093343f8;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar6,(long)pbVar12 - (long)pbVar6);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109334358;
            } while (uStack_64 == 0);
            puVar11 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar20 = *puVar11;
              *(undefined8 *)(param_3 + 0x18) = puVar11[1];
              *(undefined8 *)pbVar6 = uVar20;
              pbVar9 = pbVar6 + (int)uStack_64;
              *(byte **)param_3 = pbVar9;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar20 = *puVar11;
              *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
              *(undefined8 *)pbStack_70 = uVar20;
              pbVar9 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar9;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar7 = pbStack_70;
            }
          }
          pbVar13 = pbVar7 + ((int)pbVar13 - (int)pbVar12);
          pbVar7 = pbVar13;
          pbVar12 = pbVar9;
        } while (pbVar9 <= pbVar13);
      }
      uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + uVar19 * 4);
      uVar8 = (ulong)(int)uVar4;
      pbVar12 = pbVar7 + 1;
      *pbVar7 = 0x10;
      uVar16 = uVar8;
      pbVar13 = pbVar12;
      if (0x7f < uVar4) {
        do {
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar16 | 0x80;
          uVar8 = uVar16 >> 7;
          uVar10 = uVar16 >> 0xe;
          uVar16 = uVar8;
          pbVar13 = pbVar12;
        } while (uVar10 != 0);
      }
      pbVar13 = pbVar12 + 1;
      *pbVar12 = (byte)uVar8;
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar2);
  }
  pbVar6 = pbVar13;
  if ((uVar15 >> 1 & 1) != 0) {
    pbVar6 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x48),pbVar13);
  }
  iVar18 = *(int *)(param_1 + 0x30);
  if (iVar18 != 0) {
    iVar17 = 0;
    pbVar13 = pbVar6;
    do {
      uVar19 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar19 & 1) != 0) {
        puVar1 = (ulong *)(uVar19 + (long)iVar17 * 8 + 7);
      }
      pbVar6 = (byte *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar13,param_3);
      iVar17 = iVar17 + 1;
      pbVar13 = pbVar6;
    } while (iVar18 != iVar17);
  }
  if ((uVar15 >> 2 & 1) != 0) {
    pbVar13 = *(byte **)param_3;
    if (pbVar13 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar7 + ((int)pbVar6 - (int)pbVar13);
        pbVar13 = *(byte **)param_3;
      } while (pbVar13 <= pbVar6);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *pbVar6 = 0x2d;
    *(undefined4 *)(pbVar6 + 1) = uVar3;
    pbVar6 = pbVar6 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar19 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar19 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar14 = *(long *)(uVar19 + 8);
      uVar16 = (ulong)*(uint *)(uVar19 + 0x10);
    }
    else {
      lVar14 = uVar19 + 8;
    }
    uVar15 = (uint)uVar16;
    if (*(long *)param_3 - (long)pbVar6 < (long)(int)uVar15) {
      pbVar13 = (byte *)((*(long *)param_3 - (long)pbVar6) + 0x10);
      if ((int)pbVar13 < (int)uVar15) {
        do {
          iVar18 = (int)pbVar13;
          _memcpy(pbVar6,lVar14,(long)iVar18);
          uVar15 = (int)uVar16 - iVar18;
          uVar16 = (ulong)uVar15;
          lVar14 = lVar14 + iVar18;
          pbVar13 = *(byte **)param_3;
          pbVar7 = pbVar6 + iVar18;
          do {
            pbVar6 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar6 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar6 + ((int)pbVar7 - (int)pbVar13);
            pbVar13 = *(byte **)param_3;
            pbVar6 = pbVar7;
          } while (pbVar13 <= pbVar7);
          pbVar13 = pbVar13 + (0x10 - (long)pbVar6);
        } while ((int)pbVar13 < (int)uVar15);
      }
      _memcpy(pbVar6,lVar14,(long)(int)uVar15);
      pbVar6 = pbVar6 + (int)uVar15;
    }
    else {
      _memcpy(pbVar6,lVar14,uVar16 & 0xffffffff);
      pbVar6 = pbVar6 + (int)uVar15;
    }
  }
  return pbVar6;
}



/* Entry: 1093345dc; end: 10933473f;  */

long FUN_1093345dc(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x20);
    do {
      lVar4 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar4;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  lVar4 = lVar4 + (ulong)uVar1 + (long)iVar3;
  puVar7 = (ulong *)(param_1 + 0x28);
  if ((uVar6 & 1) != 0) {
    puVar7 = (ulong *)(uVar6 + 7);
  }
  if (iVar3 != 0) {
    lVar8 = (long)iVar3 << 3;
    do {
      uVar6 = *puVar7;
      FUN_109333a28();
      lVar4 = uVar6 + lVar4 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar8 = lVar8 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 & 4) != 0) {
      lVar4 = lVar4 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar8 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar8 < 0) {
      lVar8 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar8 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109334740; end: 10933486b;  */

void FUN_109334740(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 7) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x40,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
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



/* Entry: 10933486c; end: 1093348bb;  */

long FUN_10933486c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093348bc; end: 1093348bf;  */

long FUN_1093348bc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093348c0; end: 1093348d3;  */

void FUN_1093348c0(void)

{
  FUN_10933486c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093348d4; end: 109334927;  */

undefined ** FUN_1093348d4(void)

{
  return &PTR_DAT_110aef110;
}



/* Entry: 109334928; end: 109334c1b;  */

byte * FUN_109334928(long param_1,byte *param_2,byte *param_3)

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
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar9 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar9 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc,param_2);
  }
  uVar12 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar12) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
    }
    pbVar3 = pbVar9 + 1;
    *pbVar9 = 0x12;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar3;
        pbVar3 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(uint **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar3 = param_3 + 0x10;
    puVar14 = puVar13;
    do {
      pbVar10 = pbVar9;
      pbVar17 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar9) {
        do {
          pbVar10 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109334a0c:
            param_3[0x38] = 1;
LAB_109334aa4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar17 + 8);
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)(param_3 + 8) = pbVar17;
              goto LAB_109334aa4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar17 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109334a0c;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar17);
          pbVar10 = pbVar9;
          pbVar17 = pbVar6;
        } while (pbVar6 <= pbVar9);
      }
      puVar15 = puVar14 + 1;
      uVar4 = (ulong)(int)*puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < *puVar14) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      pbVar9 = pbVar10 + 1;
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
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(pbVar9,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = *(byte **)param_3;
          pbVar10 = pbVar9 + iVar16;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar9 + ((int)pbVar10 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar9 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar9);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(pbVar9,lVar11,(long)(int)uVar12);
      pbVar9 = pbVar9 + (int)uVar12;
    }
    else {
      _memcpy(pbVar9,lVar11,uVar4 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar12;
    }
  }
  return pbVar9;
}



/* Entry: 109334c1c; end: 109334d03;  */

long FUN_109334c1c(long param_1)

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
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
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
    *(int *)(param_1 + 0x28) = (int)lVar3;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + lVar3;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar6 + 0x17);
    uVar6 = *(ulong *)(uVar6 + 8);
    if (-1 < (char)bVar2) {
      uVar6 = (ulong)bVar2;
    }
    lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109334d04; end: 109334def;  */

void FUN_109334d04(long param_1,long param_2)

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
    uVar6 = *(ulong *)(param_2 + 0x30);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar6 & 0xfffffffffffffffc,uVar4);
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



/* Entry: 109334df0; end: 109334e5b;  */

long FUN_109334df0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
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



/* Entry: 109334e5c; end: 109334e5f;  */

long FUN_109334e5c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
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



/* Entry: 109334e60; end: 109334e73;  */

void FUN_109334e60(void)

{
  FUN_109334df0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109334e74; end: 109334ecb;  */

undefined ** FUN_109334e74(void)

{
  return &PTR_DAT_110aef148;
}



/* Entry: 109334ecc; end: 109335367;  */

byte * FUN_109334ecc(long param_1,byte *param_2,byte *param_3)

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
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar9 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar9 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc,param_2);
  }
  uVar12 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar12) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
    }
    pbVar3 = pbVar9 + 1;
    *pbVar9 = 0x12;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar3;
        pbVar3 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(uint **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar3 = param_3 + 0x10;
    puVar15 = puVar13;
    do {
      pbVar10 = pbVar9;
      pbVar17 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar9) {
        do {
          pbVar10 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109334fb0:
            param_3[0x38] = 1;
LAB_109335048:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar17 + 8);
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)(param_3 + 8) = pbVar17;
              goto LAB_109335048;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar17 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109334fb0;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar17);
          pbVar10 = pbVar9;
          pbVar17 = pbVar6;
        } while (pbVar6 <= pbVar9);
      }
      puVar14 = puVar15 + 1;
      uVar4 = (ulong)(int)*puVar15;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < *puVar15) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      pbVar9 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar15 = puVar14;
    } while (puVar14 < puVar13 + iVar16);
  }
  uVar12 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar12) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
    }
    pbVar3 = pbVar9 + 1;
    *pbVar9 = 0x1a;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar3;
        pbVar3 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(uint **)(param_1 + 0x38);
    iVar16 = *(int *)(param_1 + 0x30);
    pbVar3 = param_3 + 0x10;
    puVar15 = puVar13;
    do {
      pbVar10 = pbVar9;
      pbVar17 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar9) {
        do {
          pbVar10 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109335108:
            param_3[0x38] = 1;
LAB_1093351a0:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar17 + 8);
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)(param_3 + 8) = pbVar17;
              goto LAB_1093351a0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar17 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109335108;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar17);
          pbVar10 = pbVar9;
          pbVar17 = pbVar6;
        } while (pbVar6 <= pbVar9);
      }
      puVar14 = puVar15 + 1;
      uVar4 = (ulong)(int)*puVar15;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < *puVar15) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      pbVar9 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar15 = puVar14;
    } while (puVar14 < puVar13 + iVar16);
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
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(pbVar9,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = *(byte **)param_3;
          pbVar10 = pbVar9 + iVar16;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar9 + ((int)pbVar10 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar9 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar9);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(pbVar9,lVar11,(long)(int)uVar12);
      pbVar9 = pbVar9 + (int)uVar12;
    }
    else {
      _memcpy(pbVar9,lVar11,uVar4 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar12;
    }
  }
  return pbVar9;
}



/* Entry: 109335368; end: 1093354c3;  */

long FUN_109335368(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar3 = 0;
    uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar6 = *(int **)(param_1 + 0x20);
    do {
      lVar3 = (ulong)((int)LZCOUNT((long)*piVar6) * -9 + 0x280U >> 6) + lVar3;
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar3;
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
    lVar5 = 0;
    if (lVar3 != 0) {
      lVar5 = (ulong)((int)LZCOUNT((long)(int)lVar3) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 1) {
    lVar8 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar6 = *(int **)(param_1 + 0x38);
    do {
      lVar8 = (ulong)((int)LZCOUNT((long)*piVar6) * -9 + 0x280U >> 6) + lVar8;
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar7 != 0);
    *(int *)(param_1 + 0x40) = (int)lVar8;
    if (lVar8 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar8) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar5 + lVar4 + lVar8 + lVar3;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar7 + 0x17);
    uVar7 = *(ulong *)(uVar7 + 8);
    if (-1 < (char)bVar2) {
      uVar7 = (ulong)bVar2;
    }
    lVar4 = lVar4 + uVar7 + (ulong)((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar7 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1093354c4; end: 10933560b;  */

void FUN_1093354c4(long param_1,long param_2)

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
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 0x48);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    uVar4 = *(ulong *)(param_1 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar6 & 0xfffffffffffffffc,uVar4);
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



/* Entry: 10933560c; end: 109335653;  */

long FUN_10933560c(long param_1)

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



/* Entry: 109335654; end: 109335657;  */

long FUN_109335654(long param_1)

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



/* Entry: 109335658; end: 10933566b;  */

void FUN_109335658(void)

{
  FUN_10933560c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10933566c; end: 10933568b;  */

undefined ** FUN_10933566c(void)

{
  return &PTR_DAT_110aef180;
}



/* Entry: 10933568c; end: 10933595b;  */

byte * FUN_10933568c(long param_1,byte *param_2,long *param_3)

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
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
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
    puVar13 = *(uint **)(param_1 + 0x18);
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
LAB_10933574c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_1093357e4:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_1093357e4;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10933574c;
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
      uVar4 = (ulong)(int)*puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < *puVar14) {
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



/* Entry: 10933595c; end: 1093359ff;  */

long FUN_10933595c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
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
    piVar4 = *(int **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*piVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      piVar4 = piVar4 + 1;
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



/* Entry: 109335a00; end: 109335aa7;  */

void FUN_109335a00(long param_1,long param_2)

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
      func_0x000107c282d8(param_1 + 0x10);
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



/* Entry: 109335aa8; end: 109335b17;  */

void FUN_109335aa8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aeef98;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = param_2;
  *(undefined8 *)((long)param_1 + 0x134) = 0xc00000004;
  *(undefined8 *)((long)param_1 + 0x12a) = 0;
  *(undefined8 *)((long)param_1 + 0x122) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  return;
}



/* Entry: 109335b18; end: 109335e07;  */

undefined8 * FUN_109335b18(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeef98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 3,param_3 + 0x18);
  }
  FUN_109311ab0(param_1 + 6,param_2,param_3 + 0x30);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  if (*(int *)(param_3 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 9,param_3 + 0x48);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  if (*(int *)(param_3 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0xc,param_3 + 0x60);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  if (*(int *)(param_3 + 0x80) != 0) {
    func_0x000107c303c4(param_1 + 0xf,param_3 + 0x78);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  if (*(int *)(param_3 + 0x98) != 0) {
    func_0x000107c303c4(param_1 + 0x12,param_3 + 0x90);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_2;
  if (*(int *)(param_3 + 0xb0) != 0) {
    func_0x000107c303c4(param_1 + 0x15,param_3 + 0xa8);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = param_2;
  if (*(int *)(param_3 + 200) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_3 + 0xc0);
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_2;
  if (*(int *)(param_3 + 0xe0) != 0) {
    func_0x000107c303c4(param_1 + 0x1b,param_3 + 0xd8);
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = param_2;
  if (*(int *)(param_3 + 0xf8) != 0) {
    func_0x000107c303c4(param_1 + 0x1e,param_3 + 0xf0);
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10933b860(param_2,*(undefined8 *)(param_3 + 0x108));
  }
  param_1[0x21] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10933b860(param_2,*(undefined8 *)(param_3 + 0x110));
  }
  param_1[0x22] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10932fda4(param_2,*(undefined8 *)(param_3 + 0x118));
  }
  param_1[0x23] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10932fda4(param_2,*(undefined8 *)(param_3 + 0x120));
  }
  param_1[0x24] = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10932fda4(param_2,*(undefined8 *)(param_3 + 0x128));
  }
  param_1[0x25] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x130);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_3 + 0x138);
  param_1[0x26] = uVar2;
  return param_1;
}



/* Entry: 109335e08; end: 109335eab;  */

long FUN_109335e08(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109335e3c(param_1);
  return param_1;
}



/* Entry: 109335eac; end: 109335eaf;  */

long FUN_109335eac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109335e3c(param_1);
  return param_1;
}



/* Entry: 109335eb0; end: 109335ec3;  */

void FUN_109335eb0(void)

{
  FUN_109335e08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109335ec4; end: 109335ecf;  */

undefined ** FUN_109335ec4(void)

{
  return &PTR_DAT_110aef1c0;
}



/* Entry: 109335ed0; end: 10933602f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109335ed0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x00010598fd84(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    func_0x0001053936e4(param_1 + 0x60);
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    func_0x0001053936e4(param_1 + 0x78);
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    func_0x0001053936e4(param_1 + 0x90);
  }
  if (0 < *(int *)(param_1 + 0xb0)) {
    func_0x0001053936e4(param_1 + 0xa8);
  }
  if (0 < *(int *)(param_1 + 200)) {
    func_0x0001053936e4(param_1 + 0xc0);
  }
  if (0 < *(int *)(param_1 + 0xe0)) {
    func_0x0001053936e4(param_1 + 0xd8);
  }
  if (0 < *(int *)(param_1 + 0xf8)) {
    func_0x0001053936e4(param_1 + 0xf0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001093334d8(*(undefined8 *)(param_1 + 0x108));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001093334d8(*(undefined8 *)(param_1 + 0x110));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000109333cfc(*(undefined8 *)(param_1 + 0x118));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000109333cfc(*(undefined8 *)(param_1 + 0x120));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000109333cfc(*(undefined8 *)(param_1 + 0x128));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0xc00000004;
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



/* Entry: 109336030; end: 10933686b;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109336030(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar15 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar20 = 8;
    pbVar7 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + lVar20 + -1);
      }
      plVar5 = (long *)*puVar1;
      lVar13 = (long)*(char *)((long)plVar5 + 0x17);
      if (((lVar13 < 0) && (lVar13 = plVar5[1], 0x7f < lVar13)) ||
         ((*(long *)param_3 - (long)pbVar7) + 0xe < lVar13)) {
        param_2 = param_3;
        func_0x00010b4d5120(param_3,2,plVar5,pbVar7);
      }
      else {
        *pbVar7 = 0x12;
        pbVar7[1] = (byte)lVar13;
        if (*(char *)((long)plVar5 + 0x17) < '\0') {
          plVar5 = (long *)*plVar5;
        }
        _memcpy(pbVar7 + 2,plVar5,lVar13);
        param_2 = pbVar7 + 2 + lVar13;
      }
      lVar20 = lVar20 + 8;
      uVar15 = uVar15 - 1;
      pbVar7 = param_2;
    } while (uVar15 != 0);
  }
  uVar12 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar12) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= param_2);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 0x1a;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar7;
        pbVar7 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar3 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar3 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar7 = (byte)uVar12;
    puVar16 = *(uint **)(param_1 + 0x38);
    iVar19 = *(int *)(param_1 + 0x30);
    pbVar7 = param_3 + 0x10;
    puVar17 = puVar16;
    do {
      pbVar4 = param_2;
      pbVar11 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar4 = pbVar7;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10933619c:
            param_3[0x38] = 1;
LAB_109336234:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar8 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar21 = *(undefined8 *)pbVar11;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar11 + 8);
              *(undefined8 *)pbVar7 = uVar21;
              *(byte **)(param_3 + 8) = pbVar11;
              goto LAB_109336234;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar7,(long)pbVar11 - (long)pbVar7);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_10933619c;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar7 = uVar21;
              *(byte **)param_3 = pbVar7 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar8 = pbVar7 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar21;
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
              pbVar8 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar4 + ((int)param_2 - (int)pbVar11);
          pbVar4 = param_2;
          pbVar11 = pbVar8;
        } while (pbVar8 <= param_2);
      }
      puVar18 = puVar17 + 1;
      uVar6 = (ulong)(int)*puVar17;
      uVar15 = uVar6;
      pbVar11 = pbVar4;
      if (0x7f < *puVar17) {
        do {
          pbVar4 = pbVar11 + 1;
          *pbVar11 = (byte)uVar15 | 0x80;
          uVar6 = uVar15 >> 7;
          uVar10 = uVar15 >> 0xe;
          uVar15 = uVar6;
          pbVar11 = pbVar4;
        } while (uVar10 != 0);
      }
      param_2 = pbVar4 + 1;
      *pbVar4 = (byte)uVar6;
      puVar17 = puVar18;
    } while (puVar18 < puVar16 + iVar19);
  }
  iVar19 = *(int *)(param_1 + 0x50);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar7 = param_2;
    do {
      uVar15 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar15 & 1) != 0) {
        puVar1 = (ulong *)(uVar15 + (long)iVar14 * 8 + 7);
      }
      param_2 = (byte *)0x4;
      func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x24),pbVar7,param_3);
      iVar14 = iVar14 + 1;
      pbVar7 = param_2;
    } while (iVar19 != iVar14);
  }
  iVar19 = *(int *)(param_1 + 0x68);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar7 = param_2;
    do {
      uVar15 = *(ulong *)(param_1 + 0x60);
      puVar1 = (ulong *)(param_1 + 0x60);
      if ((uVar15 & 1) != 0) {
        puVar1 = (ulong *)(uVar15 + (long)iVar14 * 8 + 7);
      }
      param_2 = (byte *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar14 = iVar14 + 1;
      pbVar7 = param_2;
    } while (iVar19 != iVar14);
  }
  uVar12 = *(uint *)(param_1 + 0x10);
  pbVar7 = param_2;
  if ((uVar12 & 1) != 0) {
    pbVar7 = (byte *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x108),
                        *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x14),param_2,param_3);
  }
  pbVar4 = pbVar7;
  if ((uVar12 >> 1 & 1) != 0) {
    pbVar4 = (byte *)0x8;
    func_0x000107c303cc(8,*(long *)(param_1 + 0x110),
                        *(undefined4 *)(*(long *)(param_1 + 0x110) + 0x14),pbVar7,param_3);
  }
  iVar19 = *(int *)(param_1 + 0x80);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar7 = pbVar4;
    do {
      uVar15 = *(ulong *)(param_1 + 0x78);
      puVar1 = (ulong *)(param_1 + 0x78);
      if ((uVar15 & 1) != 0) {
        puVar1 = (ulong *)(uVar15 + (long)iVar14 * 8 + 7);
      }
      pbVar4 = (byte *)0x9;
      func_0x000107c303cc(9,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar14 = iVar14 + 1;
      pbVar7 = pbVar4;
    } while (iVar19 != iVar14);
  }
  pbVar7 = pbVar4;
  if ((uVar12 >> 2 & 1) != 0) {
    pbVar7 = (byte *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x118),
                        *(undefined4 *)(*(long *)(param_1 + 0x118) + 0x14),pbVar4,param_3);
  }
  iVar19 = *(int *)(param_1 + 0x98);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar4 = pbVar7;
    do {
      uVar15 = *(ulong *)(param_1 + 0x90);
      puVar1 = (ulong *)(param_1 + 0x90);
      if ((uVar15 & 1) != 0) {
        puVar1 = (ulong *)(uVar15 + (long)iVar14 * 8 + 7);
      }
      pbVar7 = (byte *)0xd;
      func_0x000107c303cc(0xd,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar4,param_3);
      iVar14 = iVar14 + 1;
      pbVar4 = pbVar7;
    } while (iVar19 != iVar14);
  }
  iVar19 = *(int *)(param_1 + 0xb0);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar4 = pbVar7;
    do {
      uVar15 = *(ulong *)(param_1 + 0xa8);
      puVar1 = (ulong *)(param_1 + 0xa8);
      if ((uVar15 & 1) != 0) {
        puVar1 = (ulong *)(uVar15 + (long)iVar14 * 8 + 7);
      }
      pbVar7 = (byte *)0xe;
      func_0x000107c303cc(0xe,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar4,param_3);
      iVar14 = iVar14 + 1;
      pbVar4 = pbVar7;
    } while (iVar19 != iVar14);
  }
  iVar19 = *(int *)(param_1 + 200);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar4 = pbVar7;
    do {
      uVar15 = *(ulong *)(param_1 + 0xc0);
      puVar1 = (ulong *)(param_1 + 0xc0);
      if ((uVar15 & 1) != 0) {
        puVar1 = (ulong *)(uVar15 + (long)iVar14 * 8 + 7);
      }
      pbVar7 = (byte *)0x10;
      func_0x000107c303cc(0x10,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar4,param_3);
      iVar14 = iVar14 + 1;
      pbVar4 = pbVar7;
    } while (iVar19 != iVar14);
  }
  iVar19 = *(int *)(param_1 + 0xe0);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar4 = pbVar7;
    do {
      uVar15 = *(ulong *)(param_1 + 0xd8);
      puVar1 = (ulong *)(param_1 + 0xd8);
      if ((uVar15 & 1) != 0) {
        puVar1 = (ulong *)(uVar15 + (long)iVar14 * 8 + 7);
      }
      pbVar7 = (byte *)0x11;
      func_0x000107c303cc(0x11,*puVar1,*(undefined4 *)(*puVar1 + 0x28),pbVar4,param_3);
      iVar14 = iVar14 + 1;
      pbVar4 = pbVar7;
    } while (iVar19 != iVar14);
  }
  pbVar4 = pbVar7;
  if ((uVar12 >> 3 & 1) != 0) {
    pbVar4 = (byte *)0x13;
    func_0x000107c303cc(0x13,*(long *)(param_1 + 0x120),
                        *(undefined4 *)(*(long *)(param_1 + 0x120) + 0x14),pbVar7,param_3);
  }
  iVar19 = *(int *)(param_1 + 0xf8);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar7 = pbVar4;
    do {
      uVar15 = *(ulong *)(param_1 + 0xf0);
      puVar1 = (ulong *)(param_1 + 0xf0);
      if ((uVar15 & 1) != 0) {
        puVar1 = (ulong *)(uVar15 + (long)iVar14 * 8 + 7);
      }
      pbVar4 = (byte *)0x14;
      func_0x000107c303cc(0x14,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar14 = iVar14 + 1;
      pbVar7 = pbVar4;
    } while (iVar19 != iVar14);
  }
  if ((uVar12 >> 5 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar11 + ((int)pbVar4 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar4);
    }
    bVar2 = *(byte *)(param_1 + 0x130);
    pbVar4[0] = 0xb0;
    pbVar4[1] = 1;
    pbVar4[2] = bVar2;
    pbVar4 = pbVar4 + 3;
  }
  if ((uVar12 >> 6 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar11 + ((int)pbVar4 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar4);
    }
    bVar2 = *(byte *)(param_1 + 0x131);
    pbVar4[0] = 0xb8;
    pbVar4[1] = 1;
    pbVar4[2] = bVar2;
    pbVar4 = pbVar4 + 3;
  }
  if ((uVar12 >> 7 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar11 + ((int)pbVar4 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar4);
    }
    uVar3 = *(uint *)(param_1 + 0x134);
    uVar6 = (ulong)(int)uVar3;
    pbVar11 = pbVar4 + 2;
    pbVar4[0] = 0xc0;
    pbVar4[1] = 1;
    uVar15 = uVar6;
    pbVar7 = pbVar11;
    if (0x7f < uVar3) {
      do {
        pbVar11 = pbVar7 + 1;
        *pbVar7 = (byte)uVar15 | 0x80;
        uVar6 = uVar15 >> 7;
        uVar10 = uVar15 >> 0xe;
        uVar15 = uVar6;
        pbVar7 = pbVar11;
      } while (uVar10 != 0);
    }
    pbVar4 = pbVar11 + 1;
    *pbVar11 = (byte)uVar6;
  }
  if ((uVar12 >> 8 & 1) != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar4) {
      do {
        if (param_3[0x38] == 1) {
          pbVar4 = param_3 + 0x10;
          break;
        }
        pbVar11 = param_3;
        func_0x000107c303dc();
        pbVar4 = pbVar11 + ((int)pbVar4 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar4);
    }
    uVar3 = *(uint *)(param_1 + 0x138);
    uVar6 = (ulong)(int)uVar3;
    pbVar11 = pbVar4 + 2;
    pbVar4[0] = 200;
    pbVar4[1] = 1;
    uVar15 = uVar6;
    pbVar7 = pbVar11;
    if (0x7f < uVar3) {
      do {
        pbVar11 = pbVar7 + 1;
        *pbVar7 = (byte)uVar15 | 0x80;
        uVar6 = uVar15 >> 7;
        uVar10 = uVar15 >> 0xe;
        uVar15 = uVar6;
        pbVar7 = pbVar11;
      } while (uVar10 != 0);
    }
    pbVar4 = pbVar11 + 1;
    *pbVar11 = (byte)uVar6;
  }
  pbVar7 = pbVar4;
  if ((uVar12 >> 4 & 1) != 0) {
    pbVar7 = (byte *)0x1a;
    func_0x000107c303cc(0x1a,*(long *)(param_1 + 0x128),
                        *(undefined4 *)(*(long *)(param_1 + 0x128) + 0x14),pbVar4,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar20 = *(long *)(uVar15 + 8);
      uVar6 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar20 = uVar15 + 8;
    }
    uVar12 = (uint)uVar6;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar12) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar4 < (int)uVar12) {
        do {
          iVar19 = (int)pbVar4;
          _memcpy(pbVar7,lVar20,(long)iVar19);
          uVar12 = (int)uVar6 - iVar19;
          uVar6 = (ulong)uVar12;
          lVar20 = lVar20 + iVar19;
          pbVar4 = *(byte **)param_3;
          pbVar11 = pbVar7 + iVar19;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar7 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar7);
        } while ((int)pbVar4 < (int)uVar12);
      }
      _memcpy(pbVar7,lVar20,(long)(int)uVar12);
      pbVar7 = pbVar7 + (int)uVar12;
    }
    else {
      _memcpy(pbVar7,lVar20,uVar6 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar12;
    }
  }
  return pbVar7;
}



/* Entry: 10933686c; end: 109336d77;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10933686c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar10 = *(ulong *)(param_1 + 0x18);
    puVar12 = (ulong *)(uVar10 + 7);
    uVar11 = uVar6;
    do {
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar10 & 1) != 0) {
        puVar1 = puVar12;
      }
      bVar4 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      uVar6 = uVar2 + uVar6 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((int)uVar3 < 1) {
    lVar8 = 0;
    lVar13 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar7 = 0;
    uVar11 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    piVar9 = *(int **)(param_1 + 0x38);
    do {
      lVar7 = (ulong)((int)LZCOUNT((long)*piVar9) * -9 + 0x280U >> 6) + lVar7;
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 1;
    } while (uVar11 != 0);
    *(int *)(param_1 + 0x40) = (int)lVar7;
    lVar8 = 0;
    if (lVar7 != 0) {
      lVar8 = lVar7;
    }
    lVar13 = 0;
    if (lVar7 != 0) {
      lVar13 = (ulong)((int)LZCOUNT((long)(int)lVar7) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar11 = *(ulong *)(param_1 + 0x48);
  iVar5 = *(int *)(param_1 + 0x50);
  lVar8 = lVar8 + uVar6 + lVar13 + (long)iVar5;
  puVar12 = (ulong *)(param_1 + 0x48);
  if ((uVar11 & 1) != 0) {
    puVar12 = (ulong *)(uVar11 + 7);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar12;
      FUN_10933595c();
      lVar8 = uVar6 + lVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x68);
  lVar8 = lVar8 + iVar5;
  puVar12 = (ulong *)(param_1 + 0x60);
  if ((uVar6 & 1) != 0) {
    puVar12 = (ulong *)(uVar6 + 7);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar12;
      FUN_109334c1c();
      lVar8 = uVar6 + lVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0x78);
  iVar5 = *(int *)(param_1 + 0x80);
  lVar8 = lVar8 + iVar5;
  puVar12 = (ulong *)(param_1 + 0x78);
  if ((uVar6 & 1) != 0) {
    puVar12 = (ulong *)(uVar6 + 7);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar12;
      FUN_109333a28();
      lVar8 = uVar6 + lVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0x90);
  iVar5 = *(int *)(param_1 + 0x98);
  lVar8 = lVar8 + iVar5;
  puVar12 = (ulong *)(param_1 + 0x90);
  if ((uVar6 & 1) != 0) {
    puVar12 = (ulong *)(uVar6 + 7);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar12;
      FUN_1093345dc();
      lVar8 = uVar6 + lVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0xa8);
  iVar5 = *(int *)(param_1 + 0xb0);
  lVar8 = lVar8 + iVar5;
  puVar12 = (ulong *)(param_1 + 0xa8);
  if ((uVar6 & 1) != 0) {
    puVar12 = (ulong *)(uVar6 + 7);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar12;
      FUN_109335368();
      lVar8 = uVar6 + lVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0xc0);
  iVar5 = *(int *)(param_1 + 200);
  lVar8 = lVar8 + (long)iVar5 * 2;
  puVar12 = (ulong *)(param_1 + 0xc0);
  if ((uVar6 & 1) != 0) {
    puVar12 = (ulong *)(uVar6 + 7);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar12;
      FUN_109333a28();
      lVar8 = uVar6 + lVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0xd8);
  iVar5 = *(int *)(param_1 + 0xe0);
  lVar8 = lVar8 + (long)iVar5 * 2;
  puVar12 = (ulong *)(param_1 + 0xd8);
  if ((uVar6 & 1) != 0) {
    puVar12 = (ulong *)(uVar6 + 7);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar12;
      func_0x000109333350();
      lVar8 = uVar6 + lVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar6 = *(ulong *)(param_1 + 0xf0);
  iVar5 = *(int *)(param_1 + 0xf8);
  lVar8 = lVar8 + (long)iVar5 * 2;
  puVar12 = (ulong *)(param_1 + 0xf0);
  if ((uVar6 & 1) != 0) {
    puVar12 = (ulong *)(uVar6 + 7);
  }
  if (iVar5 != 0) {
    lVar13 = (long)iVar5 << 3;
    do {
      uVar6 = *puVar12;
      FUN_109340c2c();
      lVar8 = uVar6 + lVar8 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar13 = lVar13 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0xff) != 0) {
    if ((uVar3 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x108);
      FUN_109333a28();
      lVar8 = lVar8 + lVar13 + (ulong)((int)LZCOUNT((int)lVar13) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x110);
      FUN_109333a28();
      lVar8 = lVar8 + lVar13 + (ulong)((int)LZCOUNT((int)lVar13) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 2 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x118);
      FUN_109334040();
      lVar8 = lVar8 + lVar13 + (ulong)((int)LZCOUNT((int)lVar13) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar3 >> 3 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x120);
      FUN_109334040();
      lVar8 = lVar8 + lVar13 + (ulong)((int)LZCOUNT((int)lVar13) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar3 >> 4 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x128);
      FUN_109334040();
      lVar8 = lVar8 + lVar13 + (ulong)((int)LZCOUNT((int)lVar13) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar3 & 0x20) != 0) {
      lVar8 = lVar8 + 3;
    }
    if ((uVar3 & 0x40) != 0) {
      lVar8 = lVar8 + 3;
    }
    if ((uVar3 >> 7 & 1) != 0) {
      lVar8 = lVar8 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x134)) * -9 + 0x280U >> 6) + 2;
    }
  }
  if ((uVar3 >> 8 & 1) != 0) {
    lVar8 = lVar8 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x138)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar13 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar13 < 0) {
      lVar13 = *(long *)(uVar6 + 0x10);
    }
    lVar8 = lVar13 + lVar8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar8;
  return lVar8;
}



/* Entry: 109336d78; end: 109336d7b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109336d78(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar4) {
      func_0x000107c282d8(param_1 + 0x30);
      iVar3 = *(int *)(param_1 + 0x30);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x38);
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 4);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0x60,param_2 + 0x60);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    func_0x000107c303c4(param_1 + 0x78,param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    func_0x000107c303c4(param_1 + 0x90,param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0xb0) != 0) {
    func_0x000107c303c4(param_1 + 0xa8,param_2 + 0xa8);
  }
  if (*(int *)(param_2 + 200) != 0) {
    func_0x000107c303c4(param_1 + 0xc0,param_2 + 0xc0);
  }
  if (*(int *)(param_2 + 0xe0) != 0) {
    func_0x000107c303c4(param_1 + 0xd8,param_2 + 0xd8);
  }
  if (*(int *)(param_2 + 0xf8) != 0) {
    func_0x000107c303c4(param_1 + 0xf0,param_2 + 0xf0);
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 0xff) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x108) == 0) {
        uVar2 = uVar8;
        FUN_10933b860(uVar8,*(undefined8 *)(param_2 + 0x108));
        *(ulong *)(param_1 + 0x108) = uVar2;
      }
      else {
        FUN_109333ae8();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x110) == 0) {
        uVar2 = uVar8;
        FUN_10933b860(uVar8,*(undefined8 *)(param_2 + 0x110));
        *(ulong *)(param_1 + 0x110) = uVar2;
      }
      else {
        FUN_109333ae8();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x118) == 0) {
        uVar2 = uVar8;
        FUN_10932fda4(uVar8,*(undefined8 *)(param_2 + 0x118));
        *(ulong *)(param_1 + 0x118) = uVar2;
      }
      else {
        FUN_1093340c4();
      }
    }
    if ((uVar7 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == 0) {
        uVar2 = uVar8;
        FUN_10932fda4(uVar8,*(undefined8 *)(param_2 + 0x120));
        *(ulong *)(param_1 + 0x120) = uVar2;
      }
      else {
        FUN_1093340c4();
      }
    }
    if ((uVar7 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x128) == 0) {
        FUN_10932fda4(uVar8,*(undefined8 *)(param_2 + 0x128));
        *(ulong *)(param_1 + 0x128) = uVar8;
      }
      else {
        FUN_1093340c4();
      }
    }
    if ((uVar7 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
    }
    if ((uVar7 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x131) = *(undefined1 *)(param_2 + 0x131);
    }
    if ((uVar7 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    }
  }
  if ((uVar7 >> 8 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
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



/* Entry: 109336d7c; end: 10933702b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109336d7c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303bc(param_1 + 0x18,param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar4) {
      func_0x000107c282d8(param_1 + 0x30);
      iVar3 = *(int *)(param_1 + 0x30);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x38);
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 4);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    func_0x000107c303c4(param_1 + 0x60,param_2 + 0x60);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    func_0x000107c303c4(param_1 + 0x78,param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    func_0x000107c303c4(param_1 + 0x90,param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0xb0) != 0) {
    func_0x000107c303c4(param_1 + 0xa8,param_2 + 0xa8);
  }
  if (*(int *)(param_2 + 200) != 0) {
    func_0x000107c303c4(param_1 + 0xc0,param_2 + 0xc0);
  }
  if (*(int *)(param_2 + 0xe0) != 0) {
    func_0x000107c303c4(param_1 + 0xd8,param_2 + 0xd8);
  }
  if (*(int *)(param_2 + 0xf8) != 0) {
    func_0x000107c303c4(param_1 + 0xf0,param_2 + 0xf0);
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 0xff) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x108) == 0) {
        uVar2 = uVar8;
        FUN_10933b860(uVar8,*(undefined8 *)(param_2 + 0x108));
        *(ulong *)(param_1 + 0x108) = uVar2;
      }
      else {
        FUN_109333ae8();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x110) == 0) {
        uVar2 = uVar8;
        FUN_10933b860(uVar8,*(undefined8 *)(param_2 + 0x110));
        *(ulong *)(param_1 + 0x110) = uVar2;
      }
      else {
        FUN_109333ae8();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x118) == 0) {
        uVar2 = uVar8;
        FUN_10932fda4(uVar8,*(undefined8 *)(param_2 + 0x118));
        *(ulong *)(param_1 + 0x118) = uVar2;
      }
      else {
        FUN_1093340c4();
      }
    }
    if ((uVar7 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == 0) {
        uVar2 = uVar8;
        FUN_10932fda4(uVar8,*(undefined8 *)(param_2 + 0x120));
        *(ulong *)(param_1 + 0x120) = uVar2;
      }
      else {
        FUN_1093340c4();
      }
    }
    if ((uVar7 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x128) == 0) {
        FUN_10932fda4(uVar8,*(undefined8 *)(param_2 + 0x128));
        *(ulong *)(param_1 + 0x128) = uVar8;
      }
      else {
        FUN_1093340c4();
      }
    }
    if ((uVar7 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
    }
    if ((uVar7 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x131) = *(undefined1 *)(param_2 + 0x131);
    }
    if ((uVar7 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    }
  }
  if ((uVar7 >> 8 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
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



/* Entry: 10933702c; end: 10933707f;  */

void FUN_10933702c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aeee58;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  return;
}



/* Entry: 109337080; end: 1093370b3;  */

long FUN_109337080(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x00010933b25c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1093370b4; end: 1093370b7;  */

long FUN_1093370b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x00010933b25c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1093370b8; end: 1093370cb;  */

void FUN_1093370b8(void)

{
  FUN_109337080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093370cc; end: 10933710f;  */

undefined ** FUN_1093370cc(void)

{
  return &PTR_DAT_110aef1f0;
}



/* Entry: 109337110; end: 109337fcf;  */

byte * FUN_109337110(long param_1,byte *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar15 = *(int *)(param_1 + 0x18);
  if (0 < iVar15) {
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
      iVar15 = *(int *)(param_1 + 0x18);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x20);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar15 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar10 = param_2 + iVar15;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_109337794:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109337774:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_109337774;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109337794;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar11 = uVar17;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar5);
          pbVar5 = pbVar3;
          param_2 = pbVar10;
        } while (pbVar3 <= pbVar10);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  iVar15 = *(int *)(param_1 + 0x28);
  if (0 < iVar15) {
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
      iVar15 = *(int *)(param_1 + 0x28);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x12;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x30);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar15 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar10 = param_2 + iVar15;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_1093378a8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109337888:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_109337888;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_1093378a8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar11 = uVar17;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar5);
          pbVar5 = pbVar3;
          param_2 = pbVar10;
        } while (pbVar3 <= pbVar10);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  iVar15 = *(int *)(param_1 + 0x38);
  if (0 < iVar15) {
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
      iVar15 = *(int *)(param_1 + 0x38);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x2a;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x40);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar15 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar10 = param_2 + iVar15;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_1093379bc:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10933799c:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_10933799c;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_1093379bc;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar11 = uVar17;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar5);
          pbVar5 = pbVar3;
          param_2 = pbVar10;
        } while (pbVar3 <= pbVar10);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
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
    uVar1 = *(undefined4 *)(param_1 + 0x88);
    *param_2 = 0x35;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  iVar15 = *(int *)(param_1 + 0x48);
  if (0 < iVar15) {
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
      iVar15 = *(int *)(param_1 + 0x48);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x3a;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x50);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar15 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar10 = param_2 + iVar15;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_109337ad0:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109337ab0:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_109337ab0;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109337ad0;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar11 = uVar17;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar5);
          pbVar5 = pbVar3;
          param_2 = pbVar10;
        } while (pbVar3 <= pbVar10);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  iVar15 = *(int *)(param_1 + 0x58);
  if (0 < iVar15) {
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
      iVar15 = *(int *)(param_1 + 0x58);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x4a;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x60);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar15 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar10 = param_2 + iVar15;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_109337be4:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109337bc4:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_109337bc4;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109337be4;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar11 = uVar17;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar5);
          pbVar5 = pbVar3;
          param_2 = pbVar10;
        } while (pbVar3 <= pbVar10);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  iVar15 = *(int *)(param_1 + 0x68);
  if (0 < iVar15) {
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
      iVar15 = *(int *)(param_1 + 0x68);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x52;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x70);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar15 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar10 = param_2 + iVar15;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_109337cf8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109337cd8:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_109337cd8;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109337cf8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar11 = uVar17;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar5);
          pbVar5 = pbVar3;
          param_2 = pbVar10;
        } while (pbVar3 <= pbVar10);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  iVar15 = *(int *)(param_1 + 0x78);
  if (0 < iVar15) {
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
      iVar15 = *(int *)(param_1 + 0x78);
    }
    uVar12 = iVar15 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x5a;
    uVar4 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar4;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        uVar6 = (uint)uVar4;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar14 = *(long *)(param_1 + 0x80);
    uVar16 = (ulong)(int)uVar12;
    uVar4 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar4 = uVar16,
       (int)pbVar3 < (int)uVar12)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar15 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar15);
        uVar12 = (int)uVar13 - iVar15;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar15;
        pbVar10 = param_2 + iVar15;
        pbVar5 = (byte *)*param_3;
        do {
          param_2 = pbVar11;
          pbVar3 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar11;
          if (param_3[6] == 0) {
LAB_109337e0c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109337dec:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar5;
              param_3[3] = *(long *)(pbVar5 + 8);
              *(undefined8 *)pbVar11 = uVar17;
              param_3[1] = (long)pbVar5;
              goto LAB_109337dec;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar5 - (long)pbVar11);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109337e0c;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar11 = uVar17;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar10 = pbVar8 + ((int)pbVar10 - (int)pbVar5);
          pbVar5 = pbVar3;
          param_2 = pbVar10;
        } while (pbVar3 <= pbVar10);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar16 = (ulong)(int)uVar12;
      uVar4 = uVar16;
    }
    _memcpy(param_2,lVar14,uVar4);
    param_2 = param_2 + uVar16;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar14 = *(long *)(uVar4 + 8);
      uVar13 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar14 = uVar4 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar15 = (int)pbVar3;
          _memcpy(param_2,lVar14,(long)iVar15);
          uVar12 = (int)uVar13 - iVar15;
          uVar13 = (ulong)uVar12;
          lVar14 = lVar14 + iVar15;
          pbVar3 = (byte *)*param_3;
          pbVar11 = param_2 + iVar15;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar14,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar14,uVar13 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109337fd0; end: 10933810b;  */

long FUN_109337fd0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  uVar6 = *(uint *)(param_1 + 0x18);
  lVar14 = 0;
  if (uVar6 != 0) {
    lVar14 = (ulong)((int)LZCOUNT(-((ulong)(uVar6 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar6 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x28);
  lVar1 = 0;
  if (uVar7 != 0) {
    lVar1 = (ulong)((int)LZCOUNT(-((ulong)(uVar7 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar7 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar8 = *(uint *)(param_1 + 0x38);
  lVar2 = 0;
  if (uVar8 != 0) {
    lVar2 = (ulong)((int)LZCOUNT(-((ulong)(uVar8 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar8 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar9 = *(uint *)(param_1 + 0x48);
  lVar3 = 0;
  if (uVar9 != 0) {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar9 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar9 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar10 = *(uint *)(param_1 + 0x58);
  lVar4 = 0;
  if (uVar10 != 0) {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar10 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar10 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar11 = *(uint *)(param_1 + 0x68);
  lVar5 = 0;
  if (uVar11 != 0) {
    lVar5 = (ulong)((int)LZCOUNT(-((ulong)(uVar11 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar11 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar12 = *(uint *)(param_1 + 0x78);
  lVar13 = 0;
  if (uVar12 != 0) {
    lVar13 = (ulong)((int)LZCOUNT(-((ulong)(uVar12 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar12 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar13 = lVar1 + lVar14 + lVar2 + lVar3 + lVar4 + lVar5 +
           ((ulong)uVar7 + (ulong)uVar6 + (ulong)uVar8 + (ulong)uVar9 +
           (ulong)uVar10 + (ulong)uVar11 + (ulong)uVar12) * 4 + lVar13;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar13 = lVar13 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar14 = (long)*(char *)(uVar15 + 0x1f);
    if (lVar14 < 0) {
      lVar14 = *(long *)(uVar15 + 0x10);
    }
    lVar13 = lVar14 + lVar13;
  }
  *(int *)(param_1 + 0x14) = (int)lVar13;
  return lVar13;
}



/* Entry: 10933810c; end: 1093383f7;  */

void FUN_10933810c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x20);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109311970(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x30);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      FUN_109311970(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x40);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      FUN_109311970(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x48);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x48) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x50);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x50) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x5c) < iVar3) {
      FUN_109311970(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x58);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x60);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      FUN_109311970(param_1 + 0x68);
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x70);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x70) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
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
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x80);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x80) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
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



/* Entry: 1093383f8; end: 10933848b;  */

void FUN_1093383f8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110aeed18;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = param_2;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  param_1[0x19] = 0;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_2;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0;
  param_1[0x20] = param_2;
  param_1[0x21] = 0x43f800000;
  return;
}



/* Entry: 10933848c; end: 1093387db;  */

undefined8 * FUN_10933848c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeed18;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_1093118fc(param_1 + 3,param_2,param_3 + 0x18);
  FUN_1093118fc(param_1 + 5,param_2,param_3 + 0x28);
  FUN_1093118fc(param_1 + 7,param_2,param_3 + 0x38);
  FUN_1093118fc(param_1 + 9,param_2,param_3 + 0x48);
  FUN_1093118fc(param_1 + 0xb,param_2,param_3 + 0x58);
  FUN_1093118fc(param_1 + 0xd,param_2,param_3 + 0x68);
  FUN_1093118fc(param_1 + 0xf,param_2,param_3 + 0x78);
  FUN_1093118fc(param_1 + 0x11,param_2,param_3 + 0x88);
  func_0x000109311b24(param_1 + 0x13,param_2,param_3 + 0x98);
  FUN_1093118fc(param_1 + 0x15,param_2,param_3 + 0xa8);
  FUN_1093118fc(param_1 + 0x17,param_2,param_3 + 0xb8);
  FUN_1093118fc(param_1 + 0x19,param_2,param_3 + 200);
  FUN_1093118fc(param_1 + 0x1b,param_2,param_3 + 0xd8);
  FUN_1093118fc(param_1 + 0x1d,param_2,param_3 + 0xe8);
  FUN_1093118fc(param_1 + 0x1f,param_2,param_3 + 0xf8);
  param_1[0x21] = *(undefined8 *)(param_3 + 0x108);
  return param_1;
}



/* Entry: 1093387dc; end: 10933880f;  */

long FUN_1093387dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x00010933b340(param_1 + 0x10);
  return param_1;
}



/* Entry: 109338810; end: 109338813;  */

long FUN_109338810(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x00010933b340(param_1 + 0x10);
  return param_1;
}



/* Entry: 109338814; end: 109338827;  */

void FUN_109338814(void)

{
  FUN_1093387dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109338828; end: 10933889b;  */

undefined ** FUN_109338828(void)

{
  return &PTR_DAT_110aef230;
}



/* Entry: 10933889c; end: 10933a713;  */

byte * FUN_10933889c(long param_1,byte *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x18);
    }
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    uVar15 = uVar13;
    uVar5 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar5 = (uint)uVar15;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0x20);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339534:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339514:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339514;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339534;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0x28);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x28);
    }
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x12;
    uVar15 = uVar13;
    uVar5 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar5 = (uint)uVar15;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0x30);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339648:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339628:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339628;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339648;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0x38);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x38);
    }
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x2a;
    uVar15 = uVar13;
    uVar5 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar5 = (uint)uVar15;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0x40);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_10933975c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10933973c:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_10933973c;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10933975c;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  uVar12 = *(uint *)(param_1 + 0x10);
  if ((uVar12 & 1) != 0) {
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
    uVar1 = *(undefined4 *)(param_1 + 0x108);
    *param_2 = 0x35;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  iVar16 = *(int *)(param_1 + 0x48);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x48);
    }
    uVar5 = iVar16 * 4;
    uVar13 = (ulong)uVar5;
    pbVar3 = param_2 + 1;
    *param_2 = 0x3a;
    uVar15 = uVar13;
    uVar7 = uVar5;
    if (0x7f < uVar5) {
      do {
        param_2 = pbVar3;
        uVar6 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar7 = (uint)uVar15;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar7;
    lVar14 = *(long *)(param_1 + 0x50);
    uVar17 = (ulong)(int)uVar5;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar5) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar5)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar5 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar5;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339870:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339850:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339850;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339870;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar5);
      uVar17 = (ulong)(int)uVar5;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0x58);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x58);
    }
    uVar5 = iVar16 * 4;
    uVar13 = (ulong)uVar5;
    pbVar3 = param_2 + 1;
    *param_2 = 0x42;
    uVar15 = uVar13;
    uVar7 = uVar5;
    if (0x7f < uVar5) {
      do {
        param_2 = pbVar3;
        uVar6 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar7 = (uint)uVar15;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar7;
    lVar14 = *(long *)(param_1 + 0x60);
    uVar17 = (ulong)(int)uVar5;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar5) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar5)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar5 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar5;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339984:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339964:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339964;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339984;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar5);
      uVar17 = (ulong)(int)uVar5;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0x68);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x68);
    }
    uVar5 = iVar16 * 4;
    uVar13 = (ulong)uVar5;
    pbVar3 = param_2 + 1;
    *param_2 = 0x4a;
    uVar15 = uVar13;
    uVar7 = uVar5;
    if (0x7f < uVar5) {
      do {
        param_2 = pbVar3;
        uVar6 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar7 = (uint)uVar15;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar7;
    lVar14 = *(long *)(param_1 + 0x70);
    uVar17 = (ulong)(int)uVar5;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar5) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar5)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar5 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar5;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339a98:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339a78:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339a78;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339a98;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar5);
      uVar17 = (ulong)(int)uVar5;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0x78);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x78);
    }
    uVar5 = iVar16 * 4;
    uVar13 = (ulong)uVar5;
    pbVar3 = param_2 + 1;
    *param_2 = 0x52;
    uVar15 = uVar13;
    uVar7 = uVar5;
    if (0x7f < uVar5) {
      do {
        param_2 = pbVar3;
        uVar6 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar7 = (uint)uVar15;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar7;
    lVar14 = *(long *)(param_1 + 0x80);
    uVar17 = (ulong)(int)uVar5;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar5) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar5)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar5 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar5;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339bac:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339b8c:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339b8c;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339bac;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar5);
      uVar17 = (ulong)(int)uVar5;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  if ((uVar12 >> 1 & 1) != 0) {
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
    uVar12 = *(uint *)(param_1 + 0x10c);
    uVar13 = (ulong)(int)uVar12;
    pbVar10 = param_2 + 1;
    *param_2 = 0x58;
    uVar15 = uVar13;
    pbVar3 = pbVar10;
    if (0x7f < uVar12) {
      do {
        pbVar10 = pbVar3 + 1;
        *pbVar3 = (byte)uVar15 | 0x80;
        uVar13 = uVar15 >> 7;
        uVar17 = uVar15 >> 0xe;
        uVar15 = uVar13;
        pbVar3 = pbVar10;
      } while (uVar17 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar13;
  }
  iVar16 = *(int *)(param_1 + 0x88);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x88);
    }
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x62;
    uVar15 = uVar13;
    uVar5 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar5 = (uint)uVar15;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0x90);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339cc0:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339ca0:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339ca0;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339cc0;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  uVar12 = *(uint *)(param_1 + 0x98);
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
      uVar12 = *(uint *)(param_1 + 0x98);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x6a;
    uVar5 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar5 | 0x80;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar5 >> 7;
      } while (uVar7 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0xa0);
    uVar15 = (ulong)(int)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      uVar13 = uVar15;
      if ((int)pbVar3 < (int)uVar12) {
        pbVar10 = (byte *)(param_3 + 2);
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar14,(long)iVar16);
          uVar12 = uVar12 - iVar16;
          lVar14 = lVar14 + iVar16;
          pbVar11 = param_2 + iVar16;
          pbVar4 = (byte *)*param_3;
          do {
            param_2 = pbVar10;
            pbVar3 = pbVar4;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            pbVar8 = pbVar10;
            if (param_3[6] == 0) {
LAB_109339dd4:
              *(undefined1 *)(param_3 + 7) = 1;
LAB_109339db4:
              *param_3 = (long)(param_3 + 4);
              pbVar3 = (byte *)(param_3 + 4);
            }
            else {
              if (param_3[1] == 0) {
                uVar18 = *(undefined8 *)pbVar4;
                param_3[3] = *(long *)(pbVar4 + 8);
                *(undefined8 *)pbVar10 = uVar18;
                param_3[1] = (long)pbVar4;
                goto LAB_109339db4;
              }
              _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
              do {
                plVar2 = (long *)param_3[6];
                (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
                if (((ulong)plVar2 & 1) == 0) goto LAB_109339dd4;
              } while (uStack_64 == 0);
              puVar9 = (undefined8 *)*param_3;
              if ((int)uStack_64 < 0x11) {
                uVar18 = *puVar9;
                param_3[3] = puVar9[1];
                *(undefined8 *)pbVar10 = uVar18;
                *param_3 = (long)(pbVar10 + (int)uStack_64);
                param_3[1] = (long)pbStack_70;
                pbVar3 = pbVar10 + (int)uStack_64;
              }
              else {
                uVar18 = *puVar9;
                *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
                *(undefined8 *)pbStack_70 = uVar18;
                *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
                param_3[1] = 0;
                pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar8 = pbStack_70;
              }
            }
            pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
            pbVar4 = pbVar3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
        uVar13 = (ulong)(int)uVar12;
        uVar15 = uVar13;
      }
    }
    else {
      uVar13 = (ulong)uVar12;
    }
    _memcpy(param_2,lVar14,uVar13);
    param_2 = param_2 + uVar15;
  }
  iVar16 = *(int *)(param_1 + 0xa8);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0xa8);
    }
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x72;
    uVar15 = uVar13;
    uVar5 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar5 = (uint)uVar15;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0xb0);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339ee8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339ec8:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339ec8;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339ee8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0xb8);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0xb8);
    }
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    pbVar3 = param_2 + 1;
    *param_2 = 0x7a;
    uVar15 = uVar13;
    uVar5 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        uVar5 = (uint)uVar15;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0xc0);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109339ffc:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109339fdc:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109339fdc;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109339ffc;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 200);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 200);
    }
    pbVar3 = param_2 + 2;
    param_2[0] = 0x82;
    param_2[1] = 1;
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    uVar15 = uVar13;
    if (uVar12 < 0x80) {
      param_2 = param_2 + 1;
      uVar5 = uVar12;
    }
    else {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar5 = (uint)(uVar15 >> 7);
        uVar15 = uVar15 >> 7;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0xd0);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_10933a110:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10933a0f0:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_10933a0f0;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10933a110;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0xd8);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0xd8);
    }
    pbVar3 = param_2 + 2;
    param_2[0] = 0x8a;
    param_2[1] = 1;
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    uVar15 = uVar13;
    if (uVar12 < 0x80) {
      param_2 = param_2 + 1;
      uVar5 = uVar12;
    }
    else {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar5 = (uint)(uVar15 >> 7);
        uVar15 = uVar15 >> 7;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0xe0);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_10933a224:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10933a204:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_10933a204;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10933a224;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0xe8);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0xe8);
    }
    pbVar3 = param_2 + 2;
    param_2[0] = 0x92;
    param_2[1] = 1;
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    uVar15 = uVar13;
    if (uVar12 < 0x80) {
      param_2 = param_2 + 1;
      uVar5 = uVar12;
    }
    else {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar5 = (uint)(uVar15 >> 7);
        uVar15 = uVar15 >> 7;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0xf0);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_10933a338:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10933a318:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_10933a318;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10933a338;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  iVar16 = *(int *)(param_1 + 0xf8);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0xf8);
    }
    pbVar3 = param_2 + 2;
    param_2[0] = 0x9a;
    param_2[1] = 1;
    uVar12 = iVar16 * 4;
    uVar13 = (ulong)uVar12;
    uVar15 = uVar13;
    if (uVar12 < 0x80) {
      param_2 = param_2 + 1;
      uVar5 = uVar12;
    }
    else {
      do {
        param_2 = pbVar3;
        uVar7 = (uint)uVar15;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar15 | 0x80;
        uVar5 = (uint)(uVar15 >> 7);
        uVar15 = uVar15 >> 7;
      } while (uVar7 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar14 = *(long *)(param_1 + 0x100);
    uVar17 = (ulong)(int)uVar12;
    uVar15 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar15 = uVar17,
       (int)pbVar3 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar3;
        _memcpy(param_2,lVar14,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar14 = lVar14 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_10933a44c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10933a42c:
            *param_3 = (long)(param_3 + 4);
            pbVar3 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_10933a42c;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10933a44c;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar3 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar3;
          param_2 = pbVar11;
        } while (pbVar3 <= pbVar11);
        pbVar3 = pbVar3 + (0x10 - (long)param_2);
      } while ((int)pbVar3 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar15 = uVar17;
    }
    _memcpy(param_2,lVar14,uVar15);
    param_2 = param_2 + uVar17;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar14 = *(long *)(uVar15 + 8);
      uVar13 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar14 = uVar15 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar14,(long)iVar16);
          uVar12 = (int)uVar13 - iVar16;
          uVar13 = (ulong)uVar12;
          lVar14 = lVar14 + iVar16;
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
      _memcpy(param_2,lVar14,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar14,uVar13 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 10933a714; end: 10933aa93;  */

long FUN_10933a714(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    uStack_68 = 0;
  }
  else {
    uStack_68 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                     ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 == 0) {
    uStack_70 = 0;
  }
  else {
    uStack_70 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                                     ((ulong)uVar2 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x38);
  if (uVar3 == 0) {
    uStack_78 = 0;
  }
  else {
    uStack_78 = (ulong)((int)LZCOUNT(-((ulong)(uVar3 >> 0x1d) & 1) & 0xffffffff00000000 |
                                     ((ulong)uVar3 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  if (uVar4 == 0) {
    uStack_80 = 0;
  }
  else {
    uStack_80 = (ulong)((int)LZCOUNT(-((ulong)(uVar4 >> 0x1d) & 1) & 0xffffffff00000000 |
                                     ((ulong)uVar4 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar5 = *(uint *)(param_1 + 0x58);
  if (uVar5 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = (ulong)((int)LZCOUNT(-((ulong)(uVar5 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar5 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar6 = *(uint *)(param_1 + 0x68);
  if (uVar6 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = (ulong)((int)LZCOUNT(-((ulong)(uVar6 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar6 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar7 = *(uint *)(param_1 + 0x78);
  if (uVar7 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = (ulong)((int)LZCOUNT(-((ulong)(uVar7 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar7 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar8 = *(uint *)(param_1 + 0x88);
  if (uVar8 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = (ulong)((int)LZCOUNT(-((ulong)(uVar8 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar8 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar9 = *(uint *)(param_1 + 0x98);
  if (uVar9 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = (ulong)((int)LZCOUNT((long)(int)uVar9) * -9 + 0x280U >> 6) + 1;
  }
  uVar10 = *(uint *)(param_1 + 0xa8);
  if (uVar10 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = (ulong)((int)LZCOUNT(-((ulong)(uVar10 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar10 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar11 = *(uint *)(param_1 + 0xb8);
  if (uVar11 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = (ulong)((int)LZCOUNT(-((ulong)(uVar11 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar11 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  uVar12 = *(uint *)(param_1 + 200);
  if (uVar12 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = (ulong)((int)LZCOUNT(-((ulong)(uVar12 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar12 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 2;
  }
  uVar13 = *(uint *)(param_1 + 0xd8);
  if (uVar13 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = (ulong)((int)LZCOUNT(-((ulong)(uVar13 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar13 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 2;
  }
  uVar14 = *(uint *)(param_1 + 0xe8);
  if (uVar14 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = (ulong)((int)LZCOUNT(-((ulong)(uVar14 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar14 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 2;
  }
  uVar15 = *(uint *)(param_1 + 0xf8);
  lVar19 = 0;
  if (uVar15 != 0) {
    lVar19 = (ulong)((int)LZCOUNT(-((ulong)(uVar15 >> 0x1d) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar15 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 2;
  }
  lVar19 = uStack_70 + uStack_68 + uStack_78 + uStack_80 + lVar20 + lVar16 + lVar17 + lVar18 +
           (ulong)uVar9 + lVar23 + lVar24 + lVar25 + lVar26 + lVar27 + lVar21 +
           ((ulong)uVar2 + (ulong)uVar1 + (ulong)uVar3 + (ulong)uVar4 +
            (ulong)uVar5 + (ulong)uVar6 + (ulong)uVar7 +
            (ulong)uVar8 + (ulong)uVar10 + (ulong)uVar11 + (ulong)uVar12 +
           (ulong)uVar13 + (ulong)uVar14 + (ulong)uVar15) * 4 + lVar19;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar19 = lVar19 + 5;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar19 = lVar19 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10c)) * -9 + 0x280U >> 6) +
               1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar22 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar20 = (long)*(char *)(uVar22 + 0x1f);
    if (lVar20 < 0) {
      lVar20 = *(long *)(uVar22 + 0x10);
    }
    lVar19 = lVar20 + lVar19;
  }
  *(int *)(param_1 + 0x14) = (int)lVar19;
  return lVar19;
}



/* Entry: 10933aa94; end: 10933aa97;  */

void FUN_10933aa94(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
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
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109311970(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x30);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      FUN_109311970(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x40);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar2 * 4);
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
      FUN_109311970(param_1 + 0x48);
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
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x5c) < iVar3) {
      FUN_109311970(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x58);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x60);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      FUN_109311970(param_1 + 0x68);
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x70);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x70) + (long)iVar2 * 4);
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
  iVar1 = *(int *)(param_2 + 0x88);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x88);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x8c) < iVar3) {
      FUN_109311970(param_1 + 0x88);
      iVar2 = *(int *)(param_1 + 0x88);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x88) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x90);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x98);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      FUN_109311b98(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x98);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x98) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar4 = *(undefined1 **)(param_2 + 0xa0);
      puVar6 = (undefined1 *)(*(long *)(param_1 + 0xa0) + (long)iVar2);
      do {
        *puVar6 = *puVar4;
        uVar8 = uVar8 - 1;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xa8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xac) < iVar3) {
      FUN_109311970(param_1 + 0xa8);
      iVar2 = *(int *)(param_1 + 0xa8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xa8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xb0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xb0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xb8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xbc) < iVar3) {
      FUN_109311970(param_1 + 0xb8);
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xb8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xc0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 200);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 200);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xcc) < iVar3) {
      FUN_109311970(param_1 + 200);
      iVar2 = *(int *)(param_1 + 200);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 200) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xd0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xd0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xd8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xdc) < iVar3) {
      FUN_109311970(param_1 + 0xd8);
      iVar2 = *(int *)(param_1 + 0xd8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xd8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xe0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xe0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xe8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xe8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xec) < iVar3) {
      FUN_109311970(param_1 + 0xe8);
      iVar2 = *(int *)(param_1 + 0xe8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xe8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xf0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xf0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xf8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xf8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xfc) < iVar3) {
      FUN_109311970(param_1 + 0xf8);
      iVar2 = *(int *)(param_1 + 0xf8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xf8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x100);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x100) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 3) != 0) {
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
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



/* Entry: 10933aa98; end: 10933b077;  */

void FUN_10933aa98(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
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
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109311970(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x30);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      FUN_109311970(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x40);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar2 * 4);
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
      FUN_109311970(param_1 + 0x48);
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
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x5c) < iVar3) {
      FUN_109311970(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x58);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x60);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      FUN_109311970(param_1 + 0x68);
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x70);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x70) + (long)iVar2 * 4);
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
  iVar1 = *(int *)(param_2 + 0x88);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x88);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x8c) < iVar3) {
      FUN_109311970(param_1 + 0x88);
      iVar2 = *(int *)(param_1 + 0x88);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x88) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x90);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x98);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      FUN_109311b98(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x98);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x98) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar4 = *(undefined1 **)(param_2 + 0xa0);
      puVar6 = (undefined1 *)(*(long *)(param_1 + 0xa0) + (long)iVar2);
      do {
        *puVar6 = *puVar4;
        uVar8 = uVar8 - 1;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xa8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xac) < iVar3) {
      FUN_109311970(param_1 + 0xa8);
      iVar2 = *(int *)(param_1 + 0xa8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xa8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xb0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xb0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xb8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xbc) < iVar3) {
      FUN_109311970(param_1 + 0xb8);
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xb8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xc0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 200);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 200);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xcc) < iVar3) {
      FUN_109311970(param_1 + 200);
      iVar2 = *(int *)(param_1 + 200);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 200) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xd0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xd0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xd8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xdc) < iVar3) {
      FUN_109311970(param_1 + 0xd8);
      iVar2 = *(int *)(param_1 + 0xd8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xd8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xe0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xe0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xe8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xe8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xec) < iVar3) {
      FUN_109311970(param_1 + 0xe8);
      iVar2 = *(int *)(param_1 + 0xe8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xe8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xf0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xf0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xf8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xf8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xfc) < iVar3) {
      FUN_109311970(param_1 + 0xf8);
      iVar2 = *(int *)(param_1 + 0xf8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xf8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x100);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x100) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 3) != 0) {
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
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



/* Entry: 10933b078; end: 10933b0af;  */

void FUN_10933b078(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000109338834();
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
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
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      FUN_109311970(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x30);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      FUN_109311970(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x40);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar2 * 4);
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
      FUN_109311970(param_1 + 0x48);
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
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x5c) < iVar3) {
      FUN_109311970(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x58);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x60);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x6c) < iVar3) {
      FUN_109311970(param_1 + 0x68);
      iVar2 = *(int *)(param_1 + 0x68);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x70);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x70) + (long)iVar2 * 4);
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
  iVar1 = *(int *)(param_2 + 0x88);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x88);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x8c) < iVar3) {
      FUN_109311970(param_1 + 0x88);
      iVar2 = *(int *)(param_1 + 0x88);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x88) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x90);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x98);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x9c) < iVar3) {
      FUN_109311b98(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x98);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x98) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar4 = *(undefined1 **)(param_2 + 0xa0);
      puVar6 = (undefined1 *)(*(long *)(param_1 + 0xa0) + (long)iVar2);
      do {
        *puVar6 = *puVar4;
        uVar8 = uVar8 - 1;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xa8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xac) < iVar3) {
      FUN_109311970(param_1 + 0xa8);
      iVar2 = *(int *)(param_1 + 0xa8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xa8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xb0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xb0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xb8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xbc) < iVar3) {
      FUN_109311970(param_1 + 0xb8);
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xb8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xc0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 200);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 200);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xcc) < iVar3) {
      FUN_109311970(param_1 + 200);
      iVar2 = *(int *)(param_1 + 200);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 200) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xd0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xd0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xd8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xdc) < iVar3) {
      FUN_109311970(param_1 + 0xd8);
      iVar2 = *(int *)(param_1 + 0xd8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xd8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xe0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xe0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xe8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xe8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xec) < iVar3) {
      FUN_109311970(param_1 + 0xe8);
      iVar2 = *(int *)(param_1 + 0xe8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xe8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0xf0);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xf0) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0xf8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xf8);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0xfc) < iVar3) {
      FUN_109311970(param_1 + 0xf8);
      iVar2 = *(int *)(param_1 + 0xf8);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0xf8) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x100);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x100) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 3) != 0) {
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
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



/* Entry: 10933b0b0; end: 10933b107;  */

void FUN_10933b0b0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110aeec78;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10933b108; end: 10933b13b;  */

long * FUN_10933b108(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10933b13c; end: 10933b16f;  */

long * FUN_10933b13c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10933b170; end: 10933b1a3;  */

long * FUN_10933b170(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10933b1a4; end: 10933b1d7;  */

long * FUN_10933b1a4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10933b1d8; end: 10933b85f;  */

long FUN_10933b1d8(long param_1)

{
  FUN_109311e74(param_1 + 0xe0);
  FUN_10933b13c(param_1 + 200);
  FUN_10933b108(param_1 + 0xb0);
  FUN_10932e36c(param_1 + 0x98);
  FUN_10932e304(param_1 + 0x80);
  FUN_10933b108(param_1 + 0x68);
  FUN_10933b170(param_1 + 0x50);
  FUN_10933b1a4(param_1 + 0x38);
  if (0 < *(int *)(param_1 + 0x24)) {
    if (*(long *)(*(long *)(param_1 + 0x28) + -8) == 0) {
      __ZdlPv();
    }
  }
  func_0x000107c282b4(param_1 + 8);
  return param_1;
}



/* Entry: 10933b860; end: 10933b927;  */

undefined8 * FUN_10933b860(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110aeed68;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_1093118fc(puVar1 + 3,param_1,param_2 + 0x18);
  FUN_1093118fc(puVar1 + 5,param_1,param_2 + 0x28);
  puVar1[7] = *(undefined8 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 10933b928; end: 10933b973;  */

void FUN_10933b928(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
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



/* Entry: 10933b974; end: 10933b9cf;  */

undefined8 * FUN_10933b974(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aef4d8;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10933b928(param_1,param_3);
  return param_1;
}



/* Entry: 10933b9d0; end: 10933ba27;  */

long FUN_10933b9d0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10933ba28; end: 10933ba57;  */

undefined ** FUN_10933ba28(void)

{
  return &PTR_DAT_110aef6f8;
}



/* Entry: 10933ba58; end: 10933bbb3;  */

long * FUN_10933ba58(long param_1,long *param_2,long *param_3)

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
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x1c),plVar1);
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



/* Entry: 10933bbb4; end: 10933bc9f;  */

ulong FUN_10933bbb4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10933bca0; end: 10933bcf7;  */

long FUN_10933bca0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 10933bcf8; end: 10933bd2b;  */

undefined ** FUN_10933bcf8(void)

{
  return &PTR_DAT_110aef728;
}



/* Entry: 10933bd2c; end: 10933beab;  */

long * FUN_10933bd2c(long param_1,long *param_2,long *param_3)

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
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
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



/* Entry: 10933beac; end: 10933bf4f;  */

ulong FUN_10933beac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10933bf50; end: 10933bf83;  */

long FUN_10933bf50(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109311f44(param_1 + 0x10);
  return param_1;
}



/* Entry: 10933bf84; end: 10933bf87;  */

long FUN_10933bf84(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109311f44(param_1 + 0x10);
  return param_1;
}



/* Entry: 10933bf88; end: 10933bf9b;  */

void FUN_10933bf88(void)

{
  FUN_10933bf50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



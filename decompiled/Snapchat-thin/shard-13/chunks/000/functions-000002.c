/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109cc799c; end: 109cc799f;  */

void FUN_109cc799c(long param_1,long param_2)

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



/* Entry: 109cc79a0; end: 109cc7a3b;  */

void FUN_109cc79a0(long param_1,long param_2)

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



/* Entry: 109cc7a3c; end: 109cc7a3f;  */

long FUN_109cc7a3c(long param_1)

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



/* Entry: 109cc7a40; end: 109cc7a53;  */

void FUN_109cc7a40(void)

{
  func_0x000109cc79f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc7a54; end: 109cc7a73;  */

undefined ** FUN_109cc7a54(void)

{
  return &PTR_DAT_110b3b298;
}



/* Entry: 109cc7a74; end: 109cc7d7f;  */

byte * FUN_109cc7a74(long param_1,byte *param_2,long *param_3)

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
LAB_109cc7c6c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cc7c4c:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109cc7c4c;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109cc7c6c;
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



/* Entry: 109cc7d80; end: 109cc7dd7;  */

long FUN_109cc7d80(long param_1)

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



/* Entry: 109cc7dd8; end: 109cc7e7f;  */

void FUN_109cc7dd8(long param_1,long param_2)

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
      func_0x000109340710(param_1 + 0x10);
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



/* Entry: 109cc7e80; end: 109cc7eb3;  */

long FUN_109cc7e80(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109cca160(param_1 + 0x10);
  return param_1;
}



/* Entry: 109cc7eb4; end: 109cc7eb7;  */

long FUN_109cc7eb4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109cca160(param_1 + 0x10);
  return param_1;
}



/* Entry: 109cc7eb8; end: 109cc7ecb;  */

void FUN_109cc7eb8(void)

{
  FUN_109cc7e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc7ecc; end: 109cc7ed7;  */

undefined ** FUN_109cc7ecc(void)

{
  return &PTR_DAT_110b3b2e0;
}



/* Entry: 109cc7ed8; end: 109cc7f1f;  */

void FUN_109cc7ed8(long param_1)

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



/* Entry: 109cc7f20; end: 109cc813b;  */

long * FUN_109cc7f20(long param_1,long *param_2,long *param_3)

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



/* Entry: 109cc813c; end: 109cc813f;  */

void FUN_109cc813c(long param_1,long param_2)

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



/* Entry: 109cc8140; end: 109cc81db;  */

void FUN_109cc8140(long param_1,long param_2)

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



/* Entry: 109cc81dc; end: 109cc81df;  */

long FUN_109cc81dc(long param_1)

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



/* Entry: 109cc81e0; end: 109cc81f3;  */

void FUN_109cc81e0(void)

{
  func_0x000109cc8194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc81f4; end: 109cc8213;  */

undefined ** FUN_109cc81f4(void)

{
  return &PTR_DAT_110b3b330;
}



/* Entry: 109cc8214; end: 109cc851f;  */

byte * FUN_109cc8214(long param_1,byte *param_2,long *param_3)

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
LAB_109cc840c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cc83ec:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar12 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109cc83ec;
            }
            _memcpy(param_3[1],pbVar12,(long)pbVar4 - (long)pbVar12);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109cc840c;
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



/* Entry: 109cc8520; end: 109cc857b;  */

long FUN_109cc8520(long param_1)

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



/* Entry: 109cc857c; end: 109cc8623;  */

void FUN_109cc857c(long param_1,long param_2)

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
      func_0x000109340710(param_1 + 0x10);
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



/* Entry: 109cc8624; end: 109cc86af;  */

void FUN_109cc8624(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x38) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_109cc8680;
    FUN_109cc7e80();
  }
  else {
    if (*(int *)(param_1 + 0x38) != 2) goto LAB_109cc8680;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_109cc8680;
    func_0x000109cc76e0();
  }
  __ZdlPv();
LAB_109cc8680:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 109cc86b0; end: 109cc8787;  */

undefined8 * FUN_109cc86b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3afe0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x38);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000109cca838(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000109cca91c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  if (*(int *)(param_1 + 7) == 3) {
    func_0x000109ccaa30(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  else {
    if (*(int *)(param_1 + 7) != 2) {
      return param_1;
    }
    func_0x000109cca9a0(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 109cc8788; end: 109cc87e3;  */

long FUN_109cc8788(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109cc6c1c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109cc8194();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_109cc8624(param_1);
  }
  return param_1;
}



/* Entry: 109cc87e4; end: 109cc87e7;  */

long FUN_109cc87e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109cc6c1c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109cc8194();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_109cc8624(param_1);
  }
  return param_1;
}



/* Entry: 109cc87e8; end: 109cc87fb;  */

void FUN_109cc87e8(void)

{
  FUN_109cc8788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc87fc; end: 109cc8807;  */

undefined ** FUN_109cc87fc(void)

{
  return &PTR_DAT_110b3b378;
}



/* Entry: 109cc8808; end: 109cc886f;  */

void FUN_109cc8808(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109cc6c7c(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109cc8200(*(undefined8 *)(param_1 + 0x20));
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_109cc8624(param_1);
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



/* Entry: 109cc8870; end: 109cc8a6b;  */

long * FUN_109cc8870(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  ulong uStack_48;
  undefined1 *puVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  plVar1 = param_2;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),param_2,param_3);
  }
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x38);
  if ((*(uint *)(param_1 + 0x38) & 0xfffffffe) == 2) {
    func_0x000107c303cc(plVar2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x28),plVar1,param_3);
    plVar1 = plVar2;
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),plVar1,param_3);
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
    plVar1 = (long *)*param_3;
    if (plVar1 <= plVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar2 = (long *)((long)plVar4 + (long)((int)plVar2 - (int)plVar1));
        plVar1 = (long *)*param_3;
      } while (plVar1 <= plVar2);
      lVar8 = *(long *)(param_1 + 0x28);
    }
    *(undefined1 *)plVar2 = 0x29;
    *(long *)((long)plVar2 + 1) = lVar8;
    plVar2 = (long *)((long)plVar2 + 9);
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
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar2) + 0x10);
      if ((int)puVar7 < (int)uVar3) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(plVar2,lVar8,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lVar8 = lVar8 + iVar6;
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
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar2));
        } while ((int)puVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lVar8,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lVar8,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 109cc8a6c; end: 109cc8b83;  */

long FUN_109cc8a6c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109cc6e10();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109cc8520();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = lVar4 + 9;
  }
  if (*(int *)(param_1 + 0x38) == 3) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x000109cc8094();
  }
  else {
    if (*(int *)(param_1 + 0x38) != 2) goto LAB_109cc8b4c;
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x000109cc78f4();
  }
  lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
LAB_109cc8b4c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109cc8b84; end: 109cc8b87;  */

void FUN_109cc8b84(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar5 = uVar6;
        func_0x000109cca838(uVar6,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
      }
      else {
        FUN_109cc6f30();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar5 = uVar6;
        func_0x000109cca91c(uVar6,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar5;
      }
      else {
        FUN_109cc857c();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x38);
  if (iVar3 == 0) goto LAB_109cc8cd0;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_109cc8624(param_1);
    }
    *(int *)(param_1 + 0x38) = iVar3;
  }
  if (iVar3 == 3) {
    if (iVar4 == 3) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x38) != 3) {
        ppuVar1 = &PTR_PTR_1132fd298;
      }
      FUN_109cc8140(*(undefined8 *)(param_1 + 0x30),ppuVar1);
      goto LAB_109cc8cd0;
    }
    func_0x000109ccaa30(uVar6,*(undefined8 *)(param_2 + 0x30));
  }
  else {
    if (iVar3 != 2) goto LAB_109cc8cd0;
    if (iVar4 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x38) != 2) {
        ppuVar1 = &PTR_PTR_1132fd2c8;
      }
      FUN_109cc79a0(*(undefined8 *)(param_1 + 0x30),ppuVar1);
      goto LAB_109cc8cd0;
    }
    func_0x000109cca9a0(uVar6,*(undefined8 *)(param_2 + 0x30));
  }
  *(ulong *)(param_1 + 0x30) = uVar6;
LAB_109cc8cd0:
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



/* Entry: 109cc8b88; end: 109cc8d17;  */

void FUN_109cc8b88(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar5 = uVar6;
        func_0x000109cca838(uVar6,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
      }
      else {
        FUN_109cc6f30();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar5 = uVar6;
        func_0x000109cca91c(uVar6,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar5;
      }
      else {
        FUN_109cc857c();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x38);
  if (iVar3 == 0) goto LAB_109cc8cd0;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_109cc8624(param_1);
    }
    *(int *)(param_1 + 0x38) = iVar3;
  }
  if (iVar3 == 3) {
    if (iVar4 == 3) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x38) != 3) {
        ppuVar1 = &PTR_PTR_1132fd298;
      }
      FUN_109cc8140(*(undefined8 *)(param_1 + 0x30),ppuVar1);
      goto LAB_109cc8cd0;
    }
    func_0x000109ccaa30(uVar6,*(undefined8 *)(param_2 + 0x30));
  }
  else {
    if (iVar3 != 2) goto LAB_109cc8cd0;
    if (iVar4 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x38) != 2) {
        ppuVar1 = &PTR_PTR_1132fd2c8;
      }
      FUN_109cc79a0(*(undefined8 *)(param_1 + 0x30),ppuVar1);
      goto LAB_109cc8cd0;
    }
    func_0x000109cca9a0(uVar6,*(undefined8 *)(param_2 + 0x30));
  }
  *(ulong *)(param_1 + 0x30) = uVar6;
LAB_109cc8cd0:
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



/* Entry: 109cc8d18; end: 109cc8e2f;  */

void FUN_109cc8d18(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x90) == 4) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x80) == 0)) goto LAB_109cc8d74;
    FUN_109cc7e80();
  }
  else {
    if (*(int *)(param_1 + 0x90) != 3) goto LAB_109cc8d74;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x80) == 0)) goto LAB_109cc8d74;
    func_0x000109cc76e0();
  }
  __ZdlPv();
LAB_109cc8d74:
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 109cc8e30; end: 109cc9007;  */

undefined8 * FUN_109cc8e30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3b030;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000109311ab0(param_1 + 3,param_2,param_3 + 0x18);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (*(int *)(param_3 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 6,param_3 + 0x30);
  }
  func_0x00010934069c(param_1 + 9,param_2,param_3 + 0x48);
  func_0x00010934069c(param_1 + 0xb,param_2,param_3 + 0x58);
  func_0x00010934069c(param_1 + 0xd,param_2,param_3 + 0x68);
  iVar2 = *(int *)(param_3 + 0x90);
  *(int *)(param_1 + 0x12) = iVar2;
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(param_3 + 0x94);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000109cca838(param_2,*(undefined8 *)(param_3 + 0x78));
    iVar2 = *(int *)(param_1 + 0x12);
  }
  param_1[0xf] = uVar1;
  uVar1 = param_2;
  if (iVar2 == 4) {
    func_0x000109ccaa30(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  else {
    if (iVar2 != 3) goto LAB_109cc8f40;
    func_0x000109cca9a0(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar1;
LAB_109cc8f40:
  if (*(int *)((long)param_1 + 0x94) == 0x65) {
    func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  else {
    if (*(int *)((long)param_1 + 0x94) != 100) {
      return param_1;
    }
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = param_2;
  return param_1;
}



/* Entry: 109cc9008; end: 109cc903f;  */

long FUN_109cc9008(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109cc9040(param_1);
  return param_1;
}



/* Entry: 109cc9040; end: 109cc910b;  */

void FUN_109cc9040(long param_1)

{
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x000109cc6c1c();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_109cc8d18(param_1);
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    func_0x000109cc8da4(param_1);
  }
  if (0 < *(int *)(param_1 + 0x6c)) {
    if (*(long *)(*(long *)(param_1 + 0x70) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x5c)) {
    if (*(long *)(*(long *)(param_1 + 0x60) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    if (*(long *)(*(long *)(param_1 + 0x50) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109cca194(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 109cc910c; end: 109cc910f;  */

long FUN_109cc910c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109cc9040(param_1);
  return param_1;
}



/* Entry: 109cc9110; end: 109cc9123;  */

void FUN_109cc9110(void)

{
  FUN_109cc9008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cc9124; end: 109cc912f;  */

undefined ** FUN_109cc9124(void)

{
  return &PTR_DAT_110b3b3c8;
}



/* Entry: 109cc9130; end: 109cc91ab;  */

void FUN_109cc9130(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109cc6c7c(*(undefined8 *)(param_1 + 0x78));
  }
  FUN_109cc8d18(param_1);
  func_0x000109cc8da4(param_1);
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



/* Entry: 109cc91ac; end: 109cc9af7;  */

byte * FUN_109cc91ac(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar2 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x18),param_2,param_3);
  }
  uVar13 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= pbVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        pbVar2 = (byte *)((long)plVar3 + (long)((int)pbVar2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= pbVar2);
    }
    pbVar4 = pbVar2 + 1;
    *pbVar2 = 0x12;
    if (0x7f < uVar13) {
      do {
        pbVar2 = pbVar4;
        pbVar4 = pbVar2 + 1;
        *pbVar2 = (byte)uVar13 | 0x80;
        uVar8 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar8 != 0);
    }
    pbVar2 = pbVar2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar15 = *(uint **)(param_1 + 0x20);
    iVar19 = *(int *)(param_1 + 0x18);
    pbVar4 = (byte *)(param_3 + 2);
    puVar16 = puVar15;
    do {
      pbVar11 = pbVar2;
      pbVar12 = (byte *)*param_3;
      if ((byte *)*param_3 <= pbVar2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cc9290:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cc9328:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar21 = *(undefined8 *)pbVar12;
              param_3[3] = *(long *)(pbVar12 + 8);
              *(undefined8 *)pbVar4 = uVar21;
              param_3[1] = (long)pbVar12;
              goto LAB_109cc9328;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar12 - (long)pbVar4);
            do {
              plVar3 = (long *)param_3[6];
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109cc9290;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar4 = uVar21;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar21;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar2 = pbVar11 + ((int)pbVar2 - (int)pbVar12);
          pbVar11 = pbVar2;
          pbVar12 = pbVar7;
        } while (pbVar7 <= pbVar2);
      }
      puVar17 = puVar16 + 1;
      uVar5 = (ulong)(int)*puVar16;
      uVar6 = uVar5;
      pbVar2 = pbVar11;
      if (0x7f < *puVar16) {
        do {
          pbVar11 = pbVar2 + 1;
          *pbVar2 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar20 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar2 = pbVar11;
        } while (uVar20 != 0);
      }
      pbVar2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar16 = puVar17;
    } while (puVar17 < puVar15 + iVar19);
  }
  pbVar4 = (byte *)(ulong)*(uint *)(param_1 + 0x90);
  if (*(uint *)(param_1 + 0x90) - 3 < 2) {
    func_0x000107c303cc(pbVar4,*(long *)(param_1 + 0x80),
                        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x28),pbVar2,param_3);
    pbVar2 = pbVar4;
  }
  iVar19 = *(int *)(param_1 + 0x38);
  if (iVar19 != 0) {
    iVar14 = 0;
    pbVar4 = pbVar2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar14 * 8 + 7);
      }
      pbVar2 = (byte *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar4,param_3);
      iVar14 = iVar14 + 1;
      pbVar4 = pbVar2;
    } while (iVar19 != iVar14);
  }
  iVar19 = *(int *)(param_1 + 0x48);
  if (0 < iVar19) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= pbVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        pbVar2 = (byte *)((long)plVar3 + (long)((int)pbVar2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= pbVar2);
      iVar19 = *(int *)(param_1 + 0x48);
    }
    uVar13 = iVar19 * 8;
    uVar5 = (ulong)uVar13;
    pbVar4 = pbVar2 + 1;
    *pbVar2 = 0x32;
    uVar6 = uVar5;
    uVar8 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar2 = pbVar4;
        uVar9 = (uint)uVar6;
        pbVar4 = pbVar2 + 1;
        *pbVar2 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        uVar8 = (uint)uVar6;
      } while (uVar9 >> 0xe != 0);
    }
    pbVar2 = pbVar2 + 2;
    *pbVar4 = (byte)uVar8;
    lVar18 = *(long *)(param_1 + 0x50);
    uVar20 = (ulong)(int)uVar13;
    uVar6 = uVar5;
    if ((*param_3 - (long)pbVar2 < (long)(int)uVar13) &&
       (pbVar4 = (byte *)((*param_3 - (long)pbVar2) + 0x10), uVar6 = uVar20,
       (int)pbVar4 < (int)uVar13)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar19 = (int)pbVar4;
        _memcpy(pbVar2,lVar18,(long)iVar19);
        uVar13 = (int)uVar5 - iVar19;
        uVar5 = (ulong)uVar13;
        lVar18 = lVar18 + iVar19;
        pbVar12 = pbVar2 + iVar19;
        pbVar7 = (byte *)*param_3;
        do {
          pbVar2 = pbVar11;
          pbVar4 = pbVar7;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cc977c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cc975c:
            *param_3 = (long)(param_3 + 4);
            pbVar4 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar21 = *(undefined8 *)pbVar7;
              param_3[3] = *(long *)(pbVar7 + 8);
              *(undefined8 *)pbVar11 = uVar21;
              param_3[1] = (long)pbVar7;
              goto LAB_109cc975c;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar7 - (long)pbVar11);
            do {
              plVar3 = (long *)param_3[6];
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109cc977c;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar11 = uVar21;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar4 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar21;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar2 = pbStack_70;
            }
          }
          pbVar12 = pbVar2 + ((int)pbVar12 - (int)pbVar7);
          pbVar7 = pbVar4;
          pbVar2 = pbVar12;
        } while (pbVar4 <= pbVar12);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar2);
      } while ((int)pbVar4 < (int)uVar13);
      uVar20 = (ulong)(int)uVar13;
      uVar6 = uVar20;
    }
    _memcpy(pbVar2,lVar18,uVar6);
    pbVar2 = pbVar2 + uVar20;
  }
  iVar19 = *(int *)(param_1 + 0x58);
  if (0 < iVar19) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= pbVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        pbVar2 = (byte *)((long)plVar3 + (long)((int)pbVar2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= pbVar2);
      iVar19 = *(int *)(param_1 + 0x58);
    }
    uVar13 = iVar19 * 8;
    uVar5 = (ulong)uVar13;
    pbVar4 = pbVar2 + 1;
    *pbVar2 = 0x3a;
    uVar6 = uVar5;
    uVar8 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar2 = pbVar4;
        uVar9 = (uint)uVar6;
        pbVar4 = pbVar2 + 1;
        *pbVar2 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        uVar8 = (uint)uVar6;
      } while (uVar9 >> 0xe != 0);
    }
    pbVar2 = pbVar2 + 2;
    *pbVar4 = (byte)uVar8;
    lVar18 = *(long *)(param_1 + 0x60);
    uVar20 = (ulong)(int)uVar13;
    uVar6 = uVar5;
    if ((*param_3 - (long)pbVar2 < (long)(int)uVar13) &&
       (pbVar4 = (byte *)((*param_3 - (long)pbVar2) + 0x10), uVar6 = uVar20,
       (int)pbVar4 < (int)uVar13)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar19 = (int)pbVar4;
        _memcpy(pbVar2,lVar18,(long)iVar19);
        uVar13 = (int)uVar5 - iVar19;
        uVar5 = (ulong)uVar13;
        lVar18 = lVar18 + iVar19;
        pbVar12 = pbVar2 + iVar19;
        pbVar7 = (byte *)*param_3;
        do {
          pbVar2 = pbVar11;
          pbVar4 = pbVar7;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cc9890:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cc9870:
            *param_3 = (long)(param_3 + 4);
            pbVar4 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar21 = *(undefined8 *)pbVar7;
              param_3[3] = *(long *)(pbVar7 + 8);
              *(undefined8 *)pbVar11 = uVar21;
              param_3[1] = (long)pbVar7;
              goto LAB_109cc9870;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar7 - (long)pbVar11);
            do {
              plVar3 = (long *)param_3[6];
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109cc9890;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar11 = uVar21;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar4 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar21;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar2 = pbStack_70;
            }
          }
          pbVar12 = pbVar2 + ((int)pbVar12 - (int)pbVar7);
          pbVar7 = pbVar4;
          pbVar2 = pbVar12;
        } while (pbVar4 <= pbVar12);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar2);
      } while ((int)pbVar4 < (int)uVar13);
      uVar20 = (ulong)(int)uVar13;
      uVar6 = uVar20;
    }
    _memcpy(pbVar2,lVar18,uVar6);
    pbVar2 = pbVar2 + uVar20;
  }
  iVar19 = *(int *)(param_1 + 0x68);
  if (0 < iVar19) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= pbVar2) {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        pbVar2 = (byte *)((long)plVar3 + (long)((int)pbVar2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= pbVar2);
      iVar19 = *(int *)(param_1 + 0x68);
    }
    uVar13 = iVar19 * 8;
    uVar5 = (ulong)uVar13;
    pbVar4 = pbVar2 + 1;
    *pbVar2 = 0x42;
    uVar6 = uVar5;
    uVar8 = uVar13;
    if (0x7f < uVar13) {
      do {
        pbVar2 = pbVar4;
        uVar9 = (uint)uVar6;
        pbVar4 = pbVar2 + 1;
        *pbVar2 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        uVar8 = (uint)uVar6;
      } while (uVar9 >> 0xe != 0);
    }
    pbVar2 = pbVar2 + 2;
    *pbVar4 = (byte)uVar8;
    lVar18 = *(long *)(param_1 + 0x70);
    uVar20 = (ulong)(int)uVar13;
    uVar6 = uVar5;
    if ((*param_3 - (long)pbVar2 < (long)(int)uVar13) &&
       (pbVar4 = (byte *)((*param_3 - (long)pbVar2) + 0x10), uVar6 = uVar20,
       (int)pbVar4 < (int)uVar13)) {
      pbVar11 = (byte *)(param_3 + 2);
      do {
        iVar19 = (int)pbVar4;
        _memcpy(pbVar2,lVar18,(long)iVar19);
        uVar13 = (int)uVar5 - iVar19;
        uVar5 = (ulong)uVar13;
        lVar18 = lVar18 + iVar19;
        pbVar12 = pbVar2 + iVar19;
        pbVar7 = (byte *)*param_3;
        do {
          pbVar2 = pbVar11;
          pbVar4 = pbVar7;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cc99a4:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cc9984:
            *param_3 = (long)(param_3 + 4);
            pbVar4 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar21 = *(undefined8 *)pbVar7;
              param_3[3] = *(long *)(pbVar7 + 8);
              *(undefined8 *)pbVar11 = uVar21;
              param_3[1] = (long)pbVar7;
              goto LAB_109cc9984;
            }
            _memcpy(param_3[1],pbVar11,(long)pbVar7 - (long)pbVar11);
            do {
              plVar3 = (long *)param_3[6];
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109cc99a4;
            } while (uStack_64 == 0);
            puVar10 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar10;
              param_3[3] = puVar10[1];
              *(undefined8 *)pbVar11 = uVar21;
              *param_3 = (long)(pbVar11 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar4 = pbVar11 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar21;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar2 = pbStack_70;
            }
          }
          pbVar12 = pbVar2 + ((int)pbVar12 - (int)pbVar7);
          pbVar7 = pbVar4;
          pbVar2 = pbVar12;
        } while (pbVar4 <= pbVar12);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar2);
      } while ((int)pbVar4 < (int)uVar13);
      uVar20 = (ulong)(int)uVar13;
      uVar6 = uVar20;
    }
    _memcpy(pbVar2,lVar18,uVar6);
    pbVar2 = pbVar2 + uVar20;
  }
  uVar13 = *(uint *)(param_1 + 0x94);
  pbVar4 = (byte *)(ulong)uVar13;
  if (uVar13 == 100) {
    lVar18 = 0x28;
  }
  else {
    if (uVar13 != 0x65) goto LAB_109cc9538;
    lVar18 = 0x24;
  }
  func_0x000107c303cc(pbVar4,*(long *)(param_1 + 0x88),
                      *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar18),pbVar2,param_3);
  pbVar2 = pbVar4;
LAB_109cc9538:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar18 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar18 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)pbVar2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)pbVar2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar19 = (int)pbVar4;
          _memcpy(pbVar2,lVar18,(long)iVar19);
          uVar13 = (int)uVar5 - iVar19;
          uVar5 = (ulong)uVar13;
          lVar18 = lVar18 + iVar19;
          pbVar4 = (byte *)*param_3;
          pbVar11 = pbVar2 + iVar19;
          do {
            pbVar2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar3 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            pbVar2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(pbVar2,lVar18,(long)(int)uVar13);
      pbVar2 = pbVar2 + (int)uVar13;
    }
    else {
      _memcpy(pbVar2,lVar18,uVar5 & 0xffffffff);
      pbVar2 = pbVar2 + (int)uVar13;
    }
  }
  return pbVar2;
}



/* Entry: 109cc9af8; end: 109cc9d3f;  */

long FUN_109cc9af8(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar5 = 0;
    lVar11 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar6 = 0;
    uVar8 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar7 = *(int **)(param_1 + 0x20);
    do {
      lVar6 = (ulong)((int)LZCOUNT((long)*piVar7) * -9 + 0x280U >> 6) + lVar6;
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar6;
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6;
    }
    lVar11 = 0;
    if (lVar6 != 0) {
      lVar11 = (ulong)((int)LZCOUNT((long)(int)lVar6) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x38);
  lVar5 = lVar11 + lVar5 + (long)iVar4;
  puVar10 = (ulong *)(param_1 + 0x30);
  if ((uVar8 & 1) != 0) {
    puVar10 = (ulong *)(uVar8 + 7);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      uVar8 = *puVar10;
      FUN_109cc8520();
      lVar5 = uVar8 + lVar5 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  lVar11 = 0;
  if (uVar1 != 0) {
    lVar11 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 |
                                  ((ulong)uVar1 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  lVar6 = 0;
  if (uVar2 != 0) {
    lVar6 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1c) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x68);
  lVar9 = 0;
  if (uVar3 != 0) {
    lVar9 = (ulong)((int)LZCOUNT(-((ulong)(uVar3 >> 0x1c) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar3 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  lVar9 = lVar11 + lVar5 + lVar6 + ((ulong)uVar2 + (ulong)uVar1 + (ulong)uVar3) * 8 + lVar9;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x78);
    FUN_109cc6e10();
    lVar9 = lVar9 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x90) == 4) {
    lVar5 = *(long *)(param_1 + 0x80);
    func_0x000109cc8094();
LAB_109cc9c9c:
    lVar9 = lVar9 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  }
  else if (*(int *)(param_1 + 0x90) == 3) {
    lVar5 = *(long *)(param_1 + 0x80);
    func_0x000109cc78f4();
    goto LAB_109cc9c9c;
  }
  if (*(int *)(param_1 + 0x94) == 0x65) {
    lVar5 = *(long *)(param_1 + 0x88);
    func_0x000109c68808();
  }
  else {
    if (*(int *)(param_1 + 0x94) != 100) goto LAB_109cc9d04;
    lVar5 = *(long *)(param_1 + 0x88);
    func_0x000109c68360();
  }
  lVar9 = lVar9 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 2;
LAB_109cc9d04:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar8 + 0x10);
    }
    lVar9 = lVar5 + lVar9;
  }
  *(int *)(param_1 + 0x14) = (int)lVar9;
  return lVar9;
}



/* Entry: 109cc9d40; end: 109cc9d43;  */

void FUN_109cc9d40(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar11 = *(ulong *)(param_1 + 8);
  if ((uVar11 & 1) != 0) {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar5 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x1c) < iVar5) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x18);
      iVar5 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x18) = iVar5;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x20);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
      do {
        *puVar8 = *puVar6;
        uVar10 = uVar10 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar10);
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  iVar2 = *(int *)(param_2 + 0x48);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x48);
    iVar5 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x4c) < iVar5) {
      func_0x000109340710(param_1 + 0x48);
      iVar4 = *(int *)(param_1 + 0x48);
      iVar5 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x48) = iVar5;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x50);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar4 * 8);
      do {
        *puVar9 = *puVar7;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar10);
    }
  }
  iVar2 = *(int *)(param_2 + 0x58);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x58);
    iVar5 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x5c) < iVar5) {
      func_0x000109340710(param_1 + 0x58);
      iVar4 = *(int *)(param_1 + 0x58);
      iVar5 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x58) = iVar5;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x60);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar4 * 8);
      do {
        *puVar9 = *puVar7;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar10);
    }
  }
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x68);
    iVar5 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x6c) < iVar5) {
      func_0x000109340710(param_1 + 0x68);
      iVar4 = *(int *)(param_1 + 0x68);
      iVar5 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x68) = iVar5;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x70);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x70) + (long)iVar4 * 8);
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
    if (*(long *)(param_1 + 0x78) == 0) {
      uVar3 = uVar11;
      func_0x000109cca838(uVar11,*(undefined8 *)(param_2 + 0x78));
      *(ulong *)(param_1 + 0x78) = uVar3;
    }
    else {
      FUN_109cc6f30();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
  iVar2 = *(int *)(param_2 + 0x90);
  if (iVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x90);
    if (iVar5 != iVar2) {
      if (iVar5 != 0) {
        FUN_109cc8d18(param_1);
      }
      *(int *)(param_1 + 0x90) = iVar2;
    }
    uVar3 = uVar11;
    if (iVar2 == 4) {
      if (iVar5 == 4) {
        ppuVar1 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x90) != 4) {
          ppuVar1 = &PTR_PTR_1132fd298;
        }
        FUN_109cc8140(*(undefined8 *)(param_1 + 0x80),ppuVar1);
      }
      else {
        func_0x000109ccaa30(uVar11,*(undefined8 *)(param_2 + 0x80));
LAB_109cc9f7c:
        *(ulong *)(param_1 + 0x80) = uVar3;
      }
    }
    else if (iVar2 == 3) {
      if (iVar5 != 3) {
        func_0x000109cca9a0(uVar11,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109cc9f7c;
      }
      ppuVar1 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x90) != 3) {
        ppuVar1 = &PTR_PTR_1132fd2c8;
      }
      FUN_109cc79a0(*(undefined8 *)(param_1 + 0x80),ppuVar1);
    }
  }
  iVar2 = *(int *)(param_2 + 0x94);
  if (iVar2 == 0) goto LAB_109cca02c;
  iVar5 = *(int *)(param_1 + 0x94);
  if (iVar5 != iVar2) {
    if (iVar5 != 0) {
      func_0x000109cc8da4(param_1);
    }
    *(int *)(param_1 + 0x94) = iVar2;
  }
  if (iVar2 == 0x65) {
    if (iVar5 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x88);
      if (*(int *)(param_2 + 0x94) != 0x65) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      func_0x000109c688b0(*(undefined8 *)(param_1 + 0x88),ppuVar1);
      goto LAB_109cca02c;
    }
    func_0x000109c6baf8(uVar11,*(undefined8 *)(param_2 + 0x88));
  }
  else {
    if (iVar2 != 100) goto LAB_109cca02c;
    if (iVar5 == 100) {
      ppuVar1 = *(undefined ***)(param_2 + 0x88);
      if (*(int *)(param_2 + 0x94) != 100) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      func_0x000109c683fc(*(undefined8 *)(param_1 + 0x88),ppuVar1);
      goto LAB_109cca02c;
    }
    func_0x000109c6bab4(uVar11,*(undefined8 *)(param_2 + 0x88));
  }
  *(ulong *)(param_1 + 0x88) = uVar11;
LAB_109cca02c:
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



/* Entry: 109cc9d44; end: 109cca0c3;  */

void FUN_109cc9d44(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar11 = *(ulong *)(param_1 + 8);
  if ((uVar11 & 1) != 0) {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar5 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x1c) < iVar5) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x18);
      iVar5 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x18) = iVar5;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x20);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
      do {
        *puVar8 = *puVar6;
        uVar10 = uVar10 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar10);
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  iVar2 = *(int *)(param_2 + 0x48);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x48);
    iVar5 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x4c) < iVar5) {
      func_0x000109340710(param_1 + 0x48);
      iVar4 = *(int *)(param_1 + 0x48);
      iVar5 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x48) = iVar5;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x50);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar4 * 8);
      do {
        *puVar9 = *puVar7;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar10);
    }
  }
  iVar2 = *(int *)(param_2 + 0x58);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x58);
    iVar5 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x5c) < iVar5) {
      func_0x000109340710(param_1 + 0x58);
      iVar4 = *(int *)(param_1 + 0x58);
      iVar5 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x58) = iVar5;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x60);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar4 * 8);
      do {
        *puVar9 = *puVar7;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar10);
    }
  }
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x68);
    iVar5 = iVar4 + iVar2;
    if (*(int *)(param_1 + 0x6c) < iVar5) {
      func_0x000109340710(param_1 + 0x68);
      iVar4 = *(int *)(param_1 + 0x68);
      iVar5 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 0x68) = iVar5;
    if (0 < iVar2) {
      uVar10 = iVar2 + 1;
      puVar7 = *(undefined8 **)(param_2 + 0x70);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x70) + (long)iVar4 * 8);
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
    if (*(long *)(param_1 + 0x78) == 0) {
      uVar3 = uVar11;
      func_0x000109cca838(uVar11,*(undefined8 *)(param_2 + 0x78));
      *(ulong *)(param_1 + 0x78) = uVar3;
    }
    else {
      FUN_109cc6f30();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
  iVar2 = *(int *)(param_2 + 0x90);
  if (iVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x90);
    if (iVar5 != iVar2) {
      if (iVar5 != 0) {
        FUN_109cc8d18(param_1);
      }
      *(int *)(param_1 + 0x90) = iVar2;
    }
    uVar3 = uVar11;
    if (iVar2 == 4) {
      if (iVar5 == 4) {
        ppuVar1 = *(undefined ***)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x90) != 4) {
          ppuVar1 = &PTR_PTR_1132fd298;
        }
        FUN_109cc8140(*(undefined8 *)(param_1 + 0x80),ppuVar1);
      }
      else {
        func_0x000109ccaa30(uVar11,*(undefined8 *)(param_2 + 0x80));
LAB_109cc9f7c:
        *(ulong *)(param_1 + 0x80) = uVar3;
      }
    }
    else if (iVar2 == 3) {
      if (iVar5 != 3) {
        func_0x000109cca9a0(uVar11,*(undefined8 *)(param_2 + 0x80));
        goto LAB_109cc9f7c;
      }
      ppuVar1 = *(undefined ***)(param_2 + 0x80);
      if (*(int *)(param_2 + 0x90) != 3) {
        ppuVar1 = &PTR_PTR_1132fd2c8;
      }
      FUN_109cc79a0(*(undefined8 *)(param_1 + 0x80),ppuVar1);
    }
  }
  iVar2 = *(int *)(param_2 + 0x94);
  if (iVar2 == 0) goto LAB_109cca02c;
  iVar5 = *(int *)(param_1 + 0x94);
  if (iVar5 != iVar2) {
    if (iVar5 != 0) {
      func_0x000109cc8da4(param_1);
    }
    *(int *)(param_1 + 0x94) = iVar2;
  }
  if (iVar2 == 0x65) {
    if (iVar5 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x88);
      if (*(int *)(param_2 + 0x94) != 0x65) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      func_0x000109c688b0(*(undefined8 *)(param_1 + 0x88),ppuVar1);
      goto LAB_109cca02c;
    }
    func_0x000109c6baf8(uVar11,*(undefined8 *)(param_2 + 0x88));
  }
  else {
    if (iVar2 != 100) goto LAB_109cca02c;
    if (iVar5 == 100) {
      ppuVar1 = *(undefined ***)(param_2 + 0x88);
      if (*(int *)(param_2 + 0x94) != 100) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      func_0x000109c683fc(*(undefined8 *)(param_1 + 0x88),ppuVar1);
      goto LAB_109cca02c;
    }
    func_0x000109c6bab4(uVar11,*(undefined8 *)(param_2 + 0x88));
  }
  *(ulong *)(param_1 + 0x88) = uVar11;
LAB_109cca02c:
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



/* Entry: 109cca0c4; end: 109cca12b;  */

void FUN_109cca0c4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b3ac70;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 109cca12c; end: 109cca15f;  */

long * FUN_109cca12c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109cca160; end: 109cca193;  */

long * FUN_109cca160(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109cca194; end: 109cca1c7;  */

long * FUN_109cca194(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109cca1c8; end: 109cca5d3;  */

void FUN_109cca1c8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b3ac70;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 109cca5d4; end: 109cca66b;  */

undefined8 * FUN_109cca5d4(undefined8 *param_1,long param_2)

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
  *puVar1 = &PTR_DAT_110b3adb0;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109cca66c; end: 109cca71f;  */

undefined8 * FUN_109cca66c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b3ad10;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  lVar2 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
  }
  puVar1[2] = lVar2;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109cca720; end: 109cca7ab;  */

undefined8 * FUN_109cca720(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b3ad60;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  func_0x000109cc655c();
  return puVar1;
}



/* Entry: 109cca7ac; end: 109cca837;  */

undefined8 * FUN_109cca7ac(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b3acc0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x000109cc689c();
  return puVar1;
}



/* Entry: 109cca838; end: 109ccaabf;  */

undefined8 * FUN_109cca838(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b3aef0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)puVar2 + 0x1c) = iVar1;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      FUN_109cca5d4(param_1,*(undefined8 *)(param_2 + 0x10));
    }
    else {
      if (iVar1 != 2) {
        return puVar2;
      }
      FUN_109cca66c(param_1,*(undefined8 *)(param_2 + 0x10));
    }
  }
  else if (iVar1 == 3) {
    FUN_109cca720(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar1 != 4) {
      return puVar2;
    }
    FUN_109cca7ac(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  puVar2[2] = param_1;
  return puVar2;
}



/* Entry: 109ccaac0; end: 109ccab5f;  */

undefined8 * FUN_109ccaac0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3b560;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010934069c(param_1 + 2,param_2,param_3 + 0x10);
  func_0x00010934069c(param_1 + 4,param_2,param_3 + 0x20);
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 109ccab60; end: 109ccabc3;  */

long FUN_109ccab60(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    if (*(long *)(*(long *)(param_1 + 0x28) + -8) == 0) {
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



/* Entry: 109ccabc4; end: 109ccabc7;  */

long FUN_109ccabc4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    if (*(long *)(*(long *)(param_1 + 0x28) + -8) == 0) {
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



/* Entry: 109ccabc8; end: 109ccabdb;  */

void FUN_109ccabc8(void)

{
  FUN_109ccab60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccabdc; end: 109ccabff;  */

undefined ** FUN_109ccabdc(void)

{
  return &PTR_DAT_110b3b5a0;
}



/* Entry: 109ccac00; end: 109ccb0ef;  */

byte * FUN_109ccac00(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
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
    uVar11 = iVar14 * 8;
    uVar12 = (ulong)uVar11;
    pbVar2 = param_2 + 1;
    *param_2 = 10;
    uVar3 = uVar12;
    uVar5 = uVar11;
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar2;
        uVar6 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar5 = (uint)uVar3;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar5;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar15 = (ulong)(int)uVar11;
    uVar3 = uVar12;
    if ((*param_3 - (long)param_2 < (long)(int)uVar11) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar15,
       (int)pbVar2 < (int)uVar11)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar14 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar9 = param_2 + iVar14;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar10;
          if (param_3[6] == 0) {
LAB_109ccaeac:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ccae8c:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109ccae8c;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109ccaeac;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar10 = uVar16;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar10 + (int)uStack_64;
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
          pbVar9 = pbVar7 + ((int)pbVar9 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar9;
        } while (pbVar2 <= pbVar9);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar3 = uVar15;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar15;
  }
  iVar14 = *(int *)(param_1 + 0x20);
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
      iVar14 = *(int *)(param_1 + 0x20);
    }
    uVar11 = iVar14 * 8;
    uVar12 = (ulong)uVar11;
    pbVar2 = param_2 + 1;
    *param_2 = 0x12;
    uVar3 = uVar12;
    uVar5 = uVar11;
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar2;
        uVar6 = (uint)uVar3;
        pbVar2 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar5 = (uint)uVar3;
      } while (uVar6 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar2 = (byte)uVar5;
    lVar13 = *(long *)(param_1 + 0x28);
    uVar15 = (ulong)(int)uVar11;
    uVar3 = uVar12;
    if ((*param_3 - (long)param_2 < (long)(int)uVar11) &&
       (pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar15,
       (int)pbVar2 < (int)uVar11)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar14 = (int)pbVar2;
        _memcpy(param_2,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar9 = param_2 + iVar14;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar2 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar7 = pbVar10;
          if (param_3[6] == 0) {
LAB_109ccafc0:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ccafa0:
            *param_3 = (long)(param_3 + 4);
            pbVar2 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar16 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar16;
              param_3[1] = (long)pbVar4;
              goto LAB_109ccafa0;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar1 = (long *)param_3[6];
              (**(code **)(*plVar1 + 0x10))(plVar1,&pbStack_70,&uStack_64);
              if (((ulong)plVar1 & 1) == 0) goto LAB_109ccafc0;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar10 = uVar16;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar2 = pbVar10 + (int)uStack_64;
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
          pbVar9 = pbVar7 + ((int)pbVar9 - (int)pbVar4);
          pbVar4 = pbVar2;
          param_2 = pbVar9;
        } while (pbVar2 <= pbVar9);
        pbVar2 = pbVar2 + (0x10 - (long)param_2);
      } while ((int)pbVar2 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar3 = uVar15;
    }
    _memcpy(param_2,lVar13,uVar3);
    param_2 = param_2 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar13 = *(long *)(uVar3 + 8);
      uVar12 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar13 = uVar3 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar11) {
      pbVar2 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar2 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar2;
          _memcpy(param_2,lVar13,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar14;
          pbVar2 = (byte *)*param_3;
          pbVar10 = param_2 + iVar14;
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
        } while ((int)pbVar2 < (int)uVar11);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar11);
      param_2 = param_2 + (int)uVar11;
    }
    else {
      _memcpy(param_2,lVar13,uVar12 & 0xffffffff);
      param_2 = param_2 + (int)uVar11;
    }
  }
  return param_2;
}



/* Entry: 109ccb0f0; end: 109ccb16b;  */

long FUN_109ccb0f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar4 = 0;
  if (uVar1 != 0) {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  lVar3 = 0;
  if (uVar2 != 0) {
    lVar3 = (ulong)((int)LZCOUNT(-((ulong)(uVar2 >> 0x1c) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar2 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  lVar3 = lVar4 + ((ulong)uVar2 + (ulong)uVar1) * 8 + lVar3;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ccb16c; end: 109ccb26f;  */

void FUN_109ccb16c(long param_1,long param_2)

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
      func_0x000109340710(param_1 + 0x10);
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
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x24) < iVar3) {
      func_0x000109340710(param_1 + 0x20);
      iVar2 = *(int *)(param_1 + 0x20);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x20) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x28);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar2 * 8);
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



/* Entry: 109ccb270; end: 109ccb277;  */

void FUN_109ccb270(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b3b560;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 109ccb278; end: 109ccb31b;  */

void FUN_109ccb278(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b3b560;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 109ccb31c; end: 109ccb31f;  */

long FUN_109ccb31c(long param_1)

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



/* Entry: 109ccb320; end: 109ccb333;  */

void FUN_109ccb320(void)

{
  func_0x000109ccb2d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccb334; end: 109ccb357;  */

undefined ** FUN_109ccb334(void)

{
  return &PTR_DAT_110b3b828;
}



/* Entry: 109ccb358; end: 109ccb6ab;  */

byte * FUN_109ccb358(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulong uVar8;
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
LAB_109ccb418:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ccb4b0:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109ccb4b0;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ccb418;
            } while (uStack_64 == 0);
            puVar7 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar7;
              param_3[3] = puVar7[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar7;
              *(undefined8 *)(pbStack_70 + 8) = puVar7[1];
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
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  uVar12 = *(uint *)(param_1 + 0x24);
  if (uVar12 != 0) {
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
      uVar12 = *(uint *)(param_1 + 0x24);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 0x10;
    uVar4 = (ulong)(int)uVar12;
    uVar5 = uVar4;
    pbVar3 = pbVar10;
    if (0x7f < uVar12) {
      do {
        pbVar10 = pbVar3 + 1;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar8 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar3 = pbVar10;
      } while (uVar8 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar4;
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



/* Entry: 109ccb6ac; end: 109ccb773;  */

long FUN_109ccb6ac(long param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar3 = *(int **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*piVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      piVar3 = piVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + lVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x28) = (int)lVar4;
  return lVar4;
}



/* Entry: 109ccb774; end: 109ccb827;  */

void FUN_109ccb774(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 109ccb828; end: 109ccb8bb;  */

void FUN_109ccb828(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (*(long *)(param_1 + 0x10) != 0)) {
      func_0x000109ccb2d4();
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109ccb8bc; end: 109ccb8bf;  */

long FUN_109ccb8bc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109ccb828(param_1);
  }
  return param_1;
}



/* Entry: 109ccb8c0; end: 109ccb8d3;  */

void FUN_109ccb8c0(void)

{
  func_0x000109ccb880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccb8d4; end: 109ccb8df;  */

undefined ** FUN_109ccb8d4(void)

{
  return &PTR_DAT_110b3b860;
}



/* Entry: 109ccb8e0; end: 109ccb917;  */

void FUN_109ccb8e0(long param_1)

{
  ulong *puVar1;
  
  FUN_109ccb828();
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



/* Entry: 109ccb918; end: 109ccba67;  */

long * FUN_109ccb918(long param_1,long *param_2,long *param_3)

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
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28),param_2,param_3);
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



/* Entry: 109ccba68; end: 109ccbadf;  */

void FUN_109ccba68(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109ccb6ac();
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



/* Entry: 109ccbae0; end: 109ccbae3;  */

void FUN_109ccbae0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_109ccb774(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_109ccb828(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_109ccd9b4(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
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



/* Entry: 109ccbae4; end: 109ccbba7;  */

void FUN_109ccbae4(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_109ccb774(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_109ccb828(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_109ccd9b4(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
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



/* Entry: 109ccbba8; end: 109ccbc3b;  */

void FUN_109ccbba8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (*(long *)(param_1 + 0x10) != 0)) {
      func_0x000109ccb2d4();
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109ccbc3c; end: 109ccbc3f;  */

long FUN_109ccbc3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109ccbba8(param_1);
  }
  return param_1;
}



/* Entry: 109ccbc40; end: 109ccbc53;  */

void FUN_109ccbc40(void)

{
  func_0x000109ccbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccbc54; end: 109ccbc5f;  */

undefined ** FUN_109ccbc54(void)

{
  return &PTR_DAT_110b3b898;
}



/* Entry: 109ccbc60; end: 109ccbc97;  */

void FUN_109ccbc60(long param_1)

{
  ulong *puVar1;
  
  FUN_109ccbba8();
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



/* Entry: 109ccbc98; end: 109ccbde7;  */

long * FUN_109ccbc98(long param_1,long *param_2,long *param_3)

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
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28),param_2,param_3);
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



/* Entry: 109ccbde8; end: 109ccbe5f;  */

void FUN_109ccbde8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    FUN_109ccb6ac();
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



/* Entry: 109ccbe60; end: 109ccbe63;  */

void FUN_109ccbe60(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_109ccb774(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_109ccbba8(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_109ccd9b4(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
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



/* Entry: 109ccbe64; end: 109ccbf27;  */

void FUN_109ccbe64(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_109ccb774(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_109ccbba8(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_109ccd9b4(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
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



/* Entry: 109ccbf28; end: 109ccbf6b;  */

long FUN_109ccbf28(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109ccb880();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ccbf6c; end: 109ccbf6f;  */

long FUN_109ccbf6c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109ccb880();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ccbf70; end: 109ccbf83;  */

void FUN_109ccbf70(void)

{
  FUN_109ccbf28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccbf84; end: 109ccbf8f;  */

undefined ** FUN_109ccbf84(void)

{
  return &PTR_DAT_110b3b8d0;
}



/* Entry: 109ccbf90; end: 109ccc007;  */

void FUN_109ccbf90(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
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
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109ccb8e0(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 109ccc008; end: 109ccc19b;  */

long * FUN_109ccc008(long param_1,long *param_2,long *param_3)

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
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109ccc07c;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109ccc07c;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a6f16);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109ccc07c:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,param_3);
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



/* Entry: 109ccc19c; end: 109ccc25b;  */

long FUN_109ccc19c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar2;
  if (lVar2 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar2;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_109ccba68();
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ccc25c; end: 109ccc333;  */

void FUN_109ccc25c(long param_1,long param_2)

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
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000109ccda44(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_109ccbae4();
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



/* Entry: 109ccc334; end: 109ccc377;  */

long FUN_109ccc334(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109ccbc00();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ccc378; end: 109ccc37b;  */

long FUN_109ccc378(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109ccbc00();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ccc37c; end: 109ccc38f;  */

void FUN_109ccc37c(void)

{
  FUN_109ccc334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



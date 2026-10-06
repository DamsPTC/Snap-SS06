/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adf00a0; end: 10adf011b;  */

void FUN_10adf00a0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(param_1 + 0x40,param_2 + 0x40);
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



/* Entry: 10adf011c; end: 10adf0257;  */

long FUN_10adf011c(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adf01a4;
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar4 = puVar2;
LAB_10adf017c:
    do {
      if ((long *)*puVar4 != (long *)0x0) {
        (**(code **)(*(long *)*puVar4 + 8))();
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto LAB_10adf01a4;
  }
  else {
    uVar3 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar4 = (ulong *)(uVar1 + 7);
      goto LAB_10adf017c;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10adf01a4:
  *puVar2 = 0;
  return param_1;
}



/* Entry: 10adf0258; end: 10adf0263;  */

undefined ** FUN_10adf0258(void)

{
  return &PTR_DAT_110c76b68;
}



/* Entry: 10adf0264; end: 10adf02b3;  */

void FUN_10adf0264(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10adf02b4; end: 10adf0673;  */

void FUN_10adf02b4(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar18 = *(int *)(param_1 + 0x18);
  if (iVar18 != 0) {
    iVar16 = 0;
    pbVar10 = param_3 + 0x10;
    pbVar5 = param_3 + 0x20;
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar16 * 8 + 7);
      }
      param_2 = (byte *)*puVar1;
      uVar14 = *(uint *)(param_2 + 0x34);
      pbVar17 = *(byte **)param_3;
      pbVar3 = pbVar9;
      if (pbVar17 <= pbVar9) {
        do {
          pbVar3 = pbVar10;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar11 = pbVar5;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adf0448:
            *(byte **)param_3 = pbVar11;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar17;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar17 + 8);
              *(undefined8 *)pbVar10 = uVar19;
              *(byte **)(param_3 + 8) = pbVar17;
              goto LAB_10adf0448;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar10,(long)pbVar17 - (long)pbVar10);
            do {
              plVar4 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar4 + 0x10))(plVar4,&pbStack_70,&uStack_64);
              if (((ulong)plVar4 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar5;
                goto LAB_10adf03a4;
              }
            } while (uStack_64 == 0);
            puVar12 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar12;
              *(undefined8 *)(param_3 + 0x18) = puVar12[1];
              *(undefined8 *)pbVar10 = uVar19;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar10 + (int)uStack_64;
              goto LAB_10adf0448;
            }
            uVar19 = *puVar12;
            *(undefined8 *)(pbStack_70 + 8) = puVar12[1];
            *(undefined8 *)pbStack_70 = uVar19;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar3 = pbStack_70;
            pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adf03a4:
          pbVar9 = pbVar3 + ((int)pbVar9 - (int)pbVar17);
          pbVar3 = pbVar9;
          pbVar17 = pbVar11;
        } while (pbVar11 <= pbVar9);
      }
      pbVar9 = pbVar3 + 1;
      *pbVar3 = 10;
      if (0x7f < uVar14) {
        do {
          pbVar3 = pbVar9;
          pbVar9 = pbVar3 + 1;
          *pbVar3 = (byte)uVar14 | 0x80;
          uVar2 = uVar14 >> 0xe;
          uVar14 = uVar14 >> 7;
        } while (uVar2 != 0);
      }
      *pbVar9 = (byte)uVar14;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar3 + 2,param_3);
      iVar16 = iVar16 + 1;
      pbVar9 = param_2;
    } while (iVar16 != iVar18);
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (param_2 < pbVar9) {
      bVar7 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
      bVar7 = *(byte *)(param_1 + 0x28);
    }
    *param_2 = 0x10;
    param_2[1] = bVar7;
    param_2 = param_2 + 2;
  }
  pbVar9 = param_2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    pbVar9 = param_3;
    func_0x0001088b96ec(param_3,*(int *)(param_1 + 0x2c),param_2);
  }
  iVar18 = *(int *)(param_1 + 0x30);
  if (iVar18 != 0) {
    pbVar10 = *(byte **)param_3;
    if (pbVar10 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar5 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar10);
        pbVar10 = *(byte **)param_3;
      } while (pbVar10 <= pbVar9);
      iVar18 = *(int *)(param_1 + 0x30);
    }
    *pbVar9 = 0x35;
    *(int *)(pbVar9 + 1) = iVar18;
    pbVar9 = pbVar9 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar15 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar15 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      uVar15 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    uVar14 = (uint)uVar15;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar14) {
      pbVar10 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar10 < (int)uVar14) {
        do {
          lVar13 = (long)(int)pbVar10;
          _memcpy(pbVar9,lVar6,lVar13);
          uVar14 = (int)uVar15 - (int)pbVar10;
          uVar15 = (ulong)uVar14;
          lVar6 = lVar6 + lVar13;
          pbVar9 = pbVar9 + lVar13;
          pbVar10 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar10 = pbVar10 + (0x10 - (long)(param_3 + 0x10));
              iVar18 = (int)pbVar10;
              pbVar9 = param_3 + 0x10;
              goto joined_r0x00010adf0654;
            }
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar10);
            pbVar10 = *(byte **)param_3;
          } while (pbVar10 <= pbVar9);
          pbVar10 = pbVar10 + (0x10 - (long)pbVar9);
          iVar18 = (int)pbVar10;
joined_r0x00010adf0654:
        } while (iVar18 < (int)uVar14);
      }
      _memcpy(pbVar9,lVar6,(long)(int)uVar14);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adf0674; end: 10adf0767;  */

void FUN_10adf0674(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar4 = (ulong *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar4 = (ulong *)(uVar1 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar2 = 0;
  }
  else {
    lVar5 = lVar3 << 3;
    do {
      uVar1 = *puVar4;
      FUN_10adee5b8();
      lVar3 = uVar1 + lVar3 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
      iVar2 = (int)lVar3;
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x28) * 2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    *(int *)(param_1 + 0x34) = (int)lVar3 + iVar2;
    return;
  }
  *(int *)(param_1 + 0x34) = iVar2;
  return;
}



/* Entry: 10adf0768; end: 10adf07e7;  */

void FUN_10adf0768(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 10adf07e8; end: 10adf0977;  */

void FUN_10adf07e8(long param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 8);
  if (((ulong)plVar7 & 1) == 0) {
    FUN_10adf0978(param_1);
  }
  else {
    plVar7 = *(long **)((ulong)plVar7 & 0xfffffffffffffffe);
    FUN_10adf0978(param_1);
  }
  if (param_2 != (long *)0x0) {
    plVar2 = (long *)param_2[1];
    if (((ulong)plVar2 & 1) != 0) {
      plVar2 = *(long **)((ulong)plVar2 & 0xfffffffffffffffe);
    }
    if (plVar7 != plVar2) {
      if (plVar7 == (long *)0x0 || plVar2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x10))(param_2,plVar7);
        (**(code **)(*param_2 + 0x20))();
      }
      else {
        ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
        (*(code *)PTR___tlv_bootstrap_11340dac8)();
        if (ppuVar1[1] == (undefined *)*plVar7) {
          plVar7 = (long *)ppuVar1[2];
          lVar3 = plVar7[1];
          uVar4 = lVar3 - *plVar7;
        }
        else {
          func_0x00010b4d7148(plVar7,0x10);
          lVar3 = plVar7[1];
          uVar4 = lVar3 - *plVar7;
        }
        if (uVar4 < 0x10) {
          func_0x00010b4d785c();
        }
        else {
          uVar5 = lVar3 - 0x10;
          plVar7[1] = uVar5;
          uVar4 = plVar7[3];
          if (((long)(uVar5 - uVar4) < 0x181) && (uVar6 = plVar7[2], uVar6 < uVar4)) {
            if (uVar5 <= uVar4) {
              uVar4 = uVar5;
            }
            uVar5 = uVar4 - 0x180;
            if (uVar4 - 0x180 <= uVar6) {
              uVar5 = uVar6;
            }
            for (; uVar5 < uVar4; uVar4 = uVar4 - 0x40) {
              Hint_Prefetch(uVar4,2,0,0);
            }
            plVar7[3] = uVar4;
          }
          *(long **)(lVar3 + -0x10) = param_2;
          *(undefined **)(lVar3 + -8) = &UNK_1053a933c;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = 3;
    *(long **)(param_1 + 0x30) = param_2;
  }
  return;
}



/* Entry: 10adf0978; end: 10adf0adf;  */

void FUN_10adf0978(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 5) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x30), lVar3 == 0)) goto LAB_10adf09b8;
    FUN_10adf34f0(lVar3);
    goto LAB_10adf0ac0;
  }
  if (iVar1 == 4) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 == 0) && (lVar3 = *(long *)(param_1 + 0x30), lVar3 != 0)) {
      FUN_10adf2edc(lVar3);
      goto LAB_10adf0ac0;
    }
LAB_10adf09b8:
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  if (iVar1 != 3) goto LAB_10adf09b8;
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if ((uVar2 != 0) || (lVar3 = *(long *)(param_1 + 0x30), lVar3 == 0)) goto LAB_10adf09b8;
  if ((*(byte *)(lVar3 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar4 = (ulong *)(lVar3 + 0x10);
  uVar2 = *puVar4;
  if (uVar2 == 0) goto LAB_10adf0ac0;
  if (*(long *)(lVar3 + 0x20) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar5 = 1;
      puVar6 = puVar4;
LAB_10adf0a94:
      do {
        if ((long *)*puVar6 != (long *)0x0) {
          (**(code **)(*(long *)*puVar6 + 8))();
        }
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
      uVar2 = *puVar4;
      if ((uVar2 & 1) == 0) goto LAB_10adf0abc;
    }
    else {
      uVar5 = (ulong)*(uint *)(uVar2 - 1);
      if (0 < (int)*(uint *)(uVar2 - 1)) {
        puVar6 = (ulong *)(uVar2 + 7);
        goto LAB_10adf0a94;
      }
    }
    __ZdlPv(uVar2 - 1);
  }
LAB_10adf0abc:
  *puVar4 = 0;
LAB_10adf0ac0:
  __ZdlPv(lVar3);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10adf0ae0; end: 10adf0ee3;  */

void FUN_10adf0ae0(long param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 8);
  if (((ulong)plVar7 & 1) == 0) {
    FUN_10adf0978(param_1);
  }
  else {
    plVar7 = *(long **)((ulong)plVar7 & 0xfffffffffffffffe);
    FUN_10adf0978(param_1);
  }
  if (param_2 != (long *)0x0) {
    plVar2 = (long *)param_2[1];
    if (((ulong)plVar2 & 1) != 0) {
      plVar2 = *(long **)((ulong)plVar2 & 0xfffffffffffffffe);
    }
    if (plVar7 != plVar2) {
      if (plVar7 == (long *)0x0 || plVar2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x10))(param_2,plVar7);
        (**(code **)(*param_2 + 0x20))();
      }
      else {
        ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
        (*(code *)PTR___tlv_bootstrap_11340dac8)();
        if (ppuVar1[1] == (undefined *)*plVar7) {
          plVar7 = (long *)ppuVar1[2];
          lVar3 = plVar7[1];
          uVar4 = lVar3 - *plVar7;
        }
        else {
          func_0x00010b4d7148(plVar7,0x10);
          lVar3 = plVar7[1];
          uVar4 = lVar3 - *plVar7;
        }
        if (uVar4 < 0x10) {
          func_0x00010b4d785c();
        }
        else {
          uVar5 = lVar3 - 0x10;
          plVar7[1] = uVar5;
          uVar4 = plVar7[3];
          if (((long)(uVar5 - uVar4) < 0x181) && (uVar6 = plVar7[2], uVar6 < uVar4)) {
            if (uVar5 <= uVar4) {
              uVar4 = uVar5;
            }
            uVar5 = uVar4 - 0x180;
            if (uVar4 - 0x180 <= uVar6) {
              uVar5 = uVar6;
            }
            for (; uVar5 < uVar4; uVar4 = uVar4 - 0x40) {
              Hint_Prefetch(uVar4,2,0,0);
            }
            plVar7[3] = uVar4;
          }
          *(long **)(lVar3 + -0x10) = param_2;
          *(undefined **)(lVar3 + -8) = &UNK_1053a933c;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = 4;
    *(long **)(param_1 + 0x30) = param_2;
  }
  return;
}



/* Entry: 10adf0ee4; end: 10adf0ee7;  */

long FUN_10adf0ee4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_10adf0978(param_1);
  }
  puVar4 = (ulong *)(param_1 + 0x10);
  uVar3 = *puVar4;
  if (uVar3 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adf0ecc;
  if ((uVar3 & 1) == 0) {
    uVar5 = 1;
    puVar6 = puVar4;
LAB_10adf0ea4:
    do {
      if ((long *)*puVar6 != (long *)0x0) {
        (**(code **)(*(long *)*puVar6 + 8))();
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
    uVar3 = *puVar4;
    if ((uVar3 & 1) == 0) goto LAB_10adf0ecc;
  }
  else {
    uVar5 = (ulong)*(uint *)(uVar3 - 1);
    if (0 < (int)*(uint *)(uVar3 - 1)) {
      puVar6 = (ulong *)(uVar3 + 7);
      goto LAB_10adf0ea4;
    }
  }
  __ZdlPv(uVar3 - 1);
LAB_10adf0ecc:
  *puVar4 = 0;
  return param_1;
}



/* Entry: 10adf0ee8; end: 10adf0efb;  */

void FUN_10adf0ee8(void)

{
  func_0x00010adf0e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adf0efc; end: 10adf0f9b;  */

long FUN_10adf0efc(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adf0f84;
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar4 = puVar2;
LAB_10adf0f5c:
    do {
      if ((long *)*puVar4 != (long *)0x0) {
        (**(code **)(*(long *)*puVar4 + 8))();
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto LAB_10adf0f84;
  }
  else {
    uVar3 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar4 = (ulong *)(uVar1 + 7);
      goto LAB_10adf0f5c;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10adf0f84:
  *puVar2 = 0;
  return param_1;
}



/* Entry: 10adf0f9c; end: 10adf0faf;  */

long FUN_10adf0f9c(long param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar5 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar6 = puVar5;
  }
  else {
    puVar2 = (uint *)(uVar1 - 1);
    uVar3 = (ulong)*puVar2;
    if ((int)*puVar2 < 1) goto LAB_10adf2f74;
    puVar6 = (ulong *)(uVar1 + 7);
  }
  do {
    puVar4 = (undefined8 *)*puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar4);
    }
    uVar3 = uVar3 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if ((*puVar5 & 1) == 0) {
    return param_1;
  }
  puVar2 = (uint *)(*puVar5 - 1);
LAB_10adf2f74:
  __ZdlPv(puVar2);
  return param_1;
}



/* Entry: 10adf0fb0; end: 10adf103b;  */

void FUN_10adf0fb0(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      FUN_10adf0978(param_1);
      bVar1 = *(byte *)(param_1 + 8);
      goto joined_r0x00010adf1028;
    }
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
  }
  FUN_10adf0978(param_1);
  bVar1 = *(byte *)(param_1 + 8);
joined_r0x00010adf1028:
  if ((bVar1 & 1) == 0) {
    return;
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10adf103c; end: 10adf15bf;  */

/* WARNING: Removing unreachable block (ram,0x00010adf13a4) */
/* WARNING: Removing unreachable block (ram,0x00010adf13ac) */
/* WARNING: Removing unreachable block (ram,0x00010adf139c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10adf103c(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  byte bVar5;
  ulong *puVar6;
  byte *pbVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  byte *pbVar26;
  undefined8 uVar27;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar18 = (ulong *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar18 + 0x17);
  uVar22 = (ulong)cVar4;
  if ((long)uVar22 < 0) {
    if (puVar18[1] == 0) goto LAB_10adf114c;
    puVar3 = (ulong *)*puVar18;
    uVar23 = puVar18[1];
  }
  else {
    puVar3 = puVar18;
    uVar23 = uVar22;
    if ((int)cVar4 == 0) {
LAB_10adf114c:
      iVar25 = *(int *)(param_1 + 0x18);
      goto joined_r0x00010adf1154;
    }
  }
  if (uVar23 << 0x20 == 0) {
LAB_10adf116c:
    if (((uint)(int)cVar4 >> 7 & 1) != 0) goto LAB_10adf11a8;
LAB_10adf1170:
    uVar22 = uVar22 & 0xff;
LAB_10adf11b8:
    if ((long)uVar22 <= (*(long *)param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (byte)uVar22;
      puVar3 = (ulong *)*puVar18;
      if (-1 < *(char *)((long)puVar18 + 0x17)) {
        puVar3 = puVar18;
      }
      _memcpy(param_2 + 2,puVar3,uVar22);
      param_2 = param_2 + 2 + uVar22;
      iVar25 = *(int *)(param_1 + 0x18);
      goto joined_r0x00010adf1154;
    }
  }
  else {
    lVar9 = (long)(uVar23 << 0x20) >> 0x20;
    puVar2 = (ulong *)((long)puVar3 + lVar9);
    puVar11 = puVar3;
    for (; (7 < lVar9 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
      puVar11 = puVar11 + 1;
      lVar9 = lVar9 + -8;
    }
    puVar6 = puVar3;
    if (puVar3 < puVar2) {
      uVar10 = (long)puVar2 - (long)puVar11;
      puVar11 = puVar3;
      for (uVar23 = uVar10 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
        puVar6 = puVar11;
        if ((char)*puVar11 < '\0') goto LAB_10adf1160;
        puVar11 = (ulong *)((long)puVar11 + 1);
      }
      puVar3 = (ulong *)((long)puVar3 + uVar10);
      puVar6 = puVar3;
      if (2 < uVar10 - 1) {
        puVar11 = (ulong *)((long)puVar11 + 3);
        do {
          puVar6 = puVar11;
          if ((char)*puVar11 < '\0') break;
          puVar1 = (ulong *)((long)puVar11 + 1);
          puVar11 = (ulong *)((long)puVar11 + 4);
          puVar6 = puVar3;
        } while (puVar1 != puVar3);
      }
    }
LAB_10adf1160:
    func_0x000107c34ffc(puVar6,puVar2,0);
    if (puVar6 != (ulong *)0x0) goto LAB_10adf116c;
    func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af065,0x19,&UNK_10f774276);
    uVar22 = (ulong)*(byte *)((long)puVar18 + 0x17);
    if (-1 < (char)*(byte *)((long)puVar18 + 0x17)) goto LAB_10adf1170;
LAB_10adf11a8:
    uVar22 = puVar18[1];
    if ((long)uVar22 < 0x80) goto LAB_10adf11b8;
  }
  param_2 = param_3;
  func_0x00010b4d50d0(param_3,1,puVar18);
  iVar25 = *(int *)(param_1 + 0x18);
joined_r0x00010adf1154:
  if (iVar25 != 0) {
    iVar24 = 0;
    pbVar13 = param_3 + 0x10;
    pbVar14 = param_3 + 0x20;
    pbVar12 = param_2;
    do {
      uVar22 = *(ulong *)(param_1 + 0x10);
      puVar18 = (ulong *)(param_1 + 0x10);
      if ((uVar22 & 1) != 0) {
        puVar18 = (ulong *)(uVar22 + (long)iVar24 * 8 + 7);
      }
      param_2 = (byte *)*puVar18;
      uVar21 = *(uint *)(param_2 + 0x20);
      pbVar26 = *(byte **)param_3;
      pbVar7 = pbVar12;
      if (pbVar26 <= pbVar12) {
        do {
          pbVar7 = pbVar13;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar16 = pbVar14;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adf1364:
            *(byte **)param_3 = pbVar16;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar27 = *(undefined8 *)pbVar26;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar26 + 8);
              *(undefined8 *)pbVar13 = uVar27;
              *(byte **)(param_3 + 8) = pbVar26;
              goto LAB_10adf1364;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar13,(long)pbVar26 - (long)pbVar13);
            do {
              plVar8 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar8 + 0x10))(plVar8,&pbStack_70,&uStack_64);
              if (((ulong)plVar8 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar14;
                goto LAB_10adf12c0;
              }
            } while (uStack_64 == 0);
            puVar17 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar27 = *puVar17;
              *(undefined8 *)(param_3 + 0x18) = puVar17[1];
              *(undefined8 *)pbVar13 = uVar27;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar16 = pbVar13 + (int)uStack_64;
              goto LAB_10adf1364;
            }
            uVar27 = *puVar17;
            *(undefined8 *)(pbStack_70 + 8) = puVar17[1];
            *(undefined8 *)pbStack_70 = uVar27;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar7 = pbStack_70;
            pbVar16 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adf12c0:
          pbVar12 = pbVar7 + ((int)pbVar12 - (int)pbVar26);
          pbVar7 = pbVar12;
          pbVar26 = pbVar16;
        } while (pbVar16 <= pbVar12);
      }
      pbVar12 = pbVar7 + 1;
      *pbVar7 = 0x12;
      if (0x7f < uVar21) {
        do {
          pbVar7 = pbVar12;
          pbVar12 = pbVar7 + 1;
          *pbVar7 = (byte)uVar21 | 0x80;
          uVar20 = uVar21 >> 0xe;
          uVar21 = uVar21 >> 7;
        } while (uVar20 != 0);
      }
      *pbVar12 = (byte)uVar21;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar7 + 2,param_3);
      iVar24 = iVar24 + 1;
      pbVar12 = param_2;
    } while (iVar24 != iVar25);
  }
  uVar21 = *(uint *)(param_1 + 0x3c);
  pbVar12 = param_2;
  if (uVar21 - 3 < 3) {
    pbVar12 = *(byte **)(param_1 + 0x30);
    uVar20 = *(uint *)(pbVar12 + 0x28);
    pbVar13 = *(byte **)param_3;
    if (param_2 < pbVar13) {
      bVar15 = (byte)(uVar21 << 3) | 2;
      pbVar13 = param_2;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          bVar5 = (byte)(uVar21 << 3);
          goto joined_r0x00010adf150c;
        }
        pbVar14 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar14 + ((int)param_2 - (int)pbVar13);
        pbVar13 = *(byte **)param_3;
      } while (pbVar13 <= param_2);
      bVar5 = (byte)(uVar21 << 3);
joined_r0x00010adf150c:
      bVar15 = bVar5 | 2;
      pbVar13 = param_2;
      if (0xf < uVar21) {
        bVar15 = 0;
        pbVar13 = param_2 + 1;
        *param_2 = bVar5 | 0x82;
      }
    }
    pbVar14 = pbVar13 + 1;
    *pbVar13 = bVar15;
    if (0x7f < uVar20) {
      do {
        pbVar13 = pbVar14;
        pbVar14 = pbVar13 + 1;
        *pbVar13 = (byte)uVar20 | 0x80;
        uVar21 = uVar20 >> 0xe;
        uVar20 = uVar20 >> 7;
      } while (uVar21 != 0);
    }
    *pbVar14 = (byte)uVar20;
    (**(code **)(*(long *)pbVar12 + 0x38))(pbVar12,pbVar13 + 2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar22 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar23 = (ulong)*(char *)(uVar22 + 0x1f);
    if ((long)uVar23 < 0) {
      lVar9 = *(long *)(uVar22 + 8);
      uVar23 = (ulong)*(uint *)(uVar22 + 0x10);
    }
    else {
      lVar9 = uVar22 + 8;
    }
    uVar21 = (uint)uVar23;
    if (*(long *)param_3 - (long)pbVar12 < (long)(int)uVar21) {
      pbVar13 = (byte *)((*(long *)param_3 - (long)pbVar12) + 0x10);
      if ((int)pbVar13 < (int)uVar21) {
        do {
          lVar19 = (long)(int)pbVar13;
          _memcpy(pbVar12,lVar9,lVar19);
          uVar21 = (int)uVar23 - (int)pbVar13;
          uVar23 = (ulong)uVar21;
          lVar9 = lVar9 + lVar19;
          pbVar12 = pbVar12 + lVar19;
          pbVar13 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar13 = pbVar13 + (0x10 - (long)(param_3 + 0x10));
              iVar25 = (int)pbVar13;
              pbVar12 = param_3 + 0x10;
              goto joined_r0x00010adf15a0;
            }
            pbVar14 = param_3;
            func_0x000107c303dc();
            pbVar12 = pbVar14 + ((int)pbVar12 - (int)pbVar13);
            pbVar13 = *(byte **)param_3;
          } while (pbVar13 <= pbVar12);
          pbVar13 = pbVar13 + (0x10 - (long)pbVar12);
          iVar25 = (int)pbVar13;
joined_r0x00010adf15a0:
        } while (iVar25 < (int)uVar21);
      }
      _memcpy(pbVar12,lVar9,(long)(int)uVar21);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adf15c0; end: 10adf1a63;  */

long FUN_10adf15c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  
  uVar10 = *(ulong *)(param_1 + 0x10);
  lVar19 = (long)*(int *)(param_1 + 0x18);
  puVar9 = (ulong *)(param_1 + 0x10);
  if ((uVar10 & 1) != 0) {
    puVar9 = (ulong *)(uVar10 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar19 = 0;
  }
  else {
    lVar11 = lVar19 << 3;
    do {
      uVar10 = *puVar9;
      uVar13 = *(ulong *)(uVar10 + 0x10) & 0xfffffffffffffffc;
      lVar15 = (long)*(char *)(uVar13 + 0x17);
      if (lVar15 < 0) {
        if (*(long *)(uVar13 + 8) != 0) goto LAB_10adf1608;
LAB_10adf16a4:
        lVar15 = 0;
        uVar13 = *(ulong *)(uVar10 + 0x18) & 0xfffffffffffffffc;
        cVar7 = *(char *)(uVar13 + 0x17);
      }
      else {
        if (lVar15 == 0) goto LAB_10adf16a4;
LAB_10adf1608:
        lVar16 = *(long *)(uVar13 + 8);
        if (-1 < *(char *)(uVar13 + 0x17)) {
          lVar16 = lVar15;
        }
        lVar15 = lVar16 + (ulong)((int)LZCOUNT((int)lVar16) * -9 + 0x160U >> 6) + 1;
        uVar13 = *(ulong *)(uVar10 + 0x18) & 0xfffffffffffffffc;
        cVar7 = *(char *)(uVar13 + 0x17);
      }
      lVar8 = (long)cVar7;
      lVar16 = lVar8;
      if (lVar8 < 0) {
        lVar16 = *(long *)(uVar13 + 8);
      }
      if (lVar16 != 0) {
        lVar16 = *(long *)(uVar13 + 8);
        if (-1 < cVar7) {
          lVar16 = lVar8;
        }
        lVar15 = lVar15 + lVar16 + (ulong)((int)LZCOUNT((int)lVar16) * -9 + 0x160U >> 6) + 1;
      }
      if ((*(ulong *)(uVar10 + 8) & 1) != 0) {
        uVar13 = *(ulong *)(uVar10 + 8) & 0xfffffffffffffffe;
        lVar16 = (long)*(char *)(uVar13 + 0x1f);
        if (lVar16 < 0) {
          lVar16 = *(long *)(uVar13 + 0x10);
        }
        lVar15 = lVar16 + lVar15;
      }
      *(int *)(uVar10 + 0x20) = (int)lVar15;
      lVar19 = lVar15 + lVar19 + (ulong)((int)LZCOUNT((int)lVar15) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  uVar10 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar15 = (long)*(char *)(uVar10 + 0x17);
  lVar11 = lVar15;
  if (lVar15 < 0) {
    lVar11 = *(long *)(uVar10 + 8);
  }
  if (lVar11 != 0) {
    lVar11 = *(long *)(uVar10 + 8);
    if (-1 < *(char *)(uVar10 + 0x17)) {
      lVar11 = lVar15;
    }
    lVar19 = lVar19 + lVar11 + (ulong)((int)LZCOUNT((int)lVar11) * -9 + 0x160U >> 6) + 1;
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 == 5) {
    lVar11 = *(long *)(param_1 + 0x30);
    uVar4 = *(uint *)(lVar11 + 0x18);
    uVar13 = (ulong)uVar4;
    uVar10 = uVar13;
    if (0 < (int)uVar4) {
      uVar12 = *(ulong *)(lVar11 + 0x10);
      if ((uVar12 & 1) == 0) {
LAB_10adf17f0:
        uVar10 = *(ulong *)(uVar12 + 8);
        if (-1 < (char)*(byte *)(uVar12 + 0x17)) {
          uVar10 = (ulong)*(byte *)(uVar12 + 0x17);
        }
        uVar10 = uVar13 + uVar13 * (uVar10 + ((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6));
      }
      else {
        if (uVar4 == 1) {
          uVar14 = 0;
          uVar10 = 1;
        }
        else {
          lVar15 = 0;
          uVar14 = uVar13 & 0x7ffffffe;
          plVar17 = (long *)(uVar12 + 0xf);
          uVar18 = uVar14;
          do {
            bVar6 = *(byte *)(plVar17[-1] + 0x17);
            bVar5 = *(byte *)(*plVar17 + 0x17);
            uVar1 = *(ulong *)(plVar17[-1] + 8);
            if (-1 < (char)bVar6) {
              uVar1 = (ulong)bVar6;
            }
            uVar2 = *(ulong *)(*plVar17 + 8);
            if (-1 < (char)bVar5) {
              uVar2 = (ulong)bVar5;
            }
            uVar10 = uVar1 + uVar10 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
            lVar15 = uVar2 + lVar15 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
            plVar17 = plVar17 + 2;
            uVar18 = uVar18 - 2;
          } while (uVar18 != 0);
          uVar10 = lVar15 + uVar10;
          if (uVar14 == uVar13) goto LAB_10adf19f0;
        }
        lVar15 = uVar13 - uVar14;
        plVar17 = (long *)((uVar12 - 1) + uVar14 * 8);
        do {
          plVar17 = plVar17 + 1;
          bVar6 = *(byte *)(*plVar17 + 0x17);
          uVar13 = *(ulong *)(*plVar17 + 8);
          if (-1 < (char)bVar6) {
            uVar13 = (ulong)bVar6;
          }
          uVar10 = uVar13 + uVar10 + (ulong)((int)LZCOUNT((int)uVar13) * -9 + 0x160U >> 6);
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
  }
  else {
    if (iVar3 != 4) {
      if (iVar3 == 3) {
        lVar11 = *(long *)(param_1 + 0x30);
        FUN_10adf21d0();
        lVar19 = lVar19 + lVar11 + (ulong)((int)LZCOUNT((int)lVar11) * -9 + 0x160U >> 6) + 1;
        uVar10 = *(ulong *)(param_1 + 8);
      }
      else {
        uVar10 = *(ulong *)(param_1 + 8);
      }
      goto joined_r0x00010adf1778;
    }
    lVar11 = *(long *)(param_1 + 0x30);
    uVar4 = *(uint *)(lVar11 + 0x18);
    uVar13 = (ulong)uVar4;
    uVar10 = uVar13;
    if (0 < (int)uVar4) {
      uVar12 = *(ulong *)(lVar11 + 0x10);
      if ((uVar12 & 1) == 0) goto LAB_10adf17f0;
      if (uVar4 == 1) {
        uVar14 = 0;
        uVar10 = 1;
      }
      else {
        lVar15 = 0;
        uVar14 = uVar13 & 0x7ffffffe;
        plVar17 = (long *)(uVar12 + 0xf);
        uVar18 = uVar14;
        do {
          bVar6 = *(byte *)(plVar17[-1] + 0x17);
          bVar5 = *(byte *)(*plVar17 + 0x17);
          uVar1 = *(ulong *)(plVar17[-1] + 8);
          if (-1 < (char)bVar6) {
            uVar1 = (ulong)bVar6;
          }
          uVar2 = *(ulong *)(*plVar17 + 8);
          if (-1 < (char)bVar5) {
            uVar2 = (ulong)bVar5;
          }
          uVar10 = uVar1 + uVar10 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
          lVar15 = uVar2 + lVar15 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
          plVar17 = plVar17 + 2;
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
        uVar10 = lVar15 + uVar10;
        if (uVar14 == uVar13) goto LAB_10adf19f0;
      }
      lVar15 = uVar13 - uVar14;
      plVar17 = (long *)((uVar12 - 1) + uVar14 * 8);
      do {
        plVar17 = plVar17 + 1;
        bVar6 = *(byte *)(*plVar17 + 0x17);
        uVar13 = *(ulong *)(*plVar17 + 8);
        if (-1 < (char)bVar6) {
          uVar13 = (ulong)bVar6;
        }
        uVar10 = uVar13 + uVar10 + (ulong)((int)LZCOUNT((int)uVar13) * -9 + 0x160U >> 6);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
LAB_10adf19f0:
  if ((*(ulong *)(lVar11 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(lVar11 + 8) & 0xfffffffffffffffe;
    lVar15 = (long)*(char *)(uVar13 + 0x1f);
    if (lVar15 < 0) {
      lVar15 = *(long *)(uVar13 + 0x10);
    }
    uVar10 = lVar15 + uVar10;
  }
  *(int *)(lVar11 + 0x28) = (int)uVar10;
  lVar19 = lVar19 + uVar10 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6) + 1;
  uVar10 = *(ulong *)(param_1 + 8);
joined_r0x00010adf1778:
  if ((uVar10 & 1) != 0) {
    lVar11 = (long)*(char *)((uVar10 & 0xfffffffffffffffe) + 0x1f);
    if (lVar11 < 0) {
      lVar11 = *(long *)((uVar10 & 0xfffffffffffffffe) + 0x10);
    }
    *(int *)(param_1 + 0x38) = (int)(lVar11 + lVar19);
    return lVar11 + lVar19;
  }
  *(int *)(param_1 + 0x38) = (int)lVar19;
  return lVar19;
}



/* Entry: 10adf1a64; end: 10adf1df7;  */

/* WARNING: Possible PIC construction at 0x00010adf1d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010adf1d0c) */
/* WARNING: Removing unreachable block (ram,0x00010adf1d14) */

void FUN_10adf1a64(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *unaff_x19;
  ulong *puVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  undefined **ppuVar17;
  long *plVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar14 = (ulong *)(param_1 + 8);
  uVar16 = *puVar14;
  if ((uVar16 & 1) == 0) {
    iVar2 = *(int *)(param_2 + 0x18);
  }
  else {
    uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
    iVar2 = *(int *)(param_2 + 0x18);
  }
  if (iVar2 != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar11 + 0x17);
  uVar12 = (ulong)cVar4;
  uVar13 = uVar12;
  if ((long)uVar12 < 0) {
    uVar13 = puVar11[1];
  }
  if (uVar13 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    if (((ulong)plVar7 & 1) == 0) {
      uVar13 = *(ulong *)(param_1 + 0x28);
    }
    else {
      plVar7 = *(long **)((ulong)plVar7 & 0xfffffffffffffffe);
      uVar13 = *(ulong *)(param_1 + 0x28);
    }
    if ((uVar13 & 3) == 0) {
      uVar13 = puVar11[1];
      puVar8 = (undefined8 *)*puVar11;
      if (-1 < cVar4) {
        uVar13 = uVar12;
        puVar8 = puVar11;
      }
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar13) goto LAB_10adf1ddc;
        if (0x16 < uVar13) {
          plVar18 = (long *)0x19;
          if ((uVar13 | 7) != 0x17) {
            plVar18 = (long *)((uVar13 | 7) + 1);
          }
          plVar9 = plVar18;
          __Znwm();
          *plVar7 = (long)plVar9;
          uVar12 = 2;
          goto LAB_10adf1c18;
        }
        *(char *)((long)plVar7 + 0x17) = (char)uVar13;
        uVar12 = 2;
        plVar9 = plVar7;
        plVar18 = plVar7;
        if (uVar13 != 0) goto LAB_10adf1c28;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar13) {
          func_0x000104bd47d4();
LAB_10adf1ddc:
          func_0x000104bd47d4();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10adf1de4);
          (*pcVar6)();
        }
        if (uVar13 < 0x17) {
          *(char *)((long)plVar7 + 0x17) = (char)uVar13;
          uVar12 = 3;
          plVar9 = plVar7;
          plVar18 = plVar7;
          if (uVar13 == 0) goto LAB_10adf1c38;
        }
        else {
          plVar18 = (long *)0x19;
          if ((uVar13 | 7) != 0x17) {
            plVar18 = (long *)((uVar13 | 7) + 1);
          }
          plVar9 = plVar18;
          __Znwm();
          *plVar7 = (long)plVar9;
          uVar12 = 3;
LAB_10adf1c18:
          plVar7[1] = uVar13;
          plVar7[2] = (ulong)plVar18 | 0x8000000000000000;
          plVar18 = plVar7;
        }
LAB_10adf1c28:
        _memmove(plVar9,puVar8,uVar13);
        plVar7 = plVar9;
      }
LAB_10adf1c38:
      *(undefined1 *)((long)plVar7 + uVar13) = 0;
      *(ulong *)(param_1 + 0x28) = uVar12 | (ulong)plVar18;
    }
    else {
      puVar8 = (undefined8 *)(uVar13 & 0xfffffffffffffffc);
      if (puVar8 != puVar11) {
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          uVar13 = puVar11[1];
          puVar5 = (undefined8 *)*puVar11;
          if (-1 < cVar4) {
            uVar13 = uVar12;
            puVar5 = puVar11;
          }
          func_0x000107c27ba0(puVar8,puVar5,uVar13);
        }
        else if (cVar4 < '\0') {
          func_0x000107c27ba4(puVar8,*puVar11,puVar11[1]);
        }
        else {
          uVar20 = puVar11[1];
          uVar19 = *puVar11;
          puVar8[2] = puVar11[2];
          puVar8[1] = uVar20;
          *puVar8 = uVar19;
        }
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0) {
LAB_10adf1d74:
    uVar16 = *(ulong *)(param_2 + 8);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10adf0978(param_1);
      }
      *(int *)(param_1 + 0x3c) = iVar2;
    }
    if (iVar2 == 5) {
      if (iVar3 == 5) {
        lVar15 = *(long *)(param_1 + 0x30);
        ppuVar17 = *(undefined ***)(param_2 + 0x30);
        if (*(int *)(param_2 + 0x3c) != 5) {
          ppuVar17 = &PTR_PTR_113309f70;
        }
        iVar2 = *(int *)(ppuVar17 + 3);
joined_r0x00010adf1d40:
        if (iVar2 != 0) {
          func_0x000107c303bc(lVar15 + 0x10,ppuVar17 + 2);
        }
LAB_10adf1cf4:
        if (((ulong)ppuVar17[1] & 1) != 0) {
          unaff_x30 = 0x10adf1d0c;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          puVar10 = (ulong *)(lVar15 + 8);
          unaff_x19 = puVar14;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
      else {
        func_0x00010adfbc6c(uVar16,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar16;
      }
      goto LAB_10adf1d74;
    }
    if (iVar2 != 4) {
      if (iVar2 == 3) {
        if (iVar3 != 3) {
          func_0x00010adfba94(uVar16,*(undefined8 *)(param_2 + 0x30));
          *(ulong *)(param_1 + 0x30) = uVar16;
          uVar16 = *(ulong *)(param_2 + 8);
          goto joined_r0x00010adf1d5c;
        }
        lVar15 = *(long *)(param_1 + 0x30);
        ppuVar17 = *(undefined ***)(param_2 + 0x30);
        if (*(int *)(param_2 + 0x3c) != 3) {
          ppuVar17 = &PTR_PTR_113309fd0;
        }
        if (*(int *)(ppuVar17 + 3) != 0) {
          func_0x000107c303c4(lVar15 + 0x10,ppuVar17 + 2);
        }
        goto LAB_10adf1cf4;
      }
      goto LAB_10adf1d74;
    }
    if (iVar3 == 4) {
      lVar15 = *(long *)(param_1 + 0x30);
      ppuVar17 = *(undefined ***)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x3c) != 4) {
        ppuVar17 = &PTR_PTR_113309fa0;
      }
      iVar2 = *(int *)(ppuVar17 + 3);
      goto joined_r0x00010adf1d40;
    }
    func_0x00010adfbb80(uVar16,*(undefined8 *)(param_2 + 0x30));
    *(ulong *)(param_1 + 0x30) = uVar16;
    uVar16 = *(ulong *)(param_2 + 8);
  }
joined_r0x00010adf1d5c:
  puVar10 = puVar14;
  if ((uVar16 & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar10 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10adf1df8; end: 10adf1e93;  */

void FUN_10adf1df8(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar2;
  if ((uVar1 == 0) || (*(long *)(param_1 + 0x20) != 0)) goto LAB_10adf1e80;
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar4 = puVar2;
LAB_10adf1e58:
    do {
      if ((long *)*puVar4 != (long *)0x0) {
        (**(code **)(*(long *)*puVar4 + 8))();
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto LAB_10adf1e80;
  }
  else {
    uVar3 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar4 = (ulong *)(uVar1 + 7);
      goto LAB_10adf1e58;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10adf1e80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10adf1e94; end: 10adf1e9f;  */

undefined ** FUN_10adf1e94(void)

{
  return &PTR_DAT_110c76be8;
}



/* Entry: 10adf1ea0; end: 10adf1ee7;  */

void FUN_10adf1ea0(long param_1)

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



/* Entry: 10adf1ee8; end: 10adf21cf;  */

void FUN_10adf1ee8(long param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong *puVar3;
  uint uVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar15 = 0;
    pbVar1 = (byte *)(param_3 + 2);
    pbVar2 = (byte *)(param_3 + 4);
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar3 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar3 = (ulong *)(uVar8 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)*puVar3;
      uVar13 = *(uint *)(param_2 + 0x30);
      pbVar17 = (byte *)*param_3;
      pbVar5 = pbVar9;
      if (pbVar17 <= pbVar9) {
        do {
          pbVar5 = pbVar1;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar10 = pbVar2;
          if (param_3[6] == 0) {
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10adf207c:
            *param_3 = (long)pbVar10;
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              param_3[3] = *(long *)(pbVar17 + 8);
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbVar17;
              goto LAB_10adf207c;
            }
            _memcpy(param_3[1],pbVar1,(long)pbVar17 - (long)pbVar1);
            do {
              plVar6 = (long *)param_3[6];
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) {
                *(undefined1 *)(param_3 + 7) = 1;
                *param_3 = (long)pbVar2;
                goto LAB_10adf1fd8;
              }
            } while (uStack_64 == 0);
            puVar11 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar11;
              param_3[3] = puVar11[1];
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbStack_70;
              pbVar10 = pbVar1 + (int)uStack_64;
              goto LAB_10adf207c;
            }
            uVar18 = *puVar11;
            *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
            *(undefined8 *)pbStack_70 = uVar18;
            *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
            param_3[1] = 0;
            pbVar5 = pbStack_70;
            pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adf1fd8:
          pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar17);
          pbVar5 = pbVar9;
          pbVar17 = pbVar10;
        } while (pbVar10 <= pbVar9);
      }
      pbVar9 = pbVar5 + 1;
      *pbVar5 = 10;
      if (0x7f < uVar13) {
        do {
          pbVar5 = pbVar9;
          pbVar9 = pbVar5 + 1;
          *pbVar5 = (byte)uVar13 | 0x80;
          uVar4 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
        } while (uVar4 != 0);
      }
      *pbVar9 = (byte)uVar13;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar5 + 2,param_3);
      iVar15 = iVar15 + 1;
      pbVar9 = param_2;
    } while (iVar15 != iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar7 = *(long *)(uVar8 + 8);
      uVar14 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar7 = uVar8 + 8;
    }
    uVar13 = (uint)uVar14;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar9 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar9 < (int)uVar13) {
        do {
          lVar12 = (long)(int)pbVar9;
          _memcpy(param_2,lVar7,lVar12);
          uVar13 = (int)uVar14 - (int)pbVar9;
          uVar14 = (ulong)uVar13;
          lVar7 = lVar7 + lVar12;
          param_2 = param_2 + lVar12;
          pbVar9 = (byte *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              pbVar9 = pbVar9 + (0x10 - (long)(param_3 + 2));
              iVar16 = (int)pbVar9;
              param_2 = (byte *)(param_3 + 2);
              goto joined_r0x00010adf21b0;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            param_2 = (byte *)((long)plVar6 + (long)((int)param_2 - (int)pbVar9));
            pbVar9 = (byte *)*param_3;
          } while (pbVar9 <= param_2);
          pbVar9 = pbVar9 + (0x10 - (long)param_2);
          iVar16 = (int)pbVar9;
joined_r0x00010adf21b0:
        } while (iVar16 < (int)uVar13);
      }
      _memcpy(param_2,lVar7,(long)(int)uVar13);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adf21d0; end: 10adf23ff;  */

long FUN_10adf21d0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  
  uVar11 = *(ulong *)(param_1 + 0x10);
  lVar8 = (long)*(int *)(param_1 + 0x18);
  puVar9 = (ulong *)(param_1 + 0x10);
  if ((uVar11 & 1) != 0) {
    puVar9 = (ulong *)(uVar11 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar8 = 0;
  }
  else {
    puVar1 = puVar9 + lVar8;
    do {
      uVar12 = *puVar9;
      uVar4 = *(uint *)(uVar12 + 0x18);
      uVar14 = (ulong)uVar4;
      uVar11 = uVar14;
      if (0 < (int)uVar4) {
        uVar13 = *(ulong *)(uVar12 + 0x10);
        if ((uVar13 & 1) == 0) {
          uVar11 = *(ulong *)(uVar13 + 8);
          if (-1 < (char)*(byte *)(uVar13 + 0x17)) {
            uVar11 = (ulong)*(byte *)(uVar13 + 0x17);
          }
          uVar11 = uVar14 + uVar14 * (uVar11 + ((int)LZCOUNT((int)uVar11) * -9 + 0x160U >> 6));
        }
        else {
          if (uVar4 == 1) {
            uVar16 = 0;
            uVar11 = 1;
          }
          else {
            lVar10 = 0;
            uVar16 = uVar14 & 0x7ffffffe;
            plVar17 = (long *)(uVar13 + 0xf);
            uVar7 = uVar16;
            do {
              bVar6 = *(byte *)(plVar17[-1] + 0x17);
              bVar5 = *(byte *)(*plVar17 + 0x17);
              uVar2 = *(ulong *)(plVar17[-1] + 8);
              if (-1 < (char)bVar6) {
                uVar2 = (ulong)bVar6;
              }
              uVar3 = *(ulong *)(*plVar17 + 8);
              if (-1 < (char)bVar5) {
                uVar3 = (ulong)bVar5;
              }
              uVar11 = uVar2 + uVar11 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
              lVar10 = uVar3 + lVar10 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6);
              plVar17 = plVar17 + 2;
              uVar7 = uVar7 - 2;
            } while (uVar7 != 0);
            uVar11 = lVar10 + uVar11;
            if (uVar16 == uVar14) goto LAB_10adf232c;
          }
          lVar10 = uVar14 - uVar16;
          plVar17 = (long *)((uVar13 - 1) + uVar16 * 8);
          do {
            plVar17 = plVar17 + 1;
            bVar6 = *(byte *)(*plVar17 + 0x17);
            uVar14 = *(ulong *)(*plVar17 + 8);
            if (-1 < (char)bVar6) {
              uVar14 = (ulong)bVar6;
            }
            uVar11 = uVar14 + uVar11 + (ulong)((int)LZCOUNT((int)uVar14) * -9 + 0x160U >> 6);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
LAB_10adf232c:
      uVar14 = *(ulong *)(uVar12 + 0x28) & 0xfffffffffffffffc;
      lVar15 = (long)*(char *)(uVar14 + 0x17);
      lVar10 = lVar15;
      if (lVar15 < 0) {
        lVar10 = *(long *)(uVar14 + 8);
      }
      if (lVar10 != 0) {
        lVar10 = *(long *)(uVar14 + 8);
        if (-1 < *(char *)(uVar14 + 0x17)) {
          lVar10 = lVar15;
        }
        uVar11 = uVar11 + lVar10 + (ulong)((int)LZCOUNT((int)lVar10) * -9 + 0x160U >> 6) + 1;
      }
      if ((*(ulong *)(uVar12 + 8) & 1) != 0) {
        uVar14 = *(ulong *)(uVar12 + 8) & 0xfffffffffffffffe;
        lVar10 = (long)*(char *)(uVar14 + 0x1f);
        if (lVar10 < 0) {
          lVar10 = *(long *)(uVar14 + 0x10);
        }
        uVar11 = lVar10 + uVar11;
      }
      *(int *)(uVar12 + 0x30) = (int)uVar11;
      lVar8 = uVar11 + lVar8 + (ulong)((int)LZCOUNT((int)uVar11) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar10 = (long)*(char *)(uVar11 + 0x1f);
    if (lVar10 < 0) {
      lVar10 = *(long *)(uVar11 + 0x10);
    }
    *(int *)(param_1 + 0x28) = (int)(lVar10 + lVar8);
    return lVar10 + lVar8;
  }
  *(int *)(param_1 + 0x28) = (int)lVar8;
  return lVar8;
}



/* Entry: 10adf2400; end: 10adf2453;  */

void FUN_10adf2400(long param_1,long param_2)

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



/* Entry: 10adf2454; end: 10adf253b;  */

long FUN_10adf2454(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x28) ^ 2);
  puVar6 = puVar4;
  if (((ulong)puVar4 & 3) != 0) {
    puVar6 = (undefined8 *)0x0;
  }
  if ((puVar6 != (undefined8 *)0x0) && (*(char *)((long)puVar4 + 0x17) < '\0')) {
    __ZdlPv(*puVar4);
  }
  __ZdlPv(puVar6);
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar2 & 1) == 0) {
    uVar5 = 1;
    puVar7 = puVar1;
  }
  else {
    puVar3 = (uint *)(uVar2 - 1);
    uVar5 = (ulong)*puVar3;
    if ((int)*puVar3 < 1) goto LAB_10adf2520;
    puVar7 = (ulong *)(uVar2 + 7);
  }
  do {
    puVar6 = (undefined8 *)*puVar7;
    if (puVar6 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      __ZdlPv(puVar6);
    }
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
  } while (uVar5 != 0);
  if ((*puVar1 & 1) == 0) {
    return param_1;
  }
  puVar3 = (uint *)(*puVar1 - 1);
LAB_10adf2520:
  __ZdlPv(puVar3);
  return param_1;
}



/* Entry: 10adf253c; end: 10adf253f;  */

long FUN_10adf253c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x28) ^ 2);
  puVar6 = puVar4;
  if (((ulong)puVar4 & 3) != 0) {
    puVar6 = (undefined8 *)0x0;
  }
  if ((puVar6 != (undefined8 *)0x0) && (*(char *)((long)puVar4 + 0x17) < '\0')) {
    __ZdlPv(*puVar4);
  }
  __ZdlPv(puVar6);
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar2 & 1) == 0) {
    uVar5 = 1;
    puVar7 = puVar1;
  }
  else {
    puVar3 = (uint *)(uVar2 - 1);
    uVar5 = (ulong)*puVar3;
    if ((int)*puVar3 < 1) goto LAB_10adf2520;
    puVar7 = (ulong *)(uVar2 + 7);
  }
  do {
    puVar6 = (undefined8 *)*puVar7;
    if (puVar6 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      __ZdlPv(puVar6);
    }
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
  } while (uVar5 != 0);
  if ((*puVar1 & 1) == 0) {
    return param_1;
  }
  puVar3 = (uint *)(*puVar1 - 1);
LAB_10adf2520:
  __ZdlPv(puVar3);
  return param_1;
}



/* Entry: 10adf2540; end: 10adf2553;  */

void FUN_10adf2540(void)

{
  FUN_10adf2454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adf2554; end: 10adf255f;  */

undefined ** FUN_10adf2554(void)

{
  return &PTR_DAT_110c76c28;
}



/* Entry: 10adf2560; end: 10adf25db;  */

void FUN_10adf2560(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      bVar1 = *(byte *)(param_1 + 8);
      goto joined_r0x00010adf25c8;
    }
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
joined_r0x00010adf25c8:
  if ((bVar1 & 1) == 0) {
    return;
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10adf25dc; end: 10adf2aeb;  */

/* WARNING: Removing unreachable block (ram,0x00010adf2950) */
/* WARNING: Removing unreachable block (ram,0x00010adf2990) */
/* WARNING: Removing unreachable block (ram,0x00010adf29a0) */
/* WARNING: Removing unreachable block (ram,0x00010adf2998) */
/* WARNING: Removing unreachable block (ram,0x00010adf2948) */
/* WARNING: Removing unreachable block (ram,0x00010adf2958) */

long * FUN_10adf25dc(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  
  puVar16 = (ulong *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  cVar3 = *(char *)((long)puVar16 + 0x17);
  uVar15 = (ulong)cVar3;
  if ((long)uVar15 < 0) {
    if (puVar16[1] != 0) {
      puVar10 = (ulong *)*puVar16;
      uVar9 = puVar16[1];
      goto joined_r0x00010adf263c;
    }
  }
  else {
    puVar10 = puVar16;
    uVar9 = uVar15;
    if ((int)cVar3 != 0) {
joined_r0x00010adf263c:
      if (uVar9 << 0x20 == 0) {
LAB_10adf26fc:
        if (((uint)(int)cVar3 >> 7 & 1) == 0) goto LAB_10adf2700;
LAB_10adf2734:
        uVar15 = puVar16[1];
        if ((long)uVar15 < 0x80) goto LAB_10adf2740;
      }
      else {
        lVar14 = (long)(uVar9 << 0x20) >> 0x20;
        puVar12 = (ulong *)((long)puVar10 + lVar14);
        puVar8 = puVar10;
        for (; (7 < lVar14 && ((*puVar10 & 0x8080808080808080) == 0)); puVar10 = puVar10 + 1) {
          puVar8 = puVar8 + 1;
          lVar14 = lVar14 + -8;
        }
        puVar4 = puVar10;
        if (puVar10 < puVar12) {
          uVar7 = (long)puVar12 - (long)puVar8;
          puVar8 = puVar10;
          for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            puVar4 = puVar8;
            if ((char)*puVar8 < '\0') goto LAB_10adf26f0;
            puVar8 = (ulong *)((long)puVar8 + 1);
          }
          puVar10 = (ulong *)((long)puVar10 + uVar7);
          puVar4 = puVar10;
          if (2 < uVar7 - 1) {
            puVar8 = (ulong *)((long)puVar8 + 3);
            do {
              puVar4 = puVar8;
              if ((char)*puVar8 < '\0') break;
              puVar1 = (ulong *)((long)puVar8 + 1);
              puVar8 = (ulong *)((long)puVar8 + 4);
              puVar4 = puVar10;
            } while (puVar1 != puVar10);
          }
        }
LAB_10adf26f0:
        func_0x000107c34ffc(puVar4,puVar12,0);
        if (puVar4 != (ulong *)0x0) goto LAB_10adf26fc;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af07f,0x1d,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar16 + 0x17);
        if ((char)*(byte *)((long)puVar16 + 0x17) < '\0') goto LAB_10adf2734;
LAB_10adf2700:
        uVar15 = uVar15 & 0xff;
LAB_10adf2740:
        if ((long)uVar15 <= (*param_3 - (long)param_2) + 0xe) {
          *(undefined1 *)param_2 = 10;
          *(char *)((long)param_2 + 1) = (char)uVar15;
          puVar10 = (ulong *)*puVar16;
          if (-1 < *(char *)((long)puVar16 + 0x17)) {
            puVar10 = puVar16;
          }
          _memcpy((undefined1 *)((long)param_2 + 2),puVar10,uVar15);
          param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar15);
          goto LAB_10adf2784;
        }
      }
      plVar5 = param_3;
      func_0x00010b4d50d0(param_3,1,puVar16,param_2);
      uVar18 = *(uint *)(param_1 + 0x18);
      goto joined_r0x00010adf2790;
    }
  }
LAB_10adf2784:
  uVar18 = *(uint *)(param_1 + 0x18);
  plVar5 = param_2;
joined_r0x00010adf2790:
  if (0 < (int)uVar18) {
    uVar15 = 0;
    plVar13 = plVar5;
    do {
      while( true ) {
        uVar9 = *(ulong *)(param_1 + 0x10);
        puVar16 = (ulong *)(param_1 + 0x10);
        if ((uVar9 & 1) != 0) {
          puVar16 = (ulong *)(uVar9 + uVar15 * 8 + 7);
        }
        puVar16 = (ulong *)*puVar16;
        bVar2 = *(byte *)((long)puVar16 + 0x17);
        uVar9 = (ulong)bVar2;
        if (-1 < (char)bVar2) break;
        puVar10 = (ulong *)*puVar16;
        lVar14 = puVar16[1] << 0x20;
        if (lVar14 != 0) goto LAB_10adf27f4;
LAB_10adf28c0:
        if (-1 < (char)bVar2) goto LAB_10adf28f8;
LAB_10adf28c4:
        uVar9 = puVar16[1];
        if ((long)uVar9 < 0x80) goto LAB_10adf28f8;
LAB_10adf2968:
        plVar5 = param_3;
        func_0x00010b4d5120(param_3,2,puVar16,plVar13);
        uVar15 = uVar15 + 1;
        plVar13 = plVar5;
        if (uVar15 == uVar18) goto LAB_10adf29d8;
      }
      lVar14 = uVar9 << 0x20;
      puVar10 = puVar16;
      if (uVar9 == 0) goto LAB_10adf28c0;
LAB_10adf27f4:
      lVar17 = lVar14 >> 0x20;
      puVar12 = puVar10;
      for (puVar8 = puVar10; (7 < lVar17 && ((*puVar8 & 0x8080808080808080) == 0));
          puVar8 = puVar8 + 1) {
        puVar12 = puVar12 + 1;
        lVar17 = lVar17 + -8;
      }
      puVar10 = (ulong *)((long)puVar10 + (lVar14 >> 0x20));
      puVar4 = puVar8;
      if (puVar8 < puVar10) {
        uVar11 = (long)puVar10 - (long)puVar12;
        puVar12 = puVar8;
        for (uVar7 = uVar11 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          puVar4 = puVar12;
          if ((char)*puVar12 < '\0') goto LAB_10adf28b4;
          puVar12 = (ulong *)((long)puVar12 + 1);
        }
        puVar8 = (ulong *)((long)puVar8 + uVar11);
        puVar4 = puVar8;
        if (2 < uVar11 - 1) {
          puVar12 = (ulong *)((long)puVar12 + 3);
          do {
            puVar4 = puVar12;
            if ((char)*puVar12 < '\0') break;
            puVar1 = (ulong *)((long)puVar12 + 1);
            puVar12 = (ulong *)((long)puVar12 + 4);
            puVar4 = puVar8;
          } while (puVar1 != puVar8);
        }
      }
LAB_10adf28b4:
      func_0x000107c34ffc(puVar4,puVar10,0);
      if (puVar4 != (ulong *)0x0) goto LAB_10adf28c0;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af09d,0x21,&UNK_10f774276);
      uVar9 = (ulong)*(byte *)((long)puVar16 + 0x17);
      if ((char)*(byte *)((long)puVar16 + 0x17) < '\0') goto LAB_10adf28c4;
LAB_10adf28f8:
      if ((*param_3 - (long)plVar13) + 0xe < (long)uVar9) goto LAB_10adf2968;
      *(undefined1 *)plVar13 = 0x12;
      *(char *)((long)plVar13 + 1) = (char)uVar9;
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        puVar16 = (ulong *)*puVar16;
      }
      _memcpy((long)plVar13 + 2,puVar16,uVar9);
      plVar13 = (long *)((long)plVar13 + 2 + uVar9);
      uVar15 = uVar15 + 1;
      plVar5 = plVar13;
    } while (uVar15 != uVar18);
  }
LAB_10adf29d8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar14 = *(long *)(uVar15 + 8);
      uVar9 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar14 = uVar15 + 8;
    }
    uVar18 = (uint)uVar9;
    if (*param_3 - (long)plVar5 < (long)(int)uVar18) {
      puVar20 = (undefined1 *)((*param_3 - (long)plVar5) + 0x10);
      if ((int)puVar20 < (int)uVar18) {
        do {
          lVar17 = (long)(int)puVar20;
          _memcpy(plVar5,lVar14,lVar17);
          uVar18 = (int)uVar9 - (int)puVar20;
          uVar9 = (ulong)uVar18;
          lVar14 = lVar14 + lVar17;
          plVar5 = (long *)((long)plVar5 + lVar17);
          plVar13 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar20 = (undefined1 *)((long)plVar13 + (0x10 - (long)(param_3 + 2)));
              iVar19 = (int)puVar20;
              plVar5 = param_3 + 2;
              goto joined_r0x00010adf2acc;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar6 + (long)((int)plVar5 - (int)plVar13));
            plVar13 = (long *)*param_3;
          } while (plVar13 <= plVar5);
          puVar20 = (undefined1 *)((long)plVar13 + (0x10 - (long)plVar5));
          iVar19 = (int)puVar20;
joined_r0x00010adf2acc:
        } while (iVar19 < (int)uVar18);
      }
      _memcpy(plVar5,lVar14,(long)(int)uVar18);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar18);
    }
    else {
      _memcpy(plVar5,lVar14,uVar9 & 0xffffffff);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar18);
    }
  }
  return plVar5;
}



/* Entry: 10adf2aec; end: 10adf2ca7;  */

ulong FUN_10adf2aec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar8 = (ulong)uVar3;
  uVar7 = uVar8;
  if (0 < (int)uVar3) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(ulong *)(uVar6 + 8);
      if (-1 < (char)*(byte *)(uVar6 + 0x17)) {
        uVar7 = (ulong)*(byte *)(uVar6 + 0x17);
      }
      uVar7 = uVar8 + uVar8 * (uVar7 + ((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6));
    }
    else {
      if (uVar3 == 1) {
        uVar11 = 0;
        uVar7 = 1;
      }
      else {
        lVar9 = 0;
        uVar11 = uVar8 & 0x7ffffffe;
        plVar12 = (long *)(uVar6 + 0xf);
        uVar13 = uVar11;
        do {
          bVar5 = *(byte *)(plVar12[-1] + 0x17);
          bVar4 = *(byte *)(*plVar12 + 0x17);
          uVar1 = *(ulong *)(plVar12[-1] + 8);
          if (-1 < (char)bVar5) {
            uVar1 = (ulong)bVar5;
          }
          uVar2 = *(ulong *)(*plVar12 + 8);
          if (-1 < (char)bVar4) {
            uVar2 = (ulong)bVar4;
          }
          uVar7 = uVar1 + uVar7 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
          lVar9 = uVar2 + lVar9 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
          plVar12 = plVar12 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar7 = lVar9 + uVar7;
        if (uVar11 == uVar8) goto LAB_10adf2c28;
      }
      lVar9 = uVar8 - uVar11;
      plVar12 = (long *)((uVar6 - 1) + uVar11 * 8);
      do {
        plVar12 = plVar12 + 1;
        bVar5 = *(byte *)(*plVar12 + 0x17);
        uVar8 = *(ulong *)(*plVar12 + 8);
        if (-1 < (char)bVar5) {
          uVar8 = (ulong)bVar5;
        }
        uVar7 = uVar8 + uVar7 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
LAB_10adf2c28:
  uVar8 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar10 = (long)*(char *)(uVar8 + 0x17);
  lVar9 = lVar10;
  if (lVar10 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    lVar9 = *(long *)(uVar8 + 8);
    if (-1 < *(char *)(uVar8 + 0x17)) {
      lVar9 = lVar10;
    }
    uVar7 = uVar7 + lVar9 + (ulong)((int)LZCOUNT((int)lVar9) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar8 + 0x10);
    }
    *(int *)(param_1 + 0x30) = (int)(lVar9 + uVar7);
    return lVar9 + uVar7;
  }
  *(int *)(param_1 + 0x30) = (int)uVar7;
  return uVar7;
}



/* Entry: 10adf2ca8; end: 10adf2edb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10adf2ca8(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 0x10,param_2 + 0x10);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = puVar7[1];
  }
  if (uVar8 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    if (((ulong)plVar4 & 1) == 0) {
      uVar8 = *(ulong *)(param_1 + 0x28);
    }
    else {
      plVar4 = *(long **)((ulong)plVar4 & 0xfffffffffffffffe);
      uVar8 = *(ulong *)(param_1 + 0x28);
    }
    if ((uVar8 & 3) == 0) {
      uVar8 = puVar7[1];
      puVar5 = (undefined8 *)*puVar7;
      if (-1 < cVar1) {
        uVar8 = uVar9;
        puVar5 = puVar7;
      }
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar8) goto LAB_10adf2ec0;
        if (0x16 < uVar8) {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar6 = plVar10;
          __Znwm();
          *plVar4 = (long)plVar6;
          uVar9 = 2;
          goto LAB_10adf2e64;
        }
        *(char *)((long)plVar4 + 0x17) = (char)uVar8;
        uVar9 = 2;
        plVar6 = plVar4;
        plVar10 = plVar4;
        if (uVar8 != 0) goto LAB_10adf2e74;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar8) {
          func_0x000104bd47d4();
LAB_10adf2ec0:
          func_0x000104bd47d4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10adf2ec8);
          (*pcVar3)();
        }
        if (uVar8 < 0x17) {
          *(char *)((long)plVar4 + 0x17) = (char)uVar8;
          uVar9 = 3;
          plVar6 = plVar4;
          plVar10 = plVar4;
          if (uVar8 == 0) goto LAB_10adf2e84;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar6 = plVar10;
          __Znwm();
          *plVar4 = (long)plVar6;
          uVar9 = 3;
LAB_10adf2e64:
          plVar4[1] = uVar8;
          plVar4[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar4;
        }
LAB_10adf2e74:
        _memmove(plVar6,puVar5,uVar8);
        plVar4 = plVar6;
      }
LAB_10adf2e84:
      *(undefined1 *)((long)plVar4 + uVar8) = 0;
      *(ulong *)(param_1 + 0x28) = uVar9 | (ulong)plVar10;
      uVar8 = *(ulong *)(param_2 + 8);
      goto joined_r0x00010adf2d3c;
    }
    puVar5 = (undefined8 *)(uVar8 & 0xfffffffffffffffc);
    if (puVar5 != puVar7) {
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        uVar8 = puVar7[1];
        puVar2 = (undefined8 *)*puVar7;
        if (-1 < cVar1) {
          uVar8 = uVar9;
          puVar2 = puVar7;
        }
        func_0x000107c27ba0(puVar5,puVar2,uVar8);
        uVar8 = *(ulong *)(param_2 + 8);
        goto joined_r0x00010adf2d3c;
      }
      if (-1 < cVar1) {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar5[2] = puVar7[2];
        puVar5[1] = uVar12;
        *puVar5 = uVar11;
        uVar8 = *(ulong *)(param_2 + 8);
        goto joined_r0x00010adf2d3c;
      }
      func_0x000107c27ba4(puVar5,*puVar7,puVar7[1]);
    }
  }
  uVar8 = *(ulong *)(param_2 + 8);
joined_r0x00010adf2d3c:
  if ((uVar8 & 1) == 0) {
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



/* Entry: 10adf2edc; end: 10adf2f8f;  */

long FUN_10adf2edc(long param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar5 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar6 = puVar5;
  }
  else {
    puVar2 = (uint *)(uVar1 - 1);
    uVar3 = (ulong)*puVar2;
    if ((int)*puVar2 < 1) goto LAB_10adf2f74;
    puVar6 = (ulong *)(uVar1 + 7);
  }
  do {
    puVar4 = (undefined8 *)*puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar4);
    }
    uVar3 = uVar3 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if ((*puVar5 & 1) == 0) {
    return param_1;
  }
  puVar2 = (uint *)(*puVar5 - 1);
LAB_10adf2f74:
  __ZdlPv(puVar2);
  return param_1;
}



/* Entry: 10adf2f90; end: 10adf2fa3;  */

void FUN_10adf2f90(void)

{
  FUN_10adf2edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adf2fa4; end: 10adf2faf;  */

undefined ** FUN_10adf2fa4(void)

{
  return &PTR_DAT_110c76c68;
}



/* Entry: 10adf2fb0; end: 10adf2ff7;  */

void FUN_10adf2fb0(long param_1)

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



/* Entry: 10adf2ff8; end: 10adf332b;  */

/* WARNING: Removing unreachable block (ram,0x00010adf31e4) */
/* WARNING: Removing unreachable block (ram,0x00010adf31dc) */
/* WARNING: Removing unreachable block (ram,0x00010adf31ec) */

long * FUN_10adf2ff8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  
  uVar14 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar14) {
    uVar18 = 0;
    do {
      while( true ) {
        uVar7 = *(ulong *)(param_1 + 0x10);
        puVar16 = (ulong *)(param_1 + 0x10);
        if ((uVar7 & 1) != 0) {
          puVar16 = (ulong *)(uVar7 + uVar18 * 8 + 7);
        }
        puVar16 = (ulong *)*puVar16;
        bVar4 = *(byte *)((long)puVar16 + 0x17);
        uVar7 = (ulong)bVar4;
        if (-1 < (char)bVar4) break;
        puVar8 = (ulong *)*puVar16;
        lVar12 = puVar16[1] << 0x20;
        if (lVar12 != 0) goto LAB_10adf3084;
LAB_10adf3150:
        if (-1 < (char)bVar4) goto LAB_10adf318c;
LAB_10adf3154:
        uVar7 = puVar16[1];
        if ((long)uVar7 < 0x80) goto LAB_10adf318c;
LAB_10adf31fc:
        plVar11 = param_3;
        func_0x00010b4d5120(param_3,2,puVar16,param_2);
        uVar18 = uVar18 + 1;
        param_2 = plVar11;
        if (uVar18 == uVar14) goto LAB_10adf3220;
      }
      lVar12 = uVar7 << 0x20;
      puVar8 = puVar16;
      if (uVar7 == 0) goto LAB_10adf3150;
LAB_10adf3084:
      lVar13 = lVar12 >> 0x20;
      puVar10 = puVar8;
      for (puVar2 = puVar8; (7 < lVar13 && ((*puVar2 & 0x8080808080808080) == 0));
          puVar2 = puVar2 + 1) {
        puVar10 = puVar10 + 1;
        lVar13 = lVar13 + -8;
      }
      puVar8 = (ulong *)((long)puVar8 + (lVar12 >> 0x20));
      puVar5 = puVar2;
      if (puVar2 < puVar8) {
        uVar9 = (long)puVar8 - (long)puVar10;
        puVar10 = puVar2;
        for (uVar3 = uVar9 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5 = puVar10;
          if ((char)*puVar10 < '\0') goto LAB_10adf3144;
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar2 = (ulong *)((long)puVar2 + uVar9);
        puVar5 = puVar2;
        if (2 < uVar9 - 1) {
          puVar10 = (ulong *)((long)puVar10 + 3);
          do {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') break;
            puVar1 = (ulong *)((long)puVar10 + 1);
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar5 = puVar2;
          } while (puVar1 != puVar2);
        }
      }
LAB_10adf3144:
      func_0x000107c34ffc(puVar5,puVar8,0);
      if (puVar5 != (ulong *)0x0) goto LAB_10adf3150;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af0bf,0x29,&UNK_10f774276);
      uVar7 = (ulong)*(byte *)((long)puVar16 + 0x17);
      if ((char)*(byte *)((long)puVar16 + 0x17) < '\0') goto LAB_10adf3154;
LAB_10adf318c:
      if ((*param_3 - (long)param_2) + 0xe < (long)uVar7) goto LAB_10adf31fc;
      *(undefined1 *)param_2 = 0x12;
      *(char *)((long)param_2 + 1) = (char)uVar7;
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        puVar16 = (ulong *)*puVar16;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar16,uVar7);
      param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar7);
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar14);
  }
LAB_10adf3220:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar18 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar18 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar12 = *(long *)(uVar18 + 8);
      uVar7 = (ulong)*(uint *)(uVar18 + 0x10);
    }
    else {
      lVar12 = uVar18 + 8;
    }
    uVar14 = (uint)uVar7;
    if (*param_3 - (long)param_2 < (long)(int)uVar14) {
      puVar17 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar17 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar17;
          _memcpy(param_2,lVar12,lVar13);
          uVar14 = (int)uVar7 - (int)puVar17;
          uVar7 = (ulong)uVar14;
          lVar12 = lVar12 + lVar13;
          param_2 = (long *)((long)param_2 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar17 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar15 = (int)puVar17;
              param_2 = param_3 + 2;
              goto joined_r0x00010adf330c;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= param_2);
          puVar17 = (undefined1 *)((long)plVar11 + (0x10 - (long)param_2));
          iVar15 = (int)puVar17;
joined_r0x00010adf330c:
        } while (iVar15 < (int)uVar14);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar14);
      param_2 = (long *)((long)param_2 + (long)(int)uVar14);
    }
    else {
      _memcpy(param_2,lVar12,uVar7 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar14);
    }
  }
  return param_2;
}



/* Entry: 10adf332c; end: 10adf349b;  */

ulong FUN_10adf332c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar8 = (ulong)uVar3;
  uVar7 = uVar8;
  if (0 < (int)uVar3) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(ulong *)(uVar6 + 8);
      if (-1 < (char)*(byte *)(uVar6 + 0x17)) {
        uVar7 = (ulong)*(byte *)(uVar6 + 0x17);
      }
      uVar7 = uVar8 + uVar8 * (uVar7 + ((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6));
    }
    else {
      if (uVar3 == 1) {
        uVar10 = 0;
        uVar7 = 1;
      }
      else {
        lVar9 = 0;
        uVar10 = uVar8 & 0x7ffffffe;
        plVar11 = (long *)(uVar6 + 0xf);
        uVar12 = uVar10;
        do {
          bVar5 = *(byte *)(plVar11[-1] + 0x17);
          bVar4 = *(byte *)(*plVar11 + 0x17);
          uVar1 = *(ulong *)(plVar11[-1] + 8);
          if (-1 < (char)bVar5) {
            uVar1 = (ulong)bVar5;
          }
          uVar2 = *(ulong *)(*plVar11 + 8);
          if (-1 < (char)bVar4) {
            uVar2 = (ulong)bVar4;
          }
          uVar7 = uVar1 + uVar7 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
          lVar9 = uVar2 + lVar9 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
          plVar11 = plVar11 + 2;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        uVar7 = lVar9 + uVar7;
        if (uVar10 == uVar8) goto LAB_10adf3468;
      }
      lVar9 = uVar8 - uVar10;
      plVar11 = (long *)((uVar6 - 1) + uVar10 * 8);
      do {
        plVar11 = plVar11 + 1;
        bVar5 = *(byte *)(*plVar11 + 0x17);
        uVar8 = *(ulong *)(*plVar11 + 8);
        if (-1 < (char)bVar5) {
          uVar8 = (ulong)bVar5;
        }
        uVar7 = uVar8 + uVar7 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
LAB_10adf3468:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar8 + 0x10);
    }
    *(int *)(param_1 + 0x28) = (int)(lVar9 + uVar7);
    return lVar9 + uVar7;
  }
  *(int *)(param_1 + 0x28) = (int)uVar7;
  return uVar7;
}



/* Entry: 10adf349c; end: 10adf34ef;  */

void FUN_10adf349c(long param_1,long param_2)

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



/* Entry: 10adf34f0; end: 10adf35a3;  */

long FUN_10adf34f0(long param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar5 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar6 = puVar5;
  }
  else {
    puVar2 = (uint *)(uVar1 - 1);
    uVar3 = (ulong)*puVar2;
    if ((int)*puVar2 < 1) goto LAB_10adf3588;
    puVar6 = (ulong *)(uVar1 + 7);
  }
  do {
    puVar4 = (undefined8 *)*puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar4);
    }
    uVar3 = uVar3 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if ((*puVar5 & 1) == 0) {
    return param_1;
  }
  puVar2 = (uint *)(*puVar5 - 1);
LAB_10adf3588:
  __ZdlPv(puVar2);
  return param_1;
}



/* Entry: 10adf35a4; end: 10adf35b7;  */

void FUN_10adf35a4(void)

{
  FUN_10adf34f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adf35b8; end: 10adf35c3;  */

undefined ** FUN_10adf35b8(void)

{
  return &PTR_DAT_110c76ca8;
}



/* Entry: 10adf35c4; end: 10adf360b;  */

void FUN_10adf35c4(long param_1)

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



/* Entry: 10adf360c; end: 10adf393f;  */

/* WARNING: Removing unreachable block (ram,0x00010adf37f8) */
/* WARNING: Removing unreachable block (ram,0x00010adf37f0) */
/* WARNING: Removing unreachable block (ram,0x00010adf3800) */

long * FUN_10adf360c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  
  uVar14 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar14) {
    uVar18 = 0;
    do {
      while( true ) {
        uVar7 = *(ulong *)(param_1 + 0x10);
        puVar16 = (ulong *)(param_1 + 0x10);
        if ((uVar7 & 1) != 0) {
          puVar16 = (ulong *)(uVar7 + uVar18 * 8 + 7);
        }
        puVar16 = (ulong *)*puVar16;
        bVar4 = *(byte *)((long)puVar16 + 0x17);
        uVar7 = (ulong)bVar4;
        if (-1 < (char)bVar4) break;
        puVar8 = (ulong *)*puVar16;
        lVar12 = puVar16[1] << 0x20;
        if (lVar12 != 0) goto LAB_10adf3698;
LAB_10adf3764:
        if (-1 < (char)bVar4) goto LAB_10adf37a0;
LAB_10adf3768:
        uVar7 = puVar16[1];
        if ((long)uVar7 < 0x80) goto LAB_10adf37a0;
LAB_10adf3810:
        plVar11 = param_3;
        func_0x00010b4d5120(param_3,1,puVar16,param_2);
        uVar18 = uVar18 + 1;
        param_2 = plVar11;
        if (uVar18 == uVar14) goto LAB_10adf3834;
      }
      lVar12 = uVar7 << 0x20;
      puVar8 = puVar16;
      if (uVar7 == 0) goto LAB_10adf3764;
LAB_10adf3698:
      lVar13 = lVar12 >> 0x20;
      puVar10 = puVar8;
      for (puVar2 = puVar8; (7 < lVar13 && ((*puVar2 & 0x8080808080808080) == 0));
          puVar2 = puVar2 + 1) {
        puVar10 = puVar10 + 1;
        lVar13 = lVar13 + -8;
      }
      puVar8 = (ulong *)((long)puVar8 + (lVar12 >> 0x20));
      puVar5 = puVar2;
      if (puVar2 < puVar8) {
        uVar9 = (long)puVar8 - (long)puVar10;
        puVar10 = puVar2;
        for (uVar3 = uVar9 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5 = puVar10;
          if ((char)*puVar10 < '\0') goto LAB_10adf3758;
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar2 = (ulong *)((long)puVar2 + uVar9);
        puVar5 = puVar2;
        if (2 < uVar9 - 1) {
          puVar10 = (ulong *)((long)puVar10 + 3);
          do {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') break;
            puVar1 = (ulong *)((long)puVar10 + 1);
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar5 = puVar2;
          } while (puVar1 != puVar2);
        }
      }
LAB_10adf3758:
      func_0x000107c34ffc(puVar5,puVar8,0);
      if (puVar5 != (ulong *)0x0) goto LAB_10adf3764;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af0e9,0x2f,&UNK_10f774276);
      uVar7 = (ulong)*(byte *)((long)puVar16 + 0x17);
      if ((char)*(byte *)((long)puVar16 + 0x17) < '\0') goto LAB_10adf3768;
LAB_10adf37a0:
      if ((*param_3 - (long)param_2) + 0xe < (long)uVar7) goto LAB_10adf3810;
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)uVar7;
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        puVar16 = (ulong *)*puVar16;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar16,uVar7);
      param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar7);
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar14);
  }
LAB_10adf3834:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar18 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar18 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar12 = *(long *)(uVar18 + 8);
      uVar7 = (ulong)*(uint *)(uVar18 + 0x10);
    }
    else {
      lVar12 = uVar18 + 8;
    }
    uVar14 = (uint)uVar7;
    if (*param_3 - (long)param_2 < (long)(int)uVar14) {
      puVar17 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar17 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar17;
          _memcpy(param_2,lVar12,lVar13);
          uVar14 = (int)uVar7 - (int)puVar17;
          uVar7 = (ulong)uVar14;
          lVar12 = lVar12 + lVar13;
          param_2 = (long *)((long)param_2 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar17 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar15 = (int)puVar17;
              param_2 = param_3 + 2;
              goto joined_r0x00010adf3920;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= param_2);
          puVar17 = (undefined1 *)((long)plVar11 + (0x10 - (long)param_2));
          iVar15 = (int)puVar17;
joined_r0x00010adf3920:
        } while (iVar15 < (int)uVar14);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar14);
      param_2 = (long *)((long)param_2 + (long)(int)uVar14);
    }
    else {
      _memcpy(param_2,lVar12,uVar7 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar14);
    }
  }
  return param_2;
}



/* Entry: 10adf3940; end: 10adf3aaf;  */

ulong FUN_10adf3940(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar8 = (ulong)uVar3;
  uVar7 = uVar8;
  if (0 < (int)uVar3) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(ulong *)(uVar6 + 8);
      if (-1 < (char)*(byte *)(uVar6 + 0x17)) {
        uVar7 = (ulong)*(byte *)(uVar6 + 0x17);
      }
      uVar7 = uVar8 + uVar8 * (uVar7 + ((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6));
    }
    else {
      if (uVar3 == 1) {
        uVar10 = 0;
        uVar7 = 1;
      }
      else {
        lVar9 = 0;
        uVar10 = uVar8 & 0x7ffffffe;
        plVar11 = (long *)(uVar6 + 0xf);
        uVar12 = uVar10;
        do {
          bVar5 = *(byte *)(plVar11[-1] + 0x17);
          bVar4 = *(byte *)(*plVar11 + 0x17);
          uVar1 = *(ulong *)(plVar11[-1] + 8);
          if (-1 < (char)bVar5) {
            uVar1 = (ulong)bVar5;
          }
          uVar2 = *(ulong *)(*plVar11 + 8);
          if (-1 < (char)bVar4) {
            uVar2 = (ulong)bVar4;
          }
          uVar7 = uVar1 + uVar7 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
          lVar9 = uVar2 + lVar9 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
          plVar11 = plVar11 + 2;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        uVar7 = lVar9 + uVar7;
        if (uVar10 == uVar8) goto LAB_10adf3a7c;
      }
      lVar9 = uVar8 - uVar10;
      plVar11 = (long *)((uVar6 - 1) + uVar10 * 8);
      do {
        plVar11 = plVar11 + 1;
        bVar5 = *(byte *)(*plVar11 + 0x17);
        uVar8 = *(ulong *)(*plVar11 + 8);
        if (-1 < (char)bVar5) {
          uVar8 = (ulong)bVar5;
        }
        uVar7 = uVar8 + uVar7 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
LAB_10adf3a7c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar8 + 0x10);
    }
    *(int *)(param_1 + 0x28) = (int)(lVar9 + uVar7);
    return lVar9 + uVar7;
  }
  *(int *)(param_1 + 0x28) = (int)uVar7;
  return uVar7;
}



/* Entry: 10adf3ab0; end: 10adf3b03;  */

void FUN_10adf3ab0(long param_1,long param_2)

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



/* Entry: 10adf3b04; end: 10adf3d33;  */

void FUN_10adf3b04(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if ((iVar2 == 6) || (iVar2 == 5)) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if ((uVar3 == 0) && (lVar5 = *(long *)(param_1 + 0x40), lVar5 != 0)) {
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      puVar4 = (undefined8 *)(*(ulong *)(lVar5 + 0x10) ^ 2);
      puVar1 = puVar4;
      if (((ulong)puVar4 & 3) != 0) {
        puVar1 = (undefined8 *)0x0;
      }
      if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar4 + 0x17) < '\0')) {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar1);
LAB_10adf3bd0:
      __ZdlPv(lVar5);
      *(undefined4 *)(param_1 + 0x48) = 0;
      return;
    }
  }
  else if (iVar2 == 4) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if ((uVar3 == 0) && (lVar5 = *(long *)(param_1 + 0x40), lVar5 != 0)) {
      FUN_10adf5a80(lVar5);
      goto LAB_10adf3bd0;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10adf3d34; end: 10adf3d37;  */

long FUN_10adf3d34(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    puVar2 = (undefined8 *)(*(ulong *)(lVar4 + 0x10) ^ 2);
    puVar1 = puVar2;
    if (((ulong)puVar2 & 3) != 0) {
      puVar1 = (undefined8 *)0x0;
    }
    if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
      __ZdlPv(*puVar2);
    }
    __ZdlPv(puVar1);
    __ZdlPv(lVar4);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_10adf3b04(param_1);
  }
  puVar5 = (ulong *)(param_1 + 0x18);
  uVar3 = *puVar5;
  if (uVar3 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x28) != 0) goto LAB_10adf3d1c;
  if ((uVar3 & 1) == 0) {
    uVar6 = 1;
    puVar7 = puVar5;
LAB_10adf3cf4:
    do {
      if ((long *)*puVar7 != (long *)0x0) {
        (**(code **)(*(long *)*puVar7 + 8))();
      }
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 != 0);
    uVar3 = *puVar5;
    if ((uVar3 & 1) == 0) goto LAB_10adf3d1c;
  }
  else {
    uVar6 = (ulong)*(uint *)(uVar3 - 1);
    if (0 < (int)*(uint *)(uVar3 - 1)) {
      puVar7 = (ulong *)(uVar3 + 7);
      goto LAB_10adf3cf4;
    }
  }
  __ZdlPv(uVar3 - 1);
LAB_10adf3d1c:
  *puVar5 = 0;
  return param_1;
}



/* Entry: 10adf3d38; end: 10adf3d4b;  */

void FUN_10adf3d38(void)

{
  func_0x00010adf3bfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adf3d4c; end: 10adf3d4f;  */

long FUN_10adf3d4c(long param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar5 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar6 = puVar5;
  }
  else {
    puVar2 = (uint *)(uVar1 - 1);
    uVar3 = (ulong)*puVar2;
    if ((int)*puVar2 < 1) goto LAB_10adf5b18;
    puVar6 = (ulong *)(uVar1 + 7);
  }
  do {
    puVar4 = (undefined8 *)*puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar4);
    }
    uVar3 = uVar3 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if ((*puVar5 & 1) == 0) {
    return param_1;
  }
  puVar2 = (uint *)(*puVar5 - 1);
LAB_10adf5b18:
  __ZdlPv(puVar2);
  return param_1;
}



/* Entry: 10adf3d50; end: 10adf3e37;  */

long FUN_10adf3d50(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    return param_1;
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10adf3e38; end: 10adf3e43;  */

undefined ** FUN_10adf3e38(void)

{
  return &PTR_DAT_110c76ce8;
}



/* Entry: 10adf3e44; end: 10adf3edf;  */

void FUN_10adf3e44(long param_1)

{
  byte bVar1;
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
      bVar1 = *(byte *)(param_1 + 0x10);
      goto joined_r0x00010adf3e8c;
    }
    *(undefined1 *)puVar2 = 0;
    *(undefined1 *)((long)puVar2 + 0x17) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x10);
joined_r0x00010adf3e8c:
  if ((bVar1 & 1) != 0) {
    FUN_10adf3ee0(*(undefined8 *)(param_1 + 0x38));
  }
  FUN_10adf3b04(param_1);
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



/* Entry: 10adf3ee0; end: 10adf3f2b;  */

void FUN_10adf3ee0(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  
  if ((*(ulong *)(param_1 + 0x10) & 3) != 0) {
    puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x18) = 0;
      goto joined_r0x00010adf3f24;
    }
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
joined_r0x00010adf3f24:
  if ((bVar1 & 1) == 0) {
    return;
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10adf3f2c; end: 10adf45b7;  */

/* WARNING: Removing unreachable block (ram,0x00010adf4294) */
/* WARNING: Removing unreachable block (ram,0x00010adf429c) */
/* WARNING: Removing unreachable block (ram,0x00010adf428c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10adf3f2c(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  byte bVar5;
  ulong *puVar6;
  byte *pbVar7;
  long *plVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  byte *pbVar25;
  undefined8 uVar26;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar17 = (ulong *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar17 + 0x17);
  uVar21 = (ulong)cVar4;
  if ((long)uVar21 < 0) {
    if (puVar17[1] == 0) goto LAB_10adf403c;
    puVar3 = (ulong *)*puVar17;
    uVar22 = puVar17[1];
  }
  else {
    puVar3 = puVar17;
    uVar22 = uVar21;
    if ((int)cVar4 == 0) {
LAB_10adf403c:
      iVar24 = *(int *)(param_1 + 0x20);
      goto joined_r0x00010adf4044;
    }
  }
  if (uVar22 << 0x20 == 0) {
LAB_10adf405c:
    if (((uint)(int)cVar4 >> 7 & 1) != 0) goto LAB_10adf4098;
LAB_10adf4060:
    uVar21 = uVar21 & 0xff;
LAB_10adf40a8:
    if ((long)uVar21 <= (*(long *)param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (byte)uVar21;
      puVar3 = (ulong *)*puVar17;
      if (-1 < *(char *)((long)puVar17 + 0x17)) {
        puVar3 = puVar17;
      }
      _memcpy(param_2 + 2,puVar3,uVar21);
      param_2 = param_2 + 2 + uVar21;
      iVar24 = *(int *)(param_1 + 0x20);
      goto joined_r0x00010adf4044;
    }
  }
  else {
    lVar10 = (long)(uVar22 << 0x20) >> 0x20;
    puVar2 = (ulong *)((long)puVar3 + lVar10);
    puVar12 = puVar3;
    for (; (7 < lVar10 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
      puVar12 = puVar12 + 1;
      lVar10 = lVar10 + -8;
    }
    puVar6 = puVar3;
    if (puVar3 < puVar2) {
      uVar11 = (long)puVar2 - (long)puVar12;
      puVar12 = puVar3;
      for (uVar22 = uVar11 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
        puVar6 = puVar12;
        if ((char)*puVar12 < '\0') goto LAB_10adf4050;
        puVar12 = (ulong *)((long)puVar12 + 1);
      }
      puVar3 = (ulong *)((long)puVar3 + uVar11);
      puVar6 = puVar3;
      if (2 < uVar11 - 1) {
        puVar12 = (ulong *)((long)puVar12 + 3);
        do {
          puVar6 = puVar12;
          if ((char)*puVar12 < '\0') break;
          puVar1 = (ulong *)((long)puVar12 + 1);
          puVar12 = (ulong *)((long)puVar12 + 4);
          puVar6 = puVar3;
        } while (puVar1 != puVar3);
      }
    }
LAB_10adf4050:
    func_0x000107c34ffc(puVar6,puVar2,0);
    if (puVar6 != (ulong *)0x0) goto LAB_10adf405c;
    func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af119,0x22,&UNK_10f774276);
    uVar21 = (ulong)*(byte *)((long)puVar17 + 0x17);
    if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) goto LAB_10adf4060;
LAB_10adf4098:
    uVar21 = puVar17[1];
    if ((long)uVar21 < 0x80) goto LAB_10adf40a8;
  }
  param_2 = param_3;
  func_0x00010b4d50d0(param_3,1,puVar17);
  iVar24 = *(int *)(param_1 + 0x20);
joined_r0x00010adf4044:
  if (iVar24 != 0) {
    iVar23 = 0;
    pbVar14 = param_3 + 0x10;
    pbVar9 = param_3 + 0x20;
    pbVar13 = param_2;
    do {
      uVar21 = *(ulong *)(param_1 + 0x18);
      puVar17 = (ulong *)(param_1 + 0x18);
      if ((uVar21 & 1) != 0) {
        puVar17 = (ulong *)(uVar21 + (long)iVar23 * 8 + 7);
      }
      param_2 = (byte *)*puVar17;
      uVar20 = *(uint *)(param_2 + 0x20);
      pbVar25 = *(byte **)param_3;
      pbVar7 = pbVar13;
      if (pbVar25 <= pbVar13) {
        do {
          pbVar7 = pbVar14;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar15 = pbVar9;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adf4254:
            *(byte **)param_3 = pbVar15;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar26 = *(undefined8 *)pbVar25;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar25 + 8);
              *(undefined8 *)pbVar14 = uVar26;
              *(byte **)(param_3 + 8) = pbVar25;
              goto LAB_10adf4254;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar14,(long)pbVar25 - (long)pbVar14);
            do {
              plVar8 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar8 + 0x10))(plVar8,&pbStack_70,&uStack_64);
              if (((ulong)plVar8 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar9;
                goto LAB_10adf41b0;
              }
            } while (uStack_64 == 0);
            puVar16 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar26 = *puVar16;
              *(undefined8 *)(param_3 + 0x18) = puVar16[1];
              *(undefined8 *)pbVar14 = uVar26;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar15 = pbVar14 + (int)uStack_64;
              goto LAB_10adf4254;
            }
            uVar26 = *puVar16;
            *(undefined8 *)(pbStack_70 + 8) = puVar16[1];
            *(undefined8 *)pbStack_70 = uVar26;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar7 = pbStack_70;
            pbVar15 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adf41b0:
          pbVar13 = pbVar7 + ((int)pbVar13 - (int)pbVar25);
          pbVar7 = pbVar13;
          pbVar25 = pbVar15;
        } while (pbVar15 <= pbVar13);
      }
      pbVar13 = pbVar7 + 1;
      *pbVar7 = 0x12;
      if (0x7f < uVar20) {
        do {
          pbVar7 = pbVar13;
          pbVar13 = pbVar7 + 1;
          *pbVar7 = (byte)uVar20 | 0x80;
          uVar19 = uVar20 >> 0xe;
          uVar20 = uVar20 >> 7;
        } while (uVar19 != 0);
      }
      *pbVar13 = (byte)uVar20;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar7 + 2,param_3);
      iVar23 = iVar23 + 1;
      pbVar13 = param_2;
    } while (iVar23 != iVar24);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar20 = *(uint *)(param_1 + 0x48);
  }
  else {
    pbVar13 = *(byte **)(param_1 + 0x38);
    uVar20 = *(uint *)(pbVar13 + 0x1c);
    pbVar14 = *(byte **)param_3;
    if (pbVar14 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          pbVar14 = param_3 + 0x11;
          *param_2 = 0x1a;
          goto joined_r0x00010adf44c8;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar9 + ((int)param_2 - (int)pbVar14);
        pbVar14 = *(byte **)param_3;
      } while (pbVar14 <= param_2);
    }
    pbVar14 = param_2 + 1;
    *param_2 = 0x1a;
joined_r0x00010adf44c8:
    if (0x7f < uVar20) {
      do {
        param_2 = pbVar14;
        pbVar14 = param_2 + 1;
        *param_2 = (byte)uVar20 | 0x80;
        uVar19 = uVar20 >> 0xe;
        uVar20 = uVar20 >> 7;
      } while (uVar19 != 0);
    }
    *pbVar14 = (byte)uVar20;
    (**(code **)(*(long *)pbVar13 + 0x38))(pbVar13,param_2 + 2,param_3);
    uVar20 = *(uint *)(param_1 + 0x48);
    param_2 = pbVar13;
  }
  if (uVar20 - 4 < 3) {
    pbVar13 = *(byte **)(param_1 + 0x40);
    uVar19 = *(uint *)(pbVar13 + *(long *)(&UNK_10e516460 + (ulong)(uVar20 - 4) * 8));
    pbVar14 = *(byte **)param_3;
    if (pbVar14 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          bVar5 = (byte)(uVar20 << 3);
          goto joined_r0x00010adf446c;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar9 + ((int)param_2 - (int)pbVar14);
        pbVar14 = *(byte **)param_3;
      } while (pbVar14 <= param_2);
    }
    bVar5 = (byte)(uVar20 << 3);
joined_r0x00010adf446c:
    if (uVar20 < 0x10) {
      pbVar14 = param_2 + 1;
      *param_2 = bVar5 | 2;
    }
    else {
      *param_2 = bVar5 | 0x82;
      if (uVar20 < 0x800) {
        pbVar14 = param_2 + 2;
        param_2[1] = 0;
        param_2 = param_2 + 1;
      }
      else {
        param_2[1] = 0x80;
        pbVar14 = param_2 + 3;
        param_2[2] = 0;
        param_2 = param_2 + 2;
      }
    }
    if (0x7f < uVar19) {
      do {
        param_2 = pbVar14;
        pbVar14 = param_2 + 1;
        *param_2 = (byte)uVar19 | 0x80;
        uVar20 = uVar19 >> 0xe;
        uVar19 = uVar19 >> 7;
      } while (uVar20 != 0);
    }
    *pbVar14 = (byte)uVar19;
    (**(code **)(*(long *)pbVar13 + 0x38))(pbVar13,param_2 + 2,param_3);
    uVar21 = *(ulong *)(param_1 + 8);
    param_2 = pbVar13;
  }
  else {
    uVar21 = *(ulong *)(param_1 + 8);
  }
  if ((uVar21 & 1) != 0) {
    uVar21 = uVar21 & 0xfffffffffffffffe;
    uVar22 = (ulong)*(char *)(uVar21 + 0x1f);
    if ((long)uVar22 < 0) {
      lVar10 = *(long *)(uVar21 + 8);
      uVar22 = (ulong)*(uint *)(uVar21 + 0x10);
    }
    else {
      lVar10 = uVar21 + 8;
    }
    uVar20 = (uint)uVar22;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar20) {
      pbVar13 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar13 < (int)uVar20) {
        do {
          lVar18 = (long)(int)pbVar13;
          _memcpy(param_2,lVar10,lVar18);
          uVar20 = (int)uVar22 - (int)pbVar13;
          uVar22 = (ulong)uVar20;
          lVar10 = lVar10 + lVar18;
          param_2 = param_2 + lVar18;
          pbVar13 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar13 = pbVar13 + (0x10 - (long)(param_3 + 0x10));
              iVar24 = (int)pbVar13;
              param_2 = param_3 + 0x10;
              goto joined_r0x00010adf4574;
            }
            pbVar14 = param_3;
            func_0x000107c303dc();
            param_2 = pbVar14 + ((int)param_2 - (int)pbVar13);
            pbVar13 = *(byte **)param_3;
          } while (pbVar13 <= param_2);
          pbVar13 = pbVar13 + (0x10 - (long)param_2);
          iVar24 = (int)pbVar13;
joined_r0x00010adf4574:
        } while (iVar24 < (int)uVar20);
      }
      _memcpy(param_2,lVar10,(long)(int)uVar20);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adf45b8; end: 10adf4a63;  */

long FUN_10adf45b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  
  uVar11 = *(ulong *)(param_1 + 0x18);
  lVar9 = (long)*(int *)(param_1 + 0x20);
  puVar10 = (ulong *)(param_1 + 0x18);
  if ((uVar11 & 1) != 0) {
    puVar10 = (ulong *)(uVar11 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar9 = 0;
  }
  else {
    lVar12 = lVar9 << 3;
    do {
      uVar11 = *puVar10;
      uVar15 = *(ulong *)(uVar11 + 0x10) & 0xfffffffffffffffc;
      lVar17 = (long)*(char *)(uVar15 + 0x17);
      if (lVar17 < 0) {
        if (*(long *)(uVar15 + 8) != 0) goto LAB_10adf45f4;
LAB_10adf4690:
        lVar17 = 0;
        uVar15 = *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffc;
        cVar6 = *(char *)(uVar15 + 0x17);
      }
      else {
        if (lVar17 == 0) goto LAB_10adf4690;
LAB_10adf45f4:
        lVar14 = *(long *)(uVar15 + 8);
        if (-1 < *(char *)(uVar15 + 0x17)) {
          lVar14 = lVar17;
        }
        lVar17 = lVar14 + (ulong)((int)LZCOUNT((int)lVar14) * -9 + 0x160U >> 6) + 1;
        uVar15 = *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffc;
        cVar6 = *(char *)(uVar15 + 0x17);
      }
      lVar8 = (long)cVar6;
      lVar14 = lVar8;
      if (lVar8 < 0) {
        lVar14 = *(long *)(uVar15 + 8);
      }
      if (lVar14 != 0) {
        lVar14 = *(long *)(uVar15 + 8);
        if (-1 < cVar6) {
          lVar14 = lVar8;
        }
        lVar17 = lVar17 + lVar14 + (ulong)((int)LZCOUNT((int)lVar14) * -9 + 0x160U >> 6) + 1;
      }
      if ((*(ulong *)(uVar11 + 8) & 1) != 0) {
        uVar15 = *(ulong *)(uVar11 + 8) & 0xfffffffffffffffe;
        lVar14 = (long)*(char *)(uVar15 + 0x1f);
        if (lVar14 < 0) {
          lVar14 = *(long *)(uVar15 + 0x10);
        }
        lVar17 = lVar14 + lVar17;
      }
      *(int *)(uVar11 + 0x20) = (int)lVar17;
      lVar9 = lVar17 + lVar9 + (ulong)((int)LZCOUNT((int)lVar17) * -9 + 0x160U >> 6);
      puVar10 = puVar10 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  uVar11 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar17 = (long)*(char *)(uVar11 + 0x17);
  lVar12 = lVar17;
  if (lVar17 < 0) {
    lVar12 = *(long *)(uVar11 + 8);
  }
  if (lVar12 != 0) {
    lVar12 = *(long *)(uVar11 + 8);
    if (-1 < *(char *)(uVar11 + 0x17)) {
      lVar12 = lVar17;
    }
    lVar9 = lVar9 + lVar12 + (ulong)((int)LZCOUNT((int)lVar12) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x38);
    uVar11 = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffc;
    lVar17 = (long)*(char *)(uVar11 + 0x17);
    if (lVar17 < 0) {
      if (*(long *)(uVar11 + 8) != 0) goto LAB_10adf472c;
LAB_10adf48e0:
      lVar17 = 0;
      iVar7 = *(int *)(lVar12 + 0x18);
    }
    else {
      if (lVar17 == 0) goto LAB_10adf48e0;
LAB_10adf472c:
      lVar14 = *(long *)(uVar11 + 8);
      if (-1 < *(char *)(uVar11 + 0x17)) {
        lVar14 = lVar17;
      }
      lVar17 = lVar14 + (ulong)((int)LZCOUNT((int)lVar14) * -9 + 0x160U >> 6) + 1;
      iVar7 = *(int *)(lVar12 + 0x18);
    }
    if (iVar7 != 0) {
      lVar17 = lVar17 + (ulong)((int)LZCOUNT((long)iVar7) * -9 + 0x280U >> 6) + 1;
    }
    if ((*(ulong *)(lVar12 + 8) & 1) != 0) {
      uVar11 = *(ulong *)(lVar12 + 8) & 0xfffffffffffffffe;
      lVar14 = (long)*(char *)(uVar11 + 0x1f);
      if (lVar14 < 0) {
        lVar14 = *(long *)(uVar11 + 0x10);
      }
      lVar17 = lVar14 + lVar17;
    }
    *(int *)(lVar12 + 0x1c) = (int)lVar17;
    lVar9 = lVar9 + lVar17 + (ulong)((int)LZCOUNT((int)lVar17) * -9 + 0x160U >> 6) + 1;
  }
  iVar7 = *(int *)(param_1 + 0x48);
  if ((iVar7 != 6) && (iVar7 != 5)) {
    if (iVar7 != 4) {
      uVar11 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adf4a14;
    }
    lVar12 = *(long *)(param_1 + 0x40);
    uVar3 = *(uint *)(lVar12 + 0x18);
    uVar15 = (ulong)uVar3;
    uVar11 = uVar15;
    if (0 < (int)uVar3) {
      uVar13 = *(ulong *)(lVar12 + 0x10);
      if ((uVar13 & 1) == 0) {
        uVar11 = *(ulong *)(uVar13 + 8);
        if (-1 < (char)*(byte *)(uVar13 + 0x17)) {
          uVar11 = (ulong)*(byte *)(uVar13 + 0x17);
        }
        uVar11 = uVar15 + uVar15 * (uVar11 + ((int)LZCOUNT((int)uVar11) * -9 + 0x160U >> 6));
      }
      else {
        if (uVar3 == 1) {
          uVar16 = 0;
          uVar11 = 1;
        }
        else {
          lVar17 = 0;
          uVar16 = uVar15 & 0x7ffffffe;
          plVar18 = (long *)(uVar13 + 0xf);
          uVar19 = uVar16;
          do {
            bVar5 = *(byte *)(plVar18[-1] + 0x17);
            bVar4 = *(byte *)(*plVar18 + 0x17);
            uVar1 = *(ulong *)(plVar18[-1] + 8);
            if (-1 < (char)bVar5) {
              uVar1 = (ulong)bVar5;
            }
            uVar2 = *(ulong *)(*plVar18 + 8);
            if (-1 < (char)bVar4) {
              uVar2 = (ulong)bVar4;
            }
            uVar11 = uVar1 + uVar11 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
            lVar17 = uVar2 + lVar17 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
            plVar18 = plVar18 + 2;
            uVar19 = uVar19 - 2;
          } while (uVar19 != 0);
          uVar11 = lVar17 + uVar11;
          if (uVar16 == uVar15) goto LAB_10adf49e4;
        }
        lVar17 = uVar15 - uVar16;
        plVar18 = (long *)((uVar13 - 1) + uVar16 * 8);
        do {
          plVar18 = plVar18 + 1;
          bVar5 = *(byte *)(*plVar18 + 0x17);
          uVar15 = *(ulong *)(*plVar18 + 8);
          if (-1 < (char)bVar5) {
            uVar15 = (ulong)bVar5;
          }
          uVar11 = uVar15 + uVar11 + (ulong)((int)LZCOUNT((int)uVar15) * -9 + 0x160U >> 6);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
LAB_10adf49e4:
    if ((*(ulong *)(lVar12 + 8) & 1) != 0) {
      uVar15 = *(ulong *)(lVar12 + 8) & 0xfffffffffffffffe;
      lVar17 = (long)*(char *)(uVar15 + 0x1f);
      if (lVar17 < 0) {
        lVar17 = *(long *)(uVar15 + 0x10);
      }
      uVar11 = lVar17 + uVar11;
    }
    *(int *)(lVar12 + 0x28) = (int)uVar11;
    lVar9 = lVar9 + uVar11 + (ulong)((int)LZCOUNT((int)uVar11) * -9 + 0x160U >> 6) + 1;
    uVar11 = *(ulong *)(param_1 + 8);
    goto joined_r0x00010adf4a14;
  }
  lVar12 = *(long *)(param_1 + 0x40);
  uVar11 = *(ulong *)(lVar12 + 0x10) & 0xfffffffffffffffc;
  lVar17 = (long)*(char *)(uVar11 + 0x17);
  if (lVar17 < 0) {
    if (*(long *)(uVar11 + 8) != 0) goto LAB_10adf4838;
LAB_10adf4880:
    lVar17 = 0;
    uVar11 = *(ulong *)(lVar12 + 8);
  }
  else {
    if (lVar17 == 0) goto LAB_10adf4880;
LAB_10adf4838:
    lVar14 = *(long *)(uVar11 + 8);
    if (-1 < *(char *)(uVar11 + 0x17)) {
      lVar14 = lVar17;
    }
    lVar17 = lVar14 + (ulong)((int)LZCOUNT((int)lVar14) * -9 + 0x160U >> 6) + 1;
    uVar11 = *(ulong *)(lVar12 + 8);
  }
  if ((uVar11 & 1) != 0) {
    lVar14 = (long)*(char *)((uVar11 & 0xfffffffffffffffe) + 0x1f);
    if (lVar14 < 0) {
      lVar14 = *(long *)((uVar11 & 0xfffffffffffffffe) + 0x10);
    }
    lVar17 = lVar14 + lVar17;
  }
  *(int *)(lVar12 + 0x18) = (int)lVar17;
  lVar9 = lVar9 + lVar17 + (ulong)((int)LZCOUNT((int)lVar17) * -9 + 0x160U >> 6) + 1;
  uVar11 = *(ulong *)(param_1 + 8);
joined_r0x00010adf4a14:
  if ((uVar11 & 1) != 0) {
    lVar12 = (long)*(char *)((uVar11 & 0xfffffffffffffffe) + 0x1f);
    if (lVar12 < 0) {
      lVar12 = *(long *)((uVar11 & 0xfffffffffffffffe) + 0x10);
    }
    *(int *)(param_1 + 0x14) = (int)(lVar12 + lVar9);
    return lVar12 + lVar9;
  }
  *(int *)(param_1 + 0x14) = (int)lVar9;
  return lVar9;
}



/* Entry: 10adf4a64; end: 10adf513b;  */

/* WARNING: Possible PIC construction at 0x00010adf4e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010adf50a8: Changing call to branch */

void FUN_10adf4a64(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x19;
  ulong *puVar16;
  long unaff_x20;
  undefined8 *puVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar16 = (ulong *)(param_1 + 8);
  puVar17 = (undefined8 *)*puVar16;
  if (((ulong)puVar17 & 1) == 0) {
    iVar3 = *(int *)(param_2 + 0x20);
  }
  else {
    puVar17 = *(undefined8 **)((ulong)puVar17 & 0xfffffffffffffffe);
    iVar3 = *(int *)(param_2 + 0x20);
  }
  if (iVar3 != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  puVar13 = (undefined8 *)(*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc);
  cVar6 = *(char *)((long)puVar13 + 0x17);
  uVar14 = (ulong)cVar6;
  if (-1 < (long)uVar14) {
    if (uVar14 == 0) goto LAB_10adf4b3c;
LAB_10adf4acc:
    plVar9 = *(long **)(param_1 + 8);
    if (((ulong)plVar9 & 1) != 0) {
      plVar9 = *(long **)((ulong)plVar9 & 0xfffffffffffffffe);
      uVar15 = *(ulong *)(param_1 + 0x30);
      if ((uVar15 & 3) == 0) goto LAB_10adf4c10;
LAB_10adf4ae0:
      puVar10 = (undefined8 *)(uVar15 & 0xfffffffffffffffc);
      if (puVar10 == puVar13) goto LAB_10adf4b3c;
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        uVar15 = puVar13[1];
        puVar7 = (undefined8 *)*puVar13;
        if (-1 < cVar6) {
          uVar15 = uVar14;
          puVar7 = puVar13;
        }
        func_0x000107c27ba0(puVar10,puVar7,uVar15);
        uVar4 = *(uint *)(param_2 + 0x10);
      }
      else {
        if (cVar6 < '\0') {
          func_0x000107c27ba4(puVar10,*puVar13,puVar13[1]);
          goto LAB_10adf4b3c;
        }
        uVar23 = puVar13[1];
        uVar22 = *puVar13;
        puVar10[2] = puVar13[2];
        puVar10[1] = uVar23;
        *puVar10 = uVar22;
        uVar4 = *(uint *)(param_2 + 0x10);
      }
      goto joined_r0x00010adf4b2c;
    }
    uVar15 = *(ulong *)(param_1 + 0x30);
    if ((uVar15 & 3) != 0) goto LAB_10adf4ae0;
LAB_10adf4c10:
    uVar15 = puVar13[1];
    puVar10 = (undefined8 *)*puVar13;
    if (-1 < cVar6) {
      uVar15 = uVar14;
      puVar10 = puVar13;
    }
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x18;
      __Znwm();
      if (uVar15 < 0x7ffffffffffffff7) {
        if (0x16 < uVar15) {
          plVar21 = (long *)0x19;
          if ((uVar15 | 7) != 0x17) {
            plVar21 = (long *)((uVar15 | 7) + 1);
          }
          plVar11 = plVar21;
          __Znwm();
          *plVar9 = (long)plVar11;
          uVar14 = 2;
          goto LAB_10adf4ccc;
        }
        *(char *)((long)plVar9 + 0x17) = (char)uVar15;
        uVar14 = 2;
        plVar11 = plVar9;
        plVar21 = plVar9;
        if (uVar15 != 0) goto LAB_10adf4cdc;
        goto LAB_10adf4cec;
      }
    }
    else {
      func_0x00010b4d80a4();
      if (uVar15 < 0x7ffffffffffffff7) {
        if (uVar15 < 0x17) {
          *(char *)((long)plVar9 + 0x17) = (char)uVar15;
          uVar14 = 3;
          plVar11 = plVar9;
          plVar21 = plVar9;
          if (uVar15 == 0) goto LAB_10adf4cec;
        }
        else {
          plVar21 = (long *)0x19;
          if ((uVar15 | 7) != 0x17) {
            plVar21 = (long *)((uVar15 | 7) + 1);
          }
          plVar11 = plVar21;
          __Znwm();
          *plVar9 = (long)plVar11;
          uVar14 = 3;
LAB_10adf4ccc:
          plVar9[1] = uVar15;
          plVar9[2] = (ulong)plVar21 | 0x8000000000000000;
          plVar21 = plVar9;
        }
LAB_10adf4cdc:
        _memmove(plVar11,puVar10,uVar15);
        plVar9 = plVar11;
LAB_10adf4cec:
        *(undefined1 *)((long)plVar9 + uVar15) = 0;
        *(ulong *)(param_1 + 0x30) = uVar14 | (ulong)plVar21;
        uVar4 = *(uint *)(param_2 + 0x10);
        goto joined_r0x00010adf4b2c;
      }
LAB_10adf5100:
      func_0x000104bd47d4();
    }
    func_0x000104bd47d4();
LAB_10adf5110:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10adf5114);
    (*pcVar8)();
  }
  if (puVar13[1] != 0) goto LAB_10adf4acc;
LAB_10adf4b3c:
  uVar4 = *(uint *)(param_2 + 0x10);
joined_r0x00010adf4b2c:
  if ((uVar4 & 1) != 0) {
    lVar20 = *(long *)(param_1 + 0x38);
    lVar19 = *(long *)(param_2 + 0x38);
    if (lVar20 == 0) {
      puVar13 = puVar17;
      FUN_10adfbd58(puVar17,lVar19);
      *(undefined8 **)(param_1 + 0x38) = puVar13;
    }
    else {
      puVar13 = (undefined8 *)(*(ulong *)(lVar19 + 0x10) & 0xfffffffffffffffc);
      cVar6 = *(char *)((long)puVar13 + 0x17);
      uVar15 = (ulong)cVar6;
      uVar14 = uVar15;
      if ((long)uVar15 < 0) {
        uVar14 = puVar13[1];
      }
      if (uVar14 != 0) {
        plVar9 = *(long **)(lVar20 + 8);
        if (((ulong)plVar9 & 1) == 0) {
          uVar14 = *(ulong *)(lVar20 + 0x10);
        }
        else {
          plVar9 = *(long **)((ulong)plVar9 & 0xfffffffffffffffe);
          uVar14 = *(ulong *)(lVar20 + 0x10);
        }
        if ((uVar14 & 3) == 0) {
          uVar14 = puVar13[1];
          puStack_80 = (undefined8 *)*puVar13;
          if (-1 < cVar6) {
            uVar14 = uVar15;
            puStack_80 = puVar13;
          }
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)0x18;
            __Znwm();
            if (0x7ffffffffffffff6 < uVar14) {
              func_0x000104bd47d4();
              goto LAB_10adf5110;
            }
            if (0x16 < uVar14) {
              plVar21 = (long *)0x19;
              if ((uVar14 | 7) != 0x17) {
                plVar21 = (long *)((uVar14 | 7) + 1);
              }
              plVar11 = plVar21;
              __Znwm();
              *plVar9 = (long)plVar11;
              uVar15 = 2;
              goto LAB_10adf4dd0;
            }
            *(char *)((long)plVar9 + 0x17) = (char)uVar14;
            uVar15 = 2;
LAB_10adf4d80:
            plVar11 = plVar9;
            if (uVar14 != 0) goto LAB_10adf4de0;
          }
          else {
            func_0x00010b4d80a4();
            if (0x7ffffffffffffff6 < uVar14) goto LAB_10adf5100;
            if (uVar14 < 0x17) {
              *(char *)((long)plVar9 + 0x17) = (char)uVar14;
              uVar15 = 3;
              goto LAB_10adf4d80;
            }
            plVar21 = (long *)0x19;
            if ((uVar14 | 7) != 0x17) {
              plVar21 = (long *)((uVar14 | 7) + 1);
            }
            plVar11 = plVar21;
            __Znwm();
            *plVar9 = (long)plVar11;
            uVar15 = 3;
LAB_10adf4dd0:
            plVar9[1] = uVar14;
            plVar9[2] = (ulong)plVar21 | 0x8000000000000000;
LAB_10adf4de0:
            puVar13 = puStack_80;
            puStack_80 = puVar17;
            _memmove(plVar11,puVar13,uVar14);
            puVar17 = puStack_80;
          }
          *(undefined1 *)((long)plVar11 + uVar14) = 0;
          *(ulong *)(lVar20 + 0x10) = uVar15 | (ulong)plVar9;
        }
        else {
          puVar10 = (undefined8 *)(uVar14 & 0xfffffffffffffffc);
          if (puVar10 != puVar13) {
            if (*(char *)((long)puVar10 + 0x17) < '\0') {
              uVar14 = puVar13[1];
              puVar7 = (undefined8 *)*puVar13;
              if (-1 < cVar6) {
                uVar14 = uVar15;
                puVar7 = puVar13;
              }
              func_0x000107c27ba0(puVar10,puVar7,uVar14);
            }
            else if (cVar6 < '\0') {
              func_0x000107c27ba4(puVar10,*puVar13,puVar13[1]);
            }
            else {
              uVar23 = puVar13[1];
              uVar22 = *puVar13;
              puVar10[2] = puVar13[2];
              puVar10[1] = uVar23;
              *puVar10 = uVar22;
            }
          }
        }
      }
      if (*(int *)(lVar19 + 0x18) != 0) {
        *(int *)(lVar20 + 0x18) = *(int *)(lVar19 + 0x18);
      }
      if ((*(ulong *)(lVar19 + 8) & 1) != 0) {
        unaff_x30 = 0x10adf4e48;
        register0x00000008 = (BADSPACEBASE *)&puStack_80;
        puVar12 = (ulong *)(lVar20 + 8);
        unaff_x19 = puVar16;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar4;
  iVar3 = *(int *)(param_2 + 0x48);
  if (iVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0x48);
    if (iVar5 != iVar3) {
      if (iVar5 != 0) {
        FUN_10adf3b04(param_1);
      }
      *(int *)(param_1 + 0x48) = iVar3;
    }
    if (iVar3 == 6) {
      if (iVar5 == 6) {
        ppuVar18 = *(undefined ***)(param_2 + 0x40);
        if (*(int *)(param_2 + 0x48) != 6) {
          ppuVar18 = &PTR_PTR_113309f30;
        }
        puVar17 = (undefined8 *)((ulong)ppuVar18[2] & 0xfffffffffffffffc);
        cVar6 = *(char *)((long)puVar17 + 0x17);
        lVar19 = (long)cVar6;
        if (lVar19 < 0) {
          lVar20 = *(long *)(param_1 + 0x40);
          lVar2 = puVar17[1];
        }
        else {
          lVar20 = *(long *)(param_1 + 0x40);
          lVar2 = lVar19;
        }
        if (lVar2 != 0) {
          uVar14 = *(ulong *)(lVar20 + 8);
          if ((uVar14 & 1) == 0) {
            uVar15 = *(ulong *)(lVar20 + 0x10);
          }
          else {
            uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
            uVar15 = *(ulong *)(lVar20 + 0x10);
          }
          if ((uVar15 & 3) == 0) {
LAB_10adf5054:
            lVar2 = puVar17[1];
            puVar13 = (undefined8 *)*puVar17;
            if (-1 < (int)lVar19) {
              lVar2 = lVar19;
              puVar13 = puVar17;
            }
            if (uVar14 == 0) {
              func_0x000107c39894();
              *(undefined8 **)(lVar20 + 0x10) = puVar13;
            }
            else {
              puVar12 = &uStack_68;
              lStack_78 = lVar2;
              puStack_70 = puVar13;
              uStack_68 = uVar14;
              func_0x00010b4bf19c(puVar12,&puStack_70,&lStack_78);
              *(ulong *)(lVar20 + 0x10) = (ulong)puVar12 | 3;
            }
          }
          else {
            puVar13 = (undefined8 *)(uVar15 & 0xfffffffffffffffc);
            if (puVar13 != puVar17) {
              if (-1 < *(char *)((long)puVar13 + 0x17)) goto joined_r0x00010adf5000;
LAB_10adf5010:
              lVar2 = puVar17[1];
              puVar10 = (undefined8 *)*puVar17;
              if (-1 < (int)lVar19) {
                lVar2 = lVar19;
                puVar10 = puVar17;
              }
              func_0x000107c27ba0(puVar13,puVar10,lVar2);
            }
          }
        }
LAB_10adf5094:
        if (((ulong)ppuVar18[1] & 1) != 0) {
          unaff_x30 = 0x10adf50ac;
          register0x00000008 = (BADSPACEBASE *)&puStack_80;
          puVar12 = (ulong *)(lVar20 + 8);
          unaff_x19 = puVar16;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
      else {
        FUN_10adfc2dc(puVar17,*(undefined8 *)(param_2 + 0x40));
        *(undefined8 **)(param_1 + 0x40) = puVar17;
      }
    }
    else if (iVar3 == 5) {
      if (iVar5 == 5) {
        ppuVar18 = *(undefined ***)(param_2 + 0x40);
        if (*(int *)(param_2 + 0x48) != 5) {
          ppuVar18 = &PTR_PTR_113309f50;
        }
        puVar17 = (undefined8 *)((ulong)ppuVar18[2] & 0xfffffffffffffffc);
        cVar6 = *(char *)((long)puVar17 + 0x17);
        lVar19 = (long)cVar6;
        if (lVar19 < 0) {
          lVar20 = *(long *)(param_1 + 0x40);
          lVar2 = puVar17[1];
        }
        else {
          lVar20 = *(long *)(param_1 + 0x40);
          lVar2 = lVar19;
        }
        if (lVar2 != 0) {
          uVar14 = *(ulong *)(lVar20 + 8);
          if ((uVar14 & 1) == 0) {
            uVar15 = *(ulong *)(lVar20 + 0x10);
          }
          else {
            uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
            uVar15 = *(ulong *)(lVar20 + 0x10);
          }
          if ((uVar15 & 3) == 0) goto LAB_10adf5054;
          puVar13 = (undefined8 *)(uVar15 & 0xfffffffffffffffc);
          if (puVar13 != puVar17) {
            if (*(char *)((long)puVar13 + 0x17) < '\0') goto LAB_10adf5010;
joined_r0x00010adf5000:
            if (cVar6 < '\0') {
              func_0x000107c27ba4(puVar13,*puVar17,puVar17[1]);
            }
            else {
              uVar23 = puVar17[1];
              uVar22 = *puVar17;
              puVar13[2] = puVar17[2];
              puVar13[1] = uVar23;
              *puVar13 = uVar22;
            }
          }
        }
        goto LAB_10adf5094;
      }
      FUN_10adfc098(puVar17,*(undefined8 *)(param_2 + 0x40));
      *(undefined8 **)(param_1 + 0x40) = puVar17;
    }
    else if (iVar3 == 4) {
      if (iVar5 == 4) {
        lVar20 = *(long *)(param_1 + 0x40);
        ppuVar18 = *(undefined ***)(param_2 + 0x40);
        if (*(int *)(param_2 + 0x48) != 4) {
          ppuVar18 = &PTR_PTR_1133087b0;
        }
        if (*(int *)(ppuVar18 + 3) != 0) {
          func_0x000107c303bc(lVar20 + 0x10,ppuVar18 + 2);
        }
        goto LAB_10adf5094;
      }
      FUN_10adfbfac(puVar17,*(undefined8 *)(param_2 + 0x40));
      *(undefined8 **)(param_1 + 0x40) = puVar17;
    }
  }
  puVar12 = puVar16;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar12 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10adf513c; end: 10adf5317;  */

undefined8 * FUN_10adf513c(undefined8 *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110c761d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar5 = *(ulong *)(param_3 + 0x10);
  if ((uVar5 & 3) == 0) goto LAB_10adf52cc;
  puVar6 = (undefined8 *)(uVar5 & 0xfffffffffffffffc);
  bVar2 = *(byte *)((long)puVar6 + 0x17);
  uVar5 = (ulong)bVar2;
  if (param_2 == (ulong *)0x0) {
    if ((char)bVar2 < '\0') {
      puVar7 = (undefined8 *)*puVar6;
      uVar5 = puVar6[1];
      param_2 = (ulong *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar5) goto LAB_10adf52fc;
      if (uVar5 < 0x17) goto LAB_10adf51dc;
LAB_10adf5288:
      puVar1 = (ulong *)0x19;
      if ((uVar5 | 7) != 0x17) {
        puVar1 = (ulong *)((uVar5 | 7) + 1);
      }
      puVar4 = puVar1;
      __Znwm();
      param_2[1] = uVar5;
      param_2[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_2 = (ulong)puVar4;
LAB_10adf52b0:
      _memmove(puVar4,puVar7,uVar5);
    }
    else {
      param_2 = (ulong *)0x18;
      __Znwm();
      puVar7 = puVar6;
      if (0x16 < uVar5) goto LAB_10adf5288;
LAB_10adf51dc:
      *(char *)((long)param_2 + 0x17) = (char)uVar5;
      puVar4 = param_2;
      if (uVar5 != 0) goto LAB_10adf52b0;
    }
    *(undefined1 *)((long)puVar4 + uVar5) = 0;
    uVar5 = 2;
  }
  else {
    if ((char)bVar2 < '\0') {
      puVar7 = (undefined8 *)*puVar6;
      uVar5 = puVar6[1];
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar5) {
        func_0x000104bd47d4();
LAB_10adf52fc:
        func_0x000104bd47d4();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10adf5304);
        (*pcVar3)();
      }
      if (uVar5 < 0x17) goto LAB_10adf51b4;
LAB_10adf5218:
      puVar1 = (ulong *)0x19;
      if ((uVar5 | 7) != 0x17) {
        puVar1 = (ulong *)((uVar5 | 7) + 1);
      }
      puVar4 = puVar1;
      __Znwm();
      param_2[1] = uVar5;
      param_2[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_2 = (ulong)puVar4;
LAB_10adf5240:
      _memmove(puVar4,puVar7,uVar5);
    }
    else {
      func_0x00010b4d80a4();
      puVar7 = puVar6;
      if (0x16 < uVar5) goto LAB_10adf5218;
LAB_10adf51b4:
      *(char *)((long)param_2 + 0x17) = (char)uVar5;
      puVar4 = param_2;
      if (uVar5 != 0) goto LAB_10adf5240;
    }
    *(undefined1 *)((long)puVar4 + uVar5) = 0;
    uVar5 = 3;
  }
  uVar5 = uVar5 | (ulong)param_2;
LAB_10adf52cc:
  param_1[2] = uVar5;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  return param_1;
}



/* Entry: 10adf5318; end: 10adf53ff;  */

long FUN_10adf5318(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    return param_1;
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10adf5400; end: 10adf540b;  */

undefined ** FUN_10adf5400(void)

{
  return &PTR_DAT_110c76d20;
}



/* Entry: 10adf540c; end: 10adf5787;  */

/* WARNING: Removing unreachable block (ram,0x00010adf5608) */
/* WARNING: Removing unreachable block (ram,0x00010adf5610) */
/* WARNING: Removing unreachable block (ram,0x00010adf5600) */

byte * FUN_10adf540c(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  
  uVar14 = *(uint *)(param_1 + 0x18);
  if (uVar14 != 0) {
    pbVar11 = *(byte **)param_3;
    if (param_2 < pbVar11) {
      *param_2 = 8;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= param_2);
      uVar14 = *(uint *)(param_1 + 0x18);
      *param_2 = 8;
    }
    uVar15 = (ulong)(int)uVar14;
    pbVar11 = param_2 + 1;
    uVar16 = uVar15;
    pbVar10 = pbVar11;
    if (0x7f < uVar14) {
      do {
        pbVar11 = pbVar10 + 1;
        *pbVar10 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        uVar8 = uVar16 >> 0xe;
        uVar16 = uVar15;
        pbVar10 = pbVar11;
      } while (uVar8 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar15;
  }
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010adf5494;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010adf5494:
      if (uVar16 << 0x20 == 0) {
LAB_10adf5554:
        if (((uint)(int)cVar4 >> 7 & 1) != 0) goto LAB_10adf558c;
LAB_10adf5558:
        uVar15 = uVar15 & 0xff;
LAB_10adf5598:
        if ((long)uVar15 <= (*(long *)param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x12;
          param_2[1] = (byte)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy(param_2 + 2,puVar3,uVar15);
          param_2 = param_2 + 2 + uVar15;
          goto LAB_10adf55dc;
        }
      }
      else {
        lVar7 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar7);
        puVar9 = puVar3;
        for (; (7 < lVar7 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar9 = puVar9 + 1;
          lVar7 = lVar7 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar8 = (long)puVar2 - (long)puVar9;
          puVar9 = puVar3;
          for (uVar16 = uVar8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar5 = puVar9;
            if ((char)*puVar9 < '\0') goto LAB_10adf5548;
            puVar9 = (ulong *)((long)puVar9 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar8);
          puVar5 = puVar3;
          if (2 < uVar8 - 1) {
            puVar9 = (ulong *)((long)puVar9 + 3);
            do {
              puVar5 = puVar9;
              if ((char)*puVar9 < '\0') break;
              puVar1 = (ulong *)((long)puVar9 + 1);
              puVar9 = (ulong *)((long)puVar9 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adf5548:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10adf5554;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af13c,0x1e,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) goto LAB_10adf5558;
LAB_10adf558c:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10adf5598;
      }
      pbVar11 = param_3;
      func_0x00010b4d50d0(param_3,2,puVar12,param_2);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adf55e0;
    }
  }
LAB_10adf55dc:
  uVar15 = *(ulong *)(param_1 + 8);
  pbVar11 = param_2;
joined_r0x00010adf55e0:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar7 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar7 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*(long *)param_3 - (long)pbVar11 < (long)(int)uVar14) {
      pbVar10 = (byte *)((*(long *)param_3 - (long)pbVar11) + 0x10);
      if ((int)pbVar10 < (int)uVar14) {
        do {
          lVar13 = (long)(int)pbVar10;
          _memcpy(pbVar11,lVar7,lVar13);
          uVar14 = (int)uVar16 - (int)pbVar10;
          uVar16 = (ulong)uVar14;
          lVar7 = lVar7 + lVar13;
          pbVar11 = pbVar11 + lVar13;
          pbVar10 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar10 = pbVar10 + (0x10 - (long)(param_3 + 0x10));
              iVar17 = (int)pbVar10;
              pbVar11 = param_3 + 0x10;
              goto joined_r0x00010adf5768;
            }
            pbVar6 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar6 + ((int)pbVar11 - (int)pbVar10);
            pbVar10 = *(byte **)param_3;
          } while (pbVar10 <= pbVar11);
          pbVar10 = pbVar10 + (0x10 - (long)pbVar11);
          iVar17 = (int)pbVar10;
joined_r0x00010adf5768:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(pbVar11,lVar7,(long)(int)uVar14);
      pbVar11 = pbVar11 + (int)uVar14;
    }
    else {
      _memcpy(pbVar11,lVar7,uVar16 & 0xffffffff);
      pbVar11 = pbVar11 + (int)uVar14;
    }
  }
  return pbVar11;
}



/* Entry: 10adf5788; end: 10adf5833;  */

long FUN_10adf5788(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x1c) = (int)lVar3;
    return lVar3;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar4 = (long)*(char *)(uVar2 + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 0x10);
  }
  *(int *)(param_1 + 0x1c) = (int)(lVar4 + lVar3);
  return lVar4 + lVar3;
}



/* Entry: 10adf5834; end: 10adf5a7f;  */

void FUN_10adf5834(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 == 0) goto LAB_10adf5a10;
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar7 & 3) != 0) {
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
      else {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        puVar6[2] = puVar8[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
      }
    }
    goto LAB_10adf5a10;
  }
  uVar7 = puVar8[1];
  puVar6 = (undefined8 *)*puVar8;
  if (-1 < cVar1) {
    uVar7 = uVar9;
    puVar6 = puVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar7) goto LAB_10adf5a64;
    if (0x16 < uVar7) {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 2;
      goto LAB_10adf59dc;
    }
    *(char *)((long)plVar5 + 0x17) = (char)uVar7;
    uVar9 = 2;
    plVar4 = plVar5;
    plVar10 = plVar5;
    if (uVar7 != 0) goto LAB_10adf59ec;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar7) {
      func_0x000104bd47d4();
LAB_10adf5a64:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adf5a6c);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)plVar5 + 0x17) = (char)uVar7;
      uVar9 = 3;
      plVar4 = plVar5;
      plVar10 = plVar5;
      if (uVar7 == 0) goto LAB_10adf59fc;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 3;
LAB_10adf59dc:
      plVar5[1] = uVar7;
      plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar5;
    }
LAB_10adf59ec:
    _memmove(plVar4,puVar6,uVar7);
    plVar5 = plVar4;
  }
LAB_10adf59fc:
  *(undefined1 *)((long)plVar5 + uVar7) = 0;
  *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
LAB_10adf5a10:
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10adf5a80; end: 10adf5b33;  */

long FUN_10adf5a80(long param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar5 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar6 = puVar5;
  }
  else {
    puVar2 = (uint *)(uVar1 - 1);
    uVar3 = (ulong)*puVar2;
    if ((int)*puVar2 < 1) goto LAB_10adf5b18;
    puVar6 = (ulong *)(uVar1 + 7);
  }
  do {
    puVar4 = (undefined8 *)*puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar4);
    }
    uVar3 = uVar3 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if ((*puVar5 & 1) == 0) {
    return param_1;
  }
  puVar2 = (uint *)(*puVar5 - 1);
LAB_10adf5b18:
  __ZdlPv(puVar2);
  return param_1;
}



/* Entry: 10adf5b34; end: 10adf5b47;  */

void FUN_10adf5b34(void)

{
  FUN_10adf5a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adf5b48; end: 10adf5b53;  */

undefined ** FUN_10adf5b48(void)

{
  return &PTR_DAT_110c76d58;
}



/* Entry: 10adf5b54; end: 10adf5b9b;  */

void FUN_10adf5b54(long param_1)

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



/* Entry: 10adf5b9c; end: 10adf5ecf;  */

/* WARNING: Removing unreachable block (ram,0x00010adf5d88) */
/* WARNING: Removing unreachable block (ram,0x00010adf5d80) */
/* WARNING: Removing unreachable block (ram,0x00010adf5d90) */

long * FUN_10adf5b9c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  
  uVar14 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar14) {
    uVar18 = 0;
    do {
      while( true ) {
        uVar7 = *(ulong *)(param_1 + 0x10);
        puVar16 = (ulong *)(param_1 + 0x10);
        if ((uVar7 & 1) != 0) {
          puVar16 = (ulong *)(uVar7 + uVar18 * 8 + 7);
        }
        puVar16 = (ulong *)*puVar16;
        bVar4 = *(byte *)((long)puVar16 + 0x17);
        uVar7 = (ulong)bVar4;
        if (-1 < (char)bVar4) break;
        puVar8 = (ulong *)*puVar16;
        lVar12 = puVar16[1] << 0x20;
        if (lVar12 != 0) goto LAB_10adf5c28;
LAB_10adf5cf4:
        if (-1 < (char)bVar4) goto LAB_10adf5d30;
LAB_10adf5cf8:
        uVar7 = puVar16[1];
        if ((long)uVar7 < 0x80) goto LAB_10adf5d30;
LAB_10adf5da0:
        plVar11 = param_3;
        func_0x00010b4d5120(param_3,1,puVar16,param_2);
        uVar18 = uVar18 + 1;
        param_2 = plVar11;
        if (uVar18 == uVar14) goto LAB_10adf5dc4;
      }
      lVar12 = uVar7 << 0x20;
      puVar8 = puVar16;
      if (uVar7 == 0) goto LAB_10adf5cf4;
LAB_10adf5c28:
      lVar13 = lVar12 >> 0x20;
      puVar10 = puVar8;
      for (puVar2 = puVar8; (7 < lVar13 && ((*puVar2 & 0x8080808080808080) == 0));
          puVar2 = puVar2 + 1) {
        puVar10 = puVar10 + 1;
        lVar13 = lVar13 + -8;
      }
      puVar8 = (ulong *)((long)puVar8 + (lVar12 >> 0x20));
      puVar5 = puVar2;
      if (puVar2 < puVar8) {
        uVar9 = (long)puVar8 - (long)puVar10;
        puVar10 = puVar2;
        for (uVar3 = uVar9 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5 = puVar10;
          if ((char)*puVar10 < '\0') goto LAB_10adf5ce8;
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar2 = (ulong *)((long)puVar2 + uVar9);
        puVar5 = puVar2;
        if (2 < uVar9 - 1) {
          puVar10 = (ulong *)((long)puVar10 + 3);
          do {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') break;
            puVar1 = (ulong *)((long)puVar10 + 1);
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar5 = puVar2;
          } while (puVar1 != puVar2);
        }
      }
LAB_10adf5ce8:
      func_0x000107c34ffc(puVar5,puVar8,0);
      if (puVar5 != (ulong *)0x0) goto LAB_10adf5cf4;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af15b,0x23,&UNK_10f774276);
      uVar7 = (ulong)*(byte *)((long)puVar16 + 0x17);
      if ((char)*(byte *)((long)puVar16 + 0x17) < '\0') goto LAB_10adf5cf8;
LAB_10adf5d30:
      if ((*param_3 - (long)param_2) + 0xe < (long)uVar7) goto LAB_10adf5da0;
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)uVar7;
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        puVar16 = (ulong *)*puVar16;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar16,uVar7);
      param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar7);
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar14);
  }
LAB_10adf5dc4:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar18 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar18 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar12 = *(long *)(uVar18 + 8);
      uVar7 = (ulong)*(uint *)(uVar18 + 0x10);
    }
    else {
      lVar12 = uVar18 + 8;
    }
    uVar14 = (uint)uVar7;
    if (*param_3 - (long)param_2 < (long)(int)uVar14) {
      puVar17 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar17 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar17;
          _memcpy(param_2,lVar12,lVar13);
          uVar14 = (int)uVar7 - (int)puVar17;
          uVar7 = (ulong)uVar14;
          lVar12 = lVar12 + lVar13;
          param_2 = (long *)((long)param_2 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar17 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar15 = (int)puVar17;
              param_2 = param_3 + 2;
              goto joined_r0x00010adf5eb0;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= param_2);
          puVar17 = (undefined1 *)((long)plVar11 + (0x10 - (long)param_2));
          iVar15 = (int)puVar17;
joined_r0x00010adf5eb0:
        } while (iVar15 < (int)uVar14);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar14);
      param_2 = (long *)((long)param_2 + (long)(int)uVar14);
    }
    else {
      _memcpy(param_2,lVar12,uVar7 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar14);
    }
  }
  return param_2;
}



/* Entry: 10adf5ed0; end: 10adf603f;  */

ulong FUN_10adf5ed0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar8 = (ulong)uVar3;
  uVar7 = uVar8;
  if (0 < (int)uVar3) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(ulong *)(uVar6 + 8);
      if (-1 < (char)*(byte *)(uVar6 + 0x17)) {
        uVar7 = (ulong)*(byte *)(uVar6 + 0x17);
      }
      uVar7 = uVar8 + uVar8 * (uVar7 + ((int)LZCOUNT((int)uVar7) * -9 + 0x160U >> 6));
    }
    else {
      if (uVar3 == 1) {
        uVar10 = 0;
        uVar7 = 1;
      }
      else {
        lVar9 = 0;
        uVar10 = uVar8 & 0x7ffffffe;
        plVar11 = (long *)(uVar6 + 0xf);
        uVar12 = uVar10;
        do {
          bVar5 = *(byte *)(plVar11[-1] + 0x17);
          bVar4 = *(byte *)(*plVar11 + 0x17);
          uVar1 = *(ulong *)(plVar11[-1] + 8);
          if (-1 < (char)bVar5) {
            uVar1 = (ulong)bVar5;
          }
          uVar2 = *(ulong *)(*plVar11 + 8);
          if (-1 < (char)bVar4) {
            uVar2 = (ulong)bVar4;
          }
          uVar7 = uVar1 + uVar7 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
          lVar9 = uVar2 + lVar9 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
          plVar11 = plVar11 + 2;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        uVar7 = lVar9 + uVar7;
        if (uVar10 == uVar8) goto LAB_10adf600c;
      }
      lVar9 = uVar8 - uVar10;
      plVar11 = (long *)((uVar6 - 1) + uVar10 * 8);
      do {
        plVar11 = plVar11 + 1;
        bVar5 = *(byte *)(*plVar11 + 0x17);
        uVar8 = *(ulong *)(*plVar11 + 8);
        if (-1 < (char)bVar5) {
          uVar8 = (ulong)bVar5;
        }
        uVar7 = uVar8 + uVar7 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
LAB_10adf600c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar9 = (long)*(char *)(uVar8 + 0x1f);
    if (lVar9 < 0) {
      lVar9 = *(long *)(uVar8 + 0x10);
    }
    *(int *)(param_1 + 0x28) = (int)(lVar9 + uVar7);
    return lVar9 + uVar7;
  }
  *(int *)(param_1 + 0x28) = (int)uVar7;
  return uVar7;
}



/* Entry: 10adf6040; end: 10adf6107;  */

void FUN_10adf6040(long param_1,long param_2)

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



/* Entry: 10adf6108; end: 10adf6157;  */

undefined ** FUN_10adf6108(void)

{
  return &PTR_DAT_110c76d98;
}



/* Entry: 10adf6158; end: 10adf643f;  */

/* WARNING: Removing unreachable block (ram,0x00010adf6324) */
/* WARNING: Removing unreachable block (ram,0x00010adf632c) */
/* WARNING: Removing unreachable block (ram,0x00010adf631c) */

long * FUN_10adf6158(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010adf61b0;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010adf61b0:
      if (uVar16 << 0x20 == 0) {
LAB_10adf6270:
        if (((uint)(int)cVar4 >> 7 & 1) == 0) goto LAB_10adf6274;
LAB_10adf62a8:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10adf62b4;
      }
      else {
        lVar8 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar10 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar9 = (long)puVar2 - (long)puVar10;
          puVar10 = puVar3;
          for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') goto LAB_10adf6264;
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar9);
          puVar5 = puVar3;
          if (2 < uVar9 - 1) {
            puVar10 = (ulong *)((long)puVar10 + 3);
            do {
              puVar5 = puVar10;
              if ((char)*puVar10 < '\0') break;
              puVar1 = (ulong *)((long)puVar10 + 1);
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adf6264:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10adf6270;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af17f,0x2d,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if ((char)*(byte *)((long)puVar12 + 0x17) < '\0') goto LAB_10adf62a8;
LAB_10adf6274:
        uVar15 = uVar15 & 0xff;
LAB_10adf62b4:
        if ((long)uVar15 <= (*param_3 - (long)param_2) + 0xe) {
          *(undefined1 *)param_2 = 10;
          *(char *)((long)param_2 + 1) = (char)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy((undefined1 *)((long)param_2 + 2),puVar3,uVar15);
          param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar15);
          goto LAB_10adf62f8;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d50d0(param_3,1,puVar12,param_2);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adf62fc;
    }
  }
LAB_10adf62f8:
  uVar15 = *(ulong *)(param_1 + 8);
  plVar6 = param_2;
joined_r0x00010adf62fc:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar8 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar8 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*param_3 - (long)plVar6 < (long)(int)uVar14) {
      puVar18 = (undefined1 *)((*param_3 - (long)plVar6) + 0x10);
      if ((int)puVar18 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar18;
          _memcpy(plVar6,lVar8,lVar13);
          uVar14 = (int)uVar16 - (int)puVar18;
          uVar16 = (ulong)uVar14;
          lVar8 = lVar8 + lVar13;
          plVar6 = (long *)((long)plVar6 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar17 = (int)puVar18;
              plVar6 = param_3 + 2;
              goto joined_r0x00010adf6420;
            }
            plVar7 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar7 + (long)((int)plVar6 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= plVar6);
          puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)plVar6));
          iVar17 = (int)puVar18;
joined_r0x00010adf6420:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(plVar6,lVar8,(long)(int)uVar14);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
    else {
      _memcpy(plVar6,lVar8,uVar16 & 0xffffffff);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
  }
  return plVar6;
}



/* Entry: 10adf6440; end: 10adf64c3;  */

long FUN_10adf6440(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    lVar3 = (long)*(char *)((uVar1 & 0xfffffffffffffffe) + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)((uVar1 & 0xfffffffffffffffe) + 0x10);
    }
    *(int *)(param_1 + 0x18) = (int)(lVar3 + lVar2);
    return lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 10adf64c4; end: 10adf670b;  */

void FUN_10adf64c4(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    if (((ulong)plVar5 & 1) == 0) {
      uVar7 = *(ulong *)(param_1 + 0x10);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar7 = *(ulong *)(param_1 + 0x10);
    }
    if ((uVar7 & 3) == 0) {
      uVar7 = puVar8[1];
      puVar6 = (undefined8 *)*puVar8;
      if (-1 < cVar1) {
        uVar7 = uVar9;
        puVar6 = puVar8;
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar7) goto LAB_10adf66f0;
        if (0x16 < uVar7) {
          plVar10 = (long *)0x19;
          if ((uVar7 | 7) != 0x17) {
            plVar10 = (long *)((uVar7 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 2;
          goto LAB_10adf6690;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar7;
        uVar9 = 2;
        plVar4 = plVar5;
        plVar10 = plVar5;
        if (uVar7 != 0) goto LAB_10adf66a0;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar7) {
          func_0x000104bd47d4();
LAB_10adf66f0:
          func_0x000104bd47d4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10adf66f8);
          (*pcVar3)();
        }
        if (uVar7 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar7;
          uVar9 = 3;
          plVar4 = plVar5;
          plVar10 = plVar5;
          if (uVar7 == 0) goto LAB_10adf66b0;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar7 | 7) != 0x17) {
            plVar10 = (long *)((uVar7 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 3;
LAB_10adf6690:
          plVar5[1] = uVar7;
          plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar5;
        }
LAB_10adf66a0:
        _memmove(plVar4,puVar6,uVar7);
        plVar5 = plVar4;
      }
LAB_10adf66b0:
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
      uVar7 = *(ulong *)(param_2 + 8);
      goto joined_r0x00010adf653c;
    }
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else {
        if (-1 < cVar1) {
          uVar12 = puVar8[1];
          uVar11 = *puVar8;
          puVar6[2] = puVar8[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar11;
          uVar7 = *(ulong *)(param_2 + 8);
          goto joined_r0x00010adf653c;
        }
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
    }
  }
  uVar7 = *(ulong *)(param_2 + 8);
joined_r0x00010adf653c:
  if ((uVar7 & 1) != 0) {
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



/* Entry: 10adf670c; end: 10adf677f;  */

void FUN_10adf670c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 == (undefined8 *)0x0) || (-1 < *(char *)((long)puVar2 + 0x17))) {
    __ZdlPv();
  }
  else {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10adf6780; end: 10adf67cf;  */

undefined ** FUN_10adf6780(void)

{
  return &PTR_DAT_110c76de0;
}



/* Entry: 10adf67d0; end: 10adf6ab7;  */

/* WARNING: Removing unreachable block (ram,0x00010adf699c) */
/* WARNING: Removing unreachable block (ram,0x00010adf69a4) */
/* WARNING: Removing unreachable block (ram,0x00010adf6994) */

long * FUN_10adf67d0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010adf6828;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010adf6828:
      if (uVar16 << 0x20 == 0) {
LAB_10adf68e8:
        if (((uint)(int)cVar4 >> 7 & 1) == 0) goto LAB_10adf68ec;
LAB_10adf6920:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10adf692c;
      }
      else {
        lVar8 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar10 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar9 = (long)puVar2 - (long)puVar10;
          puVar10 = puVar3;
          for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') goto LAB_10adf68dc;
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar9);
          puVar5 = puVar3;
          if (2 < uVar9 - 1) {
            puVar10 = (ulong *)((long)puVar10 + 3);
            do {
              puVar5 = puVar10;
              if ((char)*puVar10 < '\0') break;
              puVar1 = (ulong *)((long)puVar10 + 1);
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adf68dc:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10adf68e8;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af1ad,0x2f,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if ((char)*(byte *)((long)puVar12 + 0x17) < '\0') goto LAB_10adf6920;
LAB_10adf68ec:
        uVar15 = uVar15 & 0xff;
LAB_10adf692c:
        if ((long)uVar15 <= (*param_3 - (long)param_2) + 0xe) {
          *(undefined1 *)param_2 = 10;
          *(char *)((long)param_2 + 1) = (char)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy((undefined1 *)((long)param_2 + 2),puVar3,uVar15);
          param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar15);
          goto LAB_10adf6970;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d50d0(param_3,1,puVar12,param_2);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adf6974;
    }
  }
LAB_10adf6970:
  uVar15 = *(ulong *)(param_1 + 8);
  plVar6 = param_2;
joined_r0x00010adf6974:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar8 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar8 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*param_3 - (long)plVar6 < (long)(int)uVar14) {
      puVar18 = (undefined1 *)((*param_3 - (long)plVar6) + 0x10);
      if ((int)puVar18 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar18;
          _memcpy(plVar6,lVar8,lVar13);
          uVar14 = (int)uVar16 - (int)puVar18;
          uVar16 = (ulong)uVar14;
          lVar8 = lVar8 + lVar13;
          plVar6 = (long *)((long)plVar6 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar17 = (int)puVar18;
              plVar6 = param_3 + 2;
              goto joined_r0x00010adf6a98;
            }
            plVar7 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar7 + (long)((int)plVar6 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= plVar6);
          puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)plVar6));
          iVar17 = (int)puVar18;
joined_r0x00010adf6a98:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(plVar6,lVar8,(long)(int)uVar14);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
    else {
      _memcpy(plVar6,lVar8,uVar16 & 0xffffffff);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
  }
  return plVar6;
}



/* Entry: 10adf6ab8; end: 10adf6b3b;  */

long FUN_10adf6ab8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    lVar3 = (long)*(char *)((uVar1 & 0xfffffffffffffffe) + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)((uVar1 & 0xfffffffffffffffe) + 0x10);
    }
    *(int *)(param_1 + 0x18) = (int)(lVar3 + lVar2);
    return lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 10adf6b3c; end: 10adf6d83;  */

void FUN_10adf6b3c(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    if (((ulong)plVar5 & 1) == 0) {
      uVar7 = *(ulong *)(param_1 + 0x10);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar7 = *(ulong *)(param_1 + 0x10);
    }
    if ((uVar7 & 3) == 0) {
      uVar7 = puVar8[1];
      puVar6 = (undefined8 *)*puVar8;
      if (-1 < cVar1) {
        uVar7 = uVar9;
        puVar6 = puVar8;
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar7) goto LAB_10adf6d68;
        if (0x16 < uVar7) {
          plVar10 = (long *)0x19;
          if ((uVar7 | 7) != 0x17) {
            plVar10 = (long *)((uVar7 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 2;
          goto LAB_10adf6d08;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar7;
        uVar9 = 2;
        plVar4 = plVar5;
        plVar10 = plVar5;
        if (uVar7 != 0) goto LAB_10adf6d18;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar7) {
          func_0x000104bd47d4();
LAB_10adf6d68:
          func_0x000104bd47d4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10adf6d70);
          (*pcVar3)();
        }
        if (uVar7 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar7;
          uVar9 = 3;
          plVar4 = plVar5;
          plVar10 = plVar5;
          if (uVar7 == 0) goto LAB_10adf6d28;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar7 | 7) != 0x17) {
            plVar10 = (long *)((uVar7 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 3;
LAB_10adf6d08:
          plVar5[1] = uVar7;
          plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar5;
        }
LAB_10adf6d18:
        _memmove(plVar4,puVar6,uVar7);
        plVar5 = plVar4;
      }
LAB_10adf6d28:
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
      uVar7 = *(ulong *)(param_2 + 8);
      goto joined_r0x00010adf6bb4;
    }
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else {
        if (-1 < cVar1) {
          uVar12 = puVar8[1];
          uVar11 = *puVar8;
          puVar6[2] = puVar8[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar11;
          uVar7 = *(ulong *)(param_2 + 8);
          goto joined_r0x00010adf6bb4;
        }
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
    }
  }
  uVar7 = *(ulong *)(param_2 + 8);
joined_r0x00010adf6bb4:
  if ((uVar7 & 1) != 0) {
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



/* Entry: 10adf6d84; end: 10adf6e37;  */

long FUN_10adf6d84(long param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar5 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar6 = puVar5;
  }
  else {
    puVar2 = (uint *)(uVar1 - 1);
    uVar3 = (ulong)*puVar2;
    if ((int)*puVar2 < 1) goto LAB_10adf6e1c;
    puVar6 = (ulong *)(uVar1 + 7);
  }
  do {
    puVar4 = (undefined8 *)*puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar4);
    }
    uVar3 = uVar3 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if ((*puVar5 & 1) == 0) {
    return param_1;
  }
  puVar2 = (uint *)(*puVar5 - 1);
LAB_10adf6e1c:
  __ZdlPv(puVar2);
  return param_1;
}



/* Entry: 10adf6e38; end: 10adf6e3b;  */

long FUN_10adf6e38(long param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar5 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar5;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar6 = puVar5;
  }
  else {
    puVar2 = (uint *)(uVar1 - 1);
    uVar3 = (ulong)*puVar2;
    if ((int)*puVar2 < 1) goto LAB_10adf6e1c;
    puVar6 = (ulong *)(uVar1 + 7);
  }
  do {
    puVar4 = (undefined8 *)*puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar4);
    }
    uVar3 = uVar3 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
  if ((*puVar5 & 1) == 0) {
    return param_1;
  }
  puVar2 = (uint *)(*puVar5 - 1);
LAB_10adf6e1c:
  __ZdlPv(puVar2);
  return param_1;
}



/* Entry: 10adf6e3c; end: 10adf6e4f;  */

void FUN_10adf6e3c(void)

{
  FUN_10adf6d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adf6e50; end: 10adf6e5b;  */

undefined ** FUN_10adf6e50(void)

{
  return &PTR_DAT_110c76e28;
}



/* Entry: 10adf6e5c; end: 10adf6ea7;  */

void FUN_10adf6e5c(long param_1)

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



/* Entry: 10adf6ea8; end: 10adf723f;  */

/* WARNING: Removing unreachable block (ram,0x00010adf70c0) */
/* WARNING: Removing unreachable block (ram,0x00010adf70b8) */
/* WARNING: Removing unreachable block (ram,0x00010adf70c8) */

long * FUN_10adf6ea8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  int iVar18;
  
  iVar18 = *(int *)(param_1 + 0x28);
  if (iVar18 != 0) {
    plVar7 = (long *)*param_3;
    if (plVar7 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar7));
        plVar7 = (long *)*param_3;
      } while (plVar7 <= param_2);
      iVar18 = *(int *)(param_1 + 0x28);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar18;
    param_2 = (long *)((long)param_2 + 5);
  }
  uVar14 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar14) {
    uVar17 = 0;
    do {
      while( true ) {
        uVar8 = *(ulong *)(param_1 + 0x10);
        puVar15 = (ulong *)(param_1 + 0x10);
        if ((uVar8 & 1) != 0) {
          puVar15 = (ulong *)(uVar8 + uVar17 * 8 + 7);
        }
        puVar15 = (ulong *)*puVar15;
        bVar4 = *(byte *)((long)puVar15 + 0x17);
        uVar8 = (ulong)bVar4;
        if (-1 < (char)bVar4) break;
        puVar9 = (ulong *)*puVar15;
        lVar12 = puVar15[1] << 0x20;
        if (lVar12 != 0) goto LAB_10adf6f60;
LAB_10adf702c:
        if (-1 < (char)bVar4) goto LAB_10adf7068;
LAB_10adf7030:
        uVar8 = puVar15[1];
        if ((long)uVar8 < 0x80) goto LAB_10adf7068;
LAB_10adf70d8:
        plVar7 = param_3;
        func_0x00010b4d5120(param_3,2,puVar15,param_2);
        uVar17 = uVar17 + 1;
        param_2 = plVar7;
        if (uVar17 == uVar14) goto LAB_10adf70fc;
      }
      lVar12 = uVar8 << 0x20;
      puVar9 = puVar15;
      if (uVar8 == 0) goto LAB_10adf702c;
LAB_10adf6f60:
      lVar13 = lVar12 >> 0x20;
      puVar11 = puVar9;
      for (puVar2 = puVar9; (7 < lVar13 && ((*puVar2 & 0x8080808080808080) == 0));
          puVar2 = puVar2 + 1) {
        puVar11 = puVar11 + 1;
        lVar13 = lVar13 + -8;
      }
      puVar9 = (ulong *)((long)puVar9 + (lVar12 >> 0x20));
      puVar5 = puVar2;
      if (puVar2 < puVar9) {
        uVar10 = (long)puVar9 - (long)puVar11;
        puVar11 = puVar2;
        for (uVar3 = uVar10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5 = puVar11;
          if ((char)*puVar11 < '\0') goto LAB_10adf7020;
          puVar11 = (ulong *)((long)puVar11 + 1);
        }
        puVar2 = (ulong *)((long)puVar2 + uVar10);
        puVar5 = puVar2;
        if (2 < uVar10 - 1) {
          puVar11 = (ulong *)((long)puVar11 + 3);
          do {
            puVar5 = puVar11;
            if ((char)*puVar11 < '\0') break;
            puVar1 = (ulong *)((long)puVar11 + 1);
            puVar11 = (ulong *)((long)puVar11 + 4);
            puVar5 = puVar2;
          } while (puVar1 != puVar2);
        }
      }
LAB_10adf7020:
      func_0x000107c34ffc(puVar5,puVar9,0);
      if (puVar5 != (ulong *)0x0) goto LAB_10adf702c;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af1dd,0x21,&UNK_10f774276);
      uVar8 = (ulong)*(byte *)((long)puVar15 + 0x17);
      if ((char)*(byte *)((long)puVar15 + 0x17) < '\0') goto LAB_10adf7030;
LAB_10adf7068:
      if ((*param_3 - (long)param_2) + 0xe < (long)uVar8) goto LAB_10adf70d8;
      *(undefined1 *)param_2 = 0x12;
      *(char *)((long)param_2 + 1) = (char)uVar8;
      if (*(char *)((long)puVar15 + 0x17) < '\0') {
        puVar15 = (ulong *)*puVar15;
      }
      _memcpy((long)param_2 + 2,puVar15,uVar8);
      param_2 = (long *)((long)param_2 + 2 + uVar8);
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar14);
  }
LAB_10adf70fc:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar17 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar17 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar12 = *(long *)(uVar17 + 8);
      uVar8 = (ulong)*(uint *)(uVar17 + 0x10);
    }
    else {
      lVar12 = uVar17 + 8;
    }
    uVar14 = (uint)uVar8;
    if (*param_3 - (long)param_2 < (long)(int)uVar14) {
      puVar16 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar16 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar16;
          _memcpy(param_2,lVar12,lVar13);
          uVar14 = (int)uVar8 - (int)puVar16;
          uVar8 = (ulong)uVar14;
          lVar12 = lVar12 + lVar13;
          param_2 = (long *)((long)param_2 + lVar13);
          plVar7 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar16 = (undefined1 *)((long)plVar7 + (0x10 - (long)(param_3 + 2)));
              iVar18 = (int)puVar16;
              param_2 = param_3 + 2;
              goto joined_r0x00010adf7220;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar7));
            plVar7 = (long *)*param_3;
          } while (plVar7 <= param_2);
          puVar16 = (undefined1 *)((long)plVar7 + (0x10 - (long)param_2));
          iVar18 = (int)puVar16;
joined_r0x00010adf7220:
        } while (iVar18 < (int)uVar14);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar14);
      param_2 = (long *)((long)param_2 + (long)(int)uVar14);
    }
    else {
      _memcpy(param_2,lVar12,uVar8 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar14);
    }
  }
  return param_2;
}



/* Entry: 10adf7240; end: 10adf73bf;  */

ulong FUN_10adf7240(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulong)uVar3;
  uVar10 = uVar6;
  if (0 < (int)uVar3) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    if ((uVar7 & 1) == 0) {
      uVar10 = *(ulong *)(uVar7 + 8);
      if (-1 < (char)*(byte *)(uVar7 + 0x17)) {
        uVar10 = (ulong)*(byte *)(uVar7 + 0x17);
      }
      uVar10 = uVar6 + uVar6 * (uVar10 + ((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6));
    }
    else {
      if (uVar3 == 1) {
        uVar9 = 0;
        uVar10 = 1;
      }
      else {
        lVar8 = 0;
        uVar9 = uVar6 & 0x7ffffffe;
        plVar11 = (long *)(uVar7 + 0xf);
        uVar12 = uVar9;
        do {
          bVar5 = *(byte *)(plVar11[-1] + 0x17);
          bVar4 = *(byte *)(*plVar11 + 0x17);
          uVar1 = *(ulong *)(plVar11[-1] + 8);
          if (-1 < (char)bVar5) {
            uVar1 = (ulong)bVar5;
          }
          uVar2 = *(ulong *)(*plVar11 + 8);
          if (-1 < (char)bVar4) {
            uVar2 = (ulong)bVar4;
          }
          uVar10 = uVar1 + uVar10 + (ulong)((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
          lVar8 = uVar2 + lVar8 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
          plVar11 = plVar11 + 2;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        uVar10 = lVar8 + uVar10;
        if (uVar9 == uVar6) goto LAB_10adf737c;
      }
      lVar8 = uVar6 - uVar9;
      plVar11 = (long *)((uVar7 - 1) + uVar9 * 8);
      do {
        plVar11 = plVar11 + 1;
        bVar5 = *(byte *)(*plVar11 + 0x17);
        uVar6 = *(ulong *)(*plVar11 + 8);
        if (-1 < (char)bVar5) {
          uVar6 = (ulong)bVar5;
        }
        uVar10 = uVar6 + uVar10 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
LAB_10adf737c:
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar10 = uVar10 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar8 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar8 < 0) {
      lVar8 = *(long *)(uVar6 + 0x10);
    }
    *(int *)(param_1 + 0x2c) = (int)(lVar8 + uVar10);
    return lVar8 + uVar10;
  }
  *(int *)(param_1 + 0x2c) = (int)uVar10;
  return uVar10;
}



/* Entry: 10adf73c0; end: 10adf7573;  */

void FUN_10adf73c0(long param_1,long param_2)

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



/* Entry: 10adf7574; end: 10adf7607;  */

undefined ** FUN_10adf7574(void)

{
  return &PTR_DAT_110c76e68;
}



/* Entry: 10adf7608; end: 10adf7ab3;  */

/* WARNING: Removing unreachable block (ram,0x00010adf79a0) */
/* WARNING: Removing unreachable block (ram,0x00010adf77cc) */
/* WARNING: Removing unreachable block (ram,0x00010adf77dc) */
/* WARNING: Removing unreachable block (ram,0x00010adf77d4) */
/* WARNING: Removing unreachable block (ram,0x00010adf7998) */
/* WARNING: Removing unreachable block (ram,0x00010adf7990) */

long * FUN_10adf7608(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010adf7660;
    }
LAB_10adf77a8:
    puVar12 = (ulong *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    uVar15 = (ulong)*(char *)((long)puVar12 + 0x17);
    plVar6 = param_2;
    if (-1 < (long)uVar15) goto LAB_10adf77b8;
LAB_10adf7814:
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      plVar11 = plVar6;
      uVar16 = puVar12[1];
      goto joined_r0x00010adf7824;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 == 0) goto LAB_10adf77a8;
joined_r0x00010adf7660:
    if (uVar16 << 0x20 == 0) {
LAB_10adf7720:
      if (((uint)(int)cVar4 >> 7 & 1) == 0) goto LAB_10adf7724;
LAB_10adf7758:
      uVar15 = puVar12[1];
      if ((long)uVar15 < 0x80) goto LAB_10adf7764;
    }
    else {
      lVar8 = (long)(uVar16 << 0x20) >> 0x20;
      puVar2 = (ulong *)((long)puVar3 + lVar8);
      puVar10 = puVar3;
      for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
        puVar10 = puVar10 + 1;
        lVar8 = lVar8 + -8;
      }
      puVar5 = puVar3;
      if (puVar3 < puVar2) {
        uVar9 = (long)puVar2 - (long)puVar10;
        puVar10 = puVar3;
        for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          puVar5 = puVar10;
          if ((char)*puVar10 < '\0') goto LAB_10adf7714;
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar3 = (ulong *)((long)puVar3 + uVar9);
        puVar5 = puVar3;
        if (2 < uVar9 - 1) {
          puVar10 = (ulong *)((long)puVar10 + 3);
          do {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') break;
            puVar1 = (ulong *)((long)puVar10 + 1);
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar5 = puVar3;
          } while (puVar1 != puVar3);
        }
      }
LAB_10adf7714:
      func_0x000107c34ffc(puVar5,puVar2,0);
      if (puVar5 != (ulong *)0x0) goto LAB_10adf7720;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af1ff,0x1f,&UNK_10f774276);
      uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
      if ((char)*(byte *)((long)puVar12 + 0x17) < '\0') goto LAB_10adf7758;
LAB_10adf7724:
      uVar15 = uVar15 & 0xff;
LAB_10adf7764:
      if ((long)uVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 10;
        *(char *)((long)param_2 + 1) = (char)uVar15;
        puVar3 = (ulong *)*puVar12;
        if (-1 < *(char *)((long)puVar12 + 0x17)) {
          puVar3 = puVar12;
        }
        _memcpy((undefined1 *)((long)param_2 + 2),puVar3,uVar15);
        param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar15);
        goto LAB_10adf77a8;
      }
    }
    plVar6 = param_3;
    func_0x00010b4d50d0(param_3,1,puVar12,param_2);
    puVar12 = (ulong *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    uVar15 = (ulong)*(char *)((long)puVar12 + 0x17);
    if ((long)uVar15 < 0) goto LAB_10adf7814;
LAB_10adf77b8:
    puVar3 = puVar12;
    plVar11 = plVar6;
    uVar16 = uVar15;
    if ((int)uVar15 != 0) {
joined_r0x00010adf7824:
      if (uVar16 << 0x20 == 0) {
LAB_10adf78e4:
        if (((uint)uVar15 >> 7 & 1) == 0) goto LAB_10adf78e8;
LAB_10adf791c:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10adf7928;
      }
      else {
        lVar8 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar10 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar9 = (long)puVar2 - (long)puVar10;
          puVar10 = puVar3;
          for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') goto LAB_10adf78d8;
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar9);
          puVar5 = puVar3;
          if (2 < uVar9 - 1) {
            puVar10 = (ulong *)((long)puVar10 + 3);
            do {
              puVar5 = puVar10;
              if ((char)*puVar10 < '\0') break;
              puVar1 = (ulong *)((long)puVar10 + 1);
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adf78d8:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10adf78e4;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af21f,0x21,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if ((char)*(byte *)((long)puVar12 + 0x17) < '\0') goto LAB_10adf791c;
LAB_10adf78e8:
        uVar15 = uVar15 & 0xff;
LAB_10adf7928:
        if ((long)uVar15 <= (*param_3 - (long)plVar11) + 0xe) {
          *(undefined1 *)plVar11 = 0x12;
          *(char *)((long)plVar11 + 1) = (char)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy((long)plVar11 + 2,puVar3,uVar15);
          plVar6 = (long *)((long)plVar11 + 2 + uVar15);
          goto LAB_10adf796c;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d50d0(param_3,2,puVar12,plVar11);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adf7970;
    }
  }
LAB_10adf796c:
  uVar15 = *(ulong *)(param_1 + 8);
joined_r0x00010adf7970:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar8 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar8 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*param_3 - (long)plVar6 < (long)(int)uVar14) {
      puVar18 = (undefined1 *)((*param_3 - (long)plVar6) + 0x10);
      if ((int)puVar18 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar18;
          _memcpy(plVar6,lVar8,lVar13);
          uVar14 = (int)uVar16 - (int)puVar18;
          uVar16 = (ulong)uVar14;
          lVar8 = lVar8 + lVar13;
          plVar6 = (long *)((long)plVar6 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar17 = (int)puVar18;
              plVar6 = param_3 + 2;
              goto joined_r0x00010adf7a94;
            }
            plVar7 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar7 + (long)((int)plVar6 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= plVar6);
          puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)plVar6));
          iVar17 = (int)puVar18;
joined_r0x00010adf7a94:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(plVar6,lVar8,(long)(int)uVar14);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
    else {
      _memcpy(plVar6,lVar8,uVar16 & 0xffffffff);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
  }
  return plVar6;
}



/* Entry: 10adf7ab4; end: 10adf7b8b;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10adf7ab4(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  lVar4 = lVar5;
  if (lVar5 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
    uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    cVar1 = *(char *)(uVar3 + 0x17);
  }
  else {
    lVar4 = *(long *)(uVar3 + 8);
    if (-1 < *(char *)(uVar3 + 0x17)) {
      lVar4 = lVar5;
    }
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    cVar1 = *(char *)(uVar3 + 0x17);
  }
  lVar2 = (long)cVar1;
  lVar5 = lVar2;
  if (lVar2 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    lVar5 = *(long *)(uVar3 + 8);
    if (-1 < cVar1) {
      lVar5 = lVar2;
    }
    lVar4 = lVar4 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar3 + 0x10);
    }
    *(int *)(param_1 + 0x20) = (int)(lVar5 + lVar4);
    return lVar5 + lVar4;
  }
  *(int *)(param_1 + 0x20) = (int)lVar4;
  return lVar4;
}



/* Entry: 10adf7b8c; end: 10adf7f3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10adf7b8c(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar8 = (ulong)cVar1;
  if ((long)uVar8 < 0) {
    if (puVar7[1] == 0) goto LAB_10adf7d2c;
LAB_10adf7bcc:
    plVar5 = *(long **)(param_1 + 8);
    if (((ulong)plVar5 & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x10);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar9 = *(ulong *)(param_1 + 0x10);
    }
    if ((uVar9 & 3) != 0) {
      puVar6 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
      if (puVar6 != puVar7) {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          uVar9 = puVar7[1];
          puVar2 = (undefined8 *)*puVar7;
          if (-1 < cVar1) {
            uVar9 = uVar8;
            puVar2 = puVar7;
          }
          func_0x000107c27ba0(puVar6,puVar2,uVar9);
        }
        else if (cVar1 < '\0') {
          func_0x000107c27ba4(puVar6,*puVar7,puVar7[1]);
        }
        else {
          uVar12 = puVar7[1];
          uVar11 = *puVar7;
          puVar6[2] = puVar7[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar11;
        }
      }
      goto LAB_10adf7d2c;
    }
    uVar9 = puVar7[1];
    puVar6 = (undefined8 *)*puVar7;
    if (-1 < cVar1) {
      uVar9 = uVar8;
      puVar6 = puVar7;
    }
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x18;
      __Znwm();
      if (uVar9 < 0x7ffffffffffffff7) {
        if (0x16 < uVar9) {
          plVar10 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar10 = (long *)((uVar9 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar8 = 2;
          goto LAB_10adf7d00;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar9;
        uVar8 = 2;
        plVar4 = plVar5;
        plVar10 = plVar5;
        if (uVar9 != 0) goto LAB_10adf7d10;
        goto LAB_10adf7d20;
      }
    }
    else {
      func_0x00010b4d80a4();
      if (uVar9 < 0x7ffffffffffffff7) {
        if (uVar9 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar9;
          uVar8 = 3;
          plVar4 = plVar5;
          plVar10 = plVar5;
          if (uVar9 == 0) goto LAB_10adf7d20;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar10 = (long *)((uVar9 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar8 = 3;
LAB_10adf7d00:
          plVar5[1] = uVar9;
          plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar5;
        }
LAB_10adf7d10:
        _memmove(plVar4,puVar6,uVar9);
        plVar5 = plVar4;
LAB_10adf7d20:
        *(undefined1 *)((long)plVar5 + uVar9) = 0;
        *(ulong *)(param_1 + 0x10) = uVar8 | (ulong)plVar10;
        goto LAB_10adf7d2c;
      }
LAB_10adf7f04:
      func_0x000104bd47d4();
    }
    func_0x000104bd47d4();
LAB_10adf7f14:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10adf7f18);
    (*pcVar3)();
  }
  if (uVar8 != 0) goto LAB_10adf7bcc;
LAB_10adf7d2c:
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = puVar7[1];
  }
  if (uVar8 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    if (((ulong)plVar5 & 1) == 0) {
      uVar8 = *(ulong *)(param_1 + 0x18);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar8 = *(ulong *)(param_1 + 0x18);
    }
    if ((uVar8 & 3) == 0) {
      uVar8 = puVar7[1];
      puVar6 = (undefined8 *)*puVar7;
      if (-1 < cVar1) {
        uVar8 = uVar9;
        puVar6 = puVar7;
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar8) {
          func_0x000104bd47d4();
          goto LAB_10adf7f14;
        }
        if (0x16 < uVar8) {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 2;
          goto LAB_10adf7eac;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar8;
        uVar9 = 2;
        plVar4 = plVar5;
        plVar10 = plVar5;
        if (uVar8 != 0) goto LAB_10adf7ebc;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar8) goto LAB_10adf7f04;
        if (uVar8 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar8;
          uVar9 = 3;
          plVar4 = plVar5;
          plVar10 = plVar5;
          if (uVar8 == 0) goto LAB_10adf7ecc;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 3;
LAB_10adf7eac:
          plVar5[1] = uVar8;
          plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar5;
        }
LAB_10adf7ebc:
        _memmove(plVar4,puVar6,uVar8);
        plVar5 = plVar4;
      }
LAB_10adf7ecc:
      *(undefined1 *)((long)plVar5 + uVar8) = 0;
      *(ulong *)(param_1 + 0x18) = uVar9 | (ulong)plVar10;
      uVar8 = *(ulong *)(param_2 + 8);
      goto joined_r0x00010adf7d8c;
    }
    puVar6 = (undefined8 *)(uVar8 & 0xfffffffffffffffc);
    if (puVar6 != puVar7) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar8 = puVar7[1];
        puVar2 = (undefined8 *)*puVar7;
        if (-1 < cVar1) {
          uVar8 = uVar9;
          puVar2 = puVar7;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar8);
        uVar8 = *(ulong *)(param_2 + 8);
        goto joined_r0x00010adf7d8c;
      }
      if (-1 < cVar1) {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar6[2] = puVar7[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
        uVar8 = *(ulong *)(param_2 + 8);
        goto joined_r0x00010adf7d8c;
      }
      func_0x000107c27ba4(puVar6,*puVar7,puVar7[1]);
    }
  }
  uVar8 = *(ulong *)(param_2 + 8);
joined_r0x00010adf7d8c:
  if ((uVar8 & 1) == 0) {
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



/* Entry: 10adf7f40; end: 10adf80af;  */

void FUN_10adf7f40(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 == 0) && (lVar4 = *(long *)(param_1 + 0x18), lVar4 != 0)) {
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      puVar3 = (undefined8 *)(*(ulong *)(lVar4 + 0x10) ^ 2);
      puVar1 = puVar3;
      if (((ulong)puVar3 & 3) != 0) {
        puVar1 = (undefined8 *)0x0;
      }
      if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
        __ZdlPv(*puVar3);
      }
      __ZdlPv(puVar1);
      __ZdlPv(lVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10adf80b0; end: 10adf80b3;  */

void FUN_10adf80b0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  
  puVar4 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar4 & 1) != 0) {
    func_0x0001053936ac(puVar4);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x24) == 2) {
      uVar2 = *puVar4;
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      if ((uVar2 == 0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
        if ((*(byte *)(lVar5 + 8) & 1) != 0) {
          func_0x0001053936ac();
        }
        puVar3 = (undefined8 *)(*(ulong *)(lVar5 + 0x10) ^ 2);
        puVar1 = puVar3;
        if (((ulong)puVar3 & 3) != 0) {
          puVar1 = (undefined8 *)0x0;
        }
        if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
          __ZdlPv(*puVar3);
        }
        __ZdlPv(puVar1);
        __ZdlPv(lVar5);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



/* Entry: 10adf80b4; end: 10adf80c7;  */

void FUN_10adf80b4(void)

{
  func_0x00010adf7fe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adf80c8; end: 10adf813b;  */

long FUN_10adf80c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    return param_1;
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10adf813c; end: 10adf8147;  */

undefined ** FUN_10adf813c(void)

{
  return &PTR_DAT_110c76ea8;
}



/* Entry: 10adf8148; end: 10adf820b;  */

void FUN_10adf8148(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if ((uVar3 == 0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      puVar4 = (undefined8 *)(*(ulong *)(lVar5 + 0x10) ^ 2);
      puVar1 = puVar4;
      if (((ulong)puVar4 & 3) != 0) {
        puVar1 = (undefined8 *)0x0;
      }
      if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar4 + 0x17) < '\0')) {
        __ZdlPv(*puVar4);
      }
      __ZdlPv(puVar1);
      __ZdlPv(lVar5);
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x24) = 0;
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



/* Entry: 10adf820c; end: 10adf84ab;  */

byte * FUN_10adf820c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uStack_48;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar5 != 0) {
    pbVar7 = (byte *)*param_3;
    if (param_2 < pbVar7) {
      pbVar7 = param_2 + 1;
      *param_2 = 8;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          uVar5 = *(uint *)(param_1 + 0x10);
          pbVar7 = (byte *)((long)param_3 + 0x11);
          *(undefined1 *)(param_3 + 2) = 8;
          goto joined_r0x00010adf8308;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar7));
        pbVar7 = (byte *)*param_3;
      } while (pbVar7 <= param_2);
      uVar5 = *(uint *)(param_1 + 0x10);
      pbVar7 = param_2 + 1;
      *param_2 = 8;
    }
joined_r0x00010adf8308:
    pbVar6 = pbVar7;
    uVar4 = uVar5;
    if (0x7f < uVar5) {
      do {
        pbVar7 = pbVar6 + 1;
        *pbVar6 = (byte)uVar4 | 0x80;
        uVar5 = uVar4 >> 7;
        uVar1 = uVar4 >> 0xe;
        pbVar6 = pbVar7;
        uVar4 = uVar5;
      } while (uVar1 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
  }
  pbVar7 = param_2;
  if (*(int *)(param_1 + 0x24) == 2) {
    pbVar7 = *(byte **)(param_1 + 0x18);
    uVar5 = *(uint *)(pbVar7 + 0x18);
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          pbVar6 = (byte *)((long)param_3 + 0x11);
          *param_2 = 0x12;
          goto joined_r0x00010adf83d4;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
    }
    pbVar6 = param_2 + 1;
    *param_2 = 0x12;
joined_r0x00010adf83d4:
    if (0x7f < uVar5) {
      do {
        param_2 = pbVar6;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 0xe;
        uVar5 = uVar5 >> 7;
      } while (uVar4 != 0);
    }
    *pbVar6 = (byte)uVar5;
    (**(code **)(*(long *)pbVar7 + 0x38))(pbVar7,param_2 + 2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar8 + 8);
      uStack_48 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar3 = uVar8 + 8;
    }
    uVar5 = (uint)uStack_48;
    if (*param_3 - (long)pbVar7 < (long)(int)uVar5) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar6 < (int)uVar5) {
        do {
          lVar9 = (long)(int)pbVar6;
          _memcpy(pbVar7,lVar3,lVar9);
          uVar5 = (int)uStack_48 - (int)pbVar6;
          uStack_48 = (ulong)uVar5;
          lVar3 = lVar3 + lVar9;
          pbVar7 = pbVar7 + lVar9;
          pbVar6 = (byte *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              pbVar6 = pbVar6 + (0x10 - (long)(param_3 + 2));
              iVar10 = (int)pbVar6;
              pbVar7 = (byte *)(param_3 + 2);
              goto joined_r0x00010adf8488;
            }
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar7 = (byte *)((long)plVar2 + (long)((int)pbVar7 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
          } while (pbVar6 <= pbVar7);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar7);
          iVar10 = (int)pbVar6;
joined_r0x00010adf8488:
        } while (iVar10 < (int)uVar5);
      }
      uStack_48._0_4_ = uVar5;
      _memcpy(pbVar7,lVar3,(long)(int)(uint)uStack_48);
      pbVar7 = pbVar7 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar7,lVar3,uStack_48 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar5;
    }
  }
  return pbVar7;
}



/* Entry: 10adf84ac; end: 10adf85af;  */

ulong FUN_10adf84ac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  uVar2 = (ulong)uVar1;
  if (*(int *)(param_1 + 0x24) != 2) {
    uVar3 = *(ulong *)(param_1 + 8);
    goto joined_r0x00010adf8574;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  uVar3 = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    if (*(long *)(uVar3 + 8) != 0) goto LAB_10adf8504;
LAB_10adf8540:
    lVar5 = 0;
    uVar3 = *(ulong *)(lVar4 + 8);
  }
  else {
    if (lVar5 == 0) goto LAB_10adf8540;
LAB_10adf8504:
    lVar6 = *(long *)(uVar3 + 8);
    if (-1 < *(char *)(uVar3 + 0x17)) {
      lVar6 = lVar5;
    }
    lVar5 = lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
    uVar3 = *(ulong *)(lVar4 + 8);
  }
  if ((uVar3 & 1) != 0) {
    lVar6 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    lVar5 = lVar6 + lVar5;
  }
  *(int *)(lVar4 + 0x18) = (int)lVar5;
  uVar2 = uVar2 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  uVar3 = *(ulong *)(param_1 + 8);
joined_r0x00010adf8574:
  if ((uVar3 & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)uVar2;
    return uVar2;
  }
  lVar4 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
  }
  *(int *)(param_1 + 0x20) = (int)(lVar4 + uVar2);
  return lVar4 + uVar2;
}



/* Entry: 10adf85b0; end: 10adf88a3;  */

/* WARNING: Possible PIC construction at 0x00010adf884c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010adf8850) */

void FUN_10adf85b0(long param_1,long param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *unaff_x19;
  ulong *puVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar12 = (ulong *)(param_1 + 8);
  uVar10 = *puVar12;
  if ((uVar10 & 1) == 0) {
    iVar3 = *(int *)(param_2 + 0x10);
    uVar9 = uVar10;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x10);
    uVar9 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x10) = iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x24) == iVar3) {
      if (iVar3 == 2) {
        lVar13 = *(long *)(param_2 + 0x18);
        puVar11 = (undefined8 *)(*(ulong *)(lVar13 + 0x10) & 0xfffffffffffffffc);
        cVar4 = *(char *)((long)puVar11 + 0x17);
        uVar10 = (ulong)cVar4;
        if ((long)uVar10 < 0) {
          lVar14 = *(long *)(param_1 + 0x18);
          uVar9 = puVar11[1];
        }
        else {
          lVar14 = *(long *)(param_1 + 0x18);
          uVar9 = uVar10;
        }
        if (uVar9 != 0) {
          puVar6 = *(ulong **)(lVar14 + 8);
          if (((ulong)puVar6 & 1) == 0) {
            uVar9 = *(ulong *)(lVar14 + 0x10);
          }
          else {
            puVar6 = *(ulong **)((ulong)puVar6 & 0xfffffffffffffffe);
            uVar9 = *(ulong *)(lVar14 + 0x10);
          }
          if ((uVar9 & 3) == 0) {
            uVar9 = puVar11[1];
            puVar7 = (undefined8 *)*puVar11;
            if (-1 < cVar4) {
              uVar9 = uVar10;
              puVar7 = puVar11;
            }
            if (puVar6 == (ulong *)0x0) {
              func_0x000107c39894(puVar7,uVar9);
              *(undefined8 **)(lVar14 + 0x10) = puVar7;
            }
            else {
              func_0x00010b4d80a4();
              if (0x7ffffffffffffff6 < uVar9) {
                func_0x000104bd47d4();
                if ((puVar6[1] & 1) != 0) {
                  func_0x0001053936ac();
                }
                puVar7 = (undefined8 *)(puVar6[2] ^ 2);
                puVar11 = puVar7;
                if (((ulong)puVar7 & 3) != 0) {
                  puVar11 = (undefined8 *)0x0;
                }
                if ((puVar11 == (undefined8 *)0x0) || (-1 < *(char *)((long)puVar7 + 0x17))) {
                  __ZdlPv();
                }
                else {
                  __ZdlPv(*puVar7);
                  __ZdlPv(puVar11);
                }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR___ZdlPv_110352258)(puVar6);
                return;
              }
              if (uVar9 < 0x17) {
                *(char *)((long)puVar6 + 0x17) = (char)uVar9;
                puVar8 = puVar6;
                if (uVar9 != 0) goto LAB_10adf8814;
              }
              else {
                puVar2 = (ulong *)0x19;
                if ((uVar9 | 7) != 0x17) {
                  puVar2 = (ulong *)((uVar9 | 7) + 1);
                }
                puVar8 = puVar2;
                __Znwm();
                puVar6[1] = uVar9;
                puVar6[2] = (ulong)puVar2 | 0x8000000000000000;
                *puVar6 = (ulong)puVar8;
LAB_10adf8814:
                _memmove(puVar8,puVar7,uVar9);
              }
              *(undefined1 *)((long)puVar8 + uVar9) = 0;
              *(ulong *)(lVar14 + 0x10) = (ulong)puVar6 | 3;
            }
          }
          else {
            puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
            if (puVar7 != puVar11) {
              if (*(char *)((long)puVar7 + 0x17) < '\0') {
                uVar9 = puVar11[1];
                puVar5 = (undefined8 *)*puVar11;
                if (-1 < cVar4) {
                  uVar9 = uVar10;
                  puVar5 = puVar11;
                }
                func_0x000107c27ba0(puVar7,puVar5,uVar9);
              }
              else if (cVar4 < '\0') {
                func_0x000107c27ba4(puVar7,*puVar11,puVar11[1]);
              }
              else {
                uVar16 = puVar11[1];
                uVar15 = *puVar11;
                puVar7[2] = puVar11[2];
                puVar7[1] = uVar16;
                *puVar7 = uVar15;
              }
            }
          }
        }
        if ((*(ulong *)(lVar13 + 8) & 1) != 0) {
          unaff_x30 = 0x10adf8850;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          puVar6 = (ulong *)(lVar14 + 8);
          unaff_x19 = puVar12;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) == 2) {
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        if ((uVar10 == 0) && (lVar13 = *(long *)(param_1 + 0x18), lVar13 != 0)) {
          if ((*(byte *)(lVar13 + 8) & 1) != 0) {
            func_0x0001053936ac();
          }
          puVar7 = (undefined8 *)(*(ulong *)(lVar13 + 0x10) ^ 2);
          puVar11 = puVar7;
          if (((ulong)puVar7 & 3) != 0) {
            puVar11 = (undefined8 *)0x0;
          }
          if ((puVar11 != (undefined8 *)0x0) && (*(char *)((long)puVar7 + 0x17) < '\0')) {
            __ZdlPv(*puVar7);
          }
          __ZdlPv(puVar11);
          __ZdlPv(lVar13);
        }
      }
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar3 == 2) {
        FUN_10adfc520(uVar9,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar9;
      }
    }
  }
  puVar6 = puVar12;
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



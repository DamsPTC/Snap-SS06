/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109b75810; end: 109b75913;  */

undefined8 * FUN_109b75810(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_110b28b18;
  if (param_1[0xe] != 0) {
    piVar7 = (int *)(param_1[0xe] + 0x14);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 7);
    }
  }
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar4 = 0;
    lVar6 = param_1[0xf];
    do {
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x3c));
  }
  puVar5 = (undefined8 *)param_1[0x10];
  if (puVar5 != param_1 + 0x11 && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  lVar4 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b75914; end: 109b759cf;  */

undefined8 * FUN_109b75914(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_110b28c00;
  FUN_109b745e8(param_1 + 0x14);
  *param_1 = &PTR_FUN_110b28b18;
  if (param_1[0xe] != 0) {
    piVar7 = (int *)(param_1[0xe] + 0x14);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 7);
    }
  }
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar4 = 0;
    lVar6 = param_1[0xf];
    do {
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x3c));
  }
  puVar5 = (undefined8 *)param_1[0x10];
  if (puVar5 != param_1 + 0x11 && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  lVar4 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b759d0; end: 109b75e33;  */

uint ** FUN_109b759d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint **ppuVar8;
  uint **ppuVar9;
  uint *puVar10;
  uint **ppuVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  byte *pbVar24;
  uint **ppuVar25;
  uint **ppuVar26;
  int iVar27;
  int *piVar28;
  byte *pbVar29;
  ulong uVar30;
  uint *puVar31;
  int iVar32;
  uint **ppuVar33;
  uint uVar34;
  ulong in_stack_fffffffffffff2b0;
  uint **ppuStack_d18;
  uint *puStack_d08;
  byte abStack_cfa [2];
  uint *puStack_cf8;
  int iStack_cec;
  undefined4 uStack_ce8;
  uint uStack_ce4;
  uint *puStack_ce0;
  uint *puStack_cd8;
  uint auStack_cd0 [258];
  uint **ppuStack_8c8;
  uint **ppuStack_8c0;
  uint *apuStack_8b8 [129];
  byte abStack_4b0 [256];
  long lStack_3b0;
  undefined8 uStack_338;
  long lStack_38;
  uint *puVar17;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_109b75a48:
    ppuVar8 = (uint **)(param_1 + 0xa0);
    ppuVar11 = (uint **)(param_1 + 0x18);
    func_0x000109b74724();
    if ((int)ppuVar8 != 0) {
LAB_109b75a58:
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 10;
      iVar6 = (int)param_1;
      iVar32 = iVar6 + 0xa0;
      func_0x000109b74af0();
      *(int *)(param_1 + 0x4e8) = iVar32;
      uVar15 = param_1 + 0xa0;
      func_0x000109b74af0();
      if ((int)uVar15 < 0x24) {
        if ((int)uVar15 == 0xc) {
          iVar32 = iVar6 + 0xa0;
          FUN_109b74a6c();
          *(int *)(param_1 + 8) = iVar32;
          iVar32 = iVar6 + 0xa0;
          FUN_109b74a6c();
          *(int *)(param_1 + 0xc) = iVar32;
          iVar6 = iVar6 + 0xa0;
          func_0x000109b74af0();
          uVar2 = iVar6 >> 0x10;
          *(uint *)(param_1 + 0x4e4) = uVar2;
          *(undefined4 *)(param_1 + 0x4ec) = 0;
          if ((((0 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 0xc) != 0)) && (uVar2 < 0x21)) &&
             ((1L << ((ulong)uVar2 & 0x3f) & 0x101000112U) != 0)) {
            if (uVar2 < 9) {
              ppuVar11 = (uint **)&uStack_338;
              FUN_109b749a0(param_1 + 0xa0,ppuVar11,3 << (ulong)(uVar2 & 0x1f));
              lVar22 = (long)&uStack_338 + 2;
              lVar23 = param_1 + 0xe2;
              uVar7 = 1;
              do {
                *(undefined1 *)(lVar23 + -2) = *(undefined1 *)(lVar22 + -2);
                *(undefined2 *)(lVar23 + -1) = *(undefined2 *)(lVar22 + -1);
                uVar21 = uVar7 >> (ulong)(uVar2 & 0x1f);
                uVar7 = uVar7 + 1;
                lVar22 = lVar22 + 3;
                lVar23 = lVar23 + 4;
              } while (uVar21 == 0);
            }
LAB_109b75d24:
            iVar6 = *(int *)(param_1 + 0xc);
            *(uint *)(param_1 + 0x4e0) = (uint)(0 < iVar6);
            iVar32 = -iVar6;
            if (-1 < iVar6) {
              iVar32 = iVar6;
            }
            *(int *)(param_1 + 0xc) = iVar32;
            *(undefined4 *)(param_1 + 0x10) = 0;
LAB_109b75d3c:
            ppuVar8 = (uint **)0x1;
            goto LAB_109b75e04;
          }
        }
LAB_109b75dac:
        iVar6 = *(int *)(param_1 + 0xc);
        *(uint *)(param_1 + 0x4e0) = (uint)(0 < iVar6);
        iVar32 = -iVar6;
        if (-1 < iVar6) {
          iVar32 = iVar6;
        }
        *(int *)(param_1 + 0xc) = iVar32;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        iVar32 = iVar6 + 0xa0;
        func_0x000109b74af0();
        *(int *)(param_1 + 8) = iVar32;
        iVar32 = iVar6 + 0xa0;
        func_0x000109b74af0();
        *(int *)(param_1 + 0xc) = iVar32;
        iVar32 = iVar6 + 0xa0;
        func_0x000109b74af0();
        *(int *)(param_1 + 0x4e4) = iVar32 >> 0x10;
        iVar32 = iVar6 + 0xa0;
        func_0x000109b74af0();
        *(int *)(param_1 + 0x4ec) = iVar32;
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 0xc;
        iVar32 = iVar6 + 0xa0;
        func_0x000109b74af0();
        *(ulong *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + (uVar15 & 0xffffffff) + -0x24;
        if ((*(int *)(param_1 + 8) < 1) || (*(int *)(param_1 + 0xc) == 0)) goto LAB_109b75dac;
        uVar2 = *(uint *)(param_1 + 0x4e4);
        if (0x20 < uVar2) goto LAB_109b75dac;
        if ((1L << ((ulong)uVar2 & 0x3f) & 0x101000112U) != 0) {
          iVar27 = *(int *)(param_1 + 0x4ec);
          if (iVar27 == 0) {
            if (8 < uVar2) {
              if (uVar2 == 0x10) goto LAB_109b75c9c;
              goto LAB_109b75cec;
            }
            goto LAB_109b75cb0;
          }
          uVar7 = uVar2 - 4 >> 2 | uVar2 << 0x1e;
          if ((int)uVar7 < 3) {
            if (uVar7 == 0) {
              if (iVar27 == 2) goto LAB_109b75cb0;
            }
            else if ((uVar7 == 1) && (iVar27 == 1)) {
LAB_109b75cb0:
              _bzero(param_1 + 0xe0,0x400);
              iVar6 = 1 << (ulong)(uVar2 & 0x1f);
              if (iVar32 != 0) {
                iVar6 = iVar32;
              }
              FUN_109b749a0(param_1 + 0xa0,param_1 + 0xe0,iVar6 << 2);
              ppuVar11 = (uint **)(ulong)*(uint *)(param_1 + 0x4e4);
              uVar15 = param_1 + 0xe0;
              func_0x000109b820ec();
              if ((uVar15 & 1) == 0) goto LAB_109b75d24;
              goto LAB_109b75cec;
            }
          }
          else if ((uVar7 == 7) || (uVar7 == 3)) goto LAB_109b75c40;
          goto LAB_109b75dac;
        }
        if ((ulong)uVar2 != 0x10) goto LAB_109b75dac;
        iVar27 = *(int *)(param_1 + 0x4ec);
LAB_109b75c40:
        if ((iVar27 != 0) && (iVar27 != 3)) goto LAB_109b75dac;
        if (uVar2 == 0x10) {
          if (iVar27 == 0) {
LAB_109b75c9c:
            *(undefined4 *)(param_1 + 0x4e4) = 0xf;
            goto LAB_109b75cec;
          }
          if (iVar27 != 3) goto LAB_109b75cec;
          iVar32 = iVar6 + 0xa0;
          func_0x000109b74af0();
          iVar27 = iVar6 + 0xa0;
          func_0x000109b74af0();
          iVar6 = iVar6 + 0xa0;
          func_0x000109b74af0();
          if (((iVar6 == 0x1f) && (iVar27 == 0x3e0)) && (iVar32 == 0x7c00)) goto LAB_109b75c9c;
          bVar12 = (iVar6 == 0x1f && iVar27 == 0x7e0) && iVar32 == 0xf800;
        }
        else {
LAB_109b75cec:
          bVar12 = true;
        }
        uVar19 = 0x18;
        if (*(int *)(param_1 + 0x4e4) != 0x20) {
          uVar19 = 0x10;
        }
        iVar6 = *(int *)(param_1 + 0xc);
        *(uint *)(param_1 + 0x4e0) = (uint)(0 < iVar6);
        iVar32 = -iVar6;
        if (-1 < iVar6) {
          iVar32 = iVar6;
        }
        *(int *)(param_1 + 0xc) = iVar32;
        *(undefined4 *)(param_1 + 0x10) = uVar19;
        if (bVar12) goto LAB_109b75d3c;
      }
      *(undefined4 *)(param_1 + 0x4e8) = 0xffffffff;
      *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      if (*(long *)(param_1 + 200) != 0) {
        _fclose();
        *(undefined8 *)(param_1 + 200) = 0;
      }
      *(undefined1 *)(param_1 + 0xd8) = 0;
      if ((*(byte *)(param_1 + 0xa8) & 1) != 0) goto LAB_109b75df0;
      ppuVar8 = (uint **)0x0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  else {
    uVar15 = (ulong)*(uint *)(param_1 + 0x3c);
    if ((int)*(uint *)(param_1 + 0x3c) < 3) {
      lVar22 = (long)*(int *)(param_1 + 0x44) * (long)*(int *)(param_1 + 0x40);
    }
    else {
      lVar22 = 1;
      piVar28 = *(int **)(param_1 + 0x78);
      do {
        lVar22 = lVar22 * *piVar28;
        uVar15 = uVar15 - 1;
        piVar28 = piVar28 + 1;
      } while (uVar15 != 0);
    }
    if (lVar22 == 0) goto LAB_109b75a48;
    uVar15 = param_1 + 0xa0;
    ppuVar11 = (uint **)(param_1 + 0x38);
    FUN_109b747b8();
    if ((uVar15 & 1) != 0) goto LAB_109b75a58;
LAB_109b75df0:
    ppuVar8 = (uint **)0x0;
  }
LAB_109b75e04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = *(uint *)(ppuVar8 + 1);
  uVar7 = *(uint *)((long)ppuVar8 + 0x4e4);
  uVar2 = 0x10;
  if (uVar7 != 0xf) {
    uVar2 = uVar7;
  }
  iVar6 = uVar2 * uVar21;
  iVar32 = iVar6 + 0xe;
  if (-8 < iVar6) {
    iVar32 = iVar6 + 7;
  }
  uVar2 = *(uint *)ppuVar11 & 0xff8;
  uVar20 = 3;
  if (uVar2 == 0) {
    uVar20 = 1;
  }
  uVar34 = *(uint *)(ppuVar8 + 0x9d);
  if (((int)uVar34 < 0) || (*(char *)(ppuVar8 + 0x1b) != '\x01')) {
    ppuVar33 = (uint **)0x0;
    goto LAB_109b75f50;
  }
  puVar31 = ppuVar11[2];
  uVar3 = *(uint *)(ppuVar11 + 10);
  uVar1 = (iVar32 >> 3) + 3;
  if (*(uint *)(ppuVar8 + 0x9c) == 1) {
    puVar31 = (uint *)((long)puVar31 +
                      ((long)(int)*(uint *)((long)ppuVar8 + 0xc) + -1) * (long)(int)uVar3);
    uVar3 = -uVar3;
  }
  ppuStack_d18 = apuStack_8b8;
  ppuStack_8c0 = (uint **)0x408;
  puStack_d08 = auStack_cd0;
  puStack_cd8 = (uint *)0x408;
  uVar13 = (uVar1 & 0xfffffffc) + 0x20;
  ppuVar33 = (uint **)(long)(int)uVar13;
  ppuVar9 = ppuStack_d18;
  puStack_ce0 = puStack_d08;
  if (0x408 < uVar13) {
    ppuVar9 = ppuVar33;
    ppuStack_8c8 = ppuStack_d18;
    __Znam();
  }
  puVar10 = puStack_d08;
  puVar18 = puStack_cd8;
  ppuStack_8c8 = ppuVar9;
  ppuStack_8c0 = ppuVar33;
  if (uVar2 == 0) {
    if ((int)uVar7 < 9) {
      lVar22 = 1L << ((ulong)uVar7 & 0x3f);
      pbVar24 = (byte *)((long)ppuVar8 + 0xe2);
      pbVar29 = abStack_4b0;
      do {
        *pbVar29 = (byte)((uint)pbVar24[-1] * 0x2591 + (uint)pbVar24[-2] * 0x74c +
                          (uint)*pbVar24 * 0x1323 + 0x2000 >> 0xe);
        lVar22 = lVar22 + -1;
        pbVar24 = pbVar24 + 4;
        pbVar29 = pbVar29 + 1;
      } while (lVar22 != 0);
    }
    puVar18 = (uint *)((long)(int)uVar21 * 3 + 0x20);
    if (0x408 < (uint)puVar18) {
      puVar10 = puVar18;
      __Znam();
      puStack_ce0 = puVar10;
    }
  }
  puStack_cd8 = puVar18;
  uVar13 = 0;
  if (ppuVar8[0x19] != (uint *)0x0) {
    uVar13 = *(uint *)(ppuVar8 + 0x1a);
    iVar32 = 0;
    if (uVar13 != 0) {
      iVar32 = (int)uVar34 / (int)uVar13;
    }
    uVar13 = iVar32 * uVar13;
    uVar34 = uVar34 - uVar13;
  }
  ppuVar33 = (uint **)0x0;
  ppuVar8[0x18] = (uint *)((long)ppuVar8[0x16] + (ulong)uVar34);
  *(uint *)((long)ppuVar8 + 0xd4) = uVar13;
  if ((int)uVar7 < 0xf) {
    if (uVar7 == 1) {
      iStack_cec = 0;
      if ((int)*(uint *)((long)ppuVar8 + 0xc) < 1) {
        ppuVar33 = (uint **)0x1;
        goto LAB_109b7644c;
      }
      do {
        FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,uVar1 & 0xfffffffc);
        puVar18 = puVar10;
        if (uVar2 != 0) {
          puVar18 = puVar31;
        }
        ppuVar11 = ppuVar9;
        func_0x000109b822f0(puVar18,ppuVar9,*(uint *)(ppuVar8 + 1),ppuVar8 + 0x1c);
        if (uVar2 == 0) {
          ppuVar11 = (uint **)0x0;
          func_0x000109b81abc(puVar10,0,puVar31,0,(ulong)*(uint *)(ppuVar8 + 1) | 0x100000000,0);
        }
        iStack_cec = iStack_cec + 1;
        puVar31 = (uint *)((long)puVar31 + (long)(int)uVar3);
      } while (iStack_cec < (int)*(uint *)((long)ppuVar8 + 0xc));
    }
    else {
      lVar22 = (long)(int)uVar20 * (long)(int)uVar21;
      iVar32 = (int)lVar22;
      if (uVar7 == 4) {
        if (*(uint *)((long)ppuVar8 + 0x4ec) == 2) {
          puStack_cf8 = (uint *)((long)puVar31 + (long)iVar32);
          iStack_cec = 0;
          ppuVar25 = ppuVar8 + 0x1c;
          do {
            while( true ) {
              while( true ) {
                ppuVar33 = ppuVar8 + 0x14;
                FUN_109b74a6c();
                puVar18 = puStack_cf8;
                uVar7 = (uint)ppuVar33;
                if (((ulong)ppuVar33 & 0xff) == 0) break;
                uVar15 = ((ulong)ppuVar33 & 0xffffffff) >> 0xc;
                uVar30 = (ulong)ppuVar33 >> 8 & 0xf;
                uStack_ce8 = *(uint *)((long)ppuVar25 + uVar15 * 4);
                uStack_ce4 = *(uint *)((long)ppuVar25 + uVar30 * 4);
                abStack_cfa[0] = abStack_4b0[uVar15];
                abStack_cfa[1] = abStack_4b0[uVar30];
                puVar18 = (uint *)((long)puVar31 + (ulong)((uVar7 & 0xff) * uVar20));
                if (puStack_cf8 < puVar18) goto LAB_109b76b50;
                uVar15 = 0;
                do {
                  if (uVar2 == 0) {
                    *(byte *)puVar31 = abStack_cfa[uVar15];
                  }
                  else {
                    *(undefined1 *)puVar31 = *(undefined1 *)(&uStack_ce8 + uVar15);
                    *(undefined1 *)((long)puVar31 + 1) =
                         *(undefined1 *)((long)&uStack_ce8 + uVar15 * 4 + 1);
                    *(undefined1 *)((long)puVar31 + 2) =
                         *(undefined1 *)((long)&uStack_ce8 + uVar15 * 4 + 2);
                  }
                  uVar15 = uVar15 ^ 1;
                  puVar31 = (uint *)((long)puVar31 + (ulong)uVar20);
                } while (puVar31 < puVar18);
              }
              uVar21 = uVar7 >> 8;
              ppuVar33 = (uint **)(ulong)(uVar7 < 0x300);
              if (uVar7 < 0x300) break;
              if (puStack_cf8 < (uint *)((long)puVar31 + (ulong)(uVar21 * uVar20)))
              goto LAB_109b7644c;
              FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,(uVar21 + 1 >> 1) + 1 & 0x1fe);
              if (uVar2 == 0) {
                ppuVar11 = ppuVar9;
                func_0x000109b82284(puVar31,ppuVar9,uVar21,abStack_4b0);
              }
              else {
                ppuVar11 = ppuVar9;
                func_0x000109b821f8(puVar31,ppuVar9,uVar21,ppuVar25);
              }
            }
            if (uVar21 == 2) {
              puVar10 = ppuVar8[0x17];
              puVar17 = ppuVar8[0x18];
              if (puVar10 <= puVar17) {
                (**(code **)(ppuVar8[0x14] + 10))(ppuVar8 + 0x14);
                puVar10 = ppuVar8[0x17];
                puVar17 = ppuVar8[0x18];
              }
              puVar16 = (uint *)((long)puVar17 + 1);
              uVar7 = *puVar17;
              ppuVar8[0x18] = puVar16;
              if (puVar10 <= puVar16) {
                (**(code **)(ppuVar8[0x14] + 10))(ppuVar8 + 0x14);
                puVar16 = ppuVar8[0x18];
              }
              ppuVar8[0x18] = (uint *)((long)puVar16 + 1);
              iVar6 = uVar20 * (byte)uVar7;
            }
            else {
              iVar6 = (int)puStack_cf8 - (int)puVar31;
            }
            bVar5 = abStack_4b0[0];
            uVar7 = *(uint *)((long)ppuVar8 + 0xc);
            puVar10 = puVar31;
            if (uVar2 == 0) {
              do {
                puVar17 = puVar18;
                if ((uint *)((long)puVar10 + (long)iVar6) <= puVar18) {
                  puVar17 = (uint *)((long)puVar10 + (long)iVar6);
                }
                puVar31 = puVar10;
                if (puVar10 < puVar17) {
                  ppuVar11 = (uint **)(ulong)bVar5;
                  _memset(puVar10,ppuVar11,(long)puVar17 - (long)puVar10);
                  puVar18 = puStack_cf8;
                  puVar31 = puVar17;
                }
                if (puVar18 <= puVar31) {
                  puVar18 = (uint *)((long)puVar18 + (long)(int)uVar3);
                  puVar31 = (uint *)((long)puVar18 - (long)iVar32);
                  iStack_cec = iStack_cec + 1;
                  puStack_cf8 = puVar18;
                  if ((int)uVar7 <= iStack_cec) break;
                }
                iVar6 = iVar6 + ((int)puVar10 - (int)puVar17);
                puVar10 = puVar31;
              } while (0 < iVar6);
            }
            else {
              in_stack_fffffffffffff2b0 =
                   in_stack_fffffffffffff2b0 & 0xffffffff00000000 | (ulong)*(uint *)ppuVar25;
              ppuVar11 = &puStack_cf8;
              func_0x000109b82164(puVar31,ppuVar11,uVar3,lVar22,&iStack_cec,uVar7,iVar6,
                                  in_stack_fffffffffffff2b0,in_stack_fffffffffffff2b0);
            }
          } while (iStack_cec < (int)*(uint *)((long)ppuVar8 + 0xc));
          goto LAB_109b7644c;
        }
        if (*(uint *)((long)ppuVar8 + 0x4ec) != 0) {
LAB_109b76480:
          ppuVar33 = (uint **)0x0;
          goto LAB_109b7644c;
        }
        if (0 < (int)*(uint *)((long)ppuVar8 + 0xc)) {
          iVar32 = 0;
          do {
            FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,uVar1 & 0xfffffffc);
            if (uVar2 == 0) {
              ppuVar11 = ppuVar9;
              func_0x000109b82284(puVar31,ppuVar9,*(uint *)(ppuVar8 + 1),abStack_4b0);
            }
            else {
              ppuVar11 = ppuVar9;
              func_0x000109b821f8(puVar31,ppuVar9,*(uint *)(ppuVar8 + 1),ppuVar8 + 0x1c);
            }
            iVar32 = iVar32 + 1;
            puVar31 = (uint *)((long)puVar31 + (long)(int)uVar3);
          } while (iVar32 < (int)*(uint *)((long)ppuVar8 + 0xc));
        }
      }
      else {
        if (uVar7 != 8) goto LAB_109b7644c;
        if (*(uint *)((long)ppuVar8 + 0x4ec) == 1) {
          iVar27 = 0;
          puStack_cf8 = (uint *)((long)puVar31 + lVar22);
          iStack_cec = 0;
          ppuVar25 = ppuVar8 + 0x1c;
          iVar6 = iStack_cec;
LAB_109b764c4:
          do {
            while( true ) {
              ppuVar26 = ppuVar8 + 0x14;
              FUN_109b74a6c();
              puVar18 = puStack_cf8;
              uVar7 = (uint)ppuVar26;
              if (((ulong)ppuVar26 & 0xff) == 0) break;
              uVar15 = (ulong)((uVar7 & 0xff) * uVar20);
              if (puStack_cf8 < (uint *)((long)puVar31 + uVar15)) goto LAB_109b76b50;
              uVar7 = *(uint *)((long)ppuVar8 + 0xc);
              if (uVar2 == 0) {
                bVar5 = abStack_4b0[((ulong)ppuVar26 & 0xffffffff) >> 8];
                puVar10 = puVar31;
                do {
                  puVar31 = (uint *)((long)puVar10 + (long)(int)uVar15);
                  puVar17 = puVar18;
                  if (puVar31 <= puVar18) {
                    puVar17 = puVar31;
                  }
                  puVar31 = puVar10;
                  if (puVar10 < puVar17) {
                    ppuVar11 = (uint **)(ulong)bVar5;
                    _memset(puVar10,ppuVar11,(long)puVar17 - (long)puVar10);
                    puVar18 = puStack_cf8;
                    puVar31 = puVar17;
                  }
                  if (puVar18 <= puVar31) {
                    puVar18 = (uint *)((long)puVar18 + (long)(int)uVar3);
                    puVar31 = (uint *)((long)puVar18 + -lVar22);
                    iStack_cec = iStack_cec + 1;
                    puStack_cf8 = puVar18;
                    if ((int)uVar7 <= iStack_cec) break;
                  }
                  uVar21 = (int)uVar15 + ((int)puVar10 - (int)puVar17);
                  uVar15 = (ulong)uVar21;
                  puVar10 = puVar31;
                } while (0 < (int)uVar21);
              }
              else {
                ppuVar11 = &puStack_cf8;
                func_0x000109b82164(puVar31,ppuVar11,uVar3,lVar22,&iStack_cec,uVar7,uVar15);
              }
              iVar27 = iStack_cec - iVar6;
              iVar6 = iStack_cec;
            }
            ppuVar33 = (uint **)(ulong)(uVar7 < 0x300);
            uVar21 = (uint)(((ulong)ppuVar26 & 0xffffffff) >> 8);
            if (uVar7 >= 0x300) {
              if (puStack_cf8 < (uint *)((long)puVar31 + (ulong)(uVar21 * uVar20))) break;
              ppuVar11 = ppuVar9;
              FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,uVar21 + 1 & 0x1fe);
              if (uVar2 == 0) {
                ppuVar33 = ppuVar9;
                puVar18 = puVar31;
                uVar15 = (ulong)uVar21;
                do {
                  *(byte *)puVar18 = abStack_4b0[*(byte *)ppuVar33];
                  uVar15 = uVar15 - 1;
                  ppuVar33 = (uint **)((long)ppuVar33 + 1);
                  puVar18 = (uint *)((long)puVar18 + 1);
                } while (uVar15 != 0);
                puVar31 = (uint *)((long)puVar31 + (ulong)uVar21);
              }
              else {
                puVar18 = (uint *)((long)puVar31 + (ulong)(uVar21 * 3));
                ppuVar33 = ppuVar9;
                puVar31 = (uint *)((long)puVar31 + 3);
                do {
                  puVar10 = puVar31;
                  ppuVar26 = (uint **)((long)ppuVar33 + 1);
                  *(uint *)((long)puVar10 - 3) =
                       *(uint *)((long)ppuVar25 + (ulong)*(byte *)ppuVar33 * 4);
                  puVar31 = (uint *)((long)puVar10 + 3);
                  ppuVar33 = ppuVar26;
                } while (puVar31 < puVar18);
                puVar18 = (uint *)((long)ppuVar25 + (ulong)*(byte *)ppuVar26 * 4);
                uVar4 = *(undefined1 *)((long)puVar18 + 2);
                *(short *)puVar10 = (short)*puVar18;
                *(undefined1 *)((long)puVar10 + 2) = uVar4;
              }
              iVar27 = iStack_cec - iVar6;
              iVar6 = iStack_cec;
              goto LAB_109b764c4;
            }
            iVar14 = (int)puStack_cf8 - (int)puVar31;
            uVar34 = *(uint *)((long)ppuVar8 + 0xc);
            if (((0xff < uVar7) || (iVar27 == 0)) || (iVar14 < iVar32)) {
              if (uVar21 == 2) {
                puVar10 = ppuVar8[0x17];
                puVar17 = ppuVar8[0x18];
                if (puVar10 <= puVar17) {
                  (**(code **)(ppuVar8[0x14] + 10))(ppuVar8 + 0x14);
                  puVar10 = ppuVar8[0x17];
                  puVar17 = ppuVar8[0x18];
                }
                puVar16 = (uint *)((long)puVar17 + 1);
                uVar34 = *puVar17;
                ppuVar8[0x18] = puVar16;
                if (puVar10 <= puVar16) {
                  (**(code **)(ppuVar8[0x14] + 10))(ppuVar8 + 0x14);
                  puVar16 = ppuVar8[0x18];
                }
                uVar21 = (uint)(byte)*puVar16;
                ppuVar8[0x18] = (uint *)((long)puVar16 + 1);
                iVar14 = uVar20 * (byte)uVar34;
                uVar34 = *(uint *)((long)ppuVar8 + 0xc);
              }
              else {
                uVar21 = uVar34 - iVar6;
              }
              bVar5 = abStack_4b0[0];
              iVar27 = uVar21 * iVar32;
              if (uVar7 < 0x100) {
                iVar27 = 0;
              }
              if ((int)uVar34 <= iVar6) break;
              iVar27 = iVar27 + iVar14;
              puVar10 = puVar31;
              if (uVar2 == 0) {
                do {
                  puVar17 = puVar18;
                  if ((uint *)((long)puVar10 + (long)iVar27) <= puVar18) {
                    puVar17 = (uint *)((long)puVar10 + (long)iVar27);
                  }
                  puVar31 = puVar10;
                  if (puVar10 < puVar17) {
                    ppuVar11 = (uint **)(ulong)bVar5;
                    _memset(puVar10,ppuVar11,(long)puVar17 - (long)puVar10);
                    puVar18 = puStack_cf8;
                    puVar31 = puVar17;
                  }
                  if (puVar18 <= puVar31) {
                    puVar18 = (uint *)((long)puVar18 + (long)(int)uVar3);
                    puVar31 = (uint *)((long)puVar18 + -lVar22);
                    iStack_cec = iStack_cec + 1;
                    puStack_cf8 = puVar18;
                    if ((int)uVar34 <= iStack_cec) break;
                  }
                  iVar27 = iVar27 + ((int)puVar10 - (int)puVar17);
                  puVar10 = puVar31;
                } while (0 < iVar27);
              }
              else {
                in_stack_fffffffffffff2b0 =
                     in_stack_fffffffffffff2b0 & 0xffffffff00000000 | (ulong)*(uint *)ppuVar25;
                ppuVar11 = &puStack_cf8;
                func_0x000109b82164(puVar31,ppuVar11,uVar3,lVar22,&iStack_cec,uVar34,iVar27,
                                    in_stack_fffffffffffff2b0);
              }
              uVar34 = *(uint *)((long)ppuVar8 + 0xc);
              iVar6 = iStack_cec;
              if ((int)uVar34 <= iStack_cec) break;
            }
            iVar27 = 0;
          } while (iVar6 < (int)uVar34);
          goto LAB_109b7644c;
        }
        if (*(uint *)((long)ppuVar8 + 0x4ec) != 0) goto LAB_109b76480;
        iStack_cec = 0;
        if (0 < (int)*(uint *)((long)ppuVar8 + 0xc)) {
          do {
            iVar32 = iStack_cec;
            ppuVar11 = ppuVar9;
            FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,uVar1 & 0xfffffffc);
            uVar7 = *(uint *)(ppuVar8 + 1);
            if (uVar2 == 0) {
              if (0 < (int)uVar7) {
                lVar22 = 0;
                do {
                  *(byte *)((long)puVar31 + lVar22) = abStack_4b0[*(byte *)((long)ppuVar9 + lVar22)]
                  ;
                  lVar22 = lVar22 + 1;
                } while ((int)uVar7 != lVar22);
              }
            }
            else {
              ppuVar33 = ppuVar9;
              puVar18 = puVar31;
              if (1 < (int)uVar7) {
                ppuVar25 = ppuVar9;
                puVar10 = puVar31;
                do {
                  ppuVar33 = (uint **)((long)ppuVar25 + 1);
                  puVar18 = (uint *)((long)puVar10 + 3);
                  uVar15 = (long)puVar10 + 6;
                  *puVar10 = *(uint *)((long)ppuVar8 + ((ulong)*(byte *)ppuVar25 + 0x38) * 4);
                  ppuVar25 = ppuVar33;
                  puVar10 = puVar18;
                } while (uVar15 < (ulong)((long)puVar31 + (long)(int)uVar7 * 3));
              }
              puVar10 = (uint *)((long)ppuVar8 + ((ulong)*(byte *)ppuVar33 + 0x38) * 4);
              uVar4 = *(undefined1 *)((long)puVar10 + 2);
              *(short *)puVar18 = (short)*puVar10;
              *(undefined1 *)((long)puVar18 + 2) = uVar4;
              iVar32 = iStack_cec;
            }
            iStack_cec = iVar32 + 1;
            puVar31 = (uint *)((long)puVar31 + (long)(int)uVar3);
          } while (iStack_cec < (int)*(uint *)((long)ppuVar8 + 0xc));
        }
      }
    }
  }
  else if ((int)uVar7 < 0x18) {
    if (uVar7 == 0xf) {
      if (0 < (int)*(uint *)((long)ppuVar8 + 0xc)) {
        iVar32 = 0;
        do {
          FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,uVar1 & 0xfffffffc);
          ppuVar11 = (uint **)0x0;
          if (uVar2 == 0) {
            func_0x000109b81dec(ppuVar9,0,puVar31,0,(ulong)*(uint *)(ppuVar8 + 1) | 0x100000000);
          }
          else {
            func_0x000109b81ee4();
          }
          iVar32 = iVar32 + 1;
          puVar31 = (uint *)((long)puVar31 + (long)(int)uVar3);
        } while (iVar32 < (int)*(uint *)((long)ppuVar8 + 0xc));
      }
    }
    else {
      if (uVar7 != 0x10) goto LAB_109b7644c;
      if (0 < (int)*(uint *)((long)ppuVar8 + 0xc)) {
        iVar32 = 0;
        do {
          FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,uVar1 & 0xfffffffc);
          ppuVar11 = (uint **)0x0;
          if (uVar2 == 0) {
            func_0x000109b81e68(ppuVar9,0,puVar31,0,(ulong)*(uint *)(ppuVar8 + 1) | 0x100000000);
          }
          else {
            func_0x000109b81f54();
          }
          iVar32 = iVar32 + 1;
          puVar31 = (uint *)((long)puVar31 + (long)(int)uVar3);
        } while (iVar32 < (int)*(uint *)((long)ppuVar8 + 0xc));
      }
    }
  }
  else if (uVar7 == 0x18) {
    if (0 < (int)*(uint *)((long)ppuVar8 + 0xc)) {
      iVar32 = 0;
      do {
        FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,uVar1 & 0xfffffffc);
        if (uVar2 == 0) {
          ppuVar11 = (uint **)0x0;
          func_0x000109b81abc(ppuVar9,0,puVar31,0,(ulong)*(uint *)(ppuVar8 + 1) | 0x100000000,0);
        }
        else {
          ppuVar11 = ppuVar9;
          _memcpy(puVar31,ppuVar9,(long)(int)(*(uint *)(ppuVar8 + 1) * 3));
        }
        iVar32 = iVar32 + 1;
        puVar31 = (uint *)((long)puVar31 + (long)(int)uVar3);
      } while (iVar32 < (int)*(uint *)((long)ppuVar8 + 0xc));
    }
  }
  else {
    if (uVar7 != 0x20) goto LAB_109b7644c;
    if (0 < (int)*(uint *)((long)ppuVar8 + 0xc)) {
      iVar32 = 0;
      do {
        FUN_109b749a0(ppuVar8 + 0x14,ppuVar9,uVar1 & 0xfffffffc);
        ppuVar11 = (uint **)0x0;
        if (uVar2 == 0) {
          func_0x000109b81bd4(ppuVar9,0,puVar31,0,(ulong)*(uint *)(ppuVar8 + 1) | 0x100000000,0);
        }
        else {
          func_0x000109b81c5c();
        }
        iVar32 = iVar32 + 1;
        puVar31 = (uint *)((long)puVar31 + (long)(int)uVar3);
      } while (iVar32 < (int)*(uint *)((long)ppuVar8 + 0xc));
    }
  }
  ppuVar33 = (uint **)0x1;
LAB_109b7644c:
  while( true ) {
    if ((puStack_ce0 != puStack_d08) && (puStack_ce0 != (uint *)0x0)) {
      __ZdaPv();
    }
    ppuVar8 = ppuStack_8c8;
    if ((ppuStack_8c8 != ppuStack_d18) && (ppuStack_8c8 != (uint **)0x0)) {
      __ZdaPv();
    }
LAB_109b75f50:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b0) break;
    ___stack_chk_fail();
    while ((int)ppuVar11 == 0) {
      __Unwind_Resume(ppuVar8);
    }
    ___cxa_begin_catch(ppuVar8);
    ___cxa_end_catch();
LAB_109b76b50:
    ppuVar33 = (uint **)0x0;
  }
  return ppuVar33;
}



/* Entry: 109b75e34; end: 109b76b7b;  */

bool FUN_109b75e34(uint **param_1,uint **param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint **ppuVar8;
  uint *puVar9;
  uint **ppuVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint **ppuVar19;
  int iVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  uint **ppuVar27;
  long lVar28;
  uint uVar29;
  ulong in_stack_fffffffffffff5f0;
  uint **ppuStack_9d8;
  uint *puStack_9c8;
  byte abStack_9ba [2];
  uint *puStack_9b8;
  int iStack_9ac;
  undefined4 uStack_9a8;
  uint uStack_9a4;
  uint *puStack_9a0;
  uint *puStack_998;
  uint auStack_990 [258];
  uint **ppuStack_588;
  uint **ppuStack_580;
  uint *apuStack_578 [129];
  byte abStack_170 [256];
  long lStack_70;
  uint *puVar14;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(uint *)(param_1 + 1);
  uVar7 = *(uint *)((long)param_1 + 0x4e4);
  uVar2 = 0x10;
  if (uVar7 != 0xf) {
    uVar2 = uVar7;
  }
  iVar26 = uVar2 * uVar17;
  iVar25 = iVar26 + 0xe;
  if (-8 < iVar26) {
    iVar25 = iVar26 + 7;
  }
  uVar2 = *(uint *)param_2 & 0xff8;
  uVar16 = 3;
  if (uVar2 == 0) {
    uVar16 = 1;
  }
  uVar29 = *(uint *)(param_1 + 0x9d);
  if (((int)uVar29 < 0) || (*(char *)(param_1 + 0x1b) != '\x01')) {
    bVar6 = false;
    goto LAB_109b75f50;
  }
  puVar24 = param_2[2];
  uVar3 = *(uint *)(param_2 + 10);
  uVar1 = (iVar25 >> 3) + 3;
  if (*(uint *)(param_1 + 0x9c) == 1) {
    puVar24 = (uint *)((long)puVar24 +
                      ((long)(int)*(uint *)((long)param_1 + 0xc) + -1) * (long)(int)uVar3);
    uVar3 = -uVar3;
  }
  ppuStack_9d8 = apuStack_578;
  ppuStack_580 = (uint **)0x408;
  puStack_9c8 = auStack_990;
  puStack_998 = (uint *)0x408;
  uVar11 = (uVar1 & 0xfffffffc) + 0x20;
  ppuVar27 = (uint **)(long)(int)uVar11;
  ppuVar8 = ppuStack_9d8;
  puStack_9a0 = puStack_9c8;
  if (0x408 < uVar11) {
    ppuVar8 = ppuVar27;
    ppuStack_588 = ppuStack_9d8;
    __Znam();
  }
  puVar9 = puStack_9c8;
  puVar15 = puStack_998;
  ppuStack_588 = ppuVar8;
  ppuStack_580 = ppuVar27;
  if (uVar2 == 0) {
    if ((int)uVar7 < 9) {
      lVar28 = 1L << ((ulong)uVar7 & 0x3f);
      pbVar18 = (byte *)((long)param_1 + 0xe2);
      pbVar21 = abStack_170;
      do {
        *pbVar21 = (byte)((uint)pbVar18[-1] * 0x2591 + (uint)pbVar18[-2] * 0x74c +
                          (uint)*pbVar18 * 0x1323 + 0x2000 >> 0xe);
        lVar28 = lVar28 + -1;
        pbVar18 = pbVar18 + 4;
        pbVar21 = pbVar21 + 1;
      } while (lVar28 != 0);
    }
    puVar15 = (uint *)((long)(int)uVar17 * 3 + 0x20);
    if (0x408 < (uint)puVar15) {
      puVar9 = puVar15;
      __Znam();
      puStack_9a0 = puVar9;
    }
  }
  puStack_998 = puVar15;
  uVar11 = 0;
  if (param_1[0x19] != (uint *)0x0) {
    uVar11 = *(uint *)(param_1 + 0x1a);
    iVar25 = 0;
    if (uVar11 != 0) {
      iVar25 = (int)uVar29 / (int)uVar11;
    }
    uVar11 = iVar25 * uVar11;
    uVar29 = uVar29 - uVar11;
  }
  bVar6 = false;
  param_1[0x18] = (uint *)((long)param_1[0x16] + (ulong)uVar29);
  *(uint *)((long)param_1 + 0xd4) = uVar11;
  if ((int)uVar7 < 0xf) {
    if (uVar7 == 1) {
      iStack_9ac = 0;
      if ((int)*(uint *)((long)param_1 + 0xc) < 1) {
        bVar6 = true;
        goto LAB_109b7644c;
      }
      do {
        FUN_109b749a0(param_1 + 0x14,ppuVar8,uVar1 & 0xfffffffc);
        puVar15 = puVar9;
        if (uVar2 != 0) {
          puVar15 = puVar24;
        }
        param_2 = ppuVar8;
        func_0x000109b822f0(puVar15,ppuVar8,*(uint *)(param_1 + 1),param_1 + 0x1c);
        if (uVar2 == 0) {
          param_2 = (uint **)0x0;
          func_0x000109b81abc(puVar9,0,puVar24,0,(ulong)*(uint *)(param_1 + 1) | 0x100000000,0);
        }
        iStack_9ac = iStack_9ac + 1;
        puVar24 = (uint *)((long)puVar24 + (long)(int)uVar3);
      } while (iStack_9ac < (int)*(uint *)((long)param_1 + 0xc));
    }
    else {
      lVar28 = (long)(int)uVar16 * (long)(int)uVar17;
      iVar25 = (int)lVar28;
      if (uVar7 == 4) {
        if (*(uint *)((long)param_1 + 0x4ec) == 2) {
          puStack_9b8 = (uint *)((long)puVar24 + (long)iVar25);
          iStack_9ac = 0;
          ppuVar27 = param_1 + 0x1c;
          do {
            while( true ) {
              while( true ) {
                ppuVar10 = param_1 + 0x14;
                FUN_109b74a6c();
                puVar15 = puStack_9b8;
                uVar7 = (uint)ppuVar10;
                if (((ulong)ppuVar10 & 0xff) == 0) break;
                uVar22 = ((ulong)ppuVar10 & 0xffffffff) >> 0xc;
                uVar23 = (ulong)ppuVar10 >> 8 & 0xf;
                uStack_9a8 = *(uint *)((long)ppuVar27 + uVar22 * 4);
                uStack_9a4 = *(uint *)((long)ppuVar27 + uVar23 * 4);
                abStack_9ba[0] = abStack_170[uVar22];
                abStack_9ba[1] = abStack_170[uVar23];
                puVar15 = (uint *)((long)puVar24 + (ulong)((uVar7 & 0xff) * uVar16));
                if (puStack_9b8 < puVar15) goto LAB_109b76b50;
                uVar22 = 0;
                do {
                  if (uVar2 == 0) {
                    *(byte *)puVar24 = abStack_9ba[uVar22];
                  }
                  else {
                    *(undefined1 *)puVar24 = *(undefined1 *)(&uStack_9a8 + uVar22);
                    *(undefined1 *)((long)puVar24 + 1) =
                         *(undefined1 *)((long)&uStack_9a8 + uVar22 * 4 + 1);
                    *(undefined1 *)((long)puVar24 + 2) =
                         *(undefined1 *)((long)&uStack_9a8 + uVar22 * 4 + 2);
                  }
                  uVar22 = uVar22 ^ 1;
                  puVar24 = (uint *)((long)puVar24 + (ulong)uVar16);
                } while (puVar24 < puVar15);
              }
              uVar17 = uVar7 >> 8;
              bVar6 = uVar7 < 0x300;
              if (bVar6) break;
              if (puStack_9b8 < (uint *)((long)puVar24 + (ulong)(uVar17 * uVar16)))
              goto LAB_109b7644c;
              FUN_109b749a0(param_1 + 0x14,ppuVar8,(uVar17 + 1 >> 1) + 1 & 0x1fe);
              if (uVar2 == 0) {
                param_2 = ppuVar8;
                func_0x000109b82284(puVar24,ppuVar8,uVar17,abStack_170);
              }
              else {
                param_2 = ppuVar8;
                func_0x000109b821f8(puVar24,ppuVar8,uVar17,ppuVar27);
              }
            }
            if (uVar17 == 2) {
              puVar9 = param_1[0x17];
              puVar14 = param_1[0x18];
              if (puVar9 <= puVar14) {
                (**(code **)(param_1[0x14] + 10))(param_1 + 0x14);
                puVar9 = param_1[0x17];
                puVar14 = param_1[0x18];
              }
              puVar13 = (uint *)((long)puVar14 + 1);
              uVar7 = *puVar14;
              param_1[0x18] = puVar13;
              if (puVar9 <= puVar13) {
                (**(code **)(param_1[0x14] + 10))(param_1 + 0x14);
                puVar13 = param_1[0x18];
              }
              param_1[0x18] = (uint *)((long)puVar13 + 1);
              iVar26 = uVar16 * (byte)uVar7;
            }
            else {
              iVar26 = (int)puStack_9b8 - (int)puVar24;
            }
            bVar5 = abStack_170[0];
            uVar7 = *(uint *)((long)param_1 + 0xc);
            puVar9 = puVar24;
            if (uVar2 == 0) {
              do {
                puVar14 = puVar15;
                if ((uint *)((long)puVar9 + (long)iVar26) <= puVar15) {
                  puVar14 = (uint *)((long)puVar9 + (long)iVar26);
                }
                puVar24 = puVar9;
                if (puVar9 < puVar14) {
                  param_2 = (uint **)(ulong)bVar5;
                  _memset(puVar9,param_2,(long)puVar14 - (long)puVar9);
                  puVar15 = puStack_9b8;
                  puVar24 = puVar14;
                }
                if (puVar15 <= puVar24) {
                  puVar15 = (uint *)((long)puVar15 + (long)(int)uVar3);
                  puVar24 = (uint *)((long)puVar15 - (long)iVar25);
                  iStack_9ac = iStack_9ac + 1;
                  puStack_9b8 = puVar15;
                  if ((int)uVar7 <= iStack_9ac) break;
                }
                iVar26 = iVar26 + ((int)puVar9 - (int)puVar14);
                puVar9 = puVar24;
              } while (0 < iVar26);
            }
            else {
              in_stack_fffffffffffff5f0 =
                   in_stack_fffffffffffff5f0 & 0xffffffff00000000 | (ulong)*(uint *)ppuVar27;
              param_2 = &puStack_9b8;
              func_0x000109b82164(puVar24,param_2,uVar3,lVar28,&iStack_9ac,uVar7,iVar26,
                                  in_stack_fffffffffffff5f0,in_stack_fffffffffffff5f0);
            }
          } while (iStack_9ac < (int)*(uint *)((long)param_1 + 0xc));
          goto LAB_109b7644c;
        }
        if (*(uint *)((long)param_1 + 0x4ec) != 0) {
LAB_109b76480:
          bVar6 = false;
          goto LAB_109b7644c;
        }
        if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
          iVar25 = 0;
          do {
            FUN_109b749a0(param_1 + 0x14,ppuVar8,uVar1 & 0xfffffffc);
            if (uVar2 == 0) {
              param_2 = ppuVar8;
              func_0x000109b82284(puVar24,ppuVar8,*(uint *)(param_1 + 1),abStack_170);
            }
            else {
              param_2 = ppuVar8;
              func_0x000109b821f8(puVar24,ppuVar8,*(uint *)(param_1 + 1),param_1 + 0x1c);
            }
            iVar25 = iVar25 + 1;
            puVar24 = (uint *)((long)puVar24 + (long)(int)uVar3);
          } while (iVar25 < (int)*(uint *)((long)param_1 + 0xc));
        }
      }
      else {
        if (uVar7 != 8) goto LAB_109b7644c;
        if (*(uint *)((long)param_1 + 0x4ec) == 1) {
          iVar20 = 0;
          puStack_9b8 = (uint *)((long)puVar24 + lVar28);
          iStack_9ac = 0;
          ppuVar27 = param_1 + 0x1c;
          iVar26 = iStack_9ac;
LAB_109b764c4:
          do {
            while( true ) {
              ppuVar10 = param_1 + 0x14;
              FUN_109b74a6c();
              puVar15 = puStack_9b8;
              uVar7 = (uint)ppuVar10;
              if (((ulong)ppuVar10 & 0xff) == 0) break;
              uVar22 = (ulong)((uVar7 & 0xff) * uVar16);
              if (puStack_9b8 < (uint *)((long)puVar24 + uVar22)) goto LAB_109b76b50;
              uVar7 = *(uint *)((long)param_1 + 0xc);
              if (uVar2 == 0) {
                bVar5 = abStack_170[((ulong)ppuVar10 & 0xffffffff) >> 8];
                puVar9 = puVar24;
                do {
                  puVar24 = (uint *)((long)puVar9 + (long)(int)uVar22);
                  puVar14 = puVar15;
                  if (puVar24 <= puVar15) {
                    puVar14 = puVar24;
                  }
                  puVar24 = puVar9;
                  if (puVar9 < puVar14) {
                    param_2 = (uint **)(ulong)bVar5;
                    _memset(puVar9,param_2,(long)puVar14 - (long)puVar9);
                    puVar15 = puStack_9b8;
                    puVar24 = puVar14;
                  }
                  if (puVar15 <= puVar24) {
                    puVar15 = (uint *)((long)puVar15 + (long)(int)uVar3);
                    puVar24 = (uint *)((long)puVar15 + -lVar28);
                    iStack_9ac = iStack_9ac + 1;
                    puStack_9b8 = puVar15;
                    if ((int)uVar7 <= iStack_9ac) break;
                  }
                  uVar17 = (int)uVar22 + ((int)puVar9 - (int)puVar14);
                  uVar22 = (ulong)uVar17;
                  puVar9 = puVar24;
                } while (0 < (int)uVar17);
              }
              else {
                param_2 = &puStack_9b8;
                func_0x000109b82164(puVar24,param_2,uVar3,lVar28,&iStack_9ac,uVar7,uVar22);
              }
              iVar20 = iStack_9ac - iVar26;
              iVar26 = iStack_9ac;
            }
            bVar6 = uVar7 < 0x300;
            uVar17 = (uint)(((ulong)ppuVar10 & 0xffffffff) >> 8);
            if (!bVar6) {
              if (puStack_9b8 < (uint *)((long)puVar24 + (ulong)(uVar17 * uVar16))) break;
              param_2 = ppuVar8;
              FUN_109b749a0(param_1 + 0x14,ppuVar8,uVar17 + 1 & 0x1fe);
              if (uVar2 == 0) {
                ppuVar10 = ppuVar8;
                puVar15 = puVar24;
                uVar22 = (ulong)uVar17;
                do {
                  *(byte *)puVar15 = abStack_170[*(byte *)ppuVar10];
                  uVar22 = uVar22 - 1;
                  ppuVar10 = (uint **)((long)ppuVar10 + 1);
                  puVar15 = (uint *)((long)puVar15 + 1);
                } while (uVar22 != 0);
                puVar24 = (uint *)((long)puVar24 + (ulong)uVar17);
              }
              else {
                puVar15 = (uint *)((long)puVar24 + (ulong)(uVar17 * 3));
                ppuVar10 = ppuVar8;
                puVar24 = (uint *)((long)puVar24 + 3);
                do {
                  puVar9 = puVar24;
                  ppuVar19 = (uint **)((long)ppuVar10 + 1);
                  *(uint *)((long)puVar9 - 3) =
                       *(uint *)((long)ppuVar27 + (ulong)*(byte *)ppuVar10 * 4);
                  puVar24 = (uint *)((long)puVar9 + 3);
                  ppuVar10 = ppuVar19;
                } while (puVar24 < puVar15);
                puVar15 = (uint *)((long)ppuVar27 + (ulong)*(byte *)ppuVar19 * 4);
                uVar4 = *(undefined1 *)((long)puVar15 + 2);
                *(short *)puVar9 = (short)*puVar15;
                *(undefined1 *)((long)puVar9 + 2) = uVar4;
              }
              iVar20 = iStack_9ac - iVar26;
              iVar26 = iStack_9ac;
              goto LAB_109b764c4;
            }
            iVar12 = (int)puStack_9b8 - (int)puVar24;
            uVar29 = *(uint *)((long)param_1 + 0xc);
            if (((0xff < uVar7) || (iVar20 == 0)) || (iVar12 < iVar25)) {
              if (uVar17 == 2) {
                puVar9 = param_1[0x17];
                puVar14 = param_1[0x18];
                if (puVar9 <= puVar14) {
                  (**(code **)(param_1[0x14] + 10))(param_1 + 0x14);
                  puVar9 = param_1[0x17];
                  puVar14 = param_1[0x18];
                }
                puVar13 = (uint *)((long)puVar14 + 1);
                uVar29 = *puVar14;
                param_1[0x18] = puVar13;
                if (puVar9 <= puVar13) {
                  (**(code **)(param_1[0x14] + 10))(param_1 + 0x14);
                  puVar13 = param_1[0x18];
                }
                uVar17 = (uint)(byte)*puVar13;
                param_1[0x18] = (uint *)((long)puVar13 + 1);
                iVar12 = uVar16 * (byte)uVar29;
                uVar29 = *(uint *)((long)param_1 + 0xc);
              }
              else {
                uVar17 = uVar29 - iVar26;
              }
              bVar5 = abStack_170[0];
              iVar20 = uVar17 * iVar25;
              if (uVar7 < 0x100) {
                iVar20 = 0;
              }
              if ((int)uVar29 <= iVar26) break;
              iVar20 = iVar20 + iVar12;
              puVar9 = puVar24;
              if (uVar2 == 0) {
                do {
                  puVar14 = puVar15;
                  if ((uint *)((long)puVar9 + (long)iVar20) <= puVar15) {
                    puVar14 = (uint *)((long)puVar9 + (long)iVar20);
                  }
                  puVar24 = puVar9;
                  if (puVar9 < puVar14) {
                    param_2 = (uint **)(ulong)bVar5;
                    _memset(puVar9,param_2,(long)puVar14 - (long)puVar9);
                    puVar15 = puStack_9b8;
                    puVar24 = puVar14;
                  }
                  if (puVar15 <= puVar24) {
                    puVar15 = (uint *)((long)puVar15 + (long)(int)uVar3);
                    puVar24 = (uint *)((long)puVar15 + -lVar28);
                    iStack_9ac = iStack_9ac + 1;
                    puStack_9b8 = puVar15;
                    if ((int)uVar29 <= iStack_9ac) break;
                  }
                  iVar20 = iVar20 + ((int)puVar9 - (int)puVar14);
                  puVar9 = puVar24;
                } while (0 < iVar20);
              }
              else {
                in_stack_fffffffffffff5f0 =
                     in_stack_fffffffffffff5f0 & 0xffffffff00000000 | (ulong)*(uint *)ppuVar27;
                param_2 = &puStack_9b8;
                func_0x000109b82164(puVar24,param_2,uVar3,lVar28,&iStack_9ac,uVar29,iVar20,
                                    in_stack_fffffffffffff5f0);
              }
              uVar29 = *(uint *)((long)param_1 + 0xc);
              iVar26 = iStack_9ac;
              if ((int)uVar29 <= iStack_9ac) break;
            }
            iVar20 = 0;
          } while (iVar26 < (int)uVar29);
          goto LAB_109b7644c;
        }
        if (*(uint *)((long)param_1 + 0x4ec) != 0) goto LAB_109b76480;
        iStack_9ac = 0;
        if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
          do {
            iVar25 = iStack_9ac;
            param_2 = ppuVar8;
            FUN_109b749a0(param_1 + 0x14,ppuVar8,uVar1 & 0xfffffffc);
            uVar7 = *(uint *)(param_1 + 1);
            if (uVar2 == 0) {
              if (0 < (int)uVar7) {
                lVar28 = 0;
                do {
                  *(byte *)((long)puVar24 + lVar28) = abStack_170[*(byte *)((long)ppuVar8 + lVar28)]
                  ;
                  lVar28 = lVar28 + 1;
                } while ((int)uVar7 != lVar28);
              }
            }
            else {
              ppuVar27 = ppuVar8;
              puVar15 = puVar24;
              if (1 < (int)uVar7) {
                ppuVar10 = ppuVar8;
                puVar9 = puVar24;
                do {
                  ppuVar27 = (uint **)((long)ppuVar10 + 1);
                  puVar15 = (uint *)((long)puVar9 + 3);
                  uVar22 = (long)puVar9 + 6;
                  *puVar9 = *(uint *)((long)param_1 + ((ulong)*(byte *)ppuVar10 + 0x38) * 4);
                  ppuVar10 = ppuVar27;
                  puVar9 = puVar15;
                } while (uVar22 < (ulong)((long)puVar24 + (long)(int)uVar7 * 3));
              }
              puVar9 = (uint *)((long)param_1 + ((ulong)*(byte *)ppuVar27 + 0x38) * 4);
              uVar4 = *(undefined1 *)((long)puVar9 + 2);
              *(short *)puVar15 = (short)*puVar9;
              *(undefined1 *)((long)puVar15 + 2) = uVar4;
              iVar25 = iStack_9ac;
            }
            iStack_9ac = iVar25 + 1;
            puVar24 = (uint *)((long)puVar24 + (long)(int)uVar3);
          } while (iStack_9ac < (int)*(uint *)((long)param_1 + 0xc));
        }
      }
    }
  }
  else if ((int)uVar7 < 0x18) {
    if (uVar7 == 0xf) {
      if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
        iVar25 = 0;
        do {
          FUN_109b749a0(param_1 + 0x14,ppuVar8,uVar1 & 0xfffffffc);
          param_2 = (uint **)0x0;
          if (uVar2 == 0) {
            func_0x000109b81dec(ppuVar8,0,puVar24,0,(ulong)*(uint *)(param_1 + 1) | 0x100000000);
          }
          else {
            func_0x000109b81ee4();
          }
          iVar25 = iVar25 + 1;
          puVar24 = (uint *)((long)puVar24 + (long)(int)uVar3);
        } while (iVar25 < (int)*(uint *)((long)param_1 + 0xc));
      }
    }
    else {
      if (uVar7 != 0x10) goto LAB_109b7644c;
      if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
        iVar25 = 0;
        do {
          FUN_109b749a0(param_1 + 0x14,ppuVar8,uVar1 & 0xfffffffc);
          param_2 = (uint **)0x0;
          if (uVar2 == 0) {
            func_0x000109b81e68(ppuVar8,0,puVar24,0,(ulong)*(uint *)(param_1 + 1) | 0x100000000);
          }
          else {
            func_0x000109b81f54();
          }
          iVar25 = iVar25 + 1;
          puVar24 = (uint *)((long)puVar24 + (long)(int)uVar3);
        } while (iVar25 < (int)*(uint *)((long)param_1 + 0xc));
      }
    }
  }
  else if (uVar7 == 0x18) {
    if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
      iVar25 = 0;
      do {
        FUN_109b749a0(param_1 + 0x14,ppuVar8,uVar1 & 0xfffffffc);
        if (uVar2 == 0) {
          param_2 = (uint **)0x0;
          func_0x000109b81abc(ppuVar8,0,puVar24,0,(ulong)*(uint *)(param_1 + 1) | 0x100000000,0);
        }
        else {
          param_2 = ppuVar8;
          _memcpy(puVar24,ppuVar8,(long)(int)(*(uint *)(param_1 + 1) * 3));
        }
        iVar25 = iVar25 + 1;
        puVar24 = (uint *)((long)puVar24 + (long)(int)uVar3);
      } while (iVar25 < (int)*(uint *)((long)param_1 + 0xc));
    }
  }
  else {
    if (uVar7 != 0x20) goto LAB_109b7644c;
    if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
      iVar25 = 0;
      do {
        FUN_109b749a0(param_1 + 0x14,ppuVar8,uVar1 & 0xfffffffc);
        param_2 = (uint **)0x0;
        if (uVar2 == 0) {
          func_0x000109b81bd4(ppuVar8,0,puVar24,0,(ulong)*(uint *)(param_1 + 1) | 0x100000000,0);
        }
        else {
          func_0x000109b81c5c();
        }
        iVar25 = iVar25 + 1;
        puVar24 = (uint *)((long)puVar24 + (long)(int)uVar3);
      } while (iVar25 < (int)*(uint *)((long)param_1 + 0xc));
    }
  }
  bVar6 = true;
LAB_109b7644c:
  while( true ) {
    if ((puStack_9a0 != puStack_9c8) && (puStack_9a0 != (uint *)0x0)) {
      __ZdaPv();
    }
    param_1 = ppuStack_588;
    if ((ppuStack_588 != ppuStack_9d8) && (ppuStack_588 != (uint **)0x0)) {
      __ZdaPv();
    }
LAB_109b75f50:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
    while ((int)param_2 == 0) {
      __Unwind_Resume(param_1);
    }
    ___cxa_begin_catch(param_1);
    ___cxa_end_catch();
LAB_109b76b50:
    bVar6 = false;
  }
  return bVar6;
}



/* Entry: 109b76b7c; end: 109b76c2b;  */

undefined8 * FUN_109b76b7c(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b76c2c; end: 109b76c2f;  */

undefined8 * FUN_109b76c2c(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b76c30; end: 109b76c43;  */

void FUN_109b76c30(void)

{
  FUN_109b76b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b76c44; end: 109b76c9b;  */

void FUN_109b76c44(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aeac(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2aeb4(&lStack_30);
  return;
}



/* Entry: 109b76c9c; end: 109b77017;  */

undefined *** FUN_109b76c9c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  ulong uVar22;
  long lVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  undefined **ppuStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 uStack_490;
  undefined1 uStack_488;
  long lStack_480;
  undefined4 uStack_478;
  undefined1 uStack_474;
  char acStack_470 [1024];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = *param_2;
  uStack_474 = 0;
  uStack_478 = 0;
  uStack_490 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_498 = 0x8000;
  uStack_488 = 0;
  lStack_480 = 0;
  ppuStack_4b8 = &PTR_FUN_110b28a48;
  uStack_4b0 = 0;
  lVar23 = *(long *)(param_1 + 0x28);
  if (lVar23 == 0) {
    pppuVar21 = &ppuStack_4b8;
    func_0x000109b74de8(pppuVar21,param_1 + 0x18);
    if ((int)pppuVar21 == 0) {
      pppuVar21 = (undefined ***)0x0;
      goto LAB_109b76fac;
    }
  }
  else {
    func_0x000109b74ec0(&ppuStack_4b8);
    (*(code *)ppuStack_4b8[7])(&ppuStack_4b8);
    uStack_488 = 1;
    uStack_494 = 0;
    uStack_4a0 = uStack_4b0;
    lStack_480 = lVar23;
  }
  uVar5 = uVar3 >> 3 & 0x1ff;
  iVar4 = (uVar5 + 1) * uVar2;
  uVar3 = iVar4 + 3U & 0xfffffffc;
  iVar29 = 0x436;
  if (uVar5 != 0) {
    iVar29 = 0x36;
  }
  iVar30 = iVar29 + uVar3 * uVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c31950(*(long *)(param_1 + 0x28),(long)iVar30 + 0x10fU & 0xffffffffffffff00);
  }
  FUN_109b74f58(&ppuStack_4b8,"BM",2);
  func_0x000109b75084(&ppuStack_4b8,iVar30);
  func_0x000109b75084(&ppuStack_4b8,0);
  func_0x000109b75084(&ppuStack_4b8,iVar29);
  func_0x000109b75084(&ppuStack_4b8,0x28);
  func_0x000109b75084(&ppuStack_4b8,uVar2);
  func_0x000109b75084(&ppuStack_4b8,(ulong)uVar1);
  func_0x000109b74fe4(&ppuStack_4b8,1);
  func_0x000109b74fe4(&ppuStack_4b8,(uVar5 + 1) * 8);
  func_0x000109b75084(&ppuStack_4b8,0);
  func_0x000109b75084(&ppuStack_4b8,0);
  func_0x000109b75084(&ppuStack_4b8,0);
  func_0x000109b75084(&ppuStack_4b8,0);
  func_0x000109b75084(&ppuStack_4b8,0);
  func_0x000109b75084(&ppuStack_4b8,0);
  if (uVar5 == 0) {
    lVar23 = 0;
    iVar31 = 0xe;
    iVar32 = 0xf;
    iVar29 = 0xc;
    iVar30 = 0xd;
    iVar35 = 10;
    iVar36 = 0xb;
    iVar33 = 8;
    iVar34 = 9;
    iVar39 = 6;
    iVar40 = 7;
    iVar37 = 4;
    iVar38 = 5;
    iVar43 = 2;
    iVar44 = 3;
    iVar41 = 0;
    iVar42 = 1;
    do {
      iVar6 = iVar37 * 0xff;
      iVar7 = iVar40 * 0xff;
      iVar8 = iVar44 * 0xff;
      iVar45 = iVar32 * 0xff;
      iVar46 = iVar36 * 0xff;
      cVar17 = (char)((iVar33 * 0xff) / 0xff);
      cVar18 = (char)((iVar34 * 0xff) / 0xff);
      cVar15 = (char)((iVar35 * 0xff) / 0xff);
      cVar27 = ((char)(iVar46 / 0xff) + (char)(iVar46 >> 0x1f)) -
               (char)((long)iVar46 * 0x80808081 >> 0x3f);
      cVar12 = (char)((iVar29 * 0xff) / 0xff);
      cVar11 = (char)((iVar30 * 0xff) / 0xff);
      cVar9 = (char)((iVar31 * 0xff) / 0xff);
      cVar28 = ((char)(iVar45 / 0xff) + (char)(iVar45 >> 0x1f)) -
               (char)((long)iVar45 * 0x80808081 >> 0x3f);
      iVar8 = (int)((ulong)((long)(int)(CONCAT26((short)((uint)iVar8 >> 0x10),
                                                 CONCAT24((short)iVar8,iVar43 * 0xff)) >> 0x20) *
                           -0x7f7f7f7f) >> 0x20) + iVar8;
      cVar19 = (char)((iVar41 * 0xff) / 0xff);
      cVar16 = (char)((iVar42 * 0xff) / 0xff);
      cVar14 = (char)((iVar43 * 0xff) / 0xff);
      cVar24 = (char)(iVar8 >> 7) - (char)(iVar8 >> 0x1f);
      iVar7 = (int)((ulong)((long)(int)(CONCAT26((short)((uint)iVar7 >> 0x10),
                                                 CONCAT24((short)iVar7,iVar39 * 0xff)) >> 0x20) *
                           -0x7f7f7f7f) >> 0x20) + iVar7;
      cVar13 = (char)((iVar38 * 0xff) / 0xff);
      cVar10 = (char)((iVar39 * 0xff) / 0xff);
      cVar25 = ((char)(iVar6 / 0xff) + (char)(iVar6 >> 0x1f)) -
               (char)((long)iVar6 * 0x80808081 >> 0x3f);
      cVar26 = (char)(iVar7 >> 7) - (char)(iVar7 >> 0x1f);
      acStack_470[lVar23] = cVar19;
      acStack_470[lVar23 + 1] = cVar19;
      acStack_470[lVar23 + 2] = cVar19;
      acStack_470[lVar23 + 3] = '\0';
      acStack_470[lVar23 + 4] = cVar16;
      acStack_470[lVar23 + 5] = cVar16;
      acStack_470[lVar23 + 6] = cVar16;
      acStack_470[lVar23 + 7] = '\0';
      acStack_470[lVar23 + 8] = cVar14;
      acStack_470[lVar23 + 9] = cVar14;
      acStack_470[lVar23 + 10] = cVar14;
      acStack_470[lVar23 + 0xb] = '\0';
      acStack_470[lVar23 + 0xc] = cVar24;
      acStack_470[lVar23 + 0xd] = cVar24;
      acStack_470[lVar23 + 0xe] = cVar24;
      acStack_470[lVar23 + 0xf] = '\0';
      acStack_470[lVar23 + 0x10] = cVar25;
      acStack_470[lVar23 + 0x11] = cVar25;
      acStack_470[lVar23 + 0x12] = cVar25;
      acStack_470[lVar23 + 0x13] = '\0';
      acStack_470[lVar23 + 0x14] = cVar13;
      acStack_470[lVar23 + 0x15] = cVar13;
      acStack_470[lVar23 + 0x16] = cVar13;
      acStack_470[lVar23 + 0x17] = '\0';
      acStack_470[lVar23 + 0x18] = cVar10;
      acStack_470[lVar23 + 0x19] = cVar10;
      acStack_470[lVar23 + 0x1a] = cVar10;
      acStack_470[lVar23 + 0x1b] = '\0';
      acStack_470[lVar23 + 0x1c] = cVar26;
      acStack_470[lVar23 + 0x1d] = cVar26;
      acStack_470[lVar23 + 0x1e] = cVar26;
      acStack_470[lVar23 + 0x1f] = '\0';
      acStack_470[lVar23 + 0x20] = cVar17;
      acStack_470[lVar23 + 0x21] = cVar17;
      acStack_470[lVar23 + 0x22] = cVar17;
      acStack_470[lVar23 + 0x23] = '\0';
      acStack_470[lVar23 + 0x24] = cVar18;
      acStack_470[lVar23 + 0x25] = cVar18;
      acStack_470[lVar23 + 0x26] = cVar18;
      acStack_470[lVar23 + 0x27] = '\0';
      acStack_470[lVar23 + 0x28] = cVar15;
      acStack_470[lVar23 + 0x29] = cVar15;
      acStack_470[lVar23 + 0x2a] = cVar15;
      acStack_470[lVar23 + 0x2b] = '\0';
      acStack_470[lVar23 + 0x2c] = cVar27;
      acStack_470[lVar23 + 0x2d] = cVar27;
      acStack_470[lVar23 + 0x2e] = cVar27;
      acStack_470[lVar23 + 0x2f] = '\0';
      acStack_470[lVar23 + 0x30] = cVar12;
      acStack_470[lVar23 + 0x31] = cVar12;
      acStack_470[lVar23 + 0x32] = cVar12;
      acStack_470[lVar23 + 0x33] = '\0';
      acStack_470[lVar23 + 0x34] = cVar11;
      acStack_470[lVar23 + 0x35] = cVar11;
      acStack_470[lVar23 + 0x36] = cVar11;
      acStack_470[lVar23 + 0x37] = '\0';
      acStack_470[lVar23 + 0x38] = cVar9;
      acStack_470[lVar23 + 0x39] = cVar9;
      acStack_470[lVar23 + 0x3a] = cVar9;
      acStack_470[lVar23 + 0x3b] = '\0';
      acStack_470[lVar23 + 0x3c] = cVar28;
      acStack_470[lVar23 + 0x3d] = cVar28;
      acStack_470[lVar23 + 0x3e] = cVar28;
      acStack_470[lVar23 + 0x3f] = '\0';
      iVar41 = iVar41 + 0x10;
      iVar42 = iVar42 + 0x10;
      iVar43 = iVar43 + 0x10;
      iVar44 = iVar44 + 0x10;
      iVar37 = iVar37 + 0x10;
      iVar38 = iVar38 + 0x10;
      iVar39 = iVar39 + 0x10;
      iVar40 = iVar40 + 0x10;
      iVar33 = iVar33 + 0x10;
      iVar34 = iVar34 + 0x10;
      iVar35 = iVar35 + 0x10;
      iVar36 = iVar36 + 0x10;
      iVar29 = iVar29 + 0x10;
      iVar30 = iVar30 + 0x10;
      iVar31 = iVar31 + 0x10;
      iVar32 = iVar32 + 0x10;
      lVar23 = lVar23 + 0x40;
    } while (lVar23 != 0x400);
    FUN_109b74f58(&ppuStack_4b8,acStack_470,0x400);
  }
  if (0 < (int)uVar1) {
    uVar22 = (ulong)uVar1 + 1;
    do {
      FUN_109b74f58(&ppuStack_4b8,
                    *(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * (uVar22 - 2),iVar4);
      if (iVar4 < (int)uVar3) {
        FUN_109b74f58(&ppuStack_4b8,&uStack_478,uVar3 - iVar4);
      }
      uVar22 = uVar22 - 1;
    } while (1 < uVar22);
  }
  func_0x000109b74ec0(&ppuStack_4b8);
  pppuVar21 = (undefined ***)0x1;
LAB_109b76fac:
  pppuVar20 = &ppuStack_4b8;
  FUN_109b74ca0(pppuVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar21;
  }
  ___stack_chk_fail();
  FUN_109b74ca0(&ppuStack_4b8);
  __Unwind_Resume(pppuVar20);
  return pppuVar20;
}



/* Entry: 109b77018; end: 109b7701f;  */

void FUN_109b77018(void)

{
  return;
}



/* Entry: 109b77020; end: 109b7705b;  */

void FUN_109b77020(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b77058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b7705c; end: 109b77063;  */

void FUN_109b7705c(void)

{
  return;
}



/* Entry: 109b77064; end: 109b770f7;  */

void FUN_109b77064(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7709c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b770f8; end: 109b770fb;  */

undefined8 * FUN_109b770f8(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_110b28d78;
  lVar5 = param_1[0x14];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (lVar5 != 0) {
    piVar7 = (int *)(lVar5 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar5 + -0xc));
    }
  }
  *param_1 = &PTR_FUN_110b28b18;
  if (param_1[0xe] != 0) {
    piVar7 = (int *)(param_1[0xe] + 0x14);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 7);
    }
  }
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar5 = 0;
    lVar6 = param_1[0xf];
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3c));
  }
  puVar4 = (undefined8 *)param_1[0x10];
  if (puVar4 != param_1 + 0x11 && puVar4 != (undefined8 *)0x0) {
    _free(puVar4[-1]);
  }
  lVar5 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  if (lVar5 != 0) {
    piVar7 = (int *)(lVar5 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar5 + -0xc));
    }
  }
  lVar5 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar5 != 0) {
    piVar7 = (int *)(lVar5 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar5 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b770fc; end: 109b7710f;  */

void FUN_109b770fc(void)

{
  func_0x000109b770a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b77110; end: 109b77123;  */

ulong FUN_109b77110(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (*(ulong *)(param_1 + 0x30) <= *(ulong *)(param_1 + 0xa8)) {
    uVar1 = *(ulong *)(param_1 + 0xa8);
  }
  return uVar1;
}



/* Entry: 109b77124; end: 109b771a7;  */

void FUN_109b77124(long param_1)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x18);
  }
  _fopen(pcVar1,&UNK_10f432965);
  *(char **)(param_1 + 0xb0) = pcVar1;
  if ((pcVar1 != (char *)0x0) &&
     ((FUN_109b80f8c(), *(int *)(param_1 + 8) < 1 || (*(int *)(param_1 + 0xc) < 1)))) {
    _fclose(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}



/* Entry: 109b771a8; end: 109b773a7;  */

undefined8 FUN_109b771a8(long *param_1,uint *param_2)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long *plVar12;
  char *pcVar13;
  char *pcVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  uint *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar9 = &uStack_b0;
  puVar10 = &uStack_b0;
  puVar11 = &uStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = 0x42ff0000;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = NEON_rev64(param_1[1],4);
  plVar15 = (long *)0x2;
  puStack_68 = &uStack_60;
  FUN_109a83fd0(&uStack_b0,2,&lStack_50,0x15);
  lVar8 = param_1[0x16];
  if (lVar8 == 0) {
    plVar12 = param_1;
    (**(code **)(*param_1 + 0x30))();
    if ((int)plVar12 != 0) {
      lVar8 = param_1[0x16];
      goto LAB_109b77244;
    }
    uVar16 = 0;
  }
  else {
LAB_109b77244:
    FUN_109b81784(lVar8,CONCAT44(uStack_9c,uStack_a0),uStack_a4,uStack_ac._4_4_);
    _fclose(param_1[0x16]);
    param_1[0x16] = 0;
    uVar5 = *param_2;
    puStack_48 = param_2;
    if (((uStack_b0 ^ uVar5) & 7) == 0) {
      lStack_50 = CONCAT44(lStack_50._4_4_,0x2010000);
      uStack_40 = 0;
      plVar15 = &lStack_50;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_b0,plVar15,uVar5 & 0xfff);
    }
    else {
      lStack_50 = CONCAT44(lStack_50._4_4_,0x2010000);
      uStack_40 = 0;
      plVar15 = &lStack_50;
      FUN_109a41858(0x406fe00000000000,0,&uStack_b0,plVar15,uVar5 & 0xfff);
      puVar10 = puVar9;
    }
    uVar16 = 1;
    plVar12 = (long *)puVar10;
  }
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4();
      plVar12 = (long *)puVar11;
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    plVar12 = (long *)puStack_68[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar16;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_b0);
  __Unwind_Resume();
  if ((ulong)plVar15[1] < (ulong)plVar12[6]) {
LAB_109b77410:
    uVar16 = 0;
  }
  else {
    pcVar2 = "";
    pcVar14 = pcVar2;
    if ((char *)*plVar15 != (char *)0x0) {
      pcVar14 = (char *)*plVar15;
    }
    pcVar3 = pcVar2;
    if ((char *)plVar12[5] != (char *)0x0) {
      pcVar3 = (char *)plVar12[5];
    }
    pcVar13 = pcVar14;
    _memcmp(pcVar14,pcVar3);
    if ((int)pcVar13 != 0) {
      if ((char *)plVar12[0x14] != (char *)0x0) {
        pcVar2 = (char *)plVar12[0x14];
      }
      _memcmp(pcVar14,pcVar2,plVar12[0x15]);
      if ((int)pcVar14 != 0) goto LAB_109b77410;
    }
    uVar16 = 1;
  }
  return uVar16;
}



/* Entry: 109b773a8; end: 109b7742b;  */

undefined8 FUN_109b773a8(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if ((ulong)param_2[1] < *(ulong *)(param_1 + 0x30)) {
LAB_109b77410:
    uVar5 = 0;
  }
  else {
    pcVar1 = "";
    pcVar4 = pcVar1;
    if ((char *)*param_2 != (char *)0x0) {
      pcVar4 = (char *)*param_2;
    }
    pcVar2 = pcVar1;
    if (*(char **)(param_1 + 0x28) != (char *)0x0) {
      pcVar2 = *(char **)(param_1 + 0x28);
    }
    pcVar3 = pcVar4;
    _memcmp(pcVar4,pcVar2);
    if ((int)pcVar3 != 0) {
      if (*(char **)(param_1 + 0xa0) != (char *)0x0) {
        pcVar1 = *(char **)(param_1 + 0xa0);
      }
      _memcmp(pcVar4,pcVar1,*(undefined8 *)(param_1 + 0xa8));
      if ((int)pcVar4 != 0) goto LAB_109b77410;
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 109b7742c; end: 109b77483;  */

void FUN_109b7742c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aeb8(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2aec0(&lStack_30);
  return;
}



/* Entry: 109b77484; end: 109b77487;  */

undefined8 * FUN_109b77484(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b77488; end: 109b7749b;  */

void FUN_109b77488(void)

{
  FUN_109b76b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b7749c; end: 109b77887;  */

bool FUN_109b7749c(long param_1,uint *param_2,long *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 auStack_f8 [2];
  uint *puStack_f0;
  undefined8 uStack_e8;
  undefined4 **ppuStack_e0;
  undefined4 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined4 *puStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  undefined8 uStack_ac;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_b0 = 0x42ff0000;
  lStack_70 = (long)&uStack_ac + 4;
  iStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_68 = &uStack_60;
  if ((*param_2 >> 3 & 0x1fd) == 0) {
    if ((*param_2 & 0xff8) == 0) {
      puStack_c8 = (undefined4 *)0x0;
      puStack_c0 = (uint *)0x0;
      puStack_b8 = (uint *)0x0;
      ppuStack_e0 = &puStack_c8;
      ppuStack_d8 = (undefined4 **)((ulong)ppuStack_d8 & 0xffffffffffffff00);
      puVar8 = (undefined4 *)0x120;
      __Znwm();
      puVar1 = puVar8 + 0x48;
      lVar9 = 0x120;
      puStack_c8 = puVar8;
      puStack_c0 = puVar8;
      puStack_b8 = puVar1;
      do {
        FUN_10938f1f8(puVar8,param_2);
        puVar8 = puVar8 + 0x18;
        lVar9 = lVar9 + -0x60;
      } while (lVar9 != 0);
      ppuStack_e0 = (undefined4 **)CONCAT44(ppuStack_e0._4_4_,0x1050000);
      uStack_d0 = 0;
      auStack_f8[0] = 0x2010000;
      puStack_f0 = &uStack_b0;
      uStack_e8 = 0;
      ppuStack_d8 = &puStack_c8;
      puStack_c0 = puVar1;
      FUN_109a3ecac(&ppuStack_e0,auStack_f8);
      ppuStack_e0 = &puStack_c8;
      FUN_1093702c4(&ppuStack_e0);
    }
    else {
      puStack_c8 = (undefined4 *)CONCAT44(puStack_c8._4_4_,0x2010000);
      puStack_c0 = &uStack_b0;
      puStack_b8 = (uint *)0x0;
      FUN_109a479a0(param_2,&puStack_c8);
    }
    if ((uStack_b0 & 7) != 5) {
      puStack_c8 = (undefined4 *)CONCAT44(puStack_c8._4_4_,0x2010000);
      puStack_c0 = &uStack_b0;
      puStack_b8 = (uint *)0x0;
      FUN_109a41858(0x3f70101020000000,0,&uStack_b0,&puStack_c8,0x15);
    }
    if (((uint *)*param_3 == (uint *)param_3[1]) || (*(uint *)*param_3 < 2)) {
      pcVar7 = "";
      if (*(char **)(param_1 + 0x18) != (char *)0x0) {
        pcVar7 = *(char **)(param_1 + 0x18);
      }
      _fopen(pcVar7,&UNK_10f5173d2);
      if (pcVar7 != (char *)0x0) {
        FUN_109b80aa0(pcVar7,iStack_a4,uStack_ac._4_4_,0);
        if (((int *)*param_3 == (int *)param_3[1]) || (*(int *)*param_3 == 1)) {
          FUN_109b81418(pcVar7,CONCAT44(uStack_9c,uStack_a0),iStack_a4,uStack_ac._4_4_);
        }
        else {
          FUN_109b81240(pcVar7,CONCAT44(uStack_9c,uStack_a0),uStack_ac._4_4_ * iStack_a4);
        }
        _fclose(pcVar7);
      }
      if (lStack_78 != 0) {
        piVar2 = (int *)(lStack_78 + 0x14);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_b0);
        }
      }
      lStack_78 = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      if (0 < (int)uStack_ac) {
        lVar9 = 0;
        do {
          *(undefined4 *)(lStack_70 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uStack_ac);
      }
      if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
        _free(puStack_68[-1]);
      }
      return pcVar7 != (char *)0x0;
    }
    puVar8 = (undefined4 *)0x44;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_c8 = puVar8 + 1;
    puStack_c0 = (uint *)0x3f;
    *(undefined8 *)(puVar8 + 3) = 0x7c2029287974706d;
    *(undefined8 *)(puVar8 + 1) = 0x652e736d61726170;
    *(undefined1 *)((long)puVar8 + 0x43) = 0;
    *(undefined8 *)(puVar8 + 7) = 0x48203d3d205d305b;
    *(undefined8 *)(puVar8 + 5) = 0x736d61726170207c;
    *(undefined8 *)(puVar8 + 0xb) = 0x6d61726170207c7c;
    *(undefined8 *)(puVar8 + 9) = 0x20454e4f4e5f5244;
    *(undefined8 *)((long)puVar8 + 0x3b) = 0x454c525f52444820;
    *(undefined8 *)((long)puVar8 + 0x33) = 0x3d3d205d305b736d;
    FUN_109ac3188(0xffffff29,&puStack_c8,"write",&UNK_10f5a1166,0x8a);
  }
  else {
    puVar8 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_c8 = puVar8 + 1;
    puStack_c0 = (uint *)0x36;
    *(undefined8 *)(puVar8 + 3) = 0x656e6e6168632e67;
    *(undefined8 *)(puVar8 + 1) = 0x6d695f7475706e69;
    *(undefined1 *)((long)puVar8 + 0x3a) = 0;
    *(undefined8 *)(puVar8 + 7) = 0x706e69207c7c2033;
    *(undefined8 *)(puVar8 + 5) = 0x203d3d202928736c;
    *(undefined8 *)(puVar8 + 0xb) = 0x28736c656e6e6168;
    *(undefined8 *)(puVar8 + 9) = 0x632e676d695f7475;
    *(undefined8 *)((long)puVar8 + 0x32) = 0x31203d3d20292873;
    FUN_109ac3188(0xffffff29,&puStack_c8,"write",&UNK_10f5a1166,0x80);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109b777f4);
  (*pcVar6)();
}



/* Entry: 109b77888; end: 109b778df;  */

void FUN_109b77888(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aebc(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2aec4(&lStack_30);
  return;
}



/* Entry: 109b778e0; end: 109b778f3;  */

bool FUN_109b778e0(undefined8 param_1,int param_2)

{
  return param_2 != 6;
}



/* Entry: 109b778f4; end: 109b7792f;  */

void FUN_109b778f4(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7792c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b77930; end: 109b77937;  */

void FUN_109b77930(void)

{
  return;
}



/* Entry: 109b77938; end: 109b77973;  */

void FUN_109b77938(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b77970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b77974; end: 109b779a7;  */

undefined8 * FUN_109b77974(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_110b28ef0;
  FUN_109b779a8();
  *param_1 = &PTR_FUN_110b28b18;
  if (param_1[0xe] != 0) {
    piVar7 = (int *)(param_1[0xe] + 0x14);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 7);
    }
  }
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar4 = 0;
    lVar6 = param_1[0xf];
    do {
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x3c));
  }
  puVar5 = (undefined8 *)param_1[0x10];
  if (puVar5 != param_1 + 0x11 && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  lVar4 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b779a8; end: 109b77a07;  */

void FUN_109b779a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      (**(code **)(*(long *)(lVar1 + 8) + 0x50))(lVar1);
    }
    __ZdlPv(lVar1);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _fclose();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 109b77a08; end: 109b77a0b;  */

undefined8 * FUN_109b77a08(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_110b28ef0;
  FUN_109b779a8();
  *param_1 = &PTR_FUN_110b28b18;
  if (param_1[0xe] != 0) {
    piVar7 = (int *)(param_1[0xe] + 0x14);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 7);
    }
  }
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar4 = 0;
    lVar6 = param_1[0xf];
    do {
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x3c));
  }
  puVar5 = (undefined8 *)param_1[0x10];
  if (puVar5 != param_1 + 0x11 && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  lVar4 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b77a0c; end: 109b77a1f;  */

void FUN_109b77a0c(void)

{
  FUN_109b77974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b77a20; end: 109b77a77;  */

void FUN_109b77a20(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aec8(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2aed0(&lStack_30);
  return;
}



/* Entry: 109b77a78; end: 109b77dbb;  */

char FUN_109b77a78(long param_1)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  char cStack_e9;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  char cStack_b9;
  short sStack_a0;
  ushort uStack_9e;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  cStack_e9 = '\0';
  FUN_109b779a8();
  plVar2 = (long *)0x420;
  __Znwm();
  *(long **)(param_1 + 0xa8) = plVar2;
  plVar2[0x50] = (long)&UNK_1081d50e4;
  plVar2[0x51] = (long)&UNK_1081d5148;
  plVar2[0x52] = (long)&UNK_1081d51c4;
  plVar2[0x53] = (long)&UNK_1081d5294;
  *(undefined4 *)((long)plVar2 + 0x2f4) = 0;
  plVar2[0x5f] = 0;
  *(undefined4 *)(plVar2 + 0x54) = 0;
  plVar2[0x60] = (long)&PTR_DAT_110a2f080;
  *(undefined4 *)(plVar2 + 0x61) = 0x80;
  plVar2[99] = 0;
  plVar2[0x62] = 0;
  *plVar2 = (long)(plVar2 + 0x4f);
  plVar2[0x4f] = (long)FUN_109b77dbc;
  iVar1 = (int)plVar2 + 800;
  _setjmp();
  if (iVar1 != 0) goto LAB_109b77c7c;
  func_0x0001081c63a4(plVar2,0x3e,0x278);
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 == 0) {
LAB_109b77bec:
    pcVar3 = "";
    if (*(char **)(param_1 + 0x18) != (char *)0x0) {
      pcVar3 = *(char **)(param_1 + 0x18);
    }
    _fopen(pcVar3,&UNK_10f432965);
    *(char **)(param_1 + 0xa0) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      func_0x0001081c8b00(plVar2,pcVar3);
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x3c);
    if ((int)uVar5 < 3) {
      lVar8 = (long)*(int *)(param_1 + 0x44) * (long)*(int *)(param_1 + 0x40);
    }
    else {
      lVar8 = 1;
      piVar7 = *(int **)(param_1 + 0x78);
      uVar9 = (ulong)uVar5;
      do {
        lVar8 = lVar8 * *piVar7;
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 1;
      } while (uVar9 != 0);
    }
    if (lVar8 == 0) goto LAB_109b77bec;
    plVar2[5] = (long)(plVar2 + 0x7c);
    plVar2[0x7f] = 0x109b78a04;
    plVar2[0x80] = 0x109b78a0c;
    plVar2[0x81] = (long)&UNK_1081ceb8c;
    plVar2[0x7e] = (long)FUN_109b78a00;
    plVar2[0x82] = (long)FUN_109b78a00;
    plVar2[0x7d] = 0;
    *(undefined4 *)(plVar2 + 0x83) = 0;
    lVar8 = *(long *)(param_1 + 0x80);
    plVar2[0x7c] = lVar6;
    if ((int)uVar5 < 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar8 + (ulong)uVar5 * 8 + -8);
    }
    plVar2[0x7d] = lVar6 * (long)*(int *)(param_1 + 0x40) * (long)*(int *)(param_1 + 0x44);
  }
  if (plVar2[5] != 0) {
    func_0x0001081c654c(plVar2,1);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((long)plVar2 + 0x44) = 1;
    *(undefined4 *)(plVar2 + 9) = uVar4;
    *(undefined4 *)(param_1 + 0x14) = 1;
    func_0x0001081d09ec(plVar2);
    *(long *)(param_1 + 8) = plVar2[0x11];
    uVar4 = 0x10;
    if ((int)plVar2[7] < 2) {
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    cStack_e9 = '\x01';
  }
LAB_109b77c7c:
  func_0x000104c54c8c(&uStack_98,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (cStack_81 < '\0') {
    func_0x000107c3192c(&uStack_80,uStack_98,uStack_90);
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_50 = &uStack_48;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_38 = 0;
    if (cStack_81 < '\0') {
      __ZdlPv(uStack_98);
    }
  }
  else {
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_50 = &uStack_48;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_38 = 0;
  }
  iVar1 = (int)&uStack_80;
  FUN_109b7d22c();
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  else {
    FUN_109b7dcf0(&lStack_e8,&uStack_80,0x112);
    uVar5 = (uint)uStack_9e;
    if (sStack_a0 == -1) {
      uVar5 = 1;
    }
    if (cStack_b9 < '\0') {
      __ZdlPv(uStack_d0);
    }
    if (lStack_e8 != 0) {
      lStack_e0 = lStack_e8;
      __ZdlPv();
    }
  }
  FUN_109b7d1e0(&uStack_80);
  *(uint *)(param_1 + 0xb0) = uVar5;
  if (cStack_e9 == '\0') {
    FUN_109b779a8(param_1);
  }
  return cStack_e9;
}



/* Entry: 109b77dbc; end: 109b77dd3;  */

undefined1 FUN_109b77dbc(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 uStack_a1;
  undefined4 auStack_a0 [2];
  uint *puStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  uint *puStack_80;
  undefined8 uStack_78;
  
  lVar5 = *param_1 + 0xa8;
  puVar7 = (uint *)0x1;
  _longjmp();
  uStack_a1 = 0;
  puVar12 = *(undefined8 **)(lVar5 + 0xa8);
  if (((puVar12 == (undefined8 *)0x0) || (*(int *)(lVar5 + 8) == 0)) || (*(int *)(lVar5 + 0xc) == 0)
     ) goto LAB_109b78150;
  uVar13 = *(undefined8 *)(puVar7 + 0x14);
  uVar1 = *puVar7;
  iVar4 = (int)puVar12 + 800;
  _setjmp();
  if (iVar4 != 0) goto LAB_109b78150;
  if (((puVar12[0x21] == 0) && (puVar12[0x22] == 0)) &&
     ((puVar12[0x1d] == 0 && (puVar12[0x1e] == 0)))) {
    FUN_109b7817c(puVar12,puVar12 + 0x21);
  }
  iVar2 = *(int *)(puVar12 + 7);
  iVar4 = iVar2;
  if (iVar2 != 4) {
    iVar4 = 2;
  }
  iVar11 = 3;
  if (iVar2 != 4) {
    iVar2 = 1;
  }
  else {
    iVar11 = 4;
  }
  iVar3 = iVar2;
  if ((uVar1 & 0xff8) != 0) {
    iVar2 = iVar11;
    iVar3 = iVar4;
  }
  *(int *)(puVar12 + 8) = iVar3;
  *(int *)(puVar12 + 0x12) = iVar2;
  func_0x0001081c69c0(puVar12);
  puVar6 = puVar12;
  (**(code **)(puVar12[1] + 0x10))(puVar12,1,*(int *)(lVar5 + 8) << 2,1);
  lVar9 = *(long *)(puVar7 + 4);
  iVar4 = *(int *)(lVar5 + 0xc);
  *(int *)(lVar5 + 0xc) = iVar4 + -1;
  if (iVar4 != 0) {
    do {
      func_0x0001081c6dd0(puVar12,puVar6,1);
      uVar8 = *puVar6;
      uVar10 = (ulong)*(uint *)(lVar5 + 8);
      if ((uVar1 & 0xff8) == 0) {
        if (*(int *)(puVar12 + 0x12) == 1) {
          _memcpy(lVar9,uVar8,(long)(int)*(uint *)(lVar5 + 8));
        }
        else {
          func_0x000109b8204c(uVar8,0,lVar9,0,uVar10 | 0x100000000);
        }
      }
      else if (*(int *)(puVar12 + 0x12) == 3) {
        func_0x000109b81d88(uVar8,0,lVar9,0,uVar10 | 0x100000000);
      }
      else {
        func_0x000109b81fc4(uVar8,0,lVar9,0,uVar10 | 0x100000000);
      }
      lVar9 = lVar9 + (int)uVar13;
      iVar4 = *(int *)(lVar5 + 0xc);
      *(int *)(lVar5 + 0xc) = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uStack_a1 = 1;
  func_0x0001081c68b0(puVar12);
  iVar4 = *(int *)(lVar5 + 0xb0);
  if (iVar4 < 5) {
    if (iVar4 == 2) goto LAB_109b780a8;
    if (iVar4 == 3) goto LAB_109b7813c;
    if (iVar4 != 4) goto LAB_109b78150;
LAB_109b78088:
    uVar13 = 0;
  }
  else if (iVar4 < 7) {
    if (iVar4 == 5) {
      uStack_78 = 0;
      auStack_88[0] = 0x1010000;
      auStack_a0[0] = 0x2010000;
      uStack_90 = 0;
      puStack_98 = puVar7;
      puStack_80 = puVar7;
      FUN_109a895d0(auStack_88,auStack_a0);
      goto LAB_109b78150;
    }
    if (iVar4 != 6) goto LAB_109b78150;
    uStack_78 = 0;
    auStack_88[0] = 0x1010000;
    auStack_a0[0] = 0x2010000;
    uStack_90 = 0;
    puStack_98 = puVar7;
    puStack_80 = puVar7;
    FUN_109a895d0(auStack_88,auStack_a0);
LAB_109b780a8:
    uVar13 = 1;
  }
  else {
    if (iVar4 != 7) {
      if (iVar4 != 8) goto LAB_109b78150;
      uStack_78 = 0;
      auStack_88[0] = 0x1010000;
      auStack_a0[0] = 0x2010000;
      uStack_90 = 0;
      puStack_98 = puVar7;
      puStack_80 = puVar7;
      FUN_109a895d0(auStack_88,auStack_a0);
      goto LAB_109b78088;
    }
    uStack_78 = 0;
    auStack_88[0] = 0x1010000;
    auStack_a0[0] = 0x2010000;
    uStack_90 = 0;
    puStack_98 = puVar7;
    puStack_80 = puVar7;
    FUN_109a895d0(auStack_88,auStack_a0);
LAB_109b7813c:
    uVar13 = 0xffffffff;
  }
  uStack_78 = 0;
  auStack_88[0] = 0x1010000;
  uStack_90 = 0;
  auStack_a0[0] = 0x2010000;
  puStack_98 = puVar7;
  puStack_80 = puVar7;
  FUN_109a491e0(auStack_88,auStack_a0,uVar13);
LAB_109b78150:
  FUN_109b779a8(lVar5);
  return uStack_a1;
}



/* Entry: 109b77dd4; end: 109b7817b;  */

undefined1 FUN_109b77dd4(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 uStack_91;
  undefined4 auStack_90 [2];
  uint *puStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  uint *puStack_70;
  undefined8 uStack_68;
  
  uStack_91 = 0;
  puVar10 = *(undefined8 **)(param_1 + 0xa8);
  if (((puVar10 == (undefined8 *)0x0) || (*(int *)(param_1 + 8) == 0)) ||
     (*(int *)(param_1 + 0xc) == 0)) goto LAB_109b78150;
  uVar11 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *param_2;
  iVar4 = (int)puVar10 + 800;
  _setjmp();
  if (iVar4 != 0) goto LAB_109b78150;
  if (((puVar10[0x21] == 0) && (puVar10[0x22] == 0)) &&
     ((puVar10[0x1d] == 0 && (puVar10[0x1e] == 0)))) {
    FUN_109b7817c(puVar10,puVar10 + 0x21);
  }
  iVar2 = *(int *)(puVar10 + 7);
  iVar4 = iVar2;
  if (iVar2 != 4) {
    iVar4 = 2;
  }
  iVar9 = 3;
  if (iVar2 != 4) {
    iVar2 = 1;
  }
  else {
    iVar9 = 4;
  }
  iVar3 = iVar2;
  if ((uVar1 & 0xff8) != 0) {
    iVar2 = iVar9;
    iVar3 = iVar4;
  }
  *(int *)(puVar10 + 8) = iVar3;
  *(int *)(puVar10 + 0x12) = iVar2;
  func_0x0001081c69c0(puVar10);
  puVar5 = puVar10;
  (**(code **)(puVar10[1] + 0x10))(puVar10,1,*(int *)(param_1 + 8) << 2,1);
  lVar7 = *(long *)(param_2 + 4);
  iVar4 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar4 + -1;
  if (iVar4 != 0) {
    do {
      func_0x0001081c6dd0(puVar10,puVar5,1);
      uVar6 = *puVar5;
      uVar8 = (ulong)*(uint *)(param_1 + 8);
      if ((uVar1 & 0xff8) == 0) {
        if (*(int *)(puVar10 + 0x12) == 1) {
          _memcpy(lVar7,uVar6,(long)(int)*(uint *)(param_1 + 8));
        }
        else {
          func_0x000109b8204c(uVar6,0,lVar7,0,uVar8 | 0x100000000);
        }
      }
      else if (*(int *)(puVar10 + 0x12) == 3) {
        func_0x000109b81d88(uVar6,0,lVar7,0,uVar8 | 0x100000000);
      }
      else {
        func_0x000109b81fc4(uVar6,0,lVar7,0,uVar8 | 0x100000000);
      }
      lVar7 = lVar7 + (int)uVar11;
      iVar4 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 0xc) = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uStack_91 = 1;
  func_0x0001081c68b0(puVar10);
  iVar4 = *(int *)(param_1 + 0xb0);
  if (iVar4 < 5) {
    if (iVar4 == 2) goto LAB_109b780a8;
    if (iVar4 == 3) goto LAB_109b7813c;
    if (iVar4 != 4) goto LAB_109b78150;
LAB_109b78088:
    uVar11 = 0;
  }
  else if (iVar4 < 7) {
    if (iVar4 == 5) {
      uStack_68 = 0;
      auStack_78[0] = 0x1010000;
      auStack_90[0] = 0x2010000;
      uStack_80 = 0;
      puStack_88 = param_2;
      puStack_70 = param_2;
      FUN_109a895d0(auStack_78,auStack_90);
      goto LAB_109b78150;
    }
    if (iVar4 != 6) goto LAB_109b78150;
    uStack_68 = 0;
    auStack_78[0] = 0x1010000;
    auStack_90[0] = 0x2010000;
    uStack_80 = 0;
    puStack_88 = param_2;
    puStack_70 = param_2;
    FUN_109a895d0(auStack_78,auStack_90);
LAB_109b780a8:
    uVar11 = 1;
  }
  else {
    if (iVar4 != 7) {
      if (iVar4 != 8) goto LAB_109b78150;
      uStack_68 = 0;
      auStack_78[0] = 0x1010000;
      auStack_90[0] = 0x2010000;
      uStack_80 = 0;
      puStack_88 = param_2;
      puStack_70 = param_2;
      FUN_109a895d0(auStack_78,auStack_90);
      goto LAB_109b78088;
    }
    uStack_68 = 0;
    auStack_78[0] = 0x1010000;
    auStack_90[0] = 0x2010000;
    uStack_80 = 0;
    puStack_88 = param_2;
    puStack_70 = param_2;
    FUN_109a895d0(auStack_78,auStack_90);
LAB_109b7813c:
    uVar11 = 0xffffffff;
  }
  uStack_68 = 0;
  auStack_78[0] = 0x1010000;
  uStack_80 = 0;
  auStack_90[0] = 0x2010000;
  puStack_88 = param_2;
  puStack_70 = param_2;
  FUN_109a491e0(auStack_78,auStack_90,uVar11);
LAB_109b78150:
  FUN_109b779a8(param_1);
  return uStack_91;
}



/* Entry: 109b7817c; end: 109b7835f;  */

undefined8 * FUN_109b7817c(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uStack_179;
  undefined8 uStack_171;
  undefined8 uStack_169;
  undefined8 uStack_161;
  undefined8 uStack_159;
  undefined8 uStack_151;
  undefined8 uStack_149;
  undefined8 uStack_141;
  undefined8 uStack_139;
  undefined8 uStack_131;
  undefined8 uStack_129;
  undefined8 uStack_121;
  undefined8 uStack_119;
  undefined8 uStack_111;
  undefined8 uStack_109;
  undefined8 uStack_101;
  undefined8 uStack_f9;
  undefined8 uStack_f1;
  undefined8 uStack_e9;
  undefined8 uStack_e1;
  undefined8 uStack_d9;
  undefined8 uStack_d1;
  undefined8 uStack_c9;
  undefined8 uStack_c1;
  undefined8 uStack_b9;
  undefined8 uStack_b1;
  undefined8 uStack_a9;
  undefined8 uStack_a1;
  undefined8 uStack_99;
  undefined8 uStack_91;
  undefined8 uStack_89;
  undefined8 uStack_81;
  byte bStack_79;
  undefined7 uStack_78;
  undefined8 uStack_71;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0x1a0;
  uVar16 = 4;
  puVar9 = param_1;
  do {
    uVar15 = 0;
    bStack_79 = 0;
    bVar4 = (&UNK_10e035bf0)[uVar16];
    lVar13 = 1;
    do {
      bVar5 = (&UNK_10e035bf0)[uVar16 + (int)lVar13];
      (&bStack_79)[lVar13] = bVar5;
      uVar1 = (int)uVar15 + (uint)bVar5;
      uVar15 = (ulong)uVar1;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x11);
    if (0x100 < uVar1 || uVar10 - 0x11 < uVar1) break;
    uVar16 = uVar16 + 0x11;
    if (uVar1 != 0) {
      puVar12 = &uStack_179;
      uVar14 = uVar16;
      do {
        uVar16 = uVar14 + 1;
        *(undefined *)puVar12 = (&UNK_10e035bf0)[uVar14];
        uVar15 = uVar15 - 1;
        puVar12 = (undefined8 *)((long)puVar12 + 1);
        uVar14 = uVar16;
      } while (uVar15 != 0);
    }
    uVar14 = bVar4 - 0x10;
    plVar2 = (long *)(param_3 + (ulong)(uint)bVar4 * 8);
    uVar8 = (uint)bVar4;
    if ((bVar4 & 0x10) != 0) {
      plVar2 = (long *)(param_2 + (ulong)uVar14 * 8);
      uVar8 = uVar14;
    }
    if (3 < (int)uVar8) break;
    puVar9 = (undefined8 *)*plVar2;
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = param_1;
      (**(code **)param_1[1])(param_1,0,0x118);
      *(undefined4 *)((long)puVar9 + 0x114) = 0;
      *plVar2 = (long)puVar9;
    }
    *(undefined1 *)(puVar9 + 2) = uStack_69;
    puVar9[1] = uStack_71;
    *puVar9 = CONCAT71(uStack_78,bStack_79);
    lVar13 = *plVar2;
    *(undefined8 *)(lVar13 + 0xd9) = uStack_b1;
    *(undefined8 *)(lVar13 + 0xd1) = uStack_b9;
    *(undefined8 *)(lVar13 + 0xe9) = uStack_a1;
    *(undefined8 *)(lVar13 + 0xe1) = uStack_a9;
    *(undefined8 *)(lVar13 + 0xf9) = uStack_91;
    *(undefined8 *)(lVar13 + 0xf1) = uStack_99;
    *(undefined8 *)(lVar13 + 0x99) = uStack_f1;
    *(undefined8 *)(lVar13 + 0x91) = uStack_f9;
    *(undefined8 *)(lVar13 + 0xa9) = uStack_e1;
    *(undefined8 *)(lVar13 + 0xa1) = uStack_e9;
    *(undefined8 *)(lVar13 + 0xb9) = uStack_d1;
    *(undefined8 *)(lVar13 + 0xb1) = uStack_d9;
    *(undefined8 *)(lVar13 + 0xc9) = uStack_c1;
    *(undefined8 *)(lVar13 + 0xc1) = uStack_c9;
    *(undefined8 *)(lVar13 + 0x59) = uStack_131;
    *(undefined8 *)(lVar13 + 0x51) = uStack_139;
    *(undefined8 *)(lVar13 + 0x69) = uStack_121;
    *(undefined8 *)(lVar13 + 0x61) = uStack_129;
    *(undefined8 *)(lVar13 + 0x79) = uStack_111;
    *(undefined8 *)(lVar13 + 0x71) = uStack_119;
    *(undefined8 *)(lVar13 + 0x89) = uStack_101;
    *(undefined8 *)(lVar13 + 0x81) = uStack_109;
    *(undefined8 *)(lVar13 + 0x19) = uStack_171;
    *(undefined8 *)(lVar13 + 0x11) = uStack_179;
    *(undefined8 *)(lVar13 + 0x29) = uStack_161;
    *(undefined8 *)(lVar13 + 0x21) = uStack_169;
    *(undefined8 *)(lVar13 + 0x39) = uStack_151;
    *(undefined8 *)(lVar13 + 0x31) = uStack_159;
    *(undefined8 *)(lVar13 + 0x49) = uStack_141;
    *(undefined8 *)(lVar13 + 0x41) = uStack_149;
    uVar10 = (uVar10 - 0x11) - uVar1;
    *(undefined8 *)(lVar13 + 0x109) = uStack_81;
    *(undefined8 *)(lVar13 + 0x101) = uStack_89;
  } while (0x10 < uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    *puVar9 = &PTR_DAT_110b28b88;
    lVar13 = puVar9[7];
    puVar9[7] = 0;
    puVar9[8] = 0;
    if (lVar13 != 0) {
      piVar11 = (int *)(lVar13 + -4);
      do {
        iVar3 = *piVar11;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar7) {
          *piVar11 = iVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 + -1 == 0) {
        _free(*(undefined8 *)(lVar13 + -0xc));
      }
    }
    lVar13 = puVar9[3];
    puVar9[3] = 0;
    puVar9[4] = 0;
    if (lVar13 != 0) {
      piVar11 = (int *)(lVar13 + -4);
      do {
        iVar3 = *piVar11;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar7) {
          *piVar11 = iVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 + -1 == 0) {
        _free(*(undefined8 *)(lVar13 + -0xc));
      }
    }
    lVar13 = puVar9[1];
    puVar9[1] = 0;
    puVar9[2] = 0;
    if (lVar13 != 0) {
      piVar11 = (int *)(lVar13 + -4);
      do {
        iVar3 = *piVar11;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar7) {
          *piVar11 = iVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 + -1 == 0) {
        _free(*(undefined8 *)(lVar13 + -0xc));
      }
    }
    return puVar9;
  }
  return puVar9;
}



/* Entry: 109b78360; end: 109b78363;  */

undefined8 * FUN_109b78360(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b78364; end: 109b78377;  */

void FUN_109b78364(void)

{
  FUN_109b76b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b78378; end: 109b783cf;  */

void FUN_109b78378(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aecc(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2aed4(&lStack_30);
  return;
}



/* Entry: 109b783d0; end: 109b789ff;  */

char * FUN_109b783d0(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined1 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined1 *puVar11;
  undefined1 **ppuVar12;
  undefined4 *puVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  char *pcVar21;
  uint uVar22;
  char *pcVar23;
  long *plVar24;
  char *pcStack_930;
  undefined1 *puStack_920;
  char *pcStack_918;
  long lStack_910;
  undefined8 uStack_908;
  code *pcStack_900;
  undefined8 uStack_8f8;
  char **ppcStack_8f0;
  long lStack_8e8;
  char *pcStack_8e0;
  char *pcStack_8d8;
  byte bStack_8c1;
  undefined1 *apuStack_8c0 [25];
  code *pcStack_7f8;
  undefined *puStack_7f0;
  undefined *puStack_7e8;
  code *pcStack_7e0;
  undefined *puStack_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_77c;
  undefined8 uStack_778;
  undefined **ppuStack_770;
  undefined4 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined1 auStack_750 [192];
  code **ppcStack_690;
  long lStack_688;
  undefined8 uStack_680;
  undefined4 uStack_66c;
  char **ppcStack_668;
  uint uStack_660;
  uint uStack_65c;
  ulong uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_588;
  uint uStack_578;
  undefined8 uStack_498;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 auStack_478 [1032];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar24 = (long *)(param_1 + 0x38);
  lVar18 = *plVar24;
  *plVar24 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar18 != 0) {
    piVar19 = (int *)(lVar18 + -4);
    do {
      iVar15 = *piVar19;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar9) {
        *piVar19 = iVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 + -1 == 0) {
      _free(*(undefined8 *)(lVar18 + -0xc));
    }
  }
  bStack_8c1 = 0;
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  FUN_109246310(&pcStack_8e0,0x1000);
  puStack_480 = (undefined1 *)0x408;
  puStack_488 = auStack_478;
  _bzero(&ppcStack_690,0x208);
  func_0x0001081d9e74(&ppcStack_690);
  uStack_630 = 0;
  uStack_638 = 0;
  uStack_620 = 0;
  uStack_628 = 0;
  uStack_610 = 0;
  uStack_618 = 0;
  uStack_600 = 0;
  uStack_608 = 0;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_5e0 = 0;
  uStack_5e8 = 0;
  uStack_498 = 0;
  uStack_5d8 = 0;
  ppcStack_668 = (char **)0x0;
  uStack_650 = 0x3ff0000000000000;
  uStack_66c = 100;
  puStack_7e8 = &UNK_1081d5148;
  pcStack_7e0 = (code *)&UNK_1081d51c4;
  puStack_7d8 = &UNK_1081d5294;
  uStack_77c = 0;
  uStack_7d0 = 0;
  uStack_778 = 0;
  ppuStack_770 = &PTR_DAT_110a2f080;
  uStack_768 = 0x80;
  uStack_760 = 0;
  uStack_758 = 0;
  ppcStack_690 = &pcStack_7f8;
  uStack_680 = 0;
  pcStack_7f8 = FUN_109b77dbc;
  puStack_7f0 = &UNK_1081d50e4;
  if (*(long *)(param_1 + 0x28) == 0) {
    pcVar23 = "";
    if (*(char **)(param_1 + 0x18) != (char *)0x0) {
      pcVar23 = *(char **)(param_1 + 0x18);
    }
    _fopen(pcVar23,&UNK_10f5173d2);
    if (pcVar23 == (char *)0x0) {
      pcVar23 = (char *)0x0;
      goto LAB_109b78894;
    }
    func_0x0001081c8928(&ppcStack_690,pcVar23);
  }
  else {
    pcVar23 = (char *)0x0;
    ppcStack_8f0 = &pcStack_8e0;
    ppcStack_668 = &pcStack_918;
    uStack_908 = 0x109b78a38;
    pcStack_900 = FUN_109b78a3c;
    uStack_8f8 = 0x109b78ac0;
    lStack_910 = (long)pcStack_8d8 - (long)pcStack_8e0;
    pcStack_918 = pcStack_8e0;
    lStack_8e8 = *(long *)(param_1 + 0x28);
  }
  iVar15 = (int)auStack_750;
  _setjmp();
  if (iVar15 == 0) {
    uVar1 = *param_2 >> 3 & 0x1ff;
    bVar9 = (int)((uint)(uVar1 == 0) << 0x1f) < 0;
    bVar10 = (int)((uint)(uVar1 == 0) << 0x1f) < 0;
    uStack_658 = (ulong)CONCAT14((~-bVar10 & 2U) + bVar10,(uint)(~-bVar9 & 3) + (uint)bVar9);
    lVar18 = *param_3;
    if (param_3[1] - lVar18 == 0) {
      uVar22 = 0x5f;
      bVar9 = true;
      bVar10 = true;
      uVar17 = 0;
    }
    else {
      uVar22 = 0x5f;
      uVar20 = 0;
      iVar16 = 0;
      iVar15 = 0;
      uVar17 = 0;
      do {
        iVar6 = *(int *)(lVar18 + uVar20 * 4);
        if (iVar6 < 3) {
          if (iVar6 == 1) {
            uVar22 = *(uint *)(lVar18 + uVar20 * 4 + 4);
            uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
            if (99 < (int)uVar22) {
              uVar22 = 100;
            }
          }
          else if (iVar6 == 2) {
            iVar15 = *(int *)(lVar18 + uVar20 * 4 + 4);
          }
        }
        else if (iVar6 == 3) {
          iVar16 = *(int *)(lVar18 + uVar20 * 4 + 4);
        }
        else if (iVar6 == 4) {
          uVar17 = *(uint *)(lVar18 + uVar20 * 4 + 4);
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar17) {
            uVar17 = 0xffff;
          }
        }
        else if (iVar6 == 5) {
          uVar5 = *(uint *)(lVar18 + uVar20 * 4 + 4);
          uVar2 = uVar5;
          if (99 < uVar5) {
            uVar2 = 100;
          }
          if (-1 < (int)uVar5) {
            uVar22 = uVar2;
          }
        }
        uVar20 = uVar20 + 2;
      } while (uVar20 < (ulong)(param_3[1] - lVar18 >> 2));
      bVar9 = iVar15 == 0;
      bVar10 = iVar16 == 0;
    }
    uStack_660 = uVar4;
    uStack_65c = uVar3;
    func_0x0001081c39ec(&ppcStack_690);
    uStack_578 = uVar17;
    func_0x0001081c395c(&ppcStack_690,uVar22,1);
    if (!bVar9) {
      func_0x0001081c3ec4(&ppcStack_690);
    }
    if (!bVar10) {
      uStack_588 = 1;
    }
    func_0x0001081b0510(&ppcStack_690,1);
    puVar11 = puStack_480;
    if ((uVar1 != 0) &&
       (puVar8 = (undefined1 *)((long)(int)uVar4 * 3), puVar11 = puVar8, puStack_480 < puVar8)) {
      if (puStack_488 != auStack_478) {
        if (puStack_488 != (undefined1 *)0x0) {
          __ZdaPv();
        }
        puStack_480 = (undefined1 *)0x408;
        puStack_488 = auStack_478;
      }
      puVar11 = puStack_480;
      if (0x408 < (uint)puVar8) {
        puVar11 = puVar8;
        __Znam();
        puStack_488 = puVar11;
        puVar11 = puVar8;
      }
    }
    puStack_480 = puVar11;
    puVar11 = puStack_488;
    if (0 < (int)uVar3) {
      uVar20 = 0;
      do {
        apuStack_8c0[0] =
             (undefined1 *)(*(long *)(param_2 + 4) + *(long *)(param_2 + 0x14) * uVar20);
        if (uVar1 == 3) {
          func_0x000109b81c5c(apuStack_8c0[0],0,puVar11,0,(ulong)uVar4 | 0x100000000,2);
LAB_109b7885c:
          apuStack_8c0[0] = puVar11;
        }
        else if (uVar1 == 2) {
          func_0x000109b81d88(apuStack_8c0[0],0,puVar11,0,(ulong)uVar4 | 0x100000000);
          goto LAB_109b7885c;
        }
        func_0x0001081b05b8(&ppcStack_690,apuStack_8c0,1);
        uVar20 = uVar20 + 1;
      } while (uVar3 != uVar20);
    }
    func_0x0001081b02f8(&ppcStack_690);
    bStack_8c1 = 1;
    pcStack_930 = pcVar23;
    puStack_920 = auStack_478;
  }
LAB_109b78894:
  if ((bStack_8c1 & 1) == 0) {
    (*pcStack_7e0)(&ppcStack_690,apuStack_8c0);
    lVar18 = *plVar24;
    *plVar24 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar18 != 0) {
      piVar19 = (int *)(lVar18 + -4);
      do {
        iVar15 = *piVar19;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar9) {
          *piVar19 = iVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar15 + -1 == 0) {
        _free(*(undefined8 *)(lVar18 + -0xc));
      }
    }
    ppuVar12 = apuStack_8c0;
    _strlen();
    puVar13 = (undefined4 *)(((ulong)ppuVar12 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    *puVar13 = 1;
    *(undefined4 **)(param_1 + 0x38) = puVar13 + 1;
    *(undefined1 ***)(param_1 + 0x40) = ppuVar12;
    *(undefined1 *)((long)(puVar13 + 1) + (long)ppuVar12) = 0;
    _memcpy(*(undefined8 *)(param_1 + 0x38),apuStack_8c0,ppuVar12);
  }
  if (lStack_688 != 0) {
    (**(code **)(lStack_688 + 0x50))(&ppcStack_690);
  }
  pcVar21 = (char *)(ulong)bStack_8c1;
  if ((puStack_488 != auStack_478) && (puStack_488 != (undefined1 *)0x0)) {
    __ZdaPv();
  }
  pcVar14 = pcStack_8e0;
  if (pcStack_8e0 != (char *)0x0) {
    pcStack_8d8 = pcStack_8e0;
    __ZdlPv();
  }
  if (pcVar23 != (char *)0x0) {
    _fclose(pcVar23);
    pcVar14 = pcVar23;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if ((puStack_488 != puStack_920) && (puStack_488 != (undefined1 *)0x0)) {
      __ZdaPv();
    }
    if (pcStack_8e0 != (char *)0x0) {
      pcStack_8d8 = pcStack_8e0;
      __ZdlPv();
    }
    if (pcStack_930 != (char *)0x0) {
      _fclose(pcStack_930);
    }
    __Unwind_Resume(pcVar14);
    return pcVar14;
  }
  return pcVar21;
}



/* Entry: 109b78a00; end: 109b78a3b;  */

void FUN_109b78a00(void)

{
  return;
}



/* Entry: 109b78a3c; end: 109b78b4f;  */

undefined8 FUN_109b78a3c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  plVar2 = (long *)puVar6[6];
  lVar4 = *plVar2;
  uVar7 = plVar2[1] - lVar4;
  lVar3 = *(long *)puVar6[5];
  lVar5 = ((long *)puVar6[5])[1] - lVar3;
  uVar1 = lVar5 + uVar7;
  if (uVar7 < uVar1) {
    func_0x000107c27d58(plVar2,lVar5);
    lVar4 = *(long *)puVar6[6];
    lVar3 = *(long *)puVar6[5];
  }
  else if (uVar7 != uVar1) {
    plVar2[1] = lVar4 + uVar1;
  }
  _memcpy(lVar4 + uVar7,lVar3,lVar5);
  *puVar6 = *(undefined8 *)puVar6[5];
  puVar6[1] = lVar5;
  return 1;
}



/* Entry: 109b78b50; end: 109b78b57;  */

void FUN_109b78b50(void)

{
  return;
}



/* Entry: 109b78b58; end: 109b78b93;  */

void FUN_109b78b58(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b78b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b78b94; end: 109b78b9b;  */

void FUN_109b78b94(void)

{
  return;
}



/* Entry: 109b78b9c; end: 109b78cf7;  */

void FUN_109b78b9c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b78bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b78cf8; end: 109b78e1b;  */

ulong FUN_109b78cf8(long param_1,ulong param_2,int *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  int *piVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  byte bStack_81;
  long alStack_30 [2];
  
  if ((param_1 == 0) || (lVar16 = *(long *)(param_1 + 0x100), lVar16 == 0)) {
    puVar8 = (undefined8 *)0xc;
    func_0x000107c2ae8c();
    *puVar8 = 0x6f63656400000001;
    alStack_30[0] = (long)puVar8 + 4;
    alStack_30[1] = 7;
    *(undefined1 *)((long)puVar8 + 0xb) = 0;
    *(undefined4 *)((long)puVar8 + 7) = 0x7265646f;
    FUN_109ac3188(0xffffff29,alStack_30,&UNK_10f5a1250,&UNK_10f5a1260,0x82);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109b78de4);
    (*pcVar6)();
  }
  if ((int)*(uint *)(lVar16 + 0x3c) < 1) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar16 + 0x80) + (ulong)*(uint *)(lVar16 + 0x3c) * 8 + -8);
  }
  if ((ulong)(*(long *)(lVar16 + 200) + (long)param_3) <=
      (ulong)(lVar15 * (long)*(int *)(lVar16 + 0x40) * (long)*(int *)(lVar16 + 0x44))) {
    _memcpy(param_2,*(long *)(lVar16 + 0x48) + *(long *)(lVar16 + 200),param_3);
    *(long *)(lVar16 + 200) = *(long *)(lVar16 + 200) + (long)param_3;
    return param_2;
  }
  FUN_109b6244c(param_1,&UNK_10f5a12e6);
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  do {
    iVar7 = *param_3;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar5) {
      *param_3 = iVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 + -1 == 0) {
    _free(*(undefined8 *)(param_3 + -2));
  }
  __Unwind_Resume();
  bStack_81 = 0;
  func_0x000109b78bd8();
  puVar8 = (undefined8 *)&UNK_10f47cea1;
  FUN_109b6474c(&UNK_10f47cea1,0,0,0,0,0,0);
  if (puVar8 == (undefined8 *)0x0) goto LAB_109b78f6c;
  if ((code *)puVar8[0x7d] == (code *)0x0) {
    puVar9 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    puVar9 = puVar8;
    (*(code *)puVar8[0x7d])(puVar8,0x168);
  }
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0x2c] = 0;
    puVar9[0x29] = 0;
    puVar9[0x28] = 0;
    puVar9[0x2b] = 0;
    puVar9[0x2a] = 0;
    puVar9[0x25] = 0;
    puVar9[0x24] = 0;
    puVar9[0x27] = 0;
    puVar9[0x26] = 0;
    puVar9[0x21] = 0;
    puVar9[0x20] = 0;
    puVar9[0x23] = 0;
    puVar9[0x22] = 0;
    puVar9[0x1d] = 0;
    puVar9[0x1c] = 0;
    puVar9[0x1f] = 0;
    puVar9[0x1e] = 0;
    puVar9[0x19] = 0;
    puVar9[0x18] = 0;
    puVar9[0x1b] = 0;
    puVar9[0x1a] = 0;
    puVar9[0x15] = 0;
    puVar9[0x14] = 0;
    puVar9[0x17] = 0;
    puVar9[0x16] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
  }
  if ((code *)puVar8[0x7d] == (code *)0x0) {
    puVar10 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    puVar10 = puVar8;
    (*(code *)puVar8[0x7d])(puVar8,0x168);
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[0x2c] = 0;
    puVar10[0x29] = 0;
    puVar10[0x28] = 0;
    puVar10[0x2b] = 0;
    puVar10[0x2a] = 0;
    puVar10[0x25] = 0;
    puVar10[0x24] = 0;
    puVar10[0x27] = 0;
    puVar10[0x26] = 0;
    puVar10[0x21] = 0;
    puVar10[0x20] = 0;
    puVar10[0x23] = 0;
    puVar10[0x22] = 0;
    puVar10[0x1d] = 0;
    puVar10[0x1c] = 0;
    puVar10[0x1f] = 0;
    puVar10[0x1e] = 0;
    puVar10[0x19] = 0;
    puVar10[0x18] = 0;
    puVar10[0x1b] = 0;
    puVar10[0x1a] = 0;
    puVar10[0x15] = 0;
    puVar10[0x14] = 0;
    puVar10[0x17] = 0;
    puVar10[0x16] = 0;
    puVar10[0x11] = 0;
    puVar10[0x10] = 0;
    puVar10[0x13] = 0;
    puVar10[0x12] = 0;
    puVar10[0xd] = 0;
    puVar10[0xc] = 0;
    puVar10[0xf] = 0;
    puVar10[0xe] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
  }
  *(undefined8 **)(param_1 + 0xa0) = puVar8;
  *(undefined8 **)(param_1 + 0xa8) = puVar9;
  *(undefined8 **)(param_1 + 0xb0) = puVar10;
  *(undefined8 *)(param_1 + 200) = 0;
  if ((puVar9 == (undefined8 *)0x0) || (puVar10 == (undefined8 *)0x0)) goto LAB_109b78f6c;
  puVar10 = puVar8;
  FUN_109b62cf4(puVar8,PTR__longjmp_11034c548,0xc0);
  iVar7 = (int)puVar10;
  _setjmp();
  if (iVar7 != 0) goto LAB_109b78f6c;
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_109b79018:
    pcVar14 = "";
    if (*(char **)(param_1 + 0x18) != (char *)0x0) {
      pcVar14 = *(char **)(param_1 + 0x18);
    }
    _fopen(pcVar14,&UNK_10f432965);
    *(char **)(param_1 + 0xb8) = pcVar14;
    if (pcVar14 != (char *)0x0) {
      lVar16 = 0x100;
      goto LAB_109b79048;
    }
  }
  else {
    uVar12 = (ulong)*(uint *)(param_1 + 0x3c);
    if ((int)*(uint *)(param_1 + 0x3c) < 3) {
      lVar16 = (long)*(int *)(param_1 + 0x44) * (long)*(int *)(param_1 + 0x40);
    }
    else {
      lVar16 = 1;
      piVar13 = *(int **)(param_1 + 0x78);
      do {
        lVar16 = lVar16 * *piVar13;
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 1;
      } while (uVar12 != 0);
    }
    if (lVar16 == 0) goto LAB_109b79018;
    puVar8[0x1f] = FUN_109b78cf8;
    puVar8[0x20] = param_1;
    if (puVar8[0x1e] != 0) {
      puVar8[0x1e] = 0;
      FUN_109b62608(puVar8,&UNK_10f59faa1);
    }
    lVar16 = 0x288;
    pcVar14 = (char *)0x0;
LAB_109b79048:
    *(char **)((long)puVar8 + lVar16) = pcVar14;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_109b79094:
    if (*(long *)(param_1 + 0xb8) == 0) goto LAB_109b78f6c;
  }
  else {
    uVar12 = (ulong)*(uint *)(param_1 + 0x3c);
    if ((int)*(uint *)(param_1 + 0x3c) < 3) {
      lVar16 = (long)*(int *)(param_1 + 0x44) * (long)*(int *)(param_1 + 0x40);
    }
    else {
      lVar16 = 1;
      piVar13 = *(int **)(param_1 + 0x78);
      do {
        lVar16 = lVar16 * *piVar13;
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 1;
      } while (uVar12 != 0);
    }
    if (lVar16 == 0) goto LAB_109b79094;
  }
  FUN_109b647bc(puVar8,puVar9);
  uVar11 = *(undefined4 *)puVar9;
  uVar1 = *(undefined4 *)((long)puVar9 + 4);
  bVar2 = *(byte *)((long)puVar9 + 0x24);
  bVar3 = *(byte *)((long)puVar9 + 0x25);
  FUN_109b61198(puVar8,uVar11,uVar1,bVar2,bVar3,*(undefined1 *)(puVar9 + 5),
                *(undefined1 *)((long)puVar9 + 0x26),*(undefined1 *)((long)puVar9 + 0x27));
  *(undefined4 *)(param_1 + 8) = uVar11;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_1 + 0xc0) = (uint)bVar3;
  *(uint *)(param_1 + 0x9c) = (uint)bVar2;
  if ((8 < bVar2) && (bVar2 != 0x10)) goto LAB_109b78f6c;
  if (bVar3 - 2 < 2) {
    if (((*(byte *)(puVar9 + 1) >> 4 & 1) != 0) && (*(short *)((long)puVar9 + 0x22) != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0x18;
      goto LAB_109b79140;
    }
    *(undefined4 *)(param_1 + 0x10) = 0x10;
    uVar11 = 0x12;
  }
  else if ((bVar3 == 4) || (bVar3 == 6)) {
    *(undefined4 *)(param_1 + 0x10) = 0x18;
LAB_109b79140:
    uVar11 = 0x1a;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar11 = 2;
  }
  if (bVar2 == 0x10) {
    *(undefined4 *)(param_1 + 0x10) = uVar11;
  }
  bStack_81 = 1;
LAB_109b78f6c:
  if (bStack_81 == 0) {
    func_0x000109b78bd8(param_1);
  }
  return (ulong)bStack_81;
}



/* Entry: 109b78e1c; end: 109b79177;  */

char FUN_109b78e1c(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  char *pcVar12;
  char cStack_51;
  
  cStack_51 = '\0';
  func_0x000109b78bd8();
  puVar5 = (undefined8 *)&UNK_10f47cea1;
  FUN_109b6474c(&UNK_10f47cea1,0,0,0,0,0,0);
  if (puVar5 == (undefined8 *)0x0) goto LAB_109b78f6c;
  if ((code *)puVar5[0x7d] == (code *)0x0) {
    puVar6 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    puVar6 = puVar5;
    (*(code *)puVar5[0x7d])(puVar5,0x168);
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0x2c] = 0;
    puVar6[0x29] = 0;
    puVar6[0x28] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x25] = 0;
    puVar6[0x24] = 0;
    puVar6[0x27] = 0;
    puVar6[0x26] = 0;
    puVar6[0x21] = 0;
    puVar6[0x20] = 0;
    puVar6[0x23] = 0;
    puVar6[0x22] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x19] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x15] = 0;
    puVar6[0x14] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
  }
  if ((code *)puVar5[0x7d] == (code *)0x0) {
    puVar7 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    puVar7 = puVar5;
    (*(code *)puVar5[0x7d])(puVar5,0x168);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0x2c] = 0;
    puVar7[0x29] = 0;
    puVar7[0x28] = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2a] = 0;
    puVar7[0x25] = 0;
    puVar7[0x24] = 0;
    puVar7[0x27] = 0;
    puVar7[0x26] = 0;
    puVar7[0x21] = 0;
    puVar7[0x20] = 0;
    puVar7[0x23] = 0;
    puVar7[0x22] = 0;
    puVar7[0x1d] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x1f] = 0;
    puVar7[0x1e] = 0;
    puVar7[0x19] = 0;
    puVar7[0x18] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x15] = 0;
    puVar7[0x14] = 0;
    puVar7[0x17] = 0;
    puVar7[0x16] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
  }
  *(undefined8 **)(param_1 + 0xa0) = puVar5;
  *(undefined8 **)(param_1 + 0xa8) = puVar6;
  *(undefined8 **)(param_1 + 0xb0) = puVar7;
  *(undefined8 *)(param_1 + 200) = 0;
  if ((puVar6 == (undefined8 *)0x0) || (puVar7 == (undefined8 *)0x0)) goto LAB_109b78f6c;
  puVar7 = puVar5;
  FUN_109b62cf4(puVar5,PTR__longjmp_11034c548,0xc0);
  iVar4 = (int)puVar7;
  _setjmp();
  if (iVar4 != 0) goto LAB_109b78f6c;
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_109b79018:
    pcVar12 = "";
    if (*(char **)(param_1 + 0x18) != (char *)0x0) {
      pcVar12 = *(char **)(param_1 + 0x18);
    }
    _fopen(pcVar12,&UNK_10f432965);
    *(char **)(param_1 + 0xb8) = pcVar12;
    if (pcVar12 != (char *)0x0) {
      lVar11 = 0x100;
      goto LAB_109b79048;
    }
  }
  else {
    uVar9 = (ulong)*(uint *)(param_1 + 0x3c);
    if ((int)*(uint *)(param_1 + 0x3c) < 3) {
      lVar11 = (long)*(int *)(param_1 + 0x44) * (long)*(int *)(param_1 + 0x40);
    }
    else {
      lVar11 = 1;
      piVar10 = *(int **)(param_1 + 0x78);
      do {
        lVar11 = lVar11 * *piVar10;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 1;
      } while (uVar9 != 0);
    }
    if (lVar11 == 0) goto LAB_109b79018;
    puVar5[0x1f] = FUN_109b78cf8;
    puVar5[0x20] = param_1;
    if (puVar5[0x1e] != 0) {
      puVar5[0x1e] = 0;
      FUN_109b62608(puVar5,&UNK_10f59faa1);
    }
    lVar11 = 0x288;
    pcVar12 = (char *)0x0;
LAB_109b79048:
    *(char **)((long)puVar5 + lVar11) = pcVar12;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_109b79094:
    if (*(long *)(param_1 + 0xb8) == 0) goto LAB_109b78f6c;
  }
  else {
    uVar9 = (ulong)*(uint *)(param_1 + 0x3c);
    if ((int)*(uint *)(param_1 + 0x3c) < 3) {
      lVar11 = (long)*(int *)(param_1 + 0x44) * (long)*(int *)(param_1 + 0x40);
    }
    else {
      lVar11 = 1;
      piVar10 = *(int **)(param_1 + 0x78);
      do {
        lVar11 = lVar11 * *piVar10;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 1;
      } while (uVar9 != 0);
    }
    if (lVar11 == 0) goto LAB_109b79094;
  }
  FUN_109b647bc(puVar5,puVar6);
  uVar8 = *(undefined4 *)puVar6;
  uVar1 = *(undefined4 *)((long)puVar6 + 4);
  bVar2 = *(byte *)((long)puVar6 + 0x24);
  bVar3 = *(byte *)((long)puVar6 + 0x25);
  FUN_109b61198(puVar5,uVar8,uVar1,bVar2,bVar3,*(undefined1 *)(puVar6 + 5),
                *(undefined1 *)((long)puVar6 + 0x26),*(undefined1 *)((long)puVar6 + 0x27));
  *(undefined4 *)(param_1 + 8) = uVar8;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_1 + 0xc0) = (uint)bVar3;
  *(uint *)(param_1 + 0x9c) = (uint)bVar2;
  if ((8 < bVar2) && (bVar2 != 0x10)) goto LAB_109b78f6c;
  if (bVar3 - 2 < 2) {
    if (((*(byte *)(puVar6 + 1) >> 4 & 1) != 0) && (*(short *)((long)puVar6 + 0x22) != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0x18;
      goto LAB_109b79140;
    }
    *(undefined4 *)(param_1 + 0x10) = 0x10;
    uVar8 = 0x12;
  }
  else if ((bVar3 == 4) || (bVar3 == 6)) {
    *(undefined4 *)(param_1 + 0x10) = 0x18;
LAB_109b79140:
    uVar8 = 0x1a;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar8 = 2;
  }
  if (bVar2 == 0x10) {
    *(undefined4 *)(param_1 + 0x10) = uVar8;
  }
  cStack_51 = '\x01';
LAB_109b78f6c:
  if (cStack_51 == '\0') {
    func_0x000109b78bd8(param_1);
  }
  return cStack_51;
}



/* Entry: 109b79178; end: 109b793df;  */

undefined1 FUN_109b79178(long param_1,uint *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long alStack_4b0 [136];
  undefined1 uStack_69;
  long lVar4;
  
  uStack_69 = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  plVar6 = alStack_4b0;
  if (0x88 < uVar1) {
    plVar6 = (long *)((long)(int)uVar1 << 3);
    if ((int)uVar1 < 0) {
      plVar6 = (long *)0xffffffffffffffff;
    }
    __Znam();
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  if ((((lVar7 == 0) || (lVar13 = *(long *)(param_1 + 0xa8), lVar13 == 0)) ||
      (lVar11 = *(long *)(param_1 + 0xb0), lVar11 == 0)) ||
     ((uVar1 == 0 || (*(int *)(param_1 + 8) == 0)))) goto LAB_109b79378;
  uVar1 = *param_2;
  lVar10 = *(long *)(param_2 + 4);
  uVar12 = *(undefined8 *)(param_2 + 0x14);
  lVar4 = lVar7;
  FUN_109b62cf4(lVar7,PTR__longjmp_11034c548,0xc0);
  iVar3 = (int)lVar4;
  _setjmp();
  if (iVar3 != 0) goto LAB_109b79378;
  if (((*param_2 & 7) == 0) && (*(int *)(param_1 + 0x9c) == 0x10)) {
    FUN_109b659f4(lVar7);
  }
  else if (*(char *)(lVar7 + 0x260) == '\x10') {
    *(uint *)(lVar7 + 300) = *(uint *)(lVar7 + 300) | 0x10;
  }
  if ((*param_2 & 0xff8) < 0x18) {
    func_0x000109b65a24();
  }
  else {
    func_0x000109b65abc(lVar7);
  }
  uVar1 = uVar1 & 0xff8;
  uVar5 = *(uint *)(param_1 + 0xc0);
  if (uVar5 == 3) {
    func_0x000109b65a54(lVar7);
    uVar5 = *(uint *)(param_1 + 0xc0);
  }
  if ((uVar5 >> 1 & 1) == 0) {
    if (((*(int *)(param_1 + 0x9c) < 8) &&
        (func_0x000109b65a8c(lVar7), (*(byte *)(param_1 + 0xc0) >> 1 & 1) != 0)) && (uVar1 != 0)) {
LAB_109b792e4:
      *(uint *)(lVar7 + 300) = *(uint *)(lVar7 + 300) | 1;
    }
    else {
      if (uVar1 == 0) goto LAB_109b792f4;
      FUN_109b65af4(lVar7);
    }
  }
  else {
    if (uVar1 != 0) goto LAB_109b792e4;
LAB_109b792f4:
    func_0x000109b65b50(lVar7,1,0x74cc,0xe54c);
  }
  if (*(char *)(lVar7 + 0x25c) != '\0') {
    *(uint *)(lVar7 + 300) = *(uint *)(lVar7 + 300) | 2;
  }
  FUN_109b64cc8(lVar7,lVar13);
  uVar8 = (ulong)*(uint *)(param_1 + 0xc);
  if (0 < (int)*(uint *)(param_1 + 0xc)) {
    plVar9 = plVar6;
    do {
      *plVar9 = lVar10;
      lVar10 = lVar10 + (int)uVar12;
      uVar8 = uVar8 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar8 != 0);
  }
  FUN_109b65140(lVar7,plVar6);
  FUN_109b6522c(lVar7,lVar11);
  uStack_69 = 1;
LAB_109b79378:
  func_0x000109b78bd8(param_1);
  uVar2 = uStack_69;
  if (plVar6 != alStack_4b0 && plVar6 != (long *)0x0) {
    __ZdaPv();
  }
  return uVar2;
}



/* Entry: 109b793e0; end: 109b793e3;  */

undefined8 * FUN_109b793e0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b793e4; end: 109b793f7;  */

void FUN_109b793e4(void)

{
  FUN_109b76b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b793f8; end: 109b79403;  */

bool FUN_109b793f8(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffffffd) == 0;
}



/* Entry: 109b79404; end: 109b7945b;  */

void FUN_109b79404(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aedc(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2aee4(&lStack_30);
  return;
}



/* Entry: 109b7945c; end: 109b79587;  */

void FUN_109b7945c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    return;
  }
  if (((param_1 != 0) && (lVar7 = *(long *)(param_1 + 0x100), lVar7 != 0)) &&
     (plVar3 = *(long **)(lVar7 + 0x28), plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar6 = plVar3[1] - lVar5;
    uVar1 = uVar6 + param_3;
    if (uVar6 < uVar1) {
      func_0x000107c27d58(plVar3,param_3);
      lVar5 = **(long **)(lVar7 + 0x28);
    }
    else if (uVar6 != uVar1) {
      plVar3[1] = lVar5 + uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(lVar5 + uVar6,param_2,param_3);
    return;
  }
  puVar4 = (undefined4 *)0x20;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_40 = puVar4 + 1;
  uStack_38 = 0x19;
  *(undefined1 *)((long)puVar4 + 0x1d) = 0;
  *(undefined8 *)(puVar4 + 3) = 0x646f636e65202626;
  *(undefined8 *)(puVar4 + 1) = 0x207265646f636e65;
  *(undefined8 *)((long)puVar4 + 0x15) = 0x6675625f6d3e2d72;
  *(undefined8 *)((long)puVar4 + 0xd) = 0x65646f636e652026;
  FUN_109ac3188(0xffffff29,&puStack_40,&UNK_10f5a1347,&UNK_10f5a1260,0x149);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109b79558);
  (*pcVar2)();
}



/* Entry: 109b79588; end: 109b7958b;  */

void FUN_109b79588(void)

{
  return;
}



/* Entry: 109b7958c; end: 109b799fb;  */

/* WARNING: Removing unreachable block (ram,0x000109b798e8) */
/* WARNING: Removing unreachable block (ram,0x000109b798f0) */
/* WARNING: Removing unreachable block (ram,0x000109b798f4) */

undefined1 FUN_109b7958c(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puStack_4d8;
  undefined1 auStack_4c8 [1095];
  undefined1 uStack_81;
  char *pcStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  undefined8 *puVar8;
  
  puVar6 = (undefined8 *)&UNK_10f47cea1;
  FUN_109b708a4(&UNK_10f47cea1,0,0,0,0,0,0);
  puStack_78 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar19 = (ulong)(int)uVar1;
  uVar15 = *param_2;
  uStack_81 = 0;
  uVar10 = 0;
  if ((uVar15 & 5) == 0) {
    puStack_4d8 = auStack_4c8;
    apuStack_70[0] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      if ((code *)puVar6[0x7d] == (code *)0x0) {
        puVar7 = (undefined8 *)0x168;
        _malloc();
      }
      else {
        puVar7 = puVar6;
        (*(code *)puVar6[0x7d])(puVar6,0x168);
      }
      if (puVar7 == (undefined8 *)0x0) {
        puStack_78 = (undefined8 *)0x0;
      }
      else {
        puVar7[0x2c] = 0;
        puVar7[0x29] = 0;
        puVar7[0x28] = 0;
        puVar7[0x2b] = 0;
        puVar7[0x2a] = 0;
        puVar7[0x25] = 0;
        puVar7[0x24] = 0;
        puVar7[0x27] = 0;
        puVar7[0x26] = 0;
        puVar7[0x21] = 0;
        puVar7[0x20] = 0;
        puVar7[0x23] = 0;
        puVar7[0x22] = 0;
        puVar7[0x1d] = 0;
        puVar7[0x1c] = 0;
        puVar7[0x1f] = 0;
        puVar7[0x1e] = 0;
        puVar7[0x19] = 0;
        puVar7[0x18] = 0;
        puVar7[0x1b] = 0;
        puVar7[0x1a] = 0;
        puVar7[0x15] = 0;
        puVar7[0x14] = 0;
        puVar7[0x17] = 0;
        puVar7[0x16] = 0;
        puVar7[0x11] = 0;
        puVar7[0x10] = 0;
        puVar7[0x13] = 0;
        puVar7[0x12] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar8 = puVar6;
        puStack_78 = puVar7;
        FUN_109b62cf4(puVar6,PTR__longjmp_11034c548,0xc0);
        iVar5 = (int)puVar8;
        _setjmp();
        if (iVar5 == 0) {
          if (*(long *)(param_1 + 0x28) == 0) {
            pcVar9 = "";
            if (*(char **)(param_1 + 0x18) != (char *)0x0) {
              pcVar9 = *(char **)(param_1 + 0x18);
            }
            _fopen(pcVar9,&UNK_10f5173d2);
            pcStack_80 = pcVar9;
            if (pcVar9 != (char *)0x0) {
              puVar6[0x20] = pcVar9;
            }
          }
          else {
            puVar6[0x20] = param_1;
            puVar6[0x1e] = FUN_109b7945c;
            puVar6[0x51] = FUN_109b79588;
            if (puVar6[0x1f] != 0) {
              puVar6[0x1f] = 0;
              FUN_109b62608(puVar6,&UNK_10f5a077f);
            }
          }
          lVar17 = *param_3;
          if (param_3[1] - lVar17 == 0) {
            uVar12 = 3;
            uVar11 = 0xffffffff;
            bVar4 = false;
          }
          else {
            bVar4 = false;
            uVar11 = 0xffffffff;
            uVar12 = 3;
            uVar18 = 0;
            do {
              iVar5 = *(int *)(lVar17 + uVar18 * 4);
              if (iVar5 == 0x12) {
                bVar4 = *(int *)(lVar17 + uVar18 * 4 + 4) != 0;
              }
              else if (iVar5 == 0x11) {
                uVar12 = *(uint *)(lVar17 + uVar18 * 4 + 4);
                uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
                if (3 < (int)uVar12) {
                  uVar12 = 4;
                }
              }
              else if ((iVar5 == 0x10) &&
                      (uVar11 = *(uint *)(lVar17 + uVar18 * 4 + 4),
                      uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU), 8 < (int)uVar11)) {
                uVar11 = 9;
              }
              uVar18 = uVar18 + 2;
            } while (uVar18 < (ulong)(param_3[1] - lVar17 >> 2));
          }
          if ((*(long *)(param_1 + 0x28) != 0) || (pcStack_80 != (char *)0x0)) {
            if ((int)uVar11 < 0) {
              FUN_109b70ef8(puVar6,0,0x10);
              uVar11 = 1;
            }
            uVar3 = uVar15 >> 3 & 0x1ff;
            *(uint *)((long)puVar6 + 0x1b4) = uVar11;
            *(uint *)(puVar6 + 0x25) = *(uint *)(puVar6 + 0x25) | 1;
            *(uint *)((long)puVar6 + 0x1c4) = uVar12;
            uVar13 = 8;
            if (bVar4) {
              uVar13 = 1;
            }
            if ((uVar15 & 7) != 0) {
              uVar13 = 0x10;
            }
            uVar15 = uVar3;
            if (uVar3 != 2) {
              uVar15 = 6;
            }
            uVar11 = 0;
            if (uVar3 != 0) {
              uVar11 = uVar15;
            }
            FUN_109b6e788(puVar6,puVar7,uVar2,uVar19,uVar13,uVar11,0,0);
            func_0x000109b70368(puVar6,puVar7);
            uVar2 = *(uint *)((long)puVar6 + 300);
            if ((bool)(bVar4 & *(byte *)(puVar6 + 0x4c) < 8)) {
              *(uint *)((long)puVar6 + 300) = uVar2 | 4;
              *(undefined1 *)((long)puVar6 + 0x261) = 8;
              uVar15 = 5;
            }
            else {
              uVar15 = 0x11;
              if (*(byte *)(puVar6 + 0x4c) != 0x10) {
                uVar15 = 1;
              }
            }
            *(uint *)((long)puVar6 + 300) = uVar2 | uVar15;
            if ((0x88 < uVar19) && (0x88 < uVar1)) {
              puStack_4d8 = (undefined1 *)(uVar19 << 3);
              if ((int)uVar1 < 0) {
                puStack_4d8 = (undefined1 *)0xffffffffffffffff;
              }
              __Znam();
            }
            if (0 < (int)uVar1) {
              lVar14 = *(long *)(param_2 + 0x14);
              lVar17 = 0;
              lVar16 = 0;
              do {
                *(long *)(puStack_4d8 + lVar17) = *(long *)(param_2 + 4) + lVar16;
                lVar17 = lVar17 + 8;
                lVar16 = lVar16 + lVar14;
              } while (uVar19 * 8 - lVar17 != 0);
            }
            FUN_109b70ce4(puVar6,puStack_4d8);
            func_0x000109b70728(puVar6,puVar7);
            uStack_81 = 1;
          }
        }
      }
    }
    func_0x000109b70dd0(apuStack_70,&puStack_78);
    if (pcStack_80 != (char *)0x0) {
      _fclose(pcStack_80);
    }
    uVar10 = uStack_81;
    if ((puStack_4d8 != auStack_4c8) && (puStack_4d8 != (undefined1 *)0x0)) {
      __ZdaPv();
    }
  }
  return uVar10;
}



/* Entry: 109b799fc; end: 109b79a03;  */

void FUN_109b799fc(void)

{
  return;
}



/* Entry: 109b79a04; end: 109b79a3f;  */

void FUN_109b79a04(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b79a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b79a40; end: 109b79a47;  */

void FUN_109b79a40(void)

{
  return;
}



/* Entry: 109b79a48; end: 109b79adb;  */

void FUN_109b79a48(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b79a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b79adc; end: 109b79adf;  */

undefined8 * FUN_109b79adc(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_110b291e0;
  if (param_1[0x19] != 0) {
    _fclose();
    param_1[0x19] = 0;
  }
  *(undefined1 *)(param_1 + 0x1b) = 0;
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_109b745e8(param_1 + 0x14);
  *param_1 = &PTR_FUN_110b28b18;
  if (param_1[0xe] != 0) {
    piVar7 = (int *)(param_1[0xe] + 0x14);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 7);
    }
  }
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar4 = 0;
    lVar6 = param_1[0xf];
    do {
      *(undefined4 *)(lVar6 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x3c));
  }
  puVar5 = (undefined8 *)param_1[0x10];
  if (puVar5 != param_1 + 0x11 && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  lVar4 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar7 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b79ae0; end: 109b79af3;  */

void FUN_109b79ae0(void)

{
  func_0x000109b79a84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b79af4; end: 109b79afb;  */

undefined8 FUN_109b79af4(void)

{
  return 3;
}



/* Entry: 109b79afc; end: 109b79b6f;  */

bool FUN_109b79afc(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  
  if (((2 < (ulong)param_2[1]) && (pcVar4 = (char *)*param_2, *pcVar4 == 'P')) &&
     ((byte)pcVar4[1] - 0x31 < 6)) {
    cVar1 = pcVar4[2];
    lVar3 = (long)cVar1;
    if (cVar1 < 0) {
      ___maskrune(lVar3,0x4000);
      uVar2 = (uint)lVar3;
    }
    else {
      uVar2 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) &
              0x4000;
    }
    return uVar2 != 0;
  }
  return false;
}



/* Entry: 109b79b70; end: 109b79bc7;  */

void FUN_109b79b70(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aee8(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2aef0(&lStack_30);
  return;
}



/* Entry: 109b79bc8; end: 109b79deb;  */

void FUN_109b79bc8(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  char *pcVar9;
  byte *pbVar10;
  long lVar11;
  int *piVar12;
  
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_109b79c28:
    lVar11 = param_1 + 0xa0;
    func_0x000109b74724(lVar11,param_1 + 0x18);
    if ((int)lVar11 == 0) {
      return;
    }
  }
  else {
    uVar8 = (ulong)*(uint *)(param_1 + 0x3c);
    if ((int)*(uint *)(param_1 + 0x3c) < 3) {
      lVar11 = (long)*(int *)(param_1 + 0x44) * (long)*(int *)(param_1 + 0x40);
    }
    else {
      lVar11 = 1;
      piVar12 = *(int **)(param_1 + 0x78);
      do {
        lVar11 = lVar11 * *piVar12;
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 1;
      } while (uVar8 != 0);
    }
    if (lVar11 == 0) goto LAB_109b79c28;
    uVar8 = param_1 + 0xa0;
    FUN_109b747b8(uVar8,param_1 + 0x38);
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  pcVar9 = *(char **)(param_1 + 0xc0);
  if (*(char **)(param_1 + 0xb8) <= pcVar9) {
    (**(code **)(*(long *)(param_1 + 0xa0) + 0x28))(param_1 + 0xa0);
    pcVar9 = *(char **)(param_1 + 0xc0);
  }
  pbVar10 = (byte *)(pcVar9 + 1);
  cVar2 = *pcVar9;
  *(byte **)(param_1 + 0xc0) = pbVar10;
  if (cVar2 == 'P') {
    if (*(byte **)(param_1 + 0xb8) <= pbVar10) {
      (**(code **)(*(long *)(param_1 + 0xa0) + 0x28))(param_1 + 0xa0);
      pbVar10 = *(byte **)(param_1 + 0xc0);
    }
    bVar3 = *pbVar10;
    *(byte **)(param_1 + 0xc0) = pbVar10 + 1;
    uVar4 = bVar3 - 0x31;
    if (uVar4 < 6) {
      lVar11 = ((ulong)uVar4 & 0xff) * 4;
      uVar1 = *(undefined4 *)(&UNK_10e035fcc + lVar11);
      *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(&UNK_10e035fb4 + lVar11);
      *(bool *)(param_1 + 0x4e8) = 0x33 < bVar3;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      lVar11 = param_1 + 0xa0;
      FUN_109b79dec(lVar11,0x7fffffff);
      *(int *)(param_1 + 8) = (int)lVar11;
      lVar11 = param_1 + 0xa0;
      FUN_109b79dec(lVar11,0x7fffffff);
      *(int *)(param_1 + 0xc) = (int)lVar11;
      if (*(int *)(param_1 + 0x4e0) == 1) {
        iVar6 = 1;
        *(undefined4 *)(param_1 + 0x4ec) = 1;
      }
      else {
        lVar11 = param_1 + 0xa0;
        FUN_109b79dec(lVar11,0x7fffffff);
        iVar6 = (int)lVar11;
        *(int *)(param_1 + 0x4ec) = iVar6;
        if (0xffff < iVar6) goto LAB_109b79d74;
        if (0xff < iVar6) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xff8 | 2;
        }
      }
      if (((*(int *)(param_1 + 8) < 1) || (*(int *)(param_1 + 0xc) < 1)) || (iVar6 < 1)) {
        *(undefined4 *)(param_1 + 0x4e4) = 0xffffffff;
        *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
        if (*(long *)(param_1 + 200) != 0) {
          _fclose();
          *(undefined8 *)(param_1 + 200) = 0;
        }
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
          *(undefined8 *)(param_1 + 0xb0) = 0;
          *(undefined8 *)(param_1 + 0xb8) = 0;
          *(undefined8 *)(param_1 + 0xc0) = 0;
        }
      }
      else {
        *(int *)(param_1 + 0x4e4) =
             *(int *)(param_1 + 0xd4) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb0));
      }
      return;
    }
  }
LAB_109b79d74:
  puVar7 = (undefined4 *)0x4;
  ___cxa_allocate_exception();
  *puVar7 = 0xffffff83;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b79d98);
  (*pcVar5)();
}



/* Entry: 109b79dec; end: 109b79f43;  */

int FUN_109b79dec(long *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  
  pbVar5 = (byte *)param_1[4];
  if ((byte *)param_1[3] <= pbVar5) {
    (**(code **)(*param_1 + 0x28))(param_1);
    pbVar5 = (byte *)param_1[4];
  }
  uVar8 = (ulong)*pbVar5;
  param_1[4] = (long)(pbVar5 + 1);
  puVar3 = PTR___DefaultRuneLocale_11034bcf8;
LAB_109b79e3c:
  do {
    if ((*(uint *)(puVar3 + uVar8 * 4 + 0x3c) >> 10 & 1) != 0) {
      iVar9 = 0;
      do {
        iVar9 = (int)uVar8 + iVar9 * 10 + -0x30;
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return iVar9;
        }
        pbVar5 = (byte *)param_1[4];
        if ((byte *)param_1[3] <= pbVar5) {
          (**(code **)(*param_1 + 0x28))(param_1);
          pbVar5 = (byte *)param_1[4];
        }
        uVar8 = (ulong)*pbVar5;
        param_1[4] = (long)(pbVar5 + 1);
      } while ((*(uint *)(puVar3 + uVar8 * 4 + 0x3c) >> 10 & 1) != 0);
      return iVar9;
    }
    if ((int)uVar8 == 0x23) {
      pcVar6 = (char *)param_1[4];
      do {
        pcVar7 = pcVar6;
        if ((char *)param_1[3] <= pcVar6) {
          (**(code **)(*param_1 + 0x28))(param_1);
          pcVar7 = (char *)param_1[4];
        }
        pcVar6 = pcVar7 + 1;
        cVar1 = *pcVar7;
        param_1[4] = (long)pcVar6;
      } while (cVar1 != '\r' && cVar1 != '\n');
    }
    do {
      while( true ) {
        pbVar5 = (byte *)param_1[4];
        if ((byte *)param_1[3] <= pbVar5) {
          (**(code **)(*param_1 + 0x28))(param_1);
          pbVar5 = (byte *)param_1[4];
        }
        bVar2 = *pbVar5;
        uVar8 = (ulong)bVar2;
        param_1[4] = (long)(pbVar5 + 1);
        if ((long)(char)bVar2 < 0) break;
        if ((*(uint *)(puVar3 + (long)(char)bVar2 * 4 + 0x3c) & 0x4000) == 0) goto LAB_109b79e3c;
      }
      uVar4 = uVar8;
      ___maskrune(uVar8,0x4000);
    } while ((int)uVar4 != 0);
  } while( true );
}



/* Entry: 109b79f44; end: 109b7a63f;  */

byte * FUN_109b79f44(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  int *piVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar22;
  byte *pbVar23;
  undefined4 *puVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  byte *pbStack_ca0;
  byte abStack_c90 [1032];
  byte *pbStack_888;
  byte *pbStack_880;
  byte abStack_878 [1032];
  byte abStack_470 [1024];
  long lStack_70;
  ulong uVar21;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = (uint)(0x442211088 >> (((ulong)uVar2 & 7) << 2)) & 0x78;
  iVar27 = *(int *)(param_1 + 8);
  iVar30 = *(int *)(param_1 + 0x4e0);
  iVar11 = (int)(iVar30 * iVar27 * uVar1) >> 3;
  iVar28 = iVar11 + 0xe;
  if (-8 < iVar11) {
    iVar28 = iVar11 + 7;
  }
  uVar29 = *(uint *)(param_1 + 0x4e4);
  if (((int)uVar29 < 0) || (param_1[0xd8] != 1)) {
    pbVar25 = (byte *)0x0;
    goto LAB_109b7a3d4;
  }
  uVar3 = *param_2;
  puVar26 = *(undefined4 **)(param_2 + 4);
  uVar16 = *(undefined8 *)(param_2 + 0x14);
  iVar28 = iVar28 >> 3;
  uVar20 = iVar28 + 0x20;
  pbStack_888 = abStack_878;
  pbVar25 = abStack_878;
  if (0x408 < uVar20) {
    pbVar25 = (byte *)(long)(int)uVar20;
    __Znam();
    pbStack_888 = pbVar25;
  }
  pbStack_880 = (byte *)(long)(int)uVar20;
  pbStack_ca0 = abStack_c90;
  pbStack_888 = pbVar25;
  if (uVar1 == 8) {
    iVar11 = *(int *)(param_1 + 0x4ec);
    pbVar19 = (byte *)((long)iVar11 + 1);
    if (0x408 < (uint)pbVar19) {
      pbStack_ca0 = pbVar19;
      __Znam();
    }
    if (-1 < iVar11) {
      lVar12 = 0;
      bVar14 = 0xff;
      if (iVar30 != 1) {
        bVar14 = 0;
      }
      pbVar10 = pbStack_ca0;
      do {
        bVar9 = 0;
        if (iVar11 != 0) {
          bVar9 = (byte)((int)lVar12 / iVar11);
        }
        *pbVar10 = bVar9 ^ bVar14;
        lVar12 = lVar12 + 0xff;
        pbVar10 = pbVar10 + 1;
      } while (((ulong)pbVar19 & 0xffffffff) * 0x100 - ((ulong)pbVar19 & 0xffffffff) != lVar12);
    }
    iVar11 = 0;
    bVar14 = 0xff;
    if (iVar30 != 1) {
      bVar14 = 0;
    }
    uVar20 = 2;
    if (iVar30 != 1) {
      uVar20 = 0x100;
    }
    uVar21 = (ulong)uVar20;
    pbVar19 = abStack_470 + 3;
    do {
      bVar9 = 0;
      if (uVar20 - 1 != 0) {
        bVar9 = (byte)(iVar11 / (int)(uVar20 - 1));
      }
      bVar9 = bVar9 ^ bVar14;
      pbVar19[-1] = bVar9;
      pbVar19[-2] = bVar9;
      pbVar19[-3] = bVar9;
      *pbVar19 = 0;
      iVar11 = iVar11 + 0xff;
      uVar21 = uVar21 - 1;
      pbVar19 = pbVar19 + 4;
    } while (uVar21 != 0);
  }
  uVar3 = uVar3 & 0xff8;
  iVar11 = 0;
  if (*(long *)(param_1 + 200) != 0) {
    iVar4 = *(int *)(param_1 + 0xd0);
    iVar11 = 0;
    if (iVar4 != 0) {
      iVar11 = (int)uVar29 / iVar4;
    }
    iVar11 = iVar11 * iVar4;
    uVar29 = uVar29 - iVar11;
  }
  *(ulong *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb0) + (ulong)uVar29;
  *(int *)(param_1 + 0xd4) = iVar11;
  iVar11 = (int)uVar16;
  if (iVar30 == 1) {
    if ((param_1[0x4e8] & 1) == 0) {
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar28 = 0;
        do {
          uVar21 = (ulong)*(uint *)(param_1 + 8);
          if (0 < (int)*(uint *)(param_1 + 8)) {
            lVar12 = 0;
            do {
              pbVar19 = param_1 + 0xa0;
              FUN_109b79dec(pbVar19,1);
              pbVar25[lVar12] = (int)pbVar19 != 0;
              lVar12 = lVar12 + 1;
              uVar21 = (ulong)*(int *)(param_1 + 8);
            } while (lVar12 < (long)uVar21);
          }
          iVar27 = (int)uVar21;
          if (uVar3 == 0) {
            if (0 < iVar27) {
              uVar13 = 0;
              do {
                *(byte *)((long)puVar26 + uVar13) = pbStack_ca0[pbVar25[uVar13]];
                uVar13 = uVar13 + 1;
              } while ((uVar21 & 0xffffffff) != uVar13);
            }
          }
          else {
            pbVar19 = pbVar25;
            puVar24 = puVar26;
            if (1 < iVar27) {
              pbVar10 = pbVar25;
              puVar18 = puVar26;
              do {
                pbVar19 = pbVar10 + 1;
                puVar24 = (undefined4 *)((long)puVar18 + 3);
                uVar21 = (long)puVar18 + 6;
                *puVar18 = *(undefined4 *)(abStack_470 + (ulong)*pbVar10 * 4);
                pbVar10 = pbVar19;
                puVar18 = puVar24;
              } while (uVar21 < (ulong)((long)puVar26 + (long)(iVar27 * 3)));
            }
            bVar14 = abStack_470[(ulong)*pbVar19 * 4 + 2];
            *(undefined2 *)puVar24 = *(undefined2 *)(abStack_470 + (ulong)*pbVar19 * 4);
            *(byte *)((long)puVar24 + 2) = bVar14;
          }
          iVar28 = iVar28 + 1;
          puVar26 = (undefined4 *)((long)puVar26 + (long)iVar11);
        } while (iVar28 < *(int *)(param_1 + 0xc));
        pbVar25 = (byte *)0x1;
        goto LAB_109b7a49c;
      }
    }
    else if (0 < *(int *)(param_1 + 0xc)) {
      iVar27 = 0;
      do {
        FUN_109b749a0(param_1 + 0xa0,pbVar25,iVar28);
        if (uVar3 == 0) {
          func_0x000109b823c0(puVar26,pbVar25,*(undefined4 *)(param_1 + 8),pbStack_ca0);
        }
        else {
          func_0x000109b822f0(puVar26,pbVar25,*(undefined4 *)(param_1 + 8),abStack_470);
        }
        iVar27 = iVar27 + 1;
        puVar26 = (undefined4 *)((long)puVar26 + (long)iVar11);
      } while (iVar27 < *(int *)(param_1 + 0xc));
    }
    pbVar25 = (byte *)0x1;
  }
  else if ((iVar30 == 8) || (iVar30 == 0x18)) {
    if (*(int *)(param_1 + 0xc) < 1) {
      pbVar25 = (byte *)0x1;
    }
    else {
      iVar30 = 0;
      uVar2 = iVar27 + iVar27 * (uVar2 >> 3 & 0x1ff);
      uVar21 = (ulong)uVar2;
      lVar12 = (long)iVar11;
      puVar24 = puVar26 + 1;
      pbVar19 = (byte *)((long)puVar26 + 2);
      do {
        if ((param_1[0x4e8] & 1) == 0) {
          if (0 < (int)uVar2) {
            uVar13 = 0;
            do {
              pbVar10 = param_1 + 0xa0;
              FUN_109b79dec(pbVar10,0x7fffffff);
              uVar29 = (uint)pbVar10;
              if (*(uint *)(param_1 + 0x4ec) <= (uint)pbVar10) {
                uVar29 = *(uint *)(param_1 + 0x4ec);
              }
              if (uVar1 == 8) {
                pbVar25[uVar13] = pbStack_ca0[(int)uVar29];
              }
              else {
                *(short *)(pbVar25 + uVar13 * 2) = (short)uVar29;
              }
              uVar13 = uVar13 + 1;
            } while (uVar21 != uVar13);
            goto LAB_109b7a21c;
          }
        }
        else {
          FUN_109b749a0(param_1 + 0xa0,pbVar25,iVar28);
          pbVar10 = pbVar25 + 1;
          lVar17 = uVar21 << 1;
          if (uVar1 == 0x10 && 0 < (int)uVar2) {
            do {
              bVar14 = pbVar10[-1];
              pbVar10[-1] = *pbVar10;
              *pbVar10 = bVar14;
              lVar17 = lVar17 + -2;
              pbVar10 = pbVar10 + 2;
            } while (lVar17 != 0);
LAB_109b7a21c:
            if (((*param_2 & 7) == 0 && uVar1 == 0x10) && 0 < (int)uVar2) {
              uVar13 = 0;
              do {
                pbVar25[uVar13] = pbVar25[uVar13 * 2 + 1];
                uVar13 = uVar13 + 1;
              } while (uVar21 != uVar13);
            }
          }
        }
        if (*(int *)(param_1 + 0x4e0) == 8) {
          if (uVar3 == 0) {
            _memcpy(puVar26,pbVar25,(long)*(int *)(param_1 + 8) * (long)(int)(uVar1 >> 3));
          }
          else {
            iVar11 = *(int *)(param_1 + 8);
            if ((*param_2 & 7) == 0) {
              if (0 < iVar11) {
                pbVar10 = pbVar19;
                pbVar22 = pbVar25;
                do {
                  pbVar23 = pbVar22 + 1;
                  bVar14 = *pbVar22;
                  *pbVar10 = bVar14;
                  pbVar10[-1] = bVar14;
                  pbVar10[-2] = bVar14;
                  pbVar10 = pbVar10 + 3;
                  pbVar22 = pbVar23;
                } while (pbVar23 < pbVar25 + iVar11);
              }
            }
            else if (0 < iVar11) {
              puVar18 = puVar24;
              pbVar10 = pbVar25;
              do {
                pbVar22 = pbVar10 + 2;
                uVar6 = *(undefined2 *)pbVar10;
                *(undefined2 *)puVar18 = uVar6;
                *(undefined2 *)((long)puVar18 + -2) = uVar6;
                *(undefined2 *)(puVar18 + -1) = uVar6;
                puVar18 = (undefined4 *)((long)puVar18 + 6);
                pbVar10 = pbVar22;
              } while (pbVar22 < pbVar25 + (long)iVar11 * 2);
            }
          }
        }
        else {
          uVar13 = (ulong)*(uint *)(param_1 + 8);
          if (uVar3 == 0) {
            if ((*param_2 & 7) == 0) {
              func_0x000109b81abc(pbVar25,0,puVar26,0,uVar13 | 0x100000000,2);
            }
            else {
              func_0x000109b81b48();
            }
          }
          else if ((*param_2 & 7) == 0) {
            func_0x000109b81d88(pbVar25,0,puVar26,0,uVar13 | 0x100000000);
          }
          else {
            puVar18 = puVar24;
            pbVar10 = pbVar25;
            if (0 < (int)*(uint *)(param_1 + 8)) {
              do {
                uVar6 = *(undefined2 *)(pbVar10 + 2);
                uVar5 = *(undefined2 *)(pbVar10 + 4);
                *(undefined2 *)puVar18 = *(undefined2 *)pbVar10;
                *(undefined2 *)((long)puVar18 + -2) = uVar6;
                *(undefined2 *)(puVar18 + -1) = uVar5;
                uVar29 = (int)uVar13 - 1;
                uVar13 = (ulong)uVar29;
                puVar18 = (undefined4 *)((long)puVar18 + 6);
                pbVar10 = pbVar10 + 6;
              } while (uVar29 != 0);
            }
          }
        }
        iVar30 = iVar30 + 1;
        puVar26 = (undefined4 *)((long)puVar26 + lVar12);
        puVar24 = (undefined4 *)((long)puVar24 + lVar12);
        pbVar19 = pbVar19 + lVar12;
      } while (iVar30 < *(int *)(param_1 + 0xc));
      pbVar25 = (byte *)0x1;
    }
  }
  else {
    pbVar25 = (byte *)0x0;
  }
LAB_109b7a49c:
  if ((pbStack_ca0 != abStack_c90) && (pbStack_ca0 != (byte *)0x0)) {
    __ZdaPv();
  }
  param_1 = pbStack_888;
  if ((pbStack_888 != abStack_878) && (pbStack_888 != (byte *)0x0)) {
    __ZdaPv();
  }
LAB_109b7a3d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pbVar25;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined ***)param_1 = &PTR_DAT_110b28b88;
  lVar12 = *(long *)(param_1 + 0x38);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  if (lVar12 != 0) {
    piVar15 = (int *)(lVar12 + -4);
    do {
      iVar11 = *piVar15;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar8) {
        *piVar15 = iVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 + -1 == 0) {
      _free(*(undefined8 *)(lVar12 + -0xc));
    }
  }
  lVar12 = *(long *)(param_1 + 0x18);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (lVar12 != 0) {
    piVar15 = (int *)(lVar12 + -4);
    do {
      iVar11 = *piVar15;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar8) {
        *piVar15 = iVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 + -1 == 0) {
      _free(*(undefined8 *)(lVar12 + -0xc));
    }
  }
  lVar12 = *(long *)(param_1 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (lVar12 != 0) {
    piVar15 = (int *)(lVar12 + -4);
    do {
      iVar11 = *piVar15;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar8) {
        *piVar15 = iVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 + -1 == 0) {
      _free(*(undefined8 *)(lVar12 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b7a640; end: 109b7a643;  */

undefined8 * FUN_109b7a640(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b7a644; end: 109b7a657;  */

void FUN_109b7a644(void)

{
  FUN_109b76b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b7a658; end: 109b7a6af;  */

void FUN_109b7a658(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aeec(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2aef4(&lStack_30);
  return;
}



/* Entry: 109b7a6b0; end: 109b7a6bb;  */

bool FUN_109b7a6b0(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffffffd) == 0;
}



/* Entry: 109b7a6bc; end: 109b7ad4b;  */

undefined *** FUN_109b7a6bc(long param_1,uint *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined2 *puVar13;
  undefined ***pppuVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  int iVar23;
  undefined ***pppuVar24;
  long lVar25;
  undefined2 *puVar26;
  undefined **ppuStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  undefined1 uStack_498;
  long lStack_490;
  undefined2 *puStack_488;
  undefined2 *puStack_480;
  undefined2 auStack_478 [516];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2[3];
  uVar17 = (ulong)uVar5;
  uVar4 = *param_2;
  uVar2 = uVar4 >> 3 & 0x1ff;
  iVar19 = 3;
  if (uVar2 == 0) {
    iVar19 = 1;
  }
  if ((int)param_2[1] < 1) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(*(long *)(param_2 + 0x12) + (ulong)param_2[1] * 8 + -8);
  }
  uVar6 = param_2[2];
  uVar10 = iVar15 * uVar5;
  lVar25 = *param_3;
  if (param_3[1] - lVar25 == 0) {
    bVar12 = true;
  }
  else {
    uVar20 = 0;
    bVar12 = true;
    do {
      if (*(int *)(lVar25 + uVar20 * 4) == 0x20) {
        bVar12 = *(int *)(lVar25 + uVar20 * 4 + 4) != 0;
      }
      uVar20 = uVar20 + 2;
    } while (uVar20 < (ulong)(param_3[1] - lVar25 >> 2));
  }
  uStack_4a0 = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0x8000;
  uStack_498 = 0;
  lStack_490 = 0;
  ppuStack_4c8 = &PTR_FUN_110b28a48;
  uStack_4c0 = 0;
  lVar25 = *(long *)(param_1 + 0x28);
  if (lVar25 == 0) {
    pppuVar24 = &ppuStack_4c8;
    func_0x000109b74de8(pppuVar24,param_1 + 0x18);
    if ((int)pppuVar24 == 0) {
      pppuVar24 = (undefined ***)0x0;
      goto LAB_109b7acc0;
    }
  }
  else {
    func_0x000109b74ec0(&ppuStack_4c8);
    (*(code *)ppuStack_4c8[7])(&ppuStack_4c8);
    uStack_498 = 1;
    uStack_4a4 = 0;
    uStack_4b0 = uStack_4c0;
    uVar16 = uVar10;
    if (!bVar12) {
      uVar16 = *param_2 & 7 | iVar19 << 3;
      if (uVar16 == 8) {
        iVar15 = 4;
      }
      else if (uVar16 == 0x18) {
        iVar15 = 0xe;
      }
      else {
        iVar15 = 6;
        if (uVar16 != 10) {
          iVar15 = 0x14;
        }
      }
      uVar16 = iVar15 * uVar5 | 1;
    }
    lStack_490 = lVar25;
    func_0x000107c31950(*(undefined8 *)(param_1 + 0x28),
                        (long)(int)(uVar16 * uVar6) + 0x1ffU & 0xffffffffffffff00);
  }
  if (bVar12) {
    if ((int)param_2[1] < 1) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(*(long *)(param_2 + 0x12) + (ulong)param_2[1] * 8 + -8);
    }
    uVar16 = iVar15 * uVar5;
  }
  else {
    iVar15 = 2;
    if (uVar2 == 0) {
      iVar15 = 0;
    }
    uVar16 = (iVar15 + iVar19 * 6) * uVar5 + 0x20;
  }
  uVar3 = uVar16;
  if ((int)uVar16 < 0x81) {
    uVar3 = 0x80;
  }
  puVar13 = auStack_478;
  if (0x408 < (int)uVar16) {
    puVar13 = (undefined2 *)(ulong)uVar3;
    puStack_488 = auStack_478;
    __Znam();
  }
  uVar4 = 0x88442211U >> (ulong)((uVar4 & 7) << 2) & 0xf;
  puStack_488 = puVar13;
  puStack_480 = (undefined2 *)(ulong)uVar3;
  _sprintf(puVar13,&UNK_10f5a138c);
  puVar26 = puVar13;
  _strlen(puVar13);
  FUN_109b74f58(&ppuStack_4c8,puVar13,puVar26);
  if (0 < (int)uVar6) {
    uVar20 = 0;
    iVar11 = iVar19 * uVar5;
    iVar15 = iVar11 * 2;
    do {
      puVar26 = (undefined2 *)(*(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * uVar20);
      if (bVar12) {
        if (uVar2 == 2) {
          if (uVar4 == 1) {
            func_0x000109b81d88(puVar26,0,puVar13,0,uVar17 | 0x100000000);
          }
          else {
            uVar18 = uVar17;
            puVar21 = puVar13 + 2;
            puVar22 = puVar26;
            if (0 < (int)uVar5) {
              do {
                uVar8 = puVar22[1];
                uVar9 = puVar22[2];
                *puVar21 = *puVar22;
                puVar21[-1] = uVar8;
                puVar21[-2] = uVar9;
                puVar22 = puVar22 + 3;
                puVar21 = puVar21 + 3;
                uVar16 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar16;
              } while (uVar16 != 0);
            }
            if (uVar4 == 2 && 0 < iVar15) {
LAB_109b7abf4:
              lVar25 = 0;
              do {
                puVar1 = (undefined1 *)((long)puVar13 + lVar25);
                uVar7 = *puVar1;
                *puVar1 = puVar1[1];
                puVar1[1] = uVar7;
                lVar25 = lVar25 + 2;
              } while (lVar25 < iVar15);
            }
          }
        }
        else if (uVar4 == 2) {
          if (uVar2 == 0) {
            _memcpy(puVar13,puVar26,(long)(int)uVar10);
          }
          if (0 < iVar15) goto LAB_109b7abf4;
        }
        puVar22 = puVar13;
        if (uVar2 == 0 && uVar4 < 2) {
          puVar22 = puVar26;
        }
        FUN_109b74f58(&ppuStack_4c8,puVar22,uVar10);
      }
      else {
        puVar26 = puVar13;
        if (uVar2 == 0) {
          if (uVar4 == 1) {
            uVar18 = uVar17;
            if (0 < (int)uVar5) {
              do {
                _sprintf(puVar26,&UNK_10f5a139a);
                puVar26 = puVar26 + 2;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
          }
          else {
            uVar18 = uVar17;
            if (0 < (int)uVar5) {
              do {
                _sprintf(puVar26,&UNK_10f5a139f);
                puVar26 = puVar26 + 3;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
          }
        }
        else if (uVar4 == 1) {
          if (0 < iVar11) {
            iVar23 = 0;
            do {
              _sprintf(puVar26,&UNK_10f5a139a);
              _sprintf(puVar26 + 2,&UNK_10f5a139a);
              _sprintf(puVar26 + 4,&UNK_10f5a139a);
              puVar26[6] = 0x2020;
              puVar26 = puVar26 + 7;
              iVar23 = iVar23 + iVar19;
            } while (iVar23 < iVar11);
          }
        }
        else if (0 < iVar11) {
          iVar23 = 0;
          do {
            _sprintf(puVar26,&UNK_10f5a139f);
            _sprintf(puVar26 + 3,&UNK_10f5a139f);
            _sprintf(puVar26 + 6,&UNK_10f5a139f);
            puVar26[9] = 0x2020;
            puVar26 = puVar26 + 10;
            iVar23 = iVar23 + iVar19;
          } while (iVar23 < iVar11);
        }
        *(undefined1 *)puVar26 = 10;
        FUN_109b74f58(&ppuStack_4c8,puVar13,((int)puVar26 - (int)puVar13) + 1);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar6);
  }
  func_0x000109b74ec0(&ppuStack_4c8);
  if ((puStack_488 != auStack_478) && (puStack_488 != (undefined2 *)0x0)) {
    __ZdaPv();
  }
  pppuVar24 = (undefined ***)0x1;
LAB_109b7acc0:
  pppuVar14 = &ppuStack_4c8;
  FUN_109b74ca0(pppuVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar24;
  }
  ___stack_chk_fail();
  FUN_109b74ca0(&ppuStack_4c8);
  __Unwind_Resume(pppuVar14);
  return pppuVar14;
}



/* Entry: 109b7ad4c; end: 109b7ad53;  */

void FUN_109b7ad4c(void)

{
  return;
}



/* Entry: 109b7ad54; end: 109b7ad8f;  */

void FUN_109b7ad54(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7ad8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b7ad90; end: 109b7ad97;  */

void FUN_109b7ad90(void)

{
  return;
}



/* Entry: 109b7ad98; end: 109b7ae8f;  */

void FUN_109b7ad98(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b7ae90; end: 109b7b16b;  */

/* WARNING: Type propagation algorithm not settling */

uint ******* FUN_109b7ae90(long param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint *******pppppppuVar12;
  int iVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  undefined4 uVar17;
  uint ******ppppppuVar18;
  uint ******ppppppuVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  uint ******ppppppuVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  uint *******pppppppuVar28;
  ulong uVar29;
  uint *******pppppppuVar30;
  ulong uVar31;
  uint *******pppppppuVar32;
  uint uVar33;
  uint *******pppppppuVar34;
  uint uVar35;
  uint *******pppppppuStack_d38;
  uint *******pppppppuStack_d30;
  uint *******pppppppuStack_d00;
  int iStack_cf4;
  uint *******pppppppuStack_cf0;
  uint *******pppppppuStack_ce8;
  uint ******appppppuStack_ce0 [129];
  uint *******pppppppuStack_8d8;
  uint *******pppppppuStack_8d0;
  uint ******appppppuStack_8c8 [129];
  byte abStack_4c0 [256];
  long lStack_3c0;
  uint ******appppppuStack_348 [96];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar14 = (uint *******)(param_1 + 0xa0);
  pppppppuVar16 = (uint *******)(param_1 + 0x18);
  func_0x000109b74724();
  if ((int)pppppppuVar14 != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 4;
    iVar20 = (int)param_1;
    iVar13 = iVar20 + 0xa0;
    func_0x000109b74bc4();
    *(int *)(param_1 + 8) = iVar13;
    iVar13 = iVar20 + 0xa0;
    func_0x000109b74bc4();
    *(int *)(param_1 + 0xc) = iVar13;
    uVar33 = iVar20 + 0xa0;
    func_0x000109b74bc4();
    *(uint *)(param_1 + 0x4e0) = uVar33;
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 4;
    iVar13 = iVar20 + 0xa0;
    func_0x000109b74bc4();
    *(int *)(param_1 + 0x4e8) = iVar13;
    iVar13 = iVar20 + 0xa0;
    func_0x000109b74bc4();
    *(int *)(param_1 + 0x4ec) = iVar13;
    lVar23 = param_1 + 0xa0;
    func_0x000109b74bc4();
    iVar13 = (int)lVar23;
    *(int *)(param_1 + 0x4f0) = iVar13;
    if ((0 < *(int *)(param_1 + 8)) && (0 < *(int *)(param_1 + 0xc))) {
      uVar5 = *(uint *)(param_1 + 0x4e0);
      if (((uVar5 < 0x21) && ((1L << ((ulong)uVar5 & 0x3f) & 0x101000102U) != 0)) &&
         (((*(uint *)(param_1 + 0x4e8) < 2 || (*(int *)(param_1 + 0x10) == 3)) ||
          ((*(int *)(param_1 + 0x10) == 2 && (uVar5 == 8)))))) {
        if (*(int *)(param_1 + 0x4ec) == 1) {
          if (((iVar13 <= 3 << (ulong)(uVar33 & 0x1f)) && (0 < iVar13)) && (uVar5 < 9)) {
            _bzero(param_1 + 0xe0,0x400);
            uVar29 = param_1 + 0xa0;
            pppppppuVar16 = appppppuStack_348;
            FUN_109b749a0(uVar29,pppppppuVar16,lVar23);
            if ((uint)uVar29 == *(uint *)(param_1 + 0x4f0)) {
              if (2 < (uint)uVar29) {
                uVar31 = (uVar29 & 0xffffffff) * 0x55555556 >> 0x20;
                puVar26 = (undefined1 *)(param_1 + 0xe3);
                ppppppuVar24 = (uint ******)appppppuStack_348;
                uVar29 = uVar31;
                do {
                  puVar26[-3] = *(undefined1 *)((long)ppppppuVar24 + uVar31 * 2);
                  puVar26[-2] = *(undefined1 *)((long)ppppppuVar24 + uVar31);
                  puVar26[-1] = *(undefined1 *)ppppppuVar24;
                  *puVar26 = 0;
                  uVar29 = uVar29 - 1;
                  puVar26 = puVar26 + 4;
                  ppppppuVar24 = (uint ******)((long)ppppppuVar24 + 1);
                } while (uVar29 != 0);
              }
              pppppppuVar16 = (uint *******)(ulong)*(uint *)(param_1 + 0x4e0);
              iVar20 = iVar20 + 0xe0;
              func_0x000109b820ec();
              uVar17 = 0x10;
              if (iVar20 == 0) {
                uVar17 = 0;
              }
              *(undefined4 *)(param_1 + 0x10) = uVar17;
              goto LAB_109b7b0bc;
            }
          }
        }
        else if ((*(int *)(param_1 + 0x4ec) == 0) && (iVar13 == 0)) {
          pppppppuVar16 = (uint *******)0x400;
          _bzero(param_1 + 0xe0);
          uVar17 = 0;
          if (8 < uVar5) {
            uVar17 = 0x10;
          }
          *(undefined4 *)(param_1 + 0x10) = uVar17;
          if (uVar5 < 9) {
            iVar13 = 0;
            lVar23 = 1L << ((ulong)uVar5 & 0x3f);
            iVar20 = (int)lVar23 + -1;
            puVar26 = (undefined1 *)(param_1 + 0xe3);
            do {
              uVar9 = 0;
              if (iVar20 != 0) {
                uVar9 = (undefined1)(iVar13 / iVar20);
              }
              puVar26[-1] = uVar9;
              puVar26[-2] = uVar9;
              puVar26[-3] = uVar9;
              *puVar26 = 0;
              iVar13 = iVar13 + 0xff;
              lVar23 = lVar23 + -1;
              puVar26 = puVar26 + 4;
            } while (lVar23 != 0);
          }
LAB_109b7b0bc:
          *(int *)(param_1 + 0x4e4) =
               *(int *)(param_1 + 0xd4) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb0));
          pppppppuVar14 = (uint *******)0x1;
          goto LAB_109b7b138;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4e4) = 0xffffffff;
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    if (*(long *)(param_1 + 200) != 0) {
      _fclose();
      *(undefined8 *)(param_1 + 200) = 0;
    }
    *(undefined1 *)(param_1 + 0xd8) = 0;
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
      pppppppuVar14 = (uint *******)0x0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    else {
      pppppppuVar14 = (uint *******)0x0;
    }
  }
LAB_109b7b138:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppppuVar14;
  }
  ___stack_chk_fail();
  lStack_3c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(uint *)(pppppppuVar14 + 1);
  uVar33 = *(uint *)(pppppppuVar14 + 0x9c);
  iVar20 = uVar33 * uVar5;
  iVar13 = iVar20 + 0xe;
  if (-8 < iVar20) {
    iVar13 = iVar20 + 7;
  }
  uVar4 = *(uint *)pppppppuVar16 & 0xff8;
  iVar20 = 3;
  if (uVar4 == 0) {
    iVar20 = 1;
  }
  uVar35 = *(uint *)((long)pppppppuVar14 + 0x4e4);
  if (((int)uVar35 < 0) || (*(char *)(pppppppuVar14 + 0x1b) != '\x01')) {
    pppppppuVar32 = (uint *******)0x0;
    goto LAB_109b7b2e4;
  }
  pppppppuVar30 = (uint *******)pppppppuVar16[2];
  ppppppuVar24 = pppppppuVar16[10];
  uVar3 = (iVar13 >> 3) + 1U & 0xfffffffe;
  pppppppuVar32 = (uint *******)(long)(int)(uVar3 + 0x20);
  pppppppuStack_d30 = appppppuStack_8c8;
  pppppppuStack_8d8 = pppppppuStack_d30;
  if (0x408 < uVar3 + 0x20) {
    pppppppuVar34 = pppppppuVar32;
    pppppppuStack_8d8 = pppppppuStack_d30;
    __Znam();
    pppppppuStack_8d8 = pppppppuVar34;
  }
  pppppppuVar12 = pppppppuStack_8d8;
  pppppppuVar34 = (uint *******)((long)(int)uVar5 * 3 + 0x20);
  pppppppuStack_d38 = appppppuStack_ce0;
  pppppppuVar15 = pppppppuStack_d38;
  pppppppuStack_8d0 = pppppppuVar32;
  if (0x408 < (uint)pppppppuVar34) {
    pppppppuVar15 = pppppppuVar34;
    pppppppuStack_cf0 = pppppppuStack_d38;
    __Znam();
  }
  if (((uVar4 == 0) && (*(uint *)((long)pppppppuVar14 + 0x4ec) == 1)) && (uVar33 != 0x1f)) {
    lVar23 = 1L << ((ulong)uVar33 & 0x3f);
    pbVar25 = (byte *)((long)pppppppuVar14 + 0xe2);
    pbVar27 = abStack_4c0;
    do {
      *pbVar27 = (byte)((uint)pbVar25[-1] * 0x2591 + (uint)pbVar25[-2] * 0x74c +
                        (uint)*pbVar25 * 0x1323 + 0x2000 >> 0xe);
      lVar23 = lVar23 + -1;
      pbVar25 = pbVar25 + 4;
      pbVar27 = pbVar27 + 1;
    } while (lVar23 != 0);
  }
  if (pppppppuVar14[0x19] == (uint ******)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(uint *)(pppppppuVar14 + 0x1a);
    iVar13 = 0;
    if (uVar21 != 0) {
      iVar13 = (int)uVar35 / (int)uVar21;
    }
    uVar21 = iVar13 * uVar21;
    uVar35 = uVar35 - uVar21;
  }
  pppppppuVar32 = (uint *******)0x0;
  ppppppuVar19 = (uint ******)((long)pppppppuVar14[0x16] + (ulong)uVar35);
  pppppppuVar14[0x18] = ppppppuVar19;
  *(uint *)((long)pppppppuVar14 + 0xd4) = uVar21;
  iVar13 = (int)ppppppuVar24;
  pppppppuStack_cf0 = pppppppuVar15;
  pppppppuStack_ce8 = pppppppuVar34;
  if ((int)uVar33 < 0x18) {
    if (uVar33 == 1) {
      if (*(uint *)(pppppppuVar14 + 2) == 2) {
        iVar20 = uVar5 + 0xe;
        if (-8 < (int)uVar5) {
          iVar20 = uVar5 + 7;
        }
        pppppppuVar32 = (uint *******)((long)pppppppuVar12 + (long)(iVar20 >> 3));
        iStack_cf4 = 0;
        pppppppuVar34 = pppppppuVar12;
        do {
          do {
            lVar23 = (long)pppppppuVar32 - (long)pppppppuVar34;
            uVar33 = (uint)lVar23;
            if ((int)uVar33 < 2) {
              uVar33 = 1;
            }
            uVar29 = (ulong)uVar33;
            pppppppuVar15 = pppppppuVar34;
            do {
              ppppppuVar24 = pppppppuVar14[0x18];
              if (pppppppuVar14[0x17] <= ppppppuVar24) {
                (*(code *)pppppppuVar14[0x14][5])(pppppppuVar14 + 0x14);
                ppppppuVar24 = pppppppuVar14[0x18];
              }
              ppppppuVar19 = (uint ******)((long)ppppppuVar24 + 1);
              cVar8 = *(char *)ppppppuVar24;
              pppppppuVar14[0x18] = ppppppuVar19;
              if (cVar8 == -0x80) {
                if (pppppppuVar14[0x17] <= ppppppuVar19) {
                  (*(code *)pppppppuVar14[0x14][5])(pppppppuVar14 + 0x14);
                  ppppppuVar19 = pppppppuVar14[0x18];
                }
                uVar31 = (ulong)*(byte *)ppppppuVar19;
                pppppppuVar14[0x18] = (uint ******)((long)ppppppuVar19 + 1);
                if (uVar31 != 0) {
                  ppppppuVar19 = (uint ******)((long)ppppppuVar19 + 1);
                  if (pppppppuVar14[0x17] <= ppppppuVar19) {
                    (*(code *)pppppppuVar14[0x14][5])(pppppppuVar14 + 0x14);
                    ppppppuVar19 = pppppppuVar14[0x18];
                  }
                  pppppppuVar16 = (uint *******)(ulong)*(byte *)ppppppuVar19;
                  pppppppuVar14[0x18] = (uint ******)((long)ppppppuVar19 + 1);
                  if (lVar23 <= (long)uVar31) goto LAB_109b7bab0;
                  _memset(pppppppuVar15,pppppppuVar16,uVar31 + 1);
                  pppppppuVar34 = (uint *******)((long)pppppppuVar15 + 1 + uVar31);
                  goto LAB_109b7b7d0;
                }
              }
              *(char *)pppppppuVar15 = cVar8;
              lVar23 = lVar23 + -1;
              uVar29 = uVar29 - 1;
              pppppppuVar15 = (uint *******)((long)pppppppuVar15 + 1);
            } while (uVar29 != 0);
            pppppppuVar34 = (uint *******)((long)pppppppuVar34 + (ulong)uVar33);
LAB_109b7b7d0:
          } while (pppppppuVar34 < pppppppuVar32);
          if (uVar4 == 0) {
            pppppppuVar16 = pppppppuVar12;
            func_0x000109b823c0(pppppppuVar30,pppppppuVar12,*(uint *)(pppppppuVar14 + 1),abStack_4c0
                               );
          }
          else {
            pppppppuVar16 = pppppppuVar12;
            func_0x000109b822f0(pppppppuVar30,pppppppuVar12,*(uint *)(pppppppuVar14 + 1),
                                pppppppuVar14 + 0x1c);
          }
          pppppppuVar30 = (uint *******)((long)pppppppuVar30 + (long)iVar13);
          iStack_cf4 = iStack_cf4 + 1;
          pppppppuVar34 = pppppppuVar12;
        } while (iStack_cf4 < (int)*(uint *)((long)pppppppuVar14 + 0xc));
      }
      else if (0 < (int)*(uint *)((long)pppppppuVar14 + 0xc)) {
        iVar20 = 0;
        do {
          FUN_109b749a0(pppppppuVar14 + 0x14,pppppppuVar12,uVar3);
          if (uVar4 == 0) {
            pppppppuVar16 = pppppppuVar12;
            func_0x000109b823c0(pppppppuVar30,pppppppuVar12,*(uint *)(pppppppuVar14 + 1),abStack_4c0
                               );
          }
          else {
            pppppppuVar16 = pppppppuVar12;
            func_0x000109b822f0(pppppppuVar30,pppppppuVar12,*(uint *)(pppppppuVar14 + 1),
                                pppppppuVar14 + 0x1c);
          }
          iVar20 = iVar20 + 1;
          pppppppuVar30 = (uint *******)((long)pppppppuVar30 + (long)iVar13);
        } while (iVar20 < (int)*(uint *)((long)pppppppuVar14 + 0xc));
      }
    }
    else {
      if (uVar33 != 8) goto LAB_109b7ba1c;
      if (*(uint *)(pppppppuVar14 + 2) == 2) {
        iVar10 = uVar5 * iVar20;
        pppppppuStack_d00 = (uint *******)((long)pppppppuVar30 + (long)iVar10);
        iStack_cf4 = 0;
        do {
          do {
            pppppppuVar32 = pppppppuVar12;
            iVar22 = (int)pppppppuStack_d00 - (int)pppppppuVar30;
            do {
              ppppppuVar18 = ppppppuVar19;
              if (pppppppuVar14[0x17] <= ppppppuVar19) {
                (*(code *)pppppppuVar14[0x14][5])(pppppppuVar14 + 0x14);
                ppppppuVar18 = pppppppuVar14[0x18];
              }
              ppppppuVar19 = (uint ******)((long)ppppppuVar18 + 1);
              bVar6 = *(byte *)ppppppuVar18;
              pppppppuVar14[0x18] = ppppppuVar19;
              if (bVar6 == 0x80) {
                ppppppuVar18 = ppppppuVar19;
                if (pppppppuVar14[0x17] <= ppppppuVar19) {
                  (*(code *)pppppppuVar14[0x14][5])(pppppppuVar14 + 0x14);
                  ppppppuVar18 = pppppppuVar14[0x18];
                }
                ppppppuVar19 = (uint ******)((long)ppppppuVar18 + 1);
                bVar7 = *(byte *)ppppppuVar18;
                uVar33 = (uint)bVar7;
                pppppppuVar14[0x18] = ppppppuVar19;
                pppppppuVar34 = pppppppuVar32;
                if (bVar7 != 0) goto LAB_109b7b404;
              }
              pppppppuVar34 = (uint *******)((long)pppppppuVar32 + 1);
              *(byte *)pppppppuVar32 = bVar6;
              iVar11 = iVar22 - iVar20;
              bVar1 = iVar20 <= iVar22;
              pppppppuVar32 = pppppppuVar34;
              iVar22 = iVar11;
            } while (iVar11 != 0 && bVar1);
            uVar33 = 0;
LAB_109b7b404:
            iVar22 = (int)((long)pppppppuVar34 - (long)pppppppuVar12);
            if (0 < iVar22) {
              if (uVar4 == 0) {
                uVar29 = (long)pppppppuVar34 - (long)pppppppuVar12 & 0x7fffffff;
                pppppppuVar32 = pppppppuVar12;
                pppppppuVar34 = pppppppuVar30;
                do {
                  *(byte *)pppppppuVar34 = abStack_4c0[*(byte *)pppppppuVar32];
                  uVar29 = uVar29 - 1;
                  pppppppuVar32 = (uint *******)((long)pppppppuVar32 + 1);
                  pppppppuVar34 = (uint *******)((long)pppppppuVar34 + 1);
                } while (uVar29 != 0);
              }
              else {
                pppppppuVar34 = pppppppuVar12;
                pppppppuVar32 = pppppppuVar30;
                if (iVar22 != 1) {
                  pppppppuVar15 = pppppppuVar12;
                  pppppppuVar28 = pppppppuVar30;
                  do {
                    pppppppuVar34 = (uint *******)((long)pppppppuVar15 + 1);
                    pppppppuVar32 = (uint *******)((long)pppppppuVar28 + 3);
                    uVar29 = (long)pppppppuVar28 + 6;
                    *(uint *)pppppppuVar28 =
                         *(uint *)((long)pppppppuVar14 + ((ulong)*(byte *)pppppppuVar15 + 0x38) * 4)
                    ;
                    pppppppuVar15 = pppppppuVar34;
                    pppppppuVar28 = pppppppuVar32;
                  } while (uVar29 < (long)pppppppuVar30 + (ulong)(uint)(iVar22 * 3));
                }
                puVar2 = (uint *)((long)pppppppuVar14 + ((ulong)*(byte *)pppppppuVar34 + 0x38) * 4);
                uVar9 = *(undefined1 *)((long)puVar2 + 2);
                *(short *)pppppppuVar32 = (short)*puVar2;
                *(undefined1 *)((long)pppppppuVar32 + 2) = uVar9;
              }
              pppppppuVar30 = (uint *******)((long)pppppppuVar30 + (ulong)(uint)(iVar20 * iVar22));
              ppppppuVar19 = pppppppuVar14[0x18];
            }
            if (uVar33 != 0) {
              if (pppppppuVar14[0x17] <= ppppppuVar19) {
                (*(code *)pppppppuVar14[0x14][5])(pppppppuVar14 + 0x14);
                ppppppuVar19 = pppppppuVar14[0x18];
              }
              uVar29 = (ulong)(iVar20 + iVar20 * uVar33);
              bVar6 = *(byte *)ppppppuVar19;
              pppppppuVar14[0x18] = (uint ******)((long)ppppppuVar19 + 1);
              uVar33 = *(uint *)((long)pppppppuVar14 + 0xc);
              if (uVar4 == 0) {
                bVar6 = abStack_4c0[bVar6];
                pppppppuVar32 = pppppppuStack_d00;
                pppppppuVar34 = pppppppuVar30;
                do {
                  pppppppuVar15 = pppppppuVar32;
                  if ((uint *******)((long)pppppppuVar34 + uVar29) <= pppppppuVar32) {
                    pppppppuVar15 = (uint *******)((long)pppppppuVar34 + uVar29);
                  }
                  pppppppuVar30 = pppppppuVar34;
                  if (pppppppuVar34 < pppppppuVar15) {
                    pppppppuVar16 = (uint *******)(ulong)bVar6;
                    _memset(pppppppuVar34,(uint *******)(ulong)bVar6,
                            (long)pppppppuVar15 - (long)pppppppuVar34);
                    pppppppuVar30 = pppppppuVar15;
                    pppppppuVar32 = pppppppuStack_d00;
                  }
                  if (pppppppuVar32 <= pppppppuVar30) {
                    pppppppuVar32 = (uint *******)((long)pppppppuVar32 + (long)iVar13);
                    pppppppuVar30 = (uint *******)((long)pppppppuVar32 + -(long)iVar10);
                    iStack_cf4 = iStack_cf4 + 1;
                    pppppppuStack_d00 = pppppppuVar32;
                    if ((int)uVar33 <= iStack_cf4) break;
                  }
                  uVar5 = (int)uVar29 + ((int)pppppppuVar34 - (int)pppppppuVar15);
                  uVar29 = (ulong)uVar5;
                  pppppppuVar34 = pppppppuVar30;
                } while (0 < (int)uVar5);
              }
              else {
                pppppppuVar16 = (uint *******)&pppppppuStack_d00;
                func_0x000109b82164(pppppppuVar30,pppppppuVar16,ppppppuVar24,iVar10,&iStack_cf4,
                                    uVar33,uVar29);
              }
              if ((int)*(uint *)((long)pppppppuVar14 + 0xc) <= iStack_cf4) goto LAB_109b7ba18;
              ppppppuVar19 = pppppppuVar14[0x18];
            }
            pppppppuVar32 = pppppppuStack_d00;
          } while (pppppppuVar30 != pppppppuStack_d00);
          ppppppuVar18 = ppppppuVar19;
          if (pppppppuVar14[0x17] <= ppppppuVar19) {
            (*(code *)pppppppuVar14[0x14][5])(pppppppuVar14 + 0x14);
            ppppppuVar18 = pppppppuVar14[0x18];
          }
          ppppppuVar19 = (uint ******)((long)ppppppuVar18 + 1);
          bVar6 = *(byte *)ppppppuVar18;
          pppppppuVar14[0x18] = ppppppuVar19;
          if (bVar6 != 0) goto LAB_109b7bab0;
          pppppppuStack_d00 = (uint *******)((long)pppppppuVar32 + (long)iVar13);
          pppppppuVar30 = (uint *******)((long)pppppppuStack_d00 + -(long)iVar10);
          iStack_cf4 = iStack_cf4 + 1;
        } while (iStack_cf4 < (int)*(uint *)((long)pppppppuVar14 + 0xc));
      }
      else {
        iStack_cf4 = 0;
        if (0 < (int)*(uint *)((long)pppppppuVar14 + 0xc)) {
          do {
            iVar20 = iStack_cf4;
            pppppppuVar16 = pppppppuVar12;
            FUN_109b749a0(pppppppuVar14 + 0x14,pppppppuVar12,uVar3);
            uVar33 = *(uint *)(pppppppuVar14 + 1);
            if (uVar4 == 0) {
              if (0 < (int)uVar33) {
                lVar23 = 0;
                do {
                  *(byte *)((long)pppppppuVar30 + lVar23) =
                       abStack_4c0[*(byte *)((long)pppppppuVar12 + lVar23)];
                  lVar23 = lVar23 + 1;
                } while ((int)uVar33 != lVar23);
              }
            }
            else {
              pppppppuVar34 = pppppppuVar12;
              pppppppuVar32 = pppppppuVar30;
              if (1 < (int)uVar33) {
                pppppppuVar15 = pppppppuVar12;
                pppppppuVar28 = pppppppuVar30;
                do {
                  pppppppuVar34 = (uint *******)((long)pppppppuVar15 + 1);
                  pppppppuVar32 = (uint *******)((long)pppppppuVar28 + 3);
                  uVar29 = (long)pppppppuVar28 + 6;
                  *(uint *)pppppppuVar28 =
                       *(uint *)((long)pppppppuVar14 + ((ulong)*(byte *)pppppppuVar15 + 0x38) * 4);
                  pppppppuVar15 = pppppppuVar34;
                  pppppppuVar28 = pppppppuVar32;
                } while (uVar29 < (ulong)((long)pppppppuVar30 + (long)(int)uVar33 * 3));
              }
              puVar2 = (uint *)((long)pppppppuVar14 + ((ulong)*(byte *)pppppppuVar34 + 0x38) * 4);
              uVar9 = *(undefined1 *)((long)puVar2 + 2);
              *(short *)pppppppuVar32 = (short)*puVar2;
              *(undefined1 *)((long)pppppppuVar32 + 2) = uVar9;
              iVar20 = iStack_cf4;
            }
            iStack_cf4 = iVar20 + 1;
            pppppppuVar30 = (uint *******)((long)pppppppuVar30 + (long)iVar13);
          } while (iStack_cf4 < (int)*(uint *)((long)pppppppuVar14 + 0xc));
        }
      }
    }
  }
  else if (uVar33 == 0x18) {
    if (0 < (int)*(uint *)((long)pppppppuVar14 + 0xc)) {
      iVar20 = 0;
      do {
        pppppppuVar16 = pppppppuVar15;
        if (uVar4 != 0) {
          pppppppuVar16 = pppppppuVar30;
        }
        FUN_109b749a0(pppppppuVar14 + 0x14,pppppppuVar16,uVar3);
        if (uVar4 == 0) {
          uVar17 = 2;
          if (*(uint *)(pppppppuVar14 + 2) != 3) {
            uVar17 = 0;
          }
          pppppppuVar16 = (uint *******)0x0;
          func_0x000109b81abc(pppppppuVar15,0,pppppppuVar30,0,
                              (ulong)*(uint *)(pppppppuVar14 + 1) | 0x100000000,uVar17);
        }
        else if (*(uint *)(pppppppuVar14 + 2) == 3) {
          pppppppuVar16 = (uint *******)0x0;
          func_0x000109b81d88(pppppppuVar30,0,pppppppuVar30,0,
                              (ulong)*(uint *)(pppppppuVar14 + 1) | 0x100000000);
        }
        iVar20 = iVar20 + 1;
        pppppppuVar30 = (uint *******)((long)pppppppuVar30 + (long)iVar13);
      } while (iVar20 < (int)*(uint *)((long)pppppppuVar14 + 0xc));
    }
  }
  else {
    if (uVar33 != 0x20) goto LAB_109b7ba1c;
    iStack_cf4 = 0;
    if (0 < (int)*(uint *)((long)pppppppuVar14 + 0xc)) {
      do {
        FUN_109b749a0(pppppppuVar14 + 0x14,(long)pppppppuVar12 + 3,uVar3);
        uVar17 = 2;
        if (*(uint *)(pppppppuVar14 + 2) != 3) {
          uVar17 = 0;
        }
        pppppppuVar16 = (uint *******)0x0;
        if (uVar4 == 0) {
          func_0x000109b81bd4((uint *)((long)pppppppuVar12 + 4),0,pppppppuVar30,0,
                              (ulong)*(uint *)(pppppppuVar14 + 1) | 0x100000000,uVar17);
        }
        else {
          func_0x000109b81c5c();
        }
        iStack_cf4 = iStack_cf4 + 1;
        pppppppuVar30 = (uint *******)((long)pppppppuVar30 + (long)iVar13);
      } while (iStack_cf4 < (int)*(uint *)((long)pppppppuVar14 + 0xc));
    }
  }
LAB_109b7ba18:
  pppppppuVar32 = (uint *******)0x1;
LAB_109b7ba1c:
  while( true ) {
    if ((pppppppuStack_cf0 != pppppppuStack_d38) && (pppppppuStack_cf0 != (uint *******)0x0)) {
      __ZdaPv();
    }
    pppppppuVar14 = pppppppuStack_8d8;
    if ((pppppppuStack_8d8 != pppppppuStack_d30) && (pppppppuStack_8d8 != (uint *******)0x0)) {
      __ZdaPv();
    }
LAB_109b7b2e4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c0) break;
    ___stack_chk_fail();
    if ((pppppppuStack_8d8 != pppppppuStack_d30) && (pppppppuStack_8d8 != (uint *******)0x0)) {
      __ZdaPv();
    }
    do {
      __Unwind_Resume(pppppppuVar14);
    } while ((int)pppppppuVar16 == 0);
    ___cxa_begin_catch(pppppppuVar14);
    ___cxa_end_catch();
LAB_109b7bab0:
    pppppppuVar32 = (uint *******)0x0;
  }
  return pppppppuVar32;
}



/* Entry: 109b7b16c; end: 109b7bad7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_109b7b16c(uint *******param_1,uint *******param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *******pppppppuVar12;
  uint *******pppppppuVar13;
  long lVar14;
  uint ******ppppppuVar15;
  uint ******ppppppuVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint ******ppppppuVar20;
  byte *pbVar21;
  int iVar22;
  byte *pbVar23;
  uint *******pppppppuVar24;
  ulong uVar25;
  uint *******pppppppuVar26;
  ulong uVar27;
  undefined4 uVar28;
  uint *******pppppppuVar29;
  uint uVar30;
  undefined8 uVar31;
  uint *******pppppppuVar32;
  uint uVar33;
  uint *******pppppppuStack_9e8;
  uint *******pppppppuStack_9e0;
  uint *******pppppppuStack_9b0;
  int iStack_9a4;
  uint *******pppppppuStack_9a0;
  uint *******pppppppuStack_998;
  uint ******appppppuStack_990 [129];
  uint *******pppppppuStack_588;
  uint *******pppppppuStack_580;
  uint ******appppppuStack_578 [129];
  byte abStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(uint *)(param_1 + 1);
  uVar30 = *(uint *)(param_1 + 0x9c);
  iVar17 = uVar30 * uVar9;
  iVar22 = iVar17 + 0xe;
  if (-8 < iVar17) {
    iVar22 = iVar17 + 7;
  }
  uVar4 = *(uint *)param_2 & 0xff8;
  iVar17 = 3;
  if (uVar4 == 0) {
    iVar17 = 1;
  }
  uVar33 = *(uint *)((long)param_1 + 0x4e4);
  if (((int)uVar33 < 0) || (*(char *)(param_1 + 0x1b) != '\x01')) {
    uVar31 = 0;
    goto LAB_109b7b2e4;
  }
  pppppppuVar26 = (uint *******)param_2[2];
  ppppppuVar20 = param_2[10];
  uVar3 = (iVar22 >> 3) + 1U & 0xfffffffe;
  pppppppuVar29 = (uint *******)(long)(int)(uVar3 + 0x20);
  pppppppuStack_9e0 = appppppuStack_578;
  pppppppuStack_588 = pppppppuStack_9e0;
  if (0x408 < uVar3 + 0x20) {
    pppppppuVar32 = pppppppuVar29;
    pppppppuStack_588 = pppppppuStack_9e0;
    __Znam();
    pppppppuStack_588 = pppppppuVar32;
  }
  pppppppuVar12 = pppppppuStack_588;
  pppppppuVar32 = (uint *******)((long)(int)uVar9 * 3 + 0x20);
  pppppppuStack_9e8 = appppppuStack_990;
  pppppppuVar13 = pppppppuStack_9e8;
  pppppppuStack_580 = pppppppuVar29;
  if (0x408 < (uint)pppppppuVar32) {
    pppppppuVar13 = pppppppuVar32;
    pppppppuStack_9a0 = pppppppuStack_9e8;
    __Znam();
  }
  if (((uVar4 == 0) && (*(uint *)((long)param_1 + 0x4ec) == 1)) && (uVar30 != 0x1f)) {
    lVar14 = 1L << ((ulong)uVar30 & 0x3f);
    pbVar21 = (byte *)((long)param_1 + 0xe2);
    pbVar23 = abStack_170;
    do {
      *pbVar23 = (byte)((uint)pbVar21[-1] * 0x2591 + (uint)pbVar21[-2] * 0x74c +
                        (uint)*pbVar21 * 0x1323 + 0x2000 >> 0xe);
      lVar14 = lVar14 + -1;
      pbVar21 = pbVar21 + 4;
      pbVar23 = pbVar23 + 1;
    } while (lVar14 != 0);
  }
  if (param_1[0x19] == (uint ******)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(uint *)(param_1 + 0x1a);
    iVar22 = 0;
    if (uVar18 != 0) {
      iVar22 = (int)uVar33 / (int)uVar18;
    }
    uVar18 = iVar22 * uVar18;
    uVar33 = uVar33 - uVar18;
  }
  uVar31 = 0;
  ppppppuVar16 = (uint ******)((long)param_1[0x16] + (ulong)uVar33);
  param_1[0x18] = ppppppuVar16;
  *(uint *)((long)param_1 + 0xd4) = uVar18;
  iVar22 = (int)ppppppuVar20;
  pppppppuStack_9a0 = pppppppuVar13;
  pppppppuStack_998 = pppppppuVar32;
  if ((int)uVar30 < 0x18) {
    if (uVar30 == 1) {
      if (*(uint *)(param_1 + 2) == 2) {
        iVar17 = uVar9 + 0xe;
        if (-8 < (int)uVar9) {
          iVar17 = uVar9 + 7;
        }
        pppppppuVar29 = (uint *******)((long)pppppppuVar12 + (long)(iVar17 >> 3));
        iStack_9a4 = 0;
        pppppppuVar32 = pppppppuVar12;
        do {
          do {
            lVar14 = (long)pppppppuVar29 - (long)pppppppuVar32;
            uVar30 = (uint)lVar14;
            if ((int)uVar30 < 2) {
              uVar30 = 1;
            }
            uVar25 = (ulong)uVar30;
            pppppppuVar13 = pppppppuVar32;
            do {
              ppppppuVar20 = param_1[0x18];
              if (param_1[0x17] <= ppppppuVar20) {
                (*(code *)param_1[0x14][5])(param_1 + 0x14);
                ppppppuVar20 = param_1[0x18];
              }
              ppppppuVar16 = (uint ******)((long)ppppppuVar20 + 1);
              cVar7 = *(char *)ppppppuVar20;
              param_1[0x18] = ppppppuVar16;
              if (cVar7 == -0x80) {
                if (param_1[0x17] <= ppppppuVar16) {
                  (*(code *)param_1[0x14][5])(param_1 + 0x14);
                  ppppppuVar16 = param_1[0x18];
                }
                uVar27 = (ulong)*(byte *)ppppppuVar16;
                param_1[0x18] = (uint ******)((long)ppppppuVar16 + 1);
                if (uVar27 != 0) {
                  ppppppuVar16 = (uint ******)((long)ppppppuVar16 + 1);
                  if (param_1[0x17] <= ppppppuVar16) {
                    (*(code *)param_1[0x14][5])(param_1 + 0x14);
                    ppppppuVar16 = param_1[0x18];
                  }
                  param_2 = (uint *******)(ulong)*(byte *)ppppppuVar16;
                  param_1[0x18] = (uint ******)((long)ppppppuVar16 + 1);
                  if (lVar14 <= (long)uVar27) goto LAB_109b7bab0;
                  _memset(pppppppuVar13,param_2,uVar27 + 1);
                  pppppppuVar32 = (uint *******)((long)pppppppuVar13 + 1 + uVar27);
                  goto LAB_109b7b7d0;
                }
              }
              *(char *)pppppppuVar13 = cVar7;
              lVar14 = lVar14 + -1;
              uVar25 = uVar25 - 1;
              pppppppuVar13 = (uint *******)((long)pppppppuVar13 + 1);
            } while (uVar25 != 0);
            pppppppuVar32 = (uint *******)((long)pppppppuVar32 + (ulong)uVar30);
LAB_109b7b7d0:
          } while (pppppppuVar32 < pppppppuVar29);
          if (uVar4 == 0) {
            param_2 = pppppppuVar12;
            func_0x000109b823c0(pppppppuVar26,pppppppuVar12,*(uint *)(param_1 + 1),abStack_170);
          }
          else {
            param_2 = pppppppuVar12;
            func_0x000109b822f0(pppppppuVar26,pppppppuVar12,*(uint *)(param_1 + 1),param_1 + 0x1c);
          }
          pppppppuVar26 = (uint *******)((long)pppppppuVar26 + (long)iVar22);
          iStack_9a4 = iStack_9a4 + 1;
          pppppppuVar32 = pppppppuVar12;
        } while (iStack_9a4 < (int)*(uint *)((long)param_1 + 0xc));
      }
      else if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
        iVar17 = 0;
        do {
          FUN_109b749a0(param_1 + 0x14,pppppppuVar12,uVar3);
          if (uVar4 == 0) {
            param_2 = pppppppuVar12;
            func_0x000109b823c0(pppppppuVar26,pppppppuVar12,*(uint *)(param_1 + 1),abStack_170);
          }
          else {
            param_2 = pppppppuVar12;
            func_0x000109b822f0(pppppppuVar26,pppppppuVar12,*(uint *)(param_1 + 1),param_1 + 0x1c);
          }
          iVar17 = iVar17 + 1;
          pppppppuVar26 = (uint *******)((long)pppppppuVar26 + (long)iVar22);
        } while (iVar17 < (int)*(uint *)((long)param_1 + 0xc));
      }
    }
    else {
      if (uVar30 != 8) goto LAB_109b7ba1c;
      if (*(uint *)(param_1 + 2) == 2) {
        iVar10 = uVar9 * iVar17;
        pppppppuStack_9b0 = (uint *******)((long)pppppppuVar26 + (long)iVar10);
        iStack_9a4 = 0;
        do {
          do {
            pppppppuVar29 = pppppppuVar12;
            iVar19 = (int)pppppppuStack_9b0 - (int)pppppppuVar26;
            do {
              ppppppuVar15 = ppppppuVar16;
              if (param_1[0x17] <= ppppppuVar16) {
                (*(code *)param_1[0x14][5])(param_1 + 0x14);
                ppppppuVar15 = param_1[0x18];
              }
              ppppppuVar16 = (uint ******)((long)ppppppuVar15 + 1);
              bVar5 = *(byte *)ppppppuVar15;
              param_1[0x18] = ppppppuVar16;
              if (bVar5 == 0x80) {
                ppppppuVar15 = ppppppuVar16;
                if (param_1[0x17] <= ppppppuVar16) {
                  (*(code *)param_1[0x14][5])(param_1 + 0x14);
                  ppppppuVar15 = param_1[0x18];
                }
                ppppppuVar16 = (uint ******)((long)ppppppuVar15 + 1);
                bVar6 = *(byte *)ppppppuVar15;
                uVar30 = (uint)bVar6;
                param_1[0x18] = ppppppuVar16;
                pppppppuVar32 = pppppppuVar29;
                if (bVar6 != 0) goto LAB_109b7b404;
              }
              pppppppuVar32 = (uint *******)((long)pppppppuVar29 + 1);
              *(byte *)pppppppuVar29 = bVar5;
              iVar11 = iVar19 - iVar17;
              bVar1 = iVar17 <= iVar19;
              pppppppuVar29 = pppppppuVar32;
              iVar19 = iVar11;
            } while (iVar11 != 0 && bVar1);
            uVar30 = 0;
LAB_109b7b404:
            iVar19 = (int)((long)pppppppuVar32 - (long)pppppppuVar12);
            if (0 < iVar19) {
              if (uVar4 == 0) {
                uVar25 = (long)pppppppuVar32 - (long)pppppppuVar12 & 0x7fffffff;
                pppppppuVar29 = pppppppuVar12;
                pppppppuVar32 = pppppppuVar26;
                do {
                  *(byte *)pppppppuVar32 = abStack_170[*(byte *)pppppppuVar29];
                  uVar25 = uVar25 - 1;
                  pppppppuVar29 = (uint *******)((long)pppppppuVar29 + 1);
                  pppppppuVar32 = (uint *******)((long)pppppppuVar32 + 1);
                } while (uVar25 != 0);
              }
              else {
                pppppppuVar32 = pppppppuVar12;
                pppppppuVar29 = pppppppuVar26;
                if (iVar19 != 1) {
                  pppppppuVar13 = pppppppuVar12;
                  pppppppuVar24 = pppppppuVar26;
                  do {
                    pppppppuVar32 = (uint *******)((long)pppppppuVar13 + 1);
                    pppppppuVar29 = (uint *******)((long)pppppppuVar24 + 3);
                    uVar25 = (long)pppppppuVar24 + 6;
                    *(uint *)pppppppuVar24 =
                         *(uint *)((long)param_1 + ((ulong)*(byte *)pppppppuVar13 + 0x38) * 4);
                    pppppppuVar13 = pppppppuVar32;
                    pppppppuVar24 = pppppppuVar29;
                  } while (uVar25 < (long)pppppppuVar26 + (ulong)(uint)(iVar19 * 3));
                }
                puVar2 = (uint *)((long)param_1 + ((ulong)*(byte *)pppppppuVar32 + 0x38) * 4);
                uVar8 = *(undefined1 *)((long)puVar2 + 2);
                *(short *)pppppppuVar29 = (short)*puVar2;
                *(undefined1 *)((long)pppppppuVar29 + 2) = uVar8;
              }
              pppppppuVar26 = (uint *******)((long)pppppppuVar26 + (ulong)(uint)(iVar17 * iVar19));
              ppppppuVar16 = param_1[0x18];
            }
            if (uVar30 != 0) {
              if (param_1[0x17] <= ppppppuVar16) {
                (*(code *)param_1[0x14][5])(param_1 + 0x14);
                ppppppuVar16 = param_1[0x18];
              }
              uVar25 = (ulong)(iVar17 + iVar17 * uVar30);
              bVar5 = *(byte *)ppppppuVar16;
              param_1[0x18] = (uint ******)((long)ppppppuVar16 + 1);
              uVar30 = *(uint *)((long)param_1 + 0xc);
              if (uVar4 == 0) {
                bVar5 = abStack_170[bVar5];
                pppppppuVar29 = pppppppuStack_9b0;
                pppppppuVar32 = pppppppuVar26;
                do {
                  pppppppuVar13 = pppppppuVar29;
                  if ((uint *******)((long)pppppppuVar32 + uVar25) <= pppppppuVar29) {
                    pppppppuVar13 = (uint *******)((long)pppppppuVar32 + uVar25);
                  }
                  pppppppuVar26 = pppppppuVar32;
                  if (pppppppuVar32 < pppppppuVar13) {
                    param_2 = (uint *******)(ulong)bVar5;
                    _memset(pppppppuVar32,(uint *******)(ulong)bVar5,
                            (long)pppppppuVar13 - (long)pppppppuVar32);
                    pppppppuVar26 = pppppppuVar13;
                    pppppppuVar29 = pppppppuStack_9b0;
                  }
                  if (pppppppuVar29 <= pppppppuVar26) {
                    pppppppuVar29 = (uint *******)((long)pppppppuVar29 + (long)iVar22);
                    pppppppuVar26 = (uint *******)((long)pppppppuVar29 + -(long)iVar10);
                    iStack_9a4 = iStack_9a4 + 1;
                    pppppppuStack_9b0 = pppppppuVar29;
                    if ((int)uVar30 <= iStack_9a4) break;
                  }
                  uVar9 = (int)uVar25 + ((int)pppppppuVar32 - (int)pppppppuVar13);
                  uVar25 = (ulong)uVar9;
                  pppppppuVar32 = pppppppuVar26;
                } while (0 < (int)uVar9);
              }
              else {
                param_2 = (uint *******)&pppppppuStack_9b0;
                func_0x000109b82164(pppppppuVar26,param_2,ppppppuVar20,iVar10,&iStack_9a4,uVar30,
                                    uVar25);
              }
              if ((int)*(uint *)((long)param_1 + 0xc) <= iStack_9a4) goto LAB_109b7ba18;
              ppppppuVar16 = param_1[0x18];
            }
            pppppppuVar29 = pppppppuStack_9b0;
          } while (pppppppuVar26 != pppppppuStack_9b0);
          ppppppuVar15 = ppppppuVar16;
          if (param_1[0x17] <= ppppppuVar16) {
            (*(code *)param_1[0x14][5])(param_1 + 0x14);
            ppppppuVar15 = param_1[0x18];
          }
          ppppppuVar16 = (uint ******)((long)ppppppuVar15 + 1);
          bVar5 = *(byte *)ppppppuVar15;
          param_1[0x18] = ppppppuVar16;
          if (bVar5 != 0) goto LAB_109b7bab0;
          pppppppuStack_9b0 = (uint *******)((long)pppppppuVar29 + (long)iVar22);
          pppppppuVar26 = (uint *******)((long)pppppppuStack_9b0 + -(long)iVar10);
          iStack_9a4 = iStack_9a4 + 1;
        } while (iStack_9a4 < (int)*(uint *)((long)param_1 + 0xc));
      }
      else {
        iStack_9a4 = 0;
        if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
          do {
            iVar17 = iStack_9a4;
            param_2 = pppppppuVar12;
            FUN_109b749a0(param_1 + 0x14,pppppppuVar12,uVar3);
            uVar30 = *(uint *)(param_1 + 1);
            if (uVar4 == 0) {
              if (0 < (int)uVar30) {
                lVar14 = 0;
                do {
                  *(byte *)((long)pppppppuVar26 + lVar14) =
                       abStack_170[*(byte *)((long)pppppppuVar12 + lVar14)];
                  lVar14 = lVar14 + 1;
                } while ((int)uVar30 != lVar14);
              }
            }
            else {
              pppppppuVar32 = pppppppuVar12;
              pppppppuVar29 = pppppppuVar26;
              if (1 < (int)uVar30) {
                pppppppuVar13 = pppppppuVar12;
                pppppppuVar24 = pppppppuVar26;
                do {
                  pppppppuVar32 = (uint *******)((long)pppppppuVar13 + 1);
                  pppppppuVar29 = (uint *******)((long)pppppppuVar24 + 3);
                  uVar25 = (long)pppppppuVar24 + 6;
                  *(uint *)pppppppuVar24 =
                       *(uint *)((long)param_1 + ((ulong)*(byte *)pppppppuVar13 + 0x38) * 4);
                  pppppppuVar13 = pppppppuVar32;
                  pppppppuVar24 = pppppppuVar29;
                } while (uVar25 < (ulong)((long)pppppppuVar26 + (long)(int)uVar30 * 3));
              }
              puVar2 = (uint *)((long)param_1 + ((ulong)*(byte *)pppppppuVar32 + 0x38) * 4);
              uVar8 = *(undefined1 *)((long)puVar2 + 2);
              *(short *)pppppppuVar29 = (short)*puVar2;
              *(undefined1 *)((long)pppppppuVar29 + 2) = uVar8;
              iVar17 = iStack_9a4;
            }
            iStack_9a4 = iVar17 + 1;
            pppppppuVar26 = (uint *******)((long)pppppppuVar26 + (long)iVar22);
          } while (iStack_9a4 < (int)*(uint *)((long)param_1 + 0xc));
        }
      }
    }
  }
  else if (uVar30 == 0x18) {
    if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
      iVar17 = 0;
      do {
        param_2 = pppppppuVar13;
        if (uVar4 != 0) {
          param_2 = pppppppuVar26;
        }
        FUN_109b749a0(param_1 + 0x14,param_2,uVar3);
        if (uVar4 == 0) {
          uVar28 = 2;
          if (*(uint *)(param_1 + 2) != 3) {
            uVar28 = 0;
          }
          param_2 = (uint *******)0x0;
          func_0x000109b81abc(pppppppuVar13,0,pppppppuVar26,0,
                              (ulong)*(uint *)(param_1 + 1) | 0x100000000,uVar28);
        }
        else if (*(uint *)(param_1 + 2) == 3) {
          param_2 = (uint *******)0x0;
          func_0x000109b81d88(pppppppuVar26,0,pppppppuVar26,0,
                              (ulong)*(uint *)(param_1 + 1) | 0x100000000);
        }
        iVar17 = iVar17 + 1;
        pppppppuVar26 = (uint *******)((long)pppppppuVar26 + (long)iVar22);
      } while (iVar17 < (int)*(uint *)((long)param_1 + 0xc));
    }
  }
  else {
    if (uVar30 != 0x20) goto LAB_109b7ba1c;
    iStack_9a4 = 0;
    if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
      do {
        FUN_109b749a0(param_1 + 0x14,(long)pppppppuVar12 + 3,uVar3);
        uVar28 = 2;
        if (*(uint *)(param_1 + 2) != 3) {
          uVar28 = 0;
        }
        param_2 = (uint *******)0x0;
        if (uVar4 == 0) {
          func_0x000109b81bd4((uint *)((long)pppppppuVar12 + 4),0,pppppppuVar26,0,
                              (ulong)*(uint *)(param_1 + 1) | 0x100000000,uVar28);
        }
        else {
          func_0x000109b81c5c();
        }
        iStack_9a4 = iStack_9a4 + 1;
        pppppppuVar26 = (uint *******)((long)pppppppuVar26 + (long)iVar22);
      } while (iStack_9a4 < (int)*(uint *)((long)param_1 + 0xc));
    }
  }
LAB_109b7ba18:
  uVar31 = 1;
LAB_109b7ba1c:
  while( true ) {
    if ((pppppppuStack_9a0 != pppppppuStack_9e8) && (pppppppuStack_9a0 != (uint *******)0x0)) {
      __ZdaPv();
    }
    param_1 = pppppppuStack_588;
    if ((pppppppuStack_588 != pppppppuStack_9e0) && (pppppppuStack_588 != (uint *******)0x0)) {
      __ZdaPv();
    }
LAB_109b7b2e4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
    if ((pppppppuStack_588 != pppppppuStack_9e0) && (pppppppuStack_588 != (uint *******)0x0)) {
      __ZdaPv();
    }
    do {
      __Unwind_Resume(param_1);
    } while ((int)param_2 == 0);
    ___cxa_begin_catch(param_1);
    ___cxa_end_catch();
LAB_109b7bab0:
    uVar31 = 0;
  }
  return uVar31;
}



/* Entry: 109b7bad8; end: 109b7bb2f;  */

void FUN_109b7bad8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2aefc(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2af04(&lStack_30);
  return;
}



/* Entry: 109b7bb30; end: 109b7bb33;  */

undefined8 * FUN_109b7bb30(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b7bb34; end: 109b7bb47;  */

void FUN_109b7bb34(void)

{
  FUN_109b76b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b7bb48; end: 109b7bc9b;  */

undefined1 * FUN_109b7bb48(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  pppuVar5 = &ppuStack_80;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = *param_2;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0x8000;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_80 = &PTR_FUN_110b28ab0;
  uStack_78 = 0;
  FUN_109b74de8(&ppuStack_80,param_1 + 0x18);
  if ((int)pppuVar5 != 0) {
    FUN_109b74f58(&ppuStack_80,&UNK_10f5a13c2,4);
    FUN_109b751a0(&ppuStack_80,uVar3);
    FUN_109b751a0(&ppuStack_80,(ulong)uVar2);
    iVar1 = (uVar4 >> 3 & 0x1ff) + 1;
    FUN_109b751a0(&ppuStack_80,iVar1 * 8);
    uVar3 = iVar1 * uVar3 + 1 & 0xfffffffe;
    FUN_109b751a0(&ppuStack_80,uVar3 * uVar2);
    FUN_109b751a0(&ppuStack_80,1);
    FUN_109b751a0(&ppuStack_80,0);
    FUN_109b751a0(&ppuStack_80,0);
    if (0 < (int)uVar2) {
      uVar6 = 0;
      do {
        FUN_109b74f58(&ppuStack_80,*(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * uVar6,
                      uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    func_0x000109b74ec0(&ppuStack_80);
  }
  FUN_109b74ca0(&ppuStack_80);
  return (undefined1 *)pppuVar5;
}



/* Entry: 109b7bc9c; end: 109b7bca3;  */

void FUN_109b7bc9c(void)

{
  return;
}



/* Entry: 109b7bca4; end: 109b7bcdf;  */

void FUN_109b7bca4(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b7bce0; end: 109b7bce7;  */

void FUN_109b7bce0(void)

{
  return;
}



/* Entry: 109b7bce8; end: 109b7bd23;  */

void FUN_109b7bce8(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7bd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b7bd24; end: 109b7bd27;  */

undefined8 * FUN_109b7bd24(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b7bd28; end: 109b7bd3b;  */

void FUN_109b7bd28(void)

{
  FUN_109b76b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b7bd3c; end: 109b7bd93;  */

void FUN_109b7bd3c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2af08(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2af0c(&lStack_30);
  return;
}



/* Entry: 109b7bd94; end: 109b7bd9f;  */

bool FUN_109b7bd94(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xfffffffd) == 0;
}



/* Entry: 109b7bda0; end: 109b7bdf3;  */

/* WARNING: Possible PIC construction at 0x000109b7bdd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109b7bddc) */

void FUN_109b7bda0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_109b74fe4();
  FUN_109b74fe4(param_1,param_3);
  puVar1 = (undefined4 *)param_1[3];
  if ((undefined1 *)((long)puVar1 + 3U) < (undefined1 *)param_1[2]) {
    *puVar1 = (int)param_4;
    param_1[3] = (long)(puVar1 + 1);
    if (puVar1 + 1 == (undefined4 *)param_1[2]) {
LAB_109b75170:
                    /* WARNING: Could not recover jumptable at 0x000109b75184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1);
      return;
    }
  }
  else {
    param_1[3] = (long)((long)puVar1 + 1);
    *(char *)puVar1 = (char)param_4;
    puVar2 = (undefined1 *)param_1[3];
    if ((undefined1 *)param_1[2] <= puVar2) {
      (**(code **)(*param_1 + 0x28))(param_1);
      puVar2 = (undefined1 *)param_1[3];
    }
    param_1[3] = (long)(puVar2 + 1);
    *puVar2 = (char)((ulong)param_4 >> 8);
    puVar2 = (undefined1 *)param_1[3];
    if ((undefined1 *)param_1[2] <= puVar2) {
      (**(code **)(*param_1 + 0x28))(param_1);
      puVar2 = (undefined1 *)param_1[3];
    }
    param_1[3] = (long)(puVar2 + 1);
    *puVar2 = (char)((ulong)param_4 >> 0x10);
    puVar2 = (undefined1 *)param_1[3];
    if ((undefined1 *)param_1[2] <= puVar2) {
      (**(code **)(*param_1 + 0x28))(param_1);
      puVar2 = (undefined1 *)param_1[3];
    }
    param_1[3] = (long)(puVar2 + 1);
    *puVar2 = (char)((ulong)param_4 >> 0x18);
    if ((ulong)param_1[2] <= (ulong)param_1[3]) goto LAB_109b75170;
  }
  return;
}



/* Entry: 109b7bdf4; end: 109b7c597;  */

undefined *** FUN_109b7bdf4(undefined ***param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined2 *puVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  ulong uVar19;
  bool bVar20;
  int *piVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  undefined ***pppuVar27;
  undefined **ppuVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  short *psStack_d40;
  int *piStack_d38;
  short *psStack_d18;
  short asStack_d08 [520];
  int *piStack_8f8;
  long lStack_8f0;
  int aiStack_8e8 [264];
  undefined **ppuStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  int iStack_4a4;
  undefined8 uStack_4a0;
  undefined1 uStack_498;
  undefined **ppuStack_490;
  int *piStack_488;
  int *piStack_480;
  int aiStack_478 [258];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *param_2;
  if ((uVar6 & 5) != 0) {
    pppuVar27 = (undefined ***)0x0;
    goto LAB_109b7c4b4;
  }
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = (ulong)uVar4;
  uStack_4a0 = 0;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  uStack_4a8 = 0x8000;
  uStack_498 = 0;
  ppuStack_490 = (undefined **)0x0;
  uStack_4c0 = 0;
  ppuStack_4c8 = &PTR_FUN_110b28a48;
  ppuVar28 = param_1[5];
  if (ppuVar28 == (undefined **)0x0) {
    pppuVar27 = &ppuStack_4c8;
    func_0x000109b74de8(pppuVar27,param_1 + 3);
    if ((int)pppuVar27 != 0) goto LAB_109b7bec0;
    pppuVar27 = (undefined ***)0x0;
  }
  else {
    func_0x000109b74ec0(&ppuStack_4c8);
    (*(code *)ppuStack_4c8[7])(&ppuStack_4c8);
    uStack_498 = 1;
    iStack_4a4 = 0;
    uStack_4b0 = uStack_4c0;
    ppuStack_490 = ppuVar28;
LAB_109b7bec0:
    uVar11 = uVar6 >> 3 & 0x1ff;
    iVar1 = uVar11 + 1;
    iVar32 = iVar1 * uVar4 << (ulong)(uVar6 >> 1 & 1);
    uVar9 = 0;
    if (iVar32 != 0) {
      uVar9 = 0x2000 / iVar32;
    }
    if ((int)uVar9 < 2) {
      uVar9 = 1;
    }
    if ((int)uVar3 <= (int)uVar9) {
      uVar9 = uVar3;
    }
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = (int)(uVar3 + uVar9 + -1) / (int)uVar9;
    }
    uVar31 = (ulong)uVar10;
    if (param_1[5] != (undefined **)0x0) {
      func_0x000107c31950(param_1[5],
                          (long)(int)(iVar32 * uVar3 + uVar10 * 8) + 0x1ffU & 0xffffffffffffff00);
    }
    lVar29 = (long)(int)uVar10;
    piStack_d38 = aiStack_8e8;
    piStack_8f8 = piStack_d38;
    lStack_8f0 = lVar29;
    if (uVar10 < 0x109) {
      psStack_d18 = asStack_d08;
    }
    else {
      piVar18 = (int *)(lVar29 << 2);
      if ((int)uVar10 < 0) {
        piVar18 = (int *)0xffffffffffffffff;
      }
      __Znam();
      psStack_d18 = asStack_d08;
      piStack_8f8 = piVar18;
      if (0x208 < uVar10) {
        psStack_d18 = (short *)(lVar29 << 1);
        if (0x7fffffff < uVar10) {
          psStack_d18 = (short *)0xffffffffffffffff;
        }
        __Znam();
      }
    }
    psStack_d40 = asStack_d08;
    uVar23 = iVar32 + 0x20;
    piVar18 = aiStack_478;
    if (0x408 < uVar23) {
      piVar18 = (int *)(long)(int)uVar23;
      piStack_488 = aiStack_478;
      __Znam();
    }
    uVar6 = uVar6 & 2;
    iVar16 = 8;
    if (uVar6 != 0) {
      iVar16 = 0x10;
    }
    piStack_488 = piVar18;
    piStack_480 = (int *)(long)(int)uVar23;
    FUN_109b74f58(&ppuStack_4c8,&UNK_10e0360ac,4);
    func_0x000109b75084(&ppuStack_4c8,0);
    piVar15 = piStack_8f8;
    if ((int)uVar10 < 1) {
LAB_109b7c24c:
      iVar26 = *piVar15;
      uVar30 = (ulong)*psStack_d18;
    }
    else {
      uVar30 = 0;
      uVar23 = 0;
      uVar22 = uStack_4b0;
      uVar24 = uStack_4c0;
      do {
        uVar2 = uVar23 + uVar9;
        if ((int)uVar3 <= (int)(uVar23 + uVar9)) {
          uVar2 = uVar3;
        }
        iVar26 = (int)uVar22 - (int)uVar24;
        iVar25 = iStack_4a4 + iVar26;
        piVar15[uVar30] = iVar25;
        if ((int)uVar23 < (int)uVar2) {
          lVar29 = (long)(int)uVar23;
          do {
            if (uVar11 == 0) {
              piVar15 = (int *)(*(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * lVar29);
            }
            else {
              piVar15 = piVar18;
              if (uVar11 == 2) {
                puVar14 = (undefined2 *)
                          (*(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * lVar29);
                if (uVar6 == 0) {
                  func_0x000109b81d88(puVar14,0,piVar18,0,uVar5 | 0x100000000);
                }
                else {
                  uVar19 = uVar5;
                  piVar21 = piVar18 + 1;
                  if (0 < (int)uVar4) {
                    do {
                      uVar7 = puVar14[1];
                      uVar8 = puVar14[2];
                      *(undefined2 *)piVar21 = *puVar14;
                      *(undefined2 *)((long)piVar21 + -2) = uVar7;
                      *(undefined2 *)(piVar21 + -1) = uVar8;
                      puVar14 = puVar14 + 3;
                      piVar21 = (int *)((long)piVar21 + 6);
                      uVar23 = (int)uVar19 - 1;
                      uVar19 = (ulong)uVar23;
                    } while (uVar23 != 0);
                  }
                }
              }
              else if (uVar11 == 3) {
                if (uVar6 == 0) {
                  func_0x000109b81cd0();
                }
                else {
                  func_0x000109b81d2c(*(long *)(param_2 + 4) + **(long **)(param_2 + 0x12) * lVar29,
                                      0,piVar18,0,uVar5 | 0x100000000);
                }
              }
            }
            FUN_109b74f58(&ppuStack_4c8,piVar15,iVar32);
            lVar29 = lVar29 + 1;
          } while (uVar2 != (uint)lVar29);
          iVar25 = piStack_8f8[uVar30];
          iVar26 = (int)uStack_4b0 - (int)uStack_4c0;
          piVar15 = piStack_8f8;
          uVar22 = uStack_4b0;
          uVar24 = uStack_4c0;
          uVar23 = uVar2;
        }
        iVar26 = iStack_4a4 + iVar26;
        psStack_d18[uVar30] = (short)iVar26 - (short)iVar25;
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar31);
      if ((int)uVar10 < 3) {
        if (uVar10 != 2) goto LAB_109b7c24c;
        lVar29 = 0;
        bVar13 = true;
        do {
          bVar20 = bVar13;
          func_0x000109b75084(&ppuStack_4c8,piStack_8f8[lVar29]);
          lVar29 = 1;
          bVar13 = false;
        } while (bVar20);
        uVar30 = (ulong)((int)*psStack_d18 + (uint)(ushort)psStack_d18[1] * 0x10000);
      }
      else {
        lVar29 = 0;
        do {
          func_0x000109b75084(&ppuStack_4c8,*(undefined4 *)((long)piStack_8f8 + lVar29));
          lVar29 = lVar29 + 4;
        } while (uVar31 * 4 - lVar29 != 0);
        lVar29 = 0;
        uVar30 = (ulong)(uint)(iStack_4a4 + ((int)uStack_4b0 - (int)uStack_4c0));
        do {
          func_0x000109b74fe4(&ppuStack_4c8,(long)*(short *)((long)psStack_d18 + lVar29));
          lVar29 = lVar29 + 2;
        } while (uVar31 * 2 - lVar29 != 0);
      }
    }
    iVar25 = iStack_4a4;
    iVar32 = iVar16;
    if (uVar11 != 0) {
      iVar12 = (int)uStack_4b0;
      iVar32 = (int)uStack_4c0;
      func_0x000109b74fe4(&ppuStack_4c8,iVar16);
      func_0x000109b74fe4(&ppuStack_4c8,iVar16);
      func_0x000109b74fe4(&ppuStack_4c8,iVar16);
      iVar32 = iVar25 + (iVar12 - iVar32);
      if (iVar1 == 4) {
        func_0x000109b74fe4(&ppuStack_4c8,iVar16);
      }
    }
    iVar16 = iStack_4a4;
    iVar12 = (int)uStack_4b0;
    iVar25 = (int)uStack_4c0;
    func_0x000109b74fe4(&ppuStack_4c8,9);
    FUN_109b7bda0(&ppuStack_4c8,0x100,4,1,uVar5);
    FUN_109b7bda0(&ppuStack_4c8,0x101,4,1,uVar3);
    FUN_109b7bda0(&ppuStack_4c8,0x102,3,iVar1,iVar32);
    FUN_109b7bda0(&ppuStack_4c8,0x103,4,1,1);
    uVar17 = 1;
    if (uVar11 != 0) {
      uVar17 = 2;
    }
    FUN_109b7bda0(&ppuStack_4c8,0x106,3,1,uVar17);
    FUN_109b7bda0(&ppuStack_4c8,0x111,4,uVar31,iVar26);
    FUN_109b7bda0(&ppuStack_4c8,0x115,3,1,iVar1);
    FUN_109b7bda0(&ppuStack_4c8,0x116,4,1,uVar9);
    uVar17 = 3;
    if ((int)uVar10 < 2) {
      uVar17 = 4;
    }
    FUN_109b7bda0(&ppuStack_4c8,0x117,uVar17,uVar31,uVar30);
    func_0x000109b75084(&ppuStack_4c8,0);
    func_0x000109b74ec0(&ppuStack_4c8);
    iVar16 = iVar16 + (iVar12 - iVar25);
    if (param_1[5] == (undefined **)0x0) {
      ppuVar28 = (undefined **)"";
      if (param_1[3] != (undefined **)0x0) {
        ppuVar28 = param_1[3];
      }
      _fopen(ppuVar28,&UNK_10f563093);
      *piVar18 = iVar16;
      _fseek();
      _fwrite(piVar18,1,4,ppuVar28);
      _fclose(ppuVar28);
    }
    else {
      (*param_1[5])[4] = (char)iVar16;
      (*param_1[5])[5] = (char)((uint)iVar16 >> 8);
      (*param_1[5])[6] = (char)((uint)iVar16 >> 0x10);
      (*param_1[5])[7] = (char)((uint)iVar16 >> 0x18);
    }
    if ((piStack_488 != aiStack_478) && (piStack_488 != (int *)0x0)) {
      __ZdaPv();
    }
    if ((psStack_d18 != psStack_d40) && (psStack_d18 != (short *)0x0)) {
      __ZdaPv();
    }
    if ((piStack_8f8 != piStack_d38) && (piStack_8f8 != (int *)0x0)) {
      __ZdaPv();
    }
    pppuVar27 = (undefined ***)0x1;
  }
  param_1 = &ppuStack_4c8;
  FUN_109b74ca0(param_1);
LAB_109b7c4b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if ((piStack_8f8 != piStack_d38) && (piStack_8f8 != (int *)0x0)) {
      __ZdaPv();
    }
    FUN_109b74ca0(&ppuStack_4c8);
    __Unwind_Resume(param_1);
    return param_1;
  }
  return pppuVar27;
}



/* Entry: 109b7c598; end: 109b7c59f;  */

void FUN_109b7c598(void)

{
  return;
}



/* Entry: 109b7c5a0; end: 109b7c5db;  */

void FUN_109b7c5a0(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7c5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b7c5dc; end: 109b7c683;  */

undefined8 * FUN_109b7c5dc(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b29590;
  if (param_1[0x1b] != 0) {
    piVar6 = (int *)(param_1[0x1b] + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x14);
    }
  }
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  if (0 < *(int *)((long)param_1 + 0xa4)) {
    lVar4 = 0;
    lVar7 = param_1[0x1c];
    do {
      *(undefined4 *)(lVar7 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0xa4));
  }
  puVar5 = (undefined8 *)param_1[0x1d];
  if (puVar5 != param_1 + 0x1e && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  *param_1 = &PTR_FUN_110b28b18;
  if (param_1[0xe] != 0) {
    piVar6 = (int *)(param_1[0xe] + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 7);
    }
  }
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar4 = 0;
    lVar7 = param_1[0xf];
    do {
      *(undefined4 *)(lVar7 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x3c));
  }
  puVar5 = (undefined8 *)param_1[0x10];
  if (puVar5 != param_1 + 0x11 && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  lVar4 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  if (lVar4 != 0) {
    piVar6 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar6 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b7c684; end: 109b7c687;  */

undefined8 * FUN_109b7c684(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b29590;
  if (param_1[0x1b] != 0) {
    piVar6 = (int *)(param_1[0x1b] + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x14);
    }
  }
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  if (0 < *(int *)((long)param_1 + 0xa4)) {
    lVar4 = 0;
    lVar7 = param_1[0x1c];
    do {
      *(undefined4 *)(lVar7 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0xa4));
  }
  puVar5 = (undefined8 *)param_1[0x1d];
  if (puVar5 != param_1 + 0x1e && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  *param_1 = &PTR_FUN_110b28b18;
  if (param_1[0xe] != 0) {
    piVar6 = (int *)(param_1[0xe] + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(param_1 + 7);
    }
  }
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    lVar4 = 0;
    lVar7 = param_1[0xf];
    do {
      *(undefined4 *)(lVar7 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 0x3c));
  }
  puVar5 = (undefined8 *)param_1[0x10];
  if (puVar5 != param_1 + 0x11 && puVar5 != (undefined8 *)0x0) {
    _free(puVar5[-1]);
  }
  lVar4 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  if (lVar4 != 0) {
    piVar6 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar6 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b7c688; end: 109b7c69b;  */

void FUN_109b7c688(void)

{
  FUN_109b7c5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b7c69c; end: 109b7c6a3;  */

undefined8 FUN_109b7c69c(void)

{
  return 0x20;
}


